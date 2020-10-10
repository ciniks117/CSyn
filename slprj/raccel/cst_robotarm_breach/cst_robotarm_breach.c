#include "rt_logging_mmi.h"
#include "cst_robotarm_breach_capi.h"
#include <math.h>
#include "cst_robotarm_breach.h"
#include "cst_robotarm_breach_private.h"
#include "cst_robotarm_breach_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; extern boolean_T
gblExtModeStartPktReceived ; void raccelForceExtModeShutdown ( ) { if ( !
gblExtModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , & stopRequested ) ; }
rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 3 ; const char_T
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
"slprj//raccel//cst_robotarm_breach//cst_robotarm_breach_Jpattern.mat" ;
const int_T gblNumRootInportBlks = 6 ; const int_T gblNumModelInputs = 6 ;
extern rtInportTUtable * gblInportTUtables ; extern const char *
gblInportFileName ; extern void * gblAperiodicPartitionHitTimes ; const int_T
gblInportDataTypeIdx [ ] = { 0 , 0 , 0 , 0 , 0 , 0 } ; const int_T
gblInportDims [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; const
int_T gblInportComplex [ ] = { 0 , 0 , 0 , 0 , 0 , 0 } ; const int_T
gblInportInterpoFlag [ ] = { 1 , 1 , 1 , 1 , 1 , 1 } ; const int_T
gblInportContinuous [ ] = { 1 , 1 , 1 , 1 , 1 , 1 } ; int_T enableFcnCallFlag
[ ] = { 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
const char * inportFileName , int * matFileFormat ) { return
rt_RapidReadInportsMatFile ( inportFileName , matFileFormat , 1 ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
B rtB ; X rtX ; MassMatrix rtMassMatrix ; DW rtDW ; ExtU rtU ; ExtY rtY ;
static SimStruct model_S ; SimStruct * const rtS = & model_S ; void
MdlInitialize ( void ) { boolean_T tmp ; int_T tmp_p ; char * tmp_e ; tmp =
false ; if ( tmp ) { tmp_p = strcmp ( "ode23t" , ssGetSolverName ( rtS ) ) ;
if ( tmp_p != 0 ) { tmp_e = solver_mismatch_message ( "ode23t" ,
ssGetSolverName ( rtS ) ) ; ssSetErrorStatus ( rtS , tmp_e ) ; } } rtX .
hzgkjmkam3 = rtP . Integrator_IC ; rtDW . c1yhchtyrr = rtP .
DiscreteTransferFcn_InitialStates ; rtDW . ez5xo4m5re = ( rtInf ) ; rtDW .
btzzvjv32s = ( rtInf ) ; rtX . hgl1hrlhol = rtP . Integrator1_IC ; rtDW .
b5meobzewc = rtP . DiscreteTransferFcn1_InitialStates ; rtDW . etc2elb4q0 = (
rtInf ) ; rtDW . ka3q1qehwh = ( rtInf ) ; rtX . h5wdubnkbp = rtP .
Integrator2_IC ; rtDW . phjhcjadmq = rtP . DiscreteTransferFcn2_InitialStates
; rtDW . njuj213ft1 = ( rtInf ) ; rtDW . lzapf4uzyf = ( rtInf ) ; rtX .
pdkkwspnr1 = rtP . Integrator3_IC ; rtDW . ea2ghjrony = rtP .
DiscreteTransferFcn3_InitialStates ; rtDW . lwhxhj0cgm = ( rtInf ) ; rtDW .
jz4witzby0 = ( rtInf ) ; rtX . l1zc10gh5a = rtP . Integrator4_IC ; rtDW .
o3hjuvp5p4 = rtP . DiscreteTransferFcn4_InitialStates ; rtDW . lhvgthtwgl = (
rtInf ) ; rtDW . hqk0upav5k = ( rtInf ) ; rtX . kmsnf4jarc = rtP .
Integrator5_IC ; rtDW . mfo0m5mdmb = rtP . DiscreteTransferFcn5_InitialStates
; rtDW . adymbo4t3h = ( rtInf ) ; rtDW . axlsmtzflm = ( rtInf ) ; tmp = false
; if ( tmp ) { tmp_p = strcmp ( "ode23t" , ssGetSolverName ( rtS ) ) ; if (
tmp_p != 0 ) { tmp_e = solver_mismatch_message ( "ode23t" , ssGetSolverName (
rtS ) ) ; ssSetErrorStatus ( rtS , tmp_e ) ; } } tmp = false ; if ( tmp ) {
tmp_p = strcmp ( "ode23t" , ssGetSolverName ( rtS ) ) ; if ( tmp_p != 0 ) {
tmp_e = solver_mismatch_message ( "ode23t" , ssGetSolverName ( rtS ) ) ;
ssSetErrorStatus ( rtS , tmp_e ) ; } } tmp = false ; if ( tmp ) { tmp_p =
strcmp ( "ode23t" , ssGetSolverName ( rtS ) ) ; if ( tmp_p != 0 ) { tmp_e =
solver_mismatch_message ( "ode23t" , ssGetSolverName ( rtS ) ) ;
ssSetErrorStatus ( rtS , tmp_e ) ; } } tmp = false ; if ( tmp ) { tmp_p =
strcmp ( "ode23t" , ssGetSolverName ( rtS ) ) ; if ( tmp_p != 0 ) { tmp_e =
solver_mismatch_message ( "ode23t" , ssGetSolverName ( rtS ) ) ;
ssSetErrorStatus ( rtS , tmp_e ) ; } } tmp = false ; if ( tmp ) { tmp_p =
strcmp ( "ode23t" , ssGetSolverName ( rtS ) ) ; if ( tmp_p != 0 ) { tmp_e =
solver_mismatch_message ( "ode23t" , ssGetSolverName ( rtS ) ) ;
ssSetErrorStatus ( rtS , tmp_e ) ; } } tmp = false ; if ( tmp ) { tmp_p =
strcmp ( "ode23t" , ssGetSolverName ( rtS ) ) ; if ( tmp_p != 0 ) { tmp_e =
solver_mismatch_message ( "ode23t" , ssGetSolverName ( rtS ) ) ;
ssSetErrorStatus ( rtS , tmp_e ) ; } } { static int_T modelMassMatrixIr [ 48
] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 ,
16 , 17 , 18 , 19 , 20 , 21 , 22 , 23 , 24 , 25 , 26 , 27 , 28 , 29 , 30 , 31
, 32 , 33 , 34 , 35 , 38 , 40 , 39 , 41 , 46 , 47 , 50 , 51 , 54 , 55 , 58 ,
59 } ; static int_T modelMassMatrixJc [ 63 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 ,
7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 ,
23 , 24 , 25 , 26 , 27 , 28 , 29 , 30 , 31 , 32 , 33 , 34 , 35 , 36 , 36 , 36
, 37 , 38 , 39 , 40 , 40 , 40 , 40 , 40 , 41 , 42 , 42 , 42 , 43 , 44 , 44 ,
44 , 45 , 46 , 46 , 46 , 47 , 48 , 48 , 48 } ; static real_T
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
externalInputIsInDatasetFormat ) { rtwISigstreamManagerSetDestinationBase (
pISigstreamManager , 0 , & rtU . czzusp55mg ) ;
rtwISigstreamManagerSetDestinationBase ( pISigstreamManager , 1 , & rtU .
oaqp25vha4 ) ; rtwISigstreamManagerSetDestinationBase ( pISigstreamManager ,
2 , & rtU . f01of5bdla ) ; rtwISigstreamManagerSetDestinationBase (
pISigstreamManager , 3 , & rtU . lnvmafogi2 ) ;
rtwISigstreamManagerSetDestinationBase ( pISigstreamManager , 4 , & rtU .
b3tikeyk0u ) ; rtwISigstreamManagerSetDestinationBase ( pISigstreamManager ,
5 , & rtU . jhowxmdxl0 ) ; } } { void * slioCatalogue = rt_slioCatalogue ( )
? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "d1" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "d1" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm_breach/D1"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "d1" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. apdjv21fm3 . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"b2b233a2-2f6e-4df4-8794-5286ee35548d" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "V" ) ; if ( rtDW . apdjv21fm3 . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . apdjv21fm3 . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . apdjv21fm3 .
AQHandles , ssGetTaskTime ( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . apdjv21fm3 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . apdjv21fm3 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
apdjv21fm3 . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "d1" , "linear" , 0 , ( unsigned int * )
sigDimsArray , 1 , "double" , "V" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "d1" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/D1" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/D1" , 1 , "d1" ) ; } if
( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . apdjv21fm3 .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "d2" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "d2" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm_breach/D2"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "d2" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. mh2lzbnvyc . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"4cf5e7f3-b85e-4fae-a358-dae915354646" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "V" ) ; if ( rtDW . mh2lzbnvyc . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . mh2lzbnvyc . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . mh2lzbnvyc .
AQHandles , ssGetTaskTime ( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . mh2lzbnvyc . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . mh2lzbnvyc . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
mh2lzbnvyc . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "d2" , "linear" , 0 , ( unsigned int * )
sigDimsArray , 1 , "double" , "V" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "d2" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/D2" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/D2" , 1 , "d2" ) ; } if
( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . mh2lzbnvyc .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "d3" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "d3" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm_breach/D3"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "d3" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. kjrs0t1nm4 . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"e4744dd6-19e3-44d7-b776-ba63fd92df87" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "V" ) ; if ( rtDW . kjrs0t1nm4 . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . kjrs0t1nm4 . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . kjrs0t1nm4 .
AQHandles , ssGetTaskTime ( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . kjrs0t1nm4 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . kjrs0t1nm4 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
kjrs0t1nm4 . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "d3" , "linear" , 0 , ( unsigned int * )
sigDimsArray , 1 , "double" , "V" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "d3" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/D3" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/D3" , 1 , "d3" ) ; } if
( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . kjrs0t1nm4 .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "d4" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "d4" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm_breach/D4"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "d4" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. dautlnn30u . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"37b0f763-eddb-4659-8b30-df7807f549e8" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "V" ) ; if ( rtDW . dautlnn30u . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . dautlnn30u . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . dautlnn30u .
AQHandles , ssGetTaskTime ( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . dautlnn30u . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . dautlnn30u . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
dautlnn30u . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "d4" , "linear" , 0 , ( unsigned int * )
sigDimsArray , 1 , "double" , "V" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "d4" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/D4" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/D4" , 1 , "d4" ) ; } if
( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . dautlnn30u .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "d5" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "d5" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm_breach/D5"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "d5" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. kvbjdddl4n . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"18829da6-0626-4f74-b702-7664c9cf0613" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "V" ) ; if ( rtDW . kvbjdddl4n . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . kvbjdddl4n . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . kvbjdddl4n .
AQHandles , ssGetTaskTime ( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . kvbjdddl4n . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . kvbjdddl4n . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
kvbjdddl4n . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "d5" , "linear" , 0 , ( unsigned int * )
sigDimsArray , 1 , "double" , "V" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "d5" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/D5" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/D5" , 1 , "d5" ) ; } if
( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . kvbjdddl4n .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "d6" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "d6" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm_breach/D6"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "d6" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. ava0ojyjuv . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"3895a829-3eff-42fa-88f3-c9648792284b" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "V" ) ; if ( rtDW . ava0ojyjuv . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . ava0ojyjuv . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . ava0ojyjuv .
AQHandles , ssGetTaskTime ( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . ava0ojyjuv . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . ava0ojyjuv . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
ava0ojyjuv . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "d6" , "linear" , 0 , ( unsigned int * )
sigDimsArray , 1 , "double" , "V" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "d6" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/D6" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/D6" , 1 , "d6" ) ; } if
( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . ava0ojyjuv .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kd1" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kd1" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Gd1" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "Kd1" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . ps3yjeqnel . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "4e045aa5-0ec1-4dcd-a0dd-396d29ab7bcd" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. ps3yjeqnel . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . ps3yjeqnel
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . ps3yjeqnel . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . ps3yjeqnel . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . ps3yjeqnel . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . ps3yjeqnel . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "Kd1" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"Kd1" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/Gd1" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/Gd1" , 1 , "Kd1" ) ; }
if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . ps3yjeqnel .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kd2" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kd2" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Gd2" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "Kd2" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . gl0wpxzu2q . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "ff77abe4-ebf4-4678-abf2-3bd29b588e08" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. gl0wpxzu2q . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . gl0wpxzu2q
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . gl0wpxzu2q . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . gl0wpxzu2q . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . gl0wpxzu2q . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . gl0wpxzu2q . SlioLTF = ( NULL ) ; {
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
"cst_robotarm_breach/Gd2" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/Gd2" , 1 , "Kd2" ) ; }
if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . gl0wpxzu2q .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kd3" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kd3" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Gd3" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "Kd3" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . oicd0ngvav . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "0faafb9b-63c7-4c00-a2b6-dbdd65a0204f" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. oicd0ngvav . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . oicd0ngvav
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . oicd0ngvav . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . oicd0ngvav . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . oicd0ngvav . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . oicd0ngvav . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
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
"cst_robotarm_breach/Gd3" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/Gd3" , 1 , "Kd3" ) ; }
if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . oicd0ngvav .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kd4" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kd4" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Gd4" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "Kd4" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . ptm21fclna . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "ff3c23dc-1966-4eae-b379-6a029ffc7965" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. ptm21fclna . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . ptm21fclna
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . ptm21fclna . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . ptm21fclna . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . ptm21fclna . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . ptm21fclna . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "Kd4" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"Kd4" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/Gd4" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/Gd4" , 1 , "Kd4" ) ; }
if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . ptm21fclna .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kd5" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kd5" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Gd5" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "Kd5" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . oqhwzcjbbx . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "1770f5e5-d2fd-459f-a53c-1241e52fe5b2" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. oqhwzcjbbx . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . oqhwzcjbbx
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . oqhwzcjbbx . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . oqhwzcjbbx . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . oqhwzcjbbx . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . oqhwzcjbbx . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "Kd5" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"Kd5" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/Gd5" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/Gd5" , 1 , "Kd5" ) ; }
if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . oqhwzcjbbx .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kd6" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kd6" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Gd6" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "Kd6" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . mkhdp3gdkd . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "558dd649-c797-401d-b446-feec13455145" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. mkhdp3gdkd . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . mkhdp3gdkd
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . mkhdp3gdkd . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . mkhdp3gdkd . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . mkhdp3gdkd . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . mkhdp3gdkd . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
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
"cst_robotarm_breach/Gd6" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/Gd6" , 1 , "Kd6" ) ; }
if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . mkhdp3gdkd .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Ki1" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Ki1" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Gi1" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "Ki1" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . e2gcoq4oqe . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "ba4a86d0-4543-4c47-9fab-70c1992c0b61" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. e2gcoq4oqe . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . e2gcoq4oqe
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . e2gcoq4oqe . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . e2gcoq4oqe . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . e2gcoq4oqe . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . e2gcoq4oqe . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "Ki1" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"Ki1" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/Gi1" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/Gi1" , 1 , "Ki1" ) ; }
if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . e2gcoq4oqe .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Ki2" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Ki2" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Gi2" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "Ki2" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . h22loax0ke . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "e604524e-0eda-4672-b611-b62264a11515" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. h22loax0ke . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . h22loax0ke
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . h22loax0ke . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . h22loax0ke . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . h22loax0ke . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . h22loax0ke . SlioLTF = ( NULL ) ; {
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
"cst_robotarm_breach/Gi2" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/Gi2" , 1 , "Ki2" ) ; }
if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . h22loax0ke .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Ki3" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Ki3" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Gi3" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "Ki3" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . as0djmc41t . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "25478c73-59b8-402f-bb04-48855ae22777" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. as0djmc41t . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . as0djmc41t
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . as0djmc41t . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . as0djmc41t . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . as0djmc41t . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . as0djmc41t . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
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
"cst_robotarm_breach/Gi3" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/Gi3" , 1 , "Ki3" ) ; }
if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . as0djmc41t .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Ki4" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Ki4" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Gi4" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "Ki4" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . ejymxznzxh . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "d6a2b6a3-1251-4465-93d8-cbdd11de7836" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. ejymxznzxh . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . ejymxznzxh
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . ejymxznzxh . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . ejymxznzxh . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . ejymxznzxh . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . ejymxznzxh . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "Ki4" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"Ki4" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/Gi4" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/Gi4" , 1 , "Ki4" ) ; }
if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . ejymxznzxh .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Ki5" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Ki5" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Gi5" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "Ki5" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . o1kxnuxpyj . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "64da35ca-f905-4990-9eb9-0ed986518dfd" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. o1kxnuxpyj . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . o1kxnuxpyj
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . o1kxnuxpyj . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . o1kxnuxpyj . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . o1kxnuxpyj . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . o1kxnuxpyj . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "Ki5" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"Ki5" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/Gi5" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/Gi5" , 1 , "Ki5" ) ; }
if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . o1kxnuxpyj .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Ki6" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Ki6" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Gi6" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "Ki6" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . bxxgxkrr2c . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "9e13457f-84af-4769-8446-5096ee8afecc" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. bxxgxkrr2c . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . bxxgxkrr2c
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . bxxgxkrr2c . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . bxxgxkrr2c . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . bxxgxkrr2c . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . bxxgxkrr2c . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
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
"cst_robotarm_breach/Gi6" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/Gi6" , 1 , "Ki6" ) ; }
if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . bxxgxkrr2c .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kp1" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kp1" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Gp1" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "Kp1" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . kfd3qrvgfd . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "583fdf82-f968-4fd6-9390-fff6a85acf0f" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. kfd3qrvgfd . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . kfd3qrvgfd
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . kfd3qrvgfd . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . kfd3qrvgfd . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . kfd3qrvgfd . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . kfd3qrvgfd . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "Kp1" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"Kp1" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/Gp1" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/Gp1" , 1 , "Kp1" ) ; }
if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . kfd3qrvgfd .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kp2" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kp2" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Gp2" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "Kp2" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . igwari5mqz . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "ac92c3b8-955c-4f0a-b789-225d1029dbc3" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. igwari5mqz . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . igwari5mqz
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . igwari5mqz . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . igwari5mqz . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . igwari5mqz . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . igwari5mqz . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "Kp2" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"Kp2" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/Gp2" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/Gp2" , 1 , "Kp2" ) ; }
if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . igwari5mqz .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kp3" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kp3" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Gp3" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "Kp3" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . ewqrtgdvx2 . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "9b060cf9-4628-4a5f-9025-2109c5b2c187" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. ewqrtgdvx2 . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . ewqrtgdvx2
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . ewqrtgdvx2 . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . ewqrtgdvx2 . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . ewqrtgdvx2 . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . ewqrtgdvx2 . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "Kp3" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"Kp3" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/Gp3" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/Gp3" , 1 , "Kp3" ) ; }
if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . ewqrtgdvx2 .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kp4" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kp4" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Gp4" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "Kp4" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . dsgwphpbza . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "673401b1-8adf-4689-ab7a-77575e4318de" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. dsgwphpbza . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . dsgwphpbza
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . dsgwphpbza . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . dsgwphpbza . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . dsgwphpbza . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . dsgwphpbza . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "Kp4" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"Kp4" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/Gp4" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/Gp4" , 1 , "Kp4" ) ; }
if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . dsgwphpbza .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kp5" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kp5" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Gp5" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "Kp5" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . aw4efzdd4c . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "e01328ea-cebd-495d-9a9d-66cdd78b9045" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. aw4efzdd4c . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . aw4efzdd4c
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . aw4efzdd4c . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . aw4efzdd4c . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . aw4efzdd4c . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . aw4efzdd4c . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "Kp5" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"Kp5" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/Gp5" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/Gp5" , 1 , "Kp5" ) ; }
if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . aw4efzdd4c .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kp6" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kp6" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Gp6" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "Kp6" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . be53dny0c5 . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "050cef8b-36a9-4999-9dd6-3bfc95877a98" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. be53dny0c5 . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . be53dny0c5
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . be53dny0c5 . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . be53dny0c5 . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . be53dny0c5 . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . be53dny0c5 . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "Kp6" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"Kp6" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/Gp6" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/Gp6" , 1 , "Kp6" ) ; }
if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . be53dny0c5 .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "r1" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "r1" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm_breach/R1"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "r1" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. kq3yodl2bt . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"7a2cb0c5-c7fb-4ee0-8b09-0f3911275bb4" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "V" ) ; if ( rtDW . kq3yodl2bt . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . kq3yodl2bt . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . kq3yodl2bt .
AQHandles , ssGetTaskTime ( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . kq3yodl2bt . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . kq3yodl2bt . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
kq3yodl2bt . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "r1" , "linear" , 0 , ( unsigned int * )
sigDimsArray , 1 , "double" , "V" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "r1" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/R1" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/R1" , 1 , "r1" ) ; } if
( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . kq3yodl2bt .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "r2" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "r2" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm_breach/R2"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "r2" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. ebjpqr4c4g . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"7e8c1a9e-50a4-4491-b45c-9e1a9bd545af" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "V" ) ; if ( rtDW . ebjpqr4c4g . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . ebjpqr4c4g . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . ebjpqr4c4g .
AQHandles , ssGetTaskTime ( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . ebjpqr4c4g . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . ebjpqr4c4g . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
ebjpqr4c4g . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "r2" , "linear" , 0 , ( unsigned int * )
sigDimsArray , 1 , "double" , "V" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "r2" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/R2" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/R2" , 1 , "r2" ) ; } if
( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . ebjpqr4c4g .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "r3" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "r3" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm_breach/R3"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "r3" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. ptu5jdgl35 . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"52d5d665-3d0b-410b-88f0-f4d2c4830fda" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "V" ) ; if ( rtDW . ptu5jdgl35 . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . ptu5jdgl35 . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . ptu5jdgl35 .
AQHandles , ssGetTaskTime ( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . ptu5jdgl35 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . ptu5jdgl35 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
ptu5jdgl35 . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "r3" , "linear" , 0 , ( unsigned int * )
sigDimsArray , 1 , "double" , "V" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "r3" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/R3" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/R3" , 1 , "r3" ) ; } if
( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . ptu5jdgl35 .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "r4" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "r4" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm_breach/R4"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "r4" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. ilijwxnun0 . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"8fc4a63c-cfe5-4d23-b8b1-209934e89fc1" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "V" ) ; if ( rtDW . ilijwxnun0 . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . ilijwxnun0 . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . ilijwxnun0 .
AQHandles , ssGetTaskTime ( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . ilijwxnun0 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . ilijwxnun0 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
ilijwxnun0 . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "r4" , "linear" , 0 , ( unsigned int * )
sigDimsArray , 1 , "double" , "V" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "r4" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/R4" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/R4" , 1 , "r4" ) ; } if
( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . ilijwxnun0 .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "r5" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "r5" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm_breach/R5"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "r5" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. odqw4yty3p . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"31a0e5fc-f32b-443d-99b2-787af71d54a3" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "V" ) ; if ( rtDW . odqw4yty3p . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . odqw4yty3p . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . odqw4yty3p .
AQHandles , ssGetTaskTime ( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . odqw4yty3p . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . odqw4yty3p . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
odqw4yty3p . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "r5" , "linear" , 0 , ( unsigned int * )
sigDimsArray , 1 , "double" , "V" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "r5" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/R5" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/R5" , 1 , "r5" ) ; } if
( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . odqw4yty3p .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "r6" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "r6" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm_breach/R6"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "r6" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. kzjcgmt1r3 . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"ccdc7fdf-ddc2-4852-8472-156fb035c741" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "V" ) ; if ( rtDW . kzjcgmt1r3 . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . kzjcgmt1r3 . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . kzjcgmt1r3 .
AQHandles , ssGetTaskTime ( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . kzjcgmt1r3 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . kzjcgmt1r3 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
kzjcgmt1r3 . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "r6" , "linear" , 0 , ( unsigned int * )
sigDimsArray , 1 , "double" , "V" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "r6" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/R6" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/R6" , 1 , "r6" ) ; } if
( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . kzjcgmt1r3 .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "tAngle" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "tAngle" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Setpoint Angles1" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "tAngle" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . f2efmur0hp . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "87a2c110-0161-401c-a913-813b1bde1d57" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "rad" ) ; if (
rtDW . f2efmur0hp . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
f2efmur0hp . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . f2efmur0hp . AQHandles , ssGetTaskTime ( rtS , 0
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . f2efmur0hp . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . f2efmur0hp . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . f2efmur0hp . SlioLTF = ( NULL ) ; {
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
"cst_robotarm_breach/Setpoint Angles1" , 1 , 0 , slioCatalogue , ( NULL ) , 0
, ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal (
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/Setpoint Angles1" , 1 , "tAngle" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . f2efmur0hp . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "bAngle" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "bAngle" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Setpoint Angles1" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "bAngle" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 1 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . mskhnw4qrr . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "ab0b523e-f1df-47f8-93f9-51284f4c4ae6" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "rad" ) ; if (
rtDW . mskhnw4qrr . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
mskhnw4qrr . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . mskhnw4qrr . AQHandles , ssGetTaskTime ( rtS , 0
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . mskhnw4qrr . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . mskhnw4qrr . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . mskhnw4qrr . SlioLTF = ( NULL ) ; {
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
"cst_robotarm_breach/Setpoint Angles1" , 2 , 0 , slioCatalogue , ( NULL ) , 0
, ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal (
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/Setpoint Angles1" , 2 , "bAngle" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . mskhnw4qrr . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "fAngle" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "fAngle" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Setpoint Angles1" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "fAngle" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 2 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . d3ef2qdubj . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "fbcfc129-b49f-4702-abb1-31ae9d8e7003" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "rad" ) ; if (
rtDW . d3ef2qdubj . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
d3ef2qdubj . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . d3ef2qdubj . AQHandles , ssGetTaskTime ( rtS , 0
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . d3ef2qdubj . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . d3ef2qdubj . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . d3ef2qdubj . SlioLTF = ( NULL ) ; {
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
"cst_robotarm_breach/Setpoint Angles1" , 3 , 0 , slioCatalogue , ( NULL ) , 0
, ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal (
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/Setpoint Angles1" , 3 , "fAngle" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . d3ef2qdubj . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "wAngle" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "wAngle" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Setpoint Angles1" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "wAngle" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 3 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . dg12hpmswq . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "17814bd1-979e-4dcf-943b-6d3abe17fcd6" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "rad" ) ; if (
rtDW . dg12hpmswq . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
dg12hpmswq . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . dg12hpmswq . AQHandles , ssGetTaskTime ( rtS , 0
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . dg12hpmswq . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . dg12hpmswq . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . dg12hpmswq . SlioLTF = ( NULL ) ; {
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
"cst_robotarm_breach/Setpoint Angles1" , 4 , 0 , slioCatalogue , ( NULL ) , 0
, ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal (
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/Setpoint Angles1" , 4 , "wAngle" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . dg12hpmswq . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "hAngle" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "hAngle" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Setpoint Angles1" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "hAngle" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 4 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . kx25qhu3r4 . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "3cd55335-1edc-4312-b3c2-6e77b2f90d43" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "rad" ) ; if (
rtDW . kx25qhu3r4 . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
kx25qhu3r4 . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . kx25qhu3r4 . AQHandles , ssGetTaskTime ( rtS , 0
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . kx25qhu3r4 . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . kx25qhu3r4 . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . kx25qhu3r4 . SlioLTF = ( NULL ) ; {
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
"cst_robotarm_breach/Setpoint Angles1" , 5 , 0 , slioCatalogue , ( NULL ) , 0
, ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal (
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/Setpoint Angles1" , 5 , "hAngle" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . kx25qhu3r4 . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "gAngle" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "gAngle" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Setpoint Angles1" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "gAngle" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 5 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . monl4eukr3 . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "f1d62c51-6549-413c-bfd9-cb779a8b867b" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "rad" ) ; if (
rtDW . monl4eukr3 . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
monl4eukr3 . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . monl4eukr3 . AQHandles , ssGetTaskTime ( rtS , 0
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . monl4eukr3 . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . monl4eukr3 . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . monl4eukr3 . SlioLTF = ( NULL ) ; {
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
"cst_robotarm_breach/Setpoint Angles1" , 6 , 0 , slioCatalogue , ( NULL ) , 0
, ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal (
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/Setpoint Angles1" , 6 , "gAngle" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . monl4eukr3 . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "sp1" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "sp1" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Sp1" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "sp1" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . ngtywitjou . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "0a095309-29ff-4b2b-af82-36a0849451e8" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. ngtywitjou . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . ngtywitjou
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . ngtywitjou . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . ngtywitjou . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . ngtywitjou . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . ngtywitjou . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "sp1" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"sp1" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/Sp1" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/Sp1" , 1 , "sp1" ) ; }
if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . ngtywitjou .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "sp2" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "sp2" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Sp2" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "sp2" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . l4k2ljdewv . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "583889ca-f69b-46f7-aa82-e36fc6893655" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. l4k2ljdewv . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . l4k2ljdewv
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . l4k2ljdewv . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . l4k2ljdewv . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . l4k2ljdewv . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . l4k2ljdewv . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "sp2" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"sp2" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/Sp2" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/Sp2" , 1 , "sp2" ) ; }
if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . l4k2ljdewv .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "sp3" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "sp3" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Sp3" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "sp3" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . blegl3r340 . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "511b28f8-d8dd-44ff-8e43-840e52fe53f4" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. blegl3r340 . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . blegl3r340
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . blegl3r340 . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . blegl3r340 . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . blegl3r340 . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . blegl3r340 . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "sp3" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"sp3" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/Sp3" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/Sp3" , 1 , "sp3" ) ; }
if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . blegl3r340 .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "sp4" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "sp4" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Sp4" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "sp4" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . ppjxynpq1c . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "9bd6803e-3cfc-41a5-98d1-f603d31f138a" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. ppjxynpq1c . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . ppjxynpq1c
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . ppjxynpq1c . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . ppjxynpq1c . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . ppjxynpq1c . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . ppjxynpq1c . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "sp4" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"sp4" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/Sp4" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/Sp4" , 1 , "sp4" ) ; }
if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . ppjxynpq1c .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "sp5" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "sp5" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Sp5" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "sp5" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . erbnwcwrj1 . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "8ea75d5f-0b90-4fb6-9246-cbc3f0551d55" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. erbnwcwrj1 . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . erbnwcwrj1
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . erbnwcwrj1 . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . erbnwcwrj1 . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . erbnwcwrj1 . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . erbnwcwrj1 . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "sp5" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"sp5" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/Sp5" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/Sp5" , 1 , "sp5" ) ; }
if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . erbnwcwrj1 .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "sp6" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "sp6" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/Sp6" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "sp6" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . kx4roesdqx . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "5e0cea5e-303f-4c18-b733-1e6305f8dd85" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. kx4roesdqx . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . kx4roesdqx
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . kx4roesdqx . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . kx4roesdqx . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . kx4roesdqx . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . kx4roesdqx . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "sp6" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"sp6" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/Sp6" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) ,
0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo
. mmi . InstanceMap . fullPath , "cst_robotarm_breach/Sp6" , 1 , "sp6" ) ; }
if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . kx4roesdqx .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "bREF" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "bREF" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/bREF" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "bREF" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . ejuuwrge5c . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "865fe957-1e67-4533-bf98-7907951ba58f" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. ejuuwrge5c . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . ejuuwrge5c
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . ejuuwrge5c . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . ejuuwrge5c . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . ejuuwrge5c . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . ejuuwrge5c . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "bREF" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"bREF" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/bREF" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL )
, 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal (
rt_dataMapInfo . mmi . InstanceMap . fullPath , "cst_robotarm_breach/bREF" ,
1 , "bREF" ) ; } if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue )
) { if ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . ejuuwrge5c .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "fREF" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "fREF" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/fREF" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "fREF" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . mtedhvdhqd . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "769dc5e4-47c7-41c9-b1dc-13373c2acd84" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. mtedhvdhqd . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . mtedhvdhqd
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . mtedhvdhqd . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . mtedhvdhqd . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . mtedhvdhqd . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . mtedhvdhqd . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "fREF" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"fREF" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/fREF" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL )
, 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal (
rt_dataMapInfo . mmi . InstanceMap . fullPath , "cst_robotarm_breach/fREF" ,
1 , "fREF" ) ; } if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue )
) { if ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . mtedhvdhqd .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "gREF" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "gREF" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/gREF" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "gREF" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . jg2vujfrzo . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "e07de332-d973-4000-9c42-5b8afb4daffd" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. jg2vujfrzo . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . jg2vujfrzo
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . jg2vujfrzo . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . jg2vujfrzo . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . jg2vujfrzo . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . jg2vujfrzo . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "gREF" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"gREF" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/gREF" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL )
, 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal (
rt_dataMapInfo . mmi . InstanceMap . fullPath , "cst_robotarm_breach/gREF" ,
1 , "gREF" ) ; } if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue )
) { if ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . jg2vujfrzo .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "hREF" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "hREF" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/hREF" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "hREF" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . g5kyzenj0k . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "f6ed7245-f59d-473f-a593-93f62bcdddba" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. g5kyzenj0k . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . g5kyzenj0k
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . g5kyzenj0k . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . g5kyzenj0k . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . g5kyzenj0k . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . g5kyzenj0k . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "hREF" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"hREF" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/hREF" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL )
, 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal (
rt_dataMapInfo . mmi . InstanceMap . fullPath , "cst_robotarm_breach/hREF" ,
1 , "hREF" ) ; } if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue )
) { if ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . g5kyzenj0k .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "tREF" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "tREF" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/tREF" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "tREF" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . larmidhtrj . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "51db102c-63c7-4659-b8a3-387a825d2318" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. larmidhtrj . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . larmidhtrj
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . larmidhtrj . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . larmidhtrj . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . larmidhtrj . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . larmidhtrj . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "tREF" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"tREF" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/tREF" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL )
, 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal (
rt_dataMapInfo . mmi . InstanceMap . fullPath , "cst_robotarm_breach/tREF" ,
1 , "tREF" ) ; } if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue )
) { if ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . larmidhtrj .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "wREF" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "wREF" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm_breach/wREF" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "wREF" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . co45xeckac . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "c2701e08-99db-4595-a3b2-2af9ee1319d4" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. co45xeckac . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . co45xeckac
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . co45xeckac . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . co45xeckac . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . co45xeckac . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . co45xeckac . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "wREF" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"wREF" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm_breach/wREF" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL )
, 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal (
rt_dataMapInfo . mmi . InstanceMap . fullPath , "cst_robotarm_breach/wREF" ,
1 , "wREF" ) ; } if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue )
) { if ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . co45xeckac .
SlioLTF = accessor ; } } } } tmp = nesl_lease_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_6"
, 0 , 0 ) ; rtDW . gykjnl45ou = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . gykjnl45ou ) ; if ( tmp_p ) { cst_robotarm_breach_98bf360f_6_gateway (
) ; tmp = nesl_lease_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_6"
, 0 , 0 ) ; rtDW . gykjnl45ou = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . nm1pedohdu = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . i2d1fpfnkr = ( void *
) diagnosticManager ; modelParameters . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters . mSolverTolerance = 0.001 ; modelParameters .
mVariableStepSolver = true ; modelParameters . mIsUsingODEN = false ;
modelParameters . mFixedStepSize = 0.001 ; modelParameters . mStartTime = 0.0
; modelParameters . mLoadInitialState = false ; modelParameters .
mUseSimState = false ; modelParameters . mLinTrimCompile = false ;
modelParameters . mLoggingMode = SSC_LOGGING_NONE ; modelParameters .
mRTWModifiedTimeStamp = 5.23563476E+8 ; tmp_i = 0.001 ; modelParameters .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters . mVariableStepSolver = tmp_p ; tmp_p
= false ; modelParameters . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . i2d1fpfnkr ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . gykjnl45ou
, & modelParameters , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_6"
, 1 , 0 ) ; rtDW . nkfuqn44a2 = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . nkfuqn44a2 ) ; if ( tmp_p ) { cst_robotarm_breach_98bf360f_6_gateway (
) ; tmp = nesl_lease_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_6"
, 1 , 0 ) ; rtDW . nkfuqn44a2 = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . g1iq3vbocm = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . al2khf0zpj = ( void *
) diagnosticManager ; modelParameters_p . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_p . mSolverTolerance = 0.001 ; modelParameters_p .
mVariableStepSolver = true ; modelParameters_p . mIsUsingODEN = false ;
modelParameters_p . mFixedStepSize = 0.001 ; modelParameters_p . mStartTime =
0.0 ; modelParameters_p . mLoadInitialState = false ; modelParameters_p .
mUseSimState = false ; modelParameters_p . mLinTrimCompile = false ;
modelParameters_p . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_p .
mRTWModifiedTimeStamp = 5.23563476E+8 ; tmp_i = 0.001 ; modelParameters_p .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_p . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_p . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_p . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_p .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . al2khf0zpj ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . nkfuqn44a2
, & modelParameters_p , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_2"
, 0 , 0 ) ; rtDW . ocpy12p22k = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . ocpy12p22k ) ; if ( tmp_p ) { cst_robotarm_breach_98bf360f_2_gateway (
) ; tmp = nesl_lease_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_2"
, 0 , 0 ) ; rtDW . ocpy12p22k = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . hcrcwgbmvq = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . az1yo1muxe = ( void *
) diagnosticManager ; modelParameters_e . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_e . mSolverTolerance = 0.001 ; modelParameters_e .
mVariableStepSolver = true ; modelParameters_e . mIsUsingODEN = false ;
modelParameters_e . mFixedStepSize = 0.001 ; modelParameters_e . mStartTime =
0.0 ; modelParameters_e . mLoadInitialState = false ; modelParameters_e .
mUseSimState = false ; modelParameters_e . mLinTrimCompile = false ;
modelParameters_e . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_e .
mRTWModifiedTimeStamp = 5.23563414E+8 ; tmp_i = 0.001 ; modelParameters_e .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_e . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_e . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_e . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_e .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . az1yo1muxe ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . ocpy12p22k
, & modelParameters_e , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_2"
, 1 , 0 ) ; rtDW . esa01bvjvm = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . esa01bvjvm ) ; if ( tmp_p ) { cst_robotarm_breach_98bf360f_2_gateway (
) ; tmp = nesl_lease_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_2"
, 1 , 0 ) ; rtDW . esa01bvjvm = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . kwq3so20nv = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . dw4pbexevd = ( void *
) diagnosticManager ; modelParameters_i . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_i . mSolverTolerance = 0.001 ; modelParameters_i .
mVariableStepSolver = true ; modelParameters_i . mIsUsingODEN = false ;
modelParameters_i . mFixedStepSize = 0.001 ; modelParameters_i . mStartTime =
0.0 ; modelParameters_i . mLoadInitialState = false ; modelParameters_i .
mUseSimState = false ; modelParameters_i . mLinTrimCompile = false ;
modelParameters_i . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_i .
mRTWModifiedTimeStamp = 5.23563414E+8 ; tmp_i = 0.001 ; modelParameters_i .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_i . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_i . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_i . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_i .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . dw4pbexevd ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . esa01bvjvm
, & modelParameters_i , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_7"
, 0 , 0 ) ; rtDW . ajpv151fp2 = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . ajpv151fp2 ) ; if ( tmp_p ) { cst_robotarm_breach_98bf360f_7_gateway (
) ; tmp = nesl_lease_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_7"
, 0 , 0 ) ; rtDW . ajpv151fp2 = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . dmsckoggfy = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . bkxjnhwg4q = ( void *
) diagnosticManager ; modelParameters_m . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_m . mSolverTolerance = 0.001 ; modelParameters_m .
mVariableStepSolver = true ; modelParameters_m . mIsUsingODEN = false ;
modelParameters_m . mFixedStepSize = 0.001 ; modelParameters_m . mStartTime =
0.0 ; modelParameters_m . mLoadInitialState = false ; modelParameters_m .
mUseSimState = false ; modelParameters_m . mLinTrimCompile = false ;
modelParameters_m . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_m .
mRTWModifiedTimeStamp = 5.23563414E+8 ; tmp_i = 0.001 ; modelParameters_m .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_m . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_m . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_m . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_m .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . bkxjnhwg4q ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . ajpv151fp2
, & modelParameters_m , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_7"
, 1 , 0 ) ; rtDW . kdqcwt3oic = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . kdqcwt3oic ) ; if ( tmp_p ) { cst_robotarm_breach_98bf360f_7_gateway (
) ; tmp = nesl_lease_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_7"
, 1 , 0 ) ; rtDW . kdqcwt3oic = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . gq1bwlllvx = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . d110twjzhx = ( void *
) diagnosticManager ; modelParameters_g . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_g . mSolverTolerance = 0.001 ; modelParameters_g .
mVariableStepSolver = true ; modelParameters_g . mIsUsingODEN = false ;
modelParameters_g . mFixedStepSize = 0.001 ; modelParameters_g . mStartTime =
0.0 ; modelParameters_g . mLoadInitialState = false ; modelParameters_g .
mUseSimState = false ; modelParameters_g . mLinTrimCompile = false ;
modelParameters_g . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_g .
mRTWModifiedTimeStamp = 5.23563414E+8 ; tmp_i = 0.001 ; modelParameters_g .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_g . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_g . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_g . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_g .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . d110twjzhx ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . kdqcwt3oic
, & modelParameters_g , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_5"
, 0 , 0 ) ; rtDW . kcmwywlxl1 = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . kcmwywlxl1 ) ; if ( tmp_p ) { cst_robotarm_breach_98bf360f_5_gateway (
) ; tmp = nesl_lease_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_5"
, 0 , 0 ) ; rtDW . kcmwywlxl1 = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . pufhjztccr = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . aqd3u0h4s2 = ( void *
) diagnosticManager ; modelParameters_j . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_j . mSolverTolerance = 0.001 ; modelParameters_j .
mVariableStepSolver = true ; modelParameters_j . mIsUsingODEN = false ;
modelParameters_j . mFixedStepSize = 0.001 ; modelParameters_j . mStartTime =
0.0 ; modelParameters_j . mLoadInitialState = false ; modelParameters_j .
mUseSimState = false ; modelParameters_j . mLinTrimCompile = false ;
modelParameters_j . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_j .
mRTWModifiedTimeStamp = 5.23563414E+8 ; tmp_i = 0.001 ; modelParameters_j .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_j . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_j . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_j . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_j .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . aqd3u0h4s2 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . kcmwywlxl1
, & modelParameters_j , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_5"
, 1 , 0 ) ; rtDW . ei3pjfumgv = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . ei3pjfumgv ) ; if ( tmp_p ) { cst_robotarm_breach_98bf360f_5_gateway (
) ; tmp = nesl_lease_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_5"
, 1 , 0 ) ; rtDW . ei3pjfumgv = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . ny31yfa2vw = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . mwyq2uplon = ( void *
) diagnosticManager ; modelParameters_f . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_f . mSolverTolerance = 0.001 ; modelParameters_f .
mVariableStepSolver = true ; modelParameters_f . mIsUsingODEN = false ;
modelParameters_f . mFixedStepSize = 0.001 ; modelParameters_f . mStartTime =
0.0 ; modelParameters_f . mLoadInitialState = false ; modelParameters_f .
mUseSimState = false ; modelParameters_f . mLinTrimCompile = false ;
modelParameters_f . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_f .
mRTWModifiedTimeStamp = 5.23563414E+8 ; tmp_i = 0.001 ; modelParameters_f .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_f . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_f . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_f . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_f .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . mwyq2uplon ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . ei3pjfumgv
, & modelParameters_f , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_1"
, 0 , 0 ) ; rtDW . ejmmacq22h = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . ejmmacq22h ) ; if ( tmp_p ) { cst_robotarm_breach_98bf360f_1_gateway (
) ; tmp = nesl_lease_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_1"
, 0 , 0 ) ; rtDW . ejmmacq22h = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . hrkrw20ytk = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . b4ac4nh15p = ( void *
) diagnosticManager ; modelParameters_c . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_c . mSolverTolerance = 0.001 ; modelParameters_c .
mVariableStepSolver = true ; modelParameters_c . mIsUsingODEN = false ;
modelParameters_c . mFixedStepSize = 0.001 ; modelParameters_c . mStartTime =
0.0 ; modelParameters_c . mLoadInitialState = false ; modelParameters_c .
mUseSimState = false ; modelParameters_c . mLinTrimCompile = false ;
modelParameters_c . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_c .
mRTWModifiedTimeStamp = 5.23563414E+8 ; tmp_i = 0.001 ; modelParameters_c .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_c . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_c . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_c . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_c .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . b4ac4nh15p ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . ejmmacq22h
, & modelParameters_c , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_1"
, 1 , 0 ) ; rtDW . fdwlxsnzv1 = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . fdwlxsnzv1 ) ; if ( tmp_p ) { cst_robotarm_breach_98bf360f_1_gateway (
) ; tmp = nesl_lease_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_1"
, 1 , 0 ) ; rtDW . fdwlxsnzv1 = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . mm5rcdx55z = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . l2qm1h0rd5 = ( void *
) diagnosticManager ; modelParameters_k . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_k . mSolverTolerance = 0.001 ; modelParameters_k .
mVariableStepSolver = true ; modelParameters_k . mIsUsingODEN = false ;
modelParameters_k . mFixedStepSize = 0.001 ; modelParameters_k . mStartTime =
0.0 ; modelParameters_k . mLoadInitialState = false ; modelParameters_k .
mUseSimState = false ; modelParameters_k . mLinTrimCompile = false ;
modelParameters_k . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_k .
mRTWModifiedTimeStamp = 5.23563414E+8 ; tmp_i = 0.001 ; modelParameters_k .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_k . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_k . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_k . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_k .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . l2qm1h0rd5 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . fdwlxsnzv1
, & modelParameters_k , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_3"
, 0 , 0 ) ; rtDW . mluequoe3f = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . mluequoe3f ) ; if ( tmp_p ) { cst_robotarm_breach_98bf360f_3_gateway (
) ; tmp = nesl_lease_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_3"
, 0 , 0 ) ; rtDW . mluequoe3f = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . jtehowy45m = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . ma153abo0u = ( void *
) diagnosticManager ; modelParameters_b . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_b . mSolverTolerance = 0.001 ; modelParameters_b .
mVariableStepSolver = true ; modelParameters_b . mIsUsingODEN = false ;
modelParameters_b . mFixedStepSize = 0.001 ; modelParameters_b . mStartTime =
0.0 ; modelParameters_b . mLoadInitialState = false ; modelParameters_b .
mUseSimState = false ; modelParameters_b . mLinTrimCompile = false ;
modelParameters_b . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_b .
mRTWModifiedTimeStamp = 5.23563414E+8 ; tmp_i = 0.001 ; modelParameters_b .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_b . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_b . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_b . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_b .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . ma153abo0u ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . mluequoe3f
, & modelParameters_b , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_3"
, 1 , 0 ) ; rtDW . pelwuspvpm = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . pelwuspvpm ) ; if ( tmp_p ) { cst_robotarm_breach_98bf360f_3_gateway (
) ; tmp = nesl_lease_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_3"
, 1 , 0 ) ; rtDW . pelwuspvpm = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . oapgvyjuop = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . mtf42ubwyf = ( void *
) diagnosticManager ; modelParameters_n . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_n . mSolverTolerance = 0.001 ; modelParameters_n .
mVariableStepSolver = true ; modelParameters_n . mIsUsingODEN = false ;
modelParameters_n . mFixedStepSize = 0.001 ; modelParameters_n . mStartTime =
0.0 ; modelParameters_n . mLoadInitialState = false ; modelParameters_n .
mUseSimState = false ; modelParameters_n . mLinTrimCompile = false ;
modelParameters_n . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_n .
mRTWModifiedTimeStamp = 5.23563414E+8 ; tmp_i = 0.001 ; modelParameters_n .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_n . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_n . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_n . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_n .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . mtf42ubwyf ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . pelwuspvpm
, & modelParameters_n , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_4"
, 0 , 0 ) ; rtDW . lvrxzc3xbz = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . lvrxzc3xbz ) ; if ( tmp_p ) { cst_robotarm_breach_98bf360f_4_gateway (
) ; tmp = nesl_lease_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_4"
, 0 , 0 ) ; rtDW . lvrxzc3xbz = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . kxuuq5q1xq = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . ctneexngj0 = ( void *
) diagnosticManager ; modelParameters_l . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_l . mSolverTolerance = 0.001 ; modelParameters_l .
mVariableStepSolver = true ; modelParameters_l . mIsUsingODEN = false ;
modelParameters_l . mFixedStepSize = 0.001 ; modelParameters_l . mStartTime =
0.0 ; modelParameters_l . mLoadInitialState = false ; modelParameters_l .
mUseSimState = false ; modelParameters_l . mLinTrimCompile = false ;
modelParameters_l . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_l .
mRTWModifiedTimeStamp = 5.23563414E+8 ; tmp_i = 0.001 ; modelParameters_l .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_l . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_l . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_l . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_l .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . ctneexngj0 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . lvrxzc3xbz
, & modelParameters_l , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_4"
, 1 , 0 ) ; rtDW . atywinawwy = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . atywinawwy ) ; if ( tmp_p ) { cst_robotarm_breach_98bf360f_4_gateway (
) ; tmp = nesl_lease_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_4"
, 1 , 0 ) ; rtDW . atywinawwy = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . eq0pqdmgzx = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . jaseroeq2i = ( void *
) diagnosticManager ; modelParameters_d . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_d . mSolverTolerance = 0.001 ; modelParameters_d .
mVariableStepSolver = true ; modelParameters_d . mIsUsingODEN = false ;
modelParameters_d . mFixedStepSize = 0.001 ; modelParameters_d . mStartTime =
0.0 ; modelParameters_d . mLoadInitialState = false ; modelParameters_d .
mUseSimState = false ; modelParameters_d . mLinTrimCompile = false ;
modelParameters_d . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_d .
mRTWModifiedTimeStamp = 5.23563414E+8 ; tmp_i = 0.001 ; modelParameters_d .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_d . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_d . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_d . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_d .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . jaseroeq2i ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . atywinawwy
, & modelParameters_d , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
MdlInitialize ( ) ; } void MdlOutputs ( int_T tid ) { NeslSimulationData *
simulationData ; real_T time ; boolean_T tmp ; real_T tmp_p [ 24 ] ; int_T
tmp_e [ 7 ] ; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree *
diagnosticTree ; char * msg ; real_T time_p ; real_T tmp_i [ 53 ] ; int_T
tmp_m [ 8 ] ; int32_T k ; real_T * lastU ; real_T lastTime ; real_T time_e ;
real_T tmp_g [ 16 ] ; int_T tmp_j [ 5 ] ; real_T time_i ; real_T tmp_f [ 25 ]
; int_T tmp_c [ 6 ] ; real_T time_m ; real_T tmp_k [ 28 ] ; int_T tmp_b [ 8 ]
; real_T time_g ; real_T tmp_n [ 46 ] ; int_T tmp_l [ 9 ] ; real_T time_j ;
real_T tmp_d [ 16 ] ; int_T tmp_o [ 5 ] ; real_T time_f ; real_T tmp_dz [ 25
] ; int_T tmp_fs [ 6 ] ; real_T time_c ; real_T tmp_ck [ 16 ] ; int_T tmp_f2
[ 5 ] ; real_T time_k ; real_T tmp_kt [ 25 ] ; int_T tmp_lt [ 6 ] ; real_T
time_b ; real_T tmp_hn [ 16 ] ; int_T tmp_ap [ 5 ] ; real_T time_n ; real_T
tmp_pj [ 25 ] ; int_T tmp_po [ 6 ] ; real_T time_l ; real_T tmp_pk [ 16 ] ;
int_T tmp_d0 [ 5 ] ; real_T time_d ; real_T tmp_kh [ 25 ] ; int_T tmp_m0 [ 6
] ; if ( gblInportFileName != ( NULL ) ) { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( ) ; rtwISigstreamManagerGetInputIsInDatasetFormat (
pISigstreamManager , & externalInputIsInDatasetFormat ) ; if (
slIsRapidAcceleratorSimulating ( ) && externalInputIsInDatasetFormat ) {
const int maxErrorBufferSize = 16384 ; char errMsg [ 16384 ] ; bool
bSetErrorStatus = false ; if ( 1 ) { { real_T time = ssGetTaskTime ( rtS , 0
) ; if ( ! rtwISigstreamManagerIsPeriodicFcnCall ( pISigstreamManager , 0 ) )
{ int_T sampleHit = 0U ; bSetErrorStatus =
rtwISigstreamManagerInjectDataMultiRate ( pISigstreamManager , 0 , time , 1 ,
"<Root>/tREF" , "[t__, u__]" , & sampleHit , errMsg , maxErrorBufferSize ) ;
} } } if ( 1 ) { { real_T time = ssGetTaskTime ( rtS , 0 ) ; if ( !
rtwISigstreamManagerIsPeriodicFcnCall ( pISigstreamManager , 1 ) ) { int_T
sampleHit = 0U ; bSetErrorStatus = rtwISigstreamManagerInjectDataMultiRate (
pISigstreamManager , 1 , time , 1 , "<Root>/bREF" , "[t__, u__]" , &
sampleHit , errMsg , maxErrorBufferSize ) ; } } } if ( 1 ) { { real_T time =
ssGetTaskTime ( rtS , 0 ) ; if ( ! rtwISigstreamManagerIsPeriodicFcnCall (
pISigstreamManager , 2 ) ) { int_T sampleHit = 0U ; bSetErrorStatus =
rtwISigstreamManagerInjectDataMultiRate ( pISigstreamManager , 2 , time , 1 ,
"<Root>/fREF" , "[t__, u__]" , & sampleHit , errMsg , maxErrorBufferSize ) ;
} } } if ( 1 ) { { real_T time = ssGetTaskTime ( rtS , 0 ) ; if ( !
rtwISigstreamManagerIsPeriodicFcnCall ( pISigstreamManager , 3 ) ) { int_T
sampleHit = 0U ; bSetErrorStatus = rtwISigstreamManagerInjectDataMultiRate (
pISigstreamManager , 3 , time , 1 , "<Root>/wREF" , "[t__, u__]" , &
sampleHit , errMsg , maxErrorBufferSize ) ; } } } if ( 1 ) { { real_T time =
ssGetTaskTime ( rtS , 0 ) ; if ( ! rtwISigstreamManagerIsPeriodicFcnCall (
pISigstreamManager , 4 ) ) { int_T sampleHit = 0U ; bSetErrorStatus =
rtwISigstreamManagerInjectDataMultiRate ( pISigstreamManager , 4 , time , 1 ,
"<Root>/hREF" , "[t__, u__]" , & sampleHit , errMsg , maxErrorBufferSize ) ;
} } } if ( 1 ) { { real_T time = ssGetTaskTime ( rtS , 0 ) ; if ( !
rtwISigstreamManagerIsPeriodicFcnCall ( pISigstreamManager , 5 ) ) { int_T
sampleHit = 0U ; bSetErrorStatus = rtwISigstreamManagerInjectDataMultiRate (
pISigstreamManager , 5 , time , 1 , "<Root>/gREF" , "[t__, u__]" , &
sampleHit , errMsg , maxErrorBufferSize ) ; } } } if ( bSetErrorStatus ) {
ssSetErrorStatus ( rtS , errMsg ) ; return ; } } else { int_T currTimeIdx ;
int_T i ; if ( gblInportTUtables [ 0 ] . nTimePoints > 0 ) { if ( 1 ) { {
real_T time = ssGetTaskTime ( rtS , 0 ) ; int k = 1 ; if ( gblInportTUtables
[ 0 ] . nTimePoints == 1 ) { k = 0 ; } currTimeIdx = rt_getTimeIdx (
gblInportTUtables [ 0 ] . time , time , gblInportTUtables [ 0 ] . nTimePoints
, gblInportTUtables [ 0 ] . currTimeIdx , 1 , 0 ) ; gblInportTUtables [ 0 ] .
currTimeIdx = currTimeIdx ; for ( i = 0 ; i < 1 ; i ++ ) { real_T * realPtr1
= ( real_T * ) gblInportTUtables [ 0 ] . ur + i * gblInportTUtables [ 0 ] .
nTimePoints + currTimeIdx ; real_T * realPtr2 = realPtr1 + 1 * k ; ( void )
rt_Interpolate_Datatype ( realPtr1 , realPtr2 , & rtU . czzusp55mg , time ,
gblInportTUtables [ 0 ] . time [ currTimeIdx ] , gblInportTUtables [ 0 ] .
time [ currTimeIdx + k ] , gblInportTUtables [ 0 ] . uDataType ) ; } } } } if
( gblInportTUtables [ 1 ] . nTimePoints > 0 ) { if ( 1 ) { { real_T time =
ssGetTaskTime ( rtS , 0 ) ; int k = 1 ; if ( gblInportTUtables [ 1 ] .
nTimePoints == 1 ) { k = 0 ; } currTimeIdx = rt_getTimeIdx (
gblInportTUtables [ 1 ] . time , time , gblInportTUtables [ 1 ] . nTimePoints
, gblInportTUtables [ 1 ] . currTimeIdx , 1 , 0 ) ; gblInportTUtables [ 1 ] .
currTimeIdx = currTimeIdx ; for ( i = 0 ; i < 1 ; i ++ ) { real_T * realPtr1
= ( real_T * ) gblInportTUtables [ 1 ] . ur + i * gblInportTUtables [ 1 ] .
nTimePoints + currTimeIdx ; real_T * realPtr2 = realPtr1 + 1 * k ; ( void )
rt_Interpolate_Datatype ( realPtr1 , realPtr2 , & rtU . oaqp25vha4 , time ,
gblInportTUtables [ 1 ] . time [ currTimeIdx ] , gblInportTUtables [ 1 ] .
time [ currTimeIdx + k ] , gblInportTUtables [ 1 ] . uDataType ) ; } } } } if
( gblInportTUtables [ 2 ] . nTimePoints > 0 ) { if ( 1 ) { { real_T time =
ssGetTaskTime ( rtS , 0 ) ; int k = 1 ; if ( gblInportTUtables [ 2 ] .
nTimePoints == 1 ) { k = 0 ; } currTimeIdx = rt_getTimeIdx (
gblInportTUtables [ 2 ] . time , time , gblInportTUtables [ 2 ] . nTimePoints
, gblInportTUtables [ 2 ] . currTimeIdx , 1 , 0 ) ; gblInportTUtables [ 2 ] .
currTimeIdx = currTimeIdx ; for ( i = 0 ; i < 1 ; i ++ ) { real_T * realPtr1
= ( real_T * ) gblInportTUtables [ 2 ] . ur + i * gblInportTUtables [ 2 ] .
nTimePoints + currTimeIdx ; real_T * realPtr2 = realPtr1 + 1 * k ; ( void )
rt_Interpolate_Datatype ( realPtr1 , realPtr2 , & rtU . f01of5bdla , time ,
gblInportTUtables [ 2 ] . time [ currTimeIdx ] , gblInportTUtables [ 2 ] .
time [ currTimeIdx + k ] , gblInportTUtables [ 2 ] . uDataType ) ; } } } } if
( gblInportTUtables [ 3 ] . nTimePoints > 0 ) { if ( 1 ) { { real_T time =
ssGetTaskTime ( rtS , 0 ) ; int k = 1 ; if ( gblInportTUtables [ 3 ] .
nTimePoints == 1 ) { k = 0 ; } currTimeIdx = rt_getTimeIdx (
gblInportTUtables [ 3 ] . time , time , gblInportTUtables [ 3 ] . nTimePoints
, gblInportTUtables [ 3 ] . currTimeIdx , 1 , 0 ) ; gblInportTUtables [ 3 ] .
currTimeIdx = currTimeIdx ; for ( i = 0 ; i < 1 ; i ++ ) { real_T * realPtr1
= ( real_T * ) gblInportTUtables [ 3 ] . ur + i * gblInportTUtables [ 3 ] .
nTimePoints + currTimeIdx ; real_T * realPtr2 = realPtr1 + 1 * k ; ( void )
rt_Interpolate_Datatype ( realPtr1 , realPtr2 , & rtU . lnvmafogi2 , time ,
gblInportTUtables [ 3 ] . time [ currTimeIdx ] , gblInportTUtables [ 3 ] .
time [ currTimeIdx + k ] , gblInportTUtables [ 3 ] . uDataType ) ; } } } } if
( gblInportTUtables [ 4 ] . nTimePoints > 0 ) { if ( 1 ) { { real_T time =
ssGetTaskTime ( rtS , 0 ) ; int k = 1 ; if ( gblInportTUtables [ 4 ] .
nTimePoints == 1 ) { k = 0 ; } currTimeIdx = rt_getTimeIdx (
gblInportTUtables [ 4 ] . time , time , gblInportTUtables [ 4 ] . nTimePoints
, gblInportTUtables [ 4 ] . currTimeIdx , 1 , 0 ) ; gblInportTUtables [ 4 ] .
currTimeIdx = currTimeIdx ; for ( i = 0 ; i < 1 ; i ++ ) { real_T * realPtr1
= ( real_T * ) gblInportTUtables [ 4 ] . ur + i * gblInportTUtables [ 4 ] .
nTimePoints + currTimeIdx ; real_T * realPtr2 = realPtr1 + 1 * k ; ( void )
rt_Interpolate_Datatype ( realPtr1 , realPtr2 , & rtU . b3tikeyk0u , time ,
gblInportTUtables [ 4 ] . time [ currTimeIdx ] , gblInportTUtables [ 4 ] .
time [ currTimeIdx + k ] , gblInportTUtables [ 4 ] . uDataType ) ; } } } } if
( gblInportTUtables [ 5 ] . nTimePoints > 0 ) { if ( 1 ) { { real_T time =
ssGetTaskTime ( rtS , 0 ) ; int k = 1 ; if ( gblInportTUtables [ 5 ] .
nTimePoints == 1 ) { k = 0 ; } currTimeIdx = rt_getTimeIdx (
gblInportTUtables [ 5 ] . time , time , gblInportTUtables [ 5 ] . nTimePoints
, gblInportTUtables [ 5 ] . currTimeIdx , 1 , 0 ) ; gblInportTUtables [ 5 ] .
currTimeIdx = currTimeIdx ; for ( i = 0 ; i < 1 ; i ++ ) { real_T * realPtr1
= ( real_T * ) gblInportTUtables [ 5 ] . ur + i * gblInportTUtables [ 5 ] .
nTimePoints + currTimeIdx ; real_T * realPtr2 = realPtr1 + 1 * k ; ( void )
rt_Interpolate_Datatype ( realPtr1 , realPtr2 , & rtU . jhowxmdxl0 , time ,
gblInportTUtables [ 5 ] . time [ currTimeIdx ] , gblInportTUtables [ 5 ] .
time [ currTimeIdx + k ] , gblInportTUtables [ 5 ] . uDataType ) ; } } } } }
} simulationData = ( NeslSimulationData * ) rtDW . nm1pedohdu ; time = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 28 ;
simulationData -> mData -> mContStates . mX = & rtX . lbl1bst0em [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 1 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . gmlwc0qame ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
eqfboolvki ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
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
gsxwzsrgs3 [ 0 ] ; tmp_p [ 1 ] = rtB . gsxwzsrgs3 [ 1 ] ; tmp_p [ 2 ] = rtB .
gsxwzsrgs3 [ 2 ] ; tmp_p [ 3 ] = rtB . gsxwzsrgs3 [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . o1ldcw3ssi [ 0 ] ; tmp_p [ 5 ] = rtB . o1ldcw3ssi [ 1 ] ;
tmp_p [ 6 ] = rtB . o1ldcw3ssi [ 2 ] ; tmp_p [ 7 ] = rtB . o1ldcw3ssi [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . ase3lj3apj [ 0 ] ; tmp_p [ 9 ] = rtB .
ase3lj3apj [ 1 ] ; tmp_p [ 10 ] = rtB . ase3lj3apj [ 2 ] ; tmp_p [ 11 ] = rtB
. ase3lj3apj [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . jcohfzsgmt [ 0 ]
; tmp_p [ 13 ] = rtB . jcohfzsgmt [ 1 ] ; tmp_p [ 14 ] = rtB . jcohfzsgmt [ 2
] ; tmp_p [ 15 ] = rtB . jcohfzsgmt [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . nwltqugjxl [ 0 ] ; tmp_p [ 17 ] = rtB . nwltqugjxl [ 1 ] ; tmp_p [ 18 ]
= rtB . nwltqugjxl [ 2 ] ; tmp_p [ 19 ] = rtB . nwltqugjxl [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . l4n2e5pdle [ 0 ] ; tmp_p [ 21 ] = rtB .
l4n2e5pdle [ 1 ] ; tmp_p [ 22 ] = rtB . l4n2e5pdle [ 2 ] ; tmp_p [ 23 ] = rtB
. l4n2e5pdle [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 29 ; simulationData -> mData ->
mOutputs . mX = & rtB . krcxplu3eq [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . i2d1fpfnkr ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . gykjnl45ou ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . g1iq3vbocm ; time_p = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_p ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . kqufqx0tu5 ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . joonqvsdqa ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_m [ 0 ] = 0 ;
tmp_i [ 0 ] = rtB . gsxwzsrgs3 [ 0 ] ; tmp_i [ 1 ] = rtB . gsxwzsrgs3 [ 1 ] ;
tmp_i [ 2 ] = rtB . gsxwzsrgs3 [ 2 ] ; tmp_i [ 3 ] = rtB . gsxwzsrgs3 [ 3 ] ;
tmp_m [ 1 ] = 4 ; tmp_i [ 4 ] = rtB . o1ldcw3ssi [ 0 ] ; tmp_i [ 5 ] = rtB .
o1ldcw3ssi [ 1 ] ; tmp_i [ 6 ] = rtB . o1ldcw3ssi [ 2 ] ; tmp_i [ 7 ] = rtB .
o1ldcw3ssi [ 3 ] ; tmp_m [ 2 ] = 8 ; tmp_i [ 8 ] = rtB . ase3lj3apj [ 0 ] ;
tmp_i [ 9 ] = rtB . ase3lj3apj [ 1 ] ; tmp_i [ 10 ] = rtB . ase3lj3apj [ 2 ]
; tmp_i [ 11 ] = rtB . ase3lj3apj [ 3 ] ; tmp_m [ 3 ] = 12 ; tmp_i [ 12 ] =
rtB . jcohfzsgmt [ 0 ] ; tmp_i [ 13 ] = rtB . jcohfzsgmt [ 1 ] ; tmp_i [ 14 ]
= rtB . jcohfzsgmt [ 2 ] ; tmp_i [ 15 ] = rtB . jcohfzsgmt [ 3 ] ; tmp_m [ 4
] = 16 ; tmp_i [ 16 ] = rtB . nwltqugjxl [ 0 ] ; tmp_i [ 17 ] = rtB .
nwltqugjxl [ 1 ] ; tmp_i [ 18 ] = rtB . nwltqugjxl [ 2 ] ; tmp_i [ 19 ] = rtB
. nwltqugjxl [ 3 ] ; tmp_m [ 5 ] = 20 ; tmp_i [ 20 ] = rtB . l4n2e5pdle [ 0 ]
; tmp_i [ 21 ] = rtB . l4n2e5pdle [ 1 ] ; tmp_i [ 22 ] = rtB . l4n2e5pdle [ 2
] ; tmp_i [ 23 ] = rtB . l4n2e5pdle [ 3 ] ; tmp_m [ 6 ] = 24 ; memcpy ( &
tmp_i [ 24 ] , & rtB . krcxplu3eq [ 0 ] , 29U * sizeof ( real_T ) ) ; tmp_m [
7 ] = 53 ; simulationData -> mData -> mInputValues . mN = 53 ; simulationData
-> mData -> mInputValues . mX = & tmp_i [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 8 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_m [ 0 ] ; simulationData -> mData -> mOutputs . mN = 12 ; simulationData
-> mData -> mOutputs . mX = & rtB . dlgzaqgmhc [ 0 ] ; simulationData ->
mData -> mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX =
NULL ; simulationData -> mData -> mIsFundamentalSampleHit = false ;
simulationData -> mData -> mTolerances . mN = 0 ; simulationData -> mData ->
mTolerances . mX = NULL ; simulationData -> mData -> mCstateHasChanged =
false ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . al2khf0zpj ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . nkfuqn44a2 ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtY . keyyckin41 = rtB . dlgzaqgmhc [ 0 ] ; rtY . gpojpe3hlv = rtB .
dlgzaqgmhc [ 2 ] ; rtY . kv3guwywho = rtB . dlgzaqgmhc [ 4 ] ; rtY .
b1ehm1zurn = rtB . dlgzaqgmhc [ 6 ] ; rtY . fu4qp3lwyh = rtB . dlgzaqgmhc [ 8
] ; rtY . jfavcx5pxi = rtB . dlgzaqgmhc [ 10 ] ; rtB . h124qx1phd = rtX .
hzgkjmkam3 ; rtB . kyvfepmlch = rtP . Gi1_Gain * rtB . h124qx1phd ; rtB .
a4h4awrudh = rtP . Sp1_Gain * rtU . czzusp55mg ; if ( ssIsSampleHit ( rtS , 1
, 0 ) ) { lastTime = rtB . dlgzaqgmhc [ 0 ] ; lastTime -= rtP . dFilt [ 1 ] *
rtDW . c1yhchtyrr ; rtDW . el1lpuw5zq = lastTime / rtP . dFilt [ 0 ] ; rtB .
d4qhj2qvox = rtP . nFilt [ 0 ] * rtDW . el1lpuw5zq + rtP . nFilt [ 1 ] * rtDW
. c1yhchtyrr ; } rtB . ff0xl0o0on = rtU . czzusp55mg - rtB . d4qhj2qvox ; rtB
. knyvewjxd3 = rtB . a4h4awrudh + rtB . ff0xl0o0on ; rtB . kzvnckcdot = rtP .
Gp1_Gain * rtB . knyvewjxd3 ; if ( ( rtDW . ez5xo4m5re >= ssGetT ( rtS ) ) &&
( rtDW . btzzvjv32s >= ssGetT ( rtS ) ) ) { rtB . k0xhr3lmo2 = 0.0 ; } else {
lastTime = rtDW . ez5xo4m5re ; lastU = & rtDW . gawt3eqo1w ; if ( rtDW .
ez5xo4m5re < rtDW . btzzvjv32s ) { if ( rtDW . btzzvjv32s < ssGetT ( rtS ) )
{ lastTime = rtDW . btzzvjv32s ; lastU = & rtDW . a4ncrv0q4x ; } } else { if
( rtDW . ez5xo4m5re >= ssGetT ( rtS ) ) { lastTime = rtDW . btzzvjv32s ;
lastU = & rtDW . a4ncrv0q4x ; } } rtB . k0xhr3lmo2 = ( rtB . ff0xl0o0on - *
lastU ) / ( ssGetT ( rtS ) - lastTime ) ; } rtB . lnddeflvkv = rtP . Gd1_Gain
* rtB . k0xhr3lmo2 ; rtB . cicsqsen0r = ( rtB . kyvfepmlch + rtB . kzvnckcdot
) + rtB . lnddeflvkv ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . hsuxbusn10 =
( rtB . cicsqsen0r >= 0.0 ) ; } rtB . ncmezuqmmk = rtDW . hsuxbusn10 > 0 ?
rtB . cicsqsen0r : - rtB . cicsqsen0r ; if ( ssIsMajorTimeStep ( rtS ) ) {
rtDW . ky2erwn5c2 = rtB . ncmezuqmmk >= rtP . D1_UpperSat ? 1 : rtB .
ncmezuqmmk > rtP . D1_LowerSat ? 0 : - 1 ; } rtB . fllne2ej2o = rtDW .
ky2erwn5c2 == 1 ? rtP . D1_UpperSat : rtDW . ky2erwn5c2 == - 1 ? rtP .
D1_LowerSat : rtB . ncmezuqmmk ; { if ( ( rtDW . apdjv21fm3 . AQHandles ||
rtDW . apdjv21fm3 . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . apdjv21fm3 . AQHandles , rtDW . apdjv21fm3 .
SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB . fllne2ej2o + 0 )
; } } rtB . isqdcvco3p = rtX . hgl1hrlhol ; rtB . mmfxcblztm = rtP . Gi2_Gain
* rtB . isqdcvco3p ; rtB . fnwiftiak2 = rtU . oaqp25vha4 - rtP .
Constant1_Value ; rtB . fnevqel4sp = rtP . Sp2_Gain * rtB . fnwiftiak2 ; rtB
. cxcsyd5d1c = rtB . dlgzaqgmhc [ 2 ] - rtP . IC_Value ; if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { rtDW . cujerjqnlc = ( rtB . cxcsyd5d1c - rtP . dFilt [ 1 ]
* rtDW . b5meobzewc ) / rtP . dFilt [ 0 ] ; rtB . jndeowmqg5 = rtP . nFilt [
0 ] * rtDW . cujerjqnlc + rtP . nFilt [ 1 ] * rtDW . b5meobzewc ; } rtB .
fwfn0fe1sh = rtB . fnwiftiak2 - rtB . jndeowmqg5 ; rtB . bs4ylghjgz = rtB .
fnevqel4sp + rtB . fwfn0fe1sh ; rtB . aidyoivzbo = rtP . Gp2_Gain * rtB .
bs4ylghjgz ; if ( ( rtDW . etc2elb4q0 >= ssGetT ( rtS ) ) && ( rtDW .
ka3q1qehwh >= ssGetT ( rtS ) ) ) { rtB . daldi2mwjh = 0.0 ; } else { lastTime
= rtDW . etc2elb4q0 ; lastU = & rtDW . ix5mp3senf ; if ( rtDW . etc2elb4q0 <
rtDW . ka3q1qehwh ) { if ( rtDW . ka3q1qehwh < ssGetT ( rtS ) ) { lastTime =
rtDW . ka3q1qehwh ; lastU = & rtDW . iyz54pfzbq ; } } else { if ( rtDW .
etc2elb4q0 >= ssGetT ( rtS ) ) { lastTime = rtDW . ka3q1qehwh ; lastU = &
rtDW . iyz54pfzbq ; } } rtB . daldi2mwjh = ( rtB . fwfn0fe1sh - * lastU ) / (
ssGetT ( rtS ) - lastTime ) ; } rtB . atgk44qqef = rtP . Gd2_Gain * rtB .
daldi2mwjh ; rtB . kfkj44nk3p = ( rtB . mmfxcblztm + rtB . aidyoivzbo ) + rtB
. atgk44qqef ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . gbfcuomzsu = ( rtB .
kfkj44nk3p >= 0.0 ) ; } rtB . cw0yilgxki = rtDW . gbfcuomzsu > 0 ? rtB .
kfkj44nk3p : - rtB . kfkj44nk3p ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
lyge1xjidb = rtB . cw0yilgxki >= rtP . D2_UpperSat ? 1 : rtB . cw0yilgxki >
rtP . D2_LowerSat ? 0 : - 1 ; } rtB . gc0ufezm40 = rtDW . lyge1xjidb == 1 ?
rtP . D2_UpperSat : rtDW . lyge1xjidb == - 1 ? rtP . D2_LowerSat : rtB .
cw0yilgxki ; { if ( ( rtDW . mh2lzbnvyc . AQHandles || rtDW . mh2lzbnvyc .
SlioLTF ) && ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW .
mh2lzbnvyc . AQHandles , rtDW . mh2lzbnvyc . SlioLTF , 0 , ssGetTaskTime (
rtS , 0 ) , ( char * ) & rtB . gc0ufezm40 + 0 ) ; } } rtB . gaax23jywc = rtX
. h5wdubnkbp ; rtB . php12pluqb = rtP . Gi3_Gain * rtB . gaax23jywc ; rtB .
hqug0gb1in = rtP . Sp3_Gain * rtU . f01of5bdla ; if ( ssIsSampleHit ( rtS , 1
, 0 ) ) { lastTime = rtB . dlgzaqgmhc [ 4 ] ; lastTime -= rtP . dFilt [ 1 ] *
rtDW . phjhcjadmq ; rtDW . lhens4aog5 = lastTime / rtP . dFilt [ 0 ] ; rtB .
ghuv4nrpe3 = rtP . nFilt [ 0 ] * rtDW . lhens4aog5 + rtP . nFilt [ 1 ] * rtDW
. phjhcjadmq ; } rtB . ddsxiam50k = rtU . f01of5bdla - rtB . ghuv4nrpe3 ; rtB
. h0ga0ulw4o = rtB . hqug0gb1in + rtB . ddsxiam50k ; rtB . otiyf2ict4 = rtP .
Gp3_Gain * rtB . h0ga0ulw4o ; if ( ( rtDW . njuj213ft1 >= ssGetT ( rtS ) ) &&
( rtDW . lzapf4uzyf >= ssGetT ( rtS ) ) ) { rtB . jvcsgidigm = 0.0 ; } else {
lastTime = rtDW . njuj213ft1 ; lastU = & rtDW . hgs1s5cbrg ; if ( rtDW .
njuj213ft1 < rtDW . lzapf4uzyf ) { if ( rtDW . lzapf4uzyf < ssGetT ( rtS ) )
{ lastTime = rtDW . lzapf4uzyf ; lastU = & rtDW . jnseaklp1y ; } } else { if
( rtDW . njuj213ft1 >= ssGetT ( rtS ) ) { lastTime = rtDW . lzapf4uzyf ;
lastU = & rtDW . jnseaklp1y ; } } rtB . jvcsgidigm = ( rtB . ddsxiam50k - *
lastU ) / ( ssGetT ( rtS ) - lastTime ) ; } rtB . grmrgx0ato = rtP . Gd3_Gain
* rtB . jvcsgidigm ; rtB . jihi4nct2b = ( rtB . php12pluqb + rtB . otiyf2ict4
) + rtB . grmrgx0ato ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . f2ti4rhiod =
( rtB . jihi4nct2b >= 0.0 ) ; } rtB . i3zdseytux = rtDW . f2ti4rhiod > 0 ?
rtB . jihi4nct2b : - rtB . jihi4nct2b ; if ( ssIsMajorTimeStep ( rtS ) ) {
rtDW . fqxwazsrki = rtB . i3zdseytux >= rtP . D3_UpperSat ? 1 : rtB .
i3zdseytux > rtP . D3_LowerSat ? 0 : - 1 ; } rtB . pen2tlbuc2 = rtDW .
fqxwazsrki == 1 ? rtP . D3_UpperSat : rtDW . fqxwazsrki == - 1 ? rtP .
D3_LowerSat : rtB . i3zdseytux ; { if ( ( rtDW . kjrs0t1nm4 . AQHandles ||
rtDW . kjrs0t1nm4 . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . kjrs0t1nm4 . AQHandles , rtDW . kjrs0t1nm4 .
SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB . pen2tlbuc2 + 0 )
; } } rtB . etclrumkes = rtX . pdkkwspnr1 ; rtB . ps1m5ri5j1 = rtP . Gi4_Gain
* rtB . etclrumkes ; rtB . ejgueusult = rtP . Sp4_Gain * rtU . lnvmafogi2 ;
if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { lastTime = rtB . dlgzaqgmhc [ 6 ] ;
lastTime -= rtP . dFilt [ 1 ] * rtDW . ea2ghjrony ; rtDW . f4jjebddb5 =
lastTime / rtP . dFilt [ 0 ] ; rtB . ljrewaf2lo = rtP . nFilt [ 0 ] * rtDW .
f4jjebddb5 + rtP . nFilt [ 1 ] * rtDW . ea2ghjrony ; } rtB . f2w1fqz5qt = rtU
. lnvmafogi2 - rtB . ljrewaf2lo ; rtB . iqi5uemowu = rtB . ejgueusult + rtB .
f2w1fqz5qt ; rtB . ebkbzp4ifa = rtP . Gp4_Gain * rtB . iqi5uemowu ; if ( (
rtDW . lwhxhj0cgm >= ssGetT ( rtS ) ) && ( rtDW . jz4witzby0 >= ssGetT ( rtS
) ) ) { rtB . cd0jqvz3v1 = 0.0 ; } else { lastTime = rtDW . lwhxhj0cgm ;
lastU = & rtDW . ospktyrmu3 ; if ( rtDW . lwhxhj0cgm < rtDW . jz4witzby0 ) {
if ( rtDW . jz4witzby0 < ssGetT ( rtS ) ) { lastTime = rtDW . jz4witzby0 ;
lastU = & rtDW . ku4umw2hdw ; } } else { if ( rtDW . lwhxhj0cgm >= ssGetT (
rtS ) ) { lastTime = rtDW . jz4witzby0 ; lastU = & rtDW . ku4umw2hdw ; } }
rtB . cd0jqvz3v1 = ( rtB . f2w1fqz5qt - * lastU ) / ( ssGetT ( rtS ) -
lastTime ) ; } rtB . oiq4fammfn = rtP . Gd4_Gain * rtB . cd0jqvz3v1 ; rtB .
nji1qqccll = ( rtB . ps1m5ri5j1 + rtB . ebkbzp4ifa ) + rtB . oiq4fammfn ; if
( ssIsMajorTimeStep ( rtS ) ) { rtDW . frhwhsikv5 = ( rtB . nji1qqccll >= 0.0
) ; } rtB . aqydko43rs = rtDW . frhwhsikv5 > 0 ? rtB . nji1qqccll : - rtB .
nji1qqccll ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . ojsecf1orb = rtB .
aqydko43rs >= rtP . D4_UpperSat ? 1 : rtB . aqydko43rs > rtP . D4_LowerSat ?
0 : - 1 ; } rtB . a52ganzccv = rtDW . ojsecf1orb == 1 ? rtP . D4_UpperSat :
rtDW . ojsecf1orb == - 1 ? rtP . D4_LowerSat : rtB . aqydko43rs ; { if ( (
rtDW . dautlnn30u . AQHandles || rtDW . dautlnn30u . SlioLTF ) &&
ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . dautlnn30u .
AQHandles , rtDW . dautlnn30u . SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , (
char * ) & rtB . a52ganzccv + 0 ) ; } } rtB . pwffmskdll = rtX . l1zc10gh5a ;
rtB . iz0c33tt3q = rtP . Gi5_Gain * rtB . pwffmskdll ; rtB . ltooszp1wf = rtP
. Sp5_Gain * rtU . b3tikeyk0u ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
lastTime = rtB . dlgzaqgmhc [ 8 ] ; lastTime -= rtP . dFilt [ 1 ] * rtDW .
o3hjuvp5p4 ; rtDW . eh4fvnrcpe = lastTime / rtP . dFilt [ 0 ] ; rtB .
jv05vc0wdl = rtP . nFilt [ 0 ] * rtDW . eh4fvnrcpe + rtP . nFilt [ 1 ] * rtDW
. o3hjuvp5p4 ; } rtB . fzulu4txkm = rtU . b3tikeyk0u - rtB . jv05vc0wdl ; rtB
. ngc2vhkcvx = rtB . ltooszp1wf + rtB . fzulu4txkm ; rtB . f5npikm4p2 = rtP .
Gp5_Gain * rtB . ngc2vhkcvx ; if ( ( rtDW . lhvgthtwgl >= ssGetT ( rtS ) ) &&
( rtDW . hqk0upav5k >= ssGetT ( rtS ) ) ) { rtB . nyfblsqmlt = 0.0 ; } else {
lastTime = rtDW . lhvgthtwgl ; lastU = & rtDW . hahir0y4uj ; if ( rtDW .
lhvgthtwgl < rtDW . hqk0upav5k ) { if ( rtDW . hqk0upav5k < ssGetT ( rtS ) )
{ lastTime = rtDW . hqk0upav5k ; lastU = & rtDW . pneozxjlkn ; } } else { if
( rtDW . lhvgthtwgl >= ssGetT ( rtS ) ) { lastTime = rtDW . hqk0upav5k ;
lastU = & rtDW . pneozxjlkn ; } } rtB . nyfblsqmlt = ( rtB . fzulu4txkm - *
lastU ) / ( ssGetT ( rtS ) - lastTime ) ; } rtB . che1xa0shi = rtP . Gd5_Gain
* rtB . nyfblsqmlt ; rtB . c1p1nl5zha = ( rtB . iz0c33tt3q + rtB . f5npikm4p2
) + rtB . che1xa0shi ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . ianxcwejev =
( rtB . c1p1nl5zha >= 0.0 ) ; } rtB . cvhnksc212 = rtDW . ianxcwejev > 0 ?
rtB . c1p1nl5zha : - rtB . c1p1nl5zha ; if ( ssIsMajorTimeStep ( rtS ) ) {
rtDW . nigubjutdn = rtB . cvhnksc212 >= rtP . D5_UpperSat ? 1 : rtB .
cvhnksc212 > rtP . D5_LowerSat ? 0 : - 1 ; } rtB . oavnyz4xex = rtDW .
nigubjutdn == 1 ? rtP . D5_UpperSat : rtDW . nigubjutdn == - 1 ? rtP .
D5_LowerSat : rtB . cvhnksc212 ; { if ( ( rtDW . kvbjdddl4n . AQHandles ||
rtDW . kvbjdddl4n . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . kvbjdddl4n . AQHandles , rtDW . kvbjdddl4n .
SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB . oavnyz4xex + 0 )
; } } rtB . lqbtlsqcxh = rtX . kmsnf4jarc ; rtB . nqyjzjhqbz = rtP . Gi6_Gain
* rtB . lqbtlsqcxh ; rtB . jgvdzme2mo = rtP . Sp6_Gain * rtU . jhowxmdxl0 ;
if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { lastTime = rtB . dlgzaqgmhc [ 10 ] ;
lastTime -= rtP . dFilt [ 1 ] * rtDW . mfo0m5mdmb ; rtDW . oep4q2a05l =
lastTime / rtP . dFilt [ 0 ] ; rtB . okyvttk103 = rtP . nFilt [ 0 ] * rtDW .
oep4q2a05l + rtP . nFilt [ 1 ] * rtDW . mfo0m5mdmb ; } rtB . puv1ifcb43 = rtU
. jhowxmdxl0 - rtB . okyvttk103 ; rtB . ctvpv2ept2 = rtB . jgvdzme2mo + rtB .
puv1ifcb43 ; rtB . hgdvmrnotw = rtP . Gp6_Gain * rtB . ctvpv2ept2 ; if ( (
rtDW . adymbo4t3h >= ssGetT ( rtS ) ) && ( rtDW . axlsmtzflm >= ssGetT ( rtS
) ) ) { rtB . eq4gdqwc1e = 0.0 ; } else { lastTime = rtDW . adymbo4t3h ;
lastU = & rtDW . ir1daw3liz ; if ( rtDW . adymbo4t3h < rtDW . axlsmtzflm ) {
if ( rtDW . axlsmtzflm < ssGetT ( rtS ) ) { lastTime = rtDW . axlsmtzflm ;
lastU = & rtDW . bhpq141ewe ; } } else { if ( rtDW . adymbo4t3h >= ssGetT (
rtS ) ) { lastTime = rtDW . axlsmtzflm ; lastU = & rtDW . bhpq141ewe ; } }
rtB . eq4gdqwc1e = ( rtB . puv1ifcb43 - * lastU ) / ( ssGetT ( rtS ) -
lastTime ) ; } rtB . amm0am250j = rtP . Gd6_Gain * rtB . eq4gdqwc1e ; rtB .
apuphxyrha = ( rtB . nqyjzjhqbz + rtB . hgdvmrnotw ) + rtB . amm0am250j ; if
( ssIsMajorTimeStep ( rtS ) ) { rtDW . cszj3qgv5l = ( rtB . apuphxyrha >= 0.0
) ; } rtB . b11x1b5dds = rtDW . cszj3qgv5l > 0 ? rtB . apuphxyrha : - rtB .
apuphxyrha ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . mrgke35tge = rtB .
b11x1b5dds >= rtP . D6_UpperSat ? 1 : rtB . b11x1b5dds > rtP . D6_LowerSat ?
0 : - 1 ; } rtB . kmphhlf0c0 = rtDW . mrgke35tge == 1 ? rtP . D6_UpperSat :
rtDW . mrgke35tge == - 1 ? rtP . D6_LowerSat : rtB . b11x1b5dds ; { if ( (
rtDW . ava0ojyjuv . AQHandles || rtDW . ava0ojyjuv . SlioLTF ) &&
ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . ava0ojyjuv .
AQHandles , rtDW . ava0ojyjuv . SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , (
char * ) & rtB . kmphhlf0c0 + 0 ) ; } } { if ( ( rtDW . ps3yjeqnel .
AQHandles || rtDW . ps3yjeqnel . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . ps3yjeqnel . AQHandles , rtDW . ps3yjeqnel .
SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB . lnddeflvkv + 0 )
; } } { if ( ( rtDW . gl0wpxzu2q . AQHandles || rtDW . gl0wpxzu2q . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . gl0wpxzu2q .
AQHandles , rtDW . gl0wpxzu2q . SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , (
char * ) & rtB . atgk44qqef + 0 ) ; } } { if ( ( rtDW . oicd0ngvav .
AQHandles || rtDW . oicd0ngvav . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . oicd0ngvav . AQHandles , rtDW . oicd0ngvav .
SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB . grmrgx0ato + 0 )
; } } { if ( ( rtDW . ptm21fclna . AQHandles || rtDW . ptm21fclna . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . ptm21fclna .
AQHandles , rtDW . ptm21fclna . SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , (
char * ) & rtB . oiq4fammfn + 0 ) ; } } { if ( ( rtDW . oqhwzcjbbx .
AQHandles || rtDW . oqhwzcjbbx . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . oqhwzcjbbx . AQHandles , rtDW . oqhwzcjbbx .
SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB . che1xa0shi + 0 )
; } } { if ( ( rtDW . mkhdp3gdkd . AQHandles || rtDW . mkhdp3gdkd . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . mkhdp3gdkd .
AQHandles , rtDW . mkhdp3gdkd . SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , (
char * ) & rtB . amm0am250j + 0 ) ; } } { if ( ( rtDW . e2gcoq4oqe .
AQHandles || rtDW . e2gcoq4oqe . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . e2gcoq4oqe . AQHandles , rtDW . e2gcoq4oqe .
SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB . kyvfepmlch + 0 )
; } } { if ( ( rtDW . h22loax0ke . AQHandles || rtDW . h22loax0ke . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . h22loax0ke .
AQHandles , rtDW . h22loax0ke . SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , (
char * ) & rtB . mmfxcblztm + 0 ) ; } } { if ( ( rtDW . as0djmc41t .
AQHandles || rtDW . as0djmc41t . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . as0djmc41t . AQHandles , rtDW . as0djmc41t .
SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB . php12pluqb + 0 )
; } } { if ( ( rtDW . ejymxznzxh . AQHandles || rtDW . ejymxznzxh . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . ejymxznzxh .
AQHandles , rtDW . ejymxznzxh . SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , (
char * ) & rtB . ps1m5ri5j1 + 0 ) ; } } { if ( ( rtDW . o1kxnuxpyj .
AQHandles || rtDW . o1kxnuxpyj . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . o1kxnuxpyj . AQHandles , rtDW . o1kxnuxpyj .
SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB . iz0c33tt3q + 0 )
; } } { if ( ( rtDW . bxxgxkrr2c . AQHandles || rtDW . bxxgxkrr2c . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . bxxgxkrr2c .
AQHandles , rtDW . bxxgxkrr2c . SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , (
char * ) & rtB . nqyjzjhqbz + 0 ) ; } } { if ( ( rtDW . kfd3qrvgfd .
AQHandles || rtDW . kfd3qrvgfd . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . kfd3qrvgfd . AQHandles , rtDW . kfd3qrvgfd .
SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB . kzvnckcdot + 0 )
; } } { if ( ( rtDW . igwari5mqz . AQHandles || rtDW . igwari5mqz . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . igwari5mqz .
AQHandles , rtDW . igwari5mqz . SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , (
char * ) & rtB . aidyoivzbo + 0 ) ; } } { if ( ( rtDW . ewqrtgdvx2 .
AQHandles || rtDW . ewqrtgdvx2 . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . ewqrtgdvx2 . AQHandles , rtDW . ewqrtgdvx2 .
SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB . otiyf2ict4 + 0 )
; } } { if ( ( rtDW . dsgwphpbza . AQHandles || rtDW . dsgwphpbza . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . dsgwphpbza .
AQHandles , rtDW . dsgwphpbza . SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , (
char * ) & rtB . ebkbzp4ifa + 0 ) ; } } { if ( ( rtDW . aw4efzdd4c .
AQHandles || rtDW . aw4efzdd4c . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . aw4efzdd4c . AQHandles , rtDW . aw4efzdd4c .
SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB . f5npikm4p2 + 0 )
; } } { if ( ( rtDW . be53dny0c5 . AQHandles || rtDW . be53dny0c5 . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . be53dny0c5 .
AQHandles , rtDW . be53dny0c5 . SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , (
char * ) & rtB . hgdvmrnotw + 0 ) ; } } rtB . jkyfhps0ke = ( real_T ) ( rtB .
cicsqsen0r < 0.0 ) * rtP . R1_Gain ; { if ( ( rtDW . kq3yodl2bt . AQHandles
|| rtDW . kq3yodl2bt . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . kq3yodl2bt . AQHandles , rtDW . kq3yodl2bt .
SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB . jkyfhps0ke + 0 )
; } } rtB . f4mz34xjdw = ( real_T ) ( rtB . kfkj44nk3p < 0.0 ) * rtP .
R2_Gain ; { if ( ( rtDW . ebjpqr4c4g . AQHandles || rtDW . ebjpqr4c4g .
SlioLTF ) && ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW .
ebjpqr4c4g . AQHandles , rtDW . ebjpqr4c4g . SlioLTF , 0 , ssGetTaskTime (
rtS , 0 ) , ( char * ) & rtB . f4mz34xjdw + 0 ) ; } } rtB . b0nvbtvute = (
real_T ) ( rtB . jihi4nct2b < 0.0 ) * rtP . R3_Gain ; { if ( ( rtDW .
ptu5jdgl35 . AQHandles || rtDW . ptu5jdgl35 . SlioLTF ) && ssGetLogOutput (
rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . ptu5jdgl35 . AQHandles , rtDW .
ptu5jdgl35 . SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB .
b0nvbtvute + 0 ) ; } } rtB . kwvtqc24nn = ( real_T ) ( rtB . nji1qqccll < 0.0
) * rtP . R4_Gain ; { if ( ( rtDW . ilijwxnun0 . AQHandles || rtDW .
ilijwxnun0 . SlioLTF ) && ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal (
rtDW . ilijwxnun0 . AQHandles , rtDW . ilijwxnun0 . SlioLTF , 0 ,
ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB . kwvtqc24nn + 0 ) ; } } rtB .
bccvxfaqok = ( real_T ) ( rtB . c1p1nl5zha < 0.0 ) * rtP . R5_Gain ; { if ( (
rtDW . odqw4yty3p . AQHandles || rtDW . odqw4yty3p . SlioLTF ) &&
ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . odqw4yty3p .
AQHandles , rtDW . odqw4yty3p . SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , (
char * ) & rtB . bccvxfaqok + 0 ) ; } } rtB . i1zzbavhbp = ( real_T ) ( rtB .
apuphxyrha < 0.0 ) * rtP . R6_Gain ; { if ( ( rtDW . kzjcgmt1r3 . AQHandles
|| rtDW . kzjcgmt1r3 . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . kzjcgmt1r3 . AQHandles , rtDW . kzjcgmt1r3 .
SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB . i1zzbavhbp + 0 )
; } } { if ( ( rtDW . f2efmur0hp . AQHandles || rtDW . f2efmur0hp . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . f2efmur0hp .
AQHandles , rtDW . f2efmur0hp . SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , (
char * ) & rtB . dlgzaqgmhc [ 0 ] + 0 ) ; } } { if ( ( rtDW . mskhnw4qrr .
AQHandles || rtDW . mskhnw4qrr . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . mskhnw4qrr . AQHandles , rtDW . mskhnw4qrr .
SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB . dlgzaqgmhc [ 2 ]
+ 0 ) ; } } { if ( ( rtDW . d3ef2qdubj . AQHandles || rtDW . d3ef2qdubj .
SlioLTF ) && ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW .
d3ef2qdubj . AQHandles , rtDW . d3ef2qdubj . SlioLTF , 0 , ssGetTaskTime (
rtS , 0 ) , ( char * ) & rtB . dlgzaqgmhc [ 4 ] + 0 ) ; } } { if ( ( rtDW .
dg12hpmswq . AQHandles || rtDW . dg12hpmswq . SlioLTF ) && ssGetLogOutput (
rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . dg12hpmswq . AQHandles , rtDW .
dg12hpmswq . SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB .
dlgzaqgmhc [ 6 ] + 0 ) ; } } { if ( ( rtDW . kx25qhu3r4 . AQHandles || rtDW .
kx25qhu3r4 . SlioLTF ) && ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal (
rtDW . kx25qhu3r4 . AQHandles , rtDW . kx25qhu3r4 . SlioLTF , 0 ,
ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB . dlgzaqgmhc [ 8 ] + 0 ) ; } } {
if ( ( rtDW . monl4eukr3 . AQHandles || rtDW . monl4eukr3 . SlioLTF ) &&
ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . monl4eukr3 .
AQHandles , rtDW . monl4eukr3 . SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , (
char * ) & rtB . dlgzaqgmhc [ 10 ] + 0 ) ; } } { if ( ( rtDW . ngtywitjou .
AQHandles || rtDW . ngtywitjou . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . ngtywitjou . AQHandles , rtDW . ngtywitjou .
SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB . a4h4awrudh + 0 )
; } } { if ( ( rtDW . l4k2ljdewv . AQHandles || rtDW . l4k2ljdewv . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . l4k2ljdewv .
AQHandles , rtDW . l4k2ljdewv . SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , (
char * ) & rtB . fnevqel4sp + 0 ) ; } } { if ( ( rtDW . blegl3r340 .
AQHandles || rtDW . blegl3r340 . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . blegl3r340 . AQHandles , rtDW . blegl3r340 .
SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB . hqug0gb1in + 0 )
; } } { if ( ( rtDW . ppjxynpq1c . AQHandles || rtDW . ppjxynpq1c . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . ppjxynpq1c .
AQHandles , rtDW . ppjxynpq1c . SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , (
char * ) & rtB . ejgueusult + 0 ) ; } } { if ( ( rtDW . erbnwcwrj1 .
AQHandles || rtDW . erbnwcwrj1 . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . erbnwcwrj1 . AQHandles , rtDW . erbnwcwrj1 .
SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB . ltooszp1wf + 0 )
; } } { if ( ( rtDW . kx4roesdqx . AQHandles || rtDW . kx4roesdqx . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . kx4roesdqx .
AQHandles , rtDW . kx4roesdqx . SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , (
char * ) & rtB . jgvdzme2mo + 0 ) ; } } { if ( ( rtDW . ejuuwrge5c .
AQHandles || rtDW . ejuuwrge5c . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . ejuuwrge5c . AQHandles , rtDW . ejuuwrge5c .
SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtU . oaqp25vha4 + 0 )
; } } { if ( ( rtDW . mtedhvdhqd . AQHandles || rtDW . mtedhvdhqd . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . mtedhvdhqd .
AQHandles , rtDW . mtedhvdhqd . SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , (
char * ) & rtU . f01of5bdla + 0 ) ; } } { if ( ( rtDW . jg2vujfrzo .
AQHandles || rtDW . jg2vujfrzo . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . jg2vujfrzo . AQHandles , rtDW . jg2vujfrzo .
SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtU . jhowxmdxl0 + 0 )
; } } { if ( ( rtDW . g5kyzenj0k . AQHandles || rtDW . g5kyzenj0k . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . g5kyzenj0k .
AQHandles , rtDW . g5kyzenj0k . SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , (
char * ) & rtU . b3tikeyk0u + 0 ) ; } } { if ( ( rtDW . larmidhtrj .
AQHandles || rtDW . larmidhtrj . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . larmidhtrj . AQHandles , rtDW . larmidhtrj .
SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtU . czzusp55mg + 0 )
; } } { if ( ( rtDW . co45xeckac . AQHandles || rtDW . co45xeckac . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . co45xeckac .
AQHandles , rtDW . co45xeckac . SlioLTF , 0 , ssGetTaskTime ( rtS , 0 ) , (
char * ) & rtU . lnvmafogi2 + 0 ) ; } } rtB . lgamsddxfw [ 0 ] = rtB .
dlgzaqgmhc [ 1 ] ; rtB . lgamsddxfw [ 1 ] = 0.0 ; rtB . lgamsddxfw [ 2 ] =
0.0 ; rtB . lgamsddxfw [ 3 ] = 0.0 ; rtB . mmt4jv2djd [ 0 ] = rtB .
fllne2ej2o ; rtB . mmt4jv2djd [ 1 ] = 0.0 ; rtB . mmt4jv2djd [ 2 ] = 0.0 ;
rtB . mmt4jv2djd [ 3 ] = 0.0 ; rtB . pzylr3xzgl [ 0 ] = rtB . gudjnx4gli ;
rtB . pzylr3xzgl [ 1 ] = 0.0 ; rtB . pzylr3xzgl [ 2 ] = 0.0 ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . moim2kzboo [ 0 ] = ! ( rtB . pzylr3xzgl
[ 0 ] == rtDW . moim2kzboo [ 1 ] ) ; rtDW . moim2kzboo [ 1 ] = rtB .
pzylr3xzgl [ 0 ] ; } rtB . pzylr3xzgl [ 0 ] = rtDW . moim2kzboo [ 1 ] ; rtB .
pzylr3xzgl [ 3 ] = rtDW . moim2kzboo [ 0 ] ; rtB . os31fqwjpr [ 0 ] = rtB .
jkyfhps0ke ; rtB . os31fqwjpr [ 1 ] = 0.0 ; rtB . os31fqwjpr [ 2 ] = 0.0 ;
rtB . os31fqwjpr [ 3 ] = 0.0 ; simulationData = ( NeslSimulationData * ) rtDW
. hcrcwgbmvq ; time_e = ssGetT ( rtS ) ; simulationData -> mData -> mTime .
mN = 1 ; simulationData -> mData -> mTime . mX = & time_e ; simulationData ->
mData -> mContStates . mN = 4 ; simulationData -> mData -> mContStates . mX =
& rtX . pziburvfat [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . lz0ilv4wwe ;
simulationData -> mData -> mModeVector . mN = 5 ; simulationData -> mData ->
mModeVector . mX = & rtDW . bqqyvce3il [ 0 ] ; tmp = ( ssIsMajorTimeStep (
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
0 ] = 0 ; tmp_g [ 0 ] = rtB . mmt4jv2djd [ 0 ] ; tmp_g [ 1 ] = rtB .
mmt4jv2djd [ 1 ] ; tmp_g [ 2 ] = rtB . mmt4jv2djd [ 2 ] ; tmp_g [ 3 ] = rtB .
mmt4jv2djd [ 3 ] ; tmp_j [ 1 ] = 4 ; tmp_g [ 4 ] = rtB . pzylr3xzgl [ 0 ] ;
tmp_g [ 5 ] = rtB . pzylr3xzgl [ 1 ] ; tmp_g [ 6 ] = rtB . pzylr3xzgl [ 2 ] ;
tmp_g [ 7 ] = rtB . pzylr3xzgl [ 3 ] ; tmp_j [ 2 ] = 8 ; tmp_g [ 8 ] = rtB .
os31fqwjpr [ 0 ] ; tmp_g [ 9 ] = rtB . os31fqwjpr [ 1 ] ; tmp_g [ 10 ] = rtB
. os31fqwjpr [ 2 ] ; tmp_g [ 11 ] = rtB . os31fqwjpr [ 3 ] ; tmp_j [ 3 ] = 12
; tmp_g [ 12 ] = rtB . lgamsddxfw [ 0 ] ; tmp_g [ 13 ] = rtB . lgamsddxfw [ 1
] ; tmp_g [ 14 ] = rtB . lgamsddxfw [ 2 ] ; tmp_g [ 15 ] = rtB . lgamsddxfw [
3 ] ; tmp_j [ 4 ] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ;
simulationData -> mData -> mInputValues . mX = & tmp_g [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_j [ 0 ] ; simulationData -> mData -> mOutputs . mN = 9 ;
simulationData -> mData -> mOutputs . mX = & rtB . myphwxfnds [ 0 ] ;
simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData ->
mSampleHits . mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit
= false ; simulationData -> mData -> mTolerances . mN = 0 ; simulationData ->
mData -> mTolerances . mX = NULL ; simulationData -> mData ->
mCstateHasChanged = false ; diagnosticManager = ( NeuDiagnosticManager * )
rtDW . az1yo1muxe ; diagnosticTree = neu_diagnostic_manager_get_initial_tree
( diagnosticManager ) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW .
ocpy12p22k , NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . kwq3so20nv ; time_i = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_i ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . bmklrdesul ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . bf15x1kmhl ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_c [ 0 ] = 0 ;
tmp_f [ 0 ] = rtB . mmt4jv2djd [ 0 ] ; tmp_f [ 1 ] = rtB . mmt4jv2djd [ 1 ] ;
tmp_f [ 2 ] = rtB . mmt4jv2djd [ 2 ] ; tmp_f [ 3 ] = rtB . mmt4jv2djd [ 3 ] ;
tmp_c [ 1 ] = 4 ; tmp_f [ 4 ] = rtB . pzylr3xzgl [ 0 ] ; tmp_f [ 5 ] = rtB .
pzylr3xzgl [ 1 ] ; tmp_f [ 6 ] = rtB . pzylr3xzgl [ 2 ] ; tmp_f [ 7 ] = rtB .
pzylr3xzgl [ 3 ] ; tmp_c [ 2 ] = 8 ; tmp_f [ 8 ] = rtB . os31fqwjpr [ 0 ] ;
tmp_f [ 9 ] = rtB . os31fqwjpr [ 1 ] ; tmp_f [ 10 ] = rtB . os31fqwjpr [ 2 ]
; tmp_f [ 11 ] = rtB . os31fqwjpr [ 3 ] ; tmp_c [ 3 ] = 12 ; tmp_f [ 12 ] =
rtB . lgamsddxfw [ 0 ] ; tmp_f [ 13 ] = rtB . lgamsddxfw [ 1 ] ; tmp_f [ 14 ]
= rtB . lgamsddxfw [ 2 ] ; tmp_f [ 15 ] = rtB . lgamsddxfw [ 3 ] ; tmp_c [ 4
] = 16 ; memcpy ( & tmp_f [ 16 ] , & rtB . myphwxfnds [ 0 ] , 9U * sizeof (
real_T ) ) ; tmp_c [ 5 ] = 25 ; simulationData -> mData -> mInputValues . mN
= 25 ; simulationData -> mData -> mInputValues . mX = & tmp_f [ 0 ] ;
simulationData -> mData -> mInputOffsets . mN = 6 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_c [ 0 ] ; simulationData -> mData -> mOutputs .
mN = 1 ; simulationData -> mData -> mOutputs . mX = & rtB . gq0aoqqtfi ;
simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData ->
mSampleHits . mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit
= false ; simulationData -> mData -> mTolerances . mN = 0 ; simulationData ->
mData -> mTolerances . mX = NULL ; simulationData -> mData ->
mCstateHasChanged = false ; diagnosticManager = ( NeuDiagnosticManager * )
rtDW . dw4pbexevd ; diagnosticTree = neu_diagnostic_manager_get_initial_tree
( diagnosticManager ) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW .
esa01bvjvm , NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtB . gsxwzsrgs3 [ 0 ] = rtB . gq0aoqqtfi ; rtB . gsxwzsrgs3 [ 1 ] = 0.0 ;
rtB . gsxwzsrgs3 [ 2 ] = 0.0 ; rtB . gsxwzsrgs3 [ 3 ] = 0.0 ; rtB .
amckjsk01h [ 0 ] = rtB . dlgzaqgmhc [ 3 ] ; rtB . amckjsk01h [ 1 ] = 0.0 ;
rtB . amckjsk01h [ 2 ] = 0.0 ; rtB . amckjsk01h [ 3 ] = 0.0 ; rtB .
cxyv2au2fy [ 0 ] = rtB . gc0ufezm40 ; rtB . cxyv2au2fy [ 1 ] = 0.0 ; rtB .
cxyv2au2fy [ 2 ] = 0.0 ; rtB . cxyv2au2fy [ 3 ] = 0.0 ; rtB . b0pjn0qe1a [ 0
] = rtB . bxxre2130j ; rtB . b0pjn0qe1a [ 1 ] = 0.0 ; rtB . b0pjn0qe1a [ 2 ]
= 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . luph5aup2b [ 0 ] = ! ( rtB
. b0pjn0qe1a [ 0 ] == rtDW . luph5aup2b [ 1 ] ) ; rtDW . luph5aup2b [ 1 ] =
rtB . b0pjn0qe1a [ 0 ] ; } rtB . b0pjn0qe1a [ 0 ] = rtDW . luph5aup2b [ 1 ] ;
rtB . b0pjn0qe1a [ 3 ] = rtDW . luph5aup2b [ 0 ] ; rtB . l5pujcrulu [ 0 ] =
rtB . gc0ufezm40 ; rtB . l5pujcrulu [ 1 ] = 0.0 ; rtB . l5pujcrulu [ 2 ] =
0.0 ; rtB . l5pujcrulu [ 3 ] = 0.0 ; rtB . b2vobw2amc [ 0 ] = rtB .
f4mz34xjdw ; rtB . b2vobw2amc [ 1 ] = 0.0 ; rtB . b2vobw2amc [ 2 ] = 0.0 ;
rtB . b2vobw2amc [ 3 ] = 0.0 ; rtB . c4ncjpj4p3 [ 0 ] = rtB . bxxre2130j ;
rtB . c4ncjpj4p3 [ 1 ] = 0.0 ; rtB . c4ncjpj4p3 [ 2 ] = 0.0 ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . at2tnnhgl4 [ 0 ] = ! ( rtB . c4ncjpj4p3
[ 0 ] == rtDW . at2tnnhgl4 [ 1 ] ) ; rtDW . at2tnnhgl4 [ 1 ] = rtB .
c4ncjpj4p3 [ 0 ] ; } rtB . c4ncjpj4p3 [ 0 ] = rtDW . at2tnnhgl4 [ 1 ] ; rtB .
c4ncjpj4p3 [ 3 ] = rtDW . at2tnnhgl4 [ 0 ] ; rtB . hbxx3xyytn [ 0 ] = rtB .
f4mz34xjdw ; rtB . hbxx3xyytn [ 1 ] = 0.0 ; rtB . hbxx3xyytn [ 2 ] = 0.0 ;
rtB . hbxx3xyytn [ 3 ] = 0.0 ; simulationData = ( NeslSimulationData * ) rtDW
. dmsckoggfy ; time_m = ssGetT ( rtS ) ; simulationData -> mData -> mTime .
mN = 1 ; simulationData -> mData -> mTime . mX = & time_m ; simulationData ->
mData -> mContStates . mN = 8 ; simulationData -> mData -> mContStates . mX =
& rtX . ixvwzsiq3g [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . dxsqzsmbnr ;
simulationData -> mData -> mModeVector . mN = 10 ; simulationData -> mData ->
mModeVector . mX = & rtDW . glcb0crgzp [ 0 ] ; tmp = ( ssIsMajorTimeStep (
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
0 ] = 0 ; tmp_k [ 0 ] = rtB . cxyv2au2fy [ 0 ] ; tmp_k [ 1 ] = rtB .
cxyv2au2fy [ 1 ] ; tmp_k [ 2 ] = rtB . cxyv2au2fy [ 2 ] ; tmp_k [ 3 ] = rtB .
cxyv2au2fy [ 3 ] ; tmp_b [ 1 ] = 4 ; tmp_k [ 4 ] = rtB . b0pjn0qe1a [ 0 ] ;
tmp_k [ 5 ] = rtB . b0pjn0qe1a [ 1 ] ; tmp_k [ 6 ] = rtB . b0pjn0qe1a [ 2 ] ;
tmp_k [ 7 ] = rtB . b0pjn0qe1a [ 3 ] ; tmp_b [ 2 ] = 8 ; tmp_k [ 8 ] = rtB .
l5pujcrulu [ 0 ] ; tmp_k [ 9 ] = rtB . l5pujcrulu [ 1 ] ; tmp_k [ 10 ] = rtB
. l5pujcrulu [ 2 ] ; tmp_k [ 11 ] = rtB . l5pujcrulu [ 3 ] ; tmp_b [ 3 ] = 12
; tmp_k [ 12 ] = rtB . b2vobw2amc [ 0 ] ; tmp_k [ 13 ] = rtB . b2vobw2amc [ 1
] ; tmp_k [ 14 ] = rtB . b2vobw2amc [ 2 ] ; tmp_k [ 15 ] = rtB . b2vobw2amc [
3 ] ; tmp_b [ 4 ] = 16 ; tmp_k [ 16 ] = rtB . c4ncjpj4p3 [ 0 ] ; tmp_k [ 17 ]
= rtB . c4ncjpj4p3 [ 1 ] ; tmp_k [ 18 ] = rtB . c4ncjpj4p3 [ 2 ] ; tmp_k [ 19
] = rtB . c4ncjpj4p3 [ 3 ] ; tmp_b [ 5 ] = 20 ; tmp_k [ 20 ] = rtB .
hbxx3xyytn [ 0 ] ; tmp_k [ 21 ] = rtB . hbxx3xyytn [ 1 ] ; tmp_k [ 22 ] = rtB
. hbxx3xyytn [ 2 ] ; tmp_k [ 23 ] = rtB . hbxx3xyytn [ 3 ] ; tmp_b [ 6 ] = 24
; tmp_k [ 24 ] = rtB . amckjsk01h [ 0 ] ; tmp_k [ 25 ] = rtB . amckjsk01h [ 1
] ; tmp_k [ 26 ] = rtB . amckjsk01h [ 2 ] ; tmp_k [ 27 ] = rtB . amckjsk01h [
3 ] ; tmp_b [ 7 ] = 28 ; simulationData -> mData -> mInputValues . mN = 28 ;
simulationData -> mData -> mInputValues . mX = & tmp_k [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 8 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_b [ 0 ] ; simulationData -> mData -> mOutputs . mN = 18 ;
simulationData -> mData -> mOutputs . mX = & rtB . puxn2q3jes [ 0 ] ;
simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData ->
mSampleHits . mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit
= false ; simulationData -> mData -> mTolerances . mN = 0 ; simulationData ->
mData -> mTolerances . mX = NULL ; simulationData -> mData ->
mCstateHasChanged = false ; diagnosticManager = ( NeuDiagnosticManager * )
rtDW . bkxjnhwg4q ; diagnosticTree = neu_diagnostic_manager_get_initial_tree
( diagnosticManager ) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW .
ajpv151fp2 , NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . gq1bwlllvx ; time_g = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_g ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . itz0oanntq ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . haqsbpukj2 ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_l [ 0 ] = 0 ;
tmp_n [ 0 ] = rtB . cxyv2au2fy [ 0 ] ; tmp_n [ 1 ] = rtB . cxyv2au2fy [ 1 ] ;
tmp_n [ 2 ] = rtB . cxyv2au2fy [ 2 ] ; tmp_n [ 3 ] = rtB . cxyv2au2fy [ 3 ] ;
tmp_l [ 1 ] = 4 ; tmp_n [ 4 ] = rtB . b0pjn0qe1a [ 0 ] ; tmp_n [ 5 ] = rtB .
b0pjn0qe1a [ 1 ] ; tmp_n [ 6 ] = rtB . b0pjn0qe1a [ 2 ] ; tmp_n [ 7 ] = rtB .
b0pjn0qe1a [ 3 ] ; tmp_l [ 2 ] = 8 ; tmp_n [ 8 ] = rtB . l5pujcrulu [ 0 ] ;
tmp_n [ 9 ] = rtB . l5pujcrulu [ 1 ] ; tmp_n [ 10 ] = rtB . l5pujcrulu [ 2 ]
; tmp_n [ 11 ] = rtB . l5pujcrulu [ 3 ] ; tmp_l [ 3 ] = 12 ; tmp_n [ 12 ] =
rtB . b2vobw2amc [ 0 ] ; tmp_n [ 13 ] = rtB . b2vobw2amc [ 1 ] ; tmp_n [ 14 ]
= rtB . b2vobw2amc [ 2 ] ; tmp_n [ 15 ] = rtB . b2vobw2amc [ 3 ] ; tmp_l [ 4
] = 16 ; tmp_n [ 16 ] = rtB . c4ncjpj4p3 [ 0 ] ; tmp_n [ 17 ] = rtB .
c4ncjpj4p3 [ 1 ] ; tmp_n [ 18 ] = rtB . c4ncjpj4p3 [ 2 ] ; tmp_n [ 19 ] = rtB
. c4ncjpj4p3 [ 3 ] ; tmp_l [ 5 ] = 20 ; tmp_n [ 20 ] = rtB . hbxx3xyytn [ 0 ]
; tmp_n [ 21 ] = rtB . hbxx3xyytn [ 1 ] ; tmp_n [ 22 ] = rtB . hbxx3xyytn [ 2
] ; tmp_n [ 23 ] = rtB . hbxx3xyytn [ 3 ] ; tmp_l [ 6 ] = 24 ; tmp_n [ 24 ] =
rtB . amckjsk01h [ 0 ] ; tmp_n [ 25 ] = rtB . amckjsk01h [ 1 ] ; tmp_n [ 26 ]
= rtB . amckjsk01h [ 2 ] ; tmp_n [ 27 ] = rtB . amckjsk01h [ 3 ] ; tmp_l [ 7
] = 28 ; memcpy ( & tmp_n [ 28 ] , & rtB . puxn2q3jes [ 0 ] , 18U * sizeof (
real_T ) ) ; tmp_l [ 8 ] = 46 ; simulationData -> mData -> mInputValues . mN
= 46 ; simulationData -> mData -> mInputValues . mX = & tmp_n [ 0 ] ;
simulationData -> mData -> mInputOffsets . mN = 9 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_l [ 0 ] ; simulationData -> mData -> mOutputs .
mN = 1 ; simulationData -> mData -> mOutputs . mX = & rtB . fbkymqjw15 ;
simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData ->
mSampleHits . mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit
= false ; simulationData -> mData -> mTolerances . mN = 0 ; simulationData ->
mData -> mTolerances . mX = NULL ; simulationData -> mData ->
mCstateHasChanged = false ; diagnosticManager = ( NeuDiagnosticManager * )
rtDW . d110twjzhx ; diagnosticTree = neu_diagnostic_manager_get_initial_tree
( diagnosticManager ) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW .
kdqcwt3oic , NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtB . o1ldcw3ssi [ 0 ] = rtB . fbkymqjw15 ; rtB . o1ldcw3ssi [ 1 ] = 0.0 ;
rtB . o1ldcw3ssi [ 2 ] = 0.0 ; rtB . o1ldcw3ssi [ 3 ] = 0.0 ; rtB .
n51jz3r5ms [ 0 ] = rtB . dlgzaqgmhc [ 5 ] ; rtB . n51jz3r5ms [ 1 ] = 0.0 ;
rtB . n51jz3r5ms [ 2 ] = 0.0 ; rtB . n51jz3r5ms [ 3 ] = 0.0 ; rtB .
nedkaormew [ 0 ] = rtB . pen2tlbuc2 ; rtB . nedkaormew [ 1 ] = 0.0 ; rtB .
nedkaormew [ 2 ] = 0.0 ; rtB . nedkaormew [ 3 ] = 0.0 ; rtB . aowtlt2xsx [ 0
] = rtB . kkv31bku2h ; rtB . aowtlt2xsx [ 1 ] = 0.0 ; rtB . aowtlt2xsx [ 2 ]
= 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . auu2gmyygn [ 0 ] = ! ( rtB
. aowtlt2xsx [ 0 ] == rtDW . auu2gmyygn [ 1 ] ) ; rtDW . auu2gmyygn [ 1 ] =
rtB . aowtlt2xsx [ 0 ] ; } rtB . aowtlt2xsx [ 0 ] = rtDW . auu2gmyygn [ 1 ] ;
rtB . aowtlt2xsx [ 3 ] = rtDW . auu2gmyygn [ 0 ] ; rtB . fltnebkpfo [ 0 ] =
rtB . b0nvbtvute ; rtB . fltnebkpfo [ 1 ] = 0.0 ; rtB . fltnebkpfo [ 2 ] =
0.0 ; rtB . fltnebkpfo [ 3 ] = 0.0 ; simulationData = ( NeslSimulationData *
) rtDW . pufhjztccr ; time_j = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_j ;
simulationData -> mData -> mContStates . mN = 4 ; simulationData -> mData ->
mContStates . mX = & rtX . a3wszcfpqa [ 0 ] ; simulationData -> mData ->
mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = & rtDW .
e5jo5xbtad ; simulationData -> mData -> mModeVector . mN = 5 ; simulationData
-> mData -> mModeVector . mX = & rtDW . naozloifhf [ 0 ] ; tmp = (
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
0 ] = 0 ; tmp_d [ 0 ] = rtB . nedkaormew [ 0 ] ; tmp_d [ 1 ] = rtB .
nedkaormew [ 1 ] ; tmp_d [ 2 ] = rtB . nedkaormew [ 2 ] ; tmp_d [ 3 ] = rtB .
nedkaormew [ 3 ] ; tmp_o [ 1 ] = 4 ; tmp_d [ 4 ] = rtB . aowtlt2xsx [ 0 ] ;
tmp_d [ 5 ] = rtB . aowtlt2xsx [ 1 ] ; tmp_d [ 6 ] = rtB . aowtlt2xsx [ 2 ] ;
tmp_d [ 7 ] = rtB . aowtlt2xsx [ 3 ] ; tmp_o [ 2 ] = 8 ; tmp_d [ 8 ] = rtB .
fltnebkpfo [ 0 ] ; tmp_d [ 9 ] = rtB . fltnebkpfo [ 1 ] ; tmp_d [ 10 ] = rtB
. fltnebkpfo [ 2 ] ; tmp_d [ 11 ] = rtB . fltnebkpfo [ 3 ] ; tmp_o [ 3 ] = 12
; tmp_d [ 12 ] = rtB . n51jz3r5ms [ 0 ] ; tmp_d [ 13 ] = rtB . n51jz3r5ms [ 1
] ; tmp_d [ 14 ] = rtB . n51jz3r5ms [ 2 ] ; tmp_d [ 15 ] = rtB . n51jz3r5ms [
3 ] ; tmp_o [ 4 ] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ;
simulationData -> mData -> mInputValues . mX = & tmp_d [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_o [ 0 ] ; simulationData -> mData -> mOutputs . mN = 9 ;
simulationData -> mData -> mOutputs . mX = & rtB . b4ms4hfc5c [ 0 ] ;
simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData ->
mSampleHits . mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit
= false ; simulationData -> mData -> mTolerances . mN = 0 ; simulationData ->
mData -> mTolerances . mX = NULL ; simulationData -> mData ->
mCstateHasChanged = false ; diagnosticManager = ( NeuDiagnosticManager * )
rtDW . aqd3u0h4s2 ; diagnosticTree = neu_diagnostic_manager_get_initial_tree
( diagnosticManager ) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW .
kcmwywlxl1 , NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . ny31yfa2vw ; time_f = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_f ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . dwtgertbzd ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . kaw3ejljvu ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_fs [ 0 ] = 0
; tmp_dz [ 0 ] = rtB . nedkaormew [ 0 ] ; tmp_dz [ 1 ] = rtB . nedkaormew [ 1
] ; tmp_dz [ 2 ] = rtB . nedkaormew [ 2 ] ; tmp_dz [ 3 ] = rtB . nedkaormew [
3 ] ; tmp_fs [ 1 ] = 4 ; tmp_dz [ 4 ] = rtB . aowtlt2xsx [ 0 ] ; tmp_dz [ 5 ]
= rtB . aowtlt2xsx [ 1 ] ; tmp_dz [ 6 ] = rtB . aowtlt2xsx [ 2 ] ; tmp_dz [ 7
] = rtB . aowtlt2xsx [ 3 ] ; tmp_fs [ 2 ] = 8 ; tmp_dz [ 8 ] = rtB .
fltnebkpfo [ 0 ] ; tmp_dz [ 9 ] = rtB . fltnebkpfo [ 1 ] ; tmp_dz [ 10 ] =
rtB . fltnebkpfo [ 2 ] ; tmp_dz [ 11 ] = rtB . fltnebkpfo [ 3 ] ; tmp_fs [ 3
] = 12 ; tmp_dz [ 12 ] = rtB . n51jz3r5ms [ 0 ] ; tmp_dz [ 13 ] = rtB .
n51jz3r5ms [ 1 ] ; tmp_dz [ 14 ] = rtB . n51jz3r5ms [ 2 ] ; tmp_dz [ 15 ] =
rtB . n51jz3r5ms [ 3 ] ; tmp_fs [ 4 ] = 16 ; memcpy ( & tmp_dz [ 16 ] , & rtB
. b4ms4hfc5c [ 0 ] , 9U * sizeof ( real_T ) ) ; tmp_fs [ 5 ] = 25 ;
simulationData -> mData -> mInputValues . mN = 25 ; simulationData -> mData
-> mInputValues . mX = & tmp_dz [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 6 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_fs [ 0 ] ; simulationData -> mData -> mOutputs . mN = 1 ; simulationData
-> mData -> mOutputs . mX = & rtB . hiiihp2k0u ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . mwyq2uplon ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . ei3pjfumgv ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtB . ase3lj3apj [ 0 ] = rtB . hiiihp2k0u ; rtB . ase3lj3apj [ 1 ] = 0.0 ;
rtB . ase3lj3apj [ 2 ] = 0.0 ; rtB . ase3lj3apj [ 3 ] = 0.0 ; rtB .
mevfua5fda [ 0 ] = rtB . dlgzaqgmhc [ 7 ] ; rtB . mevfua5fda [ 1 ] = 0.0 ;
rtB . mevfua5fda [ 2 ] = 0.0 ; rtB . mevfua5fda [ 3 ] = 0.0 ; rtB .
dycz5qe5i2 [ 0 ] = rtB . a52ganzccv ; rtB . dycz5qe5i2 [ 1 ] = 0.0 ; rtB .
dycz5qe5i2 [ 2 ] = 0.0 ; rtB . dycz5qe5i2 [ 3 ] = 0.0 ; rtB . ar342mtoyy [ 0
] = rtB . i1gvwgou24 ; rtB . ar342mtoyy [ 1 ] = 0.0 ; rtB . ar342mtoyy [ 2 ]
= 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . kr1ntmuvlq [ 0 ] = ! ( rtB
. ar342mtoyy [ 0 ] == rtDW . kr1ntmuvlq [ 1 ] ) ; rtDW . kr1ntmuvlq [ 1 ] =
rtB . ar342mtoyy [ 0 ] ; } rtB . ar342mtoyy [ 0 ] = rtDW . kr1ntmuvlq [ 1 ] ;
rtB . ar342mtoyy [ 3 ] = rtDW . kr1ntmuvlq [ 0 ] ; rtB . fntgtrllob [ 0 ] =
rtB . kwvtqc24nn ; rtB . fntgtrllob [ 1 ] = 0.0 ; rtB . fntgtrllob [ 2 ] =
0.0 ; rtB . fntgtrllob [ 3 ] = 0.0 ; simulationData = ( NeslSimulationData *
) rtDW . hrkrw20ytk ; time_c = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_c ;
simulationData -> mData -> mContStates . mN = 4 ; simulationData -> mData ->
mContStates . mX = & rtX . hgiqkf2r13 [ 0 ] ; simulationData -> mData ->
mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = & rtDW .
pyaa30hu1l ; simulationData -> mData -> mModeVector . mN = 5 ; simulationData
-> mData -> mModeVector . mX = & rtDW . ena1m1tqgi [ 0 ] ; tmp = (
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
[ 0 ] = 0 ; tmp_ck [ 0 ] = rtB . dycz5qe5i2 [ 0 ] ; tmp_ck [ 1 ] = rtB .
dycz5qe5i2 [ 1 ] ; tmp_ck [ 2 ] = rtB . dycz5qe5i2 [ 2 ] ; tmp_ck [ 3 ] = rtB
. dycz5qe5i2 [ 3 ] ; tmp_f2 [ 1 ] = 4 ; tmp_ck [ 4 ] = rtB . ar342mtoyy [ 0 ]
; tmp_ck [ 5 ] = rtB . ar342mtoyy [ 1 ] ; tmp_ck [ 6 ] = rtB . ar342mtoyy [ 2
] ; tmp_ck [ 7 ] = rtB . ar342mtoyy [ 3 ] ; tmp_f2 [ 2 ] = 8 ; tmp_ck [ 8 ] =
rtB . fntgtrllob [ 0 ] ; tmp_ck [ 9 ] = rtB . fntgtrllob [ 1 ] ; tmp_ck [ 10
] = rtB . fntgtrllob [ 2 ] ; tmp_ck [ 11 ] = rtB . fntgtrllob [ 3 ] ; tmp_f2
[ 3 ] = 12 ; tmp_ck [ 12 ] = rtB . mevfua5fda [ 0 ] ; tmp_ck [ 13 ] = rtB .
mevfua5fda [ 1 ] ; tmp_ck [ 14 ] = rtB . mevfua5fda [ 2 ] ; tmp_ck [ 15 ] =
rtB . mevfua5fda [ 3 ] ; tmp_f2 [ 4 ] = 16 ; simulationData -> mData ->
mInputValues . mN = 16 ; simulationData -> mData -> mInputValues . mX = &
tmp_ck [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_f2 [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 9 ; simulationData -> mData ->
mOutputs . mX = & rtB . pfaxquxlh0 [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . b4ac4nh15p ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . ejmmacq22h ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . mm5rcdx55z ; time_k = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_k ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . dqh2udag13 ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . fsft1isk0m ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_lt [ 0 ] = 0
; tmp_kt [ 0 ] = rtB . dycz5qe5i2 [ 0 ] ; tmp_kt [ 1 ] = rtB . dycz5qe5i2 [ 1
] ; tmp_kt [ 2 ] = rtB . dycz5qe5i2 [ 2 ] ; tmp_kt [ 3 ] = rtB . dycz5qe5i2 [
3 ] ; tmp_lt [ 1 ] = 4 ; tmp_kt [ 4 ] = rtB . ar342mtoyy [ 0 ] ; tmp_kt [ 5 ]
= rtB . ar342mtoyy [ 1 ] ; tmp_kt [ 6 ] = rtB . ar342mtoyy [ 2 ] ; tmp_kt [ 7
] = rtB . ar342mtoyy [ 3 ] ; tmp_lt [ 2 ] = 8 ; tmp_kt [ 8 ] = rtB .
fntgtrllob [ 0 ] ; tmp_kt [ 9 ] = rtB . fntgtrllob [ 1 ] ; tmp_kt [ 10 ] =
rtB . fntgtrllob [ 2 ] ; tmp_kt [ 11 ] = rtB . fntgtrllob [ 3 ] ; tmp_lt [ 3
] = 12 ; tmp_kt [ 12 ] = rtB . mevfua5fda [ 0 ] ; tmp_kt [ 13 ] = rtB .
mevfua5fda [ 1 ] ; tmp_kt [ 14 ] = rtB . mevfua5fda [ 2 ] ; tmp_kt [ 15 ] =
rtB . mevfua5fda [ 3 ] ; tmp_lt [ 4 ] = 16 ; memcpy ( & tmp_kt [ 16 ] , & rtB
. pfaxquxlh0 [ 0 ] , 9U * sizeof ( real_T ) ) ; tmp_lt [ 5 ] = 25 ;
simulationData -> mData -> mInputValues . mN = 25 ; simulationData -> mData
-> mInputValues . mX = & tmp_kt [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 6 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_lt [ 0 ] ; simulationData -> mData -> mOutputs . mN = 1 ; simulationData
-> mData -> mOutputs . mX = & rtB . no5mc1kht1 ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . l2qm1h0rd5 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . fdwlxsnzv1 ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtB . jcohfzsgmt [ 0 ] = rtB . no5mc1kht1 ; rtB . jcohfzsgmt [ 1 ] = 0.0 ;
rtB . jcohfzsgmt [ 2 ] = 0.0 ; rtB . jcohfzsgmt [ 3 ] = 0.0 ; rtB .
ecbwmrxmul [ 0 ] = rtB . dlgzaqgmhc [ 9 ] ; rtB . ecbwmrxmul [ 1 ] = 0.0 ;
rtB . ecbwmrxmul [ 2 ] = 0.0 ; rtB . ecbwmrxmul [ 3 ] = 0.0 ; rtB .
bkephdao5q [ 0 ] = rtB . oavnyz4xex ; rtB . bkephdao5q [ 1 ] = 0.0 ; rtB .
bkephdao5q [ 2 ] = 0.0 ; rtB . bkephdao5q [ 3 ] = 0.0 ; rtB . ptr4jxtzru [ 0
] = rtB . kl5k5speeu ; rtB . ptr4jxtzru [ 1 ] = 0.0 ; rtB . ptr4jxtzru [ 2 ]
= 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . pncbg0ft22 [ 0 ] = ! ( rtB
. ptr4jxtzru [ 0 ] == rtDW . pncbg0ft22 [ 1 ] ) ; rtDW . pncbg0ft22 [ 1 ] =
rtB . ptr4jxtzru [ 0 ] ; } rtB . ptr4jxtzru [ 0 ] = rtDW . pncbg0ft22 [ 1 ] ;
rtB . ptr4jxtzru [ 3 ] = rtDW . pncbg0ft22 [ 0 ] ; rtB . d1bzzxr1py [ 0 ] =
rtB . bccvxfaqok ; rtB . d1bzzxr1py [ 1 ] = 0.0 ; rtB . d1bzzxr1py [ 2 ] =
0.0 ; rtB . d1bzzxr1py [ 3 ] = 0.0 ; simulationData = ( NeslSimulationData *
) rtDW . jtehowy45m ; time_b = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_b ;
simulationData -> mData -> mContStates . mN = 4 ; simulationData -> mData ->
mContStates . mX = & rtX . os2il0fse5 [ 0 ] ; simulationData -> mData ->
mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = & rtDW .
ei5jzybccv ; simulationData -> mData -> mModeVector . mN = 5 ; simulationData
-> mData -> mModeVector . mX = & rtDW . oapkaomns3 [ 0 ] ; tmp = (
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
[ 0 ] = 0 ; tmp_hn [ 0 ] = rtB . bkephdao5q [ 0 ] ; tmp_hn [ 1 ] = rtB .
bkephdao5q [ 1 ] ; tmp_hn [ 2 ] = rtB . bkephdao5q [ 2 ] ; tmp_hn [ 3 ] = rtB
. bkephdao5q [ 3 ] ; tmp_ap [ 1 ] = 4 ; tmp_hn [ 4 ] = rtB . ptr4jxtzru [ 0 ]
; tmp_hn [ 5 ] = rtB . ptr4jxtzru [ 1 ] ; tmp_hn [ 6 ] = rtB . ptr4jxtzru [ 2
] ; tmp_hn [ 7 ] = rtB . ptr4jxtzru [ 3 ] ; tmp_ap [ 2 ] = 8 ; tmp_hn [ 8 ] =
rtB . d1bzzxr1py [ 0 ] ; tmp_hn [ 9 ] = rtB . d1bzzxr1py [ 1 ] ; tmp_hn [ 10
] = rtB . d1bzzxr1py [ 2 ] ; tmp_hn [ 11 ] = rtB . d1bzzxr1py [ 3 ] ; tmp_ap
[ 3 ] = 12 ; tmp_hn [ 12 ] = rtB . ecbwmrxmul [ 0 ] ; tmp_hn [ 13 ] = rtB .
ecbwmrxmul [ 1 ] ; tmp_hn [ 14 ] = rtB . ecbwmrxmul [ 2 ] ; tmp_hn [ 15 ] =
rtB . ecbwmrxmul [ 3 ] ; tmp_ap [ 4 ] = 16 ; simulationData -> mData ->
mInputValues . mN = 16 ; simulationData -> mData -> mInputValues . mX = &
tmp_hn [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_ap [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 9 ; simulationData -> mData ->
mOutputs . mX = & rtB . mzskvlpl4t [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . ma153abo0u ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . mluequoe3f ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . oapgvyjuop ; time_n = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_n ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . csbbxlyjz3 ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . a5smqjgxxe ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_po [ 0 ] = 0
; tmp_pj [ 0 ] = rtB . bkephdao5q [ 0 ] ; tmp_pj [ 1 ] = rtB . bkephdao5q [ 1
] ; tmp_pj [ 2 ] = rtB . bkephdao5q [ 2 ] ; tmp_pj [ 3 ] = rtB . bkephdao5q [
3 ] ; tmp_po [ 1 ] = 4 ; tmp_pj [ 4 ] = rtB . ptr4jxtzru [ 0 ] ; tmp_pj [ 5 ]
= rtB . ptr4jxtzru [ 1 ] ; tmp_pj [ 6 ] = rtB . ptr4jxtzru [ 2 ] ; tmp_pj [ 7
] = rtB . ptr4jxtzru [ 3 ] ; tmp_po [ 2 ] = 8 ; tmp_pj [ 8 ] = rtB .
d1bzzxr1py [ 0 ] ; tmp_pj [ 9 ] = rtB . d1bzzxr1py [ 1 ] ; tmp_pj [ 10 ] =
rtB . d1bzzxr1py [ 2 ] ; tmp_pj [ 11 ] = rtB . d1bzzxr1py [ 3 ] ; tmp_po [ 3
] = 12 ; tmp_pj [ 12 ] = rtB . ecbwmrxmul [ 0 ] ; tmp_pj [ 13 ] = rtB .
ecbwmrxmul [ 1 ] ; tmp_pj [ 14 ] = rtB . ecbwmrxmul [ 2 ] ; tmp_pj [ 15 ] =
rtB . ecbwmrxmul [ 3 ] ; tmp_po [ 4 ] = 16 ; memcpy ( & tmp_pj [ 16 ] , & rtB
. mzskvlpl4t [ 0 ] , 9U * sizeof ( real_T ) ) ; tmp_po [ 5 ] = 25 ;
simulationData -> mData -> mInputValues . mN = 25 ; simulationData -> mData
-> mInputValues . mX = & tmp_pj [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 6 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_po [ 0 ] ; simulationData -> mData -> mOutputs . mN = 1 ; simulationData
-> mData -> mOutputs . mX = & rtB . bml3meflbj ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . mtf42ubwyf ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . pelwuspvpm ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtB . nwltqugjxl [ 0 ] = rtB . bml3meflbj ; rtB . nwltqugjxl [ 1 ] = 0.0 ;
rtB . nwltqugjxl [ 2 ] = 0.0 ; rtB . nwltqugjxl [ 3 ] = 0.0 ; rtB .
nvp0xnvq03 [ 0 ] = rtB . dlgzaqgmhc [ 11 ] ; rtB . nvp0xnvq03 [ 1 ] = 0.0 ;
rtB . nvp0xnvq03 [ 2 ] = 0.0 ; rtB . nvp0xnvq03 [ 3 ] = 0.0 ; rtB .
moqztnnjfy [ 0 ] = rtB . kmphhlf0c0 ; rtB . moqztnnjfy [ 1 ] = 0.0 ; rtB .
moqztnnjfy [ 2 ] = 0.0 ; rtB . moqztnnjfy [ 3 ] = 0.0 ; rtB . e2oog2ldlk [ 0
] = rtB . ftcpietbbk ; rtB . e2oog2ldlk [ 1 ] = 0.0 ; rtB . e2oog2ldlk [ 2 ]
= 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . jmjufyutkh [ 0 ] = ! ( rtB
. e2oog2ldlk [ 0 ] == rtDW . jmjufyutkh [ 1 ] ) ; rtDW . jmjufyutkh [ 1 ] =
rtB . e2oog2ldlk [ 0 ] ; } rtB . e2oog2ldlk [ 0 ] = rtDW . jmjufyutkh [ 1 ] ;
rtB . e2oog2ldlk [ 3 ] = rtDW . jmjufyutkh [ 0 ] ; rtB . l3qlly0y24 [ 0 ] =
rtB . i1zzbavhbp ; rtB . l3qlly0y24 [ 1 ] = 0.0 ; rtB . l3qlly0y24 [ 2 ] =
0.0 ; rtB . l3qlly0y24 [ 3 ] = 0.0 ; simulationData = ( NeslSimulationData *
) rtDW . kxuuq5q1xq ; time_l = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_l ;
simulationData -> mData -> mContStates . mN = 4 ; simulationData -> mData ->
mContStates . mX = & rtX . a4sfa3kge2 [ 0 ] ; simulationData -> mData ->
mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = & rtDW .
lwufoxa2ik ; simulationData -> mData -> mModeVector . mN = 5 ; simulationData
-> mData -> mModeVector . mX = & rtDW . aymgehdyan [ 0 ] ; tmp = (
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
[ 0 ] = 0 ; tmp_pk [ 0 ] = rtB . moqztnnjfy [ 0 ] ; tmp_pk [ 1 ] = rtB .
moqztnnjfy [ 1 ] ; tmp_pk [ 2 ] = rtB . moqztnnjfy [ 2 ] ; tmp_pk [ 3 ] = rtB
. moqztnnjfy [ 3 ] ; tmp_d0 [ 1 ] = 4 ; tmp_pk [ 4 ] = rtB . e2oog2ldlk [ 0 ]
; tmp_pk [ 5 ] = rtB . e2oog2ldlk [ 1 ] ; tmp_pk [ 6 ] = rtB . e2oog2ldlk [ 2
] ; tmp_pk [ 7 ] = rtB . e2oog2ldlk [ 3 ] ; tmp_d0 [ 2 ] = 8 ; tmp_pk [ 8 ] =
rtB . l3qlly0y24 [ 0 ] ; tmp_pk [ 9 ] = rtB . l3qlly0y24 [ 1 ] ; tmp_pk [ 10
] = rtB . l3qlly0y24 [ 2 ] ; tmp_pk [ 11 ] = rtB . l3qlly0y24 [ 3 ] ; tmp_d0
[ 3 ] = 12 ; tmp_pk [ 12 ] = rtB . nvp0xnvq03 [ 0 ] ; tmp_pk [ 13 ] = rtB .
nvp0xnvq03 [ 1 ] ; tmp_pk [ 14 ] = rtB . nvp0xnvq03 [ 2 ] ; tmp_pk [ 15 ] =
rtB . nvp0xnvq03 [ 3 ] ; tmp_d0 [ 4 ] = 16 ; simulationData -> mData ->
mInputValues . mN = 16 ; simulationData -> mData -> mInputValues . mX = &
tmp_pk [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_d0 [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 9 ; simulationData -> mData ->
mOutputs . mX = & rtB . mzifsmwue2 [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . ctneexngj0 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . lvrxzc3xbz ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . eq0pqdmgzx ; time_d = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_d ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . bk0lalbjqp ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . ftg3rfhku0 ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_m0 [ 0 ] = 0
; tmp_kh [ 0 ] = rtB . moqztnnjfy [ 0 ] ; tmp_kh [ 1 ] = rtB . moqztnnjfy [ 1
] ; tmp_kh [ 2 ] = rtB . moqztnnjfy [ 2 ] ; tmp_kh [ 3 ] = rtB . moqztnnjfy [
3 ] ; tmp_m0 [ 1 ] = 4 ; tmp_kh [ 4 ] = rtB . e2oog2ldlk [ 0 ] ; tmp_kh [ 5 ]
= rtB . e2oog2ldlk [ 1 ] ; tmp_kh [ 6 ] = rtB . e2oog2ldlk [ 2 ] ; tmp_kh [ 7
] = rtB . e2oog2ldlk [ 3 ] ; tmp_m0 [ 2 ] = 8 ; tmp_kh [ 8 ] = rtB .
l3qlly0y24 [ 0 ] ; tmp_kh [ 9 ] = rtB . l3qlly0y24 [ 1 ] ; tmp_kh [ 10 ] =
rtB . l3qlly0y24 [ 2 ] ; tmp_kh [ 11 ] = rtB . l3qlly0y24 [ 3 ] ; tmp_m0 [ 3
] = 12 ; tmp_kh [ 12 ] = rtB . nvp0xnvq03 [ 0 ] ; tmp_kh [ 13 ] = rtB .
nvp0xnvq03 [ 1 ] ; tmp_kh [ 14 ] = rtB . nvp0xnvq03 [ 2 ] ; tmp_kh [ 15 ] =
rtB . nvp0xnvq03 [ 3 ] ; tmp_m0 [ 4 ] = 16 ; memcpy ( & tmp_kh [ 16 ] , & rtB
. mzifsmwue2 [ 0 ] , 9U * sizeof ( real_T ) ) ; tmp_m0 [ 5 ] = 25 ;
simulationData -> mData -> mInputValues . mN = 25 ; simulationData -> mData
-> mInputValues . mX = & tmp_kh [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 6 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_m0 [ 0 ] ; simulationData -> mData -> mOutputs . mN = 1 ; simulationData
-> mData -> mOutputs . mX = & rtB . oew42em5vf ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . jaseroeq2i ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . atywinawwy ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtB . l4n2e5pdle [ 0 ] = rtB . oew42em5vf ; rtB . l4n2e5pdle [ 1 ] = 0.0 ;
rtB . l4n2e5pdle [ 2 ] = 0.0 ; rtB . l4n2e5pdle [ 3 ] = 0.0 ;
UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID2 ( int_T tid ) { if ( rtP .
Break_Value > rtP . u5_UpperSat ) { rtB . gudjnx4gli = rtP . u5_UpperSat ; }
else if ( rtP . Break_Value < rtP . u5_LowerSat ) { rtB . gudjnx4gli = rtP .
u5_LowerSat ; } else { rtB . gudjnx4gli = rtP . Break_Value ; } if ( rtP .
Break1_Value > rtP . u51_UpperSat ) { rtB . bxxre2130j = rtP . u51_UpperSat ;
} else if ( rtP . Break1_Value < rtP . u51_LowerSat ) { rtB . bxxre2130j =
rtP . u51_LowerSat ; } else { rtB . bxxre2130j = rtP . Break1_Value ; } if (
rtP . Break2_Value > rtP . u52_UpperSat ) { rtB . kkv31bku2h = rtP .
u52_UpperSat ; } else if ( rtP . Break2_Value < rtP . u52_LowerSat ) { rtB .
kkv31bku2h = rtP . u52_LowerSat ; } else { rtB . kkv31bku2h = rtP .
Break2_Value ; } if ( rtP . Break3_Value > rtP . u53_UpperSat ) { rtB .
i1gvwgou24 = rtP . u53_UpperSat ; } else if ( rtP . Break3_Value < rtP .
u53_LowerSat ) { rtB . i1gvwgou24 = rtP . u53_LowerSat ; } else { rtB .
i1gvwgou24 = rtP . Break3_Value ; } if ( rtP . Break4_Value > rtP .
u54_UpperSat ) { rtB . kl5k5speeu = rtP . u54_UpperSat ; } else if ( rtP .
Break4_Value < rtP . u54_LowerSat ) { rtB . kl5k5speeu = rtP . u54_LowerSat ;
} else { rtB . kl5k5speeu = rtP . Break4_Value ; } if ( rtP . Break5_Value >
rtP . u55_UpperSat ) { rtB . ftcpietbbk = rtP . u55_UpperSat ; } else if (
rtP . Break5_Value < rtP . u55_LowerSat ) { rtB . ftcpietbbk = rtP .
u55_LowerSat ; } else { rtB . ftcpietbbk = rtP . Break5_Value ; }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) {
NeslSimulationData * simulationData ; real_T time ; boolean_T tmp ; real_T
tmp_p [ 24 ] ; int_T tmp_e [ 7 ] ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; char * msg ; int32_T k ; real_T * lastU
; real_T time_p ; real_T tmp_i [ 16 ] ; int_T tmp_m [ 5 ] ; real_T time_e ;
real_T tmp_g [ 28 ] ; int_T tmp_j [ 8 ] ; real_T time_i ; real_T tmp_f [ 16 ]
; int_T tmp_c [ 5 ] ; real_T time_m ; real_T tmp_k [ 16 ] ; int_T tmp_b [ 5 ]
; real_T time_g ; real_T tmp_n [ 16 ] ; int_T tmp_l [ 5 ] ; real_T time_j ;
real_T tmp_d [ 16 ] ; int_T tmp_o [ 5 ] ; simulationData = (
NeslSimulationData * ) rtDW . nm1pedohdu ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 28 ;
simulationData -> mData -> mContStates . mX = & rtX . lbl1bst0em [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 1 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . gmlwc0qame ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
eqfboolvki ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
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
gsxwzsrgs3 [ 0 ] ; tmp_p [ 1 ] = rtB . gsxwzsrgs3 [ 1 ] ; tmp_p [ 2 ] = rtB .
gsxwzsrgs3 [ 2 ] ; tmp_p [ 3 ] = rtB . gsxwzsrgs3 [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . o1ldcw3ssi [ 0 ] ; tmp_p [ 5 ] = rtB . o1ldcw3ssi [ 1 ] ;
tmp_p [ 6 ] = rtB . o1ldcw3ssi [ 2 ] ; tmp_p [ 7 ] = rtB . o1ldcw3ssi [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . ase3lj3apj [ 0 ] ; tmp_p [ 9 ] = rtB .
ase3lj3apj [ 1 ] ; tmp_p [ 10 ] = rtB . ase3lj3apj [ 2 ] ; tmp_p [ 11 ] = rtB
. ase3lj3apj [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . jcohfzsgmt [ 0 ]
; tmp_p [ 13 ] = rtB . jcohfzsgmt [ 1 ] ; tmp_p [ 14 ] = rtB . jcohfzsgmt [ 2
] ; tmp_p [ 15 ] = rtB . jcohfzsgmt [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . nwltqugjxl [ 0 ] ; tmp_p [ 17 ] = rtB . nwltqugjxl [ 1 ] ; tmp_p [ 18 ]
= rtB . nwltqugjxl [ 2 ] ; tmp_p [ 19 ] = rtB . nwltqugjxl [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . l4n2e5pdle [ 0 ] ; tmp_p [ 21 ] = rtB .
l4n2e5pdle [ 1 ] ; tmp_p [ 22 ] = rtB . l4n2e5pdle [ 2 ] ; tmp_p [ 23 ] = rtB
. l4n2e5pdle [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . i2d1fpfnkr ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . gykjnl45ou ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW . c1yhchtyrr = rtDW . el1lpuw5zq
; } if ( rtDW . ez5xo4m5re == ( rtInf ) ) { rtDW . ez5xo4m5re = ssGetT ( rtS
) ; lastU = & rtDW . gawt3eqo1w ; } else if ( rtDW . btzzvjv32s == ( rtInf )
) { rtDW . btzzvjv32s = ssGetT ( rtS ) ; lastU = & rtDW . a4ncrv0q4x ; } else
if ( rtDW . ez5xo4m5re < rtDW . btzzvjv32s ) { rtDW . ez5xo4m5re = ssGetT (
rtS ) ; lastU = & rtDW . gawt3eqo1w ; } else { rtDW . btzzvjv32s = ssGetT (
rtS ) ; lastU = & rtDW . a4ncrv0q4x ; } * lastU = rtB . ff0xl0o0on ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW . b5meobzewc = rtDW . cujerjqnlc ; }
if ( rtDW . etc2elb4q0 == ( rtInf ) ) { rtDW . etc2elb4q0 = ssGetT ( rtS ) ;
lastU = & rtDW . ix5mp3senf ; } else if ( rtDW . ka3q1qehwh == ( rtInf ) ) {
rtDW . ka3q1qehwh = ssGetT ( rtS ) ; lastU = & rtDW . iyz54pfzbq ; } else if
( rtDW . etc2elb4q0 < rtDW . ka3q1qehwh ) { rtDW . etc2elb4q0 = ssGetT ( rtS
) ; lastU = & rtDW . ix5mp3senf ; } else { rtDW . ka3q1qehwh = ssGetT ( rtS )
; lastU = & rtDW . iyz54pfzbq ; } * lastU = rtB . fwfn0fe1sh ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW . phjhcjadmq = rtDW . lhens4aog5 ; }
if ( rtDW . njuj213ft1 == ( rtInf ) ) { rtDW . njuj213ft1 = ssGetT ( rtS ) ;
lastU = & rtDW . hgs1s5cbrg ; } else if ( rtDW . lzapf4uzyf == ( rtInf ) ) {
rtDW . lzapf4uzyf = ssGetT ( rtS ) ; lastU = & rtDW . jnseaklp1y ; } else if
( rtDW . njuj213ft1 < rtDW . lzapf4uzyf ) { rtDW . njuj213ft1 = ssGetT ( rtS
) ; lastU = & rtDW . hgs1s5cbrg ; } else { rtDW . lzapf4uzyf = ssGetT ( rtS )
; lastU = & rtDW . jnseaklp1y ; } * lastU = rtB . ddsxiam50k ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW . ea2ghjrony = rtDW . f4jjebddb5 ; }
if ( rtDW . lwhxhj0cgm == ( rtInf ) ) { rtDW . lwhxhj0cgm = ssGetT ( rtS ) ;
lastU = & rtDW . ospktyrmu3 ; } else if ( rtDW . jz4witzby0 == ( rtInf ) ) {
rtDW . jz4witzby0 = ssGetT ( rtS ) ; lastU = & rtDW . ku4umw2hdw ; } else if
( rtDW . lwhxhj0cgm < rtDW . jz4witzby0 ) { rtDW . lwhxhj0cgm = ssGetT ( rtS
) ; lastU = & rtDW . ospktyrmu3 ; } else { rtDW . jz4witzby0 = ssGetT ( rtS )
; lastU = & rtDW . ku4umw2hdw ; } * lastU = rtB . f2w1fqz5qt ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW . o3hjuvp5p4 = rtDW . eh4fvnrcpe ; }
if ( rtDW . lhvgthtwgl == ( rtInf ) ) { rtDW . lhvgthtwgl = ssGetT ( rtS ) ;
lastU = & rtDW . hahir0y4uj ; } else if ( rtDW . hqk0upav5k == ( rtInf ) ) {
rtDW . hqk0upav5k = ssGetT ( rtS ) ; lastU = & rtDW . pneozxjlkn ; } else if
( rtDW . lhvgthtwgl < rtDW . hqk0upav5k ) { rtDW . lhvgthtwgl = ssGetT ( rtS
) ; lastU = & rtDW . hahir0y4uj ; } else { rtDW . hqk0upav5k = ssGetT ( rtS )
; lastU = & rtDW . pneozxjlkn ; } * lastU = rtB . fzulu4txkm ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW . mfo0m5mdmb = rtDW . oep4q2a05l ; }
if ( rtDW . adymbo4t3h == ( rtInf ) ) { rtDW . adymbo4t3h = ssGetT ( rtS ) ;
lastU = & rtDW . ir1daw3liz ; } else if ( rtDW . axlsmtzflm == ( rtInf ) ) {
rtDW . axlsmtzflm = ssGetT ( rtS ) ; lastU = & rtDW . bhpq141ewe ; } else if
( rtDW . adymbo4t3h < rtDW . axlsmtzflm ) { rtDW . adymbo4t3h = ssGetT ( rtS
) ; lastU = & rtDW . ir1daw3liz ; } else { rtDW . axlsmtzflm = ssGetT ( rtS )
; lastU = & rtDW . bhpq141ewe ; } * lastU = rtB . puv1ifcb43 ; simulationData
= ( NeslSimulationData * ) rtDW . hcrcwgbmvq ; time_p = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_p ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . pziburvfat [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . lz0ilv4wwe ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
bqqyvce3il [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
mmt4jv2djd [ 0 ] ; tmp_i [ 1 ] = rtB . mmt4jv2djd [ 1 ] ; tmp_i [ 2 ] = rtB .
mmt4jv2djd [ 2 ] ; tmp_i [ 3 ] = rtB . mmt4jv2djd [ 3 ] ; tmp_m [ 1 ] = 4 ;
tmp_i [ 4 ] = rtB . pzylr3xzgl [ 0 ] ; tmp_i [ 5 ] = rtB . pzylr3xzgl [ 1 ] ;
tmp_i [ 6 ] = rtB . pzylr3xzgl [ 2 ] ; tmp_i [ 7 ] = rtB . pzylr3xzgl [ 3 ] ;
tmp_m [ 2 ] = 8 ; tmp_i [ 8 ] = rtB . os31fqwjpr [ 0 ] ; tmp_i [ 9 ] = rtB .
os31fqwjpr [ 1 ] ; tmp_i [ 10 ] = rtB . os31fqwjpr [ 2 ] ; tmp_i [ 11 ] = rtB
. os31fqwjpr [ 3 ] ; tmp_m [ 3 ] = 12 ; tmp_i [ 12 ] = rtB . lgamsddxfw [ 0 ]
; tmp_i [ 13 ] = rtB . lgamsddxfw [ 1 ] ; tmp_i [ 14 ] = rtB . lgamsddxfw [ 2
] ; tmp_i [ 15 ] = rtB . lgamsddxfw [ 3 ] ; tmp_m [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_i [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_m [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . az1yo1muxe ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . ocpy12p22k ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . dmsckoggfy ; time_e = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_e ; simulationData -> mData -> mContStates . mN = 8 ;
simulationData -> mData -> mContStates . mX = & rtX . ixvwzsiq3g [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . dxsqzsmbnr ; simulationData -> mData ->
mModeVector . mN = 10 ; simulationData -> mData -> mModeVector . mX = & rtDW
. glcb0crgzp [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
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
cxyv2au2fy [ 0 ] ; tmp_g [ 1 ] = rtB . cxyv2au2fy [ 1 ] ; tmp_g [ 2 ] = rtB .
cxyv2au2fy [ 2 ] ; tmp_g [ 3 ] = rtB . cxyv2au2fy [ 3 ] ; tmp_j [ 1 ] = 4 ;
tmp_g [ 4 ] = rtB . b0pjn0qe1a [ 0 ] ; tmp_g [ 5 ] = rtB . b0pjn0qe1a [ 1 ] ;
tmp_g [ 6 ] = rtB . b0pjn0qe1a [ 2 ] ; tmp_g [ 7 ] = rtB . b0pjn0qe1a [ 3 ] ;
tmp_j [ 2 ] = 8 ; tmp_g [ 8 ] = rtB . l5pujcrulu [ 0 ] ; tmp_g [ 9 ] = rtB .
l5pujcrulu [ 1 ] ; tmp_g [ 10 ] = rtB . l5pujcrulu [ 2 ] ; tmp_g [ 11 ] = rtB
. l5pujcrulu [ 3 ] ; tmp_j [ 3 ] = 12 ; tmp_g [ 12 ] = rtB . b2vobw2amc [ 0 ]
; tmp_g [ 13 ] = rtB . b2vobw2amc [ 1 ] ; tmp_g [ 14 ] = rtB . b2vobw2amc [ 2
] ; tmp_g [ 15 ] = rtB . b2vobw2amc [ 3 ] ; tmp_j [ 4 ] = 16 ; tmp_g [ 16 ] =
rtB . c4ncjpj4p3 [ 0 ] ; tmp_g [ 17 ] = rtB . c4ncjpj4p3 [ 1 ] ; tmp_g [ 18 ]
= rtB . c4ncjpj4p3 [ 2 ] ; tmp_g [ 19 ] = rtB . c4ncjpj4p3 [ 3 ] ; tmp_j [ 5
] = 20 ; tmp_g [ 20 ] = rtB . hbxx3xyytn [ 0 ] ; tmp_g [ 21 ] = rtB .
hbxx3xyytn [ 1 ] ; tmp_g [ 22 ] = rtB . hbxx3xyytn [ 2 ] ; tmp_g [ 23 ] = rtB
. hbxx3xyytn [ 3 ] ; tmp_j [ 6 ] = 24 ; tmp_g [ 24 ] = rtB . amckjsk01h [ 0 ]
; tmp_g [ 25 ] = rtB . amckjsk01h [ 1 ] ; tmp_g [ 26 ] = rtB . amckjsk01h [ 2
] ; tmp_g [ 27 ] = rtB . amckjsk01h [ 3 ] ; tmp_j [ 7 ] = 28 ; simulationData
-> mData -> mInputValues . mN = 28 ; simulationData -> mData -> mInputValues
. mX = & tmp_g [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 8 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_j [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . bkxjnhwg4q ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . ajpv151fp2 ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . pufhjztccr ; time_i = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_i ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . a3wszcfpqa [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . e5jo5xbtad ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
naozloifhf [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
nedkaormew [ 0 ] ; tmp_f [ 1 ] = rtB . nedkaormew [ 1 ] ; tmp_f [ 2 ] = rtB .
nedkaormew [ 2 ] ; tmp_f [ 3 ] = rtB . nedkaormew [ 3 ] ; tmp_c [ 1 ] = 4 ;
tmp_f [ 4 ] = rtB . aowtlt2xsx [ 0 ] ; tmp_f [ 5 ] = rtB . aowtlt2xsx [ 1 ] ;
tmp_f [ 6 ] = rtB . aowtlt2xsx [ 2 ] ; tmp_f [ 7 ] = rtB . aowtlt2xsx [ 3 ] ;
tmp_c [ 2 ] = 8 ; tmp_f [ 8 ] = rtB . fltnebkpfo [ 0 ] ; tmp_f [ 9 ] = rtB .
fltnebkpfo [ 1 ] ; tmp_f [ 10 ] = rtB . fltnebkpfo [ 2 ] ; tmp_f [ 11 ] = rtB
. fltnebkpfo [ 3 ] ; tmp_c [ 3 ] = 12 ; tmp_f [ 12 ] = rtB . n51jz3r5ms [ 0 ]
; tmp_f [ 13 ] = rtB . n51jz3r5ms [ 1 ] ; tmp_f [ 14 ] = rtB . n51jz3r5ms [ 2
] ; tmp_f [ 15 ] = rtB . n51jz3r5ms [ 3 ] ; tmp_c [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_f [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_c [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . aqd3u0h4s2 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . kcmwywlxl1 ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . hrkrw20ytk ; time_m = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_m ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . hgiqkf2r13 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . pyaa30hu1l ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
ena1m1tqgi [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
dycz5qe5i2 [ 0 ] ; tmp_k [ 1 ] = rtB . dycz5qe5i2 [ 1 ] ; tmp_k [ 2 ] = rtB .
dycz5qe5i2 [ 2 ] ; tmp_k [ 3 ] = rtB . dycz5qe5i2 [ 3 ] ; tmp_b [ 1 ] = 4 ;
tmp_k [ 4 ] = rtB . ar342mtoyy [ 0 ] ; tmp_k [ 5 ] = rtB . ar342mtoyy [ 1 ] ;
tmp_k [ 6 ] = rtB . ar342mtoyy [ 2 ] ; tmp_k [ 7 ] = rtB . ar342mtoyy [ 3 ] ;
tmp_b [ 2 ] = 8 ; tmp_k [ 8 ] = rtB . fntgtrllob [ 0 ] ; tmp_k [ 9 ] = rtB .
fntgtrllob [ 1 ] ; tmp_k [ 10 ] = rtB . fntgtrllob [ 2 ] ; tmp_k [ 11 ] = rtB
. fntgtrllob [ 3 ] ; tmp_b [ 3 ] = 12 ; tmp_k [ 12 ] = rtB . mevfua5fda [ 0 ]
; tmp_k [ 13 ] = rtB . mevfua5fda [ 1 ] ; tmp_k [ 14 ] = rtB . mevfua5fda [ 2
] ; tmp_k [ 15 ] = rtB . mevfua5fda [ 3 ] ; tmp_b [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_k [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_b [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . b4ac4nh15p ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . ejmmacq22h ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . jtehowy45m ; time_g = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_g ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . os2il0fse5 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . ei5jzybccv ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
oapkaomns3 [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
bkephdao5q [ 0 ] ; tmp_n [ 1 ] = rtB . bkephdao5q [ 1 ] ; tmp_n [ 2 ] = rtB .
bkephdao5q [ 2 ] ; tmp_n [ 3 ] = rtB . bkephdao5q [ 3 ] ; tmp_l [ 1 ] = 4 ;
tmp_n [ 4 ] = rtB . ptr4jxtzru [ 0 ] ; tmp_n [ 5 ] = rtB . ptr4jxtzru [ 1 ] ;
tmp_n [ 6 ] = rtB . ptr4jxtzru [ 2 ] ; tmp_n [ 7 ] = rtB . ptr4jxtzru [ 3 ] ;
tmp_l [ 2 ] = 8 ; tmp_n [ 8 ] = rtB . d1bzzxr1py [ 0 ] ; tmp_n [ 9 ] = rtB .
d1bzzxr1py [ 1 ] ; tmp_n [ 10 ] = rtB . d1bzzxr1py [ 2 ] ; tmp_n [ 11 ] = rtB
. d1bzzxr1py [ 3 ] ; tmp_l [ 3 ] = 12 ; tmp_n [ 12 ] = rtB . ecbwmrxmul [ 0 ]
; tmp_n [ 13 ] = rtB . ecbwmrxmul [ 1 ] ; tmp_n [ 14 ] = rtB . ecbwmrxmul [ 2
] ; tmp_n [ 15 ] = rtB . ecbwmrxmul [ 3 ] ; tmp_l [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_n [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_l [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . ma153abo0u ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . mluequoe3f ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . kxuuq5q1xq ; time_j = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_j ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . a4sfa3kge2 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . lwufoxa2ik ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
aymgehdyan [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
moqztnnjfy [ 0 ] ; tmp_d [ 1 ] = rtB . moqztnnjfy [ 1 ] ; tmp_d [ 2 ] = rtB .
moqztnnjfy [ 2 ] ; tmp_d [ 3 ] = rtB . moqztnnjfy [ 3 ] ; tmp_o [ 1 ] = 4 ;
tmp_d [ 4 ] = rtB . e2oog2ldlk [ 0 ] ; tmp_d [ 5 ] = rtB . e2oog2ldlk [ 1 ] ;
tmp_d [ 6 ] = rtB . e2oog2ldlk [ 2 ] ; tmp_d [ 7 ] = rtB . e2oog2ldlk [ 3 ] ;
tmp_o [ 2 ] = 8 ; tmp_d [ 8 ] = rtB . l3qlly0y24 [ 0 ] ; tmp_d [ 9 ] = rtB .
l3qlly0y24 [ 1 ] ; tmp_d [ 10 ] = rtB . l3qlly0y24 [ 2 ] ; tmp_d [ 11 ] = rtB
. l3qlly0y24 [ 3 ] ; tmp_o [ 3 ] = 12 ; tmp_d [ 12 ] = rtB . nvp0xnvq03 [ 0 ]
; tmp_d [ 13 ] = rtB . nvp0xnvq03 [ 1 ] ; tmp_d [ 14 ] = rtB . nvp0xnvq03 [ 2
] ; tmp_d [ 15 ] = rtB . nvp0xnvq03 [ 3 ] ; tmp_o [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_d [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_o [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . ctneexngj0 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . lvrxzc3xbz ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID2 ( int_T tid ) {
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
nm1pedohdu ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN =
1 ; simulationData -> mData -> mTime . mX = & time ; simulationData -> mData
-> mContStates . mN = 28 ; simulationData -> mData -> mContStates . mX = &
rtX . lbl1bst0em [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 1 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . gmlwc0qame ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . eqfboolvki ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
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
gsxwzsrgs3 [ 0 ] ; tmp_p [ 1 ] = rtB . gsxwzsrgs3 [ 1 ] ; tmp_p [ 2 ] = rtB .
gsxwzsrgs3 [ 2 ] ; tmp_p [ 3 ] = rtB . gsxwzsrgs3 [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . o1ldcw3ssi [ 0 ] ; tmp_p [ 5 ] = rtB . o1ldcw3ssi [ 1 ] ;
tmp_p [ 6 ] = rtB . o1ldcw3ssi [ 2 ] ; tmp_p [ 7 ] = rtB . o1ldcw3ssi [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . ase3lj3apj [ 0 ] ; tmp_p [ 9 ] = rtB .
ase3lj3apj [ 1 ] ; tmp_p [ 10 ] = rtB . ase3lj3apj [ 2 ] ; tmp_p [ 11 ] = rtB
. ase3lj3apj [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . jcohfzsgmt [ 0 ]
; tmp_p [ 13 ] = rtB . jcohfzsgmt [ 1 ] ; tmp_p [ 14 ] = rtB . jcohfzsgmt [ 2
] ; tmp_p [ 15 ] = rtB . jcohfzsgmt [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . nwltqugjxl [ 0 ] ; tmp_p [ 17 ] = rtB . nwltqugjxl [ 1 ] ; tmp_p [ 18 ]
= rtB . nwltqugjxl [ 2 ] ; tmp_p [ 19 ] = rtB . nwltqugjxl [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . l4n2e5pdle [ 0 ] ; tmp_p [ 21 ] = rtB .
l4n2e5pdle [ 1 ] ; tmp_p [ 22 ] = rtB . l4n2e5pdle [ 2 ] ; tmp_p [ 23 ] = rtB
. l4n2e5pdle [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 28 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> lbl1bst0em [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . i2d1fpfnkr ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . gykjnl45ou ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } _rtXdot -> hzgkjmkam3 = rtB . ff0xl0o0on ; _rtXdot -> hgl1hrlhol = rtB
. fwfn0fe1sh ; _rtXdot -> h5wdubnkbp = rtB . ddsxiam50k ; _rtXdot ->
pdkkwspnr1 = rtB . f2w1fqz5qt ; _rtXdot -> l1zc10gh5a = rtB . fzulu4txkm ;
_rtXdot -> kmsnf4jarc = rtB . puv1ifcb43 ; simulationData = (
NeslSimulationData * ) rtDW . hcrcwgbmvq ; time_p = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_p ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . pziburvfat [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . lz0ilv4wwe ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
bqqyvce3il [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
mmt4jv2djd [ 0 ] ; tmp_m [ 1 ] = rtB . mmt4jv2djd [ 1 ] ; tmp_m [ 2 ] = rtB .
mmt4jv2djd [ 2 ] ; tmp_m [ 3 ] = rtB . mmt4jv2djd [ 3 ] ; tmp_g [ 1 ] = 4 ;
tmp_m [ 4 ] = rtB . pzylr3xzgl [ 0 ] ; tmp_m [ 5 ] = rtB . pzylr3xzgl [ 1 ] ;
tmp_m [ 6 ] = rtB . pzylr3xzgl [ 2 ] ; tmp_m [ 7 ] = rtB . pzylr3xzgl [ 3 ] ;
tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB . os31fqwjpr [ 0 ] ; tmp_m [ 9 ] = rtB .
os31fqwjpr [ 1 ] ; tmp_m [ 10 ] = rtB . os31fqwjpr [ 2 ] ; tmp_m [ 11 ] = rtB
. os31fqwjpr [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] = rtB . lgamsddxfw [ 0 ]
; tmp_m [ 13 ] = rtB . lgamsddxfw [ 1 ] ; tmp_m [ 14 ] = rtB . lgamsddxfw [ 2
] ; tmp_m [ 15 ] = rtB . lgamsddxfw [ 3 ] ; tmp_g [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
simulationData -> mData -> mDx . mN = 4 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> pziburvfat [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . az1yo1muxe ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . ocpy12p22k ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . dmsckoggfy ; time_e =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_e ; simulationData -> mData -> mContStates .
mN = 8 ; simulationData -> mData -> mContStates . mX = & rtX . ixvwzsiq3g [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . dxsqzsmbnr ; simulationData -> mData ->
mModeVector . mN = 10 ; simulationData -> mData -> mModeVector . mX = & rtDW
. glcb0crgzp [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
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
cxyv2au2fy [ 0 ] ; tmp_j [ 1 ] = rtB . cxyv2au2fy [ 1 ] ; tmp_j [ 2 ] = rtB .
cxyv2au2fy [ 2 ] ; tmp_j [ 3 ] = rtB . cxyv2au2fy [ 3 ] ; tmp_f [ 1 ] = 4 ;
tmp_j [ 4 ] = rtB . b0pjn0qe1a [ 0 ] ; tmp_j [ 5 ] = rtB . b0pjn0qe1a [ 1 ] ;
tmp_j [ 6 ] = rtB . b0pjn0qe1a [ 2 ] ; tmp_j [ 7 ] = rtB . b0pjn0qe1a [ 3 ] ;
tmp_f [ 2 ] = 8 ; tmp_j [ 8 ] = rtB . l5pujcrulu [ 0 ] ; tmp_j [ 9 ] = rtB .
l5pujcrulu [ 1 ] ; tmp_j [ 10 ] = rtB . l5pujcrulu [ 2 ] ; tmp_j [ 11 ] = rtB
. l5pujcrulu [ 3 ] ; tmp_f [ 3 ] = 12 ; tmp_j [ 12 ] = rtB . b2vobw2amc [ 0 ]
; tmp_j [ 13 ] = rtB . b2vobw2amc [ 1 ] ; tmp_j [ 14 ] = rtB . b2vobw2amc [ 2
] ; tmp_j [ 15 ] = rtB . b2vobw2amc [ 3 ] ; tmp_f [ 4 ] = 16 ; tmp_j [ 16 ] =
rtB . c4ncjpj4p3 [ 0 ] ; tmp_j [ 17 ] = rtB . c4ncjpj4p3 [ 1 ] ; tmp_j [ 18 ]
= rtB . c4ncjpj4p3 [ 2 ] ; tmp_j [ 19 ] = rtB . c4ncjpj4p3 [ 3 ] ; tmp_f [ 5
] = 20 ; tmp_j [ 20 ] = rtB . hbxx3xyytn [ 0 ] ; tmp_j [ 21 ] = rtB .
hbxx3xyytn [ 1 ] ; tmp_j [ 22 ] = rtB . hbxx3xyytn [ 2 ] ; tmp_j [ 23 ] = rtB
. hbxx3xyytn [ 3 ] ; tmp_f [ 6 ] = 24 ; tmp_j [ 24 ] = rtB . amckjsk01h [ 0 ]
; tmp_j [ 25 ] = rtB . amckjsk01h [ 1 ] ; tmp_j [ 26 ] = rtB . amckjsk01h [ 2
] ; tmp_j [ 27 ] = rtB . amckjsk01h [ 3 ] ; tmp_f [ 7 ] = 28 ; simulationData
-> mData -> mInputValues . mN = 28 ; simulationData -> mData -> mInputValues
. mX = & tmp_j [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 8 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_f [ 0 ] ;
simulationData -> mData -> mDx . mN = 8 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> ixvwzsiq3g [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . bkxjnhwg4q ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . ajpv151fp2 ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . pufhjztccr ; time_i =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_i ; simulationData -> mData -> mContStates .
mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX . a3wszcfpqa [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . e5jo5xbtad ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
naozloifhf [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
nedkaormew [ 0 ] ; tmp_c [ 1 ] = rtB . nedkaormew [ 1 ] ; tmp_c [ 2 ] = rtB .
nedkaormew [ 2 ] ; tmp_c [ 3 ] = rtB . nedkaormew [ 3 ] ; tmp_k [ 1 ] = 4 ;
tmp_c [ 4 ] = rtB . aowtlt2xsx [ 0 ] ; tmp_c [ 5 ] = rtB . aowtlt2xsx [ 1 ] ;
tmp_c [ 6 ] = rtB . aowtlt2xsx [ 2 ] ; tmp_c [ 7 ] = rtB . aowtlt2xsx [ 3 ] ;
tmp_k [ 2 ] = 8 ; tmp_c [ 8 ] = rtB . fltnebkpfo [ 0 ] ; tmp_c [ 9 ] = rtB .
fltnebkpfo [ 1 ] ; tmp_c [ 10 ] = rtB . fltnebkpfo [ 2 ] ; tmp_c [ 11 ] = rtB
. fltnebkpfo [ 3 ] ; tmp_k [ 3 ] = 12 ; tmp_c [ 12 ] = rtB . n51jz3r5ms [ 0 ]
; tmp_c [ 13 ] = rtB . n51jz3r5ms [ 1 ] ; tmp_c [ 14 ] = rtB . n51jz3r5ms [ 2
] ; tmp_c [ 15 ] = rtB . n51jz3r5ms [ 3 ] ; tmp_k [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_c [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_k [ 0 ] ;
simulationData -> mData -> mDx . mN = 4 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> a3wszcfpqa [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . aqd3u0h4s2 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . kcmwywlxl1 ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . hrkrw20ytk ; time_m =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_m ; simulationData -> mData -> mContStates .
mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX . hgiqkf2r13 [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . pyaa30hu1l ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
ena1m1tqgi [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
dycz5qe5i2 [ 0 ] ; tmp_b [ 1 ] = rtB . dycz5qe5i2 [ 1 ] ; tmp_b [ 2 ] = rtB .
dycz5qe5i2 [ 2 ] ; tmp_b [ 3 ] = rtB . dycz5qe5i2 [ 3 ] ; tmp_n [ 1 ] = 4 ;
tmp_b [ 4 ] = rtB . ar342mtoyy [ 0 ] ; tmp_b [ 5 ] = rtB . ar342mtoyy [ 1 ] ;
tmp_b [ 6 ] = rtB . ar342mtoyy [ 2 ] ; tmp_b [ 7 ] = rtB . ar342mtoyy [ 3 ] ;
tmp_n [ 2 ] = 8 ; tmp_b [ 8 ] = rtB . fntgtrllob [ 0 ] ; tmp_b [ 9 ] = rtB .
fntgtrllob [ 1 ] ; tmp_b [ 10 ] = rtB . fntgtrllob [ 2 ] ; tmp_b [ 11 ] = rtB
. fntgtrllob [ 3 ] ; tmp_n [ 3 ] = 12 ; tmp_b [ 12 ] = rtB . mevfua5fda [ 0 ]
; tmp_b [ 13 ] = rtB . mevfua5fda [ 1 ] ; tmp_b [ 14 ] = rtB . mevfua5fda [ 2
] ; tmp_b [ 15 ] = rtB . mevfua5fda [ 3 ] ; tmp_n [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_b [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_n [ 0 ] ;
simulationData -> mData -> mDx . mN = 4 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> hgiqkf2r13 [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . b4ac4nh15p ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . ejmmacq22h ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . jtehowy45m ; time_g =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_g ; simulationData -> mData -> mContStates .
mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX . os2il0fse5 [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . ei5jzybccv ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
oapkaomns3 [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
bkephdao5q [ 0 ] ; tmp_l [ 1 ] = rtB . bkephdao5q [ 1 ] ; tmp_l [ 2 ] = rtB .
bkephdao5q [ 2 ] ; tmp_l [ 3 ] = rtB . bkephdao5q [ 3 ] ; tmp_d [ 1 ] = 4 ;
tmp_l [ 4 ] = rtB . ptr4jxtzru [ 0 ] ; tmp_l [ 5 ] = rtB . ptr4jxtzru [ 1 ] ;
tmp_l [ 6 ] = rtB . ptr4jxtzru [ 2 ] ; tmp_l [ 7 ] = rtB . ptr4jxtzru [ 3 ] ;
tmp_d [ 2 ] = 8 ; tmp_l [ 8 ] = rtB . d1bzzxr1py [ 0 ] ; tmp_l [ 9 ] = rtB .
d1bzzxr1py [ 1 ] ; tmp_l [ 10 ] = rtB . d1bzzxr1py [ 2 ] ; tmp_l [ 11 ] = rtB
. d1bzzxr1py [ 3 ] ; tmp_d [ 3 ] = 12 ; tmp_l [ 12 ] = rtB . ecbwmrxmul [ 0 ]
; tmp_l [ 13 ] = rtB . ecbwmrxmul [ 1 ] ; tmp_l [ 14 ] = rtB . ecbwmrxmul [ 2
] ; tmp_l [ 15 ] = rtB . ecbwmrxmul [ 3 ] ; tmp_d [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_l [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_d [ 0 ] ;
simulationData -> mData -> mDx . mN = 4 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> os2il0fse5 [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . ma153abo0u ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . mluequoe3f ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . kxuuq5q1xq ; time_j =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_j ; simulationData -> mData -> mContStates .
mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX . a4sfa3kge2 [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . lwufoxa2ik ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
aymgehdyan [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
moqztnnjfy [ 0 ] ; tmp_o [ 1 ] = rtB . moqztnnjfy [ 1 ] ; tmp_o [ 2 ] = rtB .
moqztnnjfy [ 2 ] ; tmp_o [ 3 ] = rtB . moqztnnjfy [ 3 ] ; tmp_dz [ 1 ] = 4 ;
tmp_o [ 4 ] = rtB . e2oog2ldlk [ 0 ] ; tmp_o [ 5 ] = rtB . e2oog2ldlk [ 1 ] ;
tmp_o [ 6 ] = rtB . e2oog2ldlk [ 2 ] ; tmp_o [ 7 ] = rtB . e2oog2ldlk [ 3 ] ;
tmp_dz [ 2 ] = 8 ; tmp_o [ 8 ] = rtB . l3qlly0y24 [ 0 ] ; tmp_o [ 9 ] = rtB .
l3qlly0y24 [ 1 ] ; tmp_o [ 10 ] = rtB . l3qlly0y24 [ 2 ] ; tmp_o [ 11 ] = rtB
. l3qlly0y24 [ 3 ] ; tmp_dz [ 3 ] = 12 ; tmp_o [ 12 ] = rtB . nvp0xnvq03 [ 0
] ; tmp_o [ 13 ] = rtB . nvp0xnvq03 [ 1 ] ; tmp_o [ 14 ] = rtB . nvp0xnvq03 [
2 ] ; tmp_o [ 15 ] = rtB . nvp0xnvq03 [ 3 ] ; tmp_dz [ 4 ] = 16 ;
simulationData -> mData -> mInputValues . mN = 16 ; simulationData -> mData
-> mInputValues . mX = & tmp_o [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_dz [ 0 ] ; simulationData -> mData -> mDx . mN = 4 ; simulationData ->
mData -> mDx . mX = & _rtXdot -> a4sfa3kge2 [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . ctneexngj0 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . lvrxzc3xbz ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlProjection ( void ) { NeslSimulationData * simulationData ;
real_T time ; boolean_T tmp ; real_T tmp_p [ 24 ] ; int_T tmp_e [ 7 ] ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; int32_T tmp_i ; char * msg ; simulationData = ( NeslSimulationData * ) rtDW
. nm1pedohdu ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN
= 1 ; simulationData -> mData -> mTime . mX = & time ; simulationData ->
mData -> mContStates . mN = 28 ; simulationData -> mData -> mContStates . mX
= & rtX . lbl1bst0em [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 1
; simulationData -> mData -> mDiscStates . mX = & rtDW . gmlwc0qame ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . eqfboolvki ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
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
gsxwzsrgs3 [ 0 ] ; tmp_p [ 1 ] = rtB . gsxwzsrgs3 [ 1 ] ; tmp_p [ 2 ] = rtB .
gsxwzsrgs3 [ 2 ] ; tmp_p [ 3 ] = rtB . gsxwzsrgs3 [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . o1ldcw3ssi [ 0 ] ; tmp_p [ 5 ] = rtB . o1ldcw3ssi [ 1 ] ;
tmp_p [ 6 ] = rtB . o1ldcw3ssi [ 2 ] ; tmp_p [ 7 ] = rtB . o1ldcw3ssi [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . ase3lj3apj [ 0 ] ; tmp_p [ 9 ] = rtB .
ase3lj3apj [ 1 ] ; tmp_p [ 10 ] = rtB . ase3lj3apj [ 2 ] ; tmp_p [ 11 ] = rtB
. ase3lj3apj [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . jcohfzsgmt [ 0 ]
; tmp_p [ 13 ] = rtB . jcohfzsgmt [ 1 ] ; tmp_p [ 14 ] = rtB . jcohfzsgmt [ 2
] ; tmp_p [ 15 ] = rtB . jcohfzsgmt [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . nwltqugjxl [ 0 ] ; tmp_p [ 17 ] = rtB . nwltqugjxl [ 1 ] ; tmp_p [ 18 ]
= rtB . nwltqugjxl [ 2 ] ; tmp_p [ 19 ] = rtB . nwltqugjxl [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . l4n2e5pdle [ 0 ] ; tmp_p [ 21 ] = rtB .
l4n2e5pdle [ 1 ] ; tmp_p [ 22 ] = rtB . l4n2e5pdle [ 2 ] ; tmp_p [ 23 ] = rtB
. l4n2e5pdle [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . i2d1fpfnkr ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . gykjnl45ou ,
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
) ; simulationData = ( NeslSimulationData * ) rtDW . nm1pedohdu ; time =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time ; simulationData -> mData -> mContStates . mN
= 28 ; simulationData -> mData -> mContStates . mX = & rtX . lbl1bst0em [ 0 ]
; simulationData -> mData -> mDiscStates . mN = 1 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . gmlwc0qame ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
eqfboolvki ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
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
gsxwzsrgs3 [ 0 ] ; tmp_p [ 1 ] = rtB . gsxwzsrgs3 [ 1 ] ; tmp_p [ 2 ] = rtB .
gsxwzsrgs3 [ 2 ] ; tmp_p [ 3 ] = rtB . gsxwzsrgs3 [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . o1ldcw3ssi [ 0 ] ; tmp_p [ 5 ] = rtB . o1ldcw3ssi [ 1 ] ;
tmp_p [ 6 ] = rtB . o1ldcw3ssi [ 2 ] ; tmp_p [ 7 ] = rtB . o1ldcw3ssi [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . ase3lj3apj [ 0 ] ; tmp_p [ 9 ] = rtB .
ase3lj3apj [ 1 ] ; tmp_p [ 10 ] = rtB . ase3lj3apj [ 2 ] ; tmp_p [ 11 ] = rtB
. ase3lj3apj [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . jcohfzsgmt [ 0 ]
; tmp_p [ 13 ] = rtB . jcohfzsgmt [ 1 ] ; tmp_p [ 14 ] = rtB . jcohfzsgmt [ 2
] ; tmp_p [ 15 ] = rtB . jcohfzsgmt [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . nwltqugjxl [ 0 ] ; tmp_p [ 17 ] = rtB . nwltqugjxl [ 1 ] ; tmp_p [ 18 ]
= rtB . nwltqugjxl [ 2 ] ; tmp_p [ 19 ] = rtB . nwltqugjxl [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . l4n2e5pdle [ 0 ] ; tmp_p [ 21 ] = rtB .
l4n2e5pdle [ 1 ] ; tmp_p [ 22 ] = rtB . l4n2e5pdle [ 2 ] ; tmp_p [ 23 ] = rtB
. l4n2e5pdle [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 28 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> lbl1bst0em [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . i2d1fpfnkr ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . gykjnl45ou ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } _rtXdot -> hzgkjmkam3 = rtB . ff0xl0o0on ; _rtXdot -> hgl1hrlhol = rtB
. fwfn0fe1sh ; _rtXdot -> h5wdubnkbp = rtB . ddsxiam50k ; _rtXdot ->
pdkkwspnr1 = rtB . f2w1fqz5qt ; _rtXdot -> l1zc10gh5a = rtB . fzulu4txkm ;
_rtXdot -> kmsnf4jarc = rtB . puv1ifcb43 ; simulationData = (
NeslSimulationData * ) rtDW . hcrcwgbmvq ; time_p = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_p ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . pziburvfat [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . lz0ilv4wwe ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
bqqyvce3il [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
mmt4jv2djd [ 0 ] ; tmp_m [ 1 ] = rtB . mmt4jv2djd [ 1 ] ; tmp_m [ 2 ] = rtB .
mmt4jv2djd [ 2 ] ; tmp_m [ 3 ] = rtB . mmt4jv2djd [ 3 ] ; tmp_g [ 1 ] = 4 ;
tmp_m [ 4 ] = rtB . pzylr3xzgl [ 0 ] ; tmp_m [ 5 ] = rtB . pzylr3xzgl [ 1 ] ;
tmp_m [ 6 ] = rtB . pzylr3xzgl [ 2 ] ; tmp_m [ 7 ] = rtB . pzylr3xzgl [ 3 ] ;
tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB . os31fqwjpr [ 0 ] ; tmp_m [ 9 ] = rtB .
os31fqwjpr [ 1 ] ; tmp_m [ 10 ] = rtB . os31fqwjpr [ 2 ] ; tmp_m [ 11 ] = rtB
. os31fqwjpr [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] = rtB . lgamsddxfw [ 0 ]
; tmp_m [ 13 ] = rtB . lgamsddxfw [ 1 ] ; tmp_m [ 14 ] = rtB . lgamsddxfw [ 2
] ; tmp_m [ 15 ] = rtB . lgamsddxfw [ 3 ] ; tmp_g [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
simulationData -> mData -> mDx . mN = 4 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> pziburvfat [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . az1yo1muxe ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . ocpy12p22k ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } simulationData = ( NeslSimulationData * ) rtDW . dmsckoggfy ;
time_e = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_e ; simulationData -> mData ->
mContStates . mN = 8 ; simulationData -> mData -> mContStates . mX = & rtX .
ixvwzsiq3g [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . dxsqzsmbnr ;
simulationData -> mData -> mModeVector . mN = 10 ; simulationData -> mData ->
mModeVector . mX = & rtDW . glcb0crgzp [ 0 ] ; tmp = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_f [
0 ] = 0 ; tmp_j [ 0 ] = rtB . cxyv2au2fy [ 0 ] ; tmp_j [ 1 ] = rtB .
cxyv2au2fy [ 1 ] ; tmp_j [ 2 ] = rtB . cxyv2au2fy [ 2 ] ; tmp_j [ 3 ] = rtB .
cxyv2au2fy [ 3 ] ; tmp_f [ 1 ] = 4 ; tmp_j [ 4 ] = rtB . b0pjn0qe1a [ 0 ] ;
tmp_j [ 5 ] = rtB . b0pjn0qe1a [ 1 ] ; tmp_j [ 6 ] = rtB . b0pjn0qe1a [ 2 ] ;
tmp_j [ 7 ] = rtB . b0pjn0qe1a [ 3 ] ; tmp_f [ 2 ] = 8 ; tmp_j [ 8 ] = rtB .
l5pujcrulu [ 0 ] ; tmp_j [ 9 ] = rtB . l5pujcrulu [ 1 ] ; tmp_j [ 10 ] = rtB
. l5pujcrulu [ 2 ] ; tmp_j [ 11 ] = rtB . l5pujcrulu [ 3 ] ; tmp_f [ 3 ] = 12
; tmp_j [ 12 ] = rtB . b2vobw2amc [ 0 ] ; tmp_j [ 13 ] = rtB . b2vobw2amc [ 1
] ; tmp_j [ 14 ] = rtB . b2vobw2amc [ 2 ] ; tmp_j [ 15 ] = rtB . b2vobw2amc [
3 ] ; tmp_f [ 4 ] = 16 ; tmp_j [ 16 ] = rtB . c4ncjpj4p3 [ 0 ] ; tmp_j [ 17 ]
= rtB . c4ncjpj4p3 [ 1 ] ; tmp_j [ 18 ] = rtB . c4ncjpj4p3 [ 2 ] ; tmp_j [ 19
] = rtB . c4ncjpj4p3 [ 3 ] ; tmp_f [ 5 ] = 20 ; tmp_j [ 20 ] = rtB .
hbxx3xyytn [ 0 ] ; tmp_j [ 21 ] = rtB . hbxx3xyytn [ 1 ] ; tmp_j [ 22 ] = rtB
. hbxx3xyytn [ 2 ] ; tmp_j [ 23 ] = rtB . hbxx3xyytn [ 3 ] ; tmp_f [ 6 ] = 24
; tmp_j [ 24 ] = rtB . amckjsk01h [ 0 ] ; tmp_j [ 25 ] = rtB . amckjsk01h [ 1
] ; tmp_j [ 26 ] = rtB . amckjsk01h [ 2 ] ; tmp_j [ 27 ] = rtB . amckjsk01h [
3 ] ; tmp_f [ 7 ] = 28 ; simulationData -> mData -> mInputValues . mN = 28 ;
simulationData -> mData -> mInputValues . mX = & tmp_j [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 8 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_f [ 0 ] ; simulationData -> mData -> mDx . mN = 8 ;
simulationData -> mData -> mDx . mX = & _rtXdot -> ixvwzsiq3g [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . bkxjnhwg4q ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . ajpv151fp2 ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } simulationData = ( NeslSimulationData * ) rtDW . pufhjztccr ;
time_i = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_i ; simulationData -> mData ->
mContStates . mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX .
a3wszcfpqa [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . e5jo5xbtad ;
simulationData -> mData -> mModeVector . mN = 5 ; simulationData -> mData ->
mModeVector . mX = & rtDW . naozloifhf [ 0 ] ; tmp = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_k [
0 ] = 0 ; tmp_c [ 0 ] = rtB . nedkaormew [ 0 ] ; tmp_c [ 1 ] = rtB .
nedkaormew [ 1 ] ; tmp_c [ 2 ] = rtB . nedkaormew [ 2 ] ; tmp_c [ 3 ] = rtB .
nedkaormew [ 3 ] ; tmp_k [ 1 ] = 4 ; tmp_c [ 4 ] = rtB . aowtlt2xsx [ 0 ] ;
tmp_c [ 5 ] = rtB . aowtlt2xsx [ 1 ] ; tmp_c [ 6 ] = rtB . aowtlt2xsx [ 2 ] ;
tmp_c [ 7 ] = rtB . aowtlt2xsx [ 3 ] ; tmp_k [ 2 ] = 8 ; tmp_c [ 8 ] = rtB .
fltnebkpfo [ 0 ] ; tmp_c [ 9 ] = rtB . fltnebkpfo [ 1 ] ; tmp_c [ 10 ] = rtB
. fltnebkpfo [ 2 ] ; tmp_c [ 11 ] = rtB . fltnebkpfo [ 3 ] ; tmp_k [ 3 ] = 12
; tmp_c [ 12 ] = rtB . n51jz3r5ms [ 0 ] ; tmp_c [ 13 ] = rtB . n51jz3r5ms [ 1
] ; tmp_c [ 14 ] = rtB . n51jz3r5ms [ 2 ] ; tmp_c [ 15 ] = rtB . n51jz3r5ms [
3 ] ; tmp_k [ 4 ] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ;
simulationData -> mData -> mInputValues . mX = & tmp_c [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_k [ 0 ] ; simulationData -> mData -> mDx . mN = 4 ;
simulationData -> mData -> mDx . mX = & _rtXdot -> a3wszcfpqa [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . aqd3u0h4s2 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . kcmwywlxl1 ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } simulationData = ( NeslSimulationData * ) rtDW . hrkrw20ytk ;
time_m = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_m ; simulationData -> mData ->
mContStates . mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX .
hgiqkf2r13 [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . pyaa30hu1l ;
simulationData -> mData -> mModeVector . mN = 5 ; simulationData -> mData ->
mModeVector . mX = & rtDW . ena1m1tqgi [ 0 ] ; tmp = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_n [
0 ] = 0 ; tmp_b [ 0 ] = rtB . dycz5qe5i2 [ 0 ] ; tmp_b [ 1 ] = rtB .
dycz5qe5i2 [ 1 ] ; tmp_b [ 2 ] = rtB . dycz5qe5i2 [ 2 ] ; tmp_b [ 3 ] = rtB .
dycz5qe5i2 [ 3 ] ; tmp_n [ 1 ] = 4 ; tmp_b [ 4 ] = rtB . ar342mtoyy [ 0 ] ;
tmp_b [ 5 ] = rtB . ar342mtoyy [ 1 ] ; tmp_b [ 6 ] = rtB . ar342mtoyy [ 2 ] ;
tmp_b [ 7 ] = rtB . ar342mtoyy [ 3 ] ; tmp_n [ 2 ] = 8 ; tmp_b [ 8 ] = rtB .
fntgtrllob [ 0 ] ; tmp_b [ 9 ] = rtB . fntgtrllob [ 1 ] ; tmp_b [ 10 ] = rtB
. fntgtrllob [ 2 ] ; tmp_b [ 11 ] = rtB . fntgtrllob [ 3 ] ; tmp_n [ 3 ] = 12
; tmp_b [ 12 ] = rtB . mevfua5fda [ 0 ] ; tmp_b [ 13 ] = rtB . mevfua5fda [ 1
] ; tmp_b [ 14 ] = rtB . mevfua5fda [ 2 ] ; tmp_b [ 15 ] = rtB . mevfua5fda [
3 ] ; tmp_n [ 4 ] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ;
simulationData -> mData -> mInputValues . mX = & tmp_b [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_n [ 0 ] ; simulationData -> mData -> mDx . mN = 4 ;
simulationData -> mData -> mDx . mX = & _rtXdot -> hgiqkf2r13 [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . b4ac4nh15p ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . ejmmacq22h ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } simulationData = ( NeslSimulationData * ) rtDW . jtehowy45m ;
time_g = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_g ; simulationData -> mData ->
mContStates . mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX .
os2il0fse5 [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . ei5jzybccv ;
simulationData -> mData -> mModeVector . mN = 5 ; simulationData -> mData ->
mModeVector . mX = & rtDW . oapkaomns3 [ 0 ] ; tmp = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_d [
0 ] = 0 ; tmp_l [ 0 ] = rtB . bkephdao5q [ 0 ] ; tmp_l [ 1 ] = rtB .
bkephdao5q [ 1 ] ; tmp_l [ 2 ] = rtB . bkephdao5q [ 2 ] ; tmp_l [ 3 ] = rtB .
bkephdao5q [ 3 ] ; tmp_d [ 1 ] = 4 ; tmp_l [ 4 ] = rtB . ptr4jxtzru [ 0 ] ;
tmp_l [ 5 ] = rtB . ptr4jxtzru [ 1 ] ; tmp_l [ 6 ] = rtB . ptr4jxtzru [ 2 ] ;
tmp_l [ 7 ] = rtB . ptr4jxtzru [ 3 ] ; tmp_d [ 2 ] = 8 ; tmp_l [ 8 ] = rtB .
d1bzzxr1py [ 0 ] ; tmp_l [ 9 ] = rtB . d1bzzxr1py [ 1 ] ; tmp_l [ 10 ] = rtB
. d1bzzxr1py [ 2 ] ; tmp_l [ 11 ] = rtB . d1bzzxr1py [ 3 ] ; tmp_d [ 3 ] = 12
; tmp_l [ 12 ] = rtB . ecbwmrxmul [ 0 ] ; tmp_l [ 13 ] = rtB . ecbwmrxmul [ 1
] ; tmp_l [ 14 ] = rtB . ecbwmrxmul [ 2 ] ; tmp_l [ 15 ] = rtB . ecbwmrxmul [
3 ] ; tmp_d [ 4 ] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ;
simulationData -> mData -> mInputValues . mX = & tmp_l [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_d [ 0 ] ; simulationData -> mData -> mDx . mN = 4 ;
simulationData -> mData -> mDx . mX = & _rtXdot -> os2il0fse5 [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . ma153abo0u ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . mluequoe3f ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } simulationData = ( NeslSimulationData * ) rtDW . kxuuq5q1xq ;
time_j = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_j ; simulationData -> mData ->
mContStates . mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX .
a4sfa3kge2 [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . lwufoxa2ik ;
simulationData -> mData -> mModeVector . mN = 5 ; simulationData -> mData ->
mModeVector . mX = & rtDW . aymgehdyan [ 0 ] ; tmp = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_dz
[ 0 ] = 0 ; tmp_o [ 0 ] = rtB . moqztnnjfy [ 0 ] ; tmp_o [ 1 ] = rtB .
moqztnnjfy [ 1 ] ; tmp_o [ 2 ] = rtB . moqztnnjfy [ 2 ] ; tmp_o [ 3 ] = rtB .
moqztnnjfy [ 3 ] ; tmp_dz [ 1 ] = 4 ; tmp_o [ 4 ] = rtB . e2oog2ldlk [ 0 ] ;
tmp_o [ 5 ] = rtB . e2oog2ldlk [ 1 ] ; tmp_o [ 6 ] = rtB . e2oog2ldlk [ 2 ] ;
tmp_o [ 7 ] = rtB . e2oog2ldlk [ 3 ] ; tmp_dz [ 2 ] = 8 ; tmp_o [ 8 ] = rtB .
l3qlly0y24 [ 0 ] ; tmp_o [ 9 ] = rtB . l3qlly0y24 [ 1 ] ; tmp_o [ 10 ] = rtB
. l3qlly0y24 [ 2 ] ; tmp_o [ 11 ] = rtB . l3qlly0y24 [ 3 ] ; tmp_dz [ 3 ] =
12 ; tmp_o [ 12 ] = rtB . nvp0xnvq03 [ 0 ] ; tmp_o [ 13 ] = rtB . nvp0xnvq03
[ 1 ] ; tmp_o [ 14 ] = rtB . nvp0xnvq03 [ 2 ] ; tmp_o [ 15 ] = rtB .
nvp0xnvq03 [ 3 ] ; tmp_dz [ 4 ] = 16 ; simulationData -> mData ->
mInputValues . mN = 16 ; simulationData -> mData -> mInputValues . mX = &
tmp_o [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_dz [ 0 ] ;
simulationData -> mData -> mDx . mN = 4 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> a4sfa3kge2 [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . ctneexngj0 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . lvrxzc3xbz ,
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
NeslSimulationData * ) rtDW . hcrcwgbmvq ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . pziburvfat [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . lz0ilv4wwe ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
bqqyvce3il [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
mmt4jv2djd [ 0 ] ; tmp_p [ 1 ] = rtB . mmt4jv2djd [ 1 ] ; tmp_p [ 2 ] = rtB .
mmt4jv2djd [ 2 ] ; tmp_p [ 3 ] = rtB . mmt4jv2djd [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . pzylr3xzgl [ 0 ] ; tmp_p [ 5 ] = rtB . pzylr3xzgl [ 1 ] ;
tmp_p [ 6 ] = rtB . pzylr3xzgl [ 2 ] ; tmp_p [ 7 ] = rtB . pzylr3xzgl [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . os31fqwjpr [ 0 ] ; tmp_p [ 9 ] = rtB .
os31fqwjpr [ 1 ] ; tmp_p [ 10 ] = rtB . os31fqwjpr [ 2 ] ; tmp_p [ 11 ] = rtB
. os31fqwjpr [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . lgamsddxfw [ 0 ]
; tmp_p [ 13 ] = rtB . lgamsddxfw [ 1 ] ; tmp_p [ 14 ] = rtB . lgamsddxfw [ 2
] ; tmp_p [ 15 ] = rtB . lgamsddxfw [ 3 ] ; tmp_e [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ; tmp_i =
rtMassMatrix . pr ; tmp_i = double_pointer_shift ( tmp_i , rtDW . jvlqksr05b
) ; simulationData -> mData -> mMassMatrixPr . mN = 2 ; simulationData ->
mData -> mMassMatrixPr . mX = tmp_i ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . az1yo1muxe ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_m =
ne_simulator_method ( ( NeslSimulator * ) rtDW . ocpy12p22k ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_m != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . dmsckoggfy ; time_p =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_p ; simulationData -> mData -> mContStates .
mN = 8 ; simulationData -> mData -> mContStates . mX = & rtX . ixvwzsiq3g [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . dxsqzsmbnr ; simulationData -> mData ->
mModeVector . mN = 10 ; simulationData -> mData -> mModeVector . mX = & rtDW
. glcb0crgzp [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
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
cxyv2au2fy [ 0 ] ; tmp_g [ 1 ] = rtB . cxyv2au2fy [ 1 ] ; tmp_g [ 2 ] = rtB .
cxyv2au2fy [ 2 ] ; tmp_g [ 3 ] = rtB . cxyv2au2fy [ 3 ] ; tmp_j [ 1 ] = 4 ;
tmp_g [ 4 ] = rtB . b0pjn0qe1a [ 0 ] ; tmp_g [ 5 ] = rtB . b0pjn0qe1a [ 1 ] ;
tmp_g [ 6 ] = rtB . b0pjn0qe1a [ 2 ] ; tmp_g [ 7 ] = rtB . b0pjn0qe1a [ 3 ] ;
tmp_j [ 2 ] = 8 ; tmp_g [ 8 ] = rtB . l5pujcrulu [ 0 ] ; tmp_g [ 9 ] = rtB .
l5pujcrulu [ 1 ] ; tmp_g [ 10 ] = rtB . l5pujcrulu [ 2 ] ; tmp_g [ 11 ] = rtB
. l5pujcrulu [ 3 ] ; tmp_j [ 3 ] = 12 ; tmp_g [ 12 ] = rtB . b2vobw2amc [ 0 ]
; tmp_g [ 13 ] = rtB . b2vobw2amc [ 1 ] ; tmp_g [ 14 ] = rtB . b2vobw2amc [ 2
] ; tmp_g [ 15 ] = rtB . b2vobw2amc [ 3 ] ; tmp_j [ 4 ] = 16 ; tmp_g [ 16 ] =
rtB . c4ncjpj4p3 [ 0 ] ; tmp_g [ 17 ] = rtB . c4ncjpj4p3 [ 1 ] ; tmp_g [ 18 ]
= rtB . c4ncjpj4p3 [ 2 ] ; tmp_g [ 19 ] = rtB . c4ncjpj4p3 [ 3 ] ; tmp_j [ 5
] = 20 ; tmp_g [ 20 ] = rtB . hbxx3xyytn [ 0 ] ; tmp_g [ 21 ] = rtB .
hbxx3xyytn [ 1 ] ; tmp_g [ 22 ] = rtB . hbxx3xyytn [ 2 ] ; tmp_g [ 23 ] = rtB
. hbxx3xyytn [ 3 ] ; tmp_j [ 6 ] = 24 ; tmp_g [ 24 ] = rtB . amckjsk01h [ 0 ]
; tmp_g [ 25 ] = rtB . amckjsk01h [ 1 ] ; tmp_g [ 26 ] = rtB . amckjsk01h [ 2
] ; tmp_g [ 27 ] = rtB . amckjsk01h [ 3 ] ; tmp_j [ 7 ] = 28 ; simulationData
-> mData -> mInputValues . mN = 28 ; simulationData -> mData -> mInputValues
. mX = & tmp_g [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 8 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_j [ 0 ] ; tmp_i =
rtMassMatrix . pr ; tmp_i = double_pointer_shift ( tmp_i , rtDW . mtqczrwkkn
) ; simulationData -> mData -> mMassMatrixPr . mN = 4 ; simulationData ->
mData -> mMassMatrixPr . mX = tmp_i ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . bkxjnhwg4q ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_m =
ne_simulator_method ( ( NeslSimulator * ) rtDW . ajpv151fp2 ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_m != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . pufhjztccr ; time_e =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_e ; simulationData -> mData -> mContStates .
mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX . a3wszcfpqa [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . e5jo5xbtad ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
naozloifhf [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
nedkaormew [ 0 ] ; tmp_f [ 1 ] = rtB . nedkaormew [ 1 ] ; tmp_f [ 2 ] = rtB .
nedkaormew [ 2 ] ; tmp_f [ 3 ] = rtB . nedkaormew [ 3 ] ; tmp_c [ 1 ] = 4 ;
tmp_f [ 4 ] = rtB . aowtlt2xsx [ 0 ] ; tmp_f [ 5 ] = rtB . aowtlt2xsx [ 1 ] ;
tmp_f [ 6 ] = rtB . aowtlt2xsx [ 2 ] ; tmp_f [ 7 ] = rtB . aowtlt2xsx [ 3 ] ;
tmp_c [ 2 ] = 8 ; tmp_f [ 8 ] = rtB . fltnebkpfo [ 0 ] ; tmp_f [ 9 ] = rtB .
fltnebkpfo [ 1 ] ; tmp_f [ 10 ] = rtB . fltnebkpfo [ 2 ] ; tmp_f [ 11 ] = rtB
. fltnebkpfo [ 3 ] ; tmp_c [ 3 ] = 12 ; tmp_f [ 12 ] = rtB . n51jz3r5ms [ 0 ]
; tmp_f [ 13 ] = rtB . n51jz3r5ms [ 1 ] ; tmp_f [ 14 ] = rtB . n51jz3r5ms [ 2
] ; tmp_f [ 15 ] = rtB . n51jz3r5ms [ 3 ] ; tmp_c [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_f [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_c [ 0 ] ; tmp_i =
rtMassMatrix . pr ; tmp_i = double_pointer_shift ( tmp_i , rtDW . jxqzqpx1f2
) ; simulationData -> mData -> mMassMatrixPr . mN = 2 ; simulationData ->
mData -> mMassMatrixPr . mX = tmp_i ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . aqd3u0h4s2 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_m =
ne_simulator_method ( ( NeslSimulator * ) rtDW . kcmwywlxl1 ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_m != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . hrkrw20ytk ; time_i =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_i ; simulationData -> mData -> mContStates .
mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX . hgiqkf2r13 [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . pyaa30hu1l ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
ena1m1tqgi [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
dycz5qe5i2 [ 0 ] ; tmp_k [ 1 ] = rtB . dycz5qe5i2 [ 1 ] ; tmp_k [ 2 ] = rtB .
dycz5qe5i2 [ 2 ] ; tmp_k [ 3 ] = rtB . dycz5qe5i2 [ 3 ] ; tmp_b [ 1 ] = 4 ;
tmp_k [ 4 ] = rtB . ar342mtoyy [ 0 ] ; tmp_k [ 5 ] = rtB . ar342mtoyy [ 1 ] ;
tmp_k [ 6 ] = rtB . ar342mtoyy [ 2 ] ; tmp_k [ 7 ] = rtB . ar342mtoyy [ 3 ] ;
tmp_b [ 2 ] = 8 ; tmp_k [ 8 ] = rtB . fntgtrllob [ 0 ] ; tmp_k [ 9 ] = rtB .
fntgtrllob [ 1 ] ; tmp_k [ 10 ] = rtB . fntgtrllob [ 2 ] ; tmp_k [ 11 ] = rtB
. fntgtrllob [ 3 ] ; tmp_b [ 3 ] = 12 ; tmp_k [ 12 ] = rtB . mevfua5fda [ 0 ]
; tmp_k [ 13 ] = rtB . mevfua5fda [ 1 ] ; tmp_k [ 14 ] = rtB . mevfua5fda [ 2
] ; tmp_k [ 15 ] = rtB . mevfua5fda [ 3 ] ; tmp_b [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_k [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_b [ 0 ] ; tmp_i =
rtMassMatrix . pr ; tmp_i = double_pointer_shift ( tmp_i , rtDW . k1zspym0ms
) ; simulationData -> mData -> mMassMatrixPr . mN = 2 ; simulationData ->
mData -> mMassMatrixPr . mX = tmp_i ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . b4ac4nh15p ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_m =
ne_simulator_method ( ( NeslSimulator * ) rtDW . ejmmacq22h ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_m != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . jtehowy45m ; time_m =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_m ; simulationData -> mData -> mContStates .
mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX . os2il0fse5 [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . ei5jzybccv ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
oapkaomns3 [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
bkephdao5q [ 0 ] ; tmp_n [ 1 ] = rtB . bkephdao5q [ 1 ] ; tmp_n [ 2 ] = rtB .
bkephdao5q [ 2 ] ; tmp_n [ 3 ] = rtB . bkephdao5q [ 3 ] ; tmp_l [ 1 ] = 4 ;
tmp_n [ 4 ] = rtB . ptr4jxtzru [ 0 ] ; tmp_n [ 5 ] = rtB . ptr4jxtzru [ 1 ] ;
tmp_n [ 6 ] = rtB . ptr4jxtzru [ 2 ] ; tmp_n [ 7 ] = rtB . ptr4jxtzru [ 3 ] ;
tmp_l [ 2 ] = 8 ; tmp_n [ 8 ] = rtB . d1bzzxr1py [ 0 ] ; tmp_n [ 9 ] = rtB .
d1bzzxr1py [ 1 ] ; tmp_n [ 10 ] = rtB . d1bzzxr1py [ 2 ] ; tmp_n [ 11 ] = rtB
. d1bzzxr1py [ 3 ] ; tmp_l [ 3 ] = 12 ; tmp_n [ 12 ] = rtB . ecbwmrxmul [ 0 ]
; tmp_n [ 13 ] = rtB . ecbwmrxmul [ 1 ] ; tmp_n [ 14 ] = rtB . ecbwmrxmul [ 2
] ; tmp_n [ 15 ] = rtB . ecbwmrxmul [ 3 ] ; tmp_l [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_n [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_l [ 0 ] ; tmp_i =
rtMassMatrix . pr ; tmp_i = double_pointer_shift ( tmp_i , rtDW . bewafdk0ul
) ; simulationData -> mData -> mMassMatrixPr . mN = 2 ; simulationData ->
mData -> mMassMatrixPr . mX = tmp_i ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . ma153abo0u ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_m =
ne_simulator_method ( ( NeslSimulator * ) rtDW . mluequoe3f ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_m != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . kxuuq5q1xq ; time_g =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_g ; simulationData -> mData -> mContStates .
mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX . a4sfa3kge2 [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . lwufoxa2ik ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
aymgehdyan [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
moqztnnjfy [ 0 ] ; tmp_d [ 1 ] = rtB . moqztnnjfy [ 1 ] ; tmp_d [ 2 ] = rtB .
moqztnnjfy [ 2 ] ; tmp_d [ 3 ] = rtB . moqztnnjfy [ 3 ] ; tmp_o [ 1 ] = 4 ;
tmp_d [ 4 ] = rtB . e2oog2ldlk [ 0 ] ; tmp_d [ 5 ] = rtB . e2oog2ldlk [ 1 ] ;
tmp_d [ 6 ] = rtB . e2oog2ldlk [ 2 ] ; tmp_d [ 7 ] = rtB . e2oog2ldlk [ 3 ] ;
tmp_o [ 2 ] = 8 ; tmp_d [ 8 ] = rtB . l3qlly0y24 [ 0 ] ; tmp_d [ 9 ] = rtB .
l3qlly0y24 [ 1 ] ; tmp_d [ 10 ] = rtB . l3qlly0y24 [ 2 ] ; tmp_d [ 11 ] = rtB
. l3qlly0y24 [ 3 ] ; tmp_o [ 3 ] = 12 ; tmp_d [ 12 ] = rtB . nvp0xnvq03 [ 0 ]
; tmp_d [ 13 ] = rtB . nvp0xnvq03 [ 1 ] ; tmp_d [ 14 ] = rtB . nvp0xnvq03 [ 2
] ; tmp_d [ 15 ] = rtB . nvp0xnvq03 [ 3 ] ; tmp_o [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_d [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_o [ 0 ] ; tmp_i =
rtMassMatrix . pr ; tmp_i = double_pointer_shift ( tmp_i , rtDW . my5qkp4udk
) ; simulationData -> mData -> mMassMatrixPr . mN = 2 ; simulationData ->
mData -> mMassMatrixPr . mX = tmp_i ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . ctneexngj0 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_m =
ne_simulator_method ( ( NeslSimulator * ) rtDW . lvrxzc3xbz ,
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
ssGetSolverZcSignalVector ( rtS ) ) ; _rtZCSV -> gzuszwt5jb = rtB .
cicsqsen0r ; _rtZCSV -> mdpyyamjp5 = rtB . ncmezuqmmk - rtP . D1_UpperSat ;
_rtZCSV -> fauogszbpi = rtB . ncmezuqmmk - rtP . D1_LowerSat ; _rtZCSV ->
a24gog0xr2 = rtB . kfkj44nk3p ; _rtZCSV -> iunom5bxpn = rtB . cw0yilgxki -
rtP . D2_UpperSat ; _rtZCSV -> bp5urmum4s = rtB . cw0yilgxki - rtP .
D2_LowerSat ; _rtZCSV -> pkuki0xzck = rtB . jihi4nct2b ; _rtZCSV ->
d5rzy4g1l4 = rtB . i3zdseytux - rtP . D3_UpperSat ; _rtZCSV -> ha4fkrx4qe =
rtB . i3zdseytux - rtP . D3_LowerSat ; _rtZCSV -> jp4anatqt0 = rtB .
nji1qqccll ; _rtZCSV -> cpolxnigof = rtB . aqydko43rs - rtP . D4_UpperSat ;
_rtZCSV -> ox35oemztn = rtB . aqydko43rs - rtP . D4_LowerSat ; _rtZCSV ->
kvmrm45omg = rtB . c1p1nl5zha ; _rtZCSV -> cdryi3b5gi = rtB . cvhnksc212 -
rtP . D5_UpperSat ; _rtZCSV -> p0zlmyaw3h = rtB . cvhnksc212 - rtP .
D5_LowerSat ; _rtZCSV -> adhgylsgdk = rtB . apuphxyrha ; _rtZCSV ->
f2u4c3h2rw = rtB . b11x1b5dds - rtP . D6_UpperSat ; _rtZCSV -> jqkc5r0usf =
rtB . b11x1b5dds - rtP . D6_LowerSat ; simulationData = ( NeslSimulationData
* ) rtDW . hcrcwgbmvq ; time = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time ;
simulationData -> mData -> mContStates . mN = 4 ; simulationData -> mData ->
mContStates . mX = & rtX . pziburvfat [ 0 ] ; simulationData -> mData ->
mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = & rtDW .
lz0ilv4wwe ; simulationData -> mData -> mModeVector . mN = 5 ; simulationData
-> mData -> mModeVector . mX = & rtDW . bqqyvce3il [ 0 ] ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_e [
0 ] = 0 ; tmp_p [ 0 ] = rtB . mmt4jv2djd [ 0 ] ; tmp_p [ 1 ] = rtB .
mmt4jv2djd [ 1 ] ; tmp_p [ 2 ] = rtB . mmt4jv2djd [ 2 ] ; tmp_p [ 3 ] = rtB .
mmt4jv2djd [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . pzylr3xzgl [ 0 ] ;
tmp_p [ 5 ] = rtB . pzylr3xzgl [ 1 ] ; tmp_p [ 6 ] = rtB . pzylr3xzgl [ 2 ] ;
tmp_p [ 7 ] = rtB . pzylr3xzgl [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB .
os31fqwjpr [ 0 ] ; tmp_p [ 9 ] = rtB . os31fqwjpr [ 1 ] ; tmp_p [ 10 ] = rtB
. os31fqwjpr [ 2 ] ; tmp_p [ 11 ] = rtB . os31fqwjpr [ 3 ] ; tmp_e [ 3 ] = 12
; tmp_p [ 12 ] = rtB . lgamsddxfw [ 0 ] ; tmp_p [ 13 ] = rtB . lgamsddxfw [ 1
] ; tmp_p [ 14 ] = rtB . lgamsddxfw [ 2 ] ; tmp_p [ 15 ] = rtB . lgamsddxfw [
3 ] ; tmp_e [ 4 ] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ;
simulationData -> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_e [ 0 ] ; simulationData -> mData -> mNonSampledZCs . mN = 5 ;
simulationData -> mData -> mNonSampledZCs . mX = & _rtZCSV -> h02unwobz1 ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . az1yo1muxe ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_d = ne_simulator_method ( ( NeslSimulator * ) rtDW . ocpy12p22k ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_d !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . dmsckoggfy ; time_p =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_p ; simulationData -> mData -> mContStates .
mN = 8 ; simulationData -> mData -> mContStates . mX = & rtX . ixvwzsiq3g [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . dxsqzsmbnr ; simulationData -> mData ->
mModeVector . mN = 10 ; simulationData -> mData -> mModeVector . mX = & rtDW
. glcb0crgzp [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
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
cxyv2au2fy [ 0 ] ; tmp_i [ 1 ] = rtB . cxyv2au2fy [ 1 ] ; tmp_i [ 2 ] = rtB .
cxyv2au2fy [ 2 ] ; tmp_i [ 3 ] = rtB . cxyv2au2fy [ 3 ] ; tmp_m [ 1 ] = 4 ;
tmp_i [ 4 ] = rtB . b0pjn0qe1a [ 0 ] ; tmp_i [ 5 ] = rtB . b0pjn0qe1a [ 1 ] ;
tmp_i [ 6 ] = rtB . b0pjn0qe1a [ 2 ] ; tmp_i [ 7 ] = rtB . b0pjn0qe1a [ 3 ] ;
tmp_m [ 2 ] = 8 ; tmp_i [ 8 ] = rtB . l5pujcrulu [ 0 ] ; tmp_i [ 9 ] = rtB .
l5pujcrulu [ 1 ] ; tmp_i [ 10 ] = rtB . l5pujcrulu [ 2 ] ; tmp_i [ 11 ] = rtB
. l5pujcrulu [ 3 ] ; tmp_m [ 3 ] = 12 ; tmp_i [ 12 ] = rtB . b2vobw2amc [ 0 ]
; tmp_i [ 13 ] = rtB . b2vobw2amc [ 1 ] ; tmp_i [ 14 ] = rtB . b2vobw2amc [ 2
] ; tmp_i [ 15 ] = rtB . b2vobw2amc [ 3 ] ; tmp_m [ 4 ] = 16 ; tmp_i [ 16 ] =
rtB . c4ncjpj4p3 [ 0 ] ; tmp_i [ 17 ] = rtB . c4ncjpj4p3 [ 1 ] ; tmp_i [ 18 ]
= rtB . c4ncjpj4p3 [ 2 ] ; tmp_i [ 19 ] = rtB . c4ncjpj4p3 [ 3 ] ; tmp_m [ 5
] = 20 ; tmp_i [ 20 ] = rtB . hbxx3xyytn [ 0 ] ; tmp_i [ 21 ] = rtB .
hbxx3xyytn [ 1 ] ; tmp_i [ 22 ] = rtB . hbxx3xyytn [ 2 ] ; tmp_i [ 23 ] = rtB
. hbxx3xyytn [ 3 ] ; tmp_m [ 6 ] = 24 ; tmp_i [ 24 ] = rtB . amckjsk01h [ 0 ]
; tmp_i [ 25 ] = rtB . amckjsk01h [ 1 ] ; tmp_i [ 26 ] = rtB . amckjsk01h [ 2
] ; tmp_i [ 27 ] = rtB . amckjsk01h [ 3 ] ; tmp_m [ 7 ] = 28 ; simulationData
-> mData -> mInputValues . mN = 28 ; simulationData -> mData -> mInputValues
. mX = & tmp_i [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 8 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_m [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 10 ; simulationData -> mData
-> mNonSampledZCs . mX = & _rtZCSV -> nwqrqj10ub ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . bkxjnhwg4q ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_d =
ne_simulator_method ( ( NeslSimulator * ) rtDW . ajpv151fp2 ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_d !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . pufhjztccr ; time_e =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_e ; simulationData -> mData -> mContStates .
mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX . a3wszcfpqa [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . e5jo5xbtad ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
naozloifhf [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
nedkaormew [ 0 ] ; tmp_g [ 1 ] = rtB . nedkaormew [ 1 ] ; tmp_g [ 2 ] = rtB .
nedkaormew [ 2 ] ; tmp_g [ 3 ] = rtB . nedkaormew [ 3 ] ; tmp_j [ 1 ] = 4 ;
tmp_g [ 4 ] = rtB . aowtlt2xsx [ 0 ] ; tmp_g [ 5 ] = rtB . aowtlt2xsx [ 1 ] ;
tmp_g [ 6 ] = rtB . aowtlt2xsx [ 2 ] ; tmp_g [ 7 ] = rtB . aowtlt2xsx [ 3 ] ;
tmp_j [ 2 ] = 8 ; tmp_g [ 8 ] = rtB . fltnebkpfo [ 0 ] ; tmp_g [ 9 ] = rtB .
fltnebkpfo [ 1 ] ; tmp_g [ 10 ] = rtB . fltnebkpfo [ 2 ] ; tmp_g [ 11 ] = rtB
. fltnebkpfo [ 3 ] ; tmp_j [ 3 ] = 12 ; tmp_g [ 12 ] = rtB . n51jz3r5ms [ 0 ]
; tmp_g [ 13 ] = rtB . n51jz3r5ms [ 1 ] ; tmp_g [ 14 ] = rtB . n51jz3r5ms [ 2
] ; tmp_g [ 15 ] = rtB . n51jz3r5ms [ 3 ] ; tmp_j [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_g [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_j [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 5 ; simulationData -> mData
-> mNonSampledZCs . mX = & _rtZCSV -> mxozworjpr ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . aqd3u0h4s2 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_d =
ne_simulator_method ( ( NeslSimulator * ) rtDW . kcmwywlxl1 ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_d !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . hrkrw20ytk ; time_i =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_i ; simulationData -> mData -> mContStates .
mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX . hgiqkf2r13 [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . pyaa30hu1l ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
ena1m1tqgi [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
dycz5qe5i2 [ 0 ] ; tmp_f [ 1 ] = rtB . dycz5qe5i2 [ 1 ] ; tmp_f [ 2 ] = rtB .
dycz5qe5i2 [ 2 ] ; tmp_f [ 3 ] = rtB . dycz5qe5i2 [ 3 ] ; tmp_c [ 1 ] = 4 ;
tmp_f [ 4 ] = rtB . ar342mtoyy [ 0 ] ; tmp_f [ 5 ] = rtB . ar342mtoyy [ 1 ] ;
tmp_f [ 6 ] = rtB . ar342mtoyy [ 2 ] ; tmp_f [ 7 ] = rtB . ar342mtoyy [ 3 ] ;
tmp_c [ 2 ] = 8 ; tmp_f [ 8 ] = rtB . fntgtrllob [ 0 ] ; tmp_f [ 9 ] = rtB .
fntgtrllob [ 1 ] ; tmp_f [ 10 ] = rtB . fntgtrllob [ 2 ] ; tmp_f [ 11 ] = rtB
. fntgtrllob [ 3 ] ; tmp_c [ 3 ] = 12 ; tmp_f [ 12 ] = rtB . mevfua5fda [ 0 ]
; tmp_f [ 13 ] = rtB . mevfua5fda [ 1 ] ; tmp_f [ 14 ] = rtB . mevfua5fda [ 2
] ; tmp_f [ 15 ] = rtB . mevfua5fda [ 3 ] ; tmp_c [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_f [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_c [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 5 ; simulationData -> mData
-> mNonSampledZCs . mX = & _rtZCSV -> orct0xpgcz ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . b4ac4nh15p ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_d =
ne_simulator_method ( ( NeslSimulator * ) rtDW . ejmmacq22h ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_d !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . jtehowy45m ; time_m =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_m ; simulationData -> mData -> mContStates .
mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX . os2il0fse5 [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . ei5jzybccv ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
oapkaomns3 [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
bkephdao5q [ 0 ] ; tmp_k [ 1 ] = rtB . bkephdao5q [ 1 ] ; tmp_k [ 2 ] = rtB .
bkephdao5q [ 2 ] ; tmp_k [ 3 ] = rtB . bkephdao5q [ 3 ] ; tmp_b [ 1 ] = 4 ;
tmp_k [ 4 ] = rtB . ptr4jxtzru [ 0 ] ; tmp_k [ 5 ] = rtB . ptr4jxtzru [ 1 ] ;
tmp_k [ 6 ] = rtB . ptr4jxtzru [ 2 ] ; tmp_k [ 7 ] = rtB . ptr4jxtzru [ 3 ] ;
tmp_b [ 2 ] = 8 ; tmp_k [ 8 ] = rtB . d1bzzxr1py [ 0 ] ; tmp_k [ 9 ] = rtB .
d1bzzxr1py [ 1 ] ; tmp_k [ 10 ] = rtB . d1bzzxr1py [ 2 ] ; tmp_k [ 11 ] = rtB
. d1bzzxr1py [ 3 ] ; tmp_b [ 3 ] = 12 ; tmp_k [ 12 ] = rtB . ecbwmrxmul [ 0 ]
; tmp_k [ 13 ] = rtB . ecbwmrxmul [ 1 ] ; tmp_k [ 14 ] = rtB . ecbwmrxmul [ 2
] ; tmp_k [ 15 ] = rtB . ecbwmrxmul [ 3 ] ; tmp_b [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_k [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_b [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 5 ; simulationData -> mData
-> mNonSampledZCs . mX = & _rtZCSV -> ifveck3l5t ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . ma153abo0u ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_d =
ne_simulator_method ( ( NeslSimulator * ) rtDW . mluequoe3f ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_d !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . kxuuq5q1xq ; time_g =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_g ; simulationData -> mData -> mContStates .
mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX . a4sfa3kge2 [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . lwufoxa2ik ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
aymgehdyan [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
moqztnnjfy [ 0 ] ; tmp_n [ 1 ] = rtB . moqztnnjfy [ 1 ] ; tmp_n [ 2 ] = rtB .
moqztnnjfy [ 2 ] ; tmp_n [ 3 ] = rtB . moqztnnjfy [ 3 ] ; tmp_l [ 1 ] = 4 ;
tmp_n [ 4 ] = rtB . e2oog2ldlk [ 0 ] ; tmp_n [ 5 ] = rtB . e2oog2ldlk [ 1 ] ;
tmp_n [ 6 ] = rtB . e2oog2ldlk [ 2 ] ; tmp_n [ 7 ] = rtB . e2oog2ldlk [ 3 ] ;
tmp_l [ 2 ] = 8 ; tmp_n [ 8 ] = rtB . l3qlly0y24 [ 0 ] ; tmp_n [ 9 ] = rtB .
l3qlly0y24 [ 1 ] ; tmp_n [ 10 ] = rtB . l3qlly0y24 [ 2 ] ; tmp_n [ 11 ] = rtB
. l3qlly0y24 [ 3 ] ; tmp_l [ 3 ] = 12 ; tmp_n [ 12 ] = rtB . nvp0xnvq03 [ 0 ]
; tmp_n [ 13 ] = rtB . nvp0xnvq03 [ 1 ] ; tmp_n [ 14 ] = rtB . nvp0xnvq03 [ 2
] ; tmp_n [ 15 ] = rtB . nvp0xnvq03 [ 3 ] ; tmp_l [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_n [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_l [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 5 ; simulationData -> mData
-> mNonSampledZCs . mX = & _rtZCSV -> l23gqgx1li ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . ctneexngj0 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_d =
ne_simulator_method ( ( NeslSimulator * ) rtDW . lvrxzc3xbz ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_d !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlTerminate ( void ) { neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . i2d1fpfnkr ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . nm1pedohdu ) ; nesl_erase_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_6"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
al2khf0zpj ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
g1iq3vbocm ) ; nesl_erase_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_6"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
az1yo1muxe ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
hcrcwgbmvq ) ; nesl_erase_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_2"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
dw4pbexevd ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
kwq3so20nv ) ; nesl_erase_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_2"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
bkxjnhwg4q ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
dmsckoggfy ) ; nesl_erase_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_7"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
d110twjzhx ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
gq1bwlllvx ) ; nesl_erase_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_7"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
aqd3u0h4s2 ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
pufhjztccr ) ; nesl_erase_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_5"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
mwyq2uplon ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
ny31yfa2vw ) ; nesl_erase_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_5"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
b4ac4nh15p ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
hrkrw20ytk ) ; nesl_erase_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_1"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
l2qm1h0rd5 ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
mm5rcdx55z ) ; nesl_erase_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_1"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
ma153abo0u ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
jtehowy45m ) ; nesl_erase_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_3"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
mtf42ubwyf ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
oapgvyjuop ) ; nesl_erase_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_3"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
ctneexngj0 ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
kxuuq5q1xq ) ; nesl_erase_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_4"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
jaseroeq2i ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
eq0pqdmgzx ) ; nesl_erase_simulator (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_4"
) ; { if ( rtDW . apdjv21fm3 . AQHandles ) { sdiTerminateStreaming ( & rtDW .
apdjv21fm3 . AQHandles ) ; } if ( rtDW . apdjv21fm3 . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . apdjv21fm3 . SlioLTF ) ; } } { if ( rtDW
. mh2lzbnvyc . AQHandles ) { sdiTerminateStreaming ( & rtDW . mh2lzbnvyc .
AQHandles ) ; } if ( rtDW . mh2lzbnvyc . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . mh2lzbnvyc . SlioLTF ) ; } } { if ( rtDW
. kjrs0t1nm4 . AQHandles ) { sdiTerminateStreaming ( & rtDW . kjrs0t1nm4 .
AQHandles ) ; } if ( rtDW . kjrs0t1nm4 . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . kjrs0t1nm4 . SlioLTF ) ; } } { if ( rtDW
. dautlnn30u . AQHandles ) { sdiTerminateStreaming ( & rtDW . dautlnn30u .
AQHandles ) ; } if ( rtDW . dautlnn30u . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . dautlnn30u . SlioLTF ) ; } } { if ( rtDW
. kvbjdddl4n . AQHandles ) { sdiTerminateStreaming ( & rtDW . kvbjdddl4n .
AQHandles ) ; } if ( rtDW . kvbjdddl4n . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . kvbjdddl4n . SlioLTF ) ; } } { if ( rtDW
. ava0ojyjuv . AQHandles ) { sdiTerminateStreaming ( & rtDW . ava0ojyjuv .
AQHandles ) ; } if ( rtDW . ava0ojyjuv . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . ava0ojyjuv . SlioLTF ) ; } } { if ( rtDW
. ps3yjeqnel . AQHandles ) { sdiTerminateStreaming ( & rtDW . ps3yjeqnel .
AQHandles ) ; } if ( rtDW . ps3yjeqnel . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . ps3yjeqnel . SlioLTF ) ; } } { if ( rtDW
. gl0wpxzu2q . AQHandles ) { sdiTerminateStreaming ( & rtDW . gl0wpxzu2q .
AQHandles ) ; } if ( rtDW . gl0wpxzu2q . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . gl0wpxzu2q . SlioLTF ) ; } } { if ( rtDW
. oicd0ngvav . AQHandles ) { sdiTerminateStreaming ( & rtDW . oicd0ngvav .
AQHandles ) ; } if ( rtDW . oicd0ngvav . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . oicd0ngvav . SlioLTF ) ; } } { if ( rtDW
. ptm21fclna . AQHandles ) { sdiTerminateStreaming ( & rtDW . ptm21fclna .
AQHandles ) ; } if ( rtDW . ptm21fclna . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . ptm21fclna . SlioLTF ) ; } } { if ( rtDW
. oqhwzcjbbx . AQHandles ) { sdiTerminateStreaming ( & rtDW . oqhwzcjbbx .
AQHandles ) ; } if ( rtDW . oqhwzcjbbx . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . oqhwzcjbbx . SlioLTF ) ; } } { if ( rtDW
. mkhdp3gdkd . AQHandles ) { sdiTerminateStreaming ( & rtDW . mkhdp3gdkd .
AQHandles ) ; } if ( rtDW . mkhdp3gdkd . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . mkhdp3gdkd . SlioLTF ) ; } } { if ( rtDW
. e2gcoq4oqe . AQHandles ) { sdiTerminateStreaming ( & rtDW . e2gcoq4oqe .
AQHandles ) ; } if ( rtDW . e2gcoq4oqe . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . e2gcoq4oqe . SlioLTF ) ; } } { if ( rtDW
. h22loax0ke . AQHandles ) { sdiTerminateStreaming ( & rtDW . h22loax0ke .
AQHandles ) ; } if ( rtDW . h22loax0ke . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . h22loax0ke . SlioLTF ) ; } } { if ( rtDW
. as0djmc41t . AQHandles ) { sdiTerminateStreaming ( & rtDW . as0djmc41t .
AQHandles ) ; } if ( rtDW . as0djmc41t . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . as0djmc41t . SlioLTF ) ; } } { if ( rtDW
. ejymxznzxh . AQHandles ) { sdiTerminateStreaming ( & rtDW . ejymxznzxh .
AQHandles ) ; } if ( rtDW . ejymxznzxh . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . ejymxznzxh . SlioLTF ) ; } } { if ( rtDW
. o1kxnuxpyj . AQHandles ) { sdiTerminateStreaming ( & rtDW . o1kxnuxpyj .
AQHandles ) ; } if ( rtDW . o1kxnuxpyj . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . o1kxnuxpyj . SlioLTF ) ; } } { if ( rtDW
. bxxgxkrr2c . AQHandles ) { sdiTerminateStreaming ( & rtDW . bxxgxkrr2c .
AQHandles ) ; } if ( rtDW . bxxgxkrr2c . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . bxxgxkrr2c . SlioLTF ) ; } } { if ( rtDW
. kfd3qrvgfd . AQHandles ) { sdiTerminateStreaming ( & rtDW . kfd3qrvgfd .
AQHandles ) ; } if ( rtDW . kfd3qrvgfd . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . kfd3qrvgfd . SlioLTF ) ; } } { if ( rtDW
. igwari5mqz . AQHandles ) { sdiTerminateStreaming ( & rtDW . igwari5mqz .
AQHandles ) ; } if ( rtDW . igwari5mqz . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . igwari5mqz . SlioLTF ) ; } } { if ( rtDW
. ewqrtgdvx2 . AQHandles ) { sdiTerminateStreaming ( & rtDW . ewqrtgdvx2 .
AQHandles ) ; } if ( rtDW . ewqrtgdvx2 . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . ewqrtgdvx2 . SlioLTF ) ; } } { if ( rtDW
. dsgwphpbza . AQHandles ) { sdiTerminateStreaming ( & rtDW . dsgwphpbza .
AQHandles ) ; } if ( rtDW . dsgwphpbza . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . dsgwphpbza . SlioLTF ) ; } } { if ( rtDW
. aw4efzdd4c . AQHandles ) { sdiTerminateStreaming ( & rtDW . aw4efzdd4c .
AQHandles ) ; } if ( rtDW . aw4efzdd4c . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . aw4efzdd4c . SlioLTF ) ; } } { if ( rtDW
. be53dny0c5 . AQHandles ) { sdiTerminateStreaming ( & rtDW . be53dny0c5 .
AQHandles ) ; } if ( rtDW . be53dny0c5 . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . be53dny0c5 . SlioLTF ) ; } } { if ( rtDW
. kq3yodl2bt . AQHandles ) { sdiTerminateStreaming ( & rtDW . kq3yodl2bt .
AQHandles ) ; } if ( rtDW . kq3yodl2bt . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . kq3yodl2bt . SlioLTF ) ; } } { if ( rtDW
. ebjpqr4c4g . AQHandles ) { sdiTerminateStreaming ( & rtDW . ebjpqr4c4g .
AQHandles ) ; } if ( rtDW . ebjpqr4c4g . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . ebjpqr4c4g . SlioLTF ) ; } } { if ( rtDW
. ptu5jdgl35 . AQHandles ) { sdiTerminateStreaming ( & rtDW . ptu5jdgl35 .
AQHandles ) ; } if ( rtDW . ptu5jdgl35 . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . ptu5jdgl35 . SlioLTF ) ; } } { if ( rtDW
. ilijwxnun0 . AQHandles ) { sdiTerminateStreaming ( & rtDW . ilijwxnun0 .
AQHandles ) ; } if ( rtDW . ilijwxnun0 . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . ilijwxnun0 . SlioLTF ) ; } } { if ( rtDW
. odqw4yty3p . AQHandles ) { sdiTerminateStreaming ( & rtDW . odqw4yty3p .
AQHandles ) ; } if ( rtDW . odqw4yty3p . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . odqw4yty3p . SlioLTF ) ; } } { if ( rtDW
. kzjcgmt1r3 . AQHandles ) { sdiTerminateStreaming ( & rtDW . kzjcgmt1r3 .
AQHandles ) ; } if ( rtDW . kzjcgmt1r3 . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . kzjcgmt1r3 . SlioLTF ) ; } } { if ( rtDW
. f2efmur0hp . AQHandles ) { sdiTerminateStreaming ( & rtDW . f2efmur0hp .
AQHandles ) ; } if ( rtDW . f2efmur0hp . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . f2efmur0hp . SlioLTF ) ; } } { if ( rtDW
. mskhnw4qrr . AQHandles ) { sdiTerminateStreaming ( & rtDW . mskhnw4qrr .
AQHandles ) ; } if ( rtDW . mskhnw4qrr . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . mskhnw4qrr . SlioLTF ) ; } } { if ( rtDW
. d3ef2qdubj . AQHandles ) { sdiTerminateStreaming ( & rtDW . d3ef2qdubj .
AQHandles ) ; } if ( rtDW . d3ef2qdubj . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . d3ef2qdubj . SlioLTF ) ; } } { if ( rtDW
. dg12hpmswq . AQHandles ) { sdiTerminateStreaming ( & rtDW . dg12hpmswq .
AQHandles ) ; } if ( rtDW . dg12hpmswq . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . dg12hpmswq . SlioLTF ) ; } } { if ( rtDW
. kx25qhu3r4 . AQHandles ) { sdiTerminateStreaming ( & rtDW . kx25qhu3r4 .
AQHandles ) ; } if ( rtDW . kx25qhu3r4 . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . kx25qhu3r4 . SlioLTF ) ; } } { if ( rtDW
. monl4eukr3 . AQHandles ) { sdiTerminateStreaming ( & rtDW . monl4eukr3 .
AQHandles ) ; } if ( rtDW . monl4eukr3 . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . monl4eukr3 . SlioLTF ) ; } } { if ( rtDW
. ngtywitjou . AQHandles ) { sdiTerminateStreaming ( & rtDW . ngtywitjou .
AQHandles ) ; } if ( rtDW . ngtywitjou . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . ngtywitjou . SlioLTF ) ; } } { if ( rtDW
. l4k2ljdewv . AQHandles ) { sdiTerminateStreaming ( & rtDW . l4k2ljdewv .
AQHandles ) ; } if ( rtDW . l4k2ljdewv . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . l4k2ljdewv . SlioLTF ) ; } } { if ( rtDW
. blegl3r340 . AQHandles ) { sdiTerminateStreaming ( & rtDW . blegl3r340 .
AQHandles ) ; } if ( rtDW . blegl3r340 . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . blegl3r340 . SlioLTF ) ; } } { if ( rtDW
. ppjxynpq1c . AQHandles ) { sdiTerminateStreaming ( & rtDW . ppjxynpq1c .
AQHandles ) ; } if ( rtDW . ppjxynpq1c . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . ppjxynpq1c . SlioLTF ) ; } } { if ( rtDW
. erbnwcwrj1 . AQHandles ) { sdiTerminateStreaming ( & rtDW . erbnwcwrj1 .
AQHandles ) ; } if ( rtDW . erbnwcwrj1 . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . erbnwcwrj1 . SlioLTF ) ; } } { if ( rtDW
. kx4roesdqx . AQHandles ) { sdiTerminateStreaming ( & rtDW . kx4roesdqx .
AQHandles ) ; } if ( rtDW . kx4roesdqx . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . kx4roesdqx . SlioLTF ) ; } } { if ( rtDW
. ejuuwrge5c . AQHandles ) { sdiTerminateStreaming ( & rtDW . ejuuwrge5c .
AQHandles ) ; } if ( rtDW . ejuuwrge5c . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . ejuuwrge5c . SlioLTF ) ; } } { if ( rtDW
. mtedhvdhqd . AQHandles ) { sdiTerminateStreaming ( & rtDW . mtedhvdhqd .
AQHandles ) ; } if ( rtDW . mtedhvdhqd . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . mtedhvdhqd . SlioLTF ) ; } } { if ( rtDW
. jg2vujfrzo . AQHandles ) { sdiTerminateStreaming ( & rtDW . jg2vujfrzo .
AQHandles ) ; } if ( rtDW . jg2vujfrzo . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . jg2vujfrzo . SlioLTF ) ; } } { if ( rtDW
. g5kyzenj0k . AQHandles ) { sdiTerminateStreaming ( & rtDW . g5kyzenj0k .
AQHandles ) ; } if ( rtDW . g5kyzenj0k . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . g5kyzenj0k . SlioLTF ) ; } } { if ( rtDW
. larmidhtrj . AQHandles ) { sdiTerminateStreaming ( & rtDW . larmidhtrj .
AQHandles ) ; } if ( rtDW . larmidhtrj . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . larmidhtrj . SlioLTF ) ; } } { if ( rtDW
. co45xeckac . AQHandles ) { sdiTerminateStreaming ( & rtDW . co45xeckac .
AQHandles ) ; } if ( rtDW . co45xeckac . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . co45xeckac . SlioLTF ) ; } } if (
rt_slioCatalogue ( ) != ( NULL ) ) { void * * slioCatalogueAddr =
rt_slioCatalogueAddr ( ) ; rtwSaveDatasetsToMatFile (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ,
rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 62 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 6 ) ; ssSetNumU (
rtS , 6 ) ; ssSetDirectFeedThrough ( rtS , 1 ) ; ssSetNumSampleTimes ( rtS ,
2 ) ; ssSetNumBlocks ( rtS , 772 ) ; ssSetNumBlockIO ( rtS , 133 ) ;
ssSetNumBlockParams ( rtS , 78 ) ; } void MdlInitializeSampleTimes ( void ) {
ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.1 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 2957884597U ) ;
ssSetChecksumVal ( rtS , 1 , 3543390542U ) ; ssSetChecksumVal ( rtS , 2 ,
126132786U ) ; ssSetChecksumVal ( rtS , 3 , 3705451789U ) ; }
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
( B ) ) ; } { ssSetU ( rtS , ( ( void * ) & rtU ) ) ; ( void ) memset ( & rtU
, 0 , sizeof ( ExtU ) ) ; } { ssSetY ( rtS , & rtY ) ; ( void ) memset ( (
void * ) & rtY , 0 , sizeof ( ExtY ) ) ; } { real_T * x = ( real_T * ) & rtX
; ssSetContStates ( rtS , x ) ; ( void ) memset ( ( void * ) x , 0 , sizeof (
X ) ) ; } { void * dwork = ( void * ) & rtDW ; ssSetRootDWork ( rtS , dwork )
; ( void ) memset ( dwork , 0 , sizeof ( DW ) ) ; } { rtDW . jvlqksr05b = 34
; rtDW . mtqczrwkkn = 36 ; rtDW . jxqzqpx1f2 = 40 ; rtDW . k1zspym0ms = 42 ;
rtDW . bewafdk0ul = 44 ; rtDW . my5qkp4udk = 46 ; } { static
DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 ,
sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 14 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; }
cst_robotarm_breach_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive
( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "cst_robotarm_breach" ) ;
ssSetPath ( rtS , "cst_robotarm_breach" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 10.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = NULL ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2
, 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 ,
2 , 2 , 2 } ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 } ; static int_T rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2
, 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 } ;
static boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE ,
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
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static int_T
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
"Discrete" , "states" , "states" , "states" , "states" , "states" , "states"
, "Discrete" , "Discrete" , "Discrete" , "Discrete" , "Discrete" , "Discrete"
, "Discrete" , "Discrete" , "Discrete" , "Discrete" , "Discrete" , "Discrete"
, "Discrete" , "Discrete" , "Discrete" , "Discrete" , "Discrete" , "Discrete"
, "Discrete" , "Discrete" , "Discrete" , "Discrete" , "Discrete" , "Discrete"
, "Discrete" , "Discrete" , "Discrete" , "Discrete" , "Discrete" , "Discrete"
, "Discrete" , "Discrete" , "Discrete" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = {
"cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R1" ,
"cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R1" ,
"cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R2" ,
"cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R2" ,
"cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R3" ,
"cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R3" ,
"cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R4" ,
"cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R4" ,
"cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R5" ,
"cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R5" ,
"cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R6" ,
"cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R6" ,
"cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R7" ,
"cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R7" ,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gripper/Revolute1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gripper/Revolute1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gripper/Revolute3"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gripper/Revolute3"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gripper/Revolute2"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gripper/Revolute2"
,
"cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gripper/Revolute"
,
"cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gripper/Revolute"
, "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/P2" ,
"cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/P2" ,
"cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/P1" ,
"cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/P1" ,
"cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gear Constraint"
,
"cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gear Constraint"
, "cst_robotarm_breach/Integrator" , "cst_robotarm_breach/Integrator1" ,
"cst_robotarm_breach/Integrator2" , "cst_robotarm_breach/Integrator3" ,
"cst_robotarm_breach/Integrator4" , "cst_robotarm_breach/Integrator5" ,
"cst_robotarm_breach/6 DOF Robot Arm/DC Motors/Turntable Motor/DC Motor" ,
 "cst_robotarm_breach/6 DOF Robot Arm/DC Motors/Turntable Motor/Power Amplifier/H-Bridge"
,
 "cst_robotarm_breach/6 DOF Robot Arm/DC Motors/Turntable Motor/Power Amplifier/Controlled PWM Voltage"
, "cst_robotarm_breach/6 DOF Robot Arm/DC Motors/Turntable Motor/DC Motor" ,
"cst_robotarm_breach/6 DOF Robot Arm/DC Motors/Bicep Motor1/DC Motor" ,
"cst_robotarm_breach/6 DOF Robot Arm/DC Motors/Bicep Motor2/DC Motor" ,
 "cst_robotarm_breach/6 DOF Robot Arm/DC Motors/Bicep Motor1/Power Amplifier/H-Bridge"
,
 "cst_robotarm_breach/6 DOF Robot Arm/DC Motors/Bicep Motor2/Power Amplifier/H-Bridge"
,
 "cst_robotarm_breach/6 DOF Robot Arm/DC Motors/Bicep Motor2/Power Amplifier/Controlled PWM Voltage"
,
 "cst_robotarm_breach/6 DOF Robot Arm/DC Motors/Bicep Motor1/Power Amplifier/Controlled PWM Voltage"
, "cst_robotarm_breach/6 DOF Robot Arm/DC Motors/Bicep Motor1/DC Motor" ,
"cst_robotarm_breach/6 DOF Robot Arm/DC Motors/Bicep Motor2/DC Motor" ,
"cst_robotarm_breach/6 DOF Robot Arm/DC Motors/Forearm Motor/DC Motor" ,
 "cst_robotarm_breach/6 DOF Robot Arm/DC Motors/Forearm Motor/Power Amplifier/H-Bridge"
,
 "cst_robotarm_breach/6 DOF Robot Arm/DC Motors/Forearm Motor/Power Amplifier/Controlled PWM Voltage"
, "cst_robotarm_breach/6 DOF Robot Arm/DC Motors/Forearm Motor/DC Motor" ,
"cst_robotarm_breach/6 DOF Robot Arm/DC Motors/Wrist Motor/DC Motor" ,
 "cst_robotarm_breach/6 DOF Robot Arm/DC Motors/Wrist Motor/Power Amplifier/H-Bridge"
,
 "cst_robotarm_breach/6 DOF Robot Arm/DC Motors/Wrist Motor/Power Amplifier/Controlled PWM Voltage"
, "cst_robotarm_breach/6 DOF Robot Arm/DC Motors/Wrist Motor/DC Motor" ,
"cst_robotarm_breach/6 DOF Robot Arm/DC Motors/Hand Motor/DC Motor" ,
 "cst_robotarm_breach/6 DOF Robot Arm/DC Motors/Hand Motor/Power Amplifier/H-Bridge"
,
 "cst_robotarm_breach/6 DOF Robot Arm/DC Motors/Hand Motor/Power Amplifier/Controlled PWM Voltage"
, "cst_robotarm_breach/6 DOF Robot Arm/DC Motors/Hand Motor/DC Motor" ,
"cst_robotarm_breach/6 DOF Robot Arm/DC Motors/Hand Motor1/DC Motor" ,
 "cst_robotarm_breach/6 DOF Robot Arm/DC Motors/Hand Motor1/Power Amplifier/H-Bridge"
,
 "cst_robotarm_breach/6 DOF Robot Arm/DC Motors/Hand Motor1/Power Amplifier/Controlled PWM Voltage"
, "cst_robotarm_breach/6 DOF Robot Arm/DC Motors/Hand Motor1/DC Motor" ,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/STATE_6"
, "cst_robotarm_breach/Signal Conditioning/Discrete\nTransfer Fcn" ,
"cst_robotarm_breach/Signal Conditioning/Discrete\nTransfer Fcn1" ,
"cst_robotarm_breach/Signal Conditioning/Discrete\nTransfer Fcn2" ,
"cst_robotarm_breach/Signal Conditioning/Discrete\nTransfer Fcn3" ,
"cst_robotarm_breach/Signal Conditioning/Discrete\nTransfer Fcn4" ,
"cst_robotarm_breach/Signal Conditioning/Discrete\nTransfer Fcn5" ,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_7_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_17_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_16_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_18_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_5_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_8_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_6_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_1_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_9_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_8_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_7_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_9_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_2_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_10_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_20_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_19_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_21_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_6_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_11_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_11_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_10_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_12_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_4_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_12_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_14_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_13_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_15_1_1"
,
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_3_1_1"
} ; static const char_T * rt_LoggedStateNames [ ] = {
"cst_robotarm_breach.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R1.Rz.q" ,
"cst_robotarm_breach.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R1.Rz.w" ,
"cst_robotarm_breach.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R2.Rz.q" ,
"cst_robotarm_breach.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R2.Rz.w" ,
"cst_robotarm_breach.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R3.Rz.q" ,
"cst_robotarm_breach.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R3.Rz.w" ,
"cst_robotarm_breach.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R4.Rz.q" ,
"cst_robotarm_breach.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R4.Rz.w" ,
"cst_robotarm_breach.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R5.Rz.q" ,
"cst_robotarm_breach.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R5.Rz.w" ,
"cst_robotarm_breach.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R6.Rz.q" ,
"cst_robotarm_breach.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R6.Rz.w" ,
"cst_robotarm_breach.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R7.Rz.q" ,
"cst_robotarm_breach.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R7.Rz.w" ,
 "cst_robotarm_breach.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gripper.Revolute1.Rz.q"
,
 "cst_robotarm_breach.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gripper.Revolute1.Rz.w"
,
 "cst_robotarm_breach.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gripper.Revolute3.Rz.q"
,
 "cst_robotarm_breach.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gripper.Revolute3.Rz.w"
,
 "cst_robotarm_breach.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gripper.Revolute2.Rz.q"
,
 "cst_robotarm_breach.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gripper.Revolute2.Rz.w"
,
 "cst_robotarm_breach.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gripper.Revolute.Rz.q"
,
 "cst_robotarm_breach.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gripper.Revolute.Rz.w"
, "cst_robotarm_breach.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.P2.Rz.q" ,
"cst_robotarm_breach.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.P2.Rz.w" ,
"cst_robotarm_breach.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.P1.Rz.q" ,
"cst_robotarm_breach.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.P1.Rz.w" ,
 "cst_robotarm_breach.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gear_Constraint.q"
,
 "cst_robotarm_breach.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gear_Constraint.w"
, "" , "" , "" , "" , "" , "" ,
"cst_robotarm_breach.x6_DOF_Robot_Arm.DC_Motors.Turntable_Motor.DC_Motor.i_L"
,
 "cst_robotarm_breach.x6_DOF_Robot_Arm.DC_Motors.Turntable_Motor.Power_Amplifier.H_Bridge.v_lag"
,
 "cst_robotarm_breach.x6_DOF_Robot_Arm.DC_Motors.Turntable_Motor.Power_Amplifier.Controlled_PWM_Voltage.p2.v"
, "cst_robotarm_breach.x6_DOF_Robot_Arm.DC_Motors.Turntable_Motor.DC_Motor.v"
, "cst_robotarm_breach.x6_DOF_Robot_Arm.DC_Motors.Bicep_Motor1.DC_Motor.i_L"
, "cst_robotarm_breach.x6_DOF_Robot_Arm.DC_Motors.Bicep_Motor2.DC_Motor.i_L"
,
 "cst_robotarm_breach.x6_DOF_Robot_Arm.DC_Motors.Bicep_Motor1.Power_Amplifier.H_Bridge.v_lag"
,
 "cst_robotarm_breach.x6_DOF_Robot_Arm.DC_Motors.Bicep_Motor2.Power_Amplifier.H_Bridge.v_lag"
,
 "cst_robotarm_breach.x6_DOF_Robot_Arm.DC_Motors.Bicep_Motor2.Power_Amplifier.Controlled_PWM_Voltage.p2.v"
,
 "cst_robotarm_breach.x6_DOF_Robot_Arm.DC_Motors.Bicep_Motor1.Power_Amplifier.Controlled_PWM_Voltage.p2.v"
, "cst_robotarm_breach.x6_DOF_Robot_Arm.DC_Motors.Bicep_Motor1.DC_Motor.v" ,
"cst_robotarm_breach.x6_DOF_Robot_Arm.DC_Motors.Bicep_Motor2.DC_Motor.v" ,
"cst_robotarm_breach.x6_DOF_Robot_Arm.DC_Motors.Forearm_Motor.DC_Motor.i_L" ,
 "cst_robotarm_breach.x6_DOF_Robot_Arm.DC_Motors.Forearm_Motor.Power_Amplifier.H_Bridge.v_lag"
,
 "cst_robotarm_breach.x6_DOF_Robot_Arm.DC_Motors.Forearm_Motor.Power_Amplifier.Controlled_PWM_Voltage.p2.v"
, "cst_robotarm_breach.x6_DOF_Robot_Arm.DC_Motors.Forearm_Motor.DC_Motor.v" ,
"cst_robotarm_breach.x6_DOF_Robot_Arm.DC_Motors.Wrist_Motor.DC_Motor.i_L" ,
 "cst_robotarm_breach.x6_DOF_Robot_Arm.DC_Motors.Wrist_Motor.Power_Amplifier.H_Bridge.v_lag"
,
 "cst_robotarm_breach.x6_DOF_Robot_Arm.DC_Motors.Wrist_Motor.Power_Amplifier.Controlled_PWM_Voltage.p2.v"
, "cst_robotarm_breach.x6_DOF_Robot_Arm.DC_Motors.Wrist_Motor.DC_Motor.v" ,
"cst_robotarm_breach.x6_DOF_Robot_Arm.DC_Motors.Hand_Motor.DC_Motor.i_L" ,
 "cst_robotarm_breach.x6_DOF_Robot_Arm.DC_Motors.Hand_Motor.Power_Amplifier.H_Bridge.v_lag"
,
 "cst_robotarm_breach.x6_DOF_Robot_Arm.DC_Motors.Hand_Motor.Power_Amplifier.Controlled_PWM_Voltage.p2.v"
, "cst_robotarm_breach.x6_DOF_Robot_Arm.DC_Motors.Hand_Motor.DC_Motor.v" ,
"cst_robotarm_breach.x6_DOF_Robot_Arm.DC_Motors.Hand_Motor1.DC_Motor.i_L" ,
 "cst_robotarm_breach.x6_DOF_Robot_Arm.DC_Motors.Hand_Motor1.Power_Amplifier.H_Bridge.v_lag"
,
 "cst_robotarm_breach.x6_DOF_Robot_Arm.DC_Motors.Hand_Motor1.Power_Amplifier.Controlled_PWM_Voltage.p2.v"
, "cst_robotarm_breach.x6_DOF_Robot_Arm.DC_Motors.Hand_Motor1.DC_Motor.v" ,
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
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . lbl1bst0em [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . lbl1bst0em [ 1 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . lbl1bst0em [ 2 ] ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . lbl1bst0em [ 3 ] ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . lbl1bst0em [ 4 ] ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . lbl1bst0em [ 5 ] ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . lbl1bst0em [ 6 ] ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . lbl1bst0em [ 7 ] ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . lbl1bst0em [ 8 ] ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . lbl1bst0em [ 9 ] ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . lbl1bst0em [ 10 ] ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . lbl1bst0em [ 11 ] ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . lbl1bst0em [ 12 ] ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . lbl1bst0em [ 13 ] ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . lbl1bst0em [ 14 ] ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . lbl1bst0em [ 15 ] ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtX . lbl1bst0em [ 16 ] ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtX . lbl1bst0em [ 17 ] ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtX . lbl1bst0em [ 18 ] ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtX . lbl1bst0em [ 19 ] ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtX . lbl1bst0em [ 20 ] ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtX . lbl1bst0em [ 21 ] ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtX . lbl1bst0em [ 22 ] ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtX . lbl1bst0em [ 23 ] ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtX . lbl1bst0em [ 24 ] ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtX . lbl1bst0em [ 25 ] ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) & rtX . lbl1bst0em [ 26 ] ;
rt_LoggedStateSignalPtrs [ 27 ] = ( void * ) & rtX . lbl1bst0em [ 27 ] ;
rt_LoggedStateSignalPtrs [ 28 ] = ( void * ) & rtX . hzgkjmkam3 ;
rt_LoggedStateSignalPtrs [ 29 ] = ( void * ) & rtX . hgl1hrlhol ;
rt_LoggedStateSignalPtrs [ 30 ] = ( void * ) & rtX . h5wdubnkbp ;
rt_LoggedStateSignalPtrs [ 31 ] = ( void * ) & rtX . pdkkwspnr1 ;
rt_LoggedStateSignalPtrs [ 32 ] = ( void * ) & rtX . l1zc10gh5a ;
rt_LoggedStateSignalPtrs [ 33 ] = ( void * ) & rtX . kmsnf4jarc ;
rt_LoggedStateSignalPtrs [ 34 ] = ( void * ) & rtX . pziburvfat [ 0 ] ;
rt_LoggedStateSignalPtrs [ 35 ] = ( void * ) & rtX . pziburvfat [ 1 ] ;
rt_LoggedStateSignalPtrs [ 36 ] = ( void * ) & rtX . pziburvfat [ 2 ] ;
rt_LoggedStateSignalPtrs [ 37 ] = ( void * ) & rtX . pziburvfat [ 3 ] ;
rt_LoggedStateSignalPtrs [ 38 ] = ( void * ) & rtX . ixvwzsiq3g [ 0 ] ;
rt_LoggedStateSignalPtrs [ 39 ] = ( void * ) & rtX . ixvwzsiq3g [ 1 ] ;
rt_LoggedStateSignalPtrs [ 40 ] = ( void * ) & rtX . ixvwzsiq3g [ 2 ] ;
rt_LoggedStateSignalPtrs [ 41 ] = ( void * ) & rtX . ixvwzsiq3g [ 3 ] ;
rt_LoggedStateSignalPtrs [ 42 ] = ( void * ) & rtX . ixvwzsiq3g [ 4 ] ;
rt_LoggedStateSignalPtrs [ 43 ] = ( void * ) & rtX . ixvwzsiq3g [ 5 ] ;
rt_LoggedStateSignalPtrs [ 44 ] = ( void * ) & rtX . ixvwzsiq3g [ 6 ] ;
rt_LoggedStateSignalPtrs [ 45 ] = ( void * ) & rtX . ixvwzsiq3g [ 7 ] ;
rt_LoggedStateSignalPtrs [ 46 ] = ( void * ) & rtX . a3wszcfpqa [ 0 ] ;
rt_LoggedStateSignalPtrs [ 47 ] = ( void * ) & rtX . a3wszcfpqa [ 1 ] ;
rt_LoggedStateSignalPtrs [ 48 ] = ( void * ) & rtX . a3wszcfpqa [ 2 ] ;
rt_LoggedStateSignalPtrs [ 49 ] = ( void * ) & rtX . a3wszcfpqa [ 3 ] ;
rt_LoggedStateSignalPtrs [ 50 ] = ( void * ) & rtX . hgiqkf2r13 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 51 ] = ( void * ) & rtX . hgiqkf2r13 [ 1 ] ;
rt_LoggedStateSignalPtrs [ 52 ] = ( void * ) & rtX . hgiqkf2r13 [ 2 ] ;
rt_LoggedStateSignalPtrs [ 53 ] = ( void * ) & rtX . hgiqkf2r13 [ 3 ] ;
rt_LoggedStateSignalPtrs [ 54 ] = ( void * ) & rtX . os2il0fse5 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 55 ] = ( void * ) & rtX . os2il0fse5 [ 1 ] ;
rt_LoggedStateSignalPtrs [ 56 ] = ( void * ) & rtX . os2il0fse5 [ 2 ] ;
rt_LoggedStateSignalPtrs [ 57 ] = ( void * ) & rtX . os2il0fse5 [ 3 ] ;
rt_LoggedStateSignalPtrs [ 58 ] = ( void * ) & rtX . a4sfa3kge2 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 59 ] = ( void * ) & rtX . a4sfa3kge2 [ 1 ] ;
rt_LoggedStateSignalPtrs [ 60 ] = ( void * ) & rtX . a4sfa3kge2 [ 2 ] ;
rt_LoggedStateSignalPtrs [ 61 ] = ( void * ) & rtX . a4sfa3kge2 [ 3 ] ;
rt_LoggedStateSignalPtrs [ 62 ] = ( void * ) & rtDW . gmlwc0qame ;
rt_LoggedStateSignalPtrs [ 63 ] = ( void * ) & rtDW . c1yhchtyrr ;
rt_LoggedStateSignalPtrs [ 64 ] = ( void * ) & rtDW . b5meobzewc ;
rt_LoggedStateSignalPtrs [ 65 ] = ( void * ) & rtDW . phjhcjadmq ;
rt_LoggedStateSignalPtrs [ 66 ] = ( void * ) & rtDW . ea2ghjrony ;
rt_LoggedStateSignalPtrs [ 67 ] = ( void * ) & rtDW . o3hjuvp5p4 ;
rt_LoggedStateSignalPtrs [ 68 ] = ( void * ) & rtDW . mfo0m5mdmb ;
rt_LoggedStateSignalPtrs [ 69 ] = ( void * ) rtDW . aeyyeaotfv ;
rt_LoggedStateSignalPtrs [ 70 ] = ( void * ) rtDW . pam2hwcmgh ;
rt_LoggedStateSignalPtrs [ 71 ] = ( void * ) rtDW . moim2kzboo ;
rt_LoggedStateSignalPtrs [ 72 ] = ( void * ) rtDW . or531t5xhw ;
rt_LoggedStateSignalPtrs [ 73 ] = ( void * ) rtDW . b5a1f4pnjy ;
rt_LoggedStateSignalPtrs [ 74 ] = ( void * ) rtDW . npbefpr1fd ;
rt_LoggedStateSignalPtrs [ 75 ] = ( void * ) rtDW . f3meayyzxo ;
rt_LoggedStateSignalPtrs [ 76 ] = ( void * ) rtDW . luph5aup2b ;
rt_LoggedStateSignalPtrs [ 77 ] = ( void * ) rtDW . ckldk5epkp ;
rt_LoggedStateSignalPtrs [ 78 ] = ( void * ) rtDW . d1vbkut3et ;
rt_LoggedStateSignalPtrs [ 79 ] = ( void * ) rtDW . at2tnnhgl4 ;
rt_LoggedStateSignalPtrs [ 80 ] = ( void * ) rtDW . csi3mq51hx ;
rt_LoggedStateSignalPtrs [ 81 ] = ( void * ) rtDW . kbbzzmma32 ;
rt_LoggedStateSignalPtrs [ 82 ] = ( void * ) rtDW . dfmbkkblmm ;
rt_LoggedStateSignalPtrs [ 83 ] = ( void * ) rtDW . islrfvewdp ;
rt_LoggedStateSignalPtrs [ 84 ] = ( void * ) rtDW . auu2gmyygn ;
rt_LoggedStateSignalPtrs [ 85 ] = ( void * ) rtDW . mwifnouukc ;
rt_LoggedStateSignalPtrs [ 86 ] = ( void * ) rtDW . m4zzd3ud3d ;
rt_LoggedStateSignalPtrs [ 87 ] = ( void * ) rtDW . algewdgvo3 ;
rt_LoggedStateSignalPtrs [ 88 ] = ( void * ) rtDW . b2yskfuawk ;
rt_LoggedStateSignalPtrs [ 89 ] = ( void * ) rtDW . kr1ntmuvlq ;
rt_LoggedStateSignalPtrs [ 90 ] = ( void * ) rtDW . ljqwv2uj1y ;
rt_LoggedStateSignalPtrs [ 91 ] = ( void * ) rtDW . ogke1gvqz5 ;
rt_LoggedStateSignalPtrs [ 92 ] = ( void * ) rtDW . hf340lsch3 ;
rt_LoggedStateSignalPtrs [ 93 ] = ( void * ) rtDW . oxhptxmnuv ;
rt_LoggedStateSignalPtrs [ 94 ] = ( void * ) rtDW . pncbg0ft22 ;
rt_LoggedStateSignalPtrs [ 95 ] = ( void * ) rtDW . pjngd0vx0n ;
rt_LoggedStateSignalPtrs [ 96 ] = ( void * ) rtDW . gpqot4g4wt ;
rt_LoggedStateSignalPtrs [ 97 ] = ( void * ) rtDW . krzcgnqi1u ;
rt_LoggedStateSignalPtrs [ 98 ] = ( void * ) rtDW . ixpnfrhln1 ;
rt_LoggedStateSignalPtrs [ 99 ] = ( void * ) rtDW . jmjufyutkh ;
rt_LoggedStateSignalPtrs [ 100 ] = ( void * ) rtDW . mfkpdyx02s ;
rt_LoggedStateSignalPtrs [ 101 ] = ( void * ) rtDW . on2e1zo2kz ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "tmp_raccel_xout" ) ; rtliSetLogXFinal (
ssGetRTWLogInfo ( rtS ) , "xFinal" ) ; rtliSetLogVarNameModifier (
ssGetRTWLogInfo ( rtS ) , "none" ) ; rtliSetLogFormat ( ssGetRTWLogInfo ( rtS
) , 2 ) ; rtliSetLogMaxRows ( ssGetRTWLogInfo ( rtS ) , 0 ) ;
rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS ) , 1 ) ; { static void *
rt_LoggedOutputSignalPtrs [ ] = { & rtY . keyyckin41 , & rtY . gpojpe3hlv , &
rtY . kv3guwywho , & rtY . b1ehm1zurn , & rtY . fu4qp3lwyh , & rtY .
jfavcx5pxi } ; rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( (
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
rt_LoggedOutputBlockNames_0 [ ] = { "cst_robotarm_breach/tAngle" } ; static
const char_T * rt_LoggedOutputLabels_1 [ ] = { "bAngle" } ; static const
char_T * rt_LoggedOutputBlockNames_1 [ ] = { "cst_robotarm_breach/bAngle" } ;
static const char_T * rt_LoggedOutputLabels_2 [ ] = { "fAngle" } ; static
const char_T * rt_LoggedOutputBlockNames_2 [ ] = {
"cst_robotarm_breach/fAngle" } ; static const char_T *
rt_LoggedOutputLabels_3 [ ] = { "wAngle" } ; static const char_T *
rt_LoggedOutputBlockNames_3 [ ] = { "cst_robotarm_breach/wAngle" } ; static
const char_T * rt_LoggedOutputLabels_4 [ ] = { "hAngle" } ; static const
char_T * rt_LoggedOutputBlockNames_4 [ ] = { "cst_robotarm_breach/hAngle" } ;
static const char_T * rt_LoggedOutputLabels_5 [ ] = { "gAngle" } ; static
const char_T * rt_LoggedOutputBlockNames_5 [ ] = {
"cst_robotarm_breach/gAngle" } ; static RTWLogDataTypeConvert
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
{ ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) ,
( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P
| ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z
| ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N
| ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P
| ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P
) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z
| ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N
| ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P
) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , (
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N
| ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P
) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , (
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z
| ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) } ; static real_T outputTimes [
1001 ] = { 0.0 , 0.01 , 0.02 , 0.03 , 0.04 , 0.05 , 0.06 , 0.07 , 0.08 , 0.09
, 0.1 , 0.11 , 0.12 , 0.13 , 0.14 , 0.15 , 0.16 , 0.17 , 0.18 , 0.19 , 0.2 ,
0.21 , 0.22 , 0.23 , 0.24 , 0.25 , 0.26 , 0.27 , 0.28 , 0.29 , 0.3 , 0.31 ,
0.32 , 0.33 , 0.34 , 0.35000000000000003 , 0.36 , 0.37 , 0.38 , 0.39 , 0.4 ,
0.41000000000000003 , 0.42 , 0.43 , 0.44 , 0.45 , 0.46 , 0.47000000000000003
, 0.48 , 0.49 , 0.5 , 0.51 , 0.52 , 0.53 , 0.54 , 0.55 , 0.56 ,
0.57000000000000006 , 0.58 , 0.59 , 0.6 , 0.61 , 0.62 , 0.63 , 0.64 , 0.65 ,
0.66 , 0.67 , 0.68 , 0.69000000000000006 , 0.70000000000000007 , 0.71 , 0.72
, 0.73 , 0.74 , 0.75 , 0.76 , 0.77 , 0.78 , 0.79 , 0.8 , 0.81 ,
0.82000000000000006 , 0.83000000000000007 , 0.84 , 0.85 , 0.86 , 0.87 , 0.88
, 0.89 , 0.9 , 0.91 , 0.92 , 0.93 , 0.94000000000000006 , 0.95000000000000007
, 0.96 , 0.97 , 0.98 , 0.99 , 1.0 , 1.01 , 1.02 , 1.03 , 1.04 , 1.05 , 1.06 ,
1.07 , 1.08 , 1.09 , 1.1 , 1.11 , 1.12 , 1.1300000000000001 ,
1.1400000000000001 , 1.1500000000000001 , 1.16 , 1.17 , 1.18 , 1.19 , 1.2 ,
1.21 , 1.22 , 1.23 , 1.24 , 1.25 , 1.26 , 1.27 , 1.28 , 1.29 , 1.3 , 1.31 ,
1.32 , 1.33 , 1.34 , 1.35 , 1.36 , 1.37 , 1.3800000000000001 ,
1.3900000000000001 , 1.4000000000000001 , 1.41 , 1.42 , 1.43 , 1.44 , 1.45 ,
1.46 , 1.47 , 1.48 , 1.49 , 1.5 , 1.51 , 1.52 , 1.53 , 1.54 , 1.55 , 1.56 ,
1.57 , 1.58 , 1.59 , 1.6 , 1.61 , 1.62 , 1.6300000000000001 ,
1.6400000000000001 , 1.6500000000000001 , 1.6600000000000001 , 1.67 , 1.68 ,
1.69 , 1.7 , 1.71 , 1.72 , 1.73 , 1.74 , 1.75 , 1.76 , 1.77 , 1.78 , 1.79 ,
1.8 , 1.81 , 1.82 , 1.83 , 1.84 , 1.85 , 1.86 , 1.87 , 1.8800000000000001 ,
1.8900000000000001 , 1.9000000000000001 , 1.9100000000000001 , 1.92 , 1.93 ,
1.94 , 1.95 , 1.96 , 1.97 , 1.98 , 1.99 , 2.0 , 2.0100000000000002 , 2.02 ,
2.0300000000000002 , 2.04 , 2.05 , 2.06 , 2.07 , 2.08 , 2.09 , 2.1 , 2.11 ,
2.12 , 2.13 , 2.14 , 2.15 , 2.16 , 2.17 , 2.18 , 2.19 , 2.2 , 2.21 , 2.22 ,
2.23 , 2.24 , 2.25 , 2.2600000000000002 , 2.27 , 2.2800000000000002 , 2.29 ,
2.3000000000000003 , 2.31 , 2.32 , 2.33 , 2.34 , 2.35 , 2.36 , 2.37 , 2.38 ,
2.39 , 2.4 , 2.41 , 2.42 , 2.43 , 2.44 , 2.45 , 2.46 , 2.47 , 2.48 , 2.49 ,
2.5 , 2.5100000000000002 , 2.52 , 2.5300000000000002 , 2.54 ,
2.5500000000000003 , 2.56 , 2.57 , 2.58 , 2.59 , 2.6 , 2.61 , 2.62 , 2.63 ,
2.64 , 2.65 , 2.66 , 2.67 , 2.68 , 2.69 , 2.7 , 2.71 , 2.72 , 2.73 , 2.74 ,
2.75 , 2.7600000000000002 , 2.77 , 2.7800000000000002 , 2.79 ,
2.8000000000000003 , 2.81 , 2.82 , 2.83 , 2.84 , 2.85 , 2.86 , 2.87 , 2.88 ,
2.89 , 2.9 , 2.91 , 2.92 , 2.93 , 2.94 , 2.95 , 2.96 , 2.97 , 2.98 , 2.99 ,
3.0 , 3.0100000000000002 , 3.02 , 3.0300000000000002 , 3.04 ,
3.0500000000000003 , 3.06 , 3.0700000000000003 , 3.08 , 3.09 , 3.1 , 3.11 ,
3.12 , 3.13 , 3.14 , 3.15 , 3.16 , 3.17 , 3.18 , 3.19 , 3.2 , 3.21 , 3.22 ,
3.23 , 3.24 , 3.25 , 3.2600000000000002 , 3.27 , 3.2800000000000002 , 3.29 ,
3.3000000000000003 , 3.31 , 3.3200000000000003 , 3.33 , 3.34 , 3.35 , 3.36 ,
3.37 , 3.38 , 3.39 , 3.4 , 3.41 , 3.42 , 3.43 , 3.44 , 3.45 , 3.46 , 3.47 ,
3.48 , 3.49 , 3.5 , 3.5100000000000002 , 3.52 , 3.5300000000000002 , 3.54 ,
3.5500000000000003 , 3.56 , 3.5700000000000003 , 3.58 , 3.59 , 3.6 , 3.61 ,
3.62 , 3.63 , 3.64 , 3.65 , 3.66 , 3.67 , 3.68 , 3.69 , 3.7 , 3.71 , 3.72 ,
3.73 , 3.74 , 3.75 , 3.7600000000000002 , 3.77 , 3.7800000000000002 , 3.79 ,
3.8000000000000003 , 3.81 , 3.8200000000000003 , 3.83 , 3.84 , 3.85 , 3.86 ,
3.87 , 3.88 , 3.89 , 3.9 , 3.91 , 3.92 , 3.93 , 3.94 , 3.95 , 3.96 , 3.97 ,
3.98 , 3.99 , 4.0 , 4.01 , 4.0200000000000005 , 4.03 , 4.04 , 4.05 ,
4.0600000000000005 , 4.07 , 4.08 , 4.09 , 4.1 , 4.11 , 4.12 , 4.13 , 4.14 ,
4.15 , 4.16 , 4.17 , 4.18 , 4.19 , 4.2 , 4.21 , 4.22 , 4.23 , 4.24 , 4.25 ,
4.26 , 4.2700000000000005 , 4.28 , 4.29 , 4.3 , 4.3100000000000005 , 4.32 ,
4.33 , 4.34 , 4.3500000000000005 , 4.36 , 4.37 , 4.38 , 4.39 , 4.4 , 4.41 ,
4.42 , 4.43 , 4.44 , 4.45 , 4.46 , 4.47 , 4.48 , 4.49 , 4.5 , 4.51 ,
4.5200000000000005 , 4.53 , 4.54 , 4.55 , 4.5600000000000005 , 4.57 , 4.58 ,
4.59 , 4.6000000000000005 , 4.61 , 4.62 , 4.63 , 4.64 , 4.65 , 4.66 , 4.67 ,
4.68 , 4.69 , 4.7 , 4.71 , 4.72 , 4.73 , 4.74 , 4.75 , 4.76 ,
4.7700000000000005 , 4.78 , 4.79 , 4.8 , 4.8100000000000005 , 4.82 , 4.83 ,
4.84 , 4.8500000000000005 , 4.86 , 4.87 , 4.88 , 4.89 , 4.9 , 4.91 , 4.92 ,
4.93 , 4.94 , 4.95 , 4.96 , 4.97 , 4.98 , 4.99 , 5.0 , 5.01 , 5.02 , 5.03 ,
5.04 , 5.05 , 5.06 , 5.07 , 5.08 , 5.09 , 5.1 , 5.11 , 5.12 , 5.13 , 5.14 ,
5.1499999999999995 , 5.16 , 5.17 , 5.18 , 5.1899999999999995 , 5.2 , 5.21 ,
5.22 , 5.2299999999999995 , 5.24 , 5.25 , 5.26 , 5.27 , 5.28 , 5.29 , 5.3 ,
5.31 , 5.32 , 5.33 , 5.34 , 5.35 , 5.36 , 5.37 , 5.38 , 5.39 ,
5.3999999999999995 , 5.41 , 5.42 , 5.43 , 5.4399999999999995 , 5.45 , 5.46 ,
5.47 , 5.4799999999999995 , 5.49 , 5.5 , 5.51 , 5.52 , 5.53 , 5.54 , 5.55 ,
5.56 , 5.57 , 5.58 , 5.59 , 5.6 , 5.61 , 5.62 , 5.63 , 5.64 ,
5.6499999999999995 , 5.66 , 5.67 , 5.68 , 5.6899999999999995 , 5.7 , 5.71 ,
5.72 , 5.7299999999999995 , 5.74 , 5.75 , 5.76 , 5.77 , 5.78 , 5.79 , 5.8 ,
5.81 , 5.82 , 5.83 , 5.84 , 5.85 , 5.86 , 5.87 , 5.88 , 5.89 , 5.9 , 5.91 ,
5.92 , 5.93 , 5.9399999999999995 , 5.95 , 5.96 , 5.97 , 5.9799999999999995 ,
5.99 , 6.0 , 6.01 , 6.02 , 6.0299999999999994 , 6.04 , 6.05 ,
6.0600000000000005 , 6.07 , 6.08 , 6.09 , 6.1 , 6.1099999999999994 , 6.12 ,
6.13 , 6.1400000000000006 , 6.15 , 6.16 , 6.17 , 6.18 , 6.1899999999999995 ,
6.1999999999999993 , 6.21 , 6.22 , 6.23 , 6.24 , 6.25 , 6.26 , 6.27 ,
6.2799999999999994 , 6.29 , 6.3 , 6.3100000000000005 , 6.32 , 6.33 , 6.34 ,
6.35 , 6.3599999999999994 , 6.37 , 6.38 , 6.3900000000000006 , 6.4 , 6.41 ,
6.42 , 6.43 , 6.4399999999999995 , 6.4499999999999993 , 6.46 , 6.47 , 6.48 ,
6.49 , 6.5 , 6.51 , 6.52 , 6.5299999999999994 , 6.54 , 6.55 ,
6.5600000000000005 , 6.57 , 6.58 , 6.59 , 6.6 , 6.6099999999999994 , 6.62 ,
6.63 , 6.6400000000000006 , 6.65 , 6.66 , 6.67 , 6.68 , 6.6899999999999995 ,
6.6999999999999993 , 6.71 , 6.72 , 6.73 , 6.74 , 6.75 , 6.76 , 6.77 ,
6.7799999999999994 , 6.79 , 6.8 , 6.8100000000000005 , 6.82 , 6.83 , 6.84 ,
6.85 , 6.8599999999999994 , 6.87 , 6.88 , 6.8900000000000006 , 6.9 , 6.91 ,
6.92 , 6.93 , 6.9399999999999995 , 6.9499999999999993 , 6.96 , 6.97 , 6.98 ,
6.99 , 7.0 , 7.01 , 7.02 , 7.0299999999999994 , 7.04 , 7.05 ,
7.0600000000000005 , 7.07 , 7.08 , 7.09 , 7.1 , 7.1099999999999994 , 7.12 ,
7.13 , 7.1400000000000006 , 7.15 , 7.16 , 7.17 , 7.18 , 7.1899999999999995 ,
7.1999999999999993 , 7.21 , 7.22 , 7.23 , 7.24 , 7.25 , 7.26 , 7.27 ,
7.2799999999999994 , 7.29 , 7.3 , 7.3100000000000005 , 7.32 , 7.33 , 7.34 ,
7.35 , 7.3599999999999994 , 7.37 , 7.38 , 7.3900000000000006 , 7.4 , 7.41 ,
7.42 , 7.43 , 7.4399999999999995 , 7.4499999999999993 , 7.46 , 7.47 , 7.48 ,
7.49 , 7.5 , 7.51 , 7.52 , 7.5299999999999994 , 7.54 , 7.55 ,
7.5600000000000005 , 7.57 , 7.58 , 7.59 , 7.6 , 7.6099999999999994 , 7.62 ,
7.63 , 7.6400000000000006 , 7.65 , 7.66 , 7.67 , 7.68 , 7.6899999999999995 ,
7.6999999999999993 , 7.71 , 7.72 , 7.73 , 7.74 , 7.75 , 7.76 , 7.77 ,
7.7799999999999994 , 7.79 , 7.8 , 7.8100000000000005 , 7.82 , 7.83 , 7.84 ,
7.85 , 7.8599999999999994 , 7.87 , 7.88 , 7.8900000000000006 , 7.9 , 7.91 ,
7.92 , 7.93 , 7.9399999999999995 , 7.95 , 7.96 , 7.97 , 7.98 , 7.99 , 8.0 ,
8.01 , 8.02 , 8.03 , 8.04 , 8.05 , 8.06 , 8.07 , 8.08 , 8.09 , 8.1 , 8.11 ,
8.12 , 8.129999999999999 , 8.14 , 8.15 , 8.16 , 8.17 , 8.18 , 8.19 , 8.2 ,
8.21 , 8.22 , 8.23 , 8.24 , 8.25 , 8.26 , 8.27 , 8.28 , 8.29 , 8.3 , 8.31 ,
8.32 , 8.33 , 8.34 , 8.35 , 8.36 , 8.37 , 8.379999999999999 , 8.39 , 8.4 ,
8.41 , 8.42 , 8.43 , 8.44 , 8.45 , 8.46 , 8.47 , 8.48 , 8.49 , 8.5 , 8.51 ,
8.52 , 8.53 , 8.54 , 8.55 , 8.56 , 8.57 , 8.58 , 8.59 , 8.6 , 8.61 , 8.62 ,
8.629999999999999 , 8.64 , 8.65 , 8.66 , 8.67 , 8.68 , 8.69 , 8.7 , 8.71 ,
8.72 , 8.73 , 8.74 , 8.75 , 8.76 , 8.77 , 8.78 , 8.79 , 8.8 , 8.81 , 8.82 ,
8.83 , 8.84 , 8.85 , 8.86 , 8.87 , 8.879999999999999 , 8.89 , 8.9 , 8.91 ,
8.92 , 8.93 , 8.94 , 8.95 , 8.96 , 8.97 , 8.98 , 8.99 , 9.0 , 9.01 , 9.02 ,
9.03 , 9.04 , 9.05 , 9.06 , 9.07 , 9.08 , 9.09 , 9.1 , 9.11 , 9.12 , 9.13 ,
9.14 , 9.15 , 9.16 , 9.17 , 9.18 , 9.19 , 9.2 , 9.21 , 9.22 , 9.23 , 9.24 ,
9.25 , 9.26 , 9.27 , 9.28 , 9.29 , 9.3 , 9.31 , 9.32 , 9.33 , 9.34 , 9.35 ,
9.36 , 9.37 , 9.38 , 9.39 , 9.4 , 9.41 , 9.42 , 9.43 , 9.44 , 9.45 , 9.46 ,
9.47 , 9.48 , 9.49 , 9.5 , 9.51 , 9.52 , 9.53 , 9.54 , 9.55 , 9.56 , 9.57 ,
9.58 , 9.59 , 9.6 , 9.61 , 9.62 , 9.63 , 9.64 , 9.65 , 9.66 , 9.67 , 9.68 ,
9.69 , 9.7 , 9.71 , 9.72 , 9.73 , 9.74 , 9.75 , 9.76 , 9.77 , 9.78 , 9.79 ,
9.8 , 9.81 , 9.82 , 9.83 , 9.84 , 9.85 , 9.86 , 9.87 , 9.88 , 9.89 , 9.9 ,
9.91 , 9.92 , 9.93 , 9.94 , 9.95 , 9.96 , 9.97 , 9.98 , 9.99 , 10.0 } ;
static ssNonContDerivSigInfo nonContDerivSigInfo [ 6 ] = { { 1 * sizeof (
real_T ) , ( char * ) ( & rtB . okyvttk103 ) , ( NULL ) } , { 1 * sizeof (
real_T ) , ( char * ) ( & rtB . jv05vc0wdl ) , ( NULL ) } , { 1 * sizeof (
real_T ) , ( char * ) ( & rtB . ljrewaf2lo ) , ( NULL ) } , { 1 * sizeof (
real_T ) , ( char * ) ( & rtB . ghuv4nrpe3 ) , ( NULL ) } , { 1 * sizeof (
real_T ) , ( char * ) ( & rtB . jndeowmqg5 ) , ( NULL ) } , { 1 * sizeof (
real_T ) , ( char * ) ( & rtB . d4qhj2qvox ) , ( NULL ) } } ; { int i ; for (
i = 0 ; i < 62 ; ++ i ) { contStateJacPerturbBoundMinVec [ i ] = 0 ;
contStateJacPerturbBoundMaxVec [ i ] = rtGetInf ( ) ; } } ssSetSolverRelTol (
rtS , 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 )
; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 0.05 ) ; ssSetSolverMaxOrder ( rtS , - 1 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , outputTimes )
; ssSetNumOutputTimes ( rtS , 1001 ) ; ssSetOutputTimesOnly ( rtS , 1 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 1 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
6 ) ; ssSetNonContDerivSigInfos ( rtS , nonContDerivSigInfo ) ;
ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS , "ode23t" ) ;
ssSetVariableStepSolver ( rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; _ssSetSolverUpdateJacobianAtReset
( rtS , true ) ; ssSetAbsTolVector ( rtS , absTol ) ;
ssSetAbsTolControlVector ( rtS , absTolControl ) ; ssSetSolverAbsTol_Obsolete
( rtS , absTol ) ; ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl )
; ssSetJacobianPerturbationBoundsMinVec ( rtS ,
contStateJacPerturbBoundMinVec ) ; ssSetJacobianPerturbationBoundsMaxVec (
rtS , contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 1
) ; ( void ) memset ( ( void * ) & mdlMethods2 , 0 , sizeof ( mdlMethods2 ) )
; ssSetModelMethods2 ( rtS , & mdlMethods2 ) ; ( void ) memset ( ( void * ) &
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
real_T ) ) ; } } ssSetChecksumVal ( rtS , 0 , 2957884597U ) ;
ssSetChecksumVal ( rtS , 1 , 3543390542U ) ; ssSetChecksumVal ( rtS , 2 ,
126132786U ) ; ssSetChecksumVal ( rtS , 3 , 3705451789U ) ; { static const
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
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID2 ( tid ) ; }
