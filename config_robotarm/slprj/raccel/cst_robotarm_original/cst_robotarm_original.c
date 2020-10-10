#include "rt_logging_mmi.h"
#include "cst_robotarm_original_capi.h"
#include <math.h>
#include "cst_robotarm_original.h"
#include "cst_robotarm_original_private.h"
#include "cst_robotarm_original_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; extern boolean_T
gblExtModeStartPktReceived ; void raccelForceExtModeShutdown ( ) { if ( !
gblExtModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 3 , & stopRequested ) ; }
rtExtModeShutdown ( 3 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 4 ; const char_T
* gbl_raccel_Version = "9.3 (R2020a) 18-Nov-2019" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const char * gblSlvrJacPatternFileName =
"slprj//raccel//cst_robotarm_original//cst_robotarm_original_Jpattern.mat" ;
const int_T gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ;
extern rtInportTUtable * gblInportTUtables ; extern const char *
gblInportFileName ; extern void * gblAperiodicPartitionHitTimes ; const int_T
gblInportDataTypeIdx [ ] = { - 1 } ; const int_T gblInportDims [ ] = { - 1 }
; const int_T gblInportComplex [ ] = { - 1 } ; const int_T
gblInportInterpoFlag [ ] = { - 1 } ; const int_T gblInportContinuous [ ] = {
- 1 } ; int_T enableFcnCallFlag [ ] = { 1 , 1 , 1 , 1 } ; const char *
raccelLoadInputsAndAperiodicHitTimes ( const char * inportFileName , int *
matFileFormat ) { return rt_RapidReadInportsMatFile ( inportFileName ,
matFileFormat , 1 ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
B rtB ; X rtX ; MassMatrix rtMassMatrix ; DW rtDW ; ExtY rtY ; static
SimStruct model_S ; SimStruct * const rtS = & model_S ; void MdlInitialize (
void ) { boolean_T tmp ; int_T tmp_p ; char * tmp_e ; tmp = false ; if ( tmp
) { tmp_p = strcmp ( "ode23t" , ssGetSolverName ( rtS ) ) ; if ( tmp_p != 0 )
{ tmp_e = solver_mismatch_message ( "ode23t" , ssGetSolverName ( rtS ) ) ;
ssSetErrorStatus ( rtS , tmp_e ) ; } } rtX . i5qlpo3uju = rtP . Integrator_IC
; rtDW . oteri1his1 = rtP . DiscreteTransferFcn_InitialStates ; rtDW .
heujebxouj = ( rtInf ) ; rtDW . pvucch4vyc = ( rtInf ) ; tmp = false ; if (
tmp ) { tmp_p = strcmp ( "ode23t" , ssGetSolverName ( rtS ) ) ; if ( tmp_p !=
0 ) { tmp_e = solver_mismatch_message ( "ode23t" , ssGetSolverName ( rtS ) )
; ssSetErrorStatus ( rtS , tmp_e ) ; } } rtX . mhwbc1sinq = rtP .
Integrator_IC_ly0dldeo0z ; rtDW . cqhilrskhq = rtP .
DiscreteTransferFcn1_InitialStates ; rtDW . mq4uv2mjqx = ( rtInf ) ; rtDW .
kbgbop14eq = ( rtInf ) ; tmp = false ; if ( tmp ) { tmp_p = strcmp ( "ode23t"
, ssGetSolverName ( rtS ) ) ; if ( tmp_p != 0 ) { tmp_e =
solver_mismatch_message ( "ode23t" , ssGetSolverName ( rtS ) ) ;
ssSetErrorStatus ( rtS , tmp_e ) ; } } rtX . h45mkuq5bv = rtP .
Integrator_IC_ebg1cxvyio ; rtDW . o11cnuhibt = rtP .
DiscreteTransferFcn2_InitialStates ; rtDW . fb5swmqdt5 = ( rtInf ) ; rtDW .
llk4fj1ncu = ( rtInf ) ; tmp = false ; if ( tmp ) { tmp_p = strcmp ( "ode23t"
, ssGetSolverName ( rtS ) ) ; if ( tmp_p != 0 ) { tmp_e =
solver_mismatch_message ( "ode23t" , ssGetSolverName ( rtS ) ) ;
ssSetErrorStatus ( rtS , tmp_e ) ; } } rtX . nxxszasjmi = rtP .
Integrator_IC_a0g2shfbse ; rtDW . i5kbys15rw = rtP .
DiscreteTransferFcn3_InitialStates ; rtDW . henb0ohgwy = ( rtInf ) ; rtDW .
j3gsjqtsgp = ( rtInf ) ; tmp = false ; if ( tmp ) { tmp_p = strcmp ( "ode23t"
, ssGetSolverName ( rtS ) ) ; if ( tmp_p != 0 ) { tmp_e =
solver_mismatch_message ( "ode23t" , ssGetSolverName ( rtS ) ) ;
ssSetErrorStatus ( rtS , tmp_e ) ; } } rtX . jx11onf5nn = rtP .
Integrator_IC_l0arfvqiva ; rtDW . hlednh44vj = rtP .
DiscreteTransferFcn4_InitialStates ; rtDW . p3obvvkwm4 = ( rtInf ) ; rtDW .
ijbwqrc1eb = ( rtInf ) ; tmp = false ; if ( tmp ) { tmp_p = strcmp ( "ode23t"
, ssGetSolverName ( rtS ) ) ; if ( tmp_p != 0 ) { tmp_e =
solver_mismatch_message ( "ode23t" , ssGetSolverName ( rtS ) ) ;
ssSetErrorStatus ( rtS , tmp_e ) ; } } rtX . o3frtqftuu = rtP .
Integrator_IC_llwx032bli ; rtDW . gx3cfax52r = rtP .
DiscreteTransferFcn5_InitialStates ; rtDW . gjwwzw0tqq = ( rtInf ) ; rtDW .
ipcmf1bcmr = ( rtInf ) ; tmp = false ; if ( tmp ) { tmp_p = strcmp ( "ode23t"
, ssGetSolverName ( rtS ) ) ; if ( tmp_p != 0 ) { tmp_e =
solver_mismatch_message ( "ode23t" , ssGetSolverName ( rtS ) ) ;
ssSetErrorStatus ( rtS , tmp_e ) ; } } { static int_T modelMassMatrixIr [ 48
] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 ,
16 , 17 , 18 , 19 , 20 , 21 , 22 , 23 , 24 , 25 , 26 , 27 , 28 , 29 , 30 , 33
, 34 , 36 , 35 , 37 , 42 , 43 , 44 , 47 , 48 , 49 , 52 , 53 , 54 , 57 , 58 ,
59 } ; static int_T modelMassMatrixJc [ 63 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 ,
7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 ,
23 , 24 , 25 , 26 , 27 , 28 , 29 , 30 , 31 , 31 , 31 , 32 , 33 , 34 , 35 , 36
, 36 , 36 , 36 , 36 , 37 , 38 , 39 , 39 , 39 , 40 , 41 , 42 , 42 , 42 , 43 ,
44 , 45 , 45 , 45 , 46 , 47 , 48 , 48 , 48 } ; static real_T
modelMassMatrixPr [ 48 ] = { 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 } ; ( void ) memcpy ( rtMassMatrix . ir , modelMassMatrixIr , 48 * sizeof
( int_T ) ) ; ( void ) memcpy ( rtMassMatrix . jc , modelMassMatrixJc , 63 *
sizeof ( int_T ) ) ; ( void ) memcpy ( rtMassMatrix . pr , modelMassMatrixPr
, 48 * sizeof ( real_T ) ) ; } } void MdlStart ( void ) { NeslSimulator * tmp
; boolean_T tmp_p ; NeslSimulationData * tmp_e ; NeuDiagnosticManager *
diagnosticManager ; NeModelParameters modelParameters ; real_T tmp_i ;
NeuDiagnosticTree * diagnosticTree ; int32_T tmp_m ; char * msg ;
NeModelParameters modelParameters_p ; NeModelParameters modelParameters_e ;
NeModelParameters modelParameters_i ; NeModelParameters modelParameters_m ;
NeModelParameters modelParameters_g ; NeModelParameters modelParameters_j ;
NeModelParameters modelParameters_f ; NeModelParameters modelParameters_c ;
NeModelParameters modelParameters_k ; NeModelParameters modelParameters_b ;
NeModelParameters modelParameters_n ; NeModelParameters modelParameters_l ;
NeModelParameters modelParameters_d ; { void * * slioCatalogueAddr =
rt_slioCatalogueAddr ( ) ; void * r2 = ( NULL ) ; void * *
pOSigstreamManagerAddr = ( NULL ) ; const int maxErrorBufferSize = 16384 ;
char errMsgCreatingOSigstreamManager [ 16384 ] ; bool
errorCreatingOSigstreamManager = false ; const char *
errorAddingR2SharedResource = ( NULL ) ; * slioCatalogueAddr =
rtwGetNewSlioCatalogue ( rt_GetMatSigLogSelectorFileName ( ) ) ;
errorAddingR2SharedResource = rtwAddR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) , 1 ) ; if (
errorAddingR2SharedResource != ( NULL ) ) { rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = ( NULL ) ; ssSetErrorStatus ( rtS
, errorAddingR2SharedResource ) ; return ; } r2 = rtwGetR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ) ;
pOSigstreamManagerAddr = rt_GetOSigstreamManagerAddr ( ) ;
errorCreatingOSigstreamManager = rtwOSigstreamManagerCreateInstance (
rt_GetMatSigLogSelectorFileName ( ) , r2 , pOSigstreamManagerAddr ,
errMsgCreatingOSigstreamManager , maxErrorBufferSize ) ; if (
errorCreatingOSigstreamManager ) { * pOSigstreamManagerAddr = ( NULL ) ;
ssSetErrorStatus ( rtS , errMsgCreatingOSigstreamManager ) ; return ; } } {
bool externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( ) ; rtwISigstreamManagerGetInputIsInDatasetFormat (
pISigstreamManager , & externalInputIsInDatasetFormat ) ; if (
externalInputIsInDatasetFormat ) { } } { void * slioCatalogue =
rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
! slioCatalogue || ! rtwIsLoggingToFile ( slioCatalogue ) ) { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"tAngle" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "tAngle" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "cst_robotarm_original/6 DOF Robot Arm" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "tAngle" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. o4rzjlwnp0 . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"e3b06388-6c6d-4a7c-be43-4840575f4edf" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "rad" ) ; if ( rtDW . o4rzjlwnp0 . AQHandles
) { sdiSetSignalSampleTimeString ( rtDW . o4rzjlwnp0 . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW .
o4rzjlwnp0 . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . o4rzjlwnp0 . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . o4rzjlwnp0 . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . o4rzjlwnp0 . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "tAngle" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double"
, "rad" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"tAngle" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/6 DOF Robot Arm" , 1 , 0 , slioCatalogue , ( NULL ) ,
0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal (
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/6 DOF Robot Arm" , 1 , "tAngle" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . o4rzjlwnp0 . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "bAngle" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "bAngle" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_original/6 DOF Robot Arm" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "bAngle" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 1 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . ess5xfw1cg . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "593cf2f2-df01-48a8-934f-29c21645eae3" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "rad" ) ; if (
rtDW . ess5xfw1cg . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
ess5xfw1cg . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . ess5xfw1cg . AQHandles , ssGetTaskTime ( rtS , 1
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . ess5xfw1cg . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . ess5xfw1cg . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . ess5xfw1cg . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "bAngle" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double"
, "rad" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"bAngle" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/6 DOF Robot Arm" , 2 , 0 , slioCatalogue , ( NULL ) ,
0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal (
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/6 DOF Robot Arm" , 2 , "bAngle" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . ess5xfw1cg . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "fAngle" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "fAngle" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_original/6 DOF Robot Arm" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "fAngle" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 2 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . juqvuixxqk . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "d4480bd1-52ff-4758-a2fd-acb6f41d2843" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "rad" ) ; if (
rtDW . juqvuixxqk . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
juqvuixxqk . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . juqvuixxqk . AQHandles , ssGetTaskTime ( rtS , 1
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . juqvuixxqk . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . juqvuixxqk . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . juqvuixxqk . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "fAngle" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double"
, "rad" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"fAngle" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/6 DOF Robot Arm" , 3 , 0 , slioCatalogue , ( NULL ) ,
0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal (
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/6 DOF Robot Arm" , 3 , "fAngle" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . juqvuixxqk . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "wAngle" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "wAngle" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_original/6 DOF Robot Arm" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "wAngle" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 3 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . p5riohe4an . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "795181fa-577e-4574-8979-34c7cc9ad8d0" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "rad" ) ; if (
rtDW . p5riohe4an . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
p5riohe4an . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . p5riohe4an . AQHandles , ssGetTaskTime ( rtS , 1
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . p5riohe4an . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . p5riohe4an . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . p5riohe4an . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "wAngle" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double"
, "rad" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"wAngle" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/6 DOF Robot Arm" , 4 , 0 , slioCatalogue , ( NULL ) ,
0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal (
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/6 DOF Robot Arm" , 4 , "wAngle" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . p5riohe4an . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "hAngle" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "hAngle" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_original/6 DOF Robot Arm" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "hAngle" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 4 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . kumdlxv2pj . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "0e073cd9-961e-44b1-8da1-a712682fdd75" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "rad" ) ; if (
rtDW . kumdlxv2pj . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
kumdlxv2pj . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . kumdlxv2pj . AQHandles , ssGetTaskTime ( rtS , 1
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . kumdlxv2pj . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . kumdlxv2pj . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . kumdlxv2pj . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "hAngle" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double"
, "rad" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"hAngle" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/6 DOF Robot Arm" , 5 , 0 , slioCatalogue , ( NULL ) ,
0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal (
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/6 DOF Robot Arm" , 5 , "hAngle" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . kumdlxv2pj . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "gAngle" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "gAngle" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_original/6 DOF Robot Arm" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "gAngle" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 5 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . gxx4qdhgam . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "14ad83f2-46a8-4455-898f-23ecfd54ee0d" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "rad" ) ; if (
rtDW . gxx4qdhgam . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
gxx4qdhgam . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . gxx4qdhgam . AQHandles , ssGetTaskTime ( rtS , 1
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . gxx4qdhgam . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . gxx4qdhgam . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . gxx4qdhgam . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "gAngle" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double"
, "rad" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"gAngle" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/6 DOF Robot Arm" , 6 , 0 , slioCatalogue , ( NULL ) ,
0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal (
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/6 DOF Robot Arm" , 6 , "gAngle" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . gxx4qdhgam . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "tREF" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "tREF" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_original/Step1" ) ; sdiLabelU blockSID = sdiGetLabelFromChars (
"" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "tREF" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . grbxtmi4gy . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "51db102c-63c7-4659-b8a3-387a825d2318" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. grbxtmi4gy . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . grbxtmi4gy
. AQHandles , "0.1" , 0.1 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW
. grbxtmi4gy . AQHandles , ssGetTaskTime ( rtS , 2 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . grbxtmi4gy . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . grbxtmi4gy . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . grbxtmi4gy . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "tREF" , "zoh" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" , ""
, "0.1" , 0.1 , ssGetTFinal ( rtS ) , treeVector ) ; } signalDescriptor =
rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 , "tREF" , "" ,
rt_dataMapInfo . mmi . InstanceMap . fullPath , "cst_robotarm_original/Step1"
, 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ; if ( !
rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi .
InstanceMap . fullPath , "cst_robotarm_original/Step1" , 1 , "tREF" ) ; } if
( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . grbxtmi4gy .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "bREF" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "bREF" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_original/Step2" ) ; sdiLabelU blockSID = sdiGetLabelFromChars (
"" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "bREF" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . kf2l0bp4qf . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "865fe957-1e67-4533-bf98-7907951ba58f" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. kf2l0bp4qf . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . kf2l0bp4qf
. AQHandles , "0.1" , 0.1 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW
. kf2l0bp4qf . AQHandles , ssGetTaskTime ( rtS , 2 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . kf2l0bp4qf . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . kf2l0bp4qf . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . kf2l0bp4qf . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "bREF" , "zoh" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" , ""
, "0.1" , 0.1 , ssGetTFinal ( rtS ) , treeVector ) ; } signalDescriptor =
rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 , "bREF" , "" ,
rt_dataMapInfo . mmi . InstanceMap . fullPath , "cst_robotarm_original/Step2"
, 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ; if ( !
rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi .
InstanceMap . fullPath , "cst_robotarm_original/Step2" , 1 , "bREF" ) ; } if
( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . kf2l0bp4qf .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "hREF" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "hREF" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_original/Step4" ) ; sdiLabelU blockSID = sdiGetLabelFromChars (
"" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "hREF" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . cbaon5wpyd . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "f6ed7245-f59d-473f-a593-93f62bcdddba" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. cbaon5wpyd . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . cbaon5wpyd
. AQHandles , "0.1" , 0.1 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW
. cbaon5wpyd . AQHandles , ssGetTaskTime ( rtS , 2 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . cbaon5wpyd . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . cbaon5wpyd . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . cbaon5wpyd . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "hREF" , "zoh" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" , ""
, "0.1" , 0.1 , ssGetTFinal ( rtS ) , treeVector ) ; } signalDescriptor =
rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 , "hREF" , "" ,
rt_dataMapInfo . mmi . InstanceMap . fullPath , "cst_robotarm_original/Step4"
, 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ; if ( !
rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi .
InstanceMap . fullPath , "cst_robotarm_original/Step4" , 1 , "hREF" ) ; } if
( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . cbaon5wpyd .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "wREF" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "wREF" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_original/Step5" ) ; sdiLabelU blockSID = sdiGetLabelFromChars (
"" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "wREF" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . myfwmwkhyi . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "c2701e08-99db-4595-a3b2-2af9ee1319d4" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. myfwmwkhyi . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . myfwmwkhyi
. AQHandles , "0.1" , 0.1 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW
. myfwmwkhyi . AQHandles , ssGetTaskTime ( rtS , 2 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . myfwmwkhyi . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . myfwmwkhyi . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . myfwmwkhyi . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "wREF" , "zoh" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" , ""
, "0.1" , 0.1 , ssGetTFinal ( rtS ) , treeVector ) ; } signalDescriptor =
rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 , "wREF" , "" ,
rt_dataMapInfo . mmi . InstanceMap . fullPath , "cst_robotarm_original/Step5"
, 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ; if ( !
rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi .
InstanceMap . fullPath , "cst_robotarm_original/Step5" , 1 , "wREF" ) ; } if
( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . myfwmwkhyi .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "gREF" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "gREF" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_original/Step6" ) ; sdiLabelU blockSID = sdiGetLabelFromChars (
"" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "gREF" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . mhxdgqlean . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "e07de332-d973-4000-9c42-5b8afb4daffd" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. mhxdgqlean . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . mhxdgqlean
. AQHandles , "0.1" , 0.1 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW
. mhxdgqlean . AQHandles , ssGetTaskTime ( rtS , 2 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . mhxdgqlean . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . mhxdgqlean . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . mhxdgqlean . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "gREF" , "zoh" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" , ""
, "0.1" , 0.1 , ssGetTFinal ( rtS ) , treeVector ) ; } signalDescriptor =
rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 , "gREF" , "" ,
rt_dataMapInfo . mmi . InstanceMap . fullPath , "cst_robotarm_original/Step6"
, 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ; if ( !
rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi .
InstanceMap . fullPath , "cst_robotarm_original/Step6" , 1 , "gREF" ) ; } if
( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . mhxdgqlean .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kp2" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kp2" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_original/Controller/bicepPID/Gain1" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Kp2" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . iasjyosrf4 . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "ac92c3b8-955c-4f0a-b789-225d1029dbc3" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. iasjyosrf4 . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . iasjyosrf4
. AQHandles , "0.1" , 0.1 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW
. iasjyosrf4 . AQHandles , ssGetTaskTime ( rtS , 2 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . iasjyosrf4 . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . iasjyosrf4 . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . iasjyosrf4 . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "Kp2" , "zoh" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" , "" ,
"0.1" , 0.1 , ssGetTFinal ( rtS ) , treeVector ) ; } signalDescriptor =
rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 , "Kp2" , "" ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/bicepPID/Gain1" , 1 , 0 , slioCatalogue , (
NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) {
sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/bicepPID/Gain1" , 1 , "Kp2" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . iasjyosrf4 . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kd2" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kd2" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_original/Controller/bicepPID/Gain2" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Kd2" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . krymky00fw . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "ff77abe4-ebf4-4678-abf2-3bd29b588e08" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. krymky00fw . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . krymky00fw
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . krymky00fw . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . krymky00fw . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . krymky00fw . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . krymky00fw . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "Kd2" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"Kd2" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/bicepPID/Gain2" , 1 , 0 , slioCatalogue , (
NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) {
sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/bicepPID/Gain2" , 1 , "Kd2" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . krymky00fw . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Ki2" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Ki2" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_original/Controller/bicepPID/Gain" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Ki2" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . aty3pq5a3r . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "e604524e-0eda-4672-b611-b62264a11515" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. aty3pq5a3r . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . aty3pq5a3r
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . aty3pq5a3r . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . aty3pq5a3r . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . aty3pq5a3r . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . aty3pq5a3r . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "Ki2" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"Ki2" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/bicepPID/Gain" , 1 , 0 , slioCatalogue , (
NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) {
sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/bicepPID/Gain" , 1 , "Ki2" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . aty3pq5a3r . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kp3" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kp3" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_original/Controller/forearPID/Gain1" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Kp3" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . iasjyosrf4l . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "9b060cf9-4628-4a5f-9025-2109c5b2c187" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. iasjyosrf4l . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
iasjyosrf4l . AQHandles , "0.1" , 0.1 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . iasjyosrf4l . AQHandles , ssGetTaskTime ( rtS , 2
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . iasjyosrf4l . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . iasjyosrf4l . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . iasjyosrf4l . SlioLTF = ( NULL ) ;
{ void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "Kp3" , "zoh" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" , "" ,
"0.1" , 0.1 , ssGetTFinal ( rtS ) , treeVector ) ; } signalDescriptor =
rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 , "Kp3" , "" ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/forearPID/Gain1" , 1 , 0 , slioCatalogue ,
( NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) {
sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/forearPID/Gain1" , 1 , "Kp3" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . iasjyosrf4l . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kd3" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kd3" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_original/Controller/forearPID/Gain2" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Kd3" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . krymky00fwv . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "0faafb9b-63c7-4c00-a2b6-dbdd65a0204f" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. krymky00fwv . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
krymky00fwv . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . krymky00fwv . AQHandles , ssGetTaskTime ( rtS , 1
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . krymky00fwv . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . krymky00fwv . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . krymky00fwv . SlioLTF = ( NULL ) ;
{ void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "Kd3" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"Kd3" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/forearPID/Gain2" , 1 , 0 , slioCatalogue ,
( NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) {
sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/forearPID/Gain2" , 1 , "Kd3" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . krymky00fwv . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Ki3" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Ki3" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_original/Controller/forearPID/Gain" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Ki3" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . aty3pq5a3rd . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "25478c73-59b8-402f-bb04-48855ae22777" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. aty3pq5a3rd . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
aty3pq5a3rd . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . aty3pq5a3rd . AQHandles , ssGetTaskTime ( rtS , 1
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . aty3pq5a3rd . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . aty3pq5a3rd . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . aty3pq5a3rd . SlioLTF = ( NULL ) ;
{ void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "Ki3" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"Ki3" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/forearPID/Gain" , 1 , 0 , slioCatalogue , (
NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) {
sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/forearPID/Gain" , 1 , "Ki3" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . aty3pq5a3rd . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kp6" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kp6" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_original/Controller/gripperPID/Gain1" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Kp6" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . iasjyosrf4lj . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "050cef8b-36a9-4999-9dd6-3bfc95877a98" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. iasjyosrf4lj . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
iasjyosrf4lj . AQHandles , "0.1" , 0.1 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . iasjyosrf4lj . AQHandles , ssGetTaskTime ( rtS ,
2 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . iasjyosrf4lj . AQHandles
, 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . iasjyosrf4lj . AQHandles
, loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . iasjyosrf4lj . SlioLTF = ( NULL ) ;
{ void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "Kp6" , "zoh" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" , "" ,
"0.1" , 0.1 , ssGetTFinal ( rtS ) , treeVector ) ; } signalDescriptor =
rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 , "Kp6" , "" ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/gripperPID/Gain1" , 1 , 0 , slioCatalogue ,
( NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) {
sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/gripperPID/Gain1" , 1 , "Kp6" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . iasjyosrf4lj . SlioLTF = accessor
; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kd6" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kd6" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_original/Controller/gripperPID/Gain2" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Kd6" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . krymky00fwve . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "558dd649-c797-401d-b446-feec13455145" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. krymky00fwve . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
krymky00fwve . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . krymky00fwve . AQHandles , ssGetTaskTime ( rtS ,
1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . krymky00fwve . AQHandles
, 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . krymky00fwve . AQHandles
, loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . krymky00fwve . SlioLTF = ( NULL ) ;
{ void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "Kd6" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"Kd6" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/gripperPID/Gain2" , 1 , 0 , slioCatalogue ,
( NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) {
sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/gripperPID/Gain2" , 1 , "Kd6" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . krymky00fwve . SlioLTF = accessor
; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Ki6" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Ki6" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_original/Controller/gripperPID/Gain" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Ki6" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . aty3pq5a3rdc . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "9e13457f-84af-4769-8446-5096ee8afecc" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. aty3pq5a3rdc . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
aty3pq5a3rdc . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . aty3pq5a3rdc . AQHandles , ssGetTaskTime ( rtS ,
1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . aty3pq5a3rdc . AQHandles
, 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . aty3pq5a3rdc . AQHandles
, loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . aty3pq5a3rdc . SlioLTF = ( NULL ) ;
{ void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "Ki6" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"Ki6" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/gripperPID/Gain" , 1 , 0 , slioCatalogue ,
( NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) {
sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/gripperPID/Gain" , 1 , "Ki6" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . aty3pq5a3rdc . SlioLTF = accessor
; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kp5" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kp5" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_original/Controller/handPID/Gain1" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Kp5" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . iasjyosrf4ljd . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "e01328ea-cebd-495d-9a9d-66cdd78b9045" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. iasjyosrf4ljd . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
iasjyosrf4ljd . AQHandles , "0.1" , 0.1 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . iasjyosrf4ljd . AQHandles , ssGetTaskTime ( rtS ,
2 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . iasjyosrf4ljd .
AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . iasjyosrf4ljd
. AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel (
sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ;
sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW . iasjyosrf4ljd .
SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void * accessor = (
NULL ) ; const void * signalDescriptor = ( NULL ) ; void * loggingInterval =
( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void * slioCatalogue =
rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "Kp5" , "zoh" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" , "" ,
"0.1" , 0.1 , ssGetTFinal ( rtS ) , treeVector ) ; } signalDescriptor =
rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 , "Kp5" , "" ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/handPID/Gain1" , 1 , 0 , slioCatalogue , (
NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) {
sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/handPID/Gain1" , 1 , "Kp5" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . iasjyosrf4ljd . SlioLTF = accessor
; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kd5" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kd5" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_original/Controller/handPID/Gain2" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Kd5" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . krymky00fwveg . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "1770f5e5-d2fd-459f-a53c-1241e52fe5b2" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. krymky00fwveg . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
krymky00fwveg . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . krymky00fwveg . AQHandles , ssGetTaskTime ( rtS ,
1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . krymky00fwveg .
AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . krymky00fwveg
. AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel (
sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ;
sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW . krymky00fwveg .
SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void * accessor = (
NULL ) ; const void * signalDescriptor = ( NULL ) ; void * loggingInterval =
( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void * slioCatalogue =
rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "Kd5" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"Kd5" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/handPID/Gain2" , 1 , 0 , slioCatalogue , (
NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) {
sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/handPID/Gain2" , 1 , "Kd5" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . krymky00fwveg . SlioLTF = accessor
; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Ki5" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Ki5" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_original/Controller/handPID/Gain" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Ki5" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . aty3pq5a3rdcg . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "64da35ca-f905-4990-9eb9-0ed986518dfd" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. aty3pq5a3rdcg . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
aty3pq5a3rdcg . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . aty3pq5a3rdcg . AQHandles , ssGetTaskTime ( rtS ,
1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . aty3pq5a3rdcg .
AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . aty3pq5a3rdcg
. AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel (
sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ;
sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW . aty3pq5a3rdcg .
SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void * accessor = (
NULL ) ; const void * signalDescriptor = ( NULL ) ; void * loggingInterval =
( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void * slioCatalogue =
rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "Ki5" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"Ki5" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/handPID/Gain" , 1 , 0 , slioCatalogue , (
NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) {
sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/handPID/Gain" , 1 , "Ki5" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . aty3pq5a3rdcg . SlioLTF = accessor
; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kp1" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kp1" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_original/Controller/turntablePID/Gain1" ) ; sdiLabelU blockSID
= sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( ""
) ; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Kp1" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . iasjyosrf4ljd4 . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "583fdf82-f968-4fd6-9390-fff6a85acf0f" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. iasjyosrf4ljd4 . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
iasjyosrf4ljd4 . AQHandles , "0.1" , 0.1 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . iasjyosrf4ljd4 . AQHandles , ssGetTaskTime ( rtS
, 2 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . iasjyosrf4ljd4 .
AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . iasjyosrf4ljd4
. AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel (
sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ;
sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW . iasjyosrf4ljd4 .
SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void * accessor = (
NULL ) ; const void * signalDescriptor = ( NULL ) ; void * loggingInterval =
( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void * slioCatalogue =
rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "Kp1" , "zoh" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" , "" ,
"0.1" , 0.1 , ssGetTFinal ( rtS ) , treeVector ) ; } signalDescriptor =
rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 , "Kp1" , "" ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/turntablePID/Gain1" , 1 , 0 , slioCatalogue
, ( NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) {
sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/turntablePID/Gain1" , 1 , "Kp1" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . iasjyosrf4ljd4 . SlioLTF =
accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kd1" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kd1" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_original/Controller/turntablePID/Gain2" ) ; sdiLabelU blockSID
= sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( ""
) ; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Kd1" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . krymky00fwvegl . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "4e045aa5-0ec1-4dcd-a0dd-396d29ab7bcd" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. krymky00fwvegl . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
krymky00fwvegl . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . krymky00fwvegl . AQHandles , ssGetTaskTime ( rtS
, 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . krymky00fwvegl .
AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . krymky00fwvegl
. AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel (
sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ;
sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW . krymky00fwvegl .
SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void * accessor = (
NULL ) ; const void * signalDescriptor = ( NULL ) ; void * loggingInterval =
( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void * slioCatalogue =
rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "Kd1" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"Kd1" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/turntablePID/Gain2" , 1 , 0 , slioCatalogue
, ( NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) {
sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/turntablePID/Gain2" , 1 , "Kd1" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . krymky00fwvegl . SlioLTF =
accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Ki1" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Ki1" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_original/Controller/turntablePID/Gain" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Ki1" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . aty3pq5a3rdcgn . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "ba4a86d0-4543-4c47-9fab-70c1992c0b61" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. aty3pq5a3rdcgn . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
aty3pq5a3rdcgn . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . aty3pq5a3rdcgn . AQHandles , ssGetTaskTime ( rtS
, 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . aty3pq5a3rdcgn .
AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . aty3pq5a3rdcgn
. AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel (
sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ;
sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW . aty3pq5a3rdcgn .
SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void * accessor = (
NULL ) ; const void * signalDescriptor = ( NULL ) ; void * loggingInterval =
( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void * slioCatalogue =
rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "Ki1" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"Ki1" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/turntablePID/Gain" , 1 , 0 , slioCatalogue
, ( NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) {
sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/turntablePID/Gain" , 1 , "Ki1" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . aty3pq5a3rdcgn . SlioLTF =
accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kp4" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kp4" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_original/Controller/wristPID/Gain1" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Kp4" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . iasjyosrf4ljd4p . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "673401b1-8adf-4689-ab7a-77575e4318de" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. iasjyosrf4ljd4p . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
iasjyosrf4ljd4p . AQHandles , "0.1" , 0.1 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . iasjyosrf4ljd4p . AQHandles , ssGetTaskTime ( rtS
, 2 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . iasjyosrf4ljd4p .
AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
iasjyosrf4ljd4p . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
iasjyosrf4ljd4p . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void
* accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "Kp4" , "zoh" , 0 , ( unsigned int * )
sigDimsArray , 1 , "double" , "" , "0.1" , 0.1 , ssGetTFinal ( rtS ) ,
treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 ,
1 , 0 , 1 , "Kp4" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/wristPID/Gain1" , 1 , 0 , slioCatalogue , (
NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) {
sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/wristPID/Gain1" , 1 , "Kp4" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . iasjyosrf4ljd4p . SlioLTF =
accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kd4" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kd4" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_original/Controller/wristPID/Gain2" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Kd4" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . krymky00fwvegln . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "ff3c23dc-1966-4eae-b379-6a029ffc7965" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. krymky00fwvegln . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
krymky00fwvegln . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . krymky00fwvegln . AQHandles , ssGetTaskTime ( rtS
, 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . krymky00fwvegln .
AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
krymky00fwvegln . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
krymky00fwvegln . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void
* accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "Kd4" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "Kd4" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/wristPID/Gain2" , 1 , 0 , slioCatalogue , (
NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) {
sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/wristPID/Gain2" , 1 , "Kd4" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . krymky00fwvegln . SlioLTF =
accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Ki4" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Ki4" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_original/Controller/wristPID/Gain" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Ki4" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . aty3pq5a3rdcgno . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "d6a2b6a3-1251-4465-93d8-cbdd11de7836" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. aty3pq5a3rdcgno . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
aty3pq5a3rdcgno . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . aty3pq5a3rdcgno . AQHandles , ssGetTaskTime ( rtS
, 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . aty3pq5a3rdcgno .
AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
aty3pq5a3rdcgno . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
aty3pq5a3rdcgno . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void
* accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "Ki4" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "Ki4" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/wristPID/Gain" , 1 , 0 , slioCatalogue , (
NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) {
sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_original/Controller/wristPID/Gain" , 1 , "Ki4" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . aty3pq5a3rdcgno . SlioLTF =
accessor ; } } } } tmp = nesl_lease_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_6"
, 0 , 0 ) ; rtDW . hymu3nho1w = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . hymu3nho1w ) ; if ( tmp_p ) { cst_robotarm_original_6f156994_6_gateway
( ) ; tmp = nesl_lease_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_6"
, 0 , 0 ) ; rtDW . hymu3nho1w = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . l4g30qb3cj = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . npqncjuh4p = ( void *
) diagnosticManager ; modelParameters . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters . mSolverTolerance = 0.001 ; modelParameters .
mVariableStepSolver = true ; modelParameters . mIsUsingODEN = false ;
modelParameters . mFixedStepSize = 0.001 ; modelParameters . mStartTime = 0.0
; modelParameters . mLoadInitialState = false ; modelParameters .
mUseSimState = false ; modelParameters . mLinTrimCompile = false ;
modelParameters . mLoggingMode = SSC_LOGGING_NONE ; modelParameters .
mRTWModifiedTimeStamp = 5.18872249E+8 ; tmp_i = 0.001 ; modelParameters .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters . mVariableStepSolver = tmp_p ; tmp_p
= false ; modelParameters . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . npqncjuh4p ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . hymu3nho1w
, & modelParameters , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_6"
, 1 , 0 ) ; rtDW . eth2ta0ixd = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . eth2ta0ixd ) ; if ( tmp_p ) { cst_robotarm_original_6f156994_6_gateway
( ) ; tmp = nesl_lease_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_6"
, 1 , 0 ) ; rtDW . eth2ta0ixd = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . lmer5zwzkb = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . d5cfrz0sqv = ( void *
) diagnosticManager ; modelParameters_p . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_p . mSolverTolerance = 0.001 ; modelParameters_p .
mVariableStepSolver = true ; modelParameters_p . mIsUsingODEN = false ;
modelParameters_p . mFixedStepSize = 0.001 ; modelParameters_p . mStartTime =
0.0 ; modelParameters_p . mLoadInitialState = false ; modelParameters_p .
mUseSimState = false ; modelParameters_p . mLinTrimCompile = false ;
modelParameters_p . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_p .
mRTWModifiedTimeStamp = 5.18872249E+8 ; tmp_i = 0.001 ; modelParameters_p .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_p . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_p . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_p . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_p .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . d5cfrz0sqv ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . eth2ta0ixd
, & modelParameters_p , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_2"
, 0 , 0 ) ; rtDW . lq5wns3dvy = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . lq5wns3dvy ) ; if ( tmp_p ) { cst_robotarm_original_6f156994_2_gateway
( ) ; tmp = nesl_lease_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_2"
, 0 , 0 ) ; rtDW . lq5wns3dvy = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . luqgty2sqr = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . g34wywbvoq = ( void *
) diagnosticManager ; modelParameters_e . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_e . mSolverTolerance = 0.001 ; modelParameters_e .
mVariableStepSolver = true ; modelParameters_e . mIsUsingODEN = false ;
modelParameters_e . mFixedStepSize = 0.001 ; modelParameters_e . mStartTime =
0.0 ; modelParameters_e . mLoadInitialState = false ; modelParameters_e .
mUseSimState = false ; modelParameters_e . mLinTrimCompile = false ;
modelParameters_e . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_e .
mRTWModifiedTimeStamp = 5.18872249E+8 ; tmp_i = 0.001 ; modelParameters_e .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_e . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_e . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_e . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_e .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . g34wywbvoq ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . lq5wns3dvy
, & modelParameters_e , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_2"
, 1 , 0 ) ; rtDW . pqcmol2drt = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . pqcmol2drt ) ; if ( tmp_p ) { cst_robotarm_original_6f156994_2_gateway
( ) ; tmp = nesl_lease_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_2"
, 1 , 0 ) ; rtDW . pqcmol2drt = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . oodgx5kilx = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . eav1ttze4f = ( void *
) diagnosticManager ; modelParameters_i . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_i . mSolverTolerance = 0.001 ; modelParameters_i .
mVariableStepSolver = true ; modelParameters_i . mIsUsingODEN = false ;
modelParameters_i . mFixedStepSize = 0.001 ; modelParameters_i . mStartTime =
0.0 ; modelParameters_i . mLoadInitialState = false ; modelParameters_i .
mUseSimState = false ; modelParameters_i . mLinTrimCompile = false ;
modelParameters_i . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_i .
mRTWModifiedTimeStamp = 5.18872249E+8 ; tmp_i = 0.001 ; modelParameters_i .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_i . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_i . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_i . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_i .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . eav1ttze4f ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . pqcmol2drt
, & modelParameters_i , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_7"
, 0 , 0 ) ; rtDW . ipgckui03o = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . ipgckui03o ) ; if ( tmp_p ) { cst_robotarm_original_6f156994_7_gateway
( ) ; tmp = nesl_lease_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_7"
, 0 , 0 ) ; rtDW . ipgckui03o = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . gtngycvr1v = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . dau5zpxltv = ( void *
) diagnosticManager ; modelParameters_m . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_m . mSolverTolerance = 0.001 ; modelParameters_m .
mVariableStepSolver = true ; modelParameters_m . mIsUsingODEN = false ;
modelParameters_m . mFixedStepSize = 0.001 ; modelParameters_m . mStartTime =
0.0 ; modelParameters_m . mLoadInitialState = false ; modelParameters_m .
mUseSimState = false ; modelParameters_m . mLinTrimCompile = false ;
modelParameters_m . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_m .
mRTWModifiedTimeStamp = 5.18872249E+8 ; tmp_i = 0.001 ; modelParameters_m .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_m . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_m . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_m . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_m .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . dau5zpxltv ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . ipgckui03o
, & modelParameters_m , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_7"
, 1 , 0 ) ; rtDW . pifdwitl4p = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . pifdwitl4p ) ; if ( tmp_p ) { cst_robotarm_original_6f156994_7_gateway
( ) ; tmp = nesl_lease_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_7"
, 1 , 0 ) ; rtDW . pifdwitl4p = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . a2ojuitiri = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . c42r12fxzd = ( void *
) diagnosticManager ; modelParameters_g . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_g . mSolverTolerance = 0.001 ; modelParameters_g .
mVariableStepSolver = true ; modelParameters_g . mIsUsingODEN = false ;
modelParameters_g . mFixedStepSize = 0.001 ; modelParameters_g . mStartTime =
0.0 ; modelParameters_g . mLoadInitialState = false ; modelParameters_g .
mUseSimState = false ; modelParameters_g . mLinTrimCompile = false ;
modelParameters_g . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_g .
mRTWModifiedTimeStamp = 5.18872249E+8 ; tmp_i = 0.001 ; modelParameters_g .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_g . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_g . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_g . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_g .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . c42r12fxzd ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . pifdwitl4p
, & modelParameters_g , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_5"
, 0 , 0 ) ; rtDW . hfd2kdvhft = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . hfd2kdvhft ) ; if ( tmp_p ) { cst_robotarm_original_6f156994_5_gateway
( ) ; tmp = nesl_lease_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_5"
, 0 , 0 ) ; rtDW . hfd2kdvhft = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . dc0ikbgay5 = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . bfzy1zqdrk = ( void *
) diagnosticManager ; modelParameters_j . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_j . mSolverTolerance = 0.001 ; modelParameters_j .
mVariableStepSolver = true ; modelParameters_j . mIsUsingODEN = false ;
modelParameters_j . mFixedStepSize = 0.001 ; modelParameters_j . mStartTime =
0.0 ; modelParameters_j . mLoadInitialState = false ; modelParameters_j .
mUseSimState = false ; modelParameters_j . mLinTrimCompile = false ;
modelParameters_j . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_j .
mRTWModifiedTimeStamp = 5.18872249E+8 ; tmp_i = 0.001 ; modelParameters_j .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_j . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_j . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_j . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_j .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . bfzy1zqdrk ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . hfd2kdvhft
, & modelParameters_j , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_5"
, 1 , 0 ) ; rtDW . p1olpso2qf = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . p1olpso2qf ) ; if ( tmp_p ) { cst_robotarm_original_6f156994_5_gateway
( ) ; tmp = nesl_lease_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_5"
, 1 , 0 ) ; rtDW . p1olpso2qf = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . arv32tkm5f = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . odxr5jqq3h = ( void *
) diagnosticManager ; modelParameters_f . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_f . mSolverTolerance = 0.001 ; modelParameters_f .
mVariableStepSolver = true ; modelParameters_f . mIsUsingODEN = false ;
modelParameters_f . mFixedStepSize = 0.001 ; modelParameters_f . mStartTime =
0.0 ; modelParameters_f . mLoadInitialState = false ; modelParameters_f .
mUseSimState = false ; modelParameters_f . mLinTrimCompile = false ;
modelParameters_f . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_f .
mRTWModifiedTimeStamp = 5.18872249E+8 ; tmp_i = 0.001 ; modelParameters_f .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_f . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_f . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_f . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_f .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . odxr5jqq3h ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . p1olpso2qf
, & modelParameters_f , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_1"
, 0 , 0 ) ; rtDW . ckf13aqezk = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . ckf13aqezk ) ; if ( tmp_p ) { cst_robotarm_original_6f156994_1_gateway
( ) ; tmp = nesl_lease_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_1"
, 0 , 0 ) ; rtDW . ckf13aqezk = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . kl0ddpmtll = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . lx2smnavwa = ( void *
) diagnosticManager ; modelParameters_c . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_c . mSolverTolerance = 0.001 ; modelParameters_c .
mVariableStepSolver = true ; modelParameters_c . mIsUsingODEN = false ;
modelParameters_c . mFixedStepSize = 0.001 ; modelParameters_c . mStartTime =
0.0 ; modelParameters_c . mLoadInitialState = false ; modelParameters_c .
mUseSimState = false ; modelParameters_c . mLinTrimCompile = false ;
modelParameters_c . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_c .
mRTWModifiedTimeStamp = 5.18872249E+8 ; tmp_i = 0.001 ; modelParameters_c .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_c . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_c . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_c . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_c .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . lx2smnavwa ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . ckf13aqezk
, & modelParameters_c , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_1"
, 1 , 0 ) ; rtDW . htibunu1u0 = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . htibunu1u0 ) ; if ( tmp_p ) { cst_robotarm_original_6f156994_1_gateway
( ) ; tmp = nesl_lease_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_1"
, 1 , 0 ) ; rtDW . htibunu1u0 = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . er43jccux2 = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . ox542gociu = ( void *
) diagnosticManager ; modelParameters_k . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_k . mSolverTolerance = 0.001 ; modelParameters_k .
mVariableStepSolver = true ; modelParameters_k . mIsUsingODEN = false ;
modelParameters_k . mFixedStepSize = 0.001 ; modelParameters_k . mStartTime =
0.0 ; modelParameters_k . mLoadInitialState = false ; modelParameters_k .
mUseSimState = false ; modelParameters_k . mLinTrimCompile = false ;
modelParameters_k . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_k .
mRTWModifiedTimeStamp = 5.18872249E+8 ; tmp_i = 0.001 ; modelParameters_k .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_k . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_k . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_k . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_k .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . ox542gociu ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . htibunu1u0
, & modelParameters_k , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_3"
, 0 , 0 ) ; rtDW . b350mxxcd5 = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . b350mxxcd5 ) ; if ( tmp_p ) { cst_robotarm_original_6f156994_3_gateway
( ) ; tmp = nesl_lease_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_3"
, 0 , 0 ) ; rtDW . b350mxxcd5 = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . gew2edtgzk = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . j5jrcxb4qp = ( void *
) diagnosticManager ; modelParameters_b . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_b . mSolverTolerance = 0.001 ; modelParameters_b .
mVariableStepSolver = true ; modelParameters_b . mIsUsingODEN = false ;
modelParameters_b . mFixedStepSize = 0.001 ; modelParameters_b . mStartTime =
0.0 ; modelParameters_b . mLoadInitialState = false ; modelParameters_b .
mUseSimState = false ; modelParameters_b . mLinTrimCompile = false ;
modelParameters_b . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_b .
mRTWModifiedTimeStamp = 5.18872249E+8 ; tmp_i = 0.001 ; modelParameters_b .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_b . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_b . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_b . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_b .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . j5jrcxb4qp ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . b350mxxcd5
, & modelParameters_b , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_3"
, 1 , 0 ) ; rtDW . k3rk53cctg = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . k3rk53cctg ) ; if ( tmp_p ) { cst_robotarm_original_6f156994_3_gateway
( ) ; tmp = nesl_lease_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_3"
, 1 , 0 ) ; rtDW . k3rk53cctg = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . gabyx120co = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . klyw22x3a5 = ( void *
) diagnosticManager ; modelParameters_n . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_n . mSolverTolerance = 0.001 ; modelParameters_n .
mVariableStepSolver = true ; modelParameters_n . mIsUsingODEN = false ;
modelParameters_n . mFixedStepSize = 0.001 ; modelParameters_n . mStartTime =
0.0 ; modelParameters_n . mLoadInitialState = false ; modelParameters_n .
mUseSimState = false ; modelParameters_n . mLinTrimCompile = false ;
modelParameters_n . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_n .
mRTWModifiedTimeStamp = 5.18872249E+8 ; tmp_i = 0.001 ; modelParameters_n .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_n . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_n . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_n . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_n .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . klyw22x3a5 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . k3rk53cctg
, & modelParameters_n , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_4"
, 0 , 0 ) ; rtDW . nl1dyr0lbo = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . nl1dyr0lbo ) ; if ( tmp_p ) { cst_robotarm_original_6f156994_4_gateway
( ) ; tmp = nesl_lease_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_4"
, 0 , 0 ) ; rtDW . nl1dyr0lbo = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . pjclqm00ip = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . ps0145mupz = ( void *
) diagnosticManager ; modelParameters_l . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_l . mSolverTolerance = 0.001 ; modelParameters_l .
mVariableStepSolver = true ; modelParameters_l . mIsUsingODEN = false ;
modelParameters_l . mFixedStepSize = 0.001 ; modelParameters_l . mStartTime =
0.0 ; modelParameters_l . mLoadInitialState = false ; modelParameters_l .
mUseSimState = false ; modelParameters_l . mLinTrimCompile = false ;
modelParameters_l . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_l .
mRTWModifiedTimeStamp = 5.18872249E+8 ; tmp_i = 0.001 ; modelParameters_l .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_l . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_l . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_l . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_l .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . ps0145mupz ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . nl1dyr0lbo
, & modelParameters_l , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_4"
, 1 , 0 ) ; rtDW . k31d01gzwi = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . k31d01gzwi ) ; if ( tmp_p ) { cst_robotarm_original_6f156994_4_gateway
( ) ; tmp = nesl_lease_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_4"
, 1 , 0 ) ; rtDW . k31d01gzwi = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . c14icyaj2t = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . kds0ednfxw = ( void *
) diagnosticManager ; modelParameters_d . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_d . mSolverTolerance = 0.001 ; modelParameters_d .
mVariableStepSolver = true ; modelParameters_d . mIsUsingODEN = false ;
modelParameters_d . mFixedStepSize = 0.001 ; modelParameters_d . mStartTime =
0.0 ; modelParameters_d . mLoadInitialState = false ; modelParameters_d .
mUseSimState = false ; modelParameters_d . mLinTrimCompile = false ;
modelParameters_d . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_d .
mRTWModifiedTimeStamp = 5.18872249E+8 ; tmp_i = 0.001 ; modelParameters_d .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_d . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_d . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_d . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_d .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . kds0ednfxw ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . k31d01gzwi
, & modelParameters_d , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
MdlInitialize ( ) ; } void MdlOutputs ( int_T tid ) { NeslSimulationData *
simulationData ; real_T time ; boolean_T tmp ; real_T tmp_p [ 24 ] ; int_T
tmp_e [ 7 ] ; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree *
diagnosticTree ; char * msg ; real_T time_p ; real_T tmp_i [ 53 ] ; int_T
tmp_m [ 8 ] ; int32_T k ; real_T * lastU ; real_T time_e ; real_T tmp_g [ 16
] ; int_T tmp_j [ 5 ] ; real_T time_i ; real_T tmp_f [ 25 ] ; int_T tmp_c [ 6
] ; real_T time_m ; real_T tmp_k [ 28 ] ; int_T tmp_b [ 8 ] ; real_T time_g ;
real_T tmp_n [ 46 ] ; int_T tmp_l [ 9 ] ; real_T time_j ; real_T tmp_d [ 16 ]
; int_T tmp_o [ 5 ] ; real_T time_f ; real_T tmp_dz [ 25 ] ; int_T tmp_fs [ 6
] ; real_T time_c ; real_T tmp_ck [ 16 ] ; int_T tmp_f2 [ 5 ] ; real_T time_k
; real_T tmp_kt [ 25 ] ; int_T tmp_lt [ 6 ] ; real_T time_b ; real_T tmp_hn [
16 ] ; int_T tmp_ap [ 5 ] ; real_T time_n ; real_T tmp_pj [ 25 ] ; int_T
tmp_po [ 6 ] ; real_T time_l ; real_T tmp_pk [ 16 ] ; int_T tmp_d0 [ 5 ] ;
real_T time_d ; real_T tmp_kh [ 25 ] ; int_T tmp_m0 [ 6 ] ; real_T osbonyypon
; real_T gcw2etaptr ; simulationData = ( NeslSimulationData * ) rtDW .
l4g30qb3cj ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN =
1 ; simulationData -> mData -> mTime . mX = & time ; simulationData -> mData
-> mContStates . mN = 28 ; simulationData -> mData -> mContStates . mX = &
rtX . ce41paa4nx [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 1 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . datwzvdkzf ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . m04ffi3voe ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
aau4qscxqc [ 0 ] ; tmp_p [ 1 ] = rtB . aau4qscxqc [ 1 ] ; tmp_p [ 2 ] = rtB .
aau4qscxqc [ 2 ] ; tmp_p [ 3 ] = rtB . aau4qscxqc [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . ms1z3tsizg [ 0 ] ; tmp_p [ 5 ] = rtB . ms1z3tsizg [ 1 ] ;
tmp_p [ 6 ] = rtB . ms1z3tsizg [ 2 ] ; tmp_p [ 7 ] = rtB . ms1z3tsizg [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . hilglkudbg [ 0 ] ; tmp_p [ 9 ] = rtB .
hilglkudbg [ 1 ] ; tmp_p [ 10 ] = rtB . hilglkudbg [ 2 ] ; tmp_p [ 11 ] = rtB
. hilglkudbg [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . d4eu5sdm4t [ 0 ]
; tmp_p [ 13 ] = rtB . d4eu5sdm4t [ 1 ] ; tmp_p [ 14 ] = rtB . d4eu5sdm4t [ 2
] ; tmp_p [ 15 ] = rtB . d4eu5sdm4t [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . pb0sw1pbnm [ 0 ] ; tmp_p [ 17 ] = rtB . pb0sw1pbnm [ 1 ] ; tmp_p [ 18 ]
= rtB . pb0sw1pbnm [ 2 ] ; tmp_p [ 19 ] = rtB . pb0sw1pbnm [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . fgvvgvfqb2 [ 0 ] ; tmp_p [ 21 ] = rtB .
fgvvgvfqb2 [ 1 ] ; tmp_p [ 22 ] = rtB . fgvvgvfqb2 [ 2 ] ; tmp_p [ 23 ] = rtB
. fgvvgvfqb2 [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 29 ; simulationData -> mData ->
mOutputs . mX = & rtB . m2jjwsrlbd [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . npqncjuh4p ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . hymu3nho1w ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . lmer5zwzkb ; time_p = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_p ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . fl2m0qqpfg ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . hi321ofhgd ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_m [ 0 ] = 0 ;
tmp_i [ 0 ] = rtB . aau4qscxqc [ 0 ] ; tmp_i [ 1 ] = rtB . aau4qscxqc [ 1 ] ;
tmp_i [ 2 ] = rtB . aau4qscxqc [ 2 ] ; tmp_i [ 3 ] = rtB . aau4qscxqc [ 3 ] ;
tmp_m [ 1 ] = 4 ; tmp_i [ 4 ] = rtB . ms1z3tsizg [ 0 ] ; tmp_i [ 5 ] = rtB .
ms1z3tsizg [ 1 ] ; tmp_i [ 6 ] = rtB . ms1z3tsizg [ 2 ] ; tmp_i [ 7 ] = rtB .
ms1z3tsizg [ 3 ] ; tmp_m [ 2 ] = 8 ; tmp_i [ 8 ] = rtB . hilglkudbg [ 0 ] ;
tmp_i [ 9 ] = rtB . hilglkudbg [ 1 ] ; tmp_i [ 10 ] = rtB . hilglkudbg [ 2 ]
; tmp_i [ 11 ] = rtB . hilglkudbg [ 3 ] ; tmp_m [ 3 ] = 12 ; tmp_i [ 12 ] =
rtB . d4eu5sdm4t [ 0 ] ; tmp_i [ 13 ] = rtB . d4eu5sdm4t [ 1 ] ; tmp_i [ 14 ]
= rtB . d4eu5sdm4t [ 2 ] ; tmp_i [ 15 ] = rtB . d4eu5sdm4t [ 3 ] ; tmp_m [ 4
] = 16 ; tmp_i [ 16 ] = rtB . pb0sw1pbnm [ 0 ] ; tmp_i [ 17 ] = rtB .
pb0sw1pbnm [ 1 ] ; tmp_i [ 18 ] = rtB . pb0sw1pbnm [ 2 ] ; tmp_i [ 19 ] = rtB
. pb0sw1pbnm [ 3 ] ; tmp_m [ 5 ] = 20 ; tmp_i [ 20 ] = rtB . fgvvgvfqb2 [ 0 ]
; tmp_i [ 21 ] = rtB . fgvvgvfqb2 [ 1 ] ; tmp_i [ 22 ] = rtB . fgvvgvfqb2 [ 2
] ; tmp_i [ 23 ] = rtB . fgvvgvfqb2 [ 3 ] ; tmp_m [ 6 ] = 24 ; memcpy ( &
tmp_i [ 24 ] , & rtB . m2jjwsrlbd [ 0 ] , 29U * sizeof ( real_T ) ) ; tmp_m [
7 ] = 53 ; simulationData -> mData -> mInputValues . mN = 53 ; simulationData
-> mData -> mInputValues . mX = & tmp_i [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 8 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_m [ 0 ] ; simulationData -> mData -> mOutputs . mN = 12 ; simulationData
-> mData -> mOutputs . mX = & rtB . gpydjo5krx [ 0 ] ; simulationData ->
mData -> mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX =
NULL ; simulationData -> mData -> mIsFundamentalSampleHit = false ;
simulationData -> mData -> mTolerances . mN = 0 ; simulationData -> mData ->
mTolerances . mX = NULL ; simulationData -> mData -> mCstateHasChanged =
false ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . d5cfrz0sqv ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . eth2ta0ixd ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtY . k2akfhivm3 = rtB . gpydjo5krx [ 0 ] ; rtY . oii0nuh1ou = rtB .
gpydjo5krx [ 2 ] ; rtY . og5vdhwsfp = rtB . gpydjo5krx [ 4 ] ; rtY .
lia5vz21zn = rtB . gpydjo5krx [ 6 ] ; rtY . n15as4u4l3 = rtB . gpydjo5krx [ 8
] ; rtY . povb5tbw2v = rtB . gpydjo5krx [ 10 ] ; if ( ssIsSampleHit ( rtS , 2
, 0 ) ) { if ( ssGetTaskTime ( rtS , 2 ) < rtP . Step1_Time ) { rtB .
dwxdtflowp = rtP . Step1_Y0 ; } else { rtB . dwxdtflowp = rtP . Step1_YFinal
; } } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( ( rtDW . o4rzjlwnp0 .
AQHandles || rtDW . o4rzjlwnp0 . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . o4rzjlwnp0 . AQHandles , rtDW . o4rzjlwnp0 .
SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . gpydjo5krx [ 0 ]
+ 0 ) ; } } { if ( ( rtDW . ess5xfw1cg . AQHandles || rtDW . ess5xfw1cg .
SlioLTF ) && ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW .
ess5xfw1cg . AQHandles , rtDW . ess5xfw1cg . SlioLTF , 0 , ssGetTaskTime (
rtS , 1 ) , ( char * ) & rtB . gpydjo5krx [ 2 ] + 0 ) ; } } { if ( ( rtDW .
juqvuixxqk . AQHandles || rtDW . juqvuixxqk . SlioLTF ) && ssGetLogOutput (
rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . juqvuixxqk . AQHandles , rtDW .
juqvuixxqk . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
gpydjo5krx [ 4 ] + 0 ) ; } } { if ( ( rtDW . p5riohe4an . AQHandles || rtDW .
p5riohe4an . SlioLTF ) && ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal (
rtDW . p5riohe4an . AQHandles , rtDW . p5riohe4an . SlioLTF , 0 ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . gpydjo5krx [ 6 ] + 0 ) ; } } {
if ( ( rtDW . kumdlxv2pj . AQHandles || rtDW . kumdlxv2pj . SlioLTF ) &&
ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . kumdlxv2pj .
AQHandles , rtDW . kumdlxv2pj . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , (
char * ) & rtB . gpydjo5krx [ 8 ] + 0 ) ; } } { if ( ( rtDW . gxx4qdhgam .
AQHandles || rtDW . gxx4qdhgam . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . gxx4qdhgam . AQHandles , rtDW . gxx4qdhgam .
SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . gpydjo5krx [ 10
] + 0 ) ; } } } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { { if ( ( rtDW .
grbxtmi4gy . AQHandles || rtDW . grbxtmi4gy . SlioLTF ) && ssGetLogOutput (
rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . grbxtmi4gy . AQHandles , rtDW .
grbxtmi4gy . SlioLTF , 0 , ssGetTaskTime ( rtS , 2 ) , ( char * ) & rtB .
dwxdtflowp + 0 ) ; } } if ( ssGetTaskTime ( rtS , 2 ) < rtP . Step2_Time ) {
rtB . gyd45yhrb0 = rtP . Step2_Y0 ; } else { rtB . gyd45yhrb0 = rtP .
Step2_YFinal ; } { if ( ( rtDW . kf2l0bp4qf . AQHandles || rtDW . kf2l0bp4qf
. SlioLTF ) && ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW .
kf2l0bp4qf . AQHandles , rtDW . kf2l0bp4qf . SlioLTF , 0 , ssGetTaskTime (
rtS , 2 ) , ( char * ) & rtB . gyd45yhrb0 + 0 ) ; } } if ( ssGetTaskTime (
rtS , 2 ) < rtP . Step4_Time ) { rtB . lbmqmf13sh = rtP . Step4_Y0 ; } else {
rtB . lbmqmf13sh = rtP . Step4_YFinal ; } { if ( ( rtDW . cbaon5wpyd .
AQHandles || rtDW . cbaon5wpyd . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . cbaon5wpyd . AQHandles , rtDW . cbaon5wpyd .
SlioLTF , 0 , ssGetTaskTime ( rtS , 2 ) , ( char * ) & rtB . lbmqmf13sh + 0 )
; } } if ( ssGetTaskTime ( rtS , 2 ) < rtP . Step5_Time ) { rtB . lxngnkv35z
= rtP . Step5_Y0 ; } else { rtB . lxngnkv35z = rtP . Step5_YFinal ; } { if (
( rtDW . myfwmwkhyi . AQHandles || rtDW . myfwmwkhyi . SlioLTF ) &&
ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . myfwmwkhyi .
AQHandles , rtDW . myfwmwkhyi . SlioLTF , 0 , ssGetTaskTime ( rtS , 2 ) , (
char * ) & rtB . lxngnkv35z + 0 ) ; } } if ( ssGetTaskTime ( rtS , 2 ) < rtP
. Step6_Time ) { rtB . a0dbecbscz = rtP . Step6_Y0 ; } else { rtB .
a0dbecbscz = rtP . Step6_YFinal ; } { if ( ( rtDW . mhxdgqlean . AQHandles ||
rtDW . mhxdgqlean . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . mhxdgqlean . AQHandles , rtDW . mhxdgqlean .
SlioLTF , 0 , ssGetTaskTime ( rtS , 2 ) , ( char * ) & rtB . a0dbecbscz + 0 )
; } } } rtB . p52igst3gi [ 0 ] = rtB . gpydjo5krx [ 1 ] ; rtB . p52igst3gi [
1 ] = 0.0 ; rtB . p52igst3gi [ 2 ] = 0.0 ; rtB . p52igst3gi [ 3 ] = 0.0 ; rtB
. mgpqcthgau = rtX . i5qlpo3uju ; rtB . mexhqthd1u = rtP . Gain_Gain * rtB .
mgpqcthgau ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { osbonyypon = rtB .
gpydjo5krx [ 0 ] ; osbonyypon -= rtP . dFilt [ 1 ] * rtDW . oteri1his1 ; rtDW
. jzsxvhcibg = osbonyypon / rtP . dFilt [ 0 ] ; rtB . cmq4ia5e5i = rtB .
dwxdtflowp - ( rtP . nFilt [ 0 ] * rtDW . jzsxvhcibg + rtP . nFilt [ 1 ] *
rtDW . oteri1his1 ) ; rtB . beactzcnhg = rtP . Gain1_Gain * rtB . cmq4ia5e5i
; } if ( ( rtDW . heujebxouj >= ssGetT ( rtS ) ) && ( rtDW . pvucch4vyc >=
ssGetT ( rtS ) ) ) { rtB . ew3qvg4htl = 0.0 ; } else { osbonyypon = rtDW .
heujebxouj ; lastU = & rtDW . dirkxjwsro ; if ( rtDW . heujebxouj < rtDW .
pvucch4vyc ) { if ( rtDW . pvucch4vyc < ssGetT ( rtS ) ) { osbonyypon = rtDW
. pvucch4vyc ; lastU = & rtDW . lm0tw5kdhe ; } } else { if ( rtDW .
heujebxouj >= ssGetT ( rtS ) ) { osbonyypon = rtDW . pvucch4vyc ; lastU = &
rtDW . lm0tw5kdhe ; } } rtB . ew3qvg4htl = ( rtB . cmq4ia5e5i - * lastU ) / (
ssGetT ( rtS ) - osbonyypon ) ; } rtB . iwabd3jvmn = rtP . Gain2_Gain * rtB .
ew3qvg4htl ; rtB . fvblcfumvs = ( rtB . mexhqthd1u + rtB . beactzcnhg ) + rtB
. iwabd3jvmn ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . pyqarul1xn = ( rtB .
fvblcfumvs >= 0.0 ) ; } rtB . gq10553zct = rtDW . pyqarul1xn > 0 ? rtB .
fvblcfumvs : - rtB . fvblcfumvs ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
fkc3rip3zs = rtB . gq10553zct >= rtP . u5_UpperSat ? 1 : rtB . gq10553zct >
rtP . u5_LowerSat ? 0 : - 1 ; } rtB . fnu1t3c25e = rtDW . fkc3rip3zs == 1 ?
rtP . u5_UpperSat : rtDW . fkc3rip3zs == - 1 ? rtP . u5_LowerSat : rtB .
gq10553zct ; rtB . gsf1wnk0dh [ 0 ] = rtB . fnu1t3c25e ; rtB . gsf1wnk0dh [ 1
] = 0.0 ; rtB . gsf1wnk0dh [ 2 ] = 0.0 ; rtB . gsf1wnk0dh [ 3 ] = 0.0 ; rtB .
cqfxofdy2x [ 0 ] = rtB . ndqjgxllq1 ; rtB . cqfxofdy2x [ 1 ] = 0.0 ; rtB .
cqfxofdy2x [ 2 ] = 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . onotso1e4o
[ 0 ] = ! ( rtB . cqfxofdy2x [ 0 ] == rtDW . onotso1e4o [ 1 ] ) ; rtDW .
onotso1e4o [ 1 ] = rtB . cqfxofdy2x [ 0 ] ; } rtB . cqfxofdy2x [ 0 ] = rtDW .
onotso1e4o [ 1 ] ; rtB . cqfxofdy2x [ 3 ] = rtDW . onotso1e4o [ 0 ] ; rtB .
hcaj111zjs = ( real_T ) ( rtB . fvblcfumvs < 0.0 ) * rtP .
Gain_Gain_jnwrxmpd2y ; rtB . eho11whmzv [ 0 ] = rtB . hcaj111zjs ; rtB .
eho11whmzv [ 1 ] = 0.0 ; rtB . eho11whmzv [ 2 ] = 0.0 ; rtB . eho11whmzv [ 3
] = 0.0 ; simulationData = ( NeslSimulationData * ) rtDW . luqgty2sqr ;
time_e = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_e ; simulationData -> mData ->
mContStates . mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX .
mcc3w3jrrs [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . bymgp30epy ;
simulationData -> mData -> mModeVector . mN = 5 ; simulationData -> mData ->
mModeVector . mX = & rtDW . g5q2xfjrgx [ 0 ] ; tmp = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_j [
0 ] = 0 ; tmp_g [ 0 ] = rtB . gsf1wnk0dh [ 0 ] ; tmp_g [ 1 ] = rtB .
gsf1wnk0dh [ 1 ] ; tmp_g [ 2 ] = rtB . gsf1wnk0dh [ 2 ] ; tmp_g [ 3 ] = rtB .
gsf1wnk0dh [ 3 ] ; tmp_j [ 1 ] = 4 ; tmp_g [ 4 ] = rtB . cqfxofdy2x [ 0 ] ;
tmp_g [ 5 ] = rtB . cqfxofdy2x [ 1 ] ; tmp_g [ 6 ] = rtB . cqfxofdy2x [ 2 ] ;
tmp_g [ 7 ] = rtB . cqfxofdy2x [ 3 ] ; tmp_j [ 2 ] = 8 ; tmp_g [ 8 ] = rtB .
eho11whmzv [ 0 ] ; tmp_g [ 9 ] = rtB . eho11whmzv [ 1 ] ; tmp_g [ 10 ] = rtB
. eho11whmzv [ 2 ] ; tmp_g [ 11 ] = rtB . eho11whmzv [ 3 ] ; tmp_j [ 3 ] = 12
; tmp_g [ 12 ] = rtB . p52igst3gi [ 0 ] ; tmp_g [ 13 ] = rtB . p52igst3gi [ 1
] ; tmp_g [ 14 ] = rtB . p52igst3gi [ 2 ] ; tmp_g [ 15 ] = rtB . p52igst3gi [
3 ] ; tmp_j [ 4 ] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ;
simulationData -> mData -> mInputValues . mX = & tmp_g [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_j [ 0 ] ; simulationData -> mData -> mOutputs . mN = 9 ;
simulationData -> mData -> mOutputs . mX = & rtB . ghf5k2qwns [ 0 ] ;
simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData ->
mSampleHits . mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit
= false ; simulationData -> mData -> mTolerances . mN = 0 ; simulationData ->
mData -> mTolerances . mX = NULL ; simulationData -> mData ->
mCstateHasChanged = false ; diagnosticManager = ( NeuDiagnosticManager * )
rtDW . g34wywbvoq ; diagnosticTree = neu_diagnostic_manager_get_initial_tree
( diagnosticManager ) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW .
lq5wns3dvy , NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . oodgx5kilx ; time_i = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_i ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . o4fzjza1u2 ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . fsbuyljt50 ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_c [ 0 ] = 0 ;
tmp_f [ 0 ] = rtB . gsf1wnk0dh [ 0 ] ; tmp_f [ 1 ] = rtB . gsf1wnk0dh [ 1 ] ;
tmp_f [ 2 ] = rtB . gsf1wnk0dh [ 2 ] ; tmp_f [ 3 ] = rtB . gsf1wnk0dh [ 3 ] ;
tmp_c [ 1 ] = 4 ; tmp_f [ 4 ] = rtB . cqfxofdy2x [ 0 ] ; tmp_f [ 5 ] = rtB .
cqfxofdy2x [ 1 ] ; tmp_f [ 6 ] = rtB . cqfxofdy2x [ 2 ] ; tmp_f [ 7 ] = rtB .
cqfxofdy2x [ 3 ] ; tmp_c [ 2 ] = 8 ; tmp_f [ 8 ] = rtB . eho11whmzv [ 0 ] ;
tmp_f [ 9 ] = rtB . eho11whmzv [ 1 ] ; tmp_f [ 10 ] = rtB . eho11whmzv [ 2 ]
; tmp_f [ 11 ] = rtB . eho11whmzv [ 3 ] ; tmp_c [ 3 ] = 12 ; tmp_f [ 12 ] =
rtB . p52igst3gi [ 0 ] ; tmp_f [ 13 ] = rtB . p52igst3gi [ 1 ] ; tmp_f [ 14 ]
= rtB . p52igst3gi [ 2 ] ; tmp_f [ 15 ] = rtB . p52igst3gi [ 3 ] ; tmp_c [ 4
] = 16 ; memcpy ( & tmp_f [ 16 ] , & rtB . ghf5k2qwns [ 0 ] , 9U * sizeof (
real_T ) ) ; tmp_c [ 5 ] = 25 ; simulationData -> mData -> mInputValues . mN
= 25 ; simulationData -> mData -> mInputValues . mX = & tmp_f [ 0 ] ;
simulationData -> mData -> mInputOffsets . mN = 6 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_c [ 0 ] ; simulationData -> mData -> mOutputs .
mN = 1 ; simulationData -> mData -> mOutputs . mX = & rtB . hcffmyavz3 ;
simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData ->
mSampleHits . mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit
= false ; simulationData -> mData -> mTolerances . mN = 0 ; simulationData ->
mData -> mTolerances . mX = NULL ; simulationData -> mData ->
mCstateHasChanged = false ; diagnosticManager = ( NeuDiagnosticManager * )
rtDW . eav1ttze4f ; diagnosticTree = neu_diagnostic_manager_get_initial_tree
( diagnosticManager ) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW .
pqcmol2drt , NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtB . aau4qscxqc [ 0 ] = rtB . hcffmyavz3 ; rtB . aau4qscxqc [ 1 ] = 0.0 ;
rtB . aau4qscxqc [ 2 ] = 0.0 ; rtB . aau4qscxqc [ 3 ] = 0.0 ; rtB .
hb1gynnbug [ 0 ] = rtB . gpydjo5krx [ 3 ] ; rtB . hb1gynnbug [ 1 ] = 0.0 ;
rtB . hb1gynnbug [ 2 ] = 0.0 ; rtB . hb1gynnbug [ 3 ] = 0.0 ; rtB .
jad123dllm = rtX . mhwbc1sinq ; rtB . gssxmsm1u4 = rtP . Gain_Gain_jbpo1nzc5b
* rtB . jad123dllm ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { gcw2etaptr = rtB
. a0dbecbscz - rtP . Constant1_Value ; } rtB . ahmlb2tpsn = rtB . gpydjo5krx
[ 2 ] - rtP . IC_Value ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW .
jfxmq0tfqx = ( rtB . ahmlb2tpsn - rtP . dFilt [ 1 ] * rtDW . cqhilrskhq ) /
rtP . dFilt [ 0 ] ; rtB . pzzwd3lnfe = gcw2etaptr - ( rtP . nFilt [ 0 ] *
rtDW . jfxmq0tfqx + rtP . nFilt [ 1 ] * rtDW . cqhilrskhq ) ; rtB .
gvzfoeok20 = rtP . Gain1_Gain_kzkifunu2y * rtB . pzzwd3lnfe ; } if ( ( rtDW .
mq4uv2mjqx >= ssGetT ( rtS ) ) && ( rtDW . kbgbop14eq >= ssGetT ( rtS ) ) ) {
rtB . miplivlyhr = 0.0 ; } else { osbonyypon = rtDW . mq4uv2mjqx ; lastU = &
rtDW . pztqturi1b ; if ( rtDW . mq4uv2mjqx < rtDW . kbgbop14eq ) { if ( rtDW
. kbgbop14eq < ssGetT ( rtS ) ) { osbonyypon = rtDW . kbgbop14eq ; lastU = &
rtDW . jcz3rplte2 ; } } else { if ( rtDW . mq4uv2mjqx >= ssGetT ( rtS ) ) {
osbonyypon = rtDW . kbgbop14eq ; lastU = & rtDW . jcz3rplte2 ; } } rtB .
miplivlyhr = ( rtB . pzzwd3lnfe - * lastU ) / ( ssGetT ( rtS ) - osbonyypon )
; } rtB . d30jnvmibe = rtP . Gain2_Gain_cehduakigf * rtB . miplivlyhr ; rtB .
ed0x1weluj = ( rtB . gssxmsm1u4 + rtB . gvzfoeok20 ) + rtB . d30jnvmibe ; if
( ssIsMajorTimeStep ( rtS ) ) { rtDW . cogjmacv4u = ( rtB . ed0x1weluj >= 0.0
) ; } rtB . lerd3i21nu = rtDW . cogjmacv4u > 0 ? rtB . ed0x1weluj : - rtB .
ed0x1weluj ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . jydlut0pwv = rtB .
lerd3i21nu >= rtP . u5_UpperSat_ayphnxvhak ? 1 : rtB . lerd3i21nu > rtP .
u5_LowerSat_ikcgllyxwz ? 0 : - 1 ; } rtB . mwza4ency5 = rtDW . jydlut0pwv ==
1 ? rtP . u5_UpperSat_ayphnxvhak : rtDW . jydlut0pwv == - 1 ? rtP .
u5_LowerSat_ikcgllyxwz : rtB . lerd3i21nu ; rtB . mqijg4lgem [ 0 ] = rtB .
mwza4ency5 ; rtB . mqijg4lgem [ 1 ] = 0.0 ; rtB . mqijg4lgem [ 2 ] = 0.0 ;
rtB . mqijg4lgem [ 3 ] = 0.0 ; rtB . gl00bo33dy [ 0 ] = rtB . kcogqti5lt ;
rtB . gl00bo33dy [ 1 ] = 0.0 ; rtB . gl00bo33dy [ 2 ] = 0.0 ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . cmmyis0zms [ 0 ] = ! ( rtB . gl00bo33dy
[ 0 ] == rtDW . cmmyis0zms [ 1 ] ) ; rtDW . cmmyis0zms [ 1 ] = rtB .
gl00bo33dy [ 0 ] ; } rtB . gl00bo33dy [ 0 ] = rtDW . cmmyis0zms [ 1 ] ; rtB .
gl00bo33dy [ 3 ] = rtDW . cmmyis0zms [ 0 ] ; rtB . gh1rrww104 [ 0 ] = rtB .
mwza4ency5 ; rtB . gh1rrww104 [ 1 ] = 0.0 ; rtB . gh1rrww104 [ 2 ] = 0.0 ;
rtB . gh1rrww104 [ 3 ] = 0.0 ; rtB . fevlcvnz5r = ( real_T ) ( rtB .
ed0x1weluj < 0.0 ) * rtP . Gain_Gain_g2liatxyxw ; rtB . malqpcsu2s [ 0 ] =
rtB . fevlcvnz5r ; rtB . malqpcsu2s [ 1 ] = 0.0 ; rtB . malqpcsu2s [ 2 ] =
0.0 ; rtB . malqpcsu2s [ 3 ] = 0.0 ; rtB . kkeqotz05a [ 0 ] = rtB .
kcogqti5lt ; rtB . kkeqotz05a [ 1 ] = 0.0 ; rtB . kkeqotz05a [ 2 ] = 0.0 ; if
( ssIsMajorTimeStep ( rtS ) ) { rtDW . i4yre5y4ym [ 0 ] = ! ( rtB .
kkeqotz05a [ 0 ] == rtDW . i4yre5y4ym [ 1 ] ) ; rtDW . i4yre5y4ym [ 1 ] = rtB
. kkeqotz05a [ 0 ] ; } rtB . kkeqotz05a [ 0 ] = rtDW . i4yre5y4ym [ 1 ] ; rtB
. kkeqotz05a [ 3 ] = rtDW . i4yre5y4ym [ 0 ] ; rtB . ehret13uk4 [ 0 ] = rtB .
fevlcvnz5r ; rtB . ehret13uk4 [ 1 ] = 0.0 ; rtB . ehret13uk4 [ 2 ] = 0.0 ;
rtB . ehret13uk4 [ 3 ] = 0.0 ; simulationData = ( NeslSimulationData * ) rtDW
. gtngycvr1v ; time_m = ssGetT ( rtS ) ; simulationData -> mData -> mTime .
mN = 1 ; simulationData -> mData -> mTime . mX = & time_m ; simulationData ->
mData -> mContStates . mN = 8 ; simulationData -> mData -> mContStates . mX =
& rtX . p2hm1z5lwa [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . igqahwaopd ;
simulationData -> mData -> mModeVector . mN = 10 ; simulationData -> mData ->
mModeVector . mX = & rtDW . lexhviy3rv [ 0 ] ; tmp = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_b [
0 ] = 0 ; tmp_k [ 0 ] = rtB . mqijg4lgem [ 0 ] ; tmp_k [ 1 ] = rtB .
mqijg4lgem [ 1 ] ; tmp_k [ 2 ] = rtB . mqijg4lgem [ 2 ] ; tmp_k [ 3 ] = rtB .
mqijg4lgem [ 3 ] ; tmp_b [ 1 ] = 4 ; tmp_k [ 4 ] = rtB . gl00bo33dy [ 0 ] ;
tmp_k [ 5 ] = rtB . gl00bo33dy [ 1 ] ; tmp_k [ 6 ] = rtB . gl00bo33dy [ 2 ] ;
tmp_k [ 7 ] = rtB . gl00bo33dy [ 3 ] ; tmp_b [ 2 ] = 8 ; tmp_k [ 8 ] = rtB .
gh1rrww104 [ 0 ] ; tmp_k [ 9 ] = rtB . gh1rrww104 [ 1 ] ; tmp_k [ 10 ] = rtB
. gh1rrww104 [ 2 ] ; tmp_k [ 11 ] = rtB . gh1rrww104 [ 3 ] ; tmp_b [ 3 ] = 12
; tmp_k [ 12 ] = rtB . malqpcsu2s [ 0 ] ; tmp_k [ 13 ] = rtB . malqpcsu2s [ 1
] ; tmp_k [ 14 ] = rtB . malqpcsu2s [ 2 ] ; tmp_k [ 15 ] = rtB . malqpcsu2s [
3 ] ; tmp_b [ 4 ] = 16 ; tmp_k [ 16 ] = rtB . kkeqotz05a [ 0 ] ; tmp_k [ 17 ]
= rtB . kkeqotz05a [ 1 ] ; tmp_k [ 18 ] = rtB . kkeqotz05a [ 2 ] ; tmp_k [ 19
] = rtB . kkeqotz05a [ 3 ] ; tmp_b [ 5 ] = 20 ; tmp_k [ 20 ] = rtB .
ehret13uk4 [ 0 ] ; tmp_k [ 21 ] = rtB . ehret13uk4 [ 1 ] ; tmp_k [ 22 ] = rtB
. ehret13uk4 [ 2 ] ; tmp_k [ 23 ] = rtB . ehret13uk4 [ 3 ] ; tmp_b [ 6 ] = 24
; tmp_k [ 24 ] = rtB . hb1gynnbug [ 0 ] ; tmp_k [ 25 ] = rtB . hb1gynnbug [ 1
] ; tmp_k [ 26 ] = rtB . hb1gynnbug [ 2 ] ; tmp_k [ 27 ] = rtB . hb1gynnbug [
3 ] ; tmp_b [ 7 ] = 28 ; simulationData -> mData -> mInputValues . mN = 28 ;
simulationData -> mData -> mInputValues . mX = & tmp_k [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 8 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_b [ 0 ] ; simulationData -> mData -> mOutputs . mN = 18 ;
simulationData -> mData -> mOutputs . mX = & rtB . abgvchli2i [ 0 ] ;
simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData ->
mSampleHits . mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit
= false ; simulationData -> mData -> mTolerances . mN = 0 ; simulationData ->
mData -> mTolerances . mX = NULL ; simulationData -> mData ->
mCstateHasChanged = false ; diagnosticManager = ( NeuDiagnosticManager * )
rtDW . dau5zpxltv ; diagnosticTree = neu_diagnostic_manager_get_initial_tree
( diagnosticManager ) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW .
ipgckui03o , NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . a2ojuitiri ; time_g = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_g ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . fy1kz0sajb ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . cjsxeosjk2 ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_l [ 0 ] = 0 ;
tmp_n [ 0 ] = rtB . mqijg4lgem [ 0 ] ; tmp_n [ 1 ] = rtB . mqijg4lgem [ 1 ] ;
tmp_n [ 2 ] = rtB . mqijg4lgem [ 2 ] ; tmp_n [ 3 ] = rtB . mqijg4lgem [ 3 ] ;
tmp_l [ 1 ] = 4 ; tmp_n [ 4 ] = rtB . gl00bo33dy [ 0 ] ; tmp_n [ 5 ] = rtB .
gl00bo33dy [ 1 ] ; tmp_n [ 6 ] = rtB . gl00bo33dy [ 2 ] ; tmp_n [ 7 ] = rtB .
gl00bo33dy [ 3 ] ; tmp_l [ 2 ] = 8 ; tmp_n [ 8 ] = rtB . gh1rrww104 [ 0 ] ;
tmp_n [ 9 ] = rtB . gh1rrww104 [ 1 ] ; tmp_n [ 10 ] = rtB . gh1rrww104 [ 2 ]
; tmp_n [ 11 ] = rtB . gh1rrww104 [ 3 ] ; tmp_l [ 3 ] = 12 ; tmp_n [ 12 ] =
rtB . malqpcsu2s [ 0 ] ; tmp_n [ 13 ] = rtB . malqpcsu2s [ 1 ] ; tmp_n [ 14 ]
= rtB . malqpcsu2s [ 2 ] ; tmp_n [ 15 ] = rtB . malqpcsu2s [ 3 ] ; tmp_l [ 4
] = 16 ; tmp_n [ 16 ] = rtB . kkeqotz05a [ 0 ] ; tmp_n [ 17 ] = rtB .
kkeqotz05a [ 1 ] ; tmp_n [ 18 ] = rtB . kkeqotz05a [ 2 ] ; tmp_n [ 19 ] = rtB
. kkeqotz05a [ 3 ] ; tmp_l [ 5 ] = 20 ; tmp_n [ 20 ] = rtB . ehret13uk4 [ 0 ]
; tmp_n [ 21 ] = rtB . ehret13uk4 [ 1 ] ; tmp_n [ 22 ] = rtB . ehret13uk4 [ 2
] ; tmp_n [ 23 ] = rtB . ehret13uk4 [ 3 ] ; tmp_l [ 6 ] = 24 ; tmp_n [ 24 ] =
rtB . hb1gynnbug [ 0 ] ; tmp_n [ 25 ] = rtB . hb1gynnbug [ 1 ] ; tmp_n [ 26 ]
= rtB . hb1gynnbug [ 2 ] ; tmp_n [ 27 ] = rtB . hb1gynnbug [ 3 ] ; tmp_l [ 7
] = 28 ; memcpy ( & tmp_n [ 28 ] , & rtB . abgvchli2i [ 0 ] , 18U * sizeof (
real_T ) ) ; tmp_l [ 8 ] = 46 ; simulationData -> mData -> mInputValues . mN
= 46 ; simulationData -> mData -> mInputValues . mX = & tmp_n [ 0 ] ;
simulationData -> mData -> mInputOffsets . mN = 9 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_l [ 0 ] ; simulationData -> mData -> mOutputs .
mN = 1 ; simulationData -> mData -> mOutputs . mX = & rtB . amiwtetlxb ;
simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData ->
mSampleHits . mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit
= false ; simulationData -> mData -> mTolerances . mN = 0 ; simulationData ->
mData -> mTolerances . mX = NULL ; simulationData -> mData ->
mCstateHasChanged = false ; diagnosticManager = ( NeuDiagnosticManager * )
rtDW . c42r12fxzd ; diagnosticTree = neu_diagnostic_manager_get_initial_tree
( diagnosticManager ) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW .
pifdwitl4p , NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtB . ms1z3tsizg [ 0 ] = rtB . amiwtetlxb ; rtB . ms1z3tsizg [ 1 ] = 0.0 ;
rtB . ms1z3tsizg [ 2 ] = 0.0 ; rtB . ms1z3tsizg [ 3 ] = 0.0 ; rtB .
gktoanyk4z [ 0 ] = rtB . gpydjo5krx [ 5 ] ; rtB . gktoanyk4z [ 1 ] = 0.0 ;
rtB . gktoanyk4z [ 2 ] = 0.0 ; rtB . gktoanyk4z [ 3 ] = 0.0 ; rtB .
eua5qdpl0o = rtX . h45mkuq5bv ; rtB . c5e4njud25 = rtP . Gain_Gain_bw45xj3upi
* rtB . eua5qdpl0o ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { osbonyypon = rtB
. gpydjo5krx [ 4 ] ; osbonyypon -= rtP . dFilt [ 1 ] * rtDW . o11cnuhibt ;
rtDW . ndfouz54yl = osbonyypon / rtP . dFilt [ 0 ] ; rtB . orrj54i1aj = rtB .
lbmqmf13sh - ( rtP . nFilt [ 0 ] * rtDW . ndfouz54yl + rtP . nFilt [ 1 ] *
rtDW . o11cnuhibt ) ; rtB . ek20cny3ez = rtP . Gain1_Gain_eje3bhamkx * rtB .
orrj54i1aj ; } if ( ( rtDW . fb5swmqdt5 >= ssGetT ( rtS ) ) && ( rtDW .
llk4fj1ncu >= ssGetT ( rtS ) ) ) { rtB . hjapierqks = 0.0 ; } else {
osbonyypon = rtDW . fb5swmqdt5 ; lastU = & rtDW . bnfwdbxi2t ; if ( rtDW .
fb5swmqdt5 < rtDW . llk4fj1ncu ) { if ( rtDW . llk4fj1ncu < ssGetT ( rtS ) )
{ osbonyypon = rtDW . llk4fj1ncu ; lastU = & rtDW . cr1izahinw ; } } else {
if ( rtDW . fb5swmqdt5 >= ssGetT ( rtS ) ) { osbonyypon = rtDW . llk4fj1ncu ;
lastU = & rtDW . cr1izahinw ; } } rtB . hjapierqks = ( rtB . orrj54i1aj - *
lastU ) / ( ssGetT ( rtS ) - osbonyypon ) ; } rtB . n0qv0hb2ss = rtP .
Gain2_Gain_murtnwudat * rtB . hjapierqks ; rtB . g2u01f0n1g = ( rtB .
c5e4njud25 + rtB . ek20cny3ez ) + rtB . n0qv0hb2ss ; if ( ssIsMajorTimeStep (
rtS ) ) { rtDW . ehzmofotam = ( rtB . g2u01f0n1g >= 0.0 ) ; } rtB .
nusef2vdyd = rtDW . ehzmofotam > 0 ? rtB . g2u01f0n1g : - rtB . g2u01f0n1g ;
if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . hql2bzxowu = rtB . nusef2vdyd >=
rtP . u5_UpperSat_jmie0uoskq ? 1 : rtB . nusef2vdyd > rtP .
u5_LowerSat_frye4kwxrv ? 0 : - 1 ; } rtB . bbxkrfmvko = rtDW . hql2bzxowu ==
1 ? rtP . u5_UpperSat_jmie0uoskq : rtDW . hql2bzxowu == - 1 ? rtP .
u5_LowerSat_frye4kwxrv : rtB . nusef2vdyd ; rtB . oapizwvtjv [ 0 ] = rtB .
bbxkrfmvko ; rtB . oapizwvtjv [ 1 ] = 0.0 ; rtB . oapizwvtjv [ 2 ] = 0.0 ;
rtB . oapizwvtjv [ 3 ] = 0.0 ; rtB . clmozh0gh4 [ 0 ] = rtB . fuycbxh103 ;
rtB . clmozh0gh4 [ 1 ] = 0.0 ; rtB . clmozh0gh4 [ 2 ] = 0.0 ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . lzxapb1icv [ 0 ] = ! ( rtB . clmozh0gh4
[ 0 ] == rtDW . lzxapb1icv [ 1 ] ) ; rtDW . lzxapb1icv [ 1 ] = rtB .
clmozh0gh4 [ 0 ] ; } rtB . clmozh0gh4 [ 0 ] = rtDW . lzxapb1icv [ 1 ] ; rtB .
clmozh0gh4 [ 3 ] = rtDW . lzxapb1icv [ 0 ] ; rtB . mjo0qmrl1w = ( real_T ) (
rtB . g2u01f0n1g < 0.0 ) * rtP . Gain_Gain_i4wlhlbj0o ; rtB . jen3dngjzc [ 0
] = rtB . mjo0qmrl1w ; rtB . jen3dngjzc [ 1 ] = 0.0 ; rtB . jen3dngjzc [ 2 ]
= 0.0 ; rtB . jen3dngjzc [ 3 ] = 0.0 ; simulationData = ( NeslSimulationData
* ) rtDW . dc0ikbgay5 ; time_j = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_j ;
simulationData -> mData -> mContStates . mN = 4 ; simulationData -> mData ->
mContStates . mX = & rtX . gh2q4rwxqd [ 0 ] ; simulationData -> mData ->
mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = & rtDW .
dyznqu2x02 ; simulationData -> mData -> mModeVector . mN = 5 ; simulationData
-> mData -> mModeVector . mX = & rtDW . nol4hxpj0x [ 0 ] ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_o [
0 ] = 0 ; tmp_d [ 0 ] = rtB . oapizwvtjv [ 0 ] ; tmp_d [ 1 ] = rtB .
oapizwvtjv [ 1 ] ; tmp_d [ 2 ] = rtB . oapizwvtjv [ 2 ] ; tmp_d [ 3 ] = rtB .
oapizwvtjv [ 3 ] ; tmp_o [ 1 ] = 4 ; tmp_d [ 4 ] = rtB . clmozh0gh4 [ 0 ] ;
tmp_d [ 5 ] = rtB . clmozh0gh4 [ 1 ] ; tmp_d [ 6 ] = rtB . clmozh0gh4 [ 2 ] ;
tmp_d [ 7 ] = rtB . clmozh0gh4 [ 3 ] ; tmp_o [ 2 ] = 8 ; tmp_d [ 8 ] = rtB .
jen3dngjzc [ 0 ] ; tmp_d [ 9 ] = rtB . jen3dngjzc [ 1 ] ; tmp_d [ 10 ] = rtB
. jen3dngjzc [ 2 ] ; tmp_d [ 11 ] = rtB . jen3dngjzc [ 3 ] ; tmp_o [ 3 ] = 12
; tmp_d [ 12 ] = rtB . gktoanyk4z [ 0 ] ; tmp_d [ 13 ] = rtB . gktoanyk4z [ 1
] ; tmp_d [ 14 ] = rtB . gktoanyk4z [ 2 ] ; tmp_d [ 15 ] = rtB . gktoanyk4z [
3 ] ; tmp_o [ 4 ] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ;
simulationData -> mData -> mInputValues . mX = & tmp_d [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_o [ 0 ] ; simulationData -> mData -> mOutputs . mN = 9 ;
simulationData -> mData -> mOutputs . mX = & rtB . awdmp3eigf [ 0 ] ;
simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData ->
mSampleHits . mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit
= false ; simulationData -> mData -> mTolerances . mN = 0 ; simulationData ->
mData -> mTolerances . mX = NULL ; simulationData -> mData ->
mCstateHasChanged = false ; diagnosticManager = ( NeuDiagnosticManager * )
rtDW . bfzy1zqdrk ; diagnosticTree = neu_diagnostic_manager_get_initial_tree
( diagnosticManager ) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW .
hfd2kdvhft , NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . arv32tkm5f ; time_f = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_f ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . peqv01wo33 ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . ejh5vaqytw ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_fs [ 0 ] = 0
; tmp_dz [ 0 ] = rtB . oapizwvtjv [ 0 ] ; tmp_dz [ 1 ] = rtB . oapizwvtjv [ 1
] ; tmp_dz [ 2 ] = rtB . oapizwvtjv [ 2 ] ; tmp_dz [ 3 ] = rtB . oapizwvtjv [
3 ] ; tmp_fs [ 1 ] = 4 ; tmp_dz [ 4 ] = rtB . clmozh0gh4 [ 0 ] ; tmp_dz [ 5 ]
= rtB . clmozh0gh4 [ 1 ] ; tmp_dz [ 6 ] = rtB . clmozh0gh4 [ 2 ] ; tmp_dz [ 7
] = rtB . clmozh0gh4 [ 3 ] ; tmp_fs [ 2 ] = 8 ; tmp_dz [ 8 ] = rtB .
jen3dngjzc [ 0 ] ; tmp_dz [ 9 ] = rtB . jen3dngjzc [ 1 ] ; tmp_dz [ 10 ] =
rtB . jen3dngjzc [ 2 ] ; tmp_dz [ 11 ] = rtB . jen3dngjzc [ 3 ] ; tmp_fs [ 3
] = 12 ; tmp_dz [ 12 ] = rtB . gktoanyk4z [ 0 ] ; tmp_dz [ 13 ] = rtB .
gktoanyk4z [ 1 ] ; tmp_dz [ 14 ] = rtB . gktoanyk4z [ 2 ] ; tmp_dz [ 15 ] =
rtB . gktoanyk4z [ 3 ] ; tmp_fs [ 4 ] = 16 ; memcpy ( & tmp_dz [ 16 ] , & rtB
. awdmp3eigf [ 0 ] , 9U * sizeof ( real_T ) ) ; tmp_fs [ 5 ] = 25 ;
simulationData -> mData -> mInputValues . mN = 25 ; simulationData -> mData
-> mInputValues . mX = & tmp_dz [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 6 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_fs [ 0 ] ; simulationData -> mData -> mOutputs . mN = 1 ; simulationData
-> mData -> mOutputs . mX = & rtB . kurkqa5zwd ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . odxr5jqq3h ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . p1olpso2qf ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtB . hilglkudbg [ 0 ] = rtB . kurkqa5zwd ; rtB . hilglkudbg [ 1 ] = 0.0 ;
rtB . hilglkudbg [ 2 ] = 0.0 ; rtB . hilglkudbg [ 3 ] = 0.0 ; rtB .
kfhppmeqms [ 0 ] = rtB . gpydjo5krx [ 7 ] ; rtB . kfhppmeqms [ 1 ] = 0.0 ;
rtB . kfhppmeqms [ 2 ] = 0.0 ; rtB . kfhppmeqms [ 3 ] = 0.0 ; rtB .
igybt2peud = rtX . nxxszasjmi ; rtB . lnwu3wlfhg = rtP . Gain_Gain_oktz1catcm
* rtB . igybt2peud ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { osbonyypon = rtB
. gpydjo5krx [ 6 ] ; osbonyypon -= rtP . dFilt [ 1 ] * rtDW . i5kbys15rw ;
rtDW . nshioqabso = osbonyypon / rtP . dFilt [ 0 ] ; rtB . pk4qwm0mut = rtB .
lxngnkv35z - ( rtP . nFilt [ 0 ] * rtDW . nshioqabso + rtP . nFilt [ 1 ] *
rtDW . i5kbys15rw ) ; rtB . crn43in4pr = rtP . Gain1_Gain_mqf5zikroh * rtB .
pk4qwm0mut ; } if ( ( rtDW . henb0ohgwy >= ssGetT ( rtS ) ) && ( rtDW .
j3gsjqtsgp >= ssGetT ( rtS ) ) ) { rtB . kbicccj23s = 0.0 ; } else {
osbonyypon = rtDW . henb0ohgwy ; lastU = & rtDW . mix0lfmbff ; if ( rtDW .
henb0ohgwy < rtDW . j3gsjqtsgp ) { if ( rtDW . j3gsjqtsgp < ssGetT ( rtS ) )
{ osbonyypon = rtDW . j3gsjqtsgp ; lastU = & rtDW . aszjr4q3fo ; } } else {
if ( rtDW . henb0ohgwy >= ssGetT ( rtS ) ) { osbonyypon = rtDW . j3gsjqtsgp ;
lastU = & rtDW . aszjr4q3fo ; } } rtB . kbicccj23s = ( rtB . pk4qwm0mut - *
lastU ) / ( ssGetT ( rtS ) - osbonyypon ) ; } rtB . lo0ojzlm13 = rtP .
Gain2_Gain_c3ooikad3b * rtB . kbicccj23s ; rtB . c0jld3eln1 = ( rtB .
lnwu3wlfhg + rtB . crn43in4pr ) + rtB . lo0ojzlm13 ; if ( ssIsMajorTimeStep (
rtS ) ) { rtDW . juy3suewuj = ( rtB . c0jld3eln1 >= 0.0 ) ; } rtB .
i2btnrrmvd = rtDW . juy3suewuj > 0 ? rtB . c0jld3eln1 : - rtB . c0jld3eln1 ;
if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . mq0a0ndtrk = rtB . i2btnrrmvd >=
rtP . u5_UpperSat_hpv1lydza3 ? 1 : rtB . i2btnrrmvd > rtP .
u5_LowerSat_aj1ncwmb4v ? 0 : - 1 ; } rtB . bj5rgp4q21 = rtDW . mq0a0ndtrk ==
1 ? rtP . u5_UpperSat_hpv1lydza3 : rtDW . mq0a0ndtrk == - 1 ? rtP .
u5_LowerSat_aj1ncwmb4v : rtB . i2btnrrmvd ; rtB . o04jj02qiz [ 0 ] = rtB .
bj5rgp4q21 ; rtB . o04jj02qiz [ 1 ] = 0.0 ; rtB . o04jj02qiz [ 2 ] = 0.0 ;
rtB . o04jj02qiz [ 3 ] = 0.0 ; rtB . nwuia1pahi [ 0 ] = rtB . drceecbam2 ;
rtB . nwuia1pahi [ 1 ] = 0.0 ; rtB . nwuia1pahi [ 2 ] = 0.0 ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . ojlmayfn5v [ 0 ] = ! ( rtB . nwuia1pahi
[ 0 ] == rtDW . ojlmayfn5v [ 1 ] ) ; rtDW . ojlmayfn5v [ 1 ] = rtB .
nwuia1pahi [ 0 ] ; } rtB . nwuia1pahi [ 0 ] = rtDW . ojlmayfn5v [ 1 ] ; rtB .
nwuia1pahi [ 3 ] = rtDW . ojlmayfn5v [ 0 ] ; rtB . kiueaykv5e = ( real_T ) (
rtB . c0jld3eln1 < 0.0 ) * rtP . Gain_Gain_apzpwd2lcp ; rtB . dqmw4fhx14 [ 0
] = rtB . kiueaykv5e ; rtB . dqmw4fhx14 [ 1 ] = 0.0 ; rtB . dqmw4fhx14 [ 2 ]
= 0.0 ; rtB . dqmw4fhx14 [ 3 ] = 0.0 ; simulationData = ( NeslSimulationData
* ) rtDW . kl0ddpmtll ; time_c = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_c ;
simulationData -> mData -> mContStates . mN = 4 ; simulationData -> mData ->
mContStates . mX = & rtX . cdzh5av0vj [ 0 ] ; simulationData -> mData ->
mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = & rtDW .
av1vfdfdhf ; simulationData -> mData -> mModeVector . mN = 5 ; simulationData
-> mData -> mModeVector . mX = & rtDW . luhysk1n03 [ 0 ] ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_f2
[ 0 ] = 0 ; tmp_ck [ 0 ] = rtB . o04jj02qiz [ 0 ] ; tmp_ck [ 1 ] = rtB .
o04jj02qiz [ 1 ] ; tmp_ck [ 2 ] = rtB . o04jj02qiz [ 2 ] ; tmp_ck [ 3 ] = rtB
. o04jj02qiz [ 3 ] ; tmp_f2 [ 1 ] = 4 ; tmp_ck [ 4 ] = rtB . nwuia1pahi [ 0 ]
; tmp_ck [ 5 ] = rtB . nwuia1pahi [ 1 ] ; tmp_ck [ 6 ] = rtB . nwuia1pahi [ 2
] ; tmp_ck [ 7 ] = rtB . nwuia1pahi [ 3 ] ; tmp_f2 [ 2 ] = 8 ; tmp_ck [ 8 ] =
rtB . dqmw4fhx14 [ 0 ] ; tmp_ck [ 9 ] = rtB . dqmw4fhx14 [ 1 ] ; tmp_ck [ 10
] = rtB . dqmw4fhx14 [ 2 ] ; tmp_ck [ 11 ] = rtB . dqmw4fhx14 [ 3 ] ; tmp_f2
[ 3 ] = 12 ; tmp_ck [ 12 ] = rtB . kfhppmeqms [ 0 ] ; tmp_ck [ 13 ] = rtB .
kfhppmeqms [ 1 ] ; tmp_ck [ 14 ] = rtB . kfhppmeqms [ 2 ] ; tmp_ck [ 15 ] =
rtB . kfhppmeqms [ 3 ] ; tmp_f2 [ 4 ] = 16 ; simulationData -> mData ->
mInputValues . mN = 16 ; simulationData -> mData -> mInputValues . mX = &
tmp_ck [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_f2 [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 9 ; simulationData -> mData ->
mOutputs . mX = & rtB . ohur23ysum [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . lx2smnavwa ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . ckf13aqezk ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . er43jccux2 ; time_k = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_k ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . j5y42qfywc ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . k2fawuwm0d ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_lt [ 0 ] = 0
; tmp_kt [ 0 ] = rtB . o04jj02qiz [ 0 ] ; tmp_kt [ 1 ] = rtB . o04jj02qiz [ 1
] ; tmp_kt [ 2 ] = rtB . o04jj02qiz [ 2 ] ; tmp_kt [ 3 ] = rtB . o04jj02qiz [
3 ] ; tmp_lt [ 1 ] = 4 ; tmp_kt [ 4 ] = rtB . nwuia1pahi [ 0 ] ; tmp_kt [ 5 ]
= rtB . nwuia1pahi [ 1 ] ; tmp_kt [ 6 ] = rtB . nwuia1pahi [ 2 ] ; tmp_kt [ 7
] = rtB . nwuia1pahi [ 3 ] ; tmp_lt [ 2 ] = 8 ; tmp_kt [ 8 ] = rtB .
dqmw4fhx14 [ 0 ] ; tmp_kt [ 9 ] = rtB . dqmw4fhx14 [ 1 ] ; tmp_kt [ 10 ] =
rtB . dqmw4fhx14 [ 2 ] ; tmp_kt [ 11 ] = rtB . dqmw4fhx14 [ 3 ] ; tmp_lt [ 3
] = 12 ; tmp_kt [ 12 ] = rtB . kfhppmeqms [ 0 ] ; tmp_kt [ 13 ] = rtB .
kfhppmeqms [ 1 ] ; tmp_kt [ 14 ] = rtB . kfhppmeqms [ 2 ] ; tmp_kt [ 15 ] =
rtB . kfhppmeqms [ 3 ] ; tmp_lt [ 4 ] = 16 ; memcpy ( & tmp_kt [ 16 ] , & rtB
. ohur23ysum [ 0 ] , 9U * sizeof ( real_T ) ) ; tmp_lt [ 5 ] = 25 ;
simulationData -> mData -> mInputValues . mN = 25 ; simulationData -> mData
-> mInputValues . mX = & tmp_kt [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 6 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_lt [ 0 ] ; simulationData -> mData -> mOutputs . mN = 1 ; simulationData
-> mData -> mOutputs . mX = & rtB . aurpcbuhub ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . ox542gociu ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . htibunu1u0 ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtB . d4eu5sdm4t [ 0 ] = rtB . aurpcbuhub ; rtB . d4eu5sdm4t [ 1 ] = 0.0 ;
rtB . d4eu5sdm4t [ 2 ] = 0.0 ; rtB . d4eu5sdm4t [ 3 ] = 0.0 ; rtB .
b5fzixuwzk [ 0 ] = rtB . gpydjo5krx [ 9 ] ; rtB . b5fzixuwzk [ 1 ] = 0.0 ;
rtB . b5fzixuwzk [ 2 ] = 0.0 ; rtB . b5fzixuwzk [ 3 ] = 0.0 ; rtB .
gvve0qid0c = rtX . jx11onf5nn ; rtB . i5sq4akk1c = rtP . Gain_Gain_jkhmhhcb4y
* rtB . gvve0qid0c ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if (
ssGetTaskTime ( rtS , 2 ) < rtP . Step3_Time ) { rtB . hlvvjykzts = rtP .
Step3_Y0 ; } else { rtB . hlvvjykzts = rtP . Step3_YFinal ; } osbonyypon =
rtB . gpydjo5krx [ 8 ] ; osbonyypon -= rtP . dFilt [ 1 ] * rtDW . hlednh44vj
; rtDW . gw1h2vmwt3 = osbonyypon / rtP . dFilt [ 0 ] ; rtB . dvaiasoovm = rtB
. hlvvjykzts - ( rtP . nFilt [ 0 ] * rtDW . gw1h2vmwt3 + rtP . nFilt [ 1 ] *
rtDW . hlednh44vj ) ; rtB . bvsjetcrto = rtP . Gain1_Gain_d1yaneumk3 * rtB .
dvaiasoovm ; } if ( ( rtDW . p3obvvkwm4 >= ssGetT ( rtS ) ) && ( rtDW .
ijbwqrc1eb >= ssGetT ( rtS ) ) ) { rtB . grzgi3w44a = 0.0 ; } else {
osbonyypon = rtDW . p3obvvkwm4 ; lastU = & rtDW . hm0epu1iul ; if ( rtDW .
p3obvvkwm4 < rtDW . ijbwqrc1eb ) { if ( rtDW . ijbwqrc1eb < ssGetT ( rtS ) )
{ osbonyypon = rtDW . ijbwqrc1eb ; lastU = & rtDW . nr3ar0p5mz ; } } else {
if ( rtDW . p3obvvkwm4 >= ssGetT ( rtS ) ) { osbonyypon = rtDW . ijbwqrc1eb ;
lastU = & rtDW . nr3ar0p5mz ; } } rtB . grzgi3w44a = ( rtB . dvaiasoovm - *
lastU ) / ( ssGetT ( rtS ) - osbonyypon ) ; } rtB . k5pqt2ul41 = rtP .
Gain2_Gain_b1hf4hkty0 * rtB . grzgi3w44a ; rtB . n41mws5fmv = ( rtB .
i5sq4akk1c + rtB . bvsjetcrto ) + rtB . k5pqt2ul41 ; if ( ssIsMajorTimeStep (
rtS ) ) { rtDW . ou532tpast = ( rtB . n41mws5fmv >= 0.0 ) ; } rtB .
nc0gz0afr0 = rtDW . ou532tpast > 0 ? rtB . n41mws5fmv : - rtB . n41mws5fmv ;
if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . mzm23e00xt = rtB . nc0gz0afr0 >=
rtP . u5_UpperSat_cb5dw4uucg ? 1 : rtB . nc0gz0afr0 > rtP .
u5_LowerSat_m5m10l40lw ? 0 : - 1 ; } rtB . kpvaut1f0z = rtDW . mzm23e00xt ==
1 ? rtP . u5_UpperSat_cb5dw4uucg : rtDW . mzm23e00xt == - 1 ? rtP .
u5_LowerSat_m5m10l40lw : rtB . nc0gz0afr0 ; rtB . ihc2fbedkz [ 0 ] = rtB .
kpvaut1f0z ; rtB . ihc2fbedkz [ 1 ] = 0.0 ; rtB . ihc2fbedkz [ 2 ] = 0.0 ;
rtB . ihc2fbedkz [ 3 ] = 0.0 ; rtB . eppca1vjoc [ 0 ] = rtB . oopmuhnlga ;
rtB . eppca1vjoc [ 1 ] = 0.0 ; rtB . eppca1vjoc [ 2 ] = 0.0 ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . fdd414vrzu [ 0 ] = ! ( rtB . eppca1vjoc
[ 0 ] == rtDW . fdd414vrzu [ 1 ] ) ; rtDW . fdd414vrzu [ 1 ] = rtB .
eppca1vjoc [ 0 ] ; } rtB . eppca1vjoc [ 0 ] = rtDW . fdd414vrzu [ 1 ] ; rtB .
eppca1vjoc [ 3 ] = rtDW . fdd414vrzu [ 0 ] ; rtB . blkzncukfb = ( real_T ) (
rtB . n41mws5fmv < 0.0 ) * rtP . Gain_Gain_flo45vukkm ; rtB . m5j42r4u0p [ 0
] = rtB . blkzncukfb ; rtB . m5j42r4u0p [ 1 ] = 0.0 ; rtB . m5j42r4u0p [ 2 ]
= 0.0 ; rtB . m5j42r4u0p [ 3 ] = 0.0 ; simulationData = ( NeslSimulationData
* ) rtDW . gew2edtgzk ; time_b = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_b ;
simulationData -> mData -> mContStates . mN = 4 ; simulationData -> mData ->
mContStates . mX = & rtX . jeqh2re42y [ 0 ] ; simulationData -> mData ->
mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = & rtDW .
blamix54h1 ; simulationData -> mData -> mModeVector . mN = 5 ; simulationData
-> mData -> mModeVector . mX = & rtDW . icml34wspz [ 0 ] ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_ap
[ 0 ] = 0 ; tmp_hn [ 0 ] = rtB . ihc2fbedkz [ 0 ] ; tmp_hn [ 1 ] = rtB .
ihc2fbedkz [ 1 ] ; tmp_hn [ 2 ] = rtB . ihc2fbedkz [ 2 ] ; tmp_hn [ 3 ] = rtB
. ihc2fbedkz [ 3 ] ; tmp_ap [ 1 ] = 4 ; tmp_hn [ 4 ] = rtB . eppca1vjoc [ 0 ]
; tmp_hn [ 5 ] = rtB . eppca1vjoc [ 1 ] ; tmp_hn [ 6 ] = rtB . eppca1vjoc [ 2
] ; tmp_hn [ 7 ] = rtB . eppca1vjoc [ 3 ] ; tmp_ap [ 2 ] = 8 ; tmp_hn [ 8 ] =
rtB . m5j42r4u0p [ 0 ] ; tmp_hn [ 9 ] = rtB . m5j42r4u0p [ 1 ] ; tmp_hn [ 10
] = rtB . m5j42r4u0p [ 2 ] ; tmp_hn [ 11 ] = rtB . m5j42r4u0p [ 3 ] ; tmp_ap
[ 3 ] = 12 ; tmp_hn [ 12 ] = rtB . b5fzixuwzk [ 0 ] ; tmp_hn [ 13 ] = rtB .
b5fzixuwzk [ 1 ] ; tmp_hn [ 14 ] = rtB . b5fzixuwzk [ 2 ] ; tmp_hn [ 15 ] =
rtB . b5fzixuwzk [ 3 ] ; tmp_ap [ 4 ] = 16 ; simulationData -> mData ->
mInputValues . mN = 16 ; simulationData -> mData -> mInputValues . mX = &
tmp_hn [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_ap [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 9 ; simulationData -> mData ->
mOutputs . mX = & rtB . e3txp1wm1m [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . j5jrcxb4qp ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . b350mxxcd5 ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . gabyx120co ; time_n = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_n ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . ksns5guy05 ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . ku5ahlmc4f ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_po [ 0 ] = 0
; tmp_pj [ 0 ] = rtB . ihc2fbedkz [ 0 ] ; tmp_pj [ 1 ] = rtB . ihc2fbedkz [ 1
] ; tmp_pj [ 2 ] = rtB . ihc2fbedkz [ 2 ] ; tmp_pj [ 3 ] = rtB . ihc2fbedkz [
3 ] ; tmp_po [ 1 ] = 4 ; tmp_pj [ 4 ] = rtB . eppca1vjoc [ 0 ] ; tmp_pj [ 5 ]
= rtB . eppca1vjoc [ 1 ] ; tmp_pj [ 6 ] = rtB . eppca1vjoc [ 2 ] ; tmp_pj [ 7
] = rtB . eppca1vjoc [ 3 ] ; tmp_po [ 2 ] = 8 ; tmp_pj [ 8 ] = rtB .
m5j42r4u0p [ 0 ] ; tmp_pj [ 9 ] = rtB . m5j42r4u0p [ 1 ] ; tmp_pj [ 10 ] =
rtB . m5j42r4u0p [ 2 ] ; tmp_pj [ 11 ] = rtB . m5j42r4u0p [ 3 ] ; tmp_po [ 3
] = 12 ; tmp_pj [ 12 ] = rtB . b5fzixuwzk [ 0 ] ; tmp_pj [ 13 ] = rtB .
b5fzixuwzk [ 1 ] ; tmp_pj [ 14 ] = rtB . b5fzixuwzk [ 2 ] ; tmp_pj [ 15 ] =
rtB . b5fzixuwzk [ 3 ] ; tmp_po [ 4 ] = 16 ; memcpy ( & tmp_pj [ 16 ] , & rtB
. e3txp1wm1m [ 0 ] , 9U * sizeof ( real_T ) ) ; tmp_po [ 5 ] = 25 ;
simulationData -> mData -> mInputValues . mN = 25 ; simulationData -> mData
-> mInputValues . mX = & tmp_pj [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 6 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_po [ 0 ] ; simulationData -> mData -> mOutputs . mN = 1 ; simulationData
-> mData -> mOutputs . mX = & rtB . opaiauq1gv ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . klyw22x3a5 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . k3rk53cctg ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtB . pb0sw1pbnm [ 0 ] = rtB . opaiauq1gv ; rtB . pb0sw1pbnm [ 1 ] = 0.0 ;
rtB . pb0sw1pbnm [ 2 ] = 0.0 ; rtB . pb0sw1pbnm [ 3 ] = 0.0 ; rtB .
mvicam42is [ 0 ] = rtB . gpydjo5krx [ 11 ] ; rtB . mvicam42is [ 1 ] = 0.0 ;
rtB . mvicam42is [ 2 ] = 0.0 ; rtB . mvicam42is [ 3 ] = 0.0 ; rtB .
bqsdzmrrnz = rtX . o3frtqftuu ; rtB . okp4jvlpid = rtP . Gain_Gain_fvfj1aitcg
* rtB . bqsdzmrrnz ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { osbonyypon = rtB
. gpydjo5krx [ 10 ] ; osbonyypon -= rtP . dFilt [ 1 ] * rtDW . gx3cfax52r ;
rtDW . fzrdocqyjw = osbonyypon / rtP . dFilt [ 0 ] ; rtB . m2b0x0ugtl = rtB .
gyd45yhrb0 - ( rtP . nFilt [ 0 ] * rtDW . fzrdocqyjw + rtP . nFilt [ 1 ] *
rtDW . gx3cfax52r ) ; rtB . mlg3v2vp41 = rtP . Gain1_Gain_am5x3mjqzc * rtB .
m2b0x0ugtl ; } if ( ( rtDW . gjwwzw0tqq >= ssGetT ( rtS ) ) && ( rtDW .
ipcmf1bcmr >= ssGetT ( rtS ) ) ) { rtB . ksjphlyg4k = 0.0 ; } else {
osbonyypon = rtDW . gjwwzw0tqq ; lastU = & rtDW . c2umyviniw ; if ( rtDW .
gjwwzw0tqq < rtDW . ipcmf1bcmr ) { if ( rtDW . ipcmf1bcmr < ssGetT ( rtS ) )
{ osbonyypon = rtDW . ipcmf1bcmr ; lastU = & rtDW . ihznmq1yfj ; } } else {
if ( rtDW . gjwwzw0tqq >= ssGetT ( rtS ) ) { osbonyypon = rtDW . ipcmf1bcmr ;
lastU = & rtDW . ihznmq1yfj ; } } rtB . ksjphlyg4k = ( rtB . m2b0x0ugtl - *
lastU ) / ( ssGetT ( rtS ) - osbonyypon ) ; } rtB . juquj3cpm2 = rtP .
Gain2_Gain_it3d3zrzjv * rtB . ksjphlyg4k ; rtB . apgokrv2pc = ( rtB .
okp4jvlpid + rtB . mlg3v2vp41 ) + rtB . juquj3cpm2 ; if ( ssIsMajorTimeStep (
rtS ) ) { rtDW . iyoi2f4v52 = ( rtB . apgokrv2pc >= 0.0 ) ; } rtB .
icwlygycrj = rtDW . iyoi2f4v52 > 0 ? rtB . apgokrv2pc : - rtB . apgokrv2pc ;
if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . cdiv2a04j3 = rtB . icwlygycrj >=
rtP . u5_UpperSat_iylwacoy4o ? 1 : rtB . icwlygycrj > rtP .
u5_LowerSat_er1s3ovlcm ? 0 : - 1 ; } rtB . nhpl1zbtn1 = rtDW . cdiv2a04j3 ==
1 ? rtP . u5_UpperSat_iylwacoy4o : rtDW . cdiv2a04j3 == - 1 ? rtP .
u5_LowerSat_er1s3ovlcm : rtB . icwlygycrj ; rtB . mz3s2zjmce [ 0 ] = rtB .
nhpl1zbtn1 ; rtB . mz3s2zjmce [ 1 ] = 0.0 ; rtB . mz3s2zjmce [ 2 ] = 0.0 ;
rtB . mz3s2zjmce [ 3 ] = 0.0 ; rtB . e5jutfqvzq [ 0 ] = rtB . ksi1jj2j2i ;
rtB . e5jutfqvzq [ 1 ] = 0.0 ; rtB . e5jutfqvzq [ 2 ] = 0.0 ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . khqn4cuxu4 [ 0 ] = ! ( rtB . e5jutfqvzq
[ 0 ] == rtDW . khqn4cuxu4 [ 1 ] ) ; rtDW . khqn4cuxu4 [ 1 ] = rtB .
e5jutfqvzq [ 0 ] ; } rtB . e5jutfqvzq [ 0 ] = rtDW . khqn4cuxu4 [ 1 ] ; rtB .
e5jutfqvzq [ 3 ] = rtDW . khqn4cuxu4 [ 0 ] ; rtB . gmoevf1lrx = ( real_T ) (
rtB . apgokrv2pc < 0.0 ) * rtP . Gain_Gain_f23n0pwvi0 ; rtB . d35bpuglcw [ 0
] = rtB . gmoevf1lrx ; rtB . d35bpuglcw [ 1 ] = 0.0 ; rtB . d35bpuglcw [ 2 ]
= 0.0 ; rtB . d35bpuglcw [ 3 ] = 0.0 ; simulationData = ( NeslSimulationData
* ) rtDW . pjclqm00ip ; time_l = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_l ;
simulationData -> mData -> mContStates . mN = 4 ; simulationData -> mData ->
mContStates . mX = & rtX . are00on1hs [ 0 ] ; simulationData -> mData ->
mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = & rtDW .
kqoo2vremt ; simulationData -> mData -> mModeVector . mN = 5 ; simulationData
-> mData -> mModeVector . mX = & rtDW . jud4hp33kc [ 0 ] ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_d0
[ 0 ] = 0 ; tmp_pk [ 0 ] = rtB . mz3s2zjmce [ 0 ] ; tmp_pk [ 1 ] = rtB .
mz3s2zjmce [ 1 ] ; tmp_pk [ 2 ] = rtB . mz3s2zjmce [ 2 ] ; tmp_pk [ 3 ] = rtB
. mz3s2zjmce [ 3 ] ; tmp_d0 [ 1 ] = 4 ; tmp_pk [ 4 ] = rtB . e5jutfqvzq [ 0 ]
; tmp_pk [ 5 ] = rtB . e5jutfqvzq [ 1 ] ; tmp_pk [ 6 ] = rtB . e5jutfqvzq [ 2
] ; tmp_pk [ 7 ] = rtB . e5jutfqvzq [ 3 ] ; tmp_d0 [ 2 ] = 8 ; tmp_pk [ 8 ] =
rtB . d35bpuglcw [ 0 ] ; tmp_pk [ 9 ] = rtB . d35bpuglcw [ 1 ] ; tmp_pk [ 10
] = rtB . d35bpuglcw [ 2 ] ; tmp_pk [ 11 ] = rtB . d35bpuglcw [ 3 ] ; tmp_d0
[ 3 ] = 12 ; tmp_pk [ 12 ] = rtB . mvicam42is [ 0 ] ; tmp_pk [ 13 ] = rtB .
mvicam42is [ 1 ] ; tmp_pk [ 14 ] = rtB . mvicam42is [ 2 ] ; tmp_pk [ 15 ] =
rtB . mvicam42is [ 3 ] ; tmp_d0 [ 4 ] = 16 ; simulationData -> mData ->
mInputValues . mN = 16 ; simulationData -> mData -> mInputValues . mX = &
tmp_pk [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_d0 [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 9 ; simulationData -> mData ->
mOutputs . mX = & rtB . lbft5jvmo4 [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . ps0145mupz ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . nl1dyr0lbo ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . c14icyaj2t ; time_d = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_d ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . oxhl02ezne ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . ghzu5o14kj ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_m0 [ 0 ] = 0
; tmp_kh [ 0 ] = rtB . mz3s2zjmce [ 0 ] ; tmp_kh [ 1 ] = rtB . mz3s2zjmce [ 1
] ; tmp_kh [ 2 ] = rtB . mz3s2zjmce [ 2 ] ; tmp_kh [ 3 ] = rtB . mz3s2zjmce [
3 ] ; tmp_m0 [ 1 ] = 4 ; tmp_kh [ 4 ] = rtB . e5jutfqvzq [ 0 ] ; tmp_kh [ 5 ]
= rtB . e5jutfqvzq [ 1 ] ; tmp_kh [ 6 ] = rtB . e5jutfqvzq [ 2 ] ; tmp_kh [ 7
] = rtB . e5jutfqvzq [ 3 ] ; tmp_m0 [ 2 ] = 8 ; tmp_kh [ 8 ] = rtB .
d35bpuglcw [ 0 ] ; tmp_kh [ 9 ] = rtB . d35bpuglcw [ 1 ] ; tmp_kh [ 10 ] =
rtB . d35bpuglcw [ 2 ] ; tmp_kh [ 11 ] = rtB . d35bpuglcw [ 3 ] ; tmp_m0 [ 3
] = 12 ; tmp_kh [ 12 ] = rtB . mvicam42is [ 0 ] ; tmp_kh [ 13 ] = rtB .
mvicam42is [ 1 ] ; tmp_kh [ 14 ] = rtB . mvicam42is [ 2 ] ; tmp_kh [ 15 ] =
rtB . mvicam42is [ 3 ] ; tmp_m0 [ 4 ] = 16 ; memcpy ( & tmp_kh [ 16 ] , & rtB
. lbft5jvmo4 [ 0 ] , 9U * sizeof ( real_T ) ) ; tmp_m0 [ 5 ] = 25 ;
simulationData -> mData -> mInputValues . mN = 25 ; simulationData -> mData
-> mInputValues . mX = & tmp_kh [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 6 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_m0 [ 0 ] ; simulationData -> mData -> mOutputs . mN = 1 ; simulationData
-> mData -> mOutputs . mX = & rtB . mv2033hecj ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . kds0ednfxw ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . k31d01gzwi ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtB . fgvvgvfqb2 [ 0 ] = rtB . mv2033hecj ; rtB . fgvvgvfqb2 [ 1 ] = 0.0 ;
rtB . fgvvgvfqb2 [ 2 ] = 0.0 ; rtB . fgvvgvfqb2 [ 3 ] = 0.0 ; if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { { if ( ( rtDW . iasjyosrf4 . AQHandles ||
rtDW . iasjyosrf4 . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . iasjyosrf4 . AQHandles , rtDW . iasjyosrf4 .
SlioLTF , 0 , ssGetTaskTime ( rtS , 2 ) , ( char * ) & rtB . gvzfoeok20 + 0 )
; } } } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( ( rtDW . krymky00fw .
AQHandles || rtDW . krymky00fw . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . krymky00fw . AQHandles , rtDW . krymky00fw .
SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . d30jnvmibe + 0 )
; } } { if ( ( rtDW . aty3pq5a3r . AQHandles || rtDW . aty3pq5a3r . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . aty3pq5a3r .
AQHandles , rtDW . aty3pq5a3r . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , (
char * ) & rtB . gssxmsm1u4 + 0 ) ; } } } if ( ssIsSampleHit ( rtS , 2 , 0 )
) { { if ( ( rtDW . iasjyosrf4l . AQHandles || rtDW . iasjyosrf4l . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . iasjyosrf4l .
AQHandles , rtDW . iasjyosrf4l . SlioLTF , 0 , ssGetTaskTime ( rtS , 2 ) , (
char * ) & rtB . ek20cny3ez + 0 ) ; } } } if ( ssIsSampleHit ( rtS , 1 , 0 )
) { { if ( ( rtDW . krymky00fwv . AQHandles || rtDW . krymky00fwv . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . krymky00fwv .
AQHandles , rtDW . krymky00fwv . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , (
char * ) & rtB . n0qv0hb2ss + 0 ) ; } } { if ( ( rtDW . aty3pq5a3rd .
AQHandles || rtDW . aty3pq5a3rd . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . aty3pq5a3rd . AQHandles , rtDW . aty3pq5a3rd .
SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . c5e4njud25 + 0 )
; } } } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { { if ( ( rtDW . iasjyosrf4lj .
AQHandles || rtDW . iasjyosrf4lj . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . iasjyosrf4lj . AQHandles , rtDW . iasjyosrf4lj
. SlioLTF , 0 , ssGetTaskTime ( rtS , 2 ) , ( char * ) & rtB . mlg3v2vp41 + 0
) ; } } } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( ( rtDW . krymky00fwve
. AQHandles || rtDW . krymky00fwve . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . krymky00fwve . AQHandles , rtDW . krymky00fwve
. SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . juquj3cpm2 + 0
) ; } } { if ( ( rtDW . aty3pq5a3rdc . AQHandles || rtDW . aty3pq5a3rdc .
SlioLTF ) && ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW .
aty3pq5a3rdc . AQHandles , rtDW . aty3pq5a3rdc . SlioLTF , 0 , ssGetTaskTime
( rtS , 1 ) , ( char * ) & rtB . okp4jvlpid + 0 ) ; } } } if ( ssIsSampleHit
( rtS , 2 , 0 ) ) { { if ( ( rtDW . iasjyosrf4ljd . AQHandles || rtDW .
iasjyosrf4ljd . SlioLTF ) && ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal
( rtDW . iasjyosrf4ljd . AQHandles , rtDW . iasjyosrf4ljd . SlioLTF , 0 ,
ssGetTaskTime ( rtS , 2 ) , ( char * ) & rtB . bvsjetcrto + 0 ) ; } } } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( ( rtDW . krymky00fwveg . AQHandles
|| rtDW . krymky00fwveg . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . krymky00fwveg . AQHandles , rtDW .
krymky00fwveg . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
k5pqt2ul41 + 0 ) ; } } { if ( ( rtDW . aty3pq5a3rdcg . AQHandles || rtDW .
aty3pq5a3rdcg . SlioLTF ) && ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal
( rtDW . aty3pq5a3rdcg . AQHandles , rtDW . aty3pq5a3rdcg . SlioLTF , 0 ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . i5sq4akk1c + 0 ) ; } } } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { { if ( ( rtDW . iasjyosrf4ljd4 . AQHandles
|| rtDW . iasjyosrf4ljd4 . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . iasjyosrf4ljd4 . AQHandles , rtDW .
iasjyosrf4ljd4 . SlioLTF , 0 , ssGetTaskTime ( rtS , 2 ) , ( char * ) & rtB .
beactzcnhg + 0 ) ; } } } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( ( rtDW
. krymky00fwvegl . AQHandles || rtDW . krymky00fwvegl . SlioLTF ) &&
ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . krymky00fwvegl .
AQHandles , rtDW . krymky00fwvegl . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) ,
( char * ) & rtB . iwabd3jvmn + 0 ) ; } } { if ( ( rtDW . aty3pq5a3rdcgn .
AQHandles || rtDW . aty3pq5a3rdcgn . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . aty3pq5a3rdcgn . AQHandles , rtDW .
aty3pq5a3rdcgn . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
mexhqthd1u + 0 ) ; } } } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { { if ( ( rtDW
. iasjyosrf4ljd4p . AQHandles || rtDW . iasjyosrf4ljd4p . SlioLTF ) &&
ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . iasjyosrf4ljd4p .
AQHandles , rtDW . iasjyosrf4ljd4p . SlioLTF , 0 , ssGetTaskTime ( rtS , 2 )
, ( char * ) & rtB . crn43in4pr + 0 ) ; } } } if ( ssIsSampleHit ( rtS , 1 ,
0 ) ) { { if ( ( rtDW . krymky00fwvegln . AQHandles || rtDW . krymky00fwvegln
. SlioLTF ) && ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW .
krymky00fwvegln . AQHandles , rtDW . krymky00fwvegln . SlioLTF , 0 ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . lo0ojzlm13 + 0 ) ; } } { if (
( rtDW . aty3pq5a3rdcgno . AQHandles || rtDW . aty3pq5a3rdcgno . SlioLTF ) &&
ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . aty3pq5a3rdcgno .
AQHandles , rtDW . aty3pq5a3rdcgno . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 )
, ( char * ) & rtB . lnwu3wlfhg + 0 ) ; } } } UNUSED_PARAMETER ( tid ) ; }
void MdlOutputsTID3 ( int_T tid ) { if ( rtP . Break1_Value > rtP .
u5_UpperSat_ddogfqhdjr ) { rtB . kcogqti5lt = rtP . u5_UpperSat_ddogfqhdjr ;
} else if ( rtP . Break1_Value < rtP . u5_LowerSat_gld50iakmn ) { rtB .
kcogqti5lt = rtP . u5_LowerSat_gld50iakmn ; } else { rtB . kcogqti5lt = rtP .
Break1_Value ; } if ( rtP . Break2_Value > rtP . u5_UpperSat_ilmzmabkef ) {
rtB . fuycbxh103 = rtP . u5_UpperSat_ilmzmabkef ; } else if ( rtP .
Break2_Value < rtP . u5_LowerSat_i23udsynjx ) { rtB . fuycbxh103 = rtP .
u5_LowerSat_i23udsynjx ; } else { rtB . fuycbxh103 = rtP . Break2_Value ; }
if ( rtP . Break5_Value > rtP . u5_UpperSat_jkdd0lirs0 ) { rtB . ksi1jj2j2i =
rtP . u5_UpperSat_jkdd0lirs0 ; } else if ( rtP . Break5_Value < rtP .
u5_LowerSat_aqz04ismnb ) { rtB . ksi1jj2j2i = rtP . u5_LowerSat_aqz04ismnb ;
} else { rtB . ksi1jj2j2i = rtP . Break5_Value ; } if ( rtP . Break4_Value >
rtP . u5_UpperSat_jbj1vhkzdu ) { rtB . oopmuhnlga = rtP .
u5_UpperSat_jbj1vhkzdu ; } else if ( rtP . Break4_Value < rtP .
u5_LowerSat_ogs21iohyx ) { rtB . oopmuhnlga = rtP . u5_LowerSat_ogs21iohyx ;
} else { rtB . oopmuhnlga = rtP . Break4_Value ; } if ( rtP . Break_Value >
rtP . u5_UpperSat_bbllqa54th ) { rtB . ndqjgxllq1 = rtP .
u5_UpperSat_bbllqa54th ; } else if ( rtP . Break_Value < rtP .
u5_LowerSat_kcwxpitudz ) { rtB . ndqjgxllq1 = rtP . u5_LowerSat_kcwxpitudz ;
} else { rtB . ndqjgxllq1 = rtP . Break_Value ; } if ( rtP . Break3_Value >
rtP . u5_UpperSat_bxht0cl33x ) { rtB . drceecbam2 = rtP .
u5_UpperSat_bxht0cl33x ; } else if ( rtP . Break3_Value < rtP .
u5_LowerSat_lva0v3mt5c ) { rtB . drceecbam2 = rtP . u5_LowerSat_lva0v3mt5c ;
} else { rtB . drceecbam2 = rtP . Break3_Value ; } UNUSED_PARAMETER ( tid ) ;
} void MdlUpdate ( int_T tid ) { NeslSimulationData * simulationData ; real_T
time ; boolean_T tmp ; real_T tmp_p [ 24 ] ; int_T tmp_e [ 7 ] ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; char * msg ; int32_T k ; real_T * lastU ; real_T time_p ; real_T tmp_i [ 16
] ; int_T tmp_m [ 5 ] ; real_T time_e ; real_T tmp_g [ 28 ] ; int_T tmp_j [ 8
] ; real_T time_i ; real_T tmp_f [ 16 ] ; int_T tmp_c [ 5 ] ; real_T time_m ;
real_T tmp_k [ 16 ] ; int_T tmp_b [ 5 ] ; real_T time_g ; real_T tmp_n [ 16 ]
; int_T tmp_l [ 5 ] ; real_T time_j ; real_T tmp_d [ 16 ] ; int_T tmp_o [ 5 ]
; simulationData = ( NeslSimulationData * ) rtDW . l4g30qb3cj ; time = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 28 ;
simulationData -> mData -> mContStates . mX = & rtX . ce41paa4nx [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 1 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . datwzvdkzf ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
m04ffi3voe ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
aau4qscxqc [ 0 ] ; tmp_p [ 1 ] = rtB . aau4qscxqc [ 1 ] ; tmp_p [ 2 ] = rtB .
aau4qscxqc [ 2 ] ; tmp_p [ 3 ] = rtB . aau4qscxqc [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . ms1z3tsizg [ 0 ] ; tmp_p [ 5 ] = rtB . ms1z3tsizg [ 1 ] ;
tmp_p [ 6 ] = rtB . ms1z3tsizg [ 2 ] ; tmp_p [ 7 ] = rtB . ms1z3tsizg [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . hilglkudbg [ 0 ] ; tmp_p [ 9 ] = rtB .
hilglkudbg [ 1 ] ; tmp_p [ 10 ] = rtB . hilglkudbg [ 2 ] ; tmp_p [ 11 ] = rtB
. hilglkudbg [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . d4eu5sdm4t [ 0 ]
; tmp_p [ 13 ] = rtB . d4eu5sdm4t [ 1 ] ; tmp_p [ 14 ] = rtB . d4eu5sdm4t [ 2
] ; tmp_p [ 15 ] = rtB . d4eu5sdm4t [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . pb0sw1pbnm [ 0 ] ; tmp_p [ 17 ] = rtB . pb0sw1pbnm [ 1 ] ; tmp_p [ 18 ]
= rtB . pb0sw1pbnm [ 2 ] ; tmp_p [ 19 ] = rtB . pb0sw1pbnm [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . fgvvgvfqb2 [ 0 ] ; tmp_p [ 21 ] = rtB .
fgvvgvfqb2 [ 1 ] ; tmp_p [ 22 ] = rtB . fgvvgvfqb2 [ 2 ] ; tmp_p [ 23 ] = rtB
. fgvvgvfqb2 [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . npqncjuh4p ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . hymu3nho1w ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . oteri1his1 = rtDW . jzsxvhcibg
; } if ( rtDW . heujebxouj == ( rtInf ) ) { rtDW . heujebxouj = ssGetT ( rtS
) ; lastU = & rtDW . dirkxjwsro ; } else if ( rtDW . pvucch4vyc == ( rtInf )
) { rtDW . pvucch4vyc = ssGetT ( rtS ) ; lastU = & rtDW . lm0tw5kdhe ; } else
if ( rtDW . heujebxouj < rtDW . pvucch4vyc ) { rtDW . heujebxouj = ssGetT (
rtS ) ; lastU = & rtDW . dirkxjwsro ; } else { rtDW . pvucch4vyc = ssGetT (
rtS ) ; lastU = & rtDW . lm0tw5kdhe ; } * lastU = rtB . cmq4ia5e5i ;
simulationData = ( NeslSimulationData * ) rtDW . luqgty2sqr ; time_p = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_p ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . mcc3w3jrrs [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . bymgp30epy ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
g5q2xfjrgx [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_m [ 0 ] = 0 ; tmp_i [ 0 ] = rtB .
gsf1wnk0dh [ 0 ] ; tmp_i [ 1 ] = rtB . gsf1wnk0dh [ 1 ] ; tmp_i [ 2 ] = rtB .
gsf1wnk0dh [ 2 ] ; tmp_i [ 3 ] = rtB . gsf1wnk0dh [ 3 ] ; tmp_m [ 1 ] = 4 ;
tmp_i [ 4 ] = rtB . cqfxofdy2x [ 0 ] ; tmp_i [ 5 ] = rtB . cqfxofdy2x [ 1 ] ;
tmp_i [ 6 ] = rtB . cqfxofdy2x [ 2 ] ; tmp_i [ 7 ] = rtB . cqfxofdy2x [ 3 ] ;
tmp_m [ 2 ] = 8 ; tmp_i [ 8 ] = rtB . eho11whmzv [ 0 ] ; tmp_i [ 9 ] = rtB .
eho11whmzv [ 1 ] ; tmp_i [ 10 ] = rtB . eho11whmzv [ 2 ] ; tmp_i [ 11 ] = rtB
. eho11whmzv [ 3 ] ; tmp_m [ 3 ] = 12 ; tmp_i [ 12 ] = rtB . p52igst3gi [ 0 ]
; tmp_i [ 13 ] = rtB . p52igst3gi [ 1 ] ; tmp_i [ 14 ] = rtB . p52igst3gi [ 2
] ; tmp_i [ 15 ] = rtB . p52igst3gi [ 3 ] ; tmp_m [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_i [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_m [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . g34wywbvoq ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . lq5wns3dvy ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . cqhilrskhq = rtDW . jfxmq0tfqx
; } if ( rtDW . mq4uv2mjqx == ( rtInf ) ) { rtDW . mq4uv2mjqx = ssGetT ( rtS
) ; lastU = & rtDW . pztqturi1b ; } else if ( rtDW . kbgbop14eq == ( rtInf )
) { rtDW . kbgbop14eq = ssGetT ( rtS ) ; lastU = & rtDW . jcz3rplte2 ; } else
if ( rtDW . mq4uv2mjqx < rtDW . kbgbop14eq ) { rtDW . mq4uv2mjqx = ssGetT (
rtS ) ; lastU = & rtDW . pztqturi1b ; } else { rtDW . kbgbop14eq = ssGetT (
rtS ) ; lastU = & rtDW . jcz3rplte2 ; } * lastU = rtB . pzzwd3lnfe ;
simulationData = ( NeslSimulationData * ) rtDW . gtngycvr1v ; time_e = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_e ; simulationData -> mData -> mContStates . mN = 8 ;
simulationData -> mData -> mContStates . mX = & rtX . p2hm1z5lwa [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . igqahwaopd ; simulationData -> mData ->
mModeVector . mN = 10 ; simulationData -> mData -> mModeVector . mX = & rtDW
. lexhviy3rv [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_j [ 0 ] = 0 ; tmp_g [ 0 ] = rtB .
mqijg4lgem [ 0 ] ; tmp_g [ 1 ] = rtB . mqijg4lgem [ 1 ] ; tmp_g [ 2 ] = rtB .
mqijg4lgem [ 2 ] ; tmp_g [ 3 ] = rtB . mqijg4lgem [ 3 ] ; tmp_j [ 1 ] = 4 ;
tmp_g [ 4 ] = rtB . gl00bo33dy [ 0 ] ; tmp_g [ 5 ] = rtB . gl00bo33dy [ 1 ] ;
tmp_g [ 6 ] = rtB . gl00bo33dy [ 2 ] ; tmp_g [ 7 ] = rtB . gl00bo33dy [ 3 ] ;
tmp_j [ 2 ] = 8 ; tmp_g [ 8 ] = rtB . gh1rrww104 [ 0 ] ; tmp_g [ 9 ] = rtB .
gh1rrww104 [ 1 ] ; tmp_g [ 10 ] = rtB . gh1rrww104 [ 2 ] ; tmp_g [ 11 ] = rtB
. gh1rrww104 [ 3 ] ; tmp_j [ 3 ] = 12 ; tmp_g [ 12 ] = rtB . malqpcsu2s [ 0 ]
; tmp_g [ 13 ] = rtB . malqpcsu2s [ 1 ] ; tmp_g [ 14 ] = rtB . malqpcsu2s [ 2
] ; tmp_g [ 15 ] = rtB . malqpcsu2s [ 3 ] ; tmp_j [ 4 ] = 16 ; tmp_g [ 16 ] =
rtB . kkeqotz05a [ 0 ] ; tmp_g [ 17 ] = rtB . kkeqotz05a [ 1 ] ; tmp_g [ 18 ]
= rtB . kkeqotz05a [ 2 ] ; tmp_g [ 19 ] = rtB . kkeqotz05a [ 3 ] ; tmp_j [ 5
] = 20 ; tmp_g [ 20 ] = rtB . ehret13uk4 [ 0 ] ; tmp_g [ 21 ] = rtB .
ehret13uk4 [ 1 ] ; tmp_g [ 22 ] = rtB . ehret13uk4 [ 2 ] ; tmp_g [ 23 ] = rtB
. ehret13uk4 [ 3 ] ; tmp_j [ 6 ] = 24 ; tmp_g [ 24 ] = rtB . hb1gynnbug [ 0 ]
; tmp_g [ 25 ] = rtB . hb1gynnbug [ 1 ] ; tmp_g [ 26 ] = rtB . hb1gynnbug [ 2
] ; tmp_g [ 27 ] = rtB . hb1gynnbug [ 3 ] ; tmp_j [ 7 ] = 28 ; simulationData
-> mData -> mInputValues . mN = 28 ; simulationData -> mData -> mInputValues
. mX = & tmp_g [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 8 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_j [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . dau5zpxltv ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . ipgckui03o ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . o11cnuhibt = rtDW . ndfouz54yl
; } if ( rtDW . fb5swmqdt5 == ( rtInf ) ) { rtDW . fb5swmqdt5 = ssGetT ( rtS
) ; lastU = & rtDW . bnfwdbxi2t ; } else if ( rtDW . llk4fj1ncu == ( rtInf )
) { rtDW . llk4fj1ncu = ssGetT ( rtS ) ; lastU = & rtDW . cr1izahinw ; } else
if ( rtDW . fb5swmqdt5 < rtDW . llk4fj1ncu ) { rtDW . fb5swmqdt5 = ssGetT (
rtS ) ; lastU = & rtDW . bnfwdbxi2t ; } else { rtDW . llk4fj1ncu = ssGetT (
rtS ) ; lastU = & rtDW . cr1izahinw ; } * lastU = rtB . orrj54i1aj ;
simulationData = ( NeslSimulationData * ) rtDW . dc0ikbgay5 ; time_i = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_i ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . gh2q4rwxqd [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . dyznqu2x02 ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
nol4hxpj0x [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_c [ 0 ] = 0 ; tmp_f [ 0 ] = rtB .
oapizwvtjv [ 0 ] ; tmp_f [ 1 ] = rtB . oapizwvtjv [ 1 ] ; tmp_f [ 2 ] = rtB .
oapizwvtjv [ 2 ] ; tmp_f [ 3 ] = rtB . oapizwvtjv [ 3 ] ; tmp_c [ 1 ] = 4 ;
tmp_f [ 4 ] = rtB . clmozh0gh4 [ 0 ] ; tmp_f [ 5 ] = rtB . clmozh0gh4 [ 1 ] ;
tmp_f [ 6 ] = rtB . clmozh0gh4 [ 2 ] ; tmp_f [ 7 ] = rtB . clmozh0gh4 [ 3 ] ;
tmp_c [ 2 ] = 8 ; tmp_f [ 8 ] = rtB . jen3dngjzc [ 0 ] ; tmp_f [ 9 ] = rtB .
jen3dngjzc [ 1 ] ; tmp_f [ 10 ] = rtB . jen3dngjzc [ 2 ] ; tmp_f [ 11 ] = rtB
. jen3dngjzc [ 3 ] ; tmp_c [ 3 ] = 12 ; tmp_f [ 12 ] = rtB . gktoanyk4z [ 0 ]
; tmp_f [ 13 ] = rtB . gktoanyk4z [ 1 ] ; tmp_f [ 14 ] = rtB . gktoanyk4z [ 2
] ; tmp_f [ 15 ] = rtB . gktoanyk4z [ 3 ] ; tmp_c [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_f [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_c [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . bfzy1zqdrk ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . hfd2kdvhft ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . i5kbys15rw = rtDW . nshioqabso
; } if ( rtDW . henb0ohgwy == ( rtInf ) ) { rtDW . henb0ohgwy = ssGetT ( rtS
) ; lastU = & rtDW . mix0lfmbff ; } else if ( rtDW . j3gsjqtsgp == ( rtInf )
) { rtDW . j3gsjqtsgp = ssGetT ( rtS ) ; lastU = & rtDW . aszjr4q3fo ; } else
if ( rtDW . henb0ohgwy < rtDW . j3gsjqtsgp ) { rtDW . henb0ohgwy = ssGetT (
rtS ) ; lastU = & rtDW . mix0lfmbff ; } else { rtDW . j3gsjqtsgp = ssGetT (
rtS ) ; lastU = & rtDW . aszjr4q3fo ; } * lastU = rtB . pk4qwm0mut ;
simulationData = ( NeslSimulationData * ) rtDW . kl0ddpmtll ; time_m = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_m ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . cdzh5av0vj [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . av1vfdfdhf ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
luhysk1n03 [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_b [ 0 ] = 0 ; tmp_k [ 0 ] = rtB .
o04jj02qiz [ 0 ] ; tmp_k [ 1 ] = rtB . o04jj02qiz [ 1 ] ; tmp_k [ 2 ] = rtB .
o04jj02qiz [ 2 ] ; tmp_k [ 3 ] = rtB . o04jj02qiz [ 3 ] ; tmp_b [ 1 ] = 4 ;
tmp_k [ 4 ] = rtB . nwuia1pahi [ 0 ] ; tmp_k [ 5 ] = rtB . nwuia1pahi [ 1 ] ;
tmp_k [ 6 ] = rtB . nwuia1pahi [ 2 ] ; tmp_k [ 7 ] = rtB . nwuia1pahi [ 3 ] ;
tmp_b [ 2 ] = 8 ; tmp_k [ 8 ] = rtB . dqmw4fhx14 [ 0 ] ; tmp_k [ 9 ] = rtB .
dqmw4fhx14 [ 1 ] ; tmp_k [ 10 ] = rtB . dqmw4fhx14 [ 2 ] ; tmp_k [ 11 ] = rtB
. dqmw4fhx14 [ 3 ] ; tmp_b [ 3 ] = 12 ; tmp_k [ 12 ] = rtB . kfhppmeqms [ 0 ]
; tmp_k [ 13 ] = rtB . kfhppmeqms [ 1 ] ; tmp_k [ 14 ] = rtB . kfhppmeqms [ 2
] ; tmp_k [ 15 ] = rtB . kfhppmeqms [ 3 ] ; tmp_b [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_k [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_b [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . lx2smnavwa ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . ckf13aqezk ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . hlednh44vj = rtDW . gw1h2vmwt3
; } if ( rtDW . p3obvvkwm4 == ( rtInf ) ) { rtDW . p3obvvkwm4 = ssGetT ( rtS
) ; lastU = & rtDW . hm0epu1iul ; } else if ( rtDW . ijbwqrc1eb == ( rtInf )
) { rtDW . ijbwqrc1eb = ssGetT ( rtS ) ; lastU = & rtDW . nr3ar0p5mz ; } else
if ( rtDW . p3obvvkwm4 < rtDW . ijbwqrc1eb ) { rtDW . p3obvvkwm4 = ssGetT (
rtS ) ; lastU = & rtDW . hm0epu1iul ; } else { rtDW . ijbwqrc1eb = ssGetT (
rtS ) ; lastU = & rtDW . nr3ar0p5mz ; } * lastU = rtB . dvaiasoovm ;
simulationData = ( NeslSimulationData * ) rtDW . gew2edtgzk ; time_g = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_g ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . jeqh2re42y [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . blamix54h1 ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
icml34wspz [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_l [ 0 ] = 0 ; tmp_n [ 0 ] = rtB .
ihc2fbedkz [ 0 ] ; tmp_n [ 1 ] = rtB . ihc2fbedkz [ 1 ] ; tmp_n [ 2 ] = rtB .
ihc2fbedkz [ 2 ] ; tmp_n [ 3 ] = rtB . ihc2fbedkz [ 3 ] ; tmp_l [ 1 ] = 4 ;
tmp_n [ 4 ] = rtB . eppca1vjoc [ 0 ] ; tmp_n [ 5 ] = rtB . eppca1vjoc [ 1 ] ;
tmp_n [ 6 ] = rtB . eppca1vjoc [ 2 ] ; tmp_n [ 7 ] = rtB . eppca1vjoc [ 3 ] ;
tmp_l [ 2 ] = 8 ; tmp_n [ 8 ] = rtB . m5j42r4u0p [ 0 ] ; tmp_n [ 9 ] = rtB .
m5j42r4u0p [ 1 ] ; tmp_n [ 10 ] = rtB . m5j42r4u0p [ 2 ] ; tmp_n [ 11 ] = rtB
. m5j42r4u0p [ 3 ] ; tmp_l [ 3 ] = 12 ; tmp_n [ 12 ] = rtB . b5fzixuwzk [ 0 ]
; tmp_n [ 13 ] = rtB . b5fzixuwzk [ 1 ] ; tmp_n [ 14 ] = rtB . b5fzixuwzk [ 2
] ; tmp_n [ 15 ] = rtB . b5fzixuwzk [ 3 ] ; tmp_l [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_n [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_l [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . j5jrcxb4qp ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . b350mxxcd5 ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . gx3cfax52r = rtDW . fzrdocqyjw
; } if ( rtDW . gjwwzw0tqq == ( rtInf ) ) { rtDW . gjwwzw0tqq = ssGetT ( rtS
) ; lastU = & rtDW . c2umyviniw ; } else if ( rtDW . ipcmf1bcmr == ( rtInf )
) { rtDW . ipcmf1bcmr = ssGetT ( rtS ) ; lastU = & rtDW . ihznmq1yfj ; } else
if ( rtDW . gjwwzw0tqq < rtDW . ipcmf1bcmr ) { rtDW . gjwwzw0tqq = ssGetT (
rtS ) ; lastU = & rtDW . c2umyviniw ; } else { rtDW . ipcmf1bcmr = ssGetT (
rtS ) ; lastU = & rtDW . ihznmq1yfj ; } * lastU = rtB . m2b0x0ugtl ;
simulationData = ( NeslSimulationData * ) rtDW . pjclqm00ip ; time_j = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_j ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . are00on1hs [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . kqoo2vremt ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
jud4hp33kc [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_o [ 0 ] = 0 ; tmp_d [ 0 ] = rtB .
mz3s2zjmce [ 0 ] ; tmp_d [ 1 ] = rtB . mz3s2zjmce [ 1 ] ; tmp_d [ 2 ] = rtB .
mz3s2zjmce [ 2 ] ; tmp_d [ 3 ] = rtB . mz3s2zjmce [ 3 ] ; tmp_o [ 1 ] = 4 ;
tmp_d [ 4 ] = rtB . e5jutfqvzq [ 0 ] ; tmp_d [ 5 ] = rtB . e5jutfqvzq [ 1 ] ;
tmp_d [ 6 ] = rtB . e5jutfqvzq [ 2 ] ; tmp_d [ 7 ] = rtB . e5jutfqvzq [ 3 ] ;
tmp_o [ 2 ] = 8 ; tmp_d [ 8 ] = rtB . d35bpuglcw [ 0 ] ; tmp_d [ 9 ] = rtB .
d35bpuglcw [ 1 ] ; tmp_d [ 10 ] = rtB . d35bpuglcw [ 2 ] ; tmp_d [ 11 ] = rtB
. d35bpuglcw [ 3 ] ; tmp_o [ 3 ] = 12 ; tmp_d [ 12 ] = rtB . mvicam42is [ 0 ]
; tmp_d [ 13 ] = rtB . mvicam42is [ 1 ] ; tmp_d [ 14 ] = rtB . mvicam42is [ 2
] ; tmp_d [ 15 ] = rtB . mvicam42is [ 3 ] ; tmp_o [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_d [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_o [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . ps0145mupz ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . nl1dyr0lbo ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID3 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) {
NeslSimulationData * simulationData ; real_T time ; boolean_T tmp ; real_T
tmp_p [ 24 ] ; int_T tmp_e [ 7 ] ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; int32_T tmp_i ; char * msg ; real_T
time_p ; real_T tmp_m [ 16 ] ; int_T tmp_g [ 5 ] ; real_T time_e ; real_T
tmp_j [ 28 ] ; int_T tmp_f [ 8 ] ; real_T time_i ; real_T tmp_c [ 16 ] ;
int_T tmp_k [ 5 ] ; real_T time_m ; real_T tmp_b [ 16 ] ; int_T tmp_n [ 5 ] ;
real_T time_g ; real_T tmp_l [ 16 ] ; int_T tmp_d [ 5 ] ; real_T time_j ;
real_T tmp_o [ 16 ] ; int_T tmp_dz [ 5 ] ; XDot * _rtXdot ; _rtXdot = ( (
XDot * ) ssGetdX ( rtS ) ) ; simulationData = ( NeslSimulationData * ) rtDW .
l4g30qb3cj ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN =
1 ; simulationData -> mData -> mTime . mX = & time ; simulationData -> mData
-> mContStates . mN = 28 ; simulationData -> mData -> mContStates . mX = &
rtX . ce41paa4nx [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 1 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . datwzvdkzf ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . m04ffi3voe ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
aau4qscxqc [ 0 ] ; tmp_p [ 1 ] = rtB . aau4qscxqc [ 1 ] ; tmp_p [ 2 ] = rtB .
aau4qscxqc [ 2 ] ; tmp_p [ 3 ] = rtB . aau4qscxqc [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . ms1z3tsizg [ 0 ] ; tmp_p [ 5 ] = rtB . ms1z3tsizg [ 1 ] ;
tmp_p [ 6 ] = rtB . ms1z3tsizg [ 2 ] ; tmp_p [ 7 ] = rtB . ms1z3tsizg [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . hilglkudbg [ 0 ] ; tmp_p [ 9 ] = rtB .
hilglkudbg [ 1 ] ; tmp_p [ 10 ] = rtB . hilglkudbg [ 2 ] ; tmp_p [ 11 ] = rtB
. hilglkudbg [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . d4eu5sdm4t [ 0 ]
; tmp_p [ 13 ] = rtB . d4eu5sdm4t [ 1 ] ; tmp_p [ 14 ] = rtB . d4eu5sdm4t [ 2
] ; tmp_p [ 15 ] = rtB . d4eu5sdm4t [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . pb0sw1pbnm [ 0 ] ; tmp_p [ 17 ] = rtB . pb0sw1pbnm [ 1 ] ; tmp_p [ 18 ]
= rtB . pb0sw1pbnm [ 2 ] ; tmp_p [ 19 ] = rtB . pb0sw1pbnm [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . fgvvgvfqb2 [ 0 ] ; tmp_p [ 21 ] = rtB .
fgvvgvfqb2 [ 1 ] ; tmp_p [ 22 ] = rtB . fgvvgvfqb2 [ 2 ] ; tmp_p [ 23 ] = rtB
. fgvvgvfqb2 [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 28 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> ce41paa4nx [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . npqncjuh4p ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . hymu3nho1w ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } _rtXdot -> i5qlpo3uju = rtB . cmq4ia5e5i ; simulationData = (
NeslSimulationData * ) rtDW . luqgty2sqr ; time_p = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_p ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . mcc3w3jrrs [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . bymgp30epy ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
g5q2xfjrgx [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_g [ 0 ] = 0 ; tmp_m [ 0 ] = rtB .
gsf1wnk0dh [ 0 ] ; tmp_m [ 1 ] = rtB . gsf1wnk0dh [ 1 ] ; tmp_m [ 2 ] = rtB .
gsf1wnk0dh [ 2 ] ; tmp_m [ 3 ] = rtB . gsf1wnk0dh [ 3 ] ; tmp_g [ 1 ] = 4 ;
tmp_m [ 4 ] = rtB . cqfxofdy2x [ 0 ] ; tmp_m [ 5 ] = rtB . cqfxofdy2x [ 1 ] ;
tmp_m [ 6 ] = rtB . cqfxofdy2x [ 2 ] ; tmp_m [ 7 ] = rtB . cqfxofdy2x [ 3 ] ;
tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB . eho11whmzv [ 0 ] ; tmp_m [ 9 ] = rtB .
eho11whmzv [ 1 ] ; tmp_m [ 10 ] = rtB . eho11whmzv [ 2 ] ; tmp_m [ 11 ] = rtB
. eho11whmzv [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] = rtB . p52igst3gi [ 0 ]
; tmp_m [ 13 ] = rtB . p52igst3gi [ 1 ] ; tmp_m [ 14 ] = rtB . p52igst3gi [ 2
] ; tmp_m [ 15 ] = rtB . p52igst3gi [ 3 ] ; tmp_g [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
simulationData -> mData -> mDx . mN = 4 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> mcc3w3jrrs [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . g34wywbvoq ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . lq5wns3dvy ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } _rtXdot -> mhwbc1sinq = rtB . pzzwd3lnfe ; simulationData = (
NeslSimulationData * ) rtDW . gtngycvr1v ; time_e = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_e ; simulationData -> mData -> mContStates . mN = 8 ;
simulationData -> mData -> mContStates . mX = & rtX . p2hm1z5lwa [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . igqahwaopd ; simulationData -> mData ->
mModeVector . mN = 10 ; simulationData -> mData -> mModeVector . mX = & rtDW
. lexhviy3rv [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_f [ 0 ] = 0 ; tmp_j [ 0 ] = rtB .
mqijg4lgem [ 0 ] ; tmp_j [ 1 ] = rtB . mqijg4lgem [ 1 ] ; tmp_j [ 2 ] = rtB .
mqijg4lgem [ 2 ] ; tmp_j [ 3 ] = rtB . mqijg4lgem [ 3 ] ; tmp_f [ 1 ] = 4 ;
tmp_j [ 4 ] = rtB . gl00bo33dy [ 0 ] ; tmp_j [ 5 ] = rtB . gl00bo33dy [ 1 ] ;
tmp_j [ 6 ] = rtB . gl00bo33dy [ 2 ] ; tmp_j [ 7 ] = rtB . gl00bo33dy [ 3 ] ;
tmp_f [ 2 ] = 8 ; tmp_j [ 8 ] = rtB . gh1rrww104 [ 0 ] ; tmp_j [ 9 ] = rtB .
gh1rrww104 [ 1 ] ; tmp_j [ 10 ] = rtB . gh1rrww104 [ 2 ] ; tmp_j [ 11 ] = rtB
. gh1rrww104 [ 3 ] ; tmp_f [ 3 ] = 12 ; tmp_j [ 12 ] = rtB . malqpcsu2s [ 0 ]
; tmp_j [ 13 ] = rtB . malqpcsu2s [ 1 ] ; tmp_j [ 14 ] = rtB . malqpcsu2s [ 2
] ; tmp_j [ 15 ] = rtB . malqpcsu2s [ 3 ] ; tmp_f [ 4 ] = 16 ; tmp_j [ 16 ] =
rtB . kkeqotz05a [ 0 ] ; tmp_j [ 17 ] = rtB . kkeqotz05a [ 1 ] ; tmp_j [ 18 ]
= rtB . kkeqotz05a [ 2 ] ; tmp_j [ 19 ] = rtB . kkeqotz05a [ 3 ] ; tmp_f [ 5
] = 20 ; tmp_j [ 20 ] = rtB . ehret13uk4 [ 0 ] ; tmp_j [ 21 ] = rtB .
ehret13uk4 [ 1 ] ; tmp_j [ 22 ] = rtB . ehret13uk4 [ 2 ] ; tmp_j [ 23 ] = rtB
. ehret13uk4 [ 3 ] ; tmp_f [ 6 ] = 24 ; tmp_j [ 24 ] = rtB . hb1gynnbug [ 0 ]
; tmp_j [ 25 ] = rtB . hb1gynnbug [ 1 ] ; tmp_j [ 26 ] = rtB . hb1gynnbug [ 2
] ; tmp_j [ 27 ] = rtB . hb1gynnbug [ 3 ] ; tmp_f [ 7 ] = 28 ; simulationData
-> mData -> mInputValues . mN = 28 ; simulationData -> mData -> mInputValues
. mX = & tmp_j [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 8 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_f [ 0 ] ;
simulationData -> mData -> mDx . mN = 8 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> p2hm1z5lwa [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . dau5zpxltv ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . ipgckui03o ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } _rtXdot -> h45mkuq5bv = rtB . orrj54i1aj ; simulationData = (
NeslSimulationData * ) rtDW . dc0ikbgay5 ; time_i = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_i ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . gh2q4rwxqd [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . dyznqu2x02 ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
nol4hxpj0x [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_k [ 0 ] = 0 ; tmp_c [ 0 ] = rtB .
oapizwvtjv [ 0 ] ; tmp_c [ 1 ] = rtB . oapizwvtjv [ 1 ] ; tmp_c [ 2 ] = rtB .
oapizwvtjv [ 2 ] ; tmp_c [ 3 ] = rtB . oapizwvtjv [ 3 ] ; tmp_k [ 1 ] = 4 ;
tmp_c [ 4 ] = rtB . clmozh0gh4 [ 0 ] ; tmp_c [ 5 ] = rtB . clmozh0gh4 [ 1 ] ;
tmp_c [ 6 ] = rtB . clmozh0gh4 [ 2 ] ; tmp_c [ 7 ] = rtB . clmozh0gh4 [ 3 ] ;
tmp_k [ 2 ] = 8 ; tmp_c [ 8 ] = rtB . jen3dngjzc [ 0 ] ; tmp_c [ 9 ] = rtB .
jen3dngjzc [ 1 ] ; tmp_c [ 10 ] = rtB . jen3dngjzc [ 2 ] ; tmp_c [ 11 ] = rtB
. jen3dngjzc [ 3 ] ; tmp_k [ 3 ] = 12 ; tmp_c [ 12 ] = rtB . gktoanyk4z [ 0 ]
; tmp_c [ 13 ] = rtB . gktoanyk4z [ 1 ] ; tmp_c [ 14 ] = rtB . gktoanyk4z [ 2
] ; tmp_c [ 15 ] = rtB . gktoanyk4z [ 3 ] ; tmp_k [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_c [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_k [ 0 ] ;
simulationData -> mData -> mDx . mN = 4 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> gh2q4rwxqd [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . bfzy1zqdrk ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . hfd2kdvhft ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } _rtXdot -> nxxszasjmi = rtB . pk4qwm0mut ; simulationData = (
NeslSimulationData * ) rtDW . kl0ddpmtll ; time_m = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_m ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . cdzh5av0vj [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . av1vfdfdhf ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
luhysk1n03 [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_n [ 0 ] = 0 ; tmp_b [ 0 ] = rtB .
o04jj02qiz [ 0 ] ; tmp_b [ 1 ] = rtB . o04jj02qiz [ 1 ] ; tmp_b [ 2 ] = rtB .
o04jj02qiz [ 2 ] ; tmp_b [ 3 ] = rtB . o04jj02qiz [ 3 ] ; tmp_n [ 1 ] = 4 ;
tmp_b [ 4 ] = rtB . nwuia1pahi [ 0 ] ; tmp_b [ 5 ] = rtB . nwuia1pahi [ 1 ] ;
tmp_b [ 6 ] = rtB . nwuia1pahi [ 2 ] ; tmp_b [ 7 ] = rtB . nwuia1pahi [ 3 ] ;
tmp_n [ 2 ] = 8 ; tmp_b [ 8 ] = rtB . dqmw4fhx14 [ 0 ] ; tmp_b [ 9 ] = rtB .
dqmw4fhx14 [ 1 ] ; tmp_b [ 10 ] = rtB . dqmw4fhx14 [ 2 ] ; tmp_b [ 11 ] = rtB
. dqmw4fhx14 [ 3 ] ; tmp_n [ 3 ] = 12 ; tmp_b [ 12 ] = rtB . kfhppmeqms [ 0 ]
; tmp_b [ 13 ] = rtB . kfhppmeqms [ 1 ] ; tmp_b [ 14 ] = rtB . kfhppmeqms [ 2
] ; tmp_b [ 15 ] = rtB . kfhppmeqms [ 3 ] ; tmp_n [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_b [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_n [ 0 ] ;
simulationData -> mData -> mDx . mN = 4 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> cdzh5av0vj [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . lx2smnavwa ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . ckf13aqezk ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } _rtXdot -> jx11onf5nn = rtB . dvaiasoovm ; simulationData = (
NeslSimulationData * ) rtDW . gew2edtgzk ; time_g = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_g ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . jeqh2re42y [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . blamix54h1 ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
icml34wspz [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_d [ 0 ] = 0 ; tmp_l [ 0 ] = rtB .
ihc2fbedkz [ 0 ] ; tmp_l [ 1 ] = rtB . ihc2fbedkz [ 1 ] ; tmp_l [ 2 ] = rtB .
ihc2fbedkz [ 2 ] ; tmp_l [ 3 ] = rtB . ihc2fbedkz [ 3 ] ; tmp_d [ 1 ] = 4 ;
tmp_l [ 4 ] = rtB . eppca1vjoc [ 0 ] ; tmp_l [ 5 ] = rtB . eppca1vjoc [ 1 ] ;
tmp_l [ 6 ] = rtB . eppca1vjoc [ 2 ] ; tmp_l [ 7 ] = rtB . eppca1vjoc [ 3 ] ;
tmp_d [ 2 ] = 8 ; tmp_l [ 8 ] = rtB . m5j42r4u0p [ 0 ] ; tmp_l [ 9 ] = rtB .
m5j42r4u0p [ 1 ] ; tmp_l [ 10 ] = rtB . m5j42r4u0p [ 2 ] ; tmp_l [ 11 ] = rtB
. m5j42r4u0p [ 3 ] ; tmp_d [ 3 ] = 12 ; tmp_l [ 12 ] = rtB . b5fzixuwzk [ 0 ]
; tmp_l [ 13 ] = rtB . b5fzixuwzk [ 1 ] ; tmp_l [ 14 ] = rtB . b5fzixuwzk [ 2
] ; tmp_l [ 15 ] = rtB . b5fzixuwzk [ 3 ] ; tmp_d [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_l [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_d [ 0 ] ;
simulationData -> mData -> mDx . mN = 4 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> jeqh2re42y [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . j5jrcxb4qp ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . b350mxxcd5 ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } _rtXdot -> o3frtqftuu = rtB . m2b0x0ugtl ; simulationData = (
NeslSimulationData * ) rtDW . pjclqm00ip ; time_j = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_j ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . are00on1hs [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . kqoo2vremt ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
jud4hp33kc [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_dz [ 0 ] = 0 ; tmp_o [ 0 ] = rtB .
mz3s2zjmce [ 0 ] ; tmp_o [ 1 ] = rtB . mz3s2zjmce [ 1 ] ; tmp_o [ 2 ] = rtB .
mz3s2zjmce [ 2 ] ; tmp_o [ 3 ] = rtB . mz3s2zjmce [ 3 ] ; tmp_dz [ 1 ] = 4 ;
tmp_o [ 4 ] = rtB . e5jutfqvzq [ 0 ] ; tmp_o [ 5 ] = rtB . e5jutfqvzq [ 1 ] ;
tmp_o [ 6 ] = rtB . e5jutfqvzq [ 2 ] ; tmp_o [ 7 ] = rtB . e5jutfqvzq [ 3 ] ;
tmp_dz [ 2 ] = 8 ; tmp_o [ 8 ] = rtB . d35bpuglcw [ 0 ] ; tmp_o [ 9 ] = rtB .
d35bpuglcw [ 1 ] ; tmp_o [ 10 ] = rtB . d35bpuglcw [ 2 ] ; tmp_o [ 11 ] = rtB
. d35bpuglcw [ 3 ] ; tmp_dz [ 3 ] = 12 ; tmp_o [ 12 ] = rtB . mvicam42is [ 0
] ; tmp_o [ 13 ] = rtB . mvicam42is [ 1 ] ; tmp_o [ 14 ] = rtB . mvicam42is [
2 ] ; tmp_o [ 15 ] = rtB . mvicam42is [ 3 ] ; tmp_dz [ 4 ] = 16 ;
simulationData -> mData -> mInputValues . mN = 16 ; simulationData -> mData
-> mInputValues . mX = & tmp_o [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_dz [ 0 ] ; simulationData -> mData -> mDx . mN = 4 ; simulationData ->
mData -> mDx . mX = & _rtXdot -> are00on1hs [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . ps0145mupz ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . nl1dyr0lbo ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlProjection ( void ) { NeslSimulationData * simulationData ;
real_T time ; boolean_T tmp ; real_T tmp_p [ 24 ] ; int_T tmp_e [ 7 ] ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; int32_T tmp_i ; char * msg ; simulationData = ( NeslSimulationData * ) rtDW
. l4g30qb3cj ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN
= 1 ; simulationData -> mData -> mTime . mX = & time ; simulationData ->
mData -> mContStates . mN = 28 ; simulationData -> mData -> mContStates . mX
= & rtX . ce41paa4nx [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 1
; simulationData -> mData -> mDiscStates . mX = & rtDW . datwzvdkzf ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . m04ffi3voe ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
aau4qscxqc [ 0 ] ; tmp_p [ 1 ] = rtB . aau4qscxqc [ 1 ] ; tmp_p [ 2 ] = rtB .
aau4qscxqc [ 2 ] ; tmp_p [ 3 ] = rtB . aau4qscxqc [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . ms1z3tsizg [ 0 ] ; tmp_p [ 5 ] = rtB . ms1z3tsizg [ 1 ] ;
tmp_p [ 6 ] = rtB . ms1z3tsizg [ 2 ] ; tmp_p [ 7 ] = rtB . ms1z3tsizg [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . hilglkudbg [ 0 ] ; tmp_p [ 9 ] = rtB .
hilglkudbg [ 1 ] ; tmp_p [ 10 ] = rtB . hilglkudbg [ 2 ] ; tmp_p [ 11 ] = rtB
. hilglkudbg [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . d4eu5sdm4t [ 0 ]
; tmp_p [ 13 ] = rtB . d4eu5sdm4t [ 1 ] ; tmp_p [ 14 ] = rtB . d4eu5sdm4t [ 2
] ; tmp_p [ 15 ] = rtB . d4eu5sdm4t [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . pb0sw1pbnm [ 0 ] ; tmp_p [ 17 ] = rtB . pb0sw1pbnm [ 1 ] ; tmp_p [ 18 ]
= rtB . pb0sw1pbnm [ 2 ] ; tmp_p [ 19 ] = rtB . pb0sw1pbnm [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . fgvvgvfqb2 [ 0 ] ; tmp_p [ 21 ] = rtB .
fgvvgvfqb2 [ 1 ] ; tmp_p [ 22 ] = rtB . fgvvgvfqb2 [ 2 ] ; tmp_p [ 23 ] = rtB
. fgvvgvfqb2 [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . npqncjuh4p ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . hymu3nho1w ,
NESL_SIM_PROJECTION , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlForcingFunction ( void ) { NeslSimulationData *
simulationData ; real_T time ; boolean_T tmp ; real_T tmp_p [ 24 ] ; int_T
tmp_e [ 7 ] ; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree *
diagnosticTree ; int32_T tmp_i ; char * msg ; real_T time_p ; real_T tmp_m [
16 ] ; int_T tmp_g [ 5 ] ; real_T time_e ; real_T tmp_j [ 28 ] ; int_T tmp_f
[ 8 ] ; real_T time_i ; real_T tmp_c [ 16 ] ; int_T tmp_k [ 5 ] ; real_T
time_m ; real_T tmp_b [ 16 ] ; int_T tmp_n [ 5 ] ; real_T time_g ; real_T
tmp_l [ 16 ] ; int_T tmp_d [ 5 ] ; real_T time_j ; real_T tmp_o [ 16 ] ;
int_T tmp_dz [ 5 ] ; XDot * _rtXdot ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS )
) ; simulationData = ( NeslSimulationData * ) rtDW . l4g30qb3cj ; time =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time ; simulationData -> mData -> mContStates . mN
= 28 ; simulationData -> mData -> mContStates . mX = & rtX . ce41paa4nx [ 0 ]
; simulationData -> mData -> mDiscStates . mN = 1 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . datwzvdkzf ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
m04ffi3voe ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
aau4qscxqc [ 0 ] ; tmp_p [ 1 ] = rtB . aau4qscxqc [ 1 ] ; tmp_p [ 2 ] = rtB .
aau4qscxqc [ 2 ] ; tmp_p [ 3 ] = rtB . aau4qscxqc [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . ms1z3tsizg [ 0 ] ; tmp_p [ 5 ] = rtB . ms1z3tsizg [ 1 ] ;
tmp_p [ 6 ] = rtB . ms1z3tsizg [ 2 ] ; tmp_p [ 7 ] = rtB . ms1z3tsizg [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . hilglkudbg [ 0 ] ; tmp_p [ 9 ] = rtB .
hilglkudbg [ 1 ] ; tmp_p [ 10 ] = rtB . hilglkudbg [ 2 ] ; tmp_p [ 11 ] = rtB
. hilglkudbg [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . d4eu5sdm4t [ 0 ]
; tmp_p [ 13 ] = rtB . d4eu5sdm4t [ 1 ] ; tmp_p [ 14 ] = rtB . d4eu5sdm4t [ 2
] ; tmp_p [ 15 ] = rtB . d4eu5sdm4t [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . pb0sw1pbnm [ 0 ] ; tmp_p [ 17 ] = rtB . pb0sw1pbnm [ 1 ] ; tmp_p [ 18 ]
= rtB . pb0sw1pbnm [ 2 ] ; tmp_p [ 19 ] = rtB . pb0sw1pbnm [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . fgvvgvfqb2 [ 0 ] ; tmp_p [ 21 ] = rtB .
fgvvgvfqb2 [ 1 ] ; tmp_p [ 22 ] = rtB . fgvvgvfqb2 [ 2 ] ; tmp_p [ 23 ] = rtB
. fgvvgvfqb2 [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 28 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> ce41paa4nx [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . npqncjuh4p ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . hymu3nho1w ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } _rtXdot -> i5qlpo3uju = rtB . cmq4ia5e5i ; simulationData = (
NeslSimulationData * ) rtDW . luqgty2sqr ; time_p = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_p ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . mcc3w3jrrs [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . bymgp30epy ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
g5q2xfjrgx [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_g [ 0 ] = 0 ; tmp_m [ 0 ] = rtB .
gsf1wnk0dh [ 0 ] ; tmp_m [ 1 ] = rtB . gsf1wnk0dh [ 1 ] ; tmp_m [ 2 ] = rtB .
gsf1wnk0dh [ 2 ] ; tmp_m [ 3 ] = rtB . gsf1wnk0dh [ 3 ] ; tmp_g [ 1 ] = 4 ;
tmp_m [ 4 ] = rtB . cqfxofdy2x [ 0 ] ; tmp_m [ 5 ] = rtB . cqfxofdy2x [ 1 ] ;
tmp_m [ 6 ] = rtB . cqfxofdy2x [ 2 ] ; tmp_m [ 7 ] = rtB . cqfxofdy2x [ 3 ] ;
tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB . eho11whmzv [ 0 ] ; tmp_m [ 9 ] = rtB .
eho11whmzv [ 1 ] ; tmp_m [ 10 ] = rtB . eho11whmzv [ 2 ] ; tmp_m [ 11 ] = rtB
. eho11whmzv [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] = rtB . p52igst3gi [ 0 ]
; tmp_m [ 13 ] = rtB . p52igst3gi [ 1 ] ; tmp_m [ 14 ] = rtB . p52igst3gi [ 2
] ; tmp_m [ 15 ] = rtB . p52igst3gi [ 3 ] ; tmp_g [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
simulationData -> mData -> mDx . mN = 4 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> mcc3w3jrrs [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . g34wywbvoq ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . lq5wns3dvy ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } _rtXdot -> mhwbc1sinq = rtB . pzzwd3lnfe ; simulationData = (
NeslSimulationData * ) rtDW . gtngycvr1v ; time_e = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_e ; simulationData -> mData -> mContStates . mN = 8 ;
simulationData -> mData -> mContStates . mX = & rtX . p2hm1z5lwa [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . igqahwaopd ; simulationData -> mData ->
mModeVector . mN = 10 ; simulationData -> mData -> mModeVector . mX = & rtDW
. lexhviy3rv [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_f [ 0 ] = 0 ; tmp_j [ 0 ] = rtB .
mqijg4lgem [ 0 ] ; tmp_j [ 1 ] = rtB . mqijg4lgem [ 1 ] ; tmp_j [ 2 ] = rtB .
mqijg4lgem [ 2 ] ; tmp_j [ 3 ] = rtB . mqijg4lgem [ 3 ] ; tmp_f [ 1 ] = 4 ;
tmp_j [ 4 ] = rtB . gl00bo33dy [ 0 ] ; tmp_j [ 5 ] = rtB . gl00bo33dy [ 1 ] ;
tmp_j [ 6 ] = rtB . gl00bo33dy [ 2 ] ; tmp_j [ 7 ] = rtB . gl00bo33dy [ 3 ] ;
tmp_f [ 2 ] = 8 ; tmp_j [ 8 ] = rtB . gh1rrww104 [ 0 ] ; tmp_j [ 9 ] = rtB .
gh1rrww104 [ 1 ] ; tmp_j [ 10 ] = rtB . gh1rrww104 [ 2 ] ; tmp_j [ 11 ] = rtB
. gh1rrww104 [ 3 ] ; tmp_f [ 3 ] = 12 ; tmp_j [ 12 ] = rtB . malqpcsu2s [ 0 ]
; tmp_j [ 13 ] = rtB . malqpcsu2s [ 1 ] ; tmp_j [ 14 ] = rtB . malqpcsu2s [ 2
] ; tmp_j [ 15 ] = rtB . malqpcsu2s [ 3 ] ; tmp_f [ 4 ] = 16 ; tmp_j [ 16 ] =
rtB . kkeqotz05a [ 0 ] ; tmp_j [ 17 ] = rtB . kkeqotz05a [ 1 ] ; tmp_j [ 18 ]
= rtB . kkeqotz05a [ 2 ] ; tmp_j [ 19 ] = rtB . kkeqotz05a [ 3 ] ; tmp_f [ 5
] = 20 ; tmp_j [ 20 ] = rtB . ehret13uk4 [ 0 ] ; tmp_j [ 21 ] = rtB .
ehret13uk4 [ 1 ] ; tmp_j [ 22 ] = rtB . ehret13uk4 [ 2 ] ; tmp_j [ 23 ] = rtB
. ehret13uk4 [ 3 ] ; tmp_f [ 6 ] = 24 ; tmp_j [ 24 ] = rtB . hb1gynnbug [ 0 ]
; tmp_j [ 25 ] = rtB . hb1gynnbug [ 1 ] ; tmp_j [ 26 ] = rtB . hb1gynnbug [ 2
] ; tmp_j [ 27 ] = rtB . hb1gynnbug [ 3 ] ; tmp_f [ 7 ] = 28 ; simulationData
-> mData -> mInputValues . mN = 28 ; simulationData -> mData -> mInputValues
. mX = & tmp_j [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 8 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_f [ 0 ] ;
simulationData -> mData -> mDx . mN = 8 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> p2hm1z5lwa [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . dau5zpxltv ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . ipgckui03o ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } _rtXdot -> h45mkuq5bv = rtB . orrj54i1aj ; simulationData = (
NeslSimulationData * ) rtDW . dc0ikbgay5 ; time_i = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_i ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . gh2q4rwxqd [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . dyznqu2x02 ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
nol4hxpj0x [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_k [ 0 ] = 0 ; tmp_c [ 0 ] = rtB .
oapizwvtjv [ 0 ] ; tmp_c [ 1 ] = rtB . oapizwvtjv [ 1 ] ; tmp_c [ 2 ] = rtB .
oapizwvtjv [ 2 ] ; tmp_c [ 3 ] = rtB . oapizwvtjv [ 3 ] ; tmp_k [ 1 ] = 4 ;
tmp_c [ 4 ] = rtB . clmozh0gh4 [ 0 ] ; tmp_c [ 5 ] = rtB . clmozh0gh4 [ 1 ] ;
tmp_c [ 6 ] = rtB . clmozh0gh4 [ 2 ] ; tmp_c [ 7 ] = rtB . clmozh0gh4 [ 3 ] ;
tmp_k [ 2 ] = 8 ; tmp_c [ 8 ] = rtB . jen3dngjzc [ 0 ] ; tmp_c [ 9 ] = rtB .
jen3dngjzc [ 1 ] ; tmp_c [ 10 ] = rtB . jen3dngjzc [ 2 ] ; tmp_c [ 11 ] = rtB
. jen3dngjzc [ 3 ] ; tmp_k [ 3 ] = 12 ; tmp_c [ 12 ] = rtB . gktoanyk4z [ 0 ]
; tmp_c [ 13 ] = rtB . gktoanyk4z [ 1 ] ; tmp_c [ 14 ] = rtB . gktoanyk4z [ 2
] ; tmp_c [ 15 ] = rtB . gktoanyk4z [ 3 ] ; tmp_k [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_c [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_k [ 0 ] ;
simulationData -> mData -> mDx . mN = 4 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> gh2q4rwxqd [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . bfzy1zqdrk ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . hfd2kdvhft ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } _rtXdot -> nxxszasjmi = rtB . pk4qwm0mut ; simulationData = (
NeslSimulationData * ) rtDW . kl0ddpmtll ; time_m = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_m ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . cdzh5av0vj [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . av1vfdfdhf ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
luhysk1n03 [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_n [ 0 ] = 0 ; tmp_b [ 0 ] = rtB .
o04jj02qiz [ 0 ] ; tmp_b [ 1 ] = rtB . o04jj02qiz [ 1 ] ; tmp_b [ 2 ] = rtB .
o04jj02qiz [ 2 ] ; tmp_b [ 3 ] = rtB . o04jj02qiz [ 3 ] ; tmp_n [ 1 ] = 4 ;
tmp_b [ 4 ] = rtB . nwuia1pahi [ 0 ] ; tmp_b [ 5 ] = rtB . nwuia1pahi [ 1 ] ;
tmp_b [ 6 ] = rtB . nwuia1pahi [ 2 ] ; tmp_b [ 7 ] = rtB . nwuia1pahi [ 3 ] ;
tmp_n [ 2 ] = 8 ; tmp_b [ 8 ] = rtB . dqmw4fhx14 [ 0 ] ; tmp_b [ 9 ] = rtB .
dqmw4fhx14 [ 1 ] ; tmp_b [ 10 ] = rtB . dqmw4fhx14 [ 2 ] ; tmp_b [ 11 ] = rtB
. dqmw4fhx14 [ 3 ] ; tmp_n [ 3 ] = 12 ; tmp_b [ 12 ] = rtB . kfhppmeqms [ 0 ]
; tmp_b [ 13 ] = rtB . kfhppmeqms [ 1 ] ; tmp_b [ 14 ] = rtB . kfhppmeqms [ 2
] ; tmp_b [ 15 ] = rtB . kfhppmeqms [ 3 ] ; tmp_n [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_b [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_n [ 0 ] ;
simulationData -> mData -> mDx . mN = 4 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> cdzh5av0vj [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . lx2smnavwa ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . ckf13aqezk ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } _rtXdot -> jx11onf5nn = rtB . dvaiasoovm ; simulationData = (
NeslSimulationData * ) rtDW . gew2edtgzk ; time_g = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_g ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . jeqh2re42y [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . blamix54h1 ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
icml34wspz [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_d [ 0 ] = 0 ; tmp_l [ 0 ] = rtB .
ihc2fbedkz [ 0 ] ; tmp_l [ 1 ] = rtB . ihc2fbedkz [ 1 ] ; tmp_l [ 2 ] = rtB .
ihc2fbedkz [ 2 ] ; tmp_l [ 3 ] = rtB . ihc2fbedkz [ 3 ] ; tmp_d [ 1 ] = 4 ;
tmp_l [ 4 ] = rtB . eppca1vjoc [ 0 ] ; tmp_l [ 5 ] = rtB . eppca1vjoc [ 1 ] ;
tmp_l [ 6 ] = rtB . eppca1vjoc [ 2 ] ; tmp_l [ 7 ] = rtB . eppca1vjoc [ 3 ] ;
tmp_d [ 2 ] = 8 ; tmp_l [ 8 ] = rtB . m5j42r4u0p [ 0 ] ; tmp_l [ 9 ] = rtB .
m5j42r4u0p [ 1 ] ; tmp_l [ 10 ] = rtB . m5j42r4u0p [ 2 ] ; tmp_l [ 11 ] = rtB
. m5j42r4u0p [ 3 ] ; tmp_d [ 3 ] = 12 ; tmp_l [ 12 ] = rtB . b5fzixuwzk [ 0 ]
; tmp_l [ 13 ] = rtB . b5fzixuwzk [ 1 ] ; tmp_l [ 14 ] = rtB . b5fzixuwzk [ 2
] ; tmp_l [ 15 ] = rtB . b5fzixuwzk [ 3 ] ; tmp_d [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_l [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_d [ 0 ] ;
simulationData -> mData -> mDx . mN = 4 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> jeqh2re42y [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . j5jrcxb4qp ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . b350mxxcd5 ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } _rtXdot -> o3frtqftuu = rtB . m2b0x0ugtl ; simulationData = (
NeslSimulationData * ) rtDW . pjclqm00ip ; time_j = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_j ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . are00on1hs [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . kqoo2vremt ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
jud4hp33kc [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_dz [ 0 ] = 0 ; tmp_o [ 0 ] = rtB .
mz3s2zjmce [ 0 ] ; tmp_o [ 1 ] = rtB . mz3s2zjmce [ 1 ] ; tmp_o [ 2 ] = rtB .
mz3s2zjmce [ 2 ] ; tmp_o [ 3 ] = rtB . mz3s2zjmce [ 3 ] ; tmp_dz [ 1 ] = 4 ;
tmp_o [ 4 ] = rtB . e5jutfqvzq [ 0 ] ; tmp_o [ 5 ] = rtB . e5jutfqvzq [ 1 ] ;
tmp_o [ 6 ] = rtB . e5jutfqvzq [ 2 ] ; tmp_o [ 7 ] = rtB . e5jutfqvzq [ 3 ] ;
tmp_dz [ 2 ] = 8 ; tmp_o [ 8 ] = rtB . d35bpuglcw [ 0 ] ; tmp_o [ 9 ] = rtB .
d35bpuglcw [ 1 ] ; tmp_o [ 10 ] = rtB . d35bpuglcw [ 2 ] ; tmp_o [ 11 ] = rtB
. d35bpuglcw [ 3 ] ; tmp_dz [ 3 ] = 12 ; tmp_o [ 12 ] = rtB . mvicam42is [ 0
] ; tmp_o [ 13 ] = rtB . mvicam42is [ 1 ] ; tmp_o [ 14 ] = rtB . mvicam42is [
2 ] ; tmp_o [ 15 ] = rtB . mvicam42is [ 3 ] ; tmp_dz [ 4 ] = 16 ;
simulationData -> mData -> mInputValues . mN = 16 ; simulationData -> mData
-> mInputValues . mX = & tmp_o [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_dz [ 0 ] ; simulationData -> mData -> mDx . mN = 4 ; simulationData ->
mData -> mDx . mX = & _rtXdot -> are00on1hs [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . ps0145mupz ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . nl1dyr0lbo ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } } void MdlMassMatrix ( void ) { NeslSimulationData *
simulationData ; real_T time ; boolean_T tmp ; real_T tmp_p [ 16 ] ; int_T
tmp_e [ 5 ] ; real_T * tmp_i ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; int32_T tmp_m ; char * msg ; real_T
time_p ; real_T tmp_g [ 28 ] ; int_T tmp_j [ 8 ] ; real_T time_e ; real_T
tmp_f [ 16 ] ; int_T tmp_c [ 5 ] ; real_T time_i ; real_T tmp_k [ 16 ] ;
int_T tmp_b [ 5 ] ; real_T time_m ; real_T tmp_n [ 16 ] ; int_T tmp_l [ 5 ] ;
real_T time_g ; real_T tmp_d [ 16 ] ; int_T tmp_o [ 5 ] ; simulationData = (
NeslSimulationData * ) rtDW . luqgty2sqr ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . mcc3w3jrrs [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . bymgp30epy ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
g5q2xfjrgx [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
gsf1wnk0dh [ 0 ] ; tmp_p [ 1 ] = rtB . gsf1wnk0dh [ 1 ] ; tmp_p [ 2 ] = rtB .
gsf1wnk0dh [ 2 ] ; tmp_p [ 3 ] = rtB . gsf1wnk0dh [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . cqfxofdy2x [ 0 ] ; tmp_p [ 5 ] = rtB . cqfxofdy2x [ 1 ] ;
tmp_p [ 6 ] = rtB . cqfxofdy2x [ 2 ] ; tmp_p [ 7 ] = rtB . cqfxofdy2x [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . eho11whmzv [ 0 ] ; tmp_p [ 9 ] = rtB .
eho11whmzv [ 1 ] ; tmp_p [ 10 ] = rtB . eho11whmzv [ 2 ] ; tmp_p [ 11 ] = rtB
. eho11whmzv [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . p52igst3gi [ 0 ]
; tmp_p [ 13 ] = rtB . p52igst3gi [ 1 ] ; tmp_p [ 14 ] = rtB . p52igst3gi [ 2
] ; tmp_p [ 15 ] = rtB . p52igst3gi [ 3 ] ; tmp_e [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ; tmp_i =
rtMassMatrix . pr ; tmp_i = double_pointer_shift ( tmp_i , rtDW . gdocvflmcr
) ; simulationData -> mData -> mMassMatrixPr . mN = 2 ; simulationData ->
mData -> mMassMatrixPr . mX = tmp_i ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . g34wywbvoq ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_m =
ne_simulator_method ( ( NeslSimulator * ) rtDW . lq5wns3dvy ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_m != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . gtngycvr1v ; time_p =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_p ; simulationData -> mData -> mContStates .
mN = 8 ; simulationData -> mData -> mContStates . mX = & rtX . p2hm1z5lwa [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . igqahwaopd ; simulationData -> mData ->
mModeVector . mN = 10 ; simulationData -> mData -> mModeVector . mX = & rtDW
. lexhviy3rv [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_j [ 0 ] = 0 ; tmp_g [ 0 ] = rtB .
mqijg4lgem [ 0 ] ; tmp_g [ 1 ] = rtB . mqijg4lgem [ 1 ] ; tmp_g [ 2 ] = rtB .
mqijg4lgem [ 2 ] ; tmp_g [ 3 ] = rtB . mqijg4lgem [ 3 ] ; tmp_j [ 1 ] = 4 ;
tmp_g [ 4 ] = rtB . gl00bo33dy [ 0 ] ; tmp_g [ 5 ] = rtB . gl00bo33dy [ 1 ] ;
tmp_g [ 6 ] = rtB . gl00bo33dy [ 2 ] ; tmp_g [ 7 ] = rtB . gl00bo33dy [ 3 ] ;
tmp_j [ 2 ] = 8 ; tmp_g [ 8 ] = rtB . gh1rrww104 [ 0 ] ; tmp_g [ 9 ] = rtB .
gh1rrww104 [ 1 ] ; tmp_g [ 10 ] = rtB . gh1rrww104 [ 2 ] ; tmp_g [ 11 ] = rtB
. gh1rrww104 [ 3 ] ; tmp_j [ 3 ] = 12 ; tmp_g [ 12 ] = rtB . malqpcsu2s [ 0 ]
; tmp_g [ 13 ] = rtB . malqpcsu2s [ 1 ] ; tmp_g [ 14 ] = rtB . malqpcsu2s [ 2
] ; tmp_g [ 15 ] = rtB . malqpcsu2s [ 3 ] ; tmp_j [ 4 ] = 16 ; tmp_g [ 16 ] =
rtB . kkeqotz05a [ 0 ] ; tmp_g [ 17 ] = rtB . kkeqotz05a [ 1 ] ; tmp_g [ 18 ]
= rtB . kkeqotz05a [ 2 ] ; tmp_g [ 19 ] = rtB . kkeqotz05a [ 3 ] ; tmp_j [ 5
] = 20 ; tmp_g [ 20 ] = rtB . ehret13uk4 [ 0 ] ; tmp_g [ 21 ] = rtB .
ehret13uk4 [ 1 ] ; tmp_g [ 22 ] = rtB . ehret13uk4 [ 2 ] ; tmp_g [ 23 ] = rtB
. ehret13uk4 [ 3 ] ; tmp_j [ 6 ] = 24 ; tmp_g [ 24 ] = rtB . hb1gynnbug [ 0 ]
; tmp_g [ 25 ] = rtB . hb1gynnbug [ 1 ] ; tmp_g [ 26 ] = rtB . hb1gynnbug [ 2
] ; tmp_g [ 27 ] = rtB . hb1gynnbug [ 3 ] ; tmp_j [ 7 ] = 28 ; simulationData
-> mData -> mInputValues . mN = 28 ; simulationData -> mData -> mInputValues
. mX = & tmp_g [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 8 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_j [ 0 ] ; tmp_i =
rtMassMatrix . pr ; tmp_i = double_pointer_shift ( tmp_i , rtDW . bwyrw3acho
) ; simulationData -> mData -> mMassMatrixPr . mN = 4 ; simulationData ->
mData -> mMassMatrixPr . mX = tmp_i ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . dau5zpxltv ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_m =
ne_simulator_method ( ( NeslSimulator * ) rtDW . ipgckui03o ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_m != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . dc0ikbgay5 ; time_e =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_e ; simulationData -> mData -> mContStates .
mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX . gh2q4rwxqd [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . dyznqu2x02 ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
nol4hxpj0x [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_c [ 0 ] = 0 ; tmp_f [ 0 ] = rtB .
oapizwvtjv [ 0 ] ; tmp_f [ 1 ] = rtB . oapizwvtjv [ 1 ] ; tmp_f [ 2 ] = rtB .
oapizwvtjv [ 2 ] ; tmp_f [ 3 ] = rtB . oapizwvtjv [ 3 ] ; tmp_c [ 1 ] = 4 ;
tmp_f [ 4 ] = rtB . clmozh0gh4 [ 0 ] ; tmp_f [ 5 ] = rtB . clmozh0gh4 [ 1 ] ;
tmp_f [ 6 ] = rtB . clmozh0gh4 [ 2 ] ; tmp_f [ 7 ] = rtB . clmozh0gh4 [ 3 ] ;
tmp_c [ 2 ] = 8 ; tmp_f [ 8 ] = rtB . jen3dngjzc [ 0 ] ; tmp_f [ 9 ] = rtB .
jen3dngjzc [ 1 ] ; tmp_f [ 10 ] = rtB . jen3dngjzc [ 2 ] ; tmp_f [ 11 ] = rtB
. jen3dngjzc [ 3 ] ; tmp_c [ 3 ] = 12 ; tmp_f [ 12 ] = rtB . gktoanyk4z [ 0 ]
; tmp_f [ 13 ] = rtB . gktoanyk4z [ 1 ] ; tmp_f [ 14 ] = rtB . gktoanyk4z [ 2
] ; tmp_f [ 15 ] = rtB . gktoanyk4z [ 3 ] ; tmp_c [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_f [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_c [ 0 ] ; tmp_i =
rtMassMatrix . pr ; tmp_i = double_pointer_shift ( tmp_i , rtDW . cyfqrvqkg4
) ; simulationData -> mData -> mMassMatrixPr . mN = 2 ; simulationData ->
mData -> mMassMatrixPr . mX = tmp_i ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . bfzy1zqdrk ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_m =
ne_simulator_method ( ( NeslSimulator * ) rtDW . hfd2kdvhft ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_m != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . kl0ddpmtll ; time_i =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_i ; simulationData -> mData -> mContStates .
mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX . cdzh5av0vj [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . av1vfdfdhf ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
luhysk1n03 [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_b [ 0 ] = 0 ; tmp_k [ 0 ] = rtB .
o04jj02qiz [ 0 ] ; tmp_k [ 1 ] = rtB . o04jj02qiz [ 1 ] ; tmp_k [ 2 ] = rtB .
o04jj02qiz [ 2 ] ; tmp_k [ 3 ] = rtB . o04jj02qiz [ 3 ] ; tmp_b [ 1 ] = 4 ;
tmp_k [ 4 ] = rtB . nwuia1pahi [ 0 ] ; tmp_k [ 5 ] = rtB . nwuia1pahi [ 1 ] ;
tmp_k [ 6 ] = rtB . nwuia1pahi [ 2 ] ; tmp_k [ 7 ] = rtB . nwuia1pahi [ 3 ] ;
tmp_b [ 2 ] = 8 ; tmp_k [ 8 ] = rtB . dqmw4fhx14 [ 0 ] ; tmp_k [ 9 ] = rtB .
dqmw4fhx14 [ 1 ] ; tmp_k [ 10 ] = rtB . dqmw4fhx14 [ 2 ] ; tmp_k [ 11 ] = rtB
. dqmw4fhx14 [ 3 ] ; tmp_b [ 3 ] = 12 ; tmp_k [ 12 ] = rtB . kfhppmeqms [ 0 ]
; tmp_k [ 13 ] = rtB . kfhppmeqms [ 1 ] ; tmp_k [ 14 ] = rtB . kfhppmeqms [ 2
] ; tmp_k [ 15 ] = rtB . kfhppmeqms [ 3 ] ; tmp_b [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_k [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_b [ 0 ] ; tmp_i =
rtMassMatrix . pr ; tmp_i = double_pointer_shift ( tmp_i , rtDW . p1xxvhgf3v
) ; simulationData -> mData -> mMassMatrixPr . mN = 2 ; simulationData ->
mData -> mMassMatrixPr . mX = tmp_i ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . lx2smnavwa ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_m =
ne_simulator_method ( ( NeslSimulator * ) rtDW . ckf13aqezk ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_m != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . gew2edtgzk ; time_m =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_m ; simulationData -> mData -> mContStates .
mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX . jeqh2re42y [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . blamix54h1 ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
icml34wspz [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_l [ 0 ] = 0 ; tmp_n [ 0 ] = rtB .
ihc2fbedkz [ 0 ] ; tmp_n [ 1 ] = rtB . ihc2fbedkz [ 1 ] ; tmp_n [ 2 ] = rtB .
ihc2fbedkz [ 2 ] ; tmp_n [ 3 ] = rtB . ihc2fbedkz [ 3 ] ; tmp_l [ 1 ] = 4 ;
tmp_n [ 4 ] = rtB . eppca1vjoc [ 0 ] ; tmp_n [ 5 ] = rtB . eppca1vjoc [ 1 ] ;
tmp_n [ 6 ] = rtB . eppca1vjoc [ 2 ] ; tmp_n [ 7 ] = rtB . eppca1vjoc [ 3 ] ;
tmp_l [ 2 ] = 8 ; tmp_n [ 8 ] = rtB . m5j42r4u0p [ 0 ] ; tmp_n [ 9 ] = rtB .
m5j42r4u0p [ 1 ] ; tmp_n [ 10 ] = rtB . m5j42r4u0p [ 2 ] ; tmp_n [ 11 ] = rtB
. m5j42r4u0p [ 3 ] ; tmp_l [ 3 ] = 12 ; tmp_n [ 12 ] = rtB . b5fzixuwzk [ 0 ]
; tmp_n [ 13 ] = rtB . b5fzixuwzk [ 1 ] ; tmp_n [ 14 ] = rtB . b5fzixuwzk [ 2
] ; tmp_n [ 15 ] = rtB . b5fzixuwzk [ 3 ] ; tmp_l [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_n [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_l [ 0 ] ; tmp_i =
rtMassMatrix . pr ; tmp_i = double_pointer_shift ( tmp_i , rtDW . iu2s2vbg4w
) ; simulationData -> mData -> mMassMatrixPr . mN = 2 ; simulationData ->
mData -> mMassMatrixPr . mX = tmp_i ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . j5jrcxb4qp ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_m =
ne_simulator_method ( ( NeslSimulator * ) rtDW . b350mxxcd5 ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_m != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . pjclqm00ip ; time_g =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_g ; simulationData -> mData -> mContStates .
mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX . are00on1hs [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . kqoo2vremt ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
jud4hp33kc [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_o [ 0 ] = 0 ; tmp_d [ 0 ] = rtB .
mz3s2zjmce [ 0 ] ; tmp_d [ 1 ] = rtB . mz3s2zjmce [ 1 ] ; tmp_d [ 2 ] = rtB .
mz3s2zjmce [ 2 ] ; tmp_d [ 3 ] = rtB . mz3s2zjmce [ 3 ] ; tmp_o [ 1 ] = 4 ;
tmp_d [ 4 ] = rtB . e5jutfqvzq [ 0 ] ; tmp_d [ 5 ] = rtB . e5jutfqvzq [ 1 ] ;
tmp_d [ 6 ] = rtB . e5jutfqvzq [ 2 ] ; tmp_d [ 7 ] = rtB . e5jutfqvzq [ 3 ] ;
tmp_o [ 2 ] = 8 ; tmp_d [ 8 ] = rtB . d35bpuglcw [ 0 ] ; tmp_d [ 9 ] = rtB .
d35bpuglcw [ 1 ] ; tmp_d [ 10 ] = rtB . d35bpuglcw [ 2 ] ; tmp_d [ 11 ] = rtB
. d35bpuglcw [ 3 ] ; tmp_o [ 3 ] = 12 ; tmp_d [ 12 ] = rtB . mvicam42is [ 0 ]
; tmp_d [ 13 ] = rtB . mvicam42is [ 1 ] ; tmp_d [ 14 ] = rtB . mvicam42is [ 2
] ; tmp_d [ 15 ] = rtB . mvicam42is [ 3 ] ; tmp_o [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_d [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_o [ 0 ] ; tmp_i =
rtMassMatrix . pr ; tmp_i = double_pointer_shift ( tmp_i , rtDW . juiuitfey0
) ; simulationData -> mData -> mMassMatrixPr . mN = 2 ; simulationData ->
mData -> mMassMatrixPr . mX = tmp_i ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . ps0145mupz ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_m =
ne_simulator_method ( ( NeslSimulator * ) rtDW . nl1dyr0lbo ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_m != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlZeroCrossings ( void ) { NeslSimulationData * simulationData
; real_T time ; boolean_T tmp ; real_T tmp_p [ 16 ] ; int_T tmp_e [ 5 ] ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; char * msg ; real_T time_p ; real_T tmp_i [ 28 ] ; int_T tmp_m [ 8 ] ;
real_T time_e ; real_T tmp_g [ 16 ] ; int_T tmp_j [ 5 ] ; real_T time_i ;
real_T tmp_f [ 16 ] ; int_T tmp_c [ 5 ] ; real_T time_m ; real_T tmp_k [ 16 ]
; int_T tmp_b [ 5 ] ; real_T time_g ; real_T tmp_n [ 16 ] ; int_T tmp_l [ 5 ]
; int32_T tmp_d ; ZCV * _rtZCSV ; _rtZCSV = ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) ; _rtZCSV -> frhkvosbyq = rtB .
fvblcfumvs ; _rtZCSV -> cz5jvjlsn2 = rtB . gq10553zct - rtP . u5_UpperSat ;
_rtZCSV -> ngtlongzu2 = rtB . gq10553zct - rtP . u5_LowerSat ; simulationData
= ( NeslSimulationData * ) rtDW . luqgty2sqr ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . mcc3w3jrrs [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . bymgp30epy ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
g5q2xfjrgx [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
gsf1wnk0dh [ 0 ] ; tmp_p [ 1 ] = rtB . gsf1wnk0dh [ 1 ] ; tmp_p [ 2 ] = rtB .
gsf1wnk0dh [ 2 ] ; tmp_p [ 3 ] = rtB . gsf1wnk0dh [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . cqfxofdy2x [ 0 ] ; tmp_p [ 5 ] = rtB . cqfxofdy2x [ 1 ] ;
tmp_p [ 6 ] = rtB . cqfxofdy2x [ 2 ] ; tmp_p [ 7 ] = rtB . cqfxofdy2x [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . eho11whmzv [ 0 ] ; tmp_p [ 9 ] = rtB .
eho11whmzv [ 1 ] ; tmp_p [ 10 ] = rtB . eho11whmzv [ 2 ] ; tmp_p [ 11 ] = rtB
. eho11whmzv [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . p52igst3gi [ 0 ]
; tmp_p [ 13 ] = rtB . p52igst3gi [ 1 ] ; tmp_p [ 14 ] = rtB . p52igst3gi [ 2
] ; tmp_p [ 15 ] = rtB . p52igst3gi [ 3 ] ; tmp_e [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 5 ; simulationData -> mData
-> mNonSampledZCs . mX = & _rtZCSV -> lxrxd2rmbv ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . g34wywbvoq ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_d =
ne_simulator_method ( ( NeslSimulator * ) rtDW . lq5wns3dvy ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_d !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } _rtZCSV -> j4kmyagira = rtB . ed0x1weluj ; _rtZCSV -> fv5dk0x3xx = rtB
. lerd3i21nu - rtP . u5_UpperSat_ayphnxvhak ; _rtZCSV -> l1hsjvlxrk = rtB .
lerd3i21nu - rtP . u5_LowerSat_ikcgllyxwz ; simulationData = (
NeslSimulationData * ) rtDW . gtngycvr1v ; time_p = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_p ; simulationData -> mData -> mContStates . mN = 8 ;
simulationData -> mData -> mContStates . mX = & rtX . p2hm1z5lwa [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . igqahwaopd ; simulationData -> mData ->
mModeVector . mN = 10 ; simulationData -> mData -> mModeVector . mX = & rtDW
. lexhviy3rv [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_m [ 0 ] = 0 ; tmp_i [ 0 ] = rtB .
mqijg4lgem [ 0 ] ; tmp_i [ 1 ] = rtB . mqijg4lgem [ 1 ] ; tmp_i [ 2 ] = rtB .
mqijg4lgem [ 2 ] ; tmp_i [ 3 ] = rtB . mqijg4lgem [ 3 ] ; tmp_m [ 1 ] = 4 ;
tmp_i [ 4 ] = rtB . gl00bo33dy [ 0 ] ; tmp_i [ 5 ] = rtB . gl00bo33dy [ 1 ] ;
tmp_i [ 6 ] = rtB . gl00bo33dy [ 2 ] ; tmp_i [ 7 ] = rtB . gl00bo33dy [ 3 ] ;
tmp_m [ 2 ] = 8 ; tmp_i [ 8 ] = rtB . gh1rrww104 [ 0 ] ; tmp_i [ 9 ] = rtB .
gh1rrww104 [ 1 ] ; tmp_i [ 10 ] = rtB . gh1rrww104 [ 2 ] ; tmp_i [ 11 ] = rtB
. gh1rrww104 [ 3 ] ; tmp_m [ 3 ] = 12 ; tmp_i [ 12 ] = rtB . malqpcsu2s [ 0 ]
; tmp_i [ 13 ] = rtB . malqpcsu2s [ 1 ] ; tmp_i [ 14 ] = rtB . malqpcsu2s [ 2
] ; tmp_i [ 15 ] = rtB . malqpcsu2s [ 3 ] ; tmp_m [ 4 ] = 16 ; tmp_i [ 16 ] =
rtB . kkeqotz05a [ 0 ] ; tmp_i [ 17 ] = rtB . kkeqotz05a [ 1 ] ; tmp_i [ 18 ]
= rtB . kkeqotz05a [ 2 ] ; tmp_i [ 19 ] = rtB . kkeqotz05a [ 3 ] ; tmp_m [ 5
] = 20 ; tmp_i [ 20 ] = rtB . ehret13uk4 [ 0 ] ; tmp_i [ 21 ] = rtB .
ehret13uk4 [ 1 ] ; tmp_i [ 22 ] = rtB . ehret13uk4 [ 2 ] ; tmp_i [ 23 ] = rtB
. ehret13uk4 [ 3 ] ; tmp_m [ 6 ] = 24 ; tmp_i [ 24 ] = rtB . hb1gynnbug [ 0 ]
; tmp_i [ 25 ] = rtB . hb1gynnbug [ 1 ] ; tmp_i [ 26 ] = rtB . hb1gynnbug [ 2
] ; tmp_i [ 27 ] = rtB . hb1gynnbug [ 3 ] ; tmp_m [ 7 ] = 28 ; simulationData
-> mData -> mInputValues . mN = 28 ; simulationData -> mData -> mInputValues
. mX = & tmp_i [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 8 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_m [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 10 ; simulationData -> mData
-> mNonSampledZCs . mX = & _rtZCSV -> gzmeky2qui ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . dau5zpxltv ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_d =
ne_simulator_method ( ( NeslSimulator * ) rtDW . ipgckui03o ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_d !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } _rtZCSV -> ihvral4etm = rtB . g2u01f0n1g ; _rtZCSV -> abwtv3ze30 = rtB
. nusef2vdyd - rtP . u5_UpperSat_jmie0uoskq ; _rtZCSV -> c5ybmt0dge = rtB .
nusef2vdyd - rtP . u5_LowerSat_frye4kwxrv ; simulationData = (
NeslSimulationData * ) rtDW . dc0ikbgay5 ; time_e = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_e ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . gh2q4rwxqd [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . dyznqu2x02 ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
nol4hxpj0x [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_j [ 0 ] = 0 ; tmp_g [ 0 ] = rtB .
oapizwvtjv [ 0 ] ; tmp_g [ 1 ] = rtB . oapizwvtjv [ 1 ] ; tmp_g [ 2 ] = rtB .
oapizwvtjv [ 2 ] ; tmp_g [ 3 ] = rtB . oapizwvtjv [ 3 ] ; tmp_j [ 1 ] = 4 ;
tmp_g [ 4 ] = rtB . clmozh0gh4 [ 0 ] ; tmp_g [ 5 ] = rtB . clmozh0gh4 [ 1 ] ;
tmp_g [ 6 ] = rtB . clmozh0gh4 [ 2 ] ; tmp_g [ 7 ] = rtB . clmozh0gh4 [ 3 ] ;
tmp_j [ 2 ] = 8 ; tmp_g [ 8 ] = rtB . jen3dngjzc [ 0 ] ; tmp_g [ 9 ] = rtB .
jen3dngjzc [ 1 ] ; tmp_g [ 10 ] = rtB . jen3dngjzc [ 2 ] ; tmp_g [ 11 ] = rtB
. jen3dngjzc [ 3 ] ; tmp_j [ 3 ] = 12 ; tmp_g [ 12 ] = rtB . gktoanyk4z [ 0 ]
; tmp_g [ 13 ] = rtB . gktoanyk4z [ 1 ] ; tmp_g [ 14 ] = rtB . gktoanyk4z [ 2
] ; tmp_g [ 15 ] = rtB . gktoanyk4z [ 3 ] ; tmp_j [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_g [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_j [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 5 ; simulationData -> mData
-> mNonSampledZCs . mX = & _rtZCSV -> khz54xntbs ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . bfzy1zqdrk ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_d =
ne_simulator_method ( ( NeslSimulator * ) rtDW . hfd2kdvhft ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_d !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } _rtZCSV -> j0jnbvmwhl = rtB . c0jld3eln1 ; _rtZCSV -> fxjntilrks = rtB
. i2btnrrmvd - rtP . u5_UpperSat_hpv1lydza3 ; _rtZCSV -> nukgclftmm = rtB .
i2btnrrmvd - rtP . u5_LowerSat_aj1ncwmb4v ; simulationData = (
NeslSimulationData * ) rtDW . kl0ddpmtll ; time_i = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_i ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . cdzh5av0vj [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . av1vfdfdhf ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
luhysk1n03 [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_c [ 0 ] = 0 ; tmp_f [ 0 ] = rtB .
o04jj02qiz [ 0 ] ; tmp_f [ 1 ] = rtB . o04jj02qiz [ 1 ] ; tmp_f [ 2 ] = rtB .
o04jj02qiz [ 2 ] ; tmp_f [ 3 ] = rtB . o04jj02qiz [ 3 ] ; tmp_c [ 1 ] = 4 ;
tmp_f [ 4 ] = rtB . nwuia1pahi [ 0 ] ; tmp_f [ 5 ] = rtB . nwuia1pahi [ 1 ] ;
tmp_f [ 6 ] = rtB . nwuia1pahi [ 2 ] ; tmp_f [ 7 ] = rtB . nwuia1pahi [ 3 ] ;
tmp_c [ 2 ] = 8 ; tmp_f [ 8 ] = rtB . dqmw4fhx14 [ 0 ] ; tmp_f [ 9 ] = rtB .
dqmw4fhx14 [ 1 ] ; tmp_f [ 10 ] = rtB . dqmw4fhx14 [ 2 ] ; tmp_f [ 11 ] = rtB
. dqmw4fhx14 [ 3 ] ; tmp_c [ 3 ] = 12 ; tmp_f [ 12 ] = rtB . kfhppmeqms [ 0 ]
; tmp_f [ 13 ] = rtB . kfhppmeqms [ 1 ] ; tmp_f [ 14 ] = rtB . kfhppmeqms [ 2
] ; tmp_f [ 15 ] = rtB . kfhppmeqms [ 3 ] ; tmp_c [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_f [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_c [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 5 ; simulationData -> mData
-> mNonSampledZCs . mX = & _rtZCSV -> p4gd1cfsm1 ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . lx2smnavwa ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_d =
ne_simulator_method ( ( NeslSimulator * ) rtDW . ckf13aqezk ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_d !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } _rtZCSV -> ocvr54bo1b = rtB . n41mws5fmv ; _rtZCSV -> lmk1pnyhgq = rtB
. nc0gz0afr0 - rtP . u5_UpperSat_cb5dw4uucg ; _rtZCSV -> nejrmmhsdm = rtB .
nc0gz0afr0 - rtP . u5_LowerSat_m5m10l40lw ; simulationData = (
NeslSimulationData * ) rtDW . gew2edtgzk ; time_m = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_m ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . jeqh2re42y [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . blamix54h1 ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
icml34wspz [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_b [ 0 ] = 0 ; tmp_k [ 0 ] = rtB .
ihc2fbedkz [ 0 ] ; tmp_k [ 1 ] = rtB . ihc2fbedkz [ 1 ] ; tmp_k [ 2 ] = rtB .
ihc2fbedkz [ 2 ] ; tmp_k [ 3 ] = rtB . ihc2fbedkz [ 3 ] ; tmp_b [ 1 ] = 4 ;
tmp_k [ 4 ] = rtB . eppca1vjoc [ 0 ] ; tmp_k [ 5 ] = rtB . eppca1vjoc [ 1 ] ;
tmp_k [ 6 ] = rtB . eppca1vjoc [ 2 ] ; tmp_k [ 7 ] = rtB . eppca1vjoc [ 3 ] ;
tmp_b [ 2 ] = 8 ; tmp_k [ 8 ] = rtB . m5j42r4u0p [ 0 ] ; tmp_k [ 9 ] = rtB .
m5j42r4u0p [ 1 ] ; tmp_k [ 10 ] = rtB . m5j42r4u0p [ 2 ] ; tmp_k [ 11 ] = rtB
. m5j42r4u0p [ 3 ] ; tmp_b [ 3 ] = 12 ; tmp_k [ 12 ] = rtB . b5fzixuwzk [ 0 ]
; tmp_k [ 13 ] = rtB . b5fzixuwzk [ 1 ] ; tmp_k [ 14 ] = rtB . b5fzixuwzk [ 2
] ; tmp_k [ 15 ] = rtB . b5fzixuwzk [ 3 ] ; tmp_b [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_k [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_b [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 5 ; simulationData -> mData
-> mNonSampledZCs . mX = & _rtZCSV -> iwpr3xta53 ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . j5jrcxb4qp ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_d =
ne_simulator_method ( ( NeslSimulator * ) rtDW . b350mxxcd5 ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_d !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } _rtZCSV -> hazxzl3amg = rtB . apgokrv2pc ; _rtZCSV -> a1pse0pnsp = rtB
. icwlygycrj - rtP . u5_UpperSat_iylwacoy4o ; _rtZCSV -> bo01ncdf0a = rtB .
icwlygycrj - rtP . u5_LowerSat_er1s3ovlcm ; simulationData = (
NeslSimulationData * ) rtDW . pjclqm00ip ; time_g = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_g ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . are00on1hs [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . kqoo2vremt ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
jud4hp33kc [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_l [ 0 ] = 0 ; tmp_n [ 0 ] = rtB .
mz3s2zjmce [ 0 ] ; tmp_n [ 1 ] = rtB . mz3s2zjmce [ 1 ] ; tmp_n [ 2 ] = rtB .
mz3s2zjmce [ 2 ] ; tmp_n [ 3 ] = rtB . mz3s2zjmce [ 3 ] ; tmp_l [ 1 ] = 4 ;
tmp_n [ 4 ] = rtB . e5jutfqvzq [ 0 ] ; tmp_n [ 5 ] = rtB . e5jutfqvzq [ 1 ] ;
tmp_n [ 6 ] = rtB . e5jutfqvzq [ 2 ] ; tmp_n [ 7 ] = rtB . e5jutfqvzq [ 3 ] ;
tmp_l [ 2 ] = 8 ; tmp_n [ 8 ] = rtB . d35bpuglcw [ 0 ] ; tmp_n [ 9 ] = rtB .
d35bpuglcw [ 1 ] ; tmp_n [ 10 ] = rtB . d35bpuglcw [ 2 ] ; tmp_n [ 11 ] = rtB
. d35bpuglcw [ 3 ] ; tmp_l [ 3 ] = 12 ; tmp_n [ 12 ] = rtB . mvicam42is [ 0 ]
; tmp_n [ 13 ] = rtB . mvicam42is [ 1 ] ; tmp_n [ 14 ] = rtB . mvicam42is [ 2
] ; tmp_n [ 15 ] = rtB . mvicam42is [ 3 ] ; tmp_l [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_n [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_l [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 5 ; simulationData -> mData
-> mNonSampledZCs . mX = & _rtZCSV -> d3ahaotrjg ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . ps0145mupz ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_d =
ne_simulator_method ( ( NeslSimulator * ) rtDW . nl1dyr0lbo ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_d !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlTerminate ( void ) { neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . npqncjuh4p ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . l4g30qb3cj ) ; nesl_erase_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_6"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
d5cfrz0sqv ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
lmer5zwzkb ) ; nesl_erase_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_6"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
g34wywbvoq ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
luqgty2sqr ) ; nesl_erase_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_2"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
eav1ttze4f ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
oodgx5kilx ) ; nesl_erase_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_2"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
dau5zpxltv ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
gtngycvr1v ) ; nesl_erase_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_7"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
c42r12fxzd ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
a2ojuitiri ) ; nesl_erase_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_7"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
bfzy1zqdrk ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
dc0ikbgay5 ) ; nesl_erase_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_5"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
odxr5jqq3h ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
arv32tkm5f ) ; nesl_erase_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_5"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
lx2smnavwa ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
kl0ddpmtll ) ; nesl_erase_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_1"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
ox542gociu ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
er43jccux2 ) ; nesl_erase_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_1"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
j5jrcxb4qp ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
gew2edtgzk ) ; nesl_erase_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_3"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
klyw22x3a5 ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
gabyx120co ) ; nesl_erase_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_3"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
ps0145mupz ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
pjclqm00ip ) ; nesl_erase_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_4"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
kds0ednfxw ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
c14icyaj2t ) ; nesl_erase_simulator (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_4"
) ; { if ( rtDW . o4rzjlwnp0 . AQHandles ) { sdiTerminateStreaming ( & rtDW .
o4rzjlwnp0 . AQHandles ) ; } if ( rtDW . o4rzjlwnp0 . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . o4rzjlwnp0 . SlioLTF ) ; } } { if ( rtDW
. ess5xfw1cg . AQHandles ) { sdiTerminateStreaming ( & rtDW . ess5xfw1cg .
AQHandles ) ; } if ( rtDW . ess5xfw1cg . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . ess5xfw1cg . SlioLTF ) ; } } { if ( rtDW
. juqvuixxqk . AQHandles ) { sdiTerminateStreaming ( & rtDW . juqvuixxqk .
AQHandles ) ; } if ( rtDW . juqvuixxqk . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . juqvuixxqk . SlioLTF ) ; } } { if ( rtDW
. p5riohe4an . AQHandles ) { sdiTerminateStreaming ( & rtDW . p5riohe4an .
AQHandles ) ; } if ( rtDW . p5riohe4an . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . p5riohe4an . SlioLTF ) ; } } { if ( rtDW
. kumdlxv2pj . AQHandles ) { sdiTerminateStreaming ( & rtDW . kumdlxv2pj .
AQHandles ) ; } if ( rtDW . kumdlxv2pj . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . kumdlxv2pj . SlioLTF ) ; } } { if ( rtDW
. gxx4qdhgam . AQHandles ) { sdiTerminateStreaming ( & rtDW . gxx4qdhgam .
AQHandles ) ; } if ( rtDW . gxx4qdhgam . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . gxx4qdhgam . SlioLTF ) ; } } { if ( rtDW
. grbxtmi4gy . AQHandles ) { sdiTerminateStreaming ( & rtDW . grbxtmi4gy .
AQHandles ) ; } if ( rtDW . grbxtmi4gy . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . grbxtmi4gy . SlioLTF ) ; } } { if ( rtDW
. kf2l0bp4qf . AQHandles ) { sdiTerminateStreaming ( & rtDW . kf2l0bp4qf .
AQHandles ) ; } if ( rtDW . kf2l0bp4qf . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . kf2l0bp4qf . SlioLTF ) ; } } { if ( rtDW
. cbaon5wpyd . AQHandles ) { sdiTerminateStreaming ( & rtDW . cbaon5wpyd .
AQHandles ) ; } if ( rtDW . cbaon5wpyd . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . cbaon5wpyd . SlioLTF ) ; } } { if ( rtDW
. myfwmwkhyi . AQHandles ) { sdiTerminateStreaming ( & rtDW . myfwmwkhyi .
AQHandles ) ; } if ( rtDW . myfwmwkhyi . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . myfwmwkhyi . SlioLTF ) ; } } { if ( rtDW
. mhxdgqlean . AQHandles ) { sdiTerminateStreaming ( & rtDW . mhxdgqlean .
AQHandles ) ; } if ( rtDW . mhxdgqlean . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . mhxdgqlean . SlioLTF ) ; } } { if ( rtDW
. iasjyosrf4 . AQHandles ) { sdiTerminateStreaming ( & rtDW . iasjyosrf4 .
AQHandles ) ; } if ( rtDW . iasjyosrf4 . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . iasjyosrf4 . SlioLTF ) ; } } { if ( rtDW
. krymky00fw . AQHandles ) { sdiTerminateStreaming ( & rtDW . krymky00fw .
AQHandles ) ; } if ( rtDW . krymky00fw . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . krymky00fw . SlioLTF ) ; } } { if ( rtDW
. aty3pq5a3r . AQHandles ) { sdiTerminateStreaming ( & rtDW . aty3pq5a3r .
AQHandles ) ; } if ( rtDW . aty3pq5a3r . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . aty3pq5a3r . SlioLTF ) ; } } { if ( rtDW
. iasjyosrf4l . AQHandles ) { sdiTerminateStreaming ( & rtDW . iasjyosrf4l .
AQHandles ) ; } if ( rtDW . iasjyosrf4l . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . iasjyosrf4l . SlioLTF ) ; } } { if ( rtDW
. krymky00fwv . AQHandles ) { sdiTerminateStreaming ( & rtDW . krymky00fwv .
AQHandles ) ; } if ( rtDW . krymky00fwv . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . krymky00fwv . SlioLTF ) ; } } { if ( rtDW
. aty3pq5a3rd . AQHandles ) { sdiTerminateStreaming ( & rtDW . aty3pq5a3rd .
AQHandles ) ; } if ( rtDW . aty3pq5a3rd . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . aty3pq5a3rd . SlioLTF ) ; } } { if ( rtDW
. iasjyosrf4lj . AQHandles ) { sdiTerminateStreaming ( & rtDW . iasjyosrf4lj
. AQHandles ) ; } if ( rtDW . iasjyosrf4lj . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . iasjyosrf4lj . SlioLTF ) ; } } { if (
rtDW . krymky00fwve . AQHandles ) { sdiTerminateStreaming ( & rtDW .
krymky00fwve . AQHandles ) ; } if ( rtDW . krymky00fwve . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . krymky00fwve . SlioLTF ) ; } } { if (
rtDW . aty3pq5a3rdc . AQHandles ) { sdiTerminateStreaming ( & rtDW .
aty3pq5a3rdc . AQHandles ) ; } if ( rtDW . aty3pq5a3rdc . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . aty3pq5a3rdc . SlioLTF ) ; } } { if (
rtDW . iasjyosrf4ljd . AQHandles ) { sdiTerminateStreaming ( & rtDW .
iasjyosrf4ljd . AQHandles ) ; } if ( rtDW . iasjyosrf4ljd . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . iasjyosrf4ljd . SlioLTF ) ; } } { if (
rtDW . krymky00fwveg . AQHandles ) { sdiTerminateStreaming ( & rtDW .
krymky00fwveg . AQHandles ) ; } if ( rtDW . krymky00fwveg . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . krymky00fwveg . SlioLTF ) ; } } { if (
rtDW . aty3pq5a3rdcg . AQHandles ) { sdiTerminateStreaming ( & rtDW .
aty3pq5a3rdcg . AQHandles ) ; } if ( rtDW . aty3pq5a3rdcg . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . aty3pq5a3rdcg . SlioLTF ) ; } } { if (
rtDW . iasjyosrf4ljd4 . AQHandles ) { sdiTerminateStreaming ( & rtDW .
iasjyosrf4ljd4 . AQHandles ) ; } if ( rtDW . iasjyosrf4ljd4 . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . iasjyosrf4ljd4 . SlioLTF ) ; } } { if (
rtDW . krymky00fwvegl . AQHandles ) { sdiTerminateStreaming ( & rtDW .
krymky00fwvegl . AQHandles ) ; } if ( rtDW . krymky00fwvegl . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . krymky00fwvegl . SlioLTF ) ; } } { if (
rtDW . aty3pq5a3rdcgn . AQHandles ) { sdiTerminateStreaming ( & rtDW .
aty3pq5a3rdcgn . AQHandles ) ; } if ( rtDW . aty3pq5a3rdcgn . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . aty3pq5a3rdcgn . SlioLTF ) ; } } { if (
rtDW . iasjyosrf4ljd4p . AQHandles ) { sdiTerminateStreaming ( & rtDW .
iasjyosrf4ljd4p . AQHandles ) ; } if ( rtDW . iasjyosrf4ljd4p . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . iasjyosrf4ljd4p . SlioLTF ) ; } } { if (
rtDW . krymky00fwvegln . AQHandles ) { sdiTerminateStreaming ( & rtDW .
krymky00fwvegln . AQHandles ) ; } if ( rtDW . krymky00fwvegln . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . krymky00fwvegln . SlioLTF ) ; } } { if (
rtDW . aty3pq5a3rdcgno . AQHandles ) { sdiTerminateStreaming ( & rtDW .
aty3pq5a3rdcgno . AQHandles ) ; } if ( rtDW . aty3pq5a3rdcgno . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . aty3pq5a3rdcgno . SlioLTF ) ; } } if (
rt_slioCatalogue ( ) != ( NULL ) ) { void * * slioCatalogueAddr =
rt_slioCatalogueAddr ( ) ; rtwSaveDatasetsToMatFile (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ,
rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 62 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 6 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
3 ) ; ssSetNumBlocks ( rtS , 748 ) ; ssSetNumBlockIO ( rtS , 120 ) ;
ssSetNumBlockParams ( rtS , 90 ) ; } void MdlInitializeSampleTimes ( void ) {
ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0 ) ;
ssSetSampleTime ( rtS , 2 , 0.1 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 1.0 ) ; ssSetOffsetTime ( rtS , 2 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 2698101852U ) ;
ssSetChecksumVal ( rtS , 1 , 2922316287U ) ; ssSetChecksumVal ( rtS , 2 ,
2587534183U ) ; ssSetChecksumVal ( rtS , 3 , 710481660U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( void ) { static struct _ssMdlInfo mdlInfo
; ( void ) memset ( ( char * ) rtS , 0 , sizeof ( SimStruct ) ) ; ( void )
memset ( ( char * ) & mdlInfo , 0 , sizeof ( struct _ssMdlInfo ) ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { ssSetY ( rtS , & rtY ) ; ( void ) memset ( ( void * ) & rtY , 0
, sizeof ( ExtY ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates (
rtS , x ) ; ( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void *
dwork = ( void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset
( dwork , 0 , sizeof ( DW ) ) ; } { rtDW . gdocvflmcr = 29 ; rtDW .
bwyrw3acho = 32 ; rtDW . cyfqrvqkg4 = 37 ; rtDW . p1xxvhgf3v = 40 ; rtDW .
iu2s2vbg4w = 43 ; rtDW . juiuitfey0 = 46 ; } { static DataTypeTransInfo
dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ;
ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo . numDataTypes = 14 ;
dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = &
rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = & rtBTransTable ; dtInfo .
PTransTable = & rtPTransTable ; dtInfo . dataTypeInfoTable =
rtDataTypeInfoTable ; } cst_robotarm_original_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"cst_robotarm_original" ) ; ssSetPath ( rtS , "cst_robotarm_original" ) ;
ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 40.0 ) ; { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = NULL ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static int_T
rt_LoggedStateWidths [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 1 , 2 , 2 , 2 , 2 , 2 , 1
, 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 1 , 2 , 2 , 2 , 2 , 2 , 1 , 2 , 2 , 2 , 2 ,
2 , 1 , 2 , 2 , 2 , 2 , 2 , 1 , 2 , 2 , 2 , 2 } ; static int_T
rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 1 , 2 , 2 , 2 , 2 , 2
, 1 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 1 , 2 , 2 , 2 , 2 , 2 , 1 , 2 , 2 , 2 ,
2 , 2 , 1 , 2 , 2 , 2 , 2 , 2 , 1 , 2 , 2 , 2 , 2 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) } ; static const char_T * rt_LoggedStateLabels
[ ] = { "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"Discrete" , "Discrete" , "states" , "Discrete" , "Discrete" , "Discrete" ,
"Discrete" , "Discrete" , "states" , "Discrete" , "Discrete" , "Discrete" ,
"Discrete" , "Discrete" , "Discrete" , "Discrete" , "Discrete" , "states" ,
"Discrete" , "Discrete" , "Discrete" , "Discrete" , "Discrete" , "states" ,
"Discrete" , "Discrete" , "Discrete" , "Discrete" , "Discrete" , "states" ,
"Discrete" , "Discrete" , "Discrete" , "Discrete" , "Discrete" , "states" ,
"Discrete" , "Discrete" , "Discrete" , "Discrete" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = {
"cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R1" ,
"cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R1" ,
"cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R2" ,
"cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R2" ,
"cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R3" ,
"cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R3" ,
"cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R4" ,
"cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R4" ,
"cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R5" ,
"cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R5" ,
"cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R6" ,
"cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R6" ,
"cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R7" ,
"cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R7" ,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gripper/Revolute1"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gripper/Revolute1"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gripper/Revolute3"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gripper/Revolute3"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gripper/Revolute2"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gripper/Revolute2"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gripper/Revolute"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gripper/Revolute"
, "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/P2" ,
"cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/P2" ,
"cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/P1" ,
"cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/P1" ,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gear Constraint"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gear Constraint"
, "cst_robotarm_original/Controller/turntablePID/Integrator" ,
"cst_robotarm_original/6 DOF Robot Arm/DC Motors/Turntable Motor/DC Motor" ,
 "cst_robotarm_original/6 DOF Robot Arm/DC Motors/Turntable Motor/Power Amplifier/H-Bridge"
,
 "cst_robotarm_original/6 DOF Robot Arm/DC Motors/Turntable Motor/Power Amplifier/Controlled PWM Voltage"
, "cst_robotarm_original/6 DOF Robot Arm/DC Motors/Turntable Motor/DC Motor"
, "cst_robotarm_original/Controller/bicepPID/Integrator" ,
"cst_robotarm_original/6 DOF Robot Arm/DC Motors/Bicep Motor1/DC Motor" ,
"cst_robotarm_original/6 DOF Robot Arm/DC Motors/Bicep Motor2/DC Motor" ,
 "cst_robotarm_original/6 DOF Robot Arm/DC Motors/Bicep Motor1/Power Amplifier/H-Bridge"
,
 "cst_robotarm_original/6 DOF Robot Arm/DC Motors/Bicep Motor2/Power Amplifier/H-Bridge"
,
 "cst_robotarm_original/6 DOF Robot Arm/DC Motors/Bicep Motor2/Power Amplifier/Controlled PWM Voltage"
,
 "cst_robotarm_original/6 DOF Robot Arm/DC Motors/Bicep Motor1/Power Amplifier/Controlled PWM Voltage"
, "cst_robotarm_original/6 DOF Robot Arm/DC Motors/Bicep Motor1/DC Motor" ,
"cst_robotarm_original/6 DOF Robot Arm/DC Motors/Bicep Motor2/DC Motor" ,
"cst_robotarm_original/Controller/forearPID/Integrator" ,
"cst_robotarm_original/6 DOF Robot Arm/DC Motors/Forearm Motor/DC Motor" ,
 "cst_robotarm_original/6 DOF Robot Arm/DC Motors/Forearm Motor/Power Amplifier/H-Bridge"
,
 "cst_robotarm_original/6 DOF Robot Arm/DC Motors/Forearm Motor/Power Amplifier/Controlled PWM Voltage"
, "cst_robotarm_original/6 DOF Robot Arm/DC Motors/Forearm Motor/DC Motor" ,
"cst_robotarm_original/Controller/wristPID/Integrator" ,
"cst_robotarm_original/6 DOF Robot Arm/DC Motors/Wrist Motor/DC Motor" ,
 "cst_robotarm_original/6 DOF Robot Arm/DC Motors/Wrist Motor/Power Amplifier/H-Bridge"
,
 "cst_robotarm_original/6 DOF Robot Arm/DC Motors/Wrist Motor/Power Amplifier/Controlled PWM Voltage"
, "cst_robotarm_original/6 DOF Robot Arm/DC Motors/Wrist Motor/DC Motor" ,
"cst_robotarm_original/Controller/handPID/Integrator" ,
"cst_robotarm_original/6 DOF Robot Arm/DC Motors/Hand Motor/DC Motor" ,
 "cst_robotarm_original/6 DOF Robot Arm/DC Motors/Hand Motor/Power Amplifier/H-Bridge"
,
 "cst_robotarm_original/6 DOF Robot Arm/DC Motors/Hand Motor/Power Amplifier/Controlled PWM Voltage"
, "cst_robotarm_original/6 DOF Robot Arm/DC Motors/Hand Motor/DC Motor" ,
"cst_robotarm_original/Controller/gripperPID/Integrator" ,
"cst_robotarm_original/6 DOF Robot Arm/DC Motors/Hand Motor1/DC Motor" ,
 "cst_robotarm_original/6 DOF Robot Arm/DC Motors/Hand Motor1/Power Amplifier/H-Bridge"
,
 "cst_robotarm_original/6 DOF Robot Arm/DC Motors/Hand Motor1/Power Amplifier/Controlled PWM Voltage"
, "cst_robotarm_original/6 DOF Robot Arm/DC Motors/Hand Motor1/DC Motor" ,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/STATE_6"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_7_1_1"
,
"cst_robotarm_original/Controller/Signal Conditioning/Discrete\nTransfer Fcn"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_17_1_1"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_16_1_1"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_18_1_1"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_5_1_1"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_8_1_1"
,
"cst_robotarm_original/Controller/Signal Conditioning/Discrete\nTransfer Fcn1"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_6_1_1"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_1_1_1"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_9_1_1"
,
"cst_robotarm_original/Controller/Signal Conditioning/Discrete\nTransfer Fcn2"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_8_1_1"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_7_1_1"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_9_1_1"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_2_1_1"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_10_1_1"
,
"cst_robotarm_original/Controller/Signal Conditioning/Discrete\nTransfer Fcn3"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_20_1_1"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_19_1_1"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_21_1_1"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_6_1_1"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_11_1_1"
,
"cst_robotarm_original/Controller/Signal Conditioning/Discrete\nTransfer Fcn4"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_11_1_1"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_10_1_1"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_12_1_1"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_4_1_1"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_12_1_1"
,
"cst_robotarm_original/Controller/Signal Conditioning/Discrete\nTransfer Fcn5"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_14_1_1"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_13_1_1"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_15_1_1"
,
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_3_1_1"
} ; static const char_T * rt_LoggedStateNames [ ] = {
"cst_robotarm_original.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R1.Rz.q" ,
"cst_robotarm_original.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R1.Rz.w" ,
"cst_robotarm_original.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R2.Rz.q" ,
"cst_robotarm_original.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R2.Rz.w" ,
"cst_robotarm_original.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R3.Rz.q" ,
"cst_robotarm_original.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R3.Rz.w" ,
"cst_robotarm_original.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R4.Rz.q" ,
"cst_robotarm_original.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R4.Rz.w" ,
"cst_robotarm_original.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R5.Rz.q" ,
"cst_robotarm_original.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R5.Rz.w" ,
"cst_robotarm_original.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R6.Rz.q" ,
"cst_robotarm_original.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R6.Rz.w" ,
"cst_robotarm_original.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R7.Rz.q" ,
"cst_robotarm_original.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R7.Rz.w" ,
 "cst_robotarm_original.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gripper.Revolute1.Rz.q"
,
 "cst_robotarm_original.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gripper.Revolute1.Rz.w"
,
 "cst_robotarm_original.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gripper.Revolute3.Rz.q"
,
 "cst_robotarm_original.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gripper.Revolute3.Rz.w"
,
 "cst_robotarm_original.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gripper.Revolute2.Rz.q"
,
 "cst_robotarm_original.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gripper.Revolute2.Rz.w"
,
 "cst_robotarm_original.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gripper.Revolute.Rz.q"
,
 "cst_robotarm_original.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gripper.Revolute.Rz.w"
, "cst_robotarm_original.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.P2.Rz.q"
, "cst_robotarm_original.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.P2.Rz.w"
, "cst_robotarm_original.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.P1.Rz.q"
, "cst_robotarm_original.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.P1.Rz.w"
,
 "cst_robotarm_original.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gear_Constraint.q"
,
 "cst_robotarm_original.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gear_Constraint.w"
, "" ,
"cst_robotarm_original.x6_DOF_Robot_Arm.DC_Motors.Turntable_Motor.DC_Motor.i_L"
,
 "cst_robotarm_original.x6_DOF_Robot_Arm.DC_Motors.Turntable_Motor.Power_Amplifier.H_Bridge.v_lag"
,
 "cst_robotarm_original.x6_DOF_Robot_Arm.DC_Motors.Turntable_Motor.Power_Amplifier.Controlled_PWM_Voltage.p2.v"
,
"cst_robotarm_original.x6_DOF_Robot_Arm.DC_Motors.Turntable_Motor.DC_Motor.v"
, "" ,
"cst_robotarm_original.x6_DOF_Robot_Arm.DC_Motors.Bicep_Motor1.DC_Motor.i_L"
,
"cst_robotarm_original.x6_DOF_Robot_Arm.DC_Motors.Bicep_Motor2.DC_Motor.i_L"
,
 "cst_robotarm_original.x6_DOF_Robot_Arm.DC_Motors.Bicep_Motor1.Power_Amplifier.H_Bridge.v_lag"
,
 "cst_robotarm_original.x6_DOF_Robot_Arm.DC_Motors.Bicep_Motor2.Power_Amplifier.H_Bridge.v_lag"
,
 "cst_robotarm_original.x6_DOF_Robot_Arm.DC_Motors.Bicep_Motor2.Power_Amplifier.Controlled_PWM_Voltage.p2.v"
,
 "cst_robotarm_original.x6_DOF_Robot_Arm.DC_Motors.Bicep_Motor1.Power_Amplifier.Controlled_PWM_Voltage.p2.v"
, "cst_robotarm_original.x6_DOF_Robot_Arm.DC_Motors.Bicep_Motor1.DC_Motor.v"
, "cst_robotarm_original.x6_DOF_Robot_Arm.DC_Motors.Bicep_Motor2.DC_Motor.v"
, "" ,
"cst_robotarm_original.x6_DOF_Robot_Arm.DC_Motors.Forearm_Motor.DC_Motor.i_L"
,
 "cst_robotarm_original.x6_DOF_Robot_Arm.DC_Motors.Forearm_Motor.Power_Amplifier.H_Bridge.v_lag"
,
 "cst_robotarm_original.x6_DOF_Robot_Arm.DC_Motors.Forearm_Motor.Power_Amplifier.Controlled_PWM_Voltage.p2.v"
, "cst_robotarm_original.x6_DOF_Robot_Arm.DC_Motors.Forearm_Motor.DC_Motor.v"
, "" ,
"cst_robotarm_original.x6_DOF_Robot_Arm.DC_Motors.Wrist_Motor.DC_Motor.i_L" ,
 "cst_robotarm_original.x6_DOF_Robot_Arm.DC_Motors.Wrist_Motor.Power_Amplifier.H_Bridge.v_lag"
,
 "cst_robotarm_original.x6_DOF_Robot_Arm.DC_Motors.Wrist_Motor.Power_Amplifier.Controlled_PWM_Voltage.p2.v"
, "cst_robotarm_original.x6_DOF_Robot_Arm.DC_Motors.Wrist_Motor.DC_Motor.v" ,
"" ,
"cst_robotarm_original.x6_DOF_Robot_Arm.DC_Motors.Hand_Motor.DC_Motor.i_L" ,
 "cst_robotarm_original.x6_DOF_Robot_Arm.DC_Motors.Hand_Motor.Power_Amplifier.H_Bridge.v_lag"
,
 "cst_robotarm_original.x6_DOF_Robot_Arm.DC_Motors.Hand_Motor.Power_Amplifier.Controlled_PWM_Voltage.p2.v"
, "cst_robotarm_original.x6_DOF_Robot_Arm.DC_Motors.Hand_Motor.DC_Motor.v" ,
"" ,
"cst_robotarm_original.x6_DOF_Robot_Arm.DC_Motors.Hand_Motor1.DC_Motor.i_L" ,
 "cst_robotarm_original.x6_DOF_Robot_Arm.DC_Motors.Hand_Motor1.Power_Amplifier.H_Bridge.v_lag"
,
 "cst_robotarm_original.x6_DOF_Robot_Arm.DC_Motors.Hand_Motor1.Power_Amplifier.Controlled_PWM_Voltage.p2.v"
, "cst_robotarm_original.x6_DOF_Robot_Arm.DC_Motors.Hand_Motor1.DC_Motor.v" ,
"" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" ,
"" , "" , "" , "" , "" , "" , "" , "" , "" } ; static boolean_T
rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } } ; static RTWLogSignalInfo rt_LoggedStateSignalInfo =
{ 102 , rt_LoggedStateWidths , rt_LoggedStateNumDimensions ,
rt_LoggedStateDimensions , rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) ,
rt_LoggedStateDataTypeIds , rt_LoggedStateComplexSignals , ( NULL ) ,
rt_LoggingStatePreprocessingFcnPtrs , { rt_LoggedStateLabels } , ( NULL ) , (
NULL ) , ( NULL ) , { rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert } ; static void *
rt_LoggedStateSignalPtrs [ 102 ] ; rtliSetLogXSignalPtrs ( ssGetRTWLogInfo (
rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . ce41paa4nx [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . ce41paa4nx [ 1 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . ce41paa4nx [ 2 ] ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . ce41paa4nx [ 3 ] ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . ce41paa4nx [ 4 ] ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . ce41paa4nx [ 5 ] ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . ce41paa4nx [ 6 ] ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . ce41paa4nx [ 7 ] ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . ce41paa4nx [ 8 ] ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . ce41paa4nx [ 9 ] ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . ce41paa4nx [ 10 ] ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . ce41paa4nx [ 11 ] ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . ce41paa4nx [ 12 ] ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . ce41paa4nx [ 13 ] ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . ce41paa4nx [ 14 ] ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . ce41paa4nx [ 15 ] ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtX . ce41paa4nx [ 16 ] ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtX . ce41paa4nx [ 17 ] ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtX . ce41paa4nx [ 18 ] ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtX . ce41paa4nx [ 19 ] ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtX . ce41paa4nx [ 20 ] ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtX . ce41paa4nx [ 21 ] ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtX . ce41paa4nx [ 22 ] ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtX . ce41paa4nx [ 23 ] ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtX . ce41paa4nx [ 24 ] ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtX . ce41paa4nx [ 25 ] ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) & rtX . ce41paa4nx [ 26 ] ;
rt_LoggedStateSignalPtrs [ 27 ] = ( void * ) & rtX . ce41paa4nx [ 27 ] ;
rt_LoggedStateSignalPtrs [ 28 ] = ( void * ) & rtX . i5qlpo3uju ;
rt_LoggedStateSignalPtrs [ 29 ] = ( void * ) & rtX . mcc3w3jrrs [ 0 ] ;
rt_LoggedStateSignalPtrs [ 30 ] = ( void * ) & rtX . mcc3w3jrrs [ 1 ] ;
rt_LoggedStateSignalPtrs [ 31 ] = ( void * ) & rtX . mcc3w3jrrs [ 2 ] ;
rt_LoggedStateSignalPtrs [ 32 ] = ( void * ) & rtX . mcc3w3jrrs [ 3 ] ;
rt_LoggedStateSignalPtrs [ 33 ] = ( void * ) & rtX . mhwbc1sinq ;
rt_LoggedStateSignalPtrs [ 34 ] = ( void * ) & rtX . p2hm1z5lwa [ 0 ] ;
rt_LoggedStateSignalPtrs [ 35 ] = ( void * ) & rtX . p2hm1z5lwa [ 1 ] ;
rt_LoggedStateSignalPtrs [ 36 ] = ( void * ) & rtX . p2hm1z5lwa [ 2 ] ;
rt_LoggedStateSignalPtrs [ 37 ] = ( void * ) & rtX . p2hm1z5lwa [ 3 ] ;
rt_LoggedStateSignalPtrs [ 38 ] = ( void * ) & rtX . p2hm1z5lwa [ 4 ] ;
rt_LoggedStateSignalPtrs [ 39 ] = ( void * ) & rtX . p2hm1z5lwa [ 5 ] ;
rt_LoggedStateSignalPtrs [ 40 ] = ( void * ) & rtX . p2hm1z5lwa [ 6 ] ;
rt_LoggedStateSignalPtrs [ 41 ] = ( void * ) & rtX . p2hm1z5lwa [ 7 ] ;
rt_LoggedStateSignalPtrs [ 42 ] = ( void * ) & rtX . h45mkuq5bv ;
rt_LoggedStateSignalPtrs [ 43 ] = ( void * ) & rtX . gh2q4rwxqd [ 0 ] ;
rt_LoggedStateSignalPtrs [ 44 ] = ( void * ) & rtX . gh2q4rwxqd [ 1 ] ;
rt_LoggedStateSignalPtrs [ 45 ] = ( void * ) & rtX . gh2q4rwxqd [ 2 ] ;
rt_LoggedStateSignalPtrs [ 46 ] = ( void * ) & rtX . gh2q4rwxqd [ 3 ] ;
rt_LoggedStateSignalPtrs [ 47 ] = ( void * ) & rtX . nxxszasjmi ;
rt_LoggedStateSignalPtrs [ 48 ] = ( void * ) & rtX . cdzh5av0vj [ 0 ] ;
rt_LoggedStateSignalPtrs [ 49 ] = ( void * ) & rtX . cdzh5av0vj [ 1 ] ;
rt_LoggedStateSignalPtrs [ 50 ] = ( void * ) & rtX . cdzh5av0vj [ 2 ] ;
rt_LoggedStateSignalPtrs [ 51 ] = ( void * ) & rtX . cdzh5av0vj [ 3 ] ;
rt_LoggedStateSignalPtrs [ 52 ] = ( void * ) & rtX . jx11onf5nn ;
rt_LoggedStateSignalPtrs [ 53 ] = ( void * ) & rtX . jeqh2re42y [ 0 ] ;
rt_LoggedStateSignalPtrs [ 54 ] = ( void * ) & rtX . jeqh2re42y [ 1 ] ;
rt_LoggedStateSignalPtrs [ 55 ] = ( void * ) & rtX . jeqh2re42y [ 2 ] ;
rt_LoggedStateSignalPtrs [ 56 ] = ( void * ) & rtX . jeqh2re42y [ 3 ] ;
rt_LoggedStateSignalPtrs [ 57 ] = ( void * ) & rtX . o3frtqftuu ;
rt_LoggedStateSignalPtrs [ 58 ] = ( void * ) & rtX . are00on1hs [ 0 ] ;
rt_LoggedStateSignalPtrs [ 59 ] = ( void * ) & rtX . are00on1hs [ 1 ] ;
rt_LoggedStateSignalPtrs [ 60 ] = ( void * ) & rtX . are00on1hs [ 2 ] ;
rt_LoggedStateSignalPtrs [ 61 ] = ( void * ) & rtX . are00on1hs [ 3 ] ;
rt_LoggedStateSignalPtrs [ 62 ] = ( void * ) & rtDW . datwzvdkzf ;
rt_LoggedStateSignalPtrs [ 63 ] = ( void * ) rtDW . jsufpcm2h1 ;
rt_LoggedStateSignalPtrs [ 64 ] = ( void * ) & rtDW . oteri1his1 ;
rt_LoggedStateSignalPtrs [ 65 ] = ( void * ) rtDW . hm0fbffqcv ;
rt_LoggedStateSignalPtrs [ 66 ] = ( void * ) rtDW . onotso1e4o ;
rt_LoggedStateSignalPtrs [ 67 ] = ( void * ) rtDW . mdwdn4mq5y ;
rt_LoggedStateSignalPtrs [ 68 ] = ( void * ) rtDW . nay0nx50aq ;
rt_LoggedStateSignalPtrs [ 69 ] = ( void * ) rtDW . ijg51izxkl ;
rt_LoggedStateSignalPtrs [ 70 ] = ( void * ) & rtDW . cqhilrskhq ;
rt_LoggedStateSignalPtrs [ 71 ] = ( void * ) rtDW . b51bwduuqj ;
rt_LoggedStateSignalPtrs [ 72 ] = ( void * ) rtDW . cmmyis0zms ;
rt_LoggedStateSignalPtrs [ 73 ] = ( void * ) rtDW . bjdhfc5lhz ;
rt_LoggedStateSignalPtrs [ 74 ] = ( void * ) rtDW . fqcn0fobut ;
rt_LoggedStateSignalPtrs [ 75 ] = ( void * ) rtDW . i4yre5y4ym ;
rt_LoggedStateSignalPtrs [ 76 ] = ( void * ) rtDW . l4kasjhfye ;
rt_LoggedStateSignalPtrs [ 77 ] = ( void * ) rtDW . l0y1034bd5 ;
rt_LoggedStateSignalPtrs [ 78 ] = ( void * ) rtDW . kyvarcad3d ;
rt_LoggedStateSignalPtrs [ 79 ] = ( void * ) & rtDW . o11cnuhibt ;
rt_LoggedStateSignalPtrs [ 80 ] = ( void * ) rtDW . jafswfarp2 ;
rt_LoggedStateSignalPtrs [ 81 ] = ( void * ) rtDW . lzxapb1icv ;
rt_LoggedStateSignalPtrs [ 82 ] = ( void * ) rtDW . bvsxd0r1dp ;
rt_LoggedStateSignalPtrs [ 83 ] = ( void * ) rtDW . azqlqnux04 ;
rt_LoggedStateSignalPtrs [ 84 ] = ( void * ) rtDW . ny5kxgxak5 ;
rt_LoggedStateSignalPtrs [ 85 ] = ( void * ) & rtDW . i5kbys15rw ;
rt_LoggedStateSignalPtrs [ 86 ] = ( void * ) rtDW . dp5ayouabh ;
rt_LoggedStateSignalPtrs [ 87 ] = ( void * ) rtDW . ojlmayfn5v ;
rt_LoggedStateSignalPtrs [ 88 ] = ( void * ) rtDW . av2yidzrx1 ;
rt_LoggedStateSignalPtrs [ 89 ] = ( void * ) rtDW . bfsrb41ojm ;
rt_LoggedStateSignalPtrs [ 90 ] = ( void * ) rtDW . iziuo251lm ;
rt_LoggedStateSignalPtrs [ 91 ] = ( void * ) & rtDW . hlednh44vj ;
rt_LoggedStateSignalPtrs [ 92 ] = ( void * ) rtDW . ji4mf0t5wt ;
rt_LoggedStateSignalPtrs [ 93 ] = ( void * ) rtDW . fdd414vrzu ;
rt_LoggedStateSignalPtrs [ 94 ] = ( void * ) rtDW . jftwl5tifw ;
rt_LoggedStateSignalPtrs [ 95 ] = ( void * ) rtDW . koirnrkaxf ;
rt_LoggedStateSignalPtrs [ 96 ] = ( void * ) rtDW . j1sr35bzb5 ;
rt_LoggedStateSignalPtrs [ 97 ] = ( void * ) & rtDW . gx3cfax52r ;
rt_LoggedStateSignalPtrs [ 98 ] = ( void * ) rtDW . o0po5lhjyj ;
rt_LoggedStateSignalPtrs [ 99 ] = ( void * ) rtDW . khqn4cuxu4 ;
rt_LoggedStateSignalPtrs [ 100 ] = ( void * ) rtDW . iuiv3zyr1f ;
rt_LoggedStateSignalPtrs [ 101 ] = ( void * ) rtDW . ff51t1byru ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "tmp_raccel_xout" ) ; rtliSetLogXFinal (
ssGetRTWLogInfo ( rtS ) , "xFinal" ) ; rtliSetLogVarNameModifier (
ssGetRTWLogInfo ( rtS ) , "none" ) ; rtliSetLogFormat ( ssGetRTWLogInfo ( rtS
) , 2 ) ; rtliSetLogMaxRows ( ssGetRTWLogInfo ( rtS ) , 1000 ) ;
rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS ) , 1 ) ; { static void *
rt_LoggedOutputSignalPtrs [ ] = { & rtY . k2akfhivm3 , & rtY . oii0nuh1ou , &
rtY . og5vdhwsfp , & rtY . lia5vz21zn , & rtY . n15as4u4l3 , & rtY .
povb5tbw2v } ; rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( (
LogSignalPtrsType ) rt_LoggedOutputSignalPtrs ) ) ; } { static int_T
rt_LoggedOutputWidths [ ] = { 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedOutputNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedOutputDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 } ; static boolean_T
rt_LoggedOutputIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 } ; static void *
rt_LoggedCurrentSignalDimensions [ ] = { ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) } ; static int_T
rt_LoggedCurrentSignalDimensionsSize [ ] = { 4 , 4 , 4 , 4 , 4 , 4 } ; static
BuiltInDTypeId rt_LoggedOutputDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedOutputComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWPreprocessingFcnPtr rt_LoggingPreprocessingFcnPtrs [ ] = { ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static const char_T *
rt_LoggedOutputLabels_0 [ ] = { "tAngle" } ; static const char_T *
rt_LoggedOutputBlockNames_0 [ ] = { "cst_robotarm_original/tAngle" } ; static
const char_T * rt_LoggedOutputLabels_1 [ ] = { "bAngle" } ; static const
char_T * rt_LoggedOutputBlockNames_1 [ ] = { "cst_robotarm_original/bAngle" }
; static const char_T * rt_LoggedOutputLabels_2 [ ] = { "fAngle" } ; static
const char_T * rt_LoggedOutputBlockNames_2 [ ] = {
"cst_robotarm_original/fAngle" } ; static const char_T *
rt_LoggedOutputLabels_3 [ ] = { "wAngle" } ; static const char_T *
rt_LoggedOutputBlockNames_3 [ ] = { "cst_robotarm_original/wAngle" } ; static
const char_T * rt_LoggedOutputLabels_4 [ ] = { "hAngle" } ; static const
char_T * rt_LoggedOutputBlockNames_4 [ ] = { "cst_robotarm_original/hAngle" }
; static const char_T * rt_LoggedOutputLabels_5 [ ] = { "gAngle" } ; static
const char_T * rt_LoggedOutputBlockNames_5 [ ] = {
"cst_robotarm_original/gAngle" } ; static RTWLogDataTypeConvert
rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 ,
1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } ,
{ 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } } ; static RTWLogSignalInfo rt_LoggedOutputSignalInfo [ ] = { { 1 ,
rt_LoggedOutputWidths , rt_LoggedOutputNumDimensions ,
rt_LoggedOutputDimensions , rt_LoggedOutputIsVarDims ,
rt_LoggedCurrentSignalDimensions , rt_LoggedCurrentSignalDimensionsSize ,
rt_LoggedOutputDataTypeIds , rt_LoggedOutputComplexSignals , ( NULL ) ,
rt_LoggingPreprocessingFcnPtrs , { rt_LoggedOutputLabels_0 } , ( NULL ) , (
NULL ) , ( NULL ) , { rt_LoggedOutputBlockNames_0 } , { ( NULL ) } , ( NULL )
, rt_RTWLogDataTypeConvert } , { 1 , rt_LoggedOutputWidths + 1 ,
rt_LoggedOutputNumDimensions + 1 , rt_LoggedOutputDimensions + 1 ,
rt_LoggedOutputIsVarDims + 1 , rt_LoggedCurrentSignalDimensions + 1 ,
rt_LoggedCurrentSignalDimensionsSize + 1 , rt_LoggedOutputDataTypeIds + 1 ,
rt_LoggedOutputComplexSignals + 1 , ( NULL ) , rt_LoggingPreprocessingFcnPtrs
+ 1 , { rt_LoggedOutputLabels_1 } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedOutputBlockNames_1 } , { ( NULL ) } , ( NULL ) ,
rt_RTWLogDataTypeConvert + 1 } , { 1 , rt_LoggedOutputWidths + 2 ,
rt_LoggedOutputNumDimensions + 2 , rt_LoggedOutputDimensions + 2 ,
rt_LoggedOutputIsVarDims + 2 , rt_LoggedCurrentSignalDimensions + 2 ,
rt_LoggedCurrentSignalDimensionsSize + 2 , rt_LoggedOutputDataTypeIds + 2 ,
rt_LoggedOutputComplexSignals + 2 , ( NULL ) , rt_LoggingPreprocessingFcnPtrs
+ 2 , { rt_LoggedOutputLabels_2 } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedOutputBlockNames_2 } , { ( NULL ) } , ( NULL ) ,
rt_RTWLogDataTypeConvert + 2 } , { 1 , rt_LoggedOutputWidths + 3 ,
rt_LoggedOutputNumDimensions + 3 , rt_LoggedOutputDimensions + 3 ,
rt_LoggedOutputIsVarDims + 3 , rt_LoggedCurrentSignalDimensions + 3 ,
rt_LoggedCurrentSignalDimensionsSize + 3 , rt_LoggedOutputDataTypeIds + 3 ,
rt_LoggedOutputComplexSignals + 3 , ( NULL ) , rt_LoggingPreprocessingFcnPtrs
+ 3 , { rt_LoggedOutputLabels_3 } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedOutputBlockNames_3 } , { ( NULL ) } , ( NULL ) ,
rt_RTWLogDataTypeConvert + 3 } , { 1 , rt_LoggedOutputWidths + 4 ,
rt_LoggedOutputNumDimensions + 4 , rt_LoggedOutputDimensions + 4 ,
rt_LoggedOutputIsVarDims + 4 , rt_LoggedCurrentSignalDimensions + 4 ,
rt_LoggedCurrentSignalDimensionsSize + 4 , rt_LoggedOutputDataTypeIds + 4 ,
rt_LoggedOutputComplexSignals + 4 , ( NULL ) , rt_LoggingPreprocessingFcnPtrs
+ 4 , { rt_LoggedOutputLabels_4 } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedOutputBlockNames_4 } , { ( NULL ) } , ( NULL ) ,
rt_RTWLogDataTypeConvert + 4 } , { 1 , rt_LoggedOutputWidths + 5 ,
rt_LoggedOutputNumDimensions + 5 , rt_LoggedOutputDimensions + 5 ,
rt_LoggedOutputIsVarDims + 5 , rt_LoggedCurrentSignalDimensions + 5 ,
rt_LoggedCurrentSignalDimensionsSize + 5 , rt_LoggedOutputDataTypeIds + 5 ,
rt_LoggedOutputComplexSignals + 5 , ( NULL ) , rt_LoggingPreprocessingFcnPtrs
+ 5 , { rt_LoggedOutputLabels_5 } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedOutputBlockNames_5 } , { ( NULL ) } , ( NULL ) ,
rt_RTWLogDataTypeConvert + 5 } } ; rtliSetLogYSignalInfo ( ssGetRTWLogInfo (
rtS ) , rt_LoggedOutputSignalInfo ) ; rt_LoggedCurrentSignalDimensions [ 0 ]
= & rt_LoggedOutputWidths [ 0 ] ; rt_LoggedCurrentSignalDimensions [ 1 ] = &
rt_LoggedOutputWidths [ 1 ] ; rt_LoggedCurrentSignalDimensions [ 2 ] = &
rt_LoggedOutputWidths [ 2 ] ; rt_LoggedCurrentSignalDimensions [ 3 ] = &
rt_LoggedOutputWidths [ 3 ] ; rt_LoggedCurrentSignalDimensions [ 4 ] = &
rt_LoggedOutputWidths [ 4 ] ; rt_LoggedCurrentSignalDimensions [ 5 ] = &
rt_LoggedOutputWidths [ 5 ] ; } rtliSetLogY ( ssGetRTWLogInfo ( rtS ) ,
 "tmp_raccel_yout1,tmp_raccel_yout2,tmp_raccel_yout3,tmp_raccel_yout4,tmp_raccel_yout5,tmp_raccel_yout6"
) ; } { static struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , &
statesInfo2 ) ; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static struct _ssSFcnModelMethods3 mdlMethods3
; static struct _ssSFcnModelMethods2 mdlMethods2 ; static boolean_T
contStatesDisabled [ 62 ] ; static real_T absTol [ 62 ] = { 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 } ; static uint8_T absTolControl [ 62 ] = {
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U }
; static real_T contStateJacPerturbBoundMinVec [ 62 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 62 ] ; static uint8_T zcAttributes [ 53 ] =
{ ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P
| ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z
| ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P
| ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_ALL
) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P
) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P
| ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N
| ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z
| ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) } ; static ssNonContDerivSigInfo
nonContDerivSigInfo [ 12 ] = { { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
mlg3v2vp41 ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
m2b0x0ugtl ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
bvsjetcrto ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
dvaiasoovm ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
crn43in4pr ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
pk4qwm0mut ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
ek20cny3ez ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
orrj54i1aj ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
gvzfoeok20 ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
pzzwd3lnfe ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
beactzcnhg ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
cmq4ia5e5i ) , ( NULL ) } } ; { int i ; for ( i = 0 ; i < 62 ; ++ i ) {
contStateJacPerturbBoundMinVec [ i ] = 0 ; contStateJacPerturbBoundMaxVec [ i
] = rtGetInf ( ) ; } } ssSetSolverRelTol ( rtS , 0.001 ) ; ssSetStepSize (
rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , -
1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 0.05 )
; ssSetSolverMaxOrder ( rtS , - 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 1 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 12 ) ; ssSetNonContDerivSigInfos ( rtS ,
nonContDerivSigInfo ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ;
ssSetSolverName ( rtS , "ode23t" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 0 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ;
_ssSetSolverUpdateJacobianAtReset ( rtS , true ) ; ssSetAbsTolVector ( rtS ,
absTol ) ; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 1 ) ; (
void ) memset ( ( void * ) & mdlMethods2 , 0 , sizeof ( mdlMethods2 ) ) ;
ssSetModelMethods2 ( rtS , & mdlMethods2 ) ; ( void ) memset ( ( void * ) &
mdlMethods3 , 0 , sizeof ( mdlMethods3 ) ) ; ssSetModelMethods3 ( rtS , &
mdlMethods3 ) ; ssSetModelProjection ( rtS , MdlProjection ) ;
ssSetMassMatrixType ( rtS , ( ssMatrixType ) 1 ) ; ssSetMassMatrixNzMax ( rtS
, 48 ) ; ssSetModelMassMatrix ( rtS , MdlMassMatrix ) ;
ssSetModelForcingFunction ( rtS , MdlForcingFunction ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 1 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 48 ) ; ssSetModelOutputs ( rtS ,
MdlOutputs ) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 53 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ;
ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 53 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; { int_T
* ir = rtMassMatrix . ir ; int_T * jc = rtMassMatrix . jc ; real_T * pr =
rtMassMatrix . pr ; ssSetMassMatrixIr ( rtS , ir ) ; ssSetMassMatrixJc ( rtS
, jc ) ; ssSetMassMatrixPr ( rtS , pr ) ; ( void ) memset ( ( void * ) ir , 0
, 48 * sizeof ( int_T ) ) ; ( void ) memset ( ( void * ) jc , 0 , ( 62 + 1 )
* sizeof ( int_T ) ) ; ( void ) memset ( ( void * ) pr , 0 , 48 * sizeof (
real_T ) ) ; } } ssSetChecksumVal ( rtS , 0 , 2698101852U ) ;
ssSetChecksumVal ( rtS , 1 , 2922316287U ) ; ssSetChecksumVal ( rtS , 2 ,
2587534183U ) ; ssSetChecksumVal ( rtS , 3 , 710481660U ) ; { static const
sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo
rt_ExtModeInfo ; static const sysRanDType * systemRan [ 1 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 3 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID3 ( tid ) ; }
