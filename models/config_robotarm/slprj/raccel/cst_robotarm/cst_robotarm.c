#include "rt_logging_mmi.h"
#include "cst_robotarm_capi.h"
#include <math.h>
#include "cst_robotarm.h"
#include "cst_robotarm_private.h"
#include "cst_robotarm_dt.h"
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
"slprj//raccel//cst_robotarm//cst_robotarm_Jpattern.mat" ; const int_T
gblNumRootInportBlks = 6 ; const int_T gblNumModelInputs = 6 ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern void * gblAperiodicPartitionHitTimes ; const int_T
gblInportDataTypeIdx [ ] = { 0 , 0 , 0 , 0 , 0 , 0 } ; const int_T
gblInportDims [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; const
int_T gblInportComplex [ ] = { 0 , 0 , 0 , 0 , 0 , 0 } ; const int_T
gblInportInterpoFlag [ ] = { 1 , 1 , 1 , 1 , 1 , 1 } ; const int_T
gblInportContinuous [ ] = { 1 , 1 , 1 , 1 , 1 , 1 } ; int_T enableFcnCallFlag
[ ] = { 1 , 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
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
k32vukczvp = rtP . Integrator_IC ; rtDW . osuwpyfhhy = rtP .
DiscreteTransferFcn_InitialStates ; rtDW . il1m24s12p = ( rtInf ) ; rtDW .
kzugk1exec = ( rtInf ) ; rtX . cim0sdziv1 = rtP . Integrator1_IC ; rtDW .
n1egvt1ecq = rtP . DiscreteTransferFcn1_InitialStates ; rtDW . hf5ayypcbu = (
rtInf ) ; rtDW . od5nlggen3 = ( rtInf ) ; rtX . jq40kv3kof = rtP .
Integrator2_IC ; rtDW . fxsfevo34c = rtP . DiscreteTransferFcn2_InitialStates
; rtDW . ghph52rdce = ( rtInf ) ; rtDW . cnn05julux = ( rtInf ) ; rtX .
i0jaxz1ns1 = rtP . Integrator3_IC ; rtDW . n0cpdtot23 = rtP .
DiscreteTransferFcn3_InitialStates ; rtDW . ksz3qgvme2 = ( rtInf ) ; rtDW .
dc2k3ryr1h = ( rtInf ) ; rtX . kpt4tgks43 = rtP . Integrator4_IC ; rtDW .
dhnlnnkmax = rtP . DiscreteTransferFcn4_InitialStates ; rtDW . lsnzpaafr0 = (
rtInf ) ; rtDW . kecuqjxdts = ( rtInf ) ; rtX . bgm2jlczsl = rtP .
Integrator5_IC ; rtDW . g55yrwtthh = rtP . DiscreteTransferFcn5_InitialStates
; rtDW . btgoxpvg4h = ( rtInf ) ; rtDW . nbytpsj5tm = ( rtInf ) ; tmp = false
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
pISigstreamManager , 0 , & rtU . n1ogmfa4cp ) ;
rtwISigstreamManagerSetDestinationBase ( pISigstreamManager , 1 , & rtU .
fi3eog4bcj ) ; rtwISigstreamManagerSetDestinationBase ( pISigstreamManager ,
2 , & rtU . meqjcbtglm ) ; rtwISigstreamManagerSetDestinationBase (
pISigstreamManager , 3 , & rtU . ptivu2pmk5 ) ;
rtwISigstreamManagerSetDestinationBase ( pISigstreamManager , 4 , & rtU .
mitwhaapce ) ; rtwISigstreamManagerSetDestinationBase ( pISigstreamManager ,
5 , & rtU . gfuy4k4wck ) ; } } { void * slioCatalogue = rt_slioCatalogue ( )
? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "d1" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "d1" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/D1" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "d1" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. fkhju0d3rl . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"b2b233a2-2f6e-4df4-8794-5286ee35548d" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "V" ) ; if ( rtDW . fkhju0d3rl . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . fkhju0d3rl . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . fkhju0d3rl .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . fkhju0d3rl . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . fkhju0d3rl . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
fkhju0d3rl . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
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
"cst_robotarm/D1" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/D1" , 1 , "d1" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . fkhju0d3rl . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "d2" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "d2" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/D2" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "d2" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. nbjxrunoh4 . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"4cf5e7f3-b85e-4fae-a358-dae915354646" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "V" ) ; if ( rtDW . nbjxrunoh4 . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . nbjxrunoh4 . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . nbjxrunoh4 .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . nbjxrunoh4 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . nbjxrunoh4 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
nbjxrunoh4 . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
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
"cst_robotarm/D2" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/D2" , 1 , "d2" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . nbjxrunoh4 . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "d3" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "d3" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/D3" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "d3" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. ox2wjis5ak . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"e4744dd6-19e3-44d7-b776-ba63fd92df87" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "V" ) ; if ( rtDW . ox2wjis5ak . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . ox2wjis5ak . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . ox2wjis5ak .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . ox2wjis5ak . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . ox2wjis5ak . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
ox2wjis5ak . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
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
"cst_robotarm/D3" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/D3" , 1 , "d3" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . ox2wjis5ak . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "d4" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "d4" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/D4" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "d4" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. avhnfypyzw . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"37b0f763-eddb-4659-8b30-df7807f549e8" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "V" ) ; if ( rtDW . avhnfypyzw . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . avhnfypyzw . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . avhnfypyzw .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . avhnfypyzw . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . avhnfypyzw . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
avhnfypyzw . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
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
"cst_robotarm/D4" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/D4" , 1 , "d4" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . avhnfypyzw . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "d5" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "d5" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/D5" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "d5" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. h5ig2mnnp5 . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"18829da6-0626-4f74-b702-7664c9cf0613" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "V" ) ; if ( rtDW . h5ig2mnnp5 . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . h5ig2mnnp5 . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . h5ig2mnnp5 .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . h5ig2mnnp5 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . h5ig2mnnp5 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
h5ig2mnnp5 . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
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
"cst_robotarm/D5" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/D5" , 1 , "d5" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . h5ig2mnnp5 . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "d6" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "d6" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/D6" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "d6" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. ju0hwcip3s . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"3895a829-3eff-42fa-88f3-c9648792284b" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "V" ) ; if ( rtDW . ju0hwcip3s . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . ju0hwcip3s . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . ju0hwcip3s .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . ju0hwcip3s . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . ju0hwcip3s . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
ju0hwcip3s . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
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
"cst_robotarm/D6" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/D6" , 1 , "d6" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . ju0hwcip3s . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kd1" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kd1" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/Gd1" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Kd1" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. h1wvgvd1h4 . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"4e045aa5-0ec1-4dcd-a0dd-396d29ab7bcd" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . h1wvgvd1h4 . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . h1wvgvd1h4 . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . h1wvgvd1h4 .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . h1wvgvd1h4 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . h1wvgvd1h4 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
h1wvgvd1h4 . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "Kd1" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "Kd1" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Gd1" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/Gd1" , 1 , "Kd1" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . h1wvgvd1h4 . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kd2" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kd2" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/Gd2" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Kd2" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. dcbtcmf10i . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"ff77abe4-ebf4-4678-abf2-3bd29b588e08" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . dcbtcmf10i . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . dcbtcmf10i . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . dcbtcmf10i .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . dcbtcmf10i . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . dcbtcmf10i . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
dcbtcmf10i . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "Kd2" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "Kd2" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Gd2" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/Gd2" , 1 , "Kd2" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . dcbtcmf10i . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kd3" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kd3" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/Gd3" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Kd3" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. jvokyr3vc0 . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"0faafb9b-63c7-4c00-a2b6-dbdd65a0204f" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . jvokyr3vc0 . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . jvokyr3vc0 . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . jvokyr3vc0 .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . jvokyr3vc0 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . jvokyr3vc0 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
jvokyr3vc0 . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "Kd3" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "Kd3" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Gd3" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/Gd3" , 1 , "Kd3" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . jvokyr3vc0 . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kd4" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kd4" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/Gd4" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Kd4" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. gvul0tg30e . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"ff3c23dc-1966-4eae-b379-6a029ffc7965" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . gvul0tg30e . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . gvul0tg30e . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . gvul0tg30e .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . gvul0tg30e . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . gvul0tg30e . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
gvul0tg30e . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "Kd4" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "Kd4" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Gd4" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/Gd4" , 1 , "Kd4" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . gvul0tg30e . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kd5" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kd5" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/Gd5" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Kd5" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. pluidmihey . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"1770f5e5-d2fd-459f-a53c-1241e52fe5b2" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . pluidmihey . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . pluidmihey . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . pluidmihey .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . pluidmihey . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . pluidmihey . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
pluidmihey . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "Kd5" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "Kd5" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Gd5" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/Gd5" , 1 , "Kd5" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . pluidmihey . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kd6" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kd6" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/Gd6" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Kd6" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. nqajuamynq . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"558dd649-c797-401d-b446-feec13455145" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . nqajuamynq . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . nqajuamynq . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . nqajuamynq .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . nqajuamynq . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . nqajuamynq . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
nqajuamynq . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "Kd6" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "Kd6" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Gd6" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/Gd6" , 1 , "Kd6" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . nqajuamynq . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Ki1" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Ki1" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/Gi1" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Ki1" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. dkygoqftlz . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"ba4a86d0-4543-4c47-9fab-70c1992c0b61" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . dkygoqftlz . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . dkygoqftlz . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . dkygoqftlz .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . dkygoqftlz . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . dkygoqftlz . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
dkygoqftlz . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "Ki1" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "Ki1" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Gi1" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/Gi1" , 1 , "Ki1" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . dkygoqftlz . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Ki2" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Ki2" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/Gi2" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Ki2" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. d4ovmgffgs . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"e604524e-0eda-4672-b611-b62264a11515" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . d4ovmgffgs . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . d4ovmgffgs . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . d4ovmgffgs .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . d4ovmgffgs . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . d4ovmgffgs . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
d4ovmgffgs . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "Ki2" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "Ki2" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Gi2" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/Gi2" , 1 , "Ki2" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . d4ovmgffgs . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Ki3" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Ki3" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/Gi3" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Ki3" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. bj5lql4lou . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"25478c73-59b8-402f-bb04-48855ae22777" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . bj5lql4lou . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . bj5lql4lou . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . bj5lql4lou .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . bj5lql4lou . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . bj5lql4lou . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
bj5lql4lou . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "Ki3" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "Ki3" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Gi3" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/Gi3" , 1 , "Ki3" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . bj5lql4lou . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Ki4" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Ki4" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/Gi4" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Ki4" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. ixg02n0kht . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"d6a2b6a3-1251-4465-93d8-cbdd11de7836" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . ixg02n0kht . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . ixg02n0kht . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . ixg02n0kht .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . ixg02n0kht . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . ixg02n0kht . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
ixg02n0kht . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "Ki4" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "Ki4" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Gi4" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/Gi4" , 1 , "Ki4" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . ixg02n0kht . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Ki5" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Ki5" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/Gi5" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Ki5" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. akh35vbfzy . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"64da35ca-f905-4990-9eb9-0ed986518dfd" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . akh35vbfzy . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . akh35vbfzy . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . akh35vbfzy .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . akh35vbfzy . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . akh35vbfzy . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
akh35vbfzy . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "Ki5" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "Ki5" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Gi5" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/Gi5" , 1 , "Ki5" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . akh35vbfzy . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Ki6" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Ki6" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/Gi6" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Ki6" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. c2qb0n32ss . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"9e13457f-84af-4769-8446-5096ee8afecc" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . c2qb0n32ss . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . c2qb0n32ss . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . c2qb0n32ss .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . c2qb0n32ss . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . c2qb0n32ss . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
c2qb0n32ss . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "Ki6" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "Ki6" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Gi6" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/Gi6" , 1 , "Ki6" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . c2qb0n32ss . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kp1" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kp1" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/Gp1" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Kp1" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. bx5yrpmeoz . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"583fdf82-f968-4fd6-9390-fff6a85acf0f" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . bx5yrpmeoz . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . bx5yrpmeoz . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . bx5yrpmeoz .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . bx5yrpmeoz . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . bx5yrpmeoz . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
bx5yrpmeoz . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "Kp1" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "Kp1" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Gp1" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/Gp1" , 1 , "Kp1" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . bx5yrpmeoz . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kp2" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kp2" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/Gp2" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Kp2" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. oyj5nltrtm . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"ac92c3b8-955c-4f0a-b789-225d1029dbc3" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . oyj5nltrtm . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . oyj5nltrtm . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . oyj5nltrtm .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . oyj5nltrtm . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . oyj5nltrtm . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
oyj5nltrtm . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "Kp2" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "Kp2" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Gp2" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/Gp2" , 1 , "Kp2" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . oyj5nltrtm . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kp3" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kp3" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/Gp3" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Kp3" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. l1xqkb0uuj . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"9b060cf9-4628-4a5f-9025-2109c5b2c187" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . l1xqkb0uuj . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . l1xqkb0uuj . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . l1xqkb0uuj .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . l1xqkb0uuj . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . l1xqkb0uuj . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
l1xqkb0uuj . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "Kp3" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "Kp3" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Gp3" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/Gp3" , 1 , "Kp3" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . l1xqkb0uuj . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kp4" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kp4" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/Gp4" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Kp4" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. cqsrogmetz . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"673401b1-8adf-4689-ab7a-77575e4318de" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . cqsrogmetz . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . cqsrogmetz . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . cqsrogmetz .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . cqsrogmetz . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . cqsrogmetz . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
cqsrogmetz . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "Kp4" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "Kp4" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Gp4" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/Gp4" , 1 , "Kp4" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . cqsrogmetz . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kp5" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kp5" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/Gp5" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Kp5" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. nuk5ajouhh . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"e01328ea-cebd-495d-9a9d-66cdd78b9045" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . nuk5ajouhh . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . nuk5ajouhh . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . nuk5ajouhh .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . nuk5ajouhh . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . nuk5ajouhh . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
nuk5ajouhh . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "Kp5" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "Kp5" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Gp5" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/Gp5" , 1 , "Kp5" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . nuk5ajouhh . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Kp6" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "Kp6" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/Gp6" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Kp6" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. difeoh0o3t . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"050cef8b-36a9-4999-9dd6-3bfc95877a98" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . difeoh0o3t . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . difeoh0o3t . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . difeoh0o3t .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . difeoh0o3t . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . difeoh0o3t . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
difeoh0o3t . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "Kp6" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "Kp6" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Gp6" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/Gp6" , 1 , "Kp6" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . difeoh0o3t . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "r1" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "r1" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/R1" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "r1" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. ijvorwciil . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"7a2cb0c5-c7fb-4ee0-8b09-0f3911275bb4" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "V" ) ; if ( rtDW . ijvorwciil . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . ijvorwciil . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . ijvorwciil .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . ijvorwciil . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . ijvorwciil . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
ijvorwciil . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
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
"cst_robotarm/R1" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/R1" , 1 , "r1" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . ijvorwciil . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "r2" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "r2" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/R2" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "r2" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. ewswq3ixhs . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"7e8c1a9e-50a4-4491-b45c-9e1a9bd545af" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "V" ) ; if ( rtDW . ewswq3ixhs . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . ewswq3ixhs . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . ewswq3ixhs .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . ewswq3ixhs . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . ewswq3ixhs . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
ewswq3ixhs . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
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
"cst_robotarm/R2" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/R2" , 1 , "r2" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . ewswq3ixhs . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "r3" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "r3" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/R3" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "r3" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. pd5b5eork3 . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"52d5d665-3d0b-410b-88f0-f4d2c4830fda" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "V" ) ; if ( rtDW . pd5b5eork3 . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . pd5b5eork3 . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . pd5b5eork3 .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . pd5b5eork3 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . pd5b5eork3 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
pd5b5eork3 . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
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
"cst_robotarm/R3" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/R3" , 1 , "r3" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . pd5b5eork3 . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "r4" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "r4" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/R4" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "r4" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. lxuytvgznq . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"8fc4a63c-cfe5-4d23-b8b1-209934e89fc1" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "V" ) ; if ( rtDW . lxuytvgznq . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . lxuytvgznq . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . lxuytvgznq .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . lxuytvgznq . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . lxuytvgznq . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
lxuytvgznq . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
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
"cst_robotarm/R4" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/R4" , 1 , "r4" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . lxuytvgznq . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "r5" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "r5" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/R5" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "r5" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. crkalficod . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"31a0e5fc-f32b-443d-99b2-787af71d54a3" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "V" ) ; if ( rtDW . crkalficod . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . crkalficod . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . crkalficod .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . crkalficod . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . crkalficod . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
crkalficod . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
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
"cst_robotarm/R5" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/R5" , 1 , "r5" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . crkalficod . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "r6" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "r6" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/R6" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "r6" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. ckmmj1b1a4 . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"ccdc7fdf-ddc2-4852-8472-156fb035c741" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "V" ) ; if ( rtDW . ckmmj1b1a4 . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . ckmmj1b1a4 . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . ckmmj1b1a4 .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . ckmmj1b1a4 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . ckmmj1b1a4 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
ckmmj1b1a4 . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
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
"cst_robotarm/R6" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/R6" , 1 , "r6" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . ckmmj1b1a4 . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "tAngle" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "tAngle" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm/Setpoint Angles1" ) ; sdiLabelU blockSID = sdiGetLabelFromChars
( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "tAngle" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . ejwlgw0b0w . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "87a2c110-0161-401c-a913-813b1bde1d57" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "rad" ) ; if (
rtDW . ejwlgw0b0w . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
ejwlgw0b0w . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . ejwlgw0b0w . AQHandles , ssGetTaskTime ( rtS , 1
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . ejwlgw0b0w . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . ejwlgw0b0w . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . ejwlgw0b0w . SlioLTF = ( NULL ) ; {
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
"cst_robotarm/Setpoint Angles1" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , (
NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal (
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Setpoint Angles1" , 1 , "tAngle" ) ; } if ( rtwLoggingOverride
( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS ( rtS ) -> mdlInfo
-> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval ( ssGetRootSS (
rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . ejwlgw0b0w . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "bAngle" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "bAngle" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm/Setpoint Angles1" ) ; sdiLabelU blockSID = sdiGetLabelFromChars
( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "bAngle" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 1 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . lkmtjgr4pk . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "ab0b523e-f1df-47f8-93f9-51284f4c4ae6" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "rad" ) ; if (
rtDW . lkmtjgr4pk . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
lkmtjgr4pk . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . lkmtjgr4pk . AQHandles , ssGetTaskTime ( rtS , 1
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . lkmtjgr4pk . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . lkmtjgr4pk . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . lkmtjgr4pk . SlioLTF = ( NULL ) ; {
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
"cst_robotarm/Setpoint Angles1" , 2 , 0 , slioCatalogue , ( NULL ) , 0 , (
NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal (
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Setpoint Angles1" , 2 , "bAngle" ) ; } if ( rtwLoggingOverride
( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS ( rtS ) -> mdlInfo
-> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval ( ssGetRootSS (
rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . lkmtjgr4pk . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "fAngle" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "fAngle" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm/Setpoint Angles1" ) ; sdiLabelU blockSID = sdiGetLabelFromChars
( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "fAngle" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 2 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . doxequ5ptr . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "fbcfc129-b49f-4702-abb1-31ae9d8e7003" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "rad" ) ; if (
rtDW . doxequ5ptr . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
doxequ5ptr . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . doxequ5ptr . AQHandles , ssGetTaskTime ( rtS , 1
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . doxequ5ptr . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . doxequ5ptr . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . doxequ5ptr . SlioLTF = ( NULL ) ; {
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
"cst_robotarm/Setpoint Angles1" , 3 , 0 , slioCatalogue , ( NULL ) , 0 , (
NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal (
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Setpoint Angles1" , 3 , "fAngle" ) ; } if ( rtwLoggingOverride
( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS ( rtS ) -> mdlInfo
-> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval ( ssGetRootSS (
rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . doxequ5ptr . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "wAngle" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "wAngle" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm/Setpoint Angles1" ) ; sdiLabelU blockSID = sdiGetLabelFromChars
( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "wAngle" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 3 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . isfan0gc4x . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "17814bd1-979e-4dcf-943b-6d3abe17fcd6" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "rad" ) ; if (
rtDW . isfan0gc4x . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
isfan0gc4x . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . isfan0gc4x . AQHandles , ssGetTaskTime ( rtS , 1
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . isfan0gc4x . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . isfan0gc4x . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . isfan0gc4x . SlioLTF = ( NULL ) ; {
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
"cst_robotarm/Setpoint Angles1" , 4 , 0 , slioCatalogue , ( NULL ) , 0 , (
NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal (
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Setpoint Angles1" , 4 , "wAngle" ) ; } if ( rtwLoggingOverride
( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS ( rtS ) -> mdlInfo
-> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval ( ssGetRootSS (
rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . isfan0gc4x . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "hAngle" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "hAngle" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm/Setpoint Angles1" ) ; sdiLabelU blockSID = sdiGetLabelFromChars
( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "hAngle" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 4 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . bhw5fpwwrv . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "3cd55335-1edc-4312-b3c2-6e77b2f90d43" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "rad" ) ; if (
rtDW . bhw5fpwwrv . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
bhw5fpwwrv . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . bhw5fpwwrv . AQHandles , ssGetTaskTime ( rtS , 1
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . bhw5fpwwrv . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . bhw5fpwwrv . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . bhw5fpwwrv . SlioLTF = ( NULL ) ; {
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
"cst_robotarm/Setpoint Angles1" , 5 , 0 , slioCatalogue , ( NULL ) , 0 , (
NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal (
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Setpoint Angles1" , 5 , "hAngle" ) ; } if ( rtwLoggingOverride
( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS ( rtS ) -> mdlInfo
-> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval ( ssGetRootSS (
rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . bhw5fpwwrv . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "gAngle" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "gAngle" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm/Setpoint Angles1" ) ; sdiLabelU blockSID = sdiGetLabelFromChars
( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "gAngle" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 5 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . ffbfzmbeso . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "f1d62c51-6549-413c-bfd9-cb779a8b867b" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "rad" ) ; if (
rtDW . ffbfzmbeso . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
ffbfzmbeso . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . ffbfzmbeso . AQHandles , ssGetTaskTime ( rtS , 1
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . ffbfzmbeso . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . ffbfzmbeso . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . ffbfzmbeso . SlioLTF = ( NULL ) ; {
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
"cst_robotarm/Setpoint Angles1" , 6 , 0 , slioCatalogue , ( NULL ) , 0 , (
NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal (
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Setpoint Angles1" , 6 , "gAngle" ) ; } if ( rtwLoggingOverride
( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS ( rtS ) -> mdlInfo
-> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval ( ssGetRootSS (
rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . ffbfzmbeso . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "sp1" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "sp1" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/Sp1" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "sp1" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. bdep3qr3ra . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"0a095309-29ff-4b2b-af82-36a0849451e8" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . bdep3qr3ra . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . bdep3qr3ra . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . bdep3qr3ra .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . bdep3qr3ra . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . bdep3qr3ra . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
bdep3qr3ra . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "sp1" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "sp1" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Sp1" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/Sp1" , 1 , "sp1" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . bdep3qr3ra . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "sp2" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "sp2" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/Sp2" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "sp2" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. p14ax2esvj . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"583889ca-f69b-46f7-aa82-e36fc6893655" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . p14ax2esvj . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . p14ax2esvj . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . p14ax2esvj .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . p14ax2esvj . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . p14ax2esvj . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
p14ax2esvj . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "sp2" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "sp2" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Sp2" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/Sp2" , 1 , "sp2" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . p14ax2esvj . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "sp3" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "sp3" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/Sp3" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "sp3" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. d0f32oeoza . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"511b28f8-d8dd-44ff-8e43-840e52fe53f4" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . d0f32oeoza . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . d0f32oeoza . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . d0f32oeoza .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . d0f32oeoza . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . d0f32oeoza . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
d0f32oeoza . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "sp3" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "sp3" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Sp3" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/Sp3" , 1 , "sp3" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . d0f32oeoza . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "sp4" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "sp4" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/Sp4" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "sp4" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. dksd5f0dzc . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"9bd6803e-3cfc-41a5-98d1-f603d31f138a" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . dksd5f0dzc . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . dksd5f0dzc . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . dksd5f0dzc .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . dksd5f0dzc . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . dksd5f0dzc . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
dksd5f0dzc . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "sp4" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "sp4" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Sp4" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/Sp4" , 1 , "sp4" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . dksd5f0dzc . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "sp5" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "sp5" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/Sp5" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "sp5" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. amkx3ztxsb . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"8ea75d5f-0b90-4fb6-9246-cbc3f0551d55" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . amkx3ztxsb . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . amkx3ztxsb . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . amkx3ztxsb .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . amkx3ztxsb . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . amkx3ztxsb . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
amkx3ztxsb . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "sp5" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "sp5" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Sp5" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/Sp5" , 1 , "sp5" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . amkx3ztxsb . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "sp6" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "sp6" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "cst_robotarm/Sp6" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "sp6" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. lc00gioize . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"5e0cea5e-303f-4c18-b733-1e6305f8dd85" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . lc00gioize . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . lc00gioize . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . lc00gioize .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . lc00gioize . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . lc00gioize . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
lc00gioize . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "sp6" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "sp6" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/Sp6" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/Sp6" , 1 , "sp6" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . lc00gioize . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "bREF" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "bREF" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm/bREF" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ;
sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU
sigName = sdiGetLabelFromChars ( "bREF" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. ld2f3yh3ph . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"865fe957-1e67-4533-bf98-7907951ba58f" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . ld2f3yh3ph . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . ld2f3yh3ph . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . ld2f3yh3ph .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . ld2f3yh3ph . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . ld2f3yh3ph . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
ld2f3yh3ph . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "bREF" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "bREF" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/bREF" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/bREF" , 1 , "bREF" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . ld2f3yh3ph . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "fREF" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "fREF" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm/fREF" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ;
sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU
sigName = sdiGetLabelFromChars ( "fREF" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. gio3iy02hl . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"769dc5e4-47c7-41c9-b1dc-13373c2acd84" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . gio3iy02hl . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . gio3iy02hl . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . gio3iy02hl .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . gio3iy02hl . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . gio3iy02hl . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
gio3iy02hl . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "fREF" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "fREF" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/fREF" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/fREF" , 1 , "fREF" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . gio3iy02hl . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "gREF" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "gREF" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm/gREF" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ;
sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU
sigName = sdiGetLabelFromChars ( "gREF" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. mkxd2pc5z0 . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"e07de332-d973-4000-9c42-5b8afb4daffd" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . mkxd2pc5z0 . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . mkxd2pc5z0 . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . mkxd2pc5z0 .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . mkxd2pc5z0 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . mkxd2pc5z0 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
mkxd2pc5z0 . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "gREF" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "gREF" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/gREF" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/gREF" , 1 , "gREF" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . mkxd2pc5z0 . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "hREF" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "hREF" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm/hREF" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ;
sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU
sigName = sdiGetLabelFromChars ( "hREF" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. cc5bqxzmbs . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"f6ed7245-f59d-473f-a593-93f62bcdddba" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . cc5bqxzmbs . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . cc5bqxzmbs . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . cc5bqxzmbs .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . cc5bqxzmbs . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . cc5bqxzmbs . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
cc5bqxzmbs . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "hREF" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "hREF" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/hREF" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/hREF" , 1 , "hREF" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . cc5bqxzmbs . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "tREF" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "tREF" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm/tREF" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ;
sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU
sigName = sdiGetLabelFromChars ( "tREF" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. iyliuua3m1 . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"51db102c-63c7-4659-b8a3-387a825d2318" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . iyliuua3m1 . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . iyliuua3m1 . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . iyliuua3m1 .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . iyliuua3m1 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . iyliuua3m1 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
iyliuua3m1 . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "tREF" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "tREF" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/tREF" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/tREF" , 1 , "tREF" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . iyliuua3m1 . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "wREF" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "wREF" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"cst_robotarm/wREF" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ;
sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU
sigName = sdiGetLabelFromChars ( "wREF" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. k4edalu3p2 . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"c2701e08-99db-4595-a3b2-2af9ee1319d4" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . k4edalu3p2 . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . k4edalu3p2 . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . k4edalu3p2 .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . k4edalu3p2 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . k4edalu3p2 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
k4edalu3p2 . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "wREF" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "wREF" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cst_robotarm/wREF" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ;
if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi
. InstanceMap . fullPath , "cst_robotarm/wREF" , 1 , "wREF" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . k4edalu3p2 . SlioLTF = accessor ;
} } } } tmp = nesl_lease_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_6"
, 0 , 0 ) ; rtDW . bxxdhn0h2f = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . bxxdhn0h2f ) ; if ( tmp_p ) { cst_robotarm_98bf360f_6_gateway ( ) ;
tmp = nesl_lease_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_6"
, 0 , 0 ) ; rtDW . bxxdhn0h2f = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . mkeckqut4f = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . maabazmrfg = ( void *
) diagnosticManager ; modelParameters . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters . mSolverTolerance = 0.001 ; modelParameters .
mVariableStepSolver = true ; modelParameters . mIsUsingODEN = false ;
modelParameters . mFixedStepSize = 0.001 ; modelParameters . mStartTime = 0.0
; modelParameters . mLoadInitialState = false ; modelParameters .
mUseSimState = false ; modelParameters . mLinTrimCompile = false ;
modelParameters . mLoggingMode = SSC_LOGGING_NONE ; modelParameters .
mRTWModifiedTimeStamp = 5.23538565E+8 ; tmp_i = 0.001 ; modelParameters .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters . mVariableStepSolver = tmp_p ; tmp_p
= false ; modelParameters . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . maabazmrfg ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . bxxdhn0h2f
, & modelParameters , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_6"
, 1 , 0 ) ; rtDW . pbavcelntb = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . pbavcelntb ) ; if ( tmp_p ) { cst_robotarm_98bf360f_6_gateway ( ) ;
tmp = nesl_lease_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_6"
, 1 , 0 ) ; rtDW . pbavcelntb = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . jgihp3vmhr = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . en1uoclqpn = ( void *
) diagnosticManager ; modelParameters_p . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_p . mSolverTolerance = 0.001 ; modelParameters_p .
mVariableStepSolver = true ; modelParameters_p . mIsUsingODEN = false ;
modelParameters_p . mFixedStepSize = 0.001 ; modelParameters_p . mStartTime =
0.0 ; modelParameters_p . mLoadInitialState = false ; modelParameters_p .
mUseSimState = false ; modelParameters_p . mLinTrimCompile = false ;
modelParameters_p . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_p .
mRTWModifiedTimeStamp = 5.23538565E+8 ; tmp_i = 0.001 ; modelParameters_p .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_p . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_p . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_p . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_p .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . en1uoclqpn ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . pbavcelntb
, & modelParameters_p , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_2"
, 0 , 0 ) ; rtDW . p3qsy4ac3i = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . p3qsy4ac3i ) ; if ( tmp_p ) { cst_robotarm_98bf360f_2_gateway ( ) ;
tmp = nesl_lease_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_2"
, 0 , 0 ) ; rtDW . p3qsy4ac3i = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . b2ulm0qurb = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . aoztfxt3k3 = ( void *
) diagnosticManager ; modelParameters_e . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_e . mSolverTolerance = 0.001 ; modelParameters_e .
mVariableStepSolver = true ; modelParameters_e . mIsUsingODEN = false ;
modelParameters_e . mFixedStepSize = 0.001 ; modelParameters_e . mStartTime =
0.0 ; modelParameters_e . mLoadInitialState = false ; modelParameters_e .
mUseSimState = false ; modelParameters_e . mLinTrimCompile = false ;
modelParameters_e . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_e .
mRTWModifiedTimeStamp = 5.23537395E+8 ; tmp_i = 0.001 ; modelParameters_e .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_e . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_e . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_e . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_e .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . aoztfxt3k3 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . p3qsy4ac3i
, & modelParameters_e , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_2"
, 1 , 0 ) ; rtDW . nl02lte1sn = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . nl02lte1sn ) ; if ( tmp_p ) { cst_robotarm_98bf360f_2_gateway ( ) ;
tmp = nesl_lease_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_2"
, 1 , 0 ) ; rtDW . nl02lte1sn = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . d4hhejeuln = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . m54odtvz3u = ( void *
) diagnosticManager ; modelParameters_i . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_i . mSolverTolerance = 0.001 ; modelParameters_i .
mVariableStepSolver = true ; modelParameters_i . mIsUsingODEN = false ;
modelParameters_i . mFixedStepSize = 0.001 ; modelParameters_i . mStartTime =
0.0 ; modelParameters_i . mLoadInitialState = false ; modelParameters_i .
mUseSimState = false ; modelParameters_i . mLinTrimCompile = false ;
modelParameters_i . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_i .
mRTWModifiedTimeStamp = 5.23537395E+8 ; tmp_i = 0.001 ; modelParameters_i .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_i . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_i . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_i . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_i .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . m54odtvz3u ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . nl02lte1sn
, & modelParameters_i , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_7"
, 0 , 0 ) ; rtDW . mtcob204rl = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . mtcob204rl ) ; if ( tmp_p ) { cst_robotarm_98bf360f_7_gateway ( ) ;
tmp = nesl_lease_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_7"
, 0 , 0 ) ; rtDW . mtcob204rl = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . ir5o5sem4f = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . jspmsolpsx = ( void *
) diagnosticManager ; modelParameters_m . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_m . mSolverTolerance = 0.001 ; modelParameters_m .
mVariableStepSolver = true ; modelParameters_m . mIsUsingODEN = false ;
modelParameters_m . mFixedStepSize = 0.001 ; modelParameters_m . mStartTime =
0.0 ; modelParameters_m . mLoadInitialState = false ; modelParameters_m .
mUseSimState = false ; modelParameters_m . mLinTrimCompile = false ;
modelParameters_m . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_m .
mRTWModifiedTimeStamp = 5.23537395E+8 ; tmp_i = 0.001 ; modelParameters_m .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_m . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_m . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_m . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_m .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . jspmsolpsx ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . mtcob204rl
, & modelParameters_m , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_7"
, 1 , 0 ) ; rtDW . alkigtb3eo = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . alkigtb3eo ) ; if ( tmp_p ) { cst_robotarm_98bf360f_7_gateway ( ) ;
tmp = nesl_lease_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_7"
, 1 , 0 ) ; rtDW . alkigtb3eo = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . jedewwpx2b = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . oxiddlwl0e = ( void *
) diagnosticManager ; modelParameters_g . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_g . mSolverTolerance = 0.001 ; modelParameters_g .
mVariableStepSolver = true ; modelParameters_g . mIsUsingODEN = false ;
modelParameters_g . mFixedStepSize = 0.001 ; modelParameters_g . mStartTime =
0.0 ; modelParameters_g . mLoadInitialState = false ; modelParameters_g .
mUseSimState = false ; modelParameters_g . mLinTrimCompile = false ;
modelParameters_g . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_g .
mRTWModifiedTimeStamp = 5.23537395E+8 ; tmp_i = 0.001 ; modelParameters_g .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_g . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_g . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_g . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_g .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . oxiddlwl0e ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . alkigtb3eo
, & modelParameters_g , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_5"
, 0 , 0 ) ; rtDW . esgd45ifwg = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . esgd45ifwg ) ; if ( tmp_p ) { cst_robotarm_98bf360f_5_gateway ( ) ;
tmp = nesl_lease_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_5"
, 0 , 0 ) ; rtDW . esgd45ifwg = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . mvbznvevad = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . j0ckgxpmx5 = ( void *
) diagnosticManager ; modelParameters_j . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_j . mSolverTolerance = 0.001 ; modelParameters_j .
mVariableStepSolver = true ; modelParameters_j . mIsUsingODEN = false ;
modelParameters_j . mFixedStepSize = 0.001 ; modelParameters_j . mStartTime =
0.0 ; modelParameters_j . mLoadInitialState = false ; modelParameters_j .
mUseSimState = false ; modelParameters_j . mLinTrimCompile = false ;
modelParameters_j . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_j .
mRTWModifiedTimeStamp = 5.23537395E+8 ; tmp_i = 0.001 ; modelParameters_j .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_j . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_j . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_j . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_j .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . j0ckgxpmx5 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . esgd45ifwg
, & modelParameters_j , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_5"
, 1 , 0 ) ; rtDW . knwl0j21ex = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . knwl0j21ex ) ; if ( tmp_p ) { cst_robotarm_98bf360f_5_gateway ( ) ;
tmp = nesl_lease_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_5"
, 1 , 0 ) ; rtDW . knwl0j21ex = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . lxi10debkw = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . o0t2zajdar = ( void *
) diagnosticManager ; modelParameters_f . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_f . mSolverTolerance = 0.001 ; modelParameters_f .
mVariableStepSolver = true ; modelParameters_f . mIsUsingODEN = false ;
modelParameters_f . mFixedStepSize = 0.001 ; modelParameters_f . mStartTime =
0.0 ; modelParameters_f . mLoadInitialState = false ; modelParameters_f .
mUseSimState = false ; modelParameters_f . mLinTrimCompile = false ;
modelParameters_f . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_f .
mRTWModifiedTimeStamp = 5.23537395E+8 ; tmp_i = 0.001 ; modelParameters_f .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_f . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_f . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_f . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_f .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . o0t2zajdar ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . knwl0j21ex
, & modelParameters_f , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_1"
, 0 , 0 ) ; rtDW . hsnnp23xx3 = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . hsnnp23xx3 ) ; if ( tmp_p ) { cst_robotarm_98bf360f_1_gateway ( ) ;
tmp = nesl_lease_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_1"
, 0 , 0 ) ; rtDW . hsnnp23xx3 = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . ehoo31suuw = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . eqaph1hnr4 = ( void *
) diagnosticManager ; modelParameters_c . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_c . mSolverTolerance = 0.001 ; modelParameters_c .
mVariableStepSolver = true ; modelParameters_c . mIsUsingODEN = false ;
modelParameters_c . mFixedStepSize = 0.001 ; modelParameters_c . mStartTime =
0.0 ; modelParameters_c . mLoadInitialState = false ; modelParameters_c .
mUseSimState = false ; modelParameters_c . mLinTrimCompile = false ;
modelParameters_c . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_c .
mRTWModifiedTimeStamp = 5.23537395E+8 ; tmp_i = 0.001 ; modelParameters_c .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_c . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_c . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_c . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_c .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . eqaph1hnr4 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . hsnnp23xx3
, & modelParameters_c , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_1"
, 1 , 0 ) ; rtDW . ltacaubgtq = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . ltacaubgtq ) ; if ( tmp_p ) { cst_robotarm_98bf360f_1_gateway ( ) ;
tmp = nesl_lease_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_1"
, 1 , 0 ) ; rtDW . ltacaubgtq = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . ojep3hp3tz = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . oofcw1u5oj = ( void *
) diagnosticManager ; modelParameters_k . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_k . mSolverTolerance = 0.001 ; modelParameters_k .
mVariableStepSolver = true ; modelParameters_k . mIsUsingODEN = false ;
modelParameters_k . mFixedStepSize = 0.001 ; modelParameters_k . mStartTime =
0.0 ; modelParameters_k . mLoadInitialState = false ; modelParameters_k .
mUseSimState = false ; modelParameters_k . mLinTrimCompile = false ;
modelParameters_k . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_k .
mRTWModifiedTimeStamp = 5.23537395E+8 ; tmp_i = 0.001 ; modelParameters_k .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_k . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_k . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_k . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_k .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . oofcw1u5oj ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . ltacaubgtq
, & modelParameters_k , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_3"
, 0 , 0 ) ; rtDW . pfajoqccjj = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . pfajoqccjj ) ; if ( tmp_p ) { cst_robotarm_98bf360f_3_gateway ( ) ;
tmp = nesl_lease_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_3"
, 0 , 0 ) ; rtDW . pfajoqccjj = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . hp2ndf5vf3 = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . cq5hsabgd5 = ( void *
) diagnosticManager ; modelParameters_b . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_b . mSolverTolerance = 0.001 ; modelParameters_b .
mVariableStepSolver = true ; modelParameters_b . mIsUsingODEN = false ;
modelParameters_b . mFixedStepSize = 0.001 ; modelParameters_b . mStartTime =
0.0 ; modelParameters_b . mLoadInitialState = false ; modelParameters_b .
mUseSimState = false ; modelParameters_b . mLinTrimCompile = false ;
modelParameters_b . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_b .
mRTWModifiedTimeStamp = 5.23537395E+8 ; tmp_i = 0.001 ; modelParameters_b .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_b . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_b . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_b . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_b .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . cq5hsabgd5 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . pfajoqccjj
, & modelParameters_b , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_3"
, 1 , 0 ) ; rtDW . otxi1ujsu5 = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . otxi1ujsu5 ) ; if ( tmp_p ) { cst_robotarm_98bf360f_3_gateway ( ) ;
tmp = nesl_lease_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_3"
, 1 , 0 ) ; rtDW . otxi1ujsu5 = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . onsxqbd1pr = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . mb03qpxir0 = ( void *
) diagnosticManager ; modelParameters_n . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_n . mSolverTolerance = 0.001 ; modelParameters_n .
mVariableStepSolver = true ; modelParameters_n . mIsUsingODEN = false ;
modelParameters_n . mFixedStepSize = 0.001 ; modelParameters_n . mStartTime =
0.0 ; modelParameters_n . mLoadInitialState = false ; modelParameters_n .
mUseSimState = false ; modelParameters_n . mLinTrimCompile = false ;
modelParameters_n . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_n .
mRTWModifiedTimeStamp = 5.23537395E+8 ; tmp_i = 0.001 ; modelParameters_n .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_n . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_n . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_n . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_n .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . mb03qpxir0 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . otxi1ujsu5
, & modelParameters_n , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_4"
, 0 , 0 ) ; rtDW . o4y0j0g15n = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . o4y0j0g15n ) ; if ( tmp_p ) { cst_robotarm_98bf360f_4_gateway ( ) ;
tmp = nesl_lease_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_4"
, 0 , 0 ) ; rtDW . o4y0j0g15n = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . onerx1yfb2 = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . geu4q0xuqi = ( void *
) diagnosticManager ; modelParameters_l . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_l . mSolverTolerance = 0.001 ; modelParameters_l .
mVariableStepSolver = true ; modelParameters_l . mIsUsingODEN = false ;
modelParameters_l . mFixedStepSize = 0.001 ; modelParameters_l . mStartTime =
0.0 ; modelParameters_l . mLoadInitialState = false ; modelParameters_l .
mUseSimState = false ; modelParameters_l . mLinTrimCompile = false ;
modelParameters_l . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_l .
mRTWModifiedTimeStamp = 5.23537395E+8 ; tmp_i = 0.001 ; modelParameters_l .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_l . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_l . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_l . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_l .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . geu4q0xuqi ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . o4y0j0g15n
, & modelParameters_l , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_4"
, 1 , 0 ) ; rtDW . bdnu2nsumd = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . bdnu2nsumd ) ; if ( tmp_p ) { cst_robotarm_98bf360f_4_gateway ( ) ;
tmp = nesl_lease_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_4"
, 1 , 0 ) ; rtDW . bdnu2nsumd = ( void * ) tmp ; } tmp_e =
nesl_create_simulation_data ( ) ; rtDW . gpyxtothik = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . loqycrqsns = ( void *
) diagnosticManager ; modelParameters_d . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_d . mSolverTolerance = 0.001 ; modelParameters_d .
mVariableStepSolver = true ; modelParameters_d . mIsUsingODEN = false ;
modelParameters_d . mFixedStepSize = 0.001 ; modelParameters_d . mStartTime =
0.0 ; modelParameters_d . mLoadInitialState = false ; modelParameters_d .
mUseSimState = false ; modelParameters_d . mLinTrimCompile = false ;
modelParameters_d . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_d .
mRTWModifiedTimeStamp = 5.23537395E+8 ; tmp_i = 0.001 ; modelParameters_d .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters_d . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters_d . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_d . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters_d .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . loqycrqsns ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . bdnu2nsumd
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
"<Root>/tREF" , "[t, u]" , & sampleHit , errMsg , maxErrorBufferSize ) ; } }
} if ( 1 ) { { real_T time = ssGetTaskTime ( rtS , 0 ) ; if ( !
rtwISigstreamManagerIsPeriodicFcnCall ( pISigstreamManager , 1 ) ) { int_T
sampleHit = 0U ; bSetErrorStatus = rtwISigstreamManagerInjectDataMultiRate (
pISigstreamManager , 1 , time , 1 , "<Root>/bREF" , "[t, u]" , & sampleHit ,
errMsg , maxErrorBufferSize ) ; } } } if ( 1 ) { { real_T time =
ssGetTaskTime ( rtS , 0 ) ; if ( ! rtwISigstreamManagerIsPeriodicFcnCall (
pISigstreamManager , 2 ) ) { int_T sampleHit = 0U ; bSetErrorStatus =
rtwISigstreamManagerInjectDataMultiRate ( pISigstreamManager , 2 , time , 1 ,
"<Root>/fREF" , "[t, u]" , & sampleHit , errMsg , maxErrorBufferSize ) ; } }
} if ( 1 ) { { real_T time = ssGetTaskTime ( rtS , 0 ) ; if ( !
rtwISigstreamManagerIsPeriodicFcnCall ( pISigstreamManager , 3 ) ) { int_T
sampleHit = 0U ; bSetErrorStatus = rtwISigstreamManagerInjectDataMultiRate (
pISigstreamManager , 3 , time , 1 , "<Root>/wREF" , "[t, u]" , & sampleHit ,
errMsg , maxErrorBufferSize ) ; } } } if ( 1 ) { { real_T time =
ssGetTaskTime ( rtS , 0 ) ; if ( ! rtwISigstreamManagerIsPeriodicFcnCall (
pISigstreamManager , 4 ) ) { int_T sampleHit = 0U ; bSetErrorStatus =
rtwISigstreamManagerInjectDataMultiRate ( pISigstreamManager , 4 , time , 1 ,
"<Root>/hREF" , "[t, u]" , & sampleHit , errMsg , maxErrorBufferSize ) ; } }
} if ( 1 ) { { real_T time = ssGetTaskTime ( rtS , 0 ) ; if ( !
rtwISigstreamManagerIsPeriodicFcnCall ( pISigstreamManager , 5 ) ) { int_T
sampleHit = 0U ; bSetErrorStatus = rtwISigstreamManagerInjectDataMultiRate (
pISigstreamManager , 5 , time , 1 , "<Root>/gREF" , "[t, u]" , & sampleHit ,
errMsg , maxErrorBufferSize ) ; } } } if ( bSetErrorStatus ) {
ssSetErrorStatus ( rtS , errMsg ) ; return ; } } else { int_T currTimeIdx ;
int_T i ; if ( gblInportTUtables [ 0 ] . nTimePoints > 0 ) { if ( 1 ) { {
real_T time = ssGetTaskTime ( rtS , 0 ) ; int k = 1 ; if ( gblInportTUtables
[ 0 ] . nTimePoints == 1 ) { k = 0 ; } currTimeIdx = rt_getTimeIdx (
gblInportTUtables [ 0 ] . time , time , gblInportTUtables [ 0 ] . nTimePoints
, gblInportTUtables [ 0 ] . currTimeIdx , 1 , 0 ) ; gblInportTUtables [ 0 ] .
currTimeIdx = currTimeIdx ; for ( i = 0 ; i < 1 ; i ++ ) { real_T * realPtr1
= ( real_T * ) gblInportTUtables [ 0 ] . ur + i * gblInportTUtables [ 0 ] .
nTimePoints + currTimeIdx ; real_T * realPtr2 = realPtr1 + 1 * k ; ( void )
rt_Interpolate_Datatype ( realPtr1 , realPtr2 , & rtU . n1ogmfa4cp , time ,
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
rt_Interpolate_Datatype ( realPtr1 , realPtr2 , & rtU . fi3eog4bcj , time ,
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
rt_Interpolate_Datatype ( realPtr1 , realPtr2 , & rtU . meqjcbtglm , time ,
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
rt_Interpolate_Datatype ( realPtr1 , realPtr2 , & rtU . ptivu2pmk5 , time ,
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
rt_Interpolate_Datatype ( realPtr1 , realPtr2 , & rtU . mitwhaapce , time ,
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
rt_Interpolate_Datatype ( realPtr1 , realPtr2 , & rtU . gfuy4k4wck , time ,
gblInportTUtables [ 5 ] . time [ currTimeIdx ] , gblInportTUtables [ 5 ] .
time [ currTimeIdx + k ] , gblInportTUtables [ 5 ] . uDataType ) ; } } } } }
} simulationData = ( NeslSimulationData * ) rtDW . mkeckqut4f ; time = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 28 ;
simulationData -> mData -> mContStates . mX = & rtX . hbu5otnenm [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 1 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . pw2pe5xudt ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
izcotr23dr ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
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
ggdoah4lpg [ 0 ] ; tmp_p [ 1 ] = rtB . ggdoah4lpg [ 1 ] ; tmp_p [ 2 ] = rtB .
ggdoah4lpg [ 2 ] ; tmp_p [ 3 ] = rtB . ggdoah4lpg [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . myut2kekff [ 0 ] ; tmp_p [ 5 ] = rtB . myut2kekff [ 1 ] ;
tmp_p [ 6 ] = rtB . myut2kekff [ 2 ] ; tmp_p [ 7 ] = rtB . myut2kekff [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . gloyjgyfuk [ 0 ] ; tmp_p [ 9 ] = rtB .
gloyjgyfuk [ 1 ] ; tmp_p [ 10 ] = rtB . gloyjgyfuk [ 2 ] ; tmp_p [ 11 ] = rtB
. gloyjgyfuk [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . oi2jfcurfm [ 0 ]
; tmp_p [ 13 ] = rtB . oi2jfcurfm [ 1 ] ; tmp_p [ 14 ] = rtB . oi2jfcurfm [ 2
] ; tmp_p [ 15 ] = rtB . oi2jfcurfm [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . j5gqirfivu [ 0 ] ; tmp_p [ 17 ] = rtB . j5gqirfivu [ 1 ] ; tmp_p [ 18 ]
= rtB . j5gqirfivu [ 2 ] ; tmp_p [ 19 ] = rtB . j5gqirfivu [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . ijej1daezt [ 0 ] ; tmp_p [ 21 ] = rtB .
ijej1daezt [ 1 ] ; tmp_p [ 22 ] = rtB . ijej1daezt [ 2 ] ; tmp_p [ 23 ] = rtB
. ijej1daezt [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 29 ; simulationData -> mData ->
mOutputs . mX = & rtB . kpuxbwdbqy [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . maabazmrfg ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . bxxdhn0h2f ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . jgihp3vmhr ; time_p = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_p ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . mompnqx50t ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . medbouh1bz ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_m [ 0 ] = 0 ;
tmp_i [ 0 ] = rtB . ggdoah4lpg [ 0 ] ; tmp_i [ 1 ] = rtB . ggdoah4lpg [ 1 ] ;
tmp_i [ 2 ] = rtB . ggdoah4lpg [ 2 ] ; tmp_i [ 3 ] = rtB . ggdoah4lpg [ 3 ] ;
tmp_m [ 1 ] = 4 ; tmp_i [ 4 ] = rtB . myut2kekff [ 0 ] ; tmp_i [ 5 ] = rtB .
myut2kekff [ 1 ] ; tmp_i [ 6 ] = rtB . myut2kekff [ 2 ] ; tmp_i [ 7 ] = rtB .
myut2kekff [ 3 ] ; tmp_m [ 2 ] = 8 ; tmp_i [ 8 ] = rtB . gloyjgyfuk [ 0 ] ;
tmp_i [ 9 ] = rtB . gloyjgyfuk [ 1 ] ; tmp_i [ 10 ] = rtB . gloyjgyfuk [ 2 ]
; tmp_i [ 11 ] = rtB . gloyjgyfuk [ 3 ] ; tmp_m [ 3 ] = 12 ; tmp_i [ 12 ] =
rtB . oi2jfcurfm [ 0 ] ; tmp_i [ 13 ] = rtB . oi2jfcurfm [ 1 ] ; tmp_i [ 14 ]
= rtB . oi2jfcurfm [ 2 ] ; tmp_i [ 15 ] = rtB . oi2jfcurfm [ 3 ] ; tmp_m [ 4
] = 16 ; tmp_i [ 16 ] = rtB . j5gqirfivu [ 0 ] ; tmp_i [ 17 ] = rtB .
j5gqirfivu [ 1 ] ; tmp_i [ 18 ] = rtB . j5gqirfivu [ 2 ] ; tmp_i [ 19 ] = rtB
. j5gqirfivu [ 3 ] ; tmp_m [ 5 ] = 20 ; tmp_i [ 20 ] = rtB . ijej1daezt [ 0 ]
; tmp_i [ 21 ] = rtB . ijej1daezt [ 1 ] ; tmp_i [ 22 ] = rtB . ijej1daezt [ 2
] ; tmp_i [ 23 ] = rtB . ijej1daezt [ 3 ] ; tmp_m [ 6 ] = 24 ; memcpy ( &
tmp_i [ 24 ] , & rtB . kpuxbwdbqy [ 0 ] , 29U * sizeof ( real_T ) ) ; tmp_m [
7 ] = 53 ; simulationData -> mData -> mInputValues . mN = 53 ; simulationData
-> mData -> mInputValues . mX = & tmp_i [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 8 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_m [ 0 ] ; simulationData -> mData -> mOutputs . mN = 12 ; simulationData
-> mData -> mOutputs . mX = & rtB . e4jpommznb [ 0 ] ; simulationData ->
mData -> mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX =
NULL ; simulationData -> mData -> mIsFundamentalSampleHit = false ;
simulationData -> mData -> mTolerances . mN = 0 ; simulationData -> mData ->
mTolerances . mX = NULL ; simulationData -> mData -> mCstateHasChanged =
false ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . en1uoclqpn ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . pbavcelntb ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtY . cfas0ohras = rtB . e4jpommznb [ 0 ] ; rtY . ii5aafmyuz = rtB .
e4jpommznb [ 2 ] ; rtY . ownmemr1ra = rtB . e4jpommznb [ 4 ] ; rtY .
mgphslt1nt = rtB . e4jpommznb [ 6 ] ; rtY . izfs0fudc1 = rtB . e4jpommznb [ 8
] ; rtY . o3szmiut1b = rtB . e4jpommznb [ 10 ] ; rtB . dqejxyzqpz = rtX .
k32vukczvp ; rtB . bagwbwq1rt = rtP . Gi1_Gain * rtB . dqejxyzqpz ; rtB .
hsnbhfvlji = rtP . Sp1_Gain * rtU . n1ogmfa4cp ; if ( ssIsSampleHit ( rtS , 2
, 0 ) ) { lastTime = rtB . e4jpommznb [ 0 ] ; lastTime -= rtP . dFilt [ 1 ] *
rtDW . osuwpyfhhy ; rtDW . nvsr3bfete = lastTime / rtP . dFilt [ 0 ] ; rtB .
grwuc0rtke = rtP . nFilt [ 0 ] * rtDW . nvsr3bfete + rtP . nFilt [ 1 ] * rtDW
. osuwpyfhhy ; } rtB . ladvsqy4po = rtU . n1ogmfa4cp - rtB . grwuc0rtke ; rtB
. hsvhvzaitf = rtB . hsnbhfvlji + rtB . ladvsqy4po ; rtB . aayombost0 = rtP .
Gp1_Gain * rtB . hsvhvzaitf ; if ( ( rtDW . il1m24s12p >= ssGetT ( rtS ) ) &&
( rtDW . kzugk1exec >= ssGetT ( rtS ) ) ) { rtB . nbg2no4kfn = 0.0 ; } else {
lastTime = rtDW . il1m24s12p ; lastU = & rtDW . dkqlehltbl ; if ( rtDW .
il1m24s12p < rtDW . kzugk1exec ) { if ( rtDW . kzugk1exec < ssGetT ( rtS ) )
{ lastTime = rtDW . kzugk1exec ; lastU = & rtDW . girpkbb0k4 ; } } else { if
( rtDW . il1m24s12p >= ssGetT ( rtS ) ) { lastTime = rtDW . kzugk1exec ;
lastU = & rtDW . girpkbb0k4 ; } } rtB . nbg2no4kfn = ( rtB . ladvsqy4po - *
lastU ) / ( ssGetT ( rtS ) - lastTime ) ; } rtB . polzbmpty5 = rtP . Gd1_Gain
* rtB . nbg2no4kfn ; rtB . cavafntrgm = ( rtB . bagwbwq1rt + rtB . aayombost0
) + rtB . polzbmpty5 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . axbmdyzm4s =
( rtB . cavafntrgm >= 0.0 ) ; } rtB . fht4xkh1ev = rtDW . axbmdyzm4s > 0 ?
rtB . cavafntrgm : - rtB . cavafntrgm ; if ( ssIsMajorTimeStep ( rtS ) ) {
rtDW . nqfxnpzhb1 = rtB . fht4xkh1ev >= rtP . D1_UpperSat ? 1 : rtB .
fht4xkh1ev > rtP . D1_LowerSat ? 0 : - 1 ; } rtB . m4nbz10psi = rtDW .
nqfxnpzhb1 == 1 ? rtP . D1_UpperSat : rtDW . nqfxnpzhb1 == - 1 ? rtP .
D1_LowerSat : rtB . fht4xkh1ev ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if
( ( rtDW . fkhju0d3rl . AQHandles || rtDW . fkhju0d3rl . SlioLTF ) &&
ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . fkhju0d3rl .
AQHandles , rtDW . fkhju0d3rl . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , (
char * ) & rtB . m4nbz10psi + 0 ) ; } } } rtB . no42p5lqd0 = rtX . cim0sdziv1
; rtB . oqprhwxbtn = rtP . Gi2_Gain * rtB . no42p5lqd0 ; rtB . okawz4w12q =
rtU . fi3eog4bcj - rtP . Constant1_Value ; rtB . fvsrxbfg4g = rtP . Sp2_Gain
* rtB . okawz4w12q ; rtB . mn03pjitnu = rtB . e4jpommznb [ 2 ] - rtP .
IC_Value ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . o1zzawxzxl = ( rtB .
mn03pjitnu - rtP . dFilt [ 1 ] * rtDW . n1egvt1ecq ) / rtP . dFilt [ 0 ] ;
rtB . fl2ljqidug = rtP . nFilt [ 0 ] * rtDW . o1zzawxzxl + rtP . nFilt [ 1 ]
* rtDW . n1egvt1ecq ; } rtB . iztuma3owj = rtB . okawz4w12q - rtB .
fl2ljqidug ; rtB . pfjse2trbp = rtB . fvsrxbfg4g + rtB . iztuma3owj ; rtB .
erfi1h50vk = rtP . Gp2_Gain * rtB . pfjse2trbp ; if ( ( rtDW . hf5ayypcbu >=
ssGetT ( rtS ) ) && ( rtDW . od5nlggen3 >= ssGetT ( rtS ) ) ) { rtB .
eqsuyearws = 0.0 ; } else { lastTime = rtDW . hf5ayypcbu ; lastU = & rtDW .
pc3l0jaikj ; if ( rtDW . hf5ayypcbu < rtDW . od5nlggen3 ) { if ( rtDW .
od5nlggen3 < ssGetT ( rtS ) ) { lastTime = rtDW . od5nlggen3 ; lastU = & rtDW
. h5kjdlwr41 ; } } else { if ( rtDW . hf5ayypcbu >= ssGetT ( rtS ) ) {
lastTime = rtDW . od5nlggen3 ; lastU = & rtDW . h5kjdlwr41 ; } } rtB .
eqsuyearws = ( rtB . iztuma3owj - * lastU ) / ( ssGetT ( rtS ) - lastTime ) ;
} rtB . bgkhkuq1uv = rtP . Gd2_Gain * rtB . eqsuyearws ; rtB . eackyyj2tp = (
rtB . oqprhwxbtn + rtB . erfi1h50vk ) + rtB . bgkhkuq1uv ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . nk2cgiuqq4 = ( rtB . eackyyj2tp >= 0.0 )
; } rtB . eh2hjsaicu = rtDW . nk2cgiuqq4 > 0 ? rtB . eackyyj2tp : - rtB .
eackyyj2tp ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . bibznrlmwf = rtB .
eh2hjsaicu >= rtP . D2_UpperSat ? 1 : rtB . eh2hjsaicu > rtP . D2_LowerSat ?
0 : - 1 ; } rtB . k0jr3j5oxo = rtDW . bibznrlmwf == 1 ? rtP . D2_UpperSat :
rtDW . bibznrlmwf == - 1 ? rtP . D2_LowerSat : rtB . eh2hjsaicu ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( ( rtDW . nbjxrunoh4 . AQHandles ||
rtDW . nbjxrunoh4 . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . nbjxrunoh4 . AQHandles , rtDW . nbjxrunoh4 .
SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . k0jr3j5oxo + 0 )
; } } } rtB . buqdf1fc0l = rtX . jq40kv3kof ; rtB . lozfekbxyk = rtP .
Gi3_Gain * rtB . buqdf1fc0l ; rtB . dlc4zw50uu = rtP . Sp3_Gain * rtU .
meqjcbtglm ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { lastTime = rtB .
e4jpommznb [ 4 ] ; lastTime -= rtP . dFilt [ 1 ] * rtDW . fxsfevo34c ; rtDW .
moyjmke4l3 = lastTime / rtP . dFilt [ 0 ] ; rtB . hsgnje4cmi = rtP . nFilt [
0 ] * rtDW . moyjmke4l3 + rtP . nFilt [ 1 ] * rtDW . fxsfevo34c ; } rtB .
p2n0iwadpz = rtU . meqjcbtglm - rtB . hsgnje4cmi ; rtB . boum0gprkv = rtB .
dlc4zw50uu + rtB . p2n0iwadpz ; rtB . j25zwoocn5 = rtP . Gp3_Gain * rtB .
boum0gprkv ; if ( ( rtDW . ghph52rdce >= ssGetT ( rtS ) ) && ( rtDW .
cnn05julux >= ssGetT ( rtS ) ) ) { rtB . aatxioghgk = 0.0 ; } else { lastTime
= rtDW . ghph52rdce ; lastU = & rtDW . lagmo53nka ; if ( rtDW . ghph52rdce <
rtDW . cnn05julux ) { if ( rtDW . cnn05julux < ssGetT ( rtS ) ) { lastTime =
rtDW . cnn05julux ; lastU = & rtDW . cwizofgkej ; } } else { if ( rtDW .
ghph52rdce >= ssGetT ( rtS ) ) { lastTime = rtDW . cnn05julux ; lastU = &
rtDW . cwizofgkej ; } } rtB . aatxioghgk = ( rtB . p2n0iwadpz - * lastU ) / (
ssGetT ( rtS ) - lastTime ) ; } rtB . hndwswnyoz = rtP . Gd3_Gain * rtB .
aatxioghgk ; rtB . i53xrhehpp = ( rtB . lozfekbxyk + rtB . j25zwoocn5 ) + rtB
. hndwswnyoz ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . dd4ef3do3g = ( rtB .
i53xrhehpp >= 0.0 ) ; } rtB . oew5eo25ef = rtDW . dd4ef3do3g > 0 ? rtB .
i53xrhehpp : - rtB . i53xrhehpp ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
ji0h4d4wet = rtB . oew5eo25ef >= rtP . D3_UpperSat ? 1 : rtB . oew5eo25ef >
rtP . D3_LowerSat ? 0 : - 1 ; } rtB . iclarv42jt = rtDW . ji0h4d4wet == 1 ?
rtP . D3_UpperSat : rtDW . ji0h4d4wet == - 1 ? rtP . D3_LowerSat : rtB .
oew5eo25ef ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( ( rtDW .
ox2wjis5ak . AQHandles || rtDW . ox2wjis5ak . SlioLTF ) && ssGetLogOutput (
rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . ox2wjis5ak . AQHandles , rtDW .
ox2wjis5ak . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
iclarv42jt + 0 ) ; } } } rtB . btorth4vln = rtX . i0jaxz1ns1 ; rtB .
hfh4ccgrqw = rtP . Gi4_Gain * rtB . btorth4vln ; rtB . cx2pgcpxmh = rtP .
Sp4_Gain * rtU . ptivu2pmk5 ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { lastTime
= rtB . e4jpommznb [ 6 ] ; lastTime -= rtP . dFilt [ 1 ] * rtDW . n0cpdtot23
; rtDW . ifix50azhp = lastTime / rtP . dFilt [ 0 ] ; rtB . gcyzeyasy2 = rtP .
nFilt [ 0 ] * rtDW . ifix50azhp + rtP . nFilt [ 1 ] * rtDW . n0cpdtot23 ; }
rtB . hqaumiwlfi = rtU . ptivu2pmk5 - rtB . gcyzeyasy2 ; rtB . omps0qn1bp =
rtB . cx2pgcpxmh + rtB . hqaumiwlfi ; rtB . a3xwdirkee = rtP . Gp4_Gain * rtB
. omps0qn1bp ; if ( ( rtDW . ksz3qgvme2 >= ssGetT ( rtS ) ) && ( rtDW .
dc2k3ryr1h >= ssGetT ( rtS ) ) ) { rtB . fqne33prwc = 0.0 ; } else { lastTime
= rtDW . ksz3qgvme2 ; lastU = & rtDW . ahdgarqwel ; if ( rtDW . ksz3qgvme2 <
rtDW . dc2k3ryr1h ) { if ( rtDW . dc2k3ryr1h < ssGetT ( rtS ) ) { lastTime =
rtDW . dc2k3ryr1h ; lastU = & rtDW . noevtlpdnr ; } } else { if ( rtDW .
ksz3qgvme2 >= ssGetT ( rtS ) ) { lastTime = rtDW . dc2k3ryr1h ; lastU = &
rtDW . noevtlpdnr ; } } rtB . fqne33prwc = ( rtB . hqaumiwlfi - * lastU ) / (
ssGetT ( rtS ) - lastTime ) ; } rtB . dxfnpqbkcb = rtP . Gd4_Gain * rtB .
fqne33prwc ; rtB . jk5baceso4 = ( rtB . hfh4ccgrqw + rtB . a3xwdirkee ) + rtB
. dxfnpqbkcb ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . c4g1psscp2 = ( rtB .
jk5baceso4 >= 0.0 ) ; } rtB . bkvix0h45z = rtDW . c4g1psscp2 > 0 ? rtB .
jk5baceso4 : - rtB . jk5baceso4 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
m1ysjubrvj = rtB . bkvix0h45z >= rtP . D4_UpperSat ? 1 : rtB . bkvix0h45z >
rtP . D4_LowerSat ? 0 : - 1 ; } rtB . n5av2fk0n2 = rtDW . m1ysjubrvj == 1 ?
rtP . D4_UpperSat : rtDW . m1ysjubrvj == - 1 ? rtP . D4_LowerSat : rtB .
bkvix0h45z ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( ( rtDW .
avhnfypyzw . AQHandles || rtDW . avhnfypyzw . SlioLTF ) && ssGetLogOutput (
rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . avhnfypyzw . AQHandles , rtDW .
avhnfypyzw . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
n5av2fk0n2 + 0 ) ; } } } rtB . hs52pyeuw2 = rtX . kpt4tgks43 ; rtB .
arsgpeonhl = rtP . Gi5_Gain * rtB . hs52pyeuw2 ; rtB . imw2c4hmx0 = rtP .
Sp5_Gain * rtU . mitwhaapce ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { lastTime
= rtB . e4jpommznb [ 8 ] ; lastTime -= rtP . dFilt [ 1 ] * rtDW . dhnlnnkmax
; rtDW . mnro1vxwzd = lastTime / rtP . dFilt [ 0 ] ; rtB . ht4gnbs14o = rtP .
nFilt [ 0 ] * rtDW . mnro1vxwzd + rtP . nFilt [ 1 ] * rtDW . dhnlnnkmax ; }
rtB . oaqctdd1z4 = rtU . mitwhaapce - rtB . ht4gnbs14o ; rtB . iktdwnifqy =
rtB . imw2c4hmx0 + rtB . oaqctdd1z4 ; rtB . cz1ppk0zx1 = rtP . Gp5_Gain * rtB
. iktdwnifqy ; if ( ( rtDW . lsnzpaafr0 >= ssGetT ( rtS ) ) && ( rtDW .
kecuqjxdts >= ssGetT ( rtS ) ) ) { rtB . f1s03qmtvz = 0.0 ; } else { lastTime
= rtDW . lsnzpaafr0 ; lastU = & rtDW . jea0fzolcb ; if ( rtDW . lsnzpaafr0 <
rtDW . kecuqjxdts ) { if ( rtDW . kecuqjxdts < ssGetT ( rtS ) ) { lastTime =
rtDW . kecuqjxdts ; lastU = & rtDW . iagl52grv4 ; } } else { if ( rtDW .
lsnzpaafr0 >= ssGetT ( rtS ) ) { lastTime = rtDW . kecuqjxdts ; lastU = &
rtDW . iagl52grv4 ; } } rtB . f1s03qmtvz = ( rtB . oaqctdd1z4 - * lastU ) / (
ssGetT ( rtS ) - lastTime ) ; } rtB . aj2xvlnbau = rtP . Gd5_Gain * rtB .
f1s03qmtvz ; rtB . dnyn3lbtrv = ( rtB . arsgpeonhl + rtB . cz1ppk0zx1 ) + rtB
. aj2xvlnbau ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . hoht0lvf35 = ( rtB .
dnyn3lbtrv >= 0.0 ) ; } rtB . ldiq5q5naa = rtDW . hoht0lvf35 > 0 ? rtB .
dnyn3lbtrv : - rtB . dnyn3lbtrv ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
a30y20nurj = rtB . ldiq5q5naa >= rtP . D5_UpperSat ? 1 : rtB . ldiq5q5naa >
rtP . D5_LowerSat ? 0 : - 1 ; } rtB . b4uivev3hv = rtDW . a30y20nurj == 1 ?
rtP . D5_UpperSat : rtDW . a30y20nurj == - 1 ? rtP . D5_LowerSat : rtB .
ldiq5q5naa ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( ( rtDW .
h5ig2mnnp5 . AQHandles || rtDW . h5ig2mnnp5 . SlioLTF ) && ssGetLogOutput (
rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . h5ig2mnnp5 . AQHandles , rtDW .
h5ig2mnnp5 . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
b4uivev3hv + 0 ) ; } } } rtB . gmslp1xfld = rtX . bgm2jlczsl ; rtB .
n2cbzljwsr = rtP . Gi6_Gain * rtB . gmslp1xfld ; rtB . kfizj0xxbp = rtP .
Sp6_Gain * rtU . gfuy4k4wck ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { lastTime
= rtB . e4jpommznb [ 10 ] ; lastTime -= rtP . dFilt [ 1 ] * rtDW . g55yrwtthh
; rtDW . oltxmhvdjk = lastTime / rtP . dFilt [ 0 ] ; rtB . l5vvo0nd3q = rtP .
nFilt [ 0 ] * rtDW . oltxmhvdjk + rtP . nFilt [ 1 ] * rtDW . g55yrwtthh ; }
rtB . asyj1ffrm5 = rtU . gfuy4k4wck - rtB . l5vvo0nd3q ; rtB . awwm15wr2b =
rtB . kfizj0xxbp + rtB . asyj1ffrm5 ; rtB . m5tahxhn0f = rtP . Gp6_Gain * rtB
. awwm15wr2b ; if ( ( rtDW . btgoxpvg4h >= ssGetT ( rtS ) ) && ( rtDW .
nbytpsj5tm >= ssGetT ( rtS ) ) ) { rtB . on0z4zmhgg = 0.0 ; } else { lastTime
= rtDW . btgoxpvg4h ; lastU = & rtDW . opadpf4fq0 ; if ( rtDW . btgoxpvg4h <
rtDW . nbytpsj5tm ) { if ( rtDW . nbytpsj5tm < ssGetT ( rtS ) ) { lastTime =
rtDW . nbytpsj5tm ; lastU = & rtDW . gzyqtgku3f ; } } else { if ( rtDW .
btgoxpvg4h >= ssGetT ( rtS ) ) { lastTime = rtDW . nbytpsj5tm ; lastU = &
rtDW . gzyqtgku3f ; } } rtB . on0z4zmhgg = ( rtB . asyj1ffrm5 - * lastU ) / (
ssGetT ( rtS ) - lastTime ) ; } rtB . dvrimdcswm = rtP . Gd6_Gain * rtB .
on0z4zmhgg ; rtB . onhuz22qes = ( rtB . n2cbzljwsr + rtB . m5tahxhn0f ) + rtB
. dvrimdcswm ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . genkbxgaug = ( rtB .
onhuz22qes >= 0.0 ) ; } rtB . ao5dn0t2uz = rtDW . genkbxgaug > 0 ? rtB .
onhuz22qes : - rtB . onhuz22qes ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
k2xrlwkxds = rtB . ao5dn0t2uz >= rtP . D6_UpperSat ? 1 : rtB . ao5dn0t2uz >
rtP . D6_LowerSat ? 0 : - 1 ; } rtB . ayfkra0odz = rtDW . k2xrlwkxds == 1 ?
rtP . D6_UpperSat : rtDW . k2xrlwkxds == - 1 ? rtP . D6_LowerSat : rtB .
ao5dn0t2uz ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( ( rtDW .
ju0hwcip3s . AQHandles || rtDW . ju0hwcip3s . SlioLTF ) && ssGetLogOutput (
rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . ju0hwcip3s . AQHandles , rtDW .
ju0hwcip3s . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
ayfkra0odz + 0 ) ; } } { if ( ( rtDW . h1wvgvd1h4 . AQHandles || rtDW .
h1wvgvd1h4 . SlioLTF ) && ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal (
rtDW . h1wvgvd1h4 . AQHandles , rtDW . h1wvgvd1h4 . SlioLTF , 0 ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . polzbmpty5 + 0 ) ; } } { if (
( rtDW . dcbtcmf10i . AQHandles || rtDW . dcbtcmf10i . SlioLTF ) &&
ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . dcbtcmf10i .
AQHandles , rtDW . dcbtcmf10i . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , (
char * ) & rtB . bgkhkuq1uv + 0 ) ; } } { if ( ( rtDW . jvokyr3vc0 .
AQHandles || rtDW . jvokyr3vc0 . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . jvokyr3vc0 . AQHandles , rtDW . jvokyr3vc0 .
SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . hndwswnyoz + 0 )
; } } { if ( ( rtDW . gvul0tg30e . AQHandles || rtDW . gvul0tg30e . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . gvul0tg30e .
AQHandles , rtDW . gvul0tg30e . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , (
char * ) & rtB . dxfnpqbkcb + 0 ) ; } } { if ( ( rtDW . pluidmihey .
AQHandles || rtDW . pluidmihey . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . pluidmihey . AQHandles , rtDW . pluidmihey .
SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . aj2xvlnbau + 0 )
; } } { if ( ( rtDW . nqajuamynq . AQHandles || rtDW . nqajuamynq . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . nqajuamynq .
AQHandles , rtDW . nqajuamynq . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , (
char * ) & rtB . dvrimdcswm + 0 ) ; } } { if ( ( rtDW . dkygoqftlz .
AQHandles || rtDW . dkygoqftlz . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . dkygoqftlz . AQHandles , rtDW . dkygoqftlz .
SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . bagwbwq1rt + 0 )
; } } { if ( ( rtDW . d4ovmgffgs . AQHandles || rtDW . d4ovmgffgs . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . d4ovmgffgs .
AQHandles , rtDW . d4ovmgffgs . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , (
char * ) & rtB . oqprhwxbtn + 0 ) ; } } { if ( ( rtDW . bj5lql4lou .
AQHandles || rtDW . bj5lql4lou . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . bj5lql4lou . AQHandles , rtDW . bj5lql4lou .
SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . lozfekbxyk + 0 )
; } } { if ( ( rtDW . ixg02n0kht . AQHandles || rtDW . ixg02n0kht . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . ixg02n0kht .
AQHandles , rtDW . ixg02n0kht . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , (
char * ) & rtB . hfh4ccgrqw + 0 ) ; } } { if ( ( rtDW . akh35vbfzy .
AQHandles || rtDW . akh35vbfzy . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . akh35vbfzy . AQHandles , rtDW . akh35vbfzy .
SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . arsgpeonhl + 0 )
; } } { if ( ( rtDW . c2qb0n32ss . AQHandles || rtDW . c2qb0n32ss . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . c2qb0n32ss .
AQHandles , rtDW . c2qb0n32ss . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , (
char * ) & rtB . n2cbzljwsr + 0 ) ; } } { if ( ( rtDW . bx5yrpmeoz .
AQHandles || rtDW . bx5yrpmeoz . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . bx5yrpmeoz . AQHandles , rtDW . bx5yrpmeoz .
SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . aayombost0 + 0 )
; } } { if ( ( rtDW . oyj5nltrtm . AQHandles || rtDW . oyj5nltrtm . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . oyj5nltrtm .
AQHandles , rtDW . oyj5nltrtm . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , (
char * ) & rtB . erfi1h50vk + 0 ) ; } } { if ( ( rtDW . l1xqkb0uuj .
AQHandles || rtDW . l1xqkb0uuj . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . l1xqkb0uuj . AQHandles , rtDW . l1xqkb0uuj .
SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . j25zwoocn5 + 0 )
; } } { if ( ( rtDW . cqsrogmetz . AQHandles || rtDW . cqsrogmetz . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . cqsrogmetz .
AQHandles , rtDW . cqsrogmetz . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , (
char * ) & rtB . a3xwdirkee + 0 ) ; } } { if ( ( rtDW . nuk5ajouhh .
AQHandles || rtDW . nuk5ajouhh . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . nuk5ajouhh . AQHandles , rtDW . nuk5ajouhh .
SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . cz1ppk0zx1 + 0 )
; } } { if ( ( rtDW . difeoh0o3t . AQHandles || rtDW . difeoh0o3t . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . difeoh0o3t .
AQHandles , rtDW . difeoh0o3t . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , (
char * ) & rtB . m5tahxhn0f + 0 ) ; } } } rtB . lw1ku45fyz = ( real_T ) ( rtB
. cavafntrgm < 0.0 ) * rtP . R1_Gain ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
{ if ( ( rtDW . ijvorwciil . AQHandles || rtDW . ijvorwciil . SlioLTF ) &&
ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . ijvorwciil .
AQHandles , rtDW . ijvorwciil . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , (
char * ) & rtB . lw1ku45fyz + 0 ) ; } } } rtB . lmpujrulyo = ( real_T ) ( rtB
. eackyyj2tp < 0.0 ) * rtP . R2_Gain ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
{ if ( ( rtDW . ewswq3ixhs . AQHandles || rtDW . ewswq3ixhs . SlioLTF ) &&
ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . ewswq3ixhs .
AQHandles , rtDW . ewswq3ixhs . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , (
char * ) & rtB . lmpujrulyo + 0 ) ; } } } rtB . hw1ccwcgua = ( real_T ) ( rtB
. i53xrhehpp < 0.0 ) * rtP . R3_Gain ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
{ if ( ( rtDW . pd5b5eork3 . AQHandles || rtDW . pd5b5eork3 . SlioLTF ) &&
ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . pd5b5eork3 .
AQHandles , rtDW . pd5b5eork3 . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , (
char * ) & rtB . hw1ccwcgua + 0 ) ; } } } rtB . gue5wmwueg = ( real_T ) ( rtB
. jk5baceso4 < 0.0 ) * rtP . R4_Gain ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
{ if ( ( rtDW . lxuytvgznq . AQHandles || rtDW . lxuytvgznq . SlioLTF ) &&
ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . lxuytvgznq .
AQHandles , rtDW . lxuytvgznq . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , (
char * ) & rtB . gue5wmwueg + 0 ) ; } } } rtB . cyywu0nyp5 = ( real_T ) ( rtB
. dnyn3lbtrv < 0.0 ) * rtP . R5_Gain ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
{ if ( ( rtDW . crkalficod . AQHandles || rtDW . crkalficod . SlioLTF ) &&
ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . crkalficod .
AQHandles , rtDW . crkalficod . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , (
char * ) & rtB . cyywu0nyp5 + 0 ) ; } } } rtB . nzuj0tkyis = ( real_T ) ( rtB
. onhuz22qes < 0.0 ) * rtP . R6_Gain ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
{ if ( ( rtDW . ckmmj1b1a4 . AQHandles || rtDW . ckmmj1b1a4 . SlioLTF ) &&
ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . ckmmj1b1a4 .
AQHandles , rtDW . ckmmj1b1a4 . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , (
char * ) & rtB . nzuj0tkyis + 0 ) ; } } { if ( ( rtDW . ejwlgw0b0w .
AQHandles || rtDW . ejwlgw0b0w . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . ejwlgw0b0w . AQHandles , rtDW . ejwlgw0b0w .
SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . e4jpommznb [ 0 ]
+ 0 ) ; } } { if ( ( rtDW . lkmtjgr4pk . AQHandles || rtDW . lkmtjgr4pk .
SlioLTF ) && ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW .
lkmtjgr4pk . AQHandles , rtDW . lkmtjgr4pk . SlioLTF , 0 , ssGetTaskTime (
rtS , 1 ) , ( char * ) & rtB . e4jpommznb [ 2 ] + 0 ) ; } } { if ( ( rtDW .
doxequ5ptr . AQHandles || rtDW . doxequ5ptr . SlioLTF ) && ssGetLogOutput (
rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . doxequ5ptr . AQHandles , rtDW .
doxequ5ptr . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
e4jpommznb [ 4 ] + 0 ) ; } } { if ( ( rtDW . isfan0gc4x . AQHandles || rtDW .
isfan0gc4x . SlioLTF ) && ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal (
rtDW . isfan0gc4x . AQHandles , rtDW . isfan0gc4x . SlioLTF , 0 ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . e4jpommznb [ 6 ] + 0 ) ; } } {
if ( ( rtDW . bhw5fpwwrv . AQHandles || rtDW . bhw5fpwwrv . SlioLTF ) &&
ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . bhw5fpwwrv .
AQHandles , rtDW . bhw5fpwwrv . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , (
char * ) & rtB . e4jpommznb [ 8 ] + 0 ) ; } } { if ( ( rtDW . ffbfzmbeso .
AQHandles || rtDW . ffbfzmbeso . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . ffbfzmbeso . AQHandles , rtDW . ffbfzmbeso .
SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . e4jpommznb [ 10
] + 0 ) ; } } { if ( ( rtDW . bdep3qr3ra . AQHandles || rtDW . bdep3qr3ra .
SlioLTF ) && ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW .
bdep3qr3ra . AQHandles , rtDW . bdep3qr3ra . SlioLTF , 0 , ssGetTaskTime (
rtS , 1 ) , ( char * ) & rtB . hsnbhfvlji + 0 ) ; } } { if ( ( rtDW .
p14ax2esvj . AQHandles || rtDW . p14ax2esvj . SlioLTF ) && ssGetLogOutput (
rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . p14ax2esvj . AQHandles , rtDW .
p14ax2esvj . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
fvsrxbfg4g + 0 ) ; } } { if ( ( rtDW . d0f32oeoza . AQHandles || rtDW .
d0f32oeoza . SlioLTF ) && ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal (
rtDW . d0f32oeoza . AQHandles , rtDW . d0f32oeoza . SlioLTF , 0 ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . dlc4zw50uu + 0 ) ; } } { if (
( rtDW . dksd5f0dzc . AQHandles || rtDW . dksd5f0dzc . SlioLTF ) &&
ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . dksd5f0dzc .
AQHandles , rtDW . dksd5f0dzc . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , (
char * ) & rtB . cx2pgcpxmh + 0 ) ; } } { if ( ( rtDW . amkx3ztxsb .
AQHandles || rtDW . amkx3ztxsb . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . amkx3ztxsb . AQHandles , rtDW . amkx3ztxsb .
SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . imw2c4hmx0 + 0 )
; } } { if ( ( rtDW . lc00gioize . AQHandles || rtDW . lc00gioize . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . lc00gioize .
AQHandles , rtDW . lc00gioize . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , (
char * ) & rtB . kfizj0xxbp + 0 ) ; } } { if ( ( rtDW . ld2f3yh3ph .
AQHandles || rtDW . ld2f3yh3ph . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . ld2f3yh3ph . AQHandles , rtDW . ld2f3yh3ph .
SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtU . fi3eog4bcj + 0 )
; } } { if ( ( rtDW . gio3iy02hl . AQHandles || rtDW . gio3iy02hl . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . gio3iy02hl .
AQHandles , rtDW . gio3iy02hl . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , (
char * ) & rtU . meqjcbtglm + 0 ) ; } } { if ( ( rtDW . mkxd2pc5z0 .
AQHandles || rtDW . mkxd2pc5z0 . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . mkxd2pc5z0 . AQHandles , rtDW . mkxd2pc5z0 .
SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtU . gfuy4k4wck + 0 )
; } } { if ( ( rtDW . cc5bqxzmbs . AQHandles || rtDW . cc5bqxzmbs . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . cc5bqxzmbs .
AQHandles , rtDW . cc5bqxzmbs . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , (
char * ) & rtU . mitwhaapce + 0 ) ; } } { if ( ( rtDW . iyliuua3m1 .
AQHandles || rtDW . iyliuua3m1 . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . iyliuua3m1 . AQHandles , rtDW . iyliuua3m1 .
SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtU . n1ogmfa4cp + 0 )
; } } { if ( ( rtDW . k4edalu3p2 . AQHandles || rtDW . k4edalu3p2 . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . k4edalu3p2 .
AQHandles , rtDW . k4edalu3p2 . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , (
char * ) & rtU . ptivu2pmk5 + 0 ) ; } } } rtB . nny34gtevo [ 0 ] = rtB .
e4jpommznb [ 1 ] ; rtB . nny34gtevo [ 1 ] = 0.0 ; rtB . nny34gtevo [ 2 ] =
0.0 ; rtB . nny34gtevo [ 3 ] = 0.0 ; rtB . oawdzxyk1g [ 0 ] = rtB .
m4nbz10psi ; rtB . oawdzxyk1g [ 1 ] = 0.0 ; rtB . oawdzxyk1g [ 2 ] = 0.0 ;
rtB . oawdzxyk1g [ 3 ] = 0.0 ; rtB . go1xfp1pfe [ 0 ] = rtB . cg0peil0nn ;
rtB . go1xfp1pfe [ 1 ] = 0.0 ; rtB . go1xfp1pfe [ 2 ] = 0.0 ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . nttssxfe10 [ 0 ] = ! ( rtB . go1xfp1pfe
[ 0 ] == rtDW . nttssxfe10 [ 1 ] ) ; rtDW . nttssxfe10 [ 1 ] = rtB .
go1xfp1pfe [ 0 ] ; } rtB . go1xfp1pfe [ 0 ] = rtDW . nttssxfe10 [ 1 ] ; rtB .
go1xfp1pfe [ 3 ] = rtDW . nttssxfe10 [ 0 ] ; rtB . inipmccc32 [ 0 ] = rtB .
lw1ku45fyz ; rtB . inipmccc32 [ 1 ] = 0.0 ; rtB . inipmccc32 [ 2 ] = 0.0 ;
rtB . inipmccc32 [ 3 ] = 0.0 ; simulationData = ( NeslSimulationData * ) rtDW
. b2ulm0qurb ; time_e = ssGetT ( rtS ) ; simulationData -> mData -> mTime .
mN = 1 ; simulationData -> mData -> mTime . mX = & time_e ; simulationData ->
mData -> mContStates . mN = 4 ; simulationData -> mData -> mContStates . mX =
& rtX . josyacetrj [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . pw3owok3vx ;
simulationData -> mData -> mModeVector . mN = 5 ; simulationData -> mData ->
mModeVector . mX = & rtDW . cjrqthhfyx [ 0 ] ; tmp = ( ssIsMajorTimeStep (
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
0 ] = 0 ; tmp_g [ 0 ] = rtB . oawdzxyk1g [ 0 ] ; tmp_g [ 1 ] = rtB .
oawdzxyk1g [ 1 ] ; tmp_g [ 2 ] = rtB . oawdzxyk1g [ 2 ] ; tmp_g [ 3 ] = rtB .
oawdzxyk1g [ 3 ] ; tmp_j [ 1 ] = 4 ; tmp_g [ 4 ] = rtB . go1xfp1pfe [ 0 ] ;
tmp_g [ 5 ] = rtB . go1xfp1pfe [ 1 ] ; tmp_g [ 6 ] = rtB . go1xfp1pfe [ 2 ] ;
tmp_g [ 7 ] = rtB . go1xfp1pfe [ 3 ] ; tmp_j [ 2 ] = 8 ; tmp_g [ 8 ] = rtB .
inipmccc32 [ 0 ] ; tmp_g [ 9 ] = rtB . inipmccc32 [ 1 ] ; tmp_g [ 10 ] = rtB
. inipmccc32 [ 2 ] ; tmp_g [ 11 ] = rtB . inipmccc32 [ 3 ] ; tmp_j [ 3 ] = 12
; tmp_g [ 12 ] = rtB . nny34gtevo [ 0 ] ; tmp_g [ 13 ] = rtB . nny34gtevo [ 1
] ; tmp_g [ 14 ] = rtB . nny34gtevo [ 2 ] ; tmp_g [ 15 ] = rtB . nny34gtevo [
3 ] ; tmp_j [ 4 ] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ;
simulationData -> mData -> mInputValues . mX = & tmp_g [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_j [ 0 ] ; simulationData -> mData -> mOutputs . mN = 9 ;
simulationData -> mData -> mOutputs . mX = & rtB . efla2tgklq [ 0 ] ;
simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData ->
mSampleHits . mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit
= false ; simulationData -> mData -> mTolerances . mN = 0 ; simulationData ->
mData -> mTolerances . mX = NULL ; simulationData -> mData ->
mCstateHasChanged = false ; diagnosticManager = ( NeuDiagnosticManager * )
rtDW . aoztfxt3k3 ; diagnosticTree = neu_diagnostic_manager_get_initial_tree
( diagnosticManager ) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW .
p3qsy4ac3i , NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . d4hhejeuln ; time_i = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_i ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . gluzokmfs1 ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . kzxyadr5jp ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_c [ 0 ] = 0 ;
tmp_f [ 0 ] = rtB . oawdzxyk1g [ 0 ] ; tmp_f [ 1 ] = rtB . oawdzxyk1g [ 1 ] ;
tmp_f [ 2 ] = rtB . oawdzxyk1g [ 2 ] ; tmp_f [ 3 ] = rtB . oawdzxyk1g [ 3 ] ;
tmp_c [ 1 ] = 4 ; tmp_f [ 4 ] = rtB . go1xfp1pfe [ 0 ] ; tmp_f [ 5 ] = rtB .
go1xfp1pfe [ 1 ] ; tmp_f [ 6 ] = rtB . go1xfp1pfe [ 2 ] ; tmp_f [ 7 ] = rtB .
go1xfp1pfe [ 3 ] ; tmp_c [ 2 ] = 8 ; tmp_f [ 8 ] = rtB . inipmccc32 [ 0 ] ;
tmp_f [ 9 ] = rtB . inipmccc32 [ 1 ] ; tmp_f [ 10 ] = rtB . inipmccc32 [ 2 ]
; tmp_f [ 11 ] = rtB . inipmccc32 [ 3 ] ; tmp_c [ 3 ] = 12 ; tmp_f [ 12 ] =
rtB . nny34gtevo [ 0 ] ; tmp_f [ 13 ] = rtB . nny34gtevo [ 1 ] ; tmp_f [ 14 ]
= rtB . nny34gtevo [ 2 ] ; tmp_f [ 15 ] = rtB . nny34gtevo [ 3 ] ; tmp_c [ 4
] = 16 ; memcpy ( & tmp_f [ 16 ] , & rtB . efla2tgklq [ 0 ] , 9U * sizeof (
real_T ) ) ; tmp_c [ 5 ] = 25 ; simulationData -> mData -> mInputValues . mN
= 25 ; simulationData -> mData -> mInputValues . mX = & tmp_f [ 0 ] ;
simulationData -> mData -> mInputOffsets . mN = 6 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_c [ 0 ] ; simulationData -> mData -> mOutputs .
mN = 1 ; simulationData -> mData -> mOutputs . mX = & rtB . gcaq34maq5 ;
simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData ->
mSampleHits . mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit
= false ; simulationData -> mData -> mTolerances . mN = 0 ; simulationData ->
mData -> mTolerances . mX = NULL ; simulationData -> mData ->
mCstateHasChanged = false ; diagnosticManager = ( NeuDiagnosticManager * )
rtDW . m54odtvz3u ; diagnosticTree = neu_diagnostic_manager_get_initial_tree
( diagnosticManager ) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW .
nl02lte1sn , NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtB . ggdoah4lpg [ 0 ] = rtB . gcaq34maq5 ; rtB . ggdoah4lpg [ 1 ] = 0.0 ;
rtB . ggdoah4lpg [ 2 ] = 0.0 ; rtB . ggdoah4lpg [ 3 ] = 0.0 ; rtB .
clw3kkg5lz [ 0 ] = rtB . e4jpommznb [ 3 ] ; rtB . clw3kkg5lz [ 1 ] = 0.0 ;
rtB . clw3kkg5lz [ 2 ] = 0.0 ; rtB . clw3kkg5lz [ 3 ] = 0.0 ; rtB .
o10dy052cl [ 0 ] = rtB . k0jr3j5oxo ; rtB . o10dy052cl [ 1 ] = 0.0 ; rtB .
o10dy052cl [ 2 ] = 0.0 ; rtB . o10dy052cl [ 3 ] = 0.0 ; rtB . kwsufxstz0 [ 0
] = rtB . cjuzvphzfa ; rtB . kwsufxstz0 [ 1 ] = 0.0 ; rtB . kwsufxstz0 [ 2 ]
= 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . kdprvszesk [ 0 ] = ! ( rtB
. kwsufxstz0 [ 0 ] == rtDW . kdprvszesk [ 1 ] ) ; rtDW . kdprvszesk [ 1 ] =
rtB . kwsufxstz0 [ 0 ] ; } rtB . kwsufxstz0 [ 0 ] = rtDW . kdprvszesk [ 1 ] ;
rtB . kwsufxstz0 [ 3 ] = rtDW . kdprvszesk [ 0 ] ; rtB . e5djqxbatk [ 0 ] =
rtB . k0jr3j5oxo ; rtB . e5djqxbatk [ 1 ] = 0.0 ; rtB . e5djqxbatk [ 2 ] =
0.0 ; rtB . e5djqxbatk [ 3 ] = 0.0 ; rtB . hg55o3nyo3 [ 0 ] = rtB .
lmpujrulyo ; rtB . hg55o3nyo3 [ 1 ] = 0.0 ; rtB . hg55o3nyo3 [ 2 ] = 0.0 ;
rtB . hg55o3nyo3 [ 3 ] = 0.0 ; rtB . pnxfeg3myh [ 0 ] = rtB . cjuzvphzfa ;
rtB . pnxfeg3myh [ 1 ] = 0.0 ; rtB . pnxfeg3myh [ 2 ] = 0.0 ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . onw2qwsiq3 [ 0 ] = ! ( rtB . pnxfeg3myh
[ 0 ] == rtDW . onw2qwsiq3 [ 1 ] ) ; rtDW . onw2qwsiq3 [ 1 ] = rtB .
pnxfeg3myh [ 0 ] ; } rtB . pnxfeg3myh [ 0 ] = rtDW . onw2qwsiq3 [ 1 ] ; rtB .
pnxfeg3myh [ 3 ] = rtDW . onw2qwsiq3 [ 0 ] ; rtB . d432tayljp [ 0 ] = rtB .
lmpujrulyo ; rtB . d432tayljp [ 1 ] = 0.0 ; rtB . d432tayljp [ 2 ] = 0.0 ;
rtB . d432tayljp [ 3 ] = 0.0 ; simulationData = ( NeslSimulationData * ) rtDW
. ir5o5sem4f ; time_m = ssGetT ( rtS ) ; simulationData -> mData -> mTime .
mN = 1 ; simulationData -> mData -> mTime . mX = & time_m ; simulationData ->
mData -> mContStates . mN = 8 ; simulationData -> mData -> mContStates . mX =
& rtX . en2pd5luhl [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . fcg5fdf0oq ;
simulationData -> mData -> mModeVector . mN = 10 ; simulationData -> mData ->
mModeVector . mX = & rtDW . aha3ttluaz [ 0 ] ; tmp = ( ssIsMajorTimeStep (
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
0 ] = 0 ; tmp_k [ 0 ] = rtB . o10dy052cl [ 0 ] ; tmp_k [ 1 ] = rtB .
o10dy052cl [ 1 ] ; tmp_k [ 2 ] = rtB . o10dy052cl [ 2 ] ; tmp_k [ 3 ] = rtB .
o10dy052cl [ 3 ] ; tmp_b [ 1 ] = 4 ; tmp_k [ 4 ] = rtB . kwsufxstz0 [ 0 ] ;
tmp_k [ 5 ] = rtB . kwsufxstz0 [ 1 ] ; tmp_k [ 6 ] = rtB . kwsufxstz0 [ 2 ] ;
tmp_k [ 7 ] = rtB . kwsufxstz0 [ 3 ] ; tmp_b [ 2 ] = 8 ; tmp_k [ 8 ] = rtB .
e5djqxbatk [ 0 ] ; tmp_k [ 9 ] = rtB . e5djqxbatk [ 1 ] ; tmp_k [ 10 ] = rtB
. e5djqxbatk [ 2 ] ; tmp_k [ 11 ] = rtB . e5djqxbatk [ 3 ] ; tmp_b [ 3 ] = 12
; tmp_k [ 12 ] = rtB . hg55o3nyo3 [ 0 ] ; tmp_k [ 13 ] = rtB . hg55o3nyo3 [ 1
] ; tmp_k [ 14 ] = rtB . hg55o3nyo3 [ 2 ] ; tmp_k [ 15 ] = rtB . hg55o3nyo3 [
3 ] ; tmp_b [ 4 ] = 16 ; tmp_k [ 16 ] = rtB . pnxfeg3myh [ 0 ] ; tmp_k [ 17 ]
= rtB . pnxfeg3myh [ 1 ] ; tmp_k [ 18 ] = rtB . pnxfeg3myh [ 2 ] ; tmp_k [ 19
] = rtB . pnxfeg3myh [ 3 ] ; tmp_b [ 5 ] = 20 ; tmp_k [ 20 ] = rtB .
d432tayljp [ 0 ] ; tmp_k [ 21 ] = rtB . d432tayljp [ 1 ] ; tmp_k [ 22 ] = rtB
. d432tayljp [ 2 ] ; tmp_k [ 23 ] = rtB . d432tayljp [ 3 ] ; tmp_b [ 6 ] = 24
; tmp_k [ 24 ] = rtB . clw3kkg5lz [ 0 ] ; tmp_k [ 25 ] = rtB . clw3kkg5lz [ 1
] ; tmp_k [ 26 ] = rtB . clw3kkg5lz [ 2 ] ; tmp_k [ 27 ] = rtB . clw3kkg5lz [
3 ] ; tmp_b [ 7 ] = 28 ; simulationData -> mData -> mInputValues . mN = 28 ;
simulationData -> mData -> mInputValues . mX = & tmp_k [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 8 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_b [ 0 ] ; simulationData -> mData -> mOutputs . mN = 18 ;
simulationData -> mData -> mOutputs . mX = & rtB . kvb4zpjzgq [ 0 ] ;
simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData ->
mSampleHits . mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit
= false ; simulationData -> mData -> mTolerances . mN = 0 ; simulationData ->
mData -> mTolerances . mX = NULL ; simulationData -> mData ->
mCstateHasChanged = false ; diagnosticManager = ( NeuDiagnosticManager * )
rtDW . jspmsolpsx ; diagnosticTree = neu_diagnostic_manager_get_initial_tree
( diagnosticManager ) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW .
mtcob204rl , NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . jedewwpx2b ; time_g = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_g ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . bzynygth0l ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . iyrt2vmhf4 ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_l [ 0 ] = 0 ;
tmp_n [ 0 ] = rtB . o10dy052cl [ 0 ] ; tmp_n [ 1 ] = rtB . o10dy052cl [ 1 ] ;
tmp_n [ 2 ] = rtB . o10dy052cl [ 2 ] ; tmp_n [ 3 ] = rtB . o10dy052cl [ 3 ] ;
tmp_l [ 1 ] = 4 ; tmp_n [ 4 ] = rtB . kwsufxstz0 [ 0 ] ; tmp_n [ 5 ] = rtB .
kwsufxstz0 [ 1 ] ; tmp_n [ 6 ] = rtB . kwsufxstz0 [ 2 ] ; tmp_n [ 7 ] = rtB .
kwsufxstz0 [ 3 ] ; tmp_l [ 2 ] = 8 ; tmp_n [ 8 ] = rtB . e5djqxbatk [ 0 ] ;
tmp_n [ 9 ] = rtB . e5djqxbatk [ 1 ] ; tmp_n [ 10 ] = rtB . e5djqxbatk [ 2 ]
; tmp_n [ 11 ] = rtB . e5djqxbatk [ 3 ] ; tmp_l [ 3 ] = 12 ; tmp_n [ 12 ] =
rtB . hg55o3nyo3 [ 0 ] ; tmp_n [ 13 ] = rtB . hg55o3nyo3 [ 1 ] ; tmp_n [ 14 ]
= rtB . hg55o3nyo3 [ 2 ] ; tmp_n [ 15 ] = rtB . hg55o3nyo3 [ 3 ] ; tmp_l [ 4
] = 16 ; tmp_n [ 16 ] = rtB . pnxfeg3myh [ 0 ] ; tmp_n [ 17 ] = rtB .
pnxfeg3myh [ 1 ] ; tmp_n [ 18 ] = rtB . pnxfeg3myh [ 2 ] ; tmp_n [ 19 ] = rtB
. pnxfeg3myh [ 3 ] ; tmp_l [ 5 ] = 20 ; tmp_n [ 20 ] = rtB . d432tayljp [ 0 ]
; tmp_n [ 21 ] = rtB . d432tayljp [ 1 ] ; tmp_n [ 22 ] = rtB . d432tayljp [ 2
] ; tmp_n [ 23 ] = rtB . d432tayljp [ 3 ] ; tmp_l [ 6 ] = 24 ; tmp_n [ 24 ] =
rtB . clw3kkg5lz [ 0 ] ; tmp_n [ 25 ] = rtB . clw3kkg5lz [ 1 ] ; tmp_n [ 26 ]
= rtB . clw3kkg5lz [ 2 ] ; tmp_n [ 27 ] = rtB . clw3kkg5lz [ 3 ] ; tmp_l [ 7
] = 28 ; memcpy ( & tmp_n [ 28 ] , & rtB . kvb4zpjzgq [ 0 ] , 18U * sizeof (
real_T ) ) ; tmp_l [ 8 ] = 46 ; simulationData -> mData -> mInputValues . mN
= 46 ; simulationData -> mData -> mInputValues . mX = & tmp_n [ 0 ] ;
simulationData -> mData -> mInputOffsets . mN = 9 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_l [ 0 ] ; simulationData -> mData -> mOutputs .
mN = 1 ; simulationData -> mData -> mOutputs . mX = & rtB . boj21qbs4q ;
simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData ->
mSampleHits . mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit
= false ; simulationData -> mData -> mTolerances . mN = 0 ; simulationData ->
mData -> mTolerances . mX = NULL ; simulationData -> mData ->
mCstateHasChanged = false ; diagnosticManager = ( NeuDiagnosticManager * )
rtDW . oxiddlwl0e ; diagnosticTree = neu_diagnostic_manager_get_initial_tree
( diagnosticManager ) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW .
alkigtb3eo , NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtB . myut2kekff [ 0 ] = rtB . boj21qbs4q ; rtB . myut2kekff [ 1 ] = 0.0 ;
rtB . myut2kekff [ 2 ] = 0.0 ; rtB . myut2kekff [ 3 ] = 0.0 ; rtB .
ji3vchq3tw [ 0 ] = rtB . e4jpommznb [ 5 ] ; rtB . ji3vchq3tw [ 1 ] = 0.0 ;
rtB . ji3vchq3tw [ 2 ] = 0.0 ; rtB . ji3vchq3tw [ 3 ] = 0.0 ; rtB .
h2xuzybx31 [ 0 ] = rtB . iclarv42jt ; rtB . h2xuzybx31 [ 1 ] = 0.0 ; rtB .
h2xuzybx31 [ 2 ] = 0.0 ; rtB . h2xuzybx31 [ 3 ] = 0.0 ; rtB . aalhpeekcz [ 0
] = rtB . hqhclugji4 ; rtB . aalhpeekcz [ 1 ] = 0.0 ; rtB . aalhpeekcz [ 2 ]
= 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . n5ciem0fnx [ 0 ] = ! ( rtB
. aalhpeekcz [ 0 ] == rtDW . n5ciem0fnx [ 1 ] ) ; rtDW . n5ciem0fnx [ 1 ] =
rtB . aalhpeekcz [ 0 ] ; } rtB . aalhpeekcz [ 0 ] = rtDW . n5ciem0fnx [ 1 ] ;
rtB . aalhpeekcz [ 3 ] = rtDW . n5ciem0fnx [ 0 ] ; rtB . n2nhbhgaoj [ 0 ] =
rtB . hw1ccwcgua ; rtB . n2nhbhgaoj [ 1 ] = 0.0 ; rtB . n2nhbhgaoj [ 2 ] =
0.0 ; rtB . n2nhbhgaoj [ 3 ] = 0.0 ; simulationData = ( NeslSimulationData *
) rtDW . mvbznvevad ; time_j = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_j ;
simulationData -> mData -> mContStates . mN = 4 ; simulationData -> mData ->
mContStates . mX = & rtX . hywdustkrw [ 0 ] ; simulationData -> mData ->
mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = & rtDW .
br0nvfzzdo ; simulationData -> mData -> mModeVector . mN = 5 ; simulationData
-> mData -> mModeVector . mX = & rtDW . huqf5ahxl5 [ 0 ] ; tmp = (
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
0 ] = 0 ; tmp_d [ 0 ] = rtB . h2xuzybx31 [ 0 ] ; tmp_d [ 1 ] = rtB .
h2xuzybx31 [ 1 ] ; tmp_d [ 2 ] = rtB . h2xuzybx31 [ 2 ] ; tmp_d [ 3 ] = rtB .
h2xuzybx31 [ 3 ] ; tmp_o [ 1 ] = 4 ; tmp_d [ 4 ] = rtB . aalhpeekcz [ 0 ] ;
tmp_d [ 5 ] = rtB . aalhpeekcz [ 1 ] ; tmp_d [ 6 ] = rtB . aalhpeekcz [ 2 ] ;
tmp_d [ 7 ] = rtB . aalhpeekcz [ 3 ] ; tmp_o [ 2 ] = 8 ; tmp_d [ 8 ] = rtB .
n2nhbhgaoj [ 0 ] ; tmp_d [ 9 ] = rtB . n2nhbhgaoj [ 1 ] ; tmp_d [ 10 ] = rtB
. n2nhbhgaoj [ 2 ] ; tmp_d [ 11 ] = rtB . n2nhbhgaoj [ 3 ] ; tmp_o [ 3 ] = 12
; tmp_d [ 12 ] = rtB . ji3vchq3tw [ 0 ] ; tmp_d [ 13 ] = rtB . ji3vchq3tw [ 1
] ; tmp_d [ 14 ] = rtB . ji3vchq3tw [ 2 ] ; tmp_d [ 15 ] = rtB . ji3vchq3tw [
3 ] ; tmp_o [ 4 ] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ;
simulationData -> mData -> mInputValues . mX = & tmp_d [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_o [ 0 ] ; simulationData -> mData -> mOutputs . mN = 9 ;
simulationData -> mData -> mOutputs . mX = & rtB . an5wlueyqi [ 0 ] ;
simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData ->
mSampleHits . mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit
= false ; simulationData -> mData -> mTolerances . mN = 0 ; simulationData ->
mData -> mTolerances . mX = NULL ; simulationData -> mData ->
mCstateHasChanged = false ; diagnosticManager = ( NeuDiagnosticManager * )
rtDW . j0ckgxpmx5 ; diagnosticTree = neu_diagnostic_manager_get_initial_tree
( diagnosticManager ) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW .
esgd45ifwg , NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . lxi10debkw ; time_f = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_f ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . mgn4qmeh1w ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . o0gg5vcyvl ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_fs [ 0 ] = 0
; tmp_dz [ 0 ] = rtB . h2xuzybx31 [ 0 ] ; tmp_dz [ 1 ] = rtB . h2xuzybx31 [ 1
] ; tmp_dz [ 2 ] = rtB . h2xuzybx31 [ 2 ] ; tmp_dz [ 3 ] = rtB . h2xuzybx31 [
3 ] ; tmp_fs [ 1 ] = 4 ; tmp_dz [ 4 ] = rtB . aalhpeekcz [ 0 ] ; tmp_dz [ 5 ]
= rtB . aalhpeekcz [ 1 ] ; tmp_dz [ 6 ] = rtB . aalhpeekcz [ 2 ] ; tmp_dz [ 7
] = rtB . aalhpeekcz [ 3 ] ; tmp_fs [ 2 ] = 8 ; tmp_dz [ 8 ] = rtB .
n2nhbhgaoj [ 0 ] ; tmp_dz [ 9 ] = rtB . n2nhbhgaoj [ 1 ] ; tmp_dz [ 10 ] =
rtB . n2nhbhgaoj [ 2 ] ; tmp_dz [ 11 ] = rtB . n2nhbhgaoj [ 3 ] ; tmp_fs [ 3
] = 12 ; tmp_dz [ 12 ] = rtB . ji3vchq3tw [ 0 ] ; tmp_dz [ 13 ] = rtB .
ji3vchq3tw [ 1 ] ; tmp_dz [ 14 ] = rtB . ji3vchq3tw [ 2 ] ; tmp_dz [ 15 ] =
rtB . ji3vchq3tw [ 3 ] ; tmp_fs [ 4 ] = 16 ; memcpy ( & tmp_dz [ 16 ] , & rtB
. an5wlueyqi [ 0 ] , 9U * sizeof ( real_T ) ) ; tmp_fs [ 5 ] = 25 ;
simulationData -> mData -> mInputValues . mN = 25 ; simulationData -> mData
-> mInputValues . mX = & tmp_dz [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 6 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_fs [ 0 ] ; simulationData -> mData -> mOutputs . mN = 1 ; simulationData
-> mData -> mOutputs . mX = & rtB . ccbyphkuvf ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . o0t2zajdar ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . knwl0j21ex ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtB . gloyjgyfuk [ 0 ] = rtB . ccbyphkuvf ; rtB . gloyjgyfuk [ 1 ] = 0.0 ;
rtB . gloyjgyfuk [ 2 ] = 0.0 ; rtB . gloyjgyfuk [ 3 ] = 0.0 ; rtB .
pv1aefa4ak [ 0 ] = rtB . e4jpommznb [ 7 ] ; rtB . pv1aefa4ak [ 1 ] = 0.0 ;
rtB . pv1aefa4ak [ 2 ] = 0.0 ; rtB . pv1aefa4ak [ 3 ] = 0.0 ; rtB .
j2hdft1opa [ 0 ] = rtB . n5av2fk0n2 ; rtB . j2hdft1opa [ 1 ] = 0.0 ; rtB .
j2hdft1opa [ 2 ] = 0.0 ; rtB . j2hdft1opa [ 3 ] = 0.0 ; rtB . lkp0ijlter [ 0
] = rtB . bve50u2tic ; rtB . lkp0ijlter [ 1 ] = 0.0 ; rtB . lkp0ijlter [ 2 ]
= 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . kt415tdana [ 0 ] = ! ( rtB
. lkp0ijlter [ 0 ] == rtDW . kt415tdana [ 1 ] ) ; rtDW . kt415tdana [ 1 ] =
rtB . lkp0ijlter [ 0 ] ; } rtB . lkp0ijlter [ 0 ] = rtDW . kt415tdana [ 1 ] ;
rtB . lkp0ijlter [ 3 ] = rtDW . kt415tdana [ 0 ] ; rtB . c3sg5zcxif [ 0 ] =
rtB . gue5wmwueg ; rtB . c3sg5zcxif [ 1 ] = 0.0 ; rtB . c3sg5zcxif [ 2 ] =
0.0 ; rtB . c3sg5zcxif [ 3 ] = 0.0 ; simulationData = ( NeslSimulationData *
) rtDW . ehoo31suuw ; time_c = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_c ;
simulationData -> mData -> mContStates . mN = 4 ; simulationData -> mData ->
mContStates . mX = & rtX . l0e0xe2uy4 [ 0 ] ; simulationData -> mData ->
mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = & rtDW .
oogtzxflgo ; simulationData -> mData -> mModeVector . mN = 5 ; simulationData
-> mData -> mModeVector . mX = & rtDW . eofsatdfl4 [ 0 ] ; tmp = (
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
[ 0 ] = 0 ; tmp_ck [ 0 ] = rtB . j2hdft1opa [ 0 ] ; tmp_ck [ 1 ] = rtB .
j2hdft1opa [ 1 ] ; tmp_ck [ 2 ] = rtB . j2hdft1opa [ 2 ] ; tmp_ck [ 3 ] = rtB
. j2hdft1opa [ 3 ] ; tmp_f2 [ 1 ] = 4 ; tmp_ck [ 4 ] = rtB . lkp0ijlter [ 0 ]
; tmp_ck [ 5 ] = rtB . lkp0ijlter [ 1 ] ; tmp_ck [ 6 ] = rtB . lkp0ijlter [ 2
] ; tmp_ck [ 7 ] = rtB . lkp0ijlter [ 3 ] ; tmp_f2 [ 2 ] = 8 ; tmp_ck [ 8 ] =
rtB . c3sg5zcxif [ 0 ] ; tmp_ck [ 9 ] = rtB . c3sg5zcxif [ 1 ] ; tmp_ck [ 10
] = rtB . c3sg5zcxif [ 2 ] ; tmp_ck [ 11 ] = rtB . c3sg5zcxif [ 3 ] ; tmp_f2
[ 3 ] = 12 ; tmp_ck [ 12 ] = rtB . pv1aefa4ak [ 0 ] ; tmp_ck [ 13 ] = rtB .
pv1aefa4ak [ 1 ] ; tmp_ck [ 14 ] = rtB . pv1aefa4ak [ 2 ] ; tmp_ck [ 15 ] =
rtB . pv1aefa4ak [ 3 ] ; tmp_f2 [ 4 ] = 16 ; simulationData -> mData ->
mInputValues . mN = 16 ; simulationData -> mData -> mInputValues . mX = &
tmp_ck [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_f2 [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 9 ; simulationData -> mData ->
mOutputs . mX = & rtB . hefgnl12g0 [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . eqaph1hnr4 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . hsnnp23xx3 ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . ojep3hp3tz ; time_k = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_k ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . lqkmp55gjx ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . h4lvhpzsjg ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_lt [ 0 ] = 0
; tmp_kt [ 0 ] = rtB . j2hdft1opa [ 0 ] ; tmp_kt [ 1 ] = rtB . j2hdft1opa [ 1
] ; tmp_kt [ 2 ] = rtB . j2hdft1opa [ 2 ] ; tmp_kt [ 3 ] = rtB . j2hdft1opa [
3 ] ; tmp_lt [ 1 ] = 4 ; tmp_kt [ 4 ] = rtB . lkp0ijlter [ 0 ] ; tmp_kt [ 5 ]
= rtB . lkp0ijlter [ 1 ] ; tmp_kt [ 6 ] = rtB . lkp0ijlter [ 2 ] ; tmp_kt [ 7
] = rtB . lkp0ijlter [ 3 ] ; tmp_lt [ 2 ] = 8 ; tmp_kt [ 8 ] = rtB .
c3sg5zcxif [ 0 ] ; tmp_kt [ 9 ] = rtB . c3sg5zcxif [ 1 ] ; tmp_kt [ 10 ] =
rtB . c3sg5zcxif [ 2 ] ; tmp_kt [ 11 ] = rtB . c3sg5zcxif [ 3 ] ; tmp_lt [ 3
] = 12 ; tmp_kt [ 12 ] = rtB . pv1aefa4ak [ 0 ] ; tmp_kt [ 13 ] = rtB .
pv1aefa4ak [ 1 ] ; tmp_kt [ 14 ] = rtB . pv1aefa4ak [ 2 ] ; tmp_kt [ 15 ] =
rtB . pv1aefa4ak [ 3 ] ; tmp_lt [ 4 ] = 16 ; memcpy ( & tmp_kt [ 16 ] , & rtB
. hefgnl12g0 [ 0 ] , 9U * sizeof ( real_T ) ) ; tmp_lt [ 5 ] = 25 ;
simulationData -> mData -> mInputValues . mN = 25 ; simulationData -> mData
-> mInputValues . mX = & tmp_kt [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 6 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_lt [ 0 ] ; simulationData -> mData -> mOutputs . mN = 1 ; simulationData
-> mData -> mOutputs . mX = & rtB . neow0ggyvd ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . oofcw1u5oj ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . ltacaubgtq ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtB . oi2jfcurfm [ 0 ] = rtB . neow0ggyvd ; rtB . oi2jfcurfm [ 1 ] = 0.0 ;
rtB . oi2jfcurfm [ 2 ] = 0.0 ; rtB . oi2jfcurfm [ 3 ] = 0.0 ; rtB .
kdsjhcimkb [ 0 ] = rtB . e4jpommznb [ 9 ] ; rtB . kdsjhcimkb [ 1 ] = 0.0 ;
rtB . kdsjhcimkb [ 2 ] = 0.0 ; rtB . kdsjhcimkb [ 3 ] = 0.0 ; rtB .
mmtghsbk5w [ 0 ] = rtB . b4uivev3hv ; rtB . mmtghsbk5w [ 1 ] = 0.0 ; rtB .
mmtghsbk5w [ 2 ] = 0.0 ; rtB . mmtghsbk5w [ 3 ] = 0.0 ; rtB . cqr0wtwuy4 [ 0
] = rtB . ezre3gedwd ; rtB . cqr0wtwuy4 [ 1 ] = 0.0 ; rtB . cqr0wtwuy4 [ 2 ]
= 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . gjf2vc4lik [ 0 ] = ! ( rtB
. cqr0wtwuy4 [ 0 ] == rtDW . gjf2vc4lik [ 1 ] ) ; rtDW . gjf2vc4lik [ 1 ] =
rtB . cqr0wtwuy4 [ 0 ] ; } rtB . cqr0wtwuy4 [ 0 ] = rtDW . gjf2vc4lik [ 1 ] ;
rtB . cqr0wtwuy4 [ 3 ] = rtDW . gjf2vc4lik [ 0 ] ; rtB . dwr0nxvsbj [ 0 ] =
rtB . cyywu0nyp5 ; rtB . dwr0nxvsbj [ 1 ] = 0.0 ; rtB . dwr0nxvsbj [ 2 ] =
0.0 ; rtB . dwr0nxvsbj [ 3 ] = 0.0 ; simulationData = ( NeslSimulationData *
) rtDW . hp2ndf5vf3 ; time_b = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_b ;
simulationData -> mData -> mContStates . mN = 4 ; simulationData -> mData ->
mContStates . mX = & rtX . bp3pw3plbw [ 0 ] ; simulationData -> mData ->
mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = & rtDW .
fhsxv1yddz ; simulationData -> mData -> mModeVector . mN = 5 ; simulationData
-> mData -> mModeVector . mX = & rtDW . l0sp34a5vt [ 0 ] ; tmp = (
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
[ 0 ] = 0 ; tmp_hn [ 0 ] = rtB . mmtghsbk5w [ 0 ] ; tmp_hn [ 1 ] = rtB .
mmtghsbk5w [ 1 ] ; tmp_hn [ 2 ] = rtB . mmtghsbk5w [ 2 ] ; tmp_hn [ 3 ] = rtB
. mmtghsbk5w [ 3 ] ; tmp_ap [ 1 ] = 4 ; tmp_hn [ 4 ] = rtB . cqr0wtwuy4 [ 0 ]
; tmp_hn [ 5 ] = rtB . cqr0wtwuy4 [ 1 ] ; tmp_hn [ 6 ] = rtB . cqr0wtwuy4 [ 2
] ; tmp_hn [ 7 ] = rtB . cqr0wtwuy4 [ 3 ] ; tmp_ap [ 2 ] = 8 ; tmp_hn [ 8 ] =
rtB . dwr0nxvsbj [ 0 ] ; tmp_hn [ 9 ] = rtB . dwr0nxvsbj [ 1 ] ; tmp_hn [ 10
] = rtB . dwr0nxvsbj [ 2 ] ; tmp_hn [ 11 ] = rtB . dwr0nxvsbj [ 3 ] ; tmp_ap
[ 3 ] = 12 ; tmp_hn [ 12 ] = rtB . kdsjhcimkb [ 0 ] ; tmp_hn [ 13 ] = rtB .
kdsjhcimkb [ 1 ] ; tmp_hn [ 14 ] = rtB . kdsjhcimkb [ 2 ] ; tmp_hn [ 15 ] =
rtB . kdsjhcimkb [ 3 ] ; tmp_ap [ 4 ] = 16 ; simulationData -> mData ->
mInputValues . mN = 16 ; simulationData -> mData -> mInputValues . mX = &
tmp_hn [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_ap [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 9 ; simulationData -> mData ->
mOutputs . mX = & rtB . edkd4wserg [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . cq5hsabgd5 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . pfajoqccjj ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . onsxqbd1pr ; time_n = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_n ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . pf5wglytiw ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . jo3q0ft4ok ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_po [ 0 ] = 0
; tmp_pj [ 0 ] = rtB . mmtghsbk5w [ 0 ] ; tmp_pj [ 1 ] = rtB . mmtghsbk5w [ 1
] ; tmp_pj [ 2 ] = rtB . mmtghsbk5w [ 2 ] ; tmp_pj [ 3 ] = rtB . mmtghsbk5w [
3 ] ; tmp_po [ 1 ] = 4 ; tmp_pj [ 4 ] = rtB . cqr0wtwuy4 [ 0 ] ; tmp_pj [ 5 ]
= rtB . cqr0wtwuy4 [ 1 ] ; tmp_pj [ 6 ] = rtB . cqr0wtwuy4 [ 2 ] ; tmp_pj [ 7
] = rtB . cqr0wtwuy4 [ 3 ] ; tmp_po [ 2 ] = 8 ; tmp_pj [ 8 ] = rtB .
dwr0nxvsbj [ 0 ] ; tmp_pj [ 9 ] = rtB . dwr0nxvsbj [ 1 ] ; tmp_pj [ 10 ] =
rtB . dwr0nxvsbj [ 2 ] ; tmp_pj [ 11 ] = rtB . dwr0nxvsbj [ 3 ] ; tmp_po [ 3
] = 12 ; tmp_pj [ 12 ] = rtB . kdsjhcimkb [ 0 ] ; tmp_pj [ 13 ] = rtB .
kdsjhcimkb [ 1 ] ; tmp_pj [ 14 ] = rtB . kdsjhcimkb [ 2 ] ; tmp_pj [ 15 ] =
rtB . kdsjhcimkb [ 3 ] ; tmp_po [ 4 ] = 16 ; memcpy ( & tmp_pj [ 16 ] , & rtB
. edkd4wserg [ 0 ] , 9U * sizeof ( real_T ) ) ; tmp_po [ 5 ] = 25 ;
simulationData -> mData -> mInputValues . mN = 25 ; simulationData -> mData
-> mInputValues . mX = & tmp_pj [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 6 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_po [ 0 ] ; simulationData -> mData -> mOutputs . mN = 1 ; simulationData
-> mData -> mOutputs . mX = & rtB . g0ribq2fff ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . mb03qpxir0 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . otxi1ujsu5 ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtB . j5gqirfivu [ 0 ] = rtB . g0ribq2fff ; rtB . j5gqirfivu [ 1 ] = 0.0 ;
rtB . j5gqirfivu [ 2 ] = 0.0 ; rtB . j5gqirfivu [ 3 ] = 0.0 ; rtB .
bezsqifqzd [ 0 ] = rtB . e4jpommznb [ 11 ] ; rtB . bezsqifqzd [ 1 ] = 0.0 ;
rtB . bezsqifqzd [ 2 ] = 0.0 ; rtB . bezsqifqzd [ 3 ] = 0.0 ; rtB .
ovfjzuhpy1 [ 0 ] = rtB . ayfkra0odz ; rtB . ovfjzuhpy1 [ 1 ] = 0.0 ; rtB .
ovfjzuhpy1 [ 2 ] = 0.0 ; rtB . ovfjzuhpy1 [ 3 ] = 0.0 ; rtB . got3v1adxi [ 0
] = rtB . bf4kcmzwgq ; rtB . got3v1adxi [ 1 ] = 0.0 ; rtB . got3v1adxi [ 2 ]
= 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . hrcshd2jnu [ 0 ] = ! ( rtB
. got3v1adxi [ 0 ] == rtDW . hrcshd2jnu [ 1 ] ) ; rtDW . hrcshd2jnu [ 1 ] =
rtB . got3v1adxi [ 0 ] ; } rtB . got3v1adxi [ 0 ] = rtDW . hrcshd2jnu [ 1 ] ;
rtB . got3v1adxi [ 3 ] = rtDW . hrcshd2jnu [ 0 ] ; rtB . dgpujci0nh [ 0 ] =
rtB . nzuj0tkyis ; rtB . dgpujci0nh [ 1 ] = 0.0 ; rtB . dgpujci0nh [ 2 ] =
0.0 ; rtB . dgpujci0nh [ 3 ] = 0.0 ; simulationData = ( NeslSimulationData *
) rtDW . onerx1yfb2 ; time_l = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_l ;
simulationData -> mData -> mContStates . mN = 4 ; simulationData -> mData ->
mContStates . mX = & rtX . fxz224311k [ 0 ] ; simulationData -> mData ->
mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = & rtDW .
cwd4sm1def ; simulationData -> mData -> mModeVector . mN = 5 ; simulationData
-> mData -> mModeVector . mX = & rtDW . iwcrwapmy1 [ 0 ] ; tmp = (
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
[ 0 ] = 0 ; tmp_pk [ 0 ] = rtB . ovfjzuhpy1 [ 0 ] ; tmp_pk [ 1 ] = rtB .
ovfjzuhpy1 [ 1 ] ; tmp_pk [ 2 ] = rtB . ovfjzuhpy1 [ 2 ] ; tmp_pk [ 3 ] = rtB
. ovfjzuhpy1 [ 3 ] ; tmp_d0 [ 1 ] = 4 ; tmp_pk [ 4 ] = rtB . got3v1adxi [ 0 ]
; tmp_pk [ 5 ] = rtB . got3v1adxi [ 1 ] ; tmp_pk [ 6 ] = rtB . got3v1adxi [ 2
] ; tmp_pk [ 7 ] = rtB . got3v1adxi [ 3 ] ; tmp_d0 [ 2 ] = 8 ; tmp_pk [ 8 ] =
rtB . dgpujci0nh [ 0 ] ; tmp_pk [ 9 ] = rtB . dgpujci0nh [ 1 ] ; tmp_pk [ 10
] = rtB . dgpujci0nh [ 2 ] ; tmp_pk [ 11 ] = rtB . dgpujci0nh [ 3 ] ; tmp_d0
[ 3 ] = 12 ; tmp_pk [ 12 ] = rtB . bezsqifqzd [ 0 ] ; tmp_pk [ 13 ] = rtB .
bezsqifqzd [ 1 ] ; tmp_pk [ 14 ] = rtB . bezsqifqzd [ 2 ] ; tmp_pk [ 15 ] =
rtB . bezsqifqzd [ 3 ] ; tmp_d0 [ 4 ] = 16 ; simulationData -> mData ->
mInputValues . mN = 16 ; simulationData -> mData -> mInputValues . mX = &
tmp_pk [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_d0 [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 9 ; simulationData -> mData ->
mOutputs . mX = & rtB . krwjqqdwhs [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . geu4q0xuqi ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . o4y0j0g15n ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . gpyxtothik ; time_d = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_d ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . j1rgpnrnqp ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . owfi3fj2gy ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_m0 [ 0 ] = 0
; tmp_kh [ 0 ] = rtB . ovfjzuhpy1 [ 0 ] ; tmp_kh [ 1 ] = rtB . ovfjzuhpy1 [ 1
] ; tmp_kh [ 2 ] = rtB . ovfjzuhpy1 [ 2 ] ; tmp_kh [ 3 ] = rtB . ovfjzuhpy1 [
3 ] ; tmp_m0 [ 1 ] = 4 ; tmp_kh [ 4 ] = rtB . got3v1adxi [ 0 ] ; tmp_kh [ 5 ]
= rtB . got3v1adxi [ 1 ] ; tmp_kh [ 6 ] = rtB . got3v1adxi [ 2 ] ; tmp_kh [ 7
] = rtB . got3v1adxi [ 3 ] ; tmp_m0 [ 2 ] = 8 ; tmp_kh [ 8 ] = rtB .
dgpujci0nh [ 0 ] ; tmp_kh [ 9 ] = rtB . dgpujci0nh [ 1 ] ; tmp_kh [ 10 ] =
rtB . dgpujci0nh [ 2 ] ; tmp_kh [ 11 ] = rtB . dgpujci0nh [ 3 ] ; tmp_m0 [ 3
] = 12 ; tmp_kh [ 12 ] = rtB . bezsqifqzd [ 0 ] ; tmp_kh [ 13 ] = rtB .
bezsqifqzd [ 1 ] ; tmp_kh [ 14 ] = rtB . bezsqifqzd [ 2 ] ; tmp_kh [ 15 ] =
rtB . bezsqifqzd [ 3 ] ; tmp_m0 [ 4 ] = 16 ; memcpy ( & tmp_kh [ 16 ] , & rtB
. krwjqqdwhs [ 0 ] , 9U * sizeof ( real_T ) ) ; tmp_m0 [ 5 ] = 25 ;
simulationData -> mData -> mInputValues . mN = 25 ; simulationData -> mData
-> mInputValues . mX = & tmp_kh [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 6 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_m0 [ 0 ] ; simulationData -> mData -> mOutputs . mN = 1 ; simulationData
-> mData -> mOutputs . mX = & rtB . bhsz3zdcal ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . loqycrqsns ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . bdnu2nsumd ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtB . ijej1daezt [ 0 ] = rtB . bhsz3zdcal ; rtB . ijej1daezt [ 1 ] = 0.0 ;
rtB . ijej1daezt [ 2 ] = 0.0 ; rtB . ijej1daezt [ 3 ] = 0.0 ;
UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID3 ( int_T tid ) { if ( rtP .
Break_Value > rtP . u5_UpperSat ) { rtB . cg0peil0nn = rtP . u5_UpperSat ; }
else if ( rtP . Break_Value < rtP . u5_LowerSat ) { rtB . cg0peil0nn = rtP .
u5_LowerSat ; } else { rtB . cg0peil0nn = rtP . Break_Value ; } if ( rtP .
Break1_Value > rtP . u51_UpperSat ) { rtB . cjuzvphzfa = rtP . u51_UpperSat ;
} else if ( rtP . Break1_Value < rtP . u51_LowerSat ) { rtB . cjuzvphzfa =
rtP . u51_LowerSat ; } else { rtB . cjuzvphzfa = rtP . Break1_Value ; } if (
rtP . Break2_Value > rtP . u52_UpperSat ) { rtB . hqhclugji4 = rtP .
u52_UpperSat ; } else if ( rtP . Break2_Value < rtP . u52_LowerSat ) { rtB .
hqhclugji4 = rtP . u52_LowerSat ; } else { rtB . hqhclugji4 = rtP .
Break2_Value ; } if ( rtP . Break3_Value > rtP . u53_UpperSat ) { rtB .
bve50u2tic = rtP . u53_UpperSat ; } else if ( rtP . Break3_Value < rtP .
u53_LowerSat ) { rtB . bve50u2tic = rtP . u53_LowerSat ; } else { rtB .
bve50u2tic = rtP . Break3_Value ; } if ( rtP . Break4_Value > rtP .
u54_UpperSat ) { rtB . ezre3gedwd = rtP . u54_UpperSat ; } else if ( rtP .
Break4_Value < rtP . u54_LowerSat ) { rtB . ezre3gedwd = rtP . u54_LowerSat ;
} else { rtB . ezre3gedwd = rtP . Break4_Value ; } if ( rtP . Break5_Value >
rtP . u55_UpperSat ) { rtB . bf4kcmzwgq = rtP . u55_UpperSat ; } else if (
rtP . Break5_Value < rtP . u55_LowerSat ) { rtB . bf4kcmzwgq = rtP .
u55_LowerSat ; } else { rtB . bf4kcmzwgq = rtP . Break5_Value ; }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) {
NeslSimulationData * simulationData ; real_T time ; boolean_T tmp ; real_T
tmp_p [ 24 ] ; int_T tmp_e [ 7 ] ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; char * msg ; int32_T k ; real_T * lastU
; real_T time_p ; real_T tmp_i [ 16 ] ; int_T tmp_m [ 5 ] ; real_T time_e ;
real_T tmp_g [ 28 ] ; int_T tmp_j [ 8 ] ; real_T time_i ; real_T tmp_f [ 16 ]
; int_T tmp_c [ 5 ] ; real_T time_m ; real_T tmp_k [ 16 ] ; int_T tmp_b [ 5 ]
; real_T time_g ; real_T tmp_n [ 16 ] ; int_T tmp_l [ 5 ] ; real_T time_j ;
real_T tmp_d [ 16 ] ; int_T tmp_o [ 5 ] ; simulationData = (
NeslSimulationData * ) rtDW . mkeckqut4f ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 28 ;
simulationData -> mData -> mContStates . mX = & rtX . hbu5otnenm [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 1 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . pw2pe5xudt ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
izcotr23dr ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
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
ggdoah4lpg [ 0 ] ; tmp_p [ 1 ] = rtB . ggdoah4lpg [ 1 ] ; tmp_p [ 2 ] = rtB .
ggdoah4lpg [ 2 ] ; tmp_p [ 3 ] = rtB . ggdoah4lpg [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . myut2kekff [ 0 ] ; tmp_p [ 5 ] = rtB . myut2kekff [ 1 ] ;
tmp_p [ 6 ] = rtB . myut2kekff [ 2 ] ; tmp_p [ 7 ] = rtB . myut2kekff [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . gloyjgyfuk [ 0 ] ; tmp_p [ 9 ] = rtB .
gloyjgyfuk [ 1 ] ; tmp_p [ 10 ] = rtB . gloyjgyfuk [ 2 ] ; tmp_p [ 11 ] = rtB
. gloyjgyfuk [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . oi2jfcurfm [ 0 ]
; tmp_p [ 13 ] = rtB . oi2jfcurfm [ 1 ] ; tmp_p [ 14 ] = rtB . oi2jfcurfm [ 2
] ; tmp_p [ 15 ] = rtB . oi2jfcurfm [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . j5gqirfivu [ 0 ] ; tmp_p [ 17 ] = rtB . j5gqirfivu [ 1 ] ; tmp_p [ 18 ]
= rtB . j5gqirfivu [ 2 ] ; tmp_p [ 19 ] = rtB . j5gqirfivu [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . ijej1daezt [ 0 ] ; tmp_p [ 21 ] = rtB .
ijej1daezt [ 1 ] ; tmp_p [ 22 ] = rtB . ijej1daezt [ 2 ] ; tmp_p [ 23 ] = rtB
. ijej1daezt [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . maabazmrfg ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . bxxdhn0h2f ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . osuwpyfhhy = rtDW . nvsr3bfete
; } if ( rtDW . il1m24s12p == ( rtInf ) ) { rtDW . il1m24s12p = ssGetT ( rtS
) ; lastU = & rtDW . dkqlehltbl ; } else if ( rtDW . kzugk1exec == ( rtInf )
) { rtDW . kzugk1exec = ssGetT ( rtS ) ; lastU = & rtDW . girpkbb0k4 ; } else
if ( rtDW . il1m24s12p < rtDW . kzugk1exec ) { rtDW . il1m24s12p = ssGetT (
rtS ) ; lastU = & rtDW . dkqlehltbl ; } else { rtDW . kzugk1exec = ssGetT (
rtS ) ; lastU = & rtDW . girpkbb0k4 ; } * lastU = rtB . ladvsqy4po ; if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . n1egvt1ecq = rtDW . o1zzawxzxl ; }
if ( rtDW . hf5ayypcbu == ( rtInf ) ) { rtDW . hf5ayypcbu = ssGetT ( rtS ) ;
lastU = & rtDW . pc3l0jaikj ; } else if ( rtDW . od5nlggen3 == ( rtInf ) ) {
rtDW . od5nlggen3 = ssGetT ( rtS ) ; lastU = & rtDW . h5kjdlwr41 ; } else if
( rtDW . hf5ayypcbu < rtDW . od5nlggen3 ) { rtDW . hf5ayypcbu = ssGetT ( rtS
) ; lastU = & rtDW . pc3l0jaikj ; } else { rtDW . od5nlggen3 = ssGetT ( rtS )
; lastU = & rtDW . h5kjdlwr41 ; } * lastU = rtB . iztuma3owj ; if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . fxsfevo34c = rtDW . moyjmke4l3 ; }
if ( rtDW . ghph52rdce == ( rtInf ) ) { rtDW . ghph52rdce = ssGetT ( rtS ) ;
lastU = & rtDW . lagmo53nka ; } else if ( rtDW . cnn05julux == ( rtInf ) ) {
rtDW . cnn05julux = ssGetT ( rtS ) ; lastU = & rtDW . cwizofgkej ; } else if
( rtDW . ghph52rdce < rtDW . cnn05julux ) { rtDW . ghph52rdce = ssGetT ( rtS
) ; lastU = & rtDW . lagmo53nka ; } else { rtDW . cnn05julux = ssGetT ( rtS )
; lastU = & rtDW . cwizofgkej ; } * lastU = rtB . p2n0iwadpz ; if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . n0cpdtot23 = rtDW . ifix50azhp ; }
if ( rtDW . ksz3qgvme2 == ( rtInf ) ) { rtDW . ksz3qgvme2 = ssGetT ( rtS ) ;
lastU = & rtDW . ahdgarqwel ; } else if ( rtDW . dc2k3ryr1h == ( rtInf ) ) {
rtDW . dc2k3ryr1h = ssGetT ( rtS ) ; lastU = & rtDW . noevtlpdnr ; } else if
( rtDW . ksz3qgvme2 < rtDW . dc2k3ryr1h ) { rtDW . ksz3qgvme2 = ssGetT ( rtS
) ; lastU = & rtDW . ahdgarqwel ; } else { rtDW . dc2k3ryr1h = ssGetT ( rtS )
; lastU = & rtDW . noevtlpdnr ; } * lastU = rtB . hqaumiwlfi ; if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . dhnlnnkmax = rtDW . mnro1vxwzd ; }
if ( rtDW . lsnzpaafr0 == ( rtInf ) ) { rtDW . lsnzpaafr0 = ssGetT ( rtS ) ;
lastU = & rtDW . jea0fzolcb ; } else if ( rtDW . kecuqjxdts == ( rtInf ) ) {
rtDW . kecuqjxdts = ssGetT ( rtS ) ; lastU = & rtDW . iagl52grv4 ; } else if
( rtDW . lsnzpaafr0 < rtDW . kecuqjxdts ) { rtDW . lsnzpaafr0 = ssGetT ( rtS
) ; lastU = & rtDW . jea0fzolcb ; } else { rtDW . kecuqjxdts = ssGetT ( rtS )
; lastU = & rtDW . iagl52grv4 ; } * lastU = rtB . oaqctdd1z4 ; if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . g55yrwtthh = rtDW . oltxmhvdjk ; }
if ( rtDW . btgoxpvg4h == ( rtInf ) ) { rtDW . btgoxpvg4h = ssGetT ( rtS ) ;
lastU = & rtDW . opadpf4fq0 ; } else if ( rtDW . nbytpsj5tm == ( rtInf ) ) {
rtDW . nbytpsj5tm = ssGetT ( rtS ) ; lastU = & rtDW . gzyqtgku3f ; } else if
( rtDW . btgoxpvg4h < rtDW . nbytpsj5tm ) { rtDW . btgoxpvg4h = ssGetT ( rtS
) ; lastU = & rtDW . opadpf4fq0 ; } else { rtDW . nbytpsj5tm = ssGetT ( rtS )
; lastU = & rtDW . gzyqtgku3f ; } * lastU = rtB . asyj1ffrm5 ; simulationData
= ( NeslSimulationData * ) rtDW . b2ulm0qurb ; time_p = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_p ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . josyacetrj [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . pw3owok3vx ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
cjrqthhfyx [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
oawdzxyk1g [ 0 ] ; tmp_i [ 1 ] = rtB . oawdzxyk1g [ 1 ] ; tmp_i [ 2 ] = rtB .
oawdzxyk1g [ 2 ] ; tmp_i [ 3 ] = rtB . oawdzxyk1g [ 3 ] ; tmp_m [ 1 ] = 4 ;
tmp_i [ 4 ] = rtB . go1xfp1pfe [ 0 ] ; tmp_i [ 5 ] = rtB . go1xfp1pfe [ 1 ] ;
tmp_i [ 6 ] = rtB . go1xfp1pfe [ 2 ] ; tmp_i [ 7 ] = rtB . go1xfp1pfe [ 3 ] ;
tmp_m [ 2 ] = 8 ; tmp_i [ 8 ] = rtB . inipmccc32 [ 0 ] ; tmp_i [ 9 ] = rtB .
inipmccc32 [ 1 ] ; tmp_i [ 10 ] = rtB . inipmccc32 [ 2 ] ; tmp_i [ 11 ] = rtB
. inipmccc32 [ 3 ] ; tmp_m [ 3 ] = 12 ; tmp_i [ 12 ] = rtB . nny34gtevo [ 0 ]
; tmp_i [ 13 ] = rtB . nny34gtevo [ 1 ] ; tmp_i [ 14 ] = rtB . nny34gtevo [ 2
] ; tmp_i [ 15 ] = rtB . nny34gtevo [ 3 ] ; tmp_m [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_i [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_m [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . aoztfxt3k3 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . p3qsy4ac3i ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . ir5o5sem4f ; time_e = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_e ; simulationData -> mData -> mContStates . mN = 8 ;
simulationData -> mData -> mContStates . mX = & rtX . en2pd5luhl [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . fcg5fdf0oq ; simulationData -> mData ->
mModeVector . mN = 10 ; simulationData -> mData -> mModeVector . mX = & rtDW
. aha3ttluaz [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
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
o10dy052cl [ 0 ] ; tmp_g [ 1 ] = rtB . o10dy052cl [ 1 ] ; tmp_g [ 2 ] = rtB .
o10dy052cl [ 2 ] ; tmp_g [ 3 ] = rtB . o10dy052cl [ 3 ] ; tmp_j [ 1 ] = 4 ;
tmp_g [ 4 ] = rtB . kwsufxstz0 [ 0 ] ; tmp_g [ 5 ] = rtB . kwsufxstz0 [ 1 ] ;
tmp_g [ 6 ] = rtB . kwsufxstz0 [ 2 ] ; tmp_g [ 7 ] = rtB . kwsufxstz0 [ 3 ] ;
tmp_j [ 2 ] = 8 ; tmp_g [ 8 ] = rtB . e5djqxbatk [ 0 ] ; tmp_g [ 9 ] = rtB .
e5djqxbatk [ 1 ] ; tmp_g [ 10 ] = rtB . e5djqxbatk [ 2 ] ; tmp_g [ 11 ] = rtB
. e5djqxbatk [ 3 ] ; tmp_j [ 3 ] = 12 ; tmp_g [ 12 ] = rtB . hg55o3nyo3 [ 0 ]
; tmp_g [ 13 ] = rtB . hg55o3nyo3 [ 1 ] ; tmp_g [ 14 ] = rtB . hg55o3nyo3 [ 2
] ; tmp_g [ 15 ] = rtB . hg55o3nyo3 [ 3 ] ; tmp_j [ 4 ] = 16 ; tmp_g [ 16 ] =
rtB . pnxfeg3myh [ 0 ] ; tmp_g [ 17 ] = rtB . pnxfeg3myh [ 1 ] ; tmp_g [ 18 ]
= rtB . pnxfeg3myh [ 2 ] ; tmp_g [ 19 ] = rtB . pnxfeg3myh [ 3 ] ; tmp_j [ 5
] = 20 ; tmp_g [ 20 ] = rtB . d432tayljp [ 0 ] ; tmp_g [ 21 ] = rtB .
d432tayljp [ 1 ] ; tmp_g [ 22 ] = rtB . d432tayljp [ 2 ] ; tmp_g [ 23 ] = rtB
. d432tayljp [ 3 ] ; tmp_j [ 6 ] = 24 ; tmp_g [ 24 ] = rtB . clw3kkg5lz [ 0 ]
; tmp_g [ 25 ] = rtB . clw3kkg5lz [ 1 ] ; tmp_g [ 26 ] = rtB . clw3kkg5lz [ 2
] ; tmp_g [ 27 ] = rtB . clw3kkg5lz [ 3 ] ; tmp_j [ 7 ] = 28 ; simulationData
-> mData -> mInputValues . mN = 28 ; simulationData -> mData -> mInputValues
. mX = & tmp_g [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 8 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_j [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . jspmsolpsx ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . mtcob204rl ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . mvbznvevad ; time_i = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_i ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . hywdustkrw [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . br0nvfzzdo ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
huqf5ahxl5 [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
h2xuzybx31 [ 0 ] ; tmp_f [ 1 ] = rtB . h2xuzybx31 [ 1 ] ; tmp_f [ 2 ] = rtB .
h2xuzybx31 [ 2 ] ; tmp_f [ 3 ] = rtB . h2xuzybx31 [ 3 ] ; tmp_c [ 1 ] = 4 ;
tmp_f [ 4 ] = rtB . aalhpeekcz [ 0 ] ; tmp_f [ 5 ] = rtB . aalhpeekcz [ 1 ] ;
tmp_f [ 6 ] = rtB . aalhpeekcz [ 2 ] ; tmp_f [ 7 ] = rtB . aalhpeekcz [ 3 ] ;
tmp_c [ 2 ] = 8 ; tmp_f [ 8 ] = rtB . n2nhbhgaoj [ 0 ] ; tmp_f [ 9 ] = rtB .
n2nhbhgaoj [ 1 ] ; tmp_f [ 10 ] = rtB . n2nhbhgaoj [ 2 ] ; tmp_f [ 11 ] = rtB
. n2nhbhgaoj [ 3 ] ; tmp_c [ 3 ] = 12 ; tmp_f [ 12 ] = rtB . ji3vchq3tw [ 0 ]
; tmp_f [ 13 ] = rtB . ji3vchq3tw [ 1 ] ; tmp_f [ 14 ] = rtB . ji3vchq3tw [ 2
] ; tmp_f [ 15 ] = rtB . ji3vchq3tw [ 3 ] ; tmp_c [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_f [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_c [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . j0ckgxpmx5 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . esgd45ifwg ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . ehoo31suuw ; time_m = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_m ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . l0e0xe2uy4 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . oogtzxflgo ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
eofsatdfl4 [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
j2hdft1opa [ 0 ] ; tmp_k [ 1 ] = rtB . j2hdft1opa [ 1 ] ; tmp_k [ 2 ] = rtB .
j2hdft1opa [ 2 ] ; tmp_k [ 3 ] = rtB . j2hdft1opa [ 3 ] ; tmp_b [ 1 ] = 4 ;
tmp_k [ 4 ] = rtB . lkp0ijlter [ 0 ] ; tmp_k [ 5 ] = rtB . lkp0ijlter [ 1 ] ;
tmp_k [ 6 ] = rtB . lkp0ijlter [ 2 ] ; tmp_k [ 7 ] = rtB . lkp0ijlter [ 3 ] ;
tmp_b [ 2 ] = 8 ; tmp_k [ 8 ] = rtB . c3sg5zcxif [ 0 ] ; tmp_k [ 9 ] = rtB .
c3sg5zcxif [ 1 ] ; tmp_k [ 10 ] = rtB . c3sg5zcxif [ 2 ] ; tmp_k [ 11 ] = rtB
. c3sg5zcxif [ 3 ] ; tmp_b [ 3 ] = 12 ; tmp_k [ 12 ] = rtB . pv1aefa4ak [ 0 ]
; tmp_k [ 13 ] = rtB . pv1aefa4ak [ 1 ] ; tmp_k [ 14 ] = rtB . pv1aefa4ak [ 2
] ; tmp_k [ 15 ] = rtB . pv1aefa4ak [ 3 ] ; tmp_b [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_k [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_b [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . eqaph1hnr4 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . hsnnp23xx3 ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . hp2ndf5vf3 ; time_g = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_g ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . bp3pw3plbw [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . fhsxv1yddz ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
l0sp34a5vt [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
mmtghsbk5w [ 0 ] ; tmp_n [ 1 ] = rtB . mmtghsbk5w [ 1 ] ; tmp_n [ 2 ] = rtB .
mmtghsbk5w [ 2 ] ; tmp_n [ 3 ] = rtB . mmtghsbk5w [ 3 ] ; tmp_l [ 1 ] = 4 ;
tmp_n [ 4 ] = rtB . cqr0wtwuy4 [ 0 ] ; tmp_n [ 5 ] = rtB . cqr0wtwuy4 [ 1 ] ;
tmp_n [ 6 ] = rtB . cqr0wtwuy4 [ 2 ] ; tmp_n [ 7 ] = rtB . cqr0wtwuy4 [ 3 ] ;
tmp_l [ 2 ] = 8 ; tmp_n [ 8 ] = rtB . dwr0nxvsbj [ 0 ] ; tmp_n [ 9 ] = rtB .
dwr0nxvsbj [ 1 ] ; tmp_n [ 10 ] = rtB . dwr0nxvsbj [ 2 ] ; tmp_n [ 11 ] = rtB
. dwr0nxvsbj [ 3 ] ; tmp_l [ 3 ] = 12 ; tmp_n [ 12 ] = rtB . kdsjhcimkb [ 0 ]
; tmp_n [ 13 ] = rtB . kdsjhcimkb [ 1 ] ; tmp_n [ 14 ] = rtB . kdsjhcimkb [ 2
] ; tmp_n [ 15 ] = rtB . kdsjhcimkb [ 3 ] ; tmp_l [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_n [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_l [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . cq5hsabgd5 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . pfajoqccjj ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . onerx1yfb2 ; time_j = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_j ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . fxz224311k [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . cwd4sm1def ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
iwcrwapmy1 [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
ovfjzuhpy1 [ 0 ] ; tmp_d [ 1 ] = rtB . ovfjzuhpy1 [ 1 ] ; tmp_d [ 2 ] = rtB .
ovfjzuhpy1 [ 2 ] ; tmp_d [ 3 ] = rtB . ovfjzuhpy1 [ 3 ] ; tmp_o [ 1 ] = 4 ;
tmp_d [ 4 ] = rtB . got3v1adxi [ 0 ] ; tmp_d [ 5 ] = rtB . got3v1adxi [ 1 ] ;
tmp_d [ 6 ] = rtB . got3v1adxi [ 2 ] ; tmp_d [ 7 ] = rtB . got3v1adxi [ 3 ] ;
tmp_o [ 2 ] = 8 ; tmp_d [ 8 ] = rtB . dgpujci0nh [ 0 ] ; tmp_d [ 9 ] = rtB .
dgpujci0nh [ 1 ] ; tmp_d [ 10 ] = rtB . dgpujci0nh [ 2 ] ; tmp_d [ 11 ] = rtB
. dgpujci0nh [ 3 ] ; tmp_o [ 3 ] = 12 ; tmp_d [ 12 ] = rtB . bezsqifqzd [ 0 ]
; tmp_d [ 13 ] = rtB . bezsqifqzd [ 1 ] ; tmp_d [ 14 ] = rtB . bezsqifqzd [ 2
] ; tmp_d [ 15 ] = rtB . bezsqifqzd [ 3 ] ; tmp_o [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_d [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_o [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . geu4q0xuqi ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . o4y0j0g15n ,
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
mkeckqut4f ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN =
1 ; simulationData -> mData -> mTime . mX = & time ; simulationData -> mData
-> mContStates . mN = 28 ; simulationData -> mData -> mContStates . mX = &
rtX . hbu5otnenm [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 1 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . pw2pe5xudt ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . izcotr23dr ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
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
ggdoah4lpg [ 0 ] ; tmp_p [ 1 ] = rtB . ggdoah4lpg [ 1 ] ; tmp_p [ 2 ] = rtB .
ggdoah4lpg [ 2 ] ; tmp_p [ 3 ] = rtB . ggdoah4lpg [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . myut2kekff [ 0 ] ; tmp_p [ 5 ] = rtB . myut2kekff [ 1 ] ;
tmp_p [ 6 ] = rtB . myut2kekff [ 2 ] ; tmp_p [ 7 ] = rtB . myut2kekff [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . gloyjgyfuk [ 0 ] ; tmp_p [ 9 ] = rtB .
gloyjgyfuk [ 1 ] ; tmp_p [ 10 ] = rtB . gloyjgyfuk [ 2 ] ; tmp_p [ 11 ] = rtB
. gloyjgyfuk [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . oi2jfcurfm [ 0 ]
; tmp_p [ 13 ] = rtB . oi2jfcurfm [ 1 ] ; tmp_p [ 14 ] = rtB . oi2jfcurfm [ 2
] ; tmp_p [ 15 ] = rtB . oi2jfcurfm [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . j5gqirfivu [ 0 ] ; tmp_p [ 17 ] = rtB . j5gqirfivu [ 1 ] ; tmp_p [ 18 ]
= rtB . j5gqirfivu [ 2 ] ; tmp_p [ 19 ] = rtB . j5gqirfivu [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . ijej1daezt [ 0 ] ; tmp_p [ 21 ] = rtB .
ijej1daezt [ 1 ] ; tmp_p [ 22 ] = rtB . ijej1daezt [ 2 ] ; tmp_p [ 23 ] = rtB
. ijej1daezt [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 28 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> hbu5otnenm [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . maabazmrfg ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . bxxdhn0h2f ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } _rtXdot -> k32vukczvp = rtB . ladvsqy4po ; _rtXdot -> cim0sdziv1 = rtB
. iztuma3owj ; _rtXdot -> jq40kv3kof = rtB . p2n0iwadpz ; _rtXdot ->
i0jaxz1ns1 = rtB . hqaumiwlfi ; _rtXdot -> kpt4tgks43 = rtB . oaqctdd1z4 ;
_rtXdot -> bgm2jlczsl = rtB . asyj1ffrm5 ; simulationData = (
NeslSimulationData * ) rtDW . b2ulm0qurb ; time_p = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_p ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . josyacetrj [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . pw3owok3vx ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
cjrqthhfyx [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
oawdzxyk1g [ 0 ] ; tmp_m [ 1 ] = rtB . oawdzxyk1g [ 1 ] ; tmp_m [ 2 ] = rtB .
oawdzxyk1g [ 2 ] ; tmp_m [ 3 ] = rtB . oawdzxyk1g [ 3 ] ; tmp_g [ 1 ] = 4 ;
tmp_m [ 4 ] = rtB . go1xfp1pfe [ 0 ] ; tmp_m [ 5 ] = rtB . go1xfp1pfe [ 1 ] ;
tmp_m [ 6 ] = rtB . go1xfp1pfe [ 2 ] ; tmp_m [ 7 ] = rtB . go1xfp1pfe [ 3 ] ;
tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB . inipmccc32 [ 0 ] ; tmp_m [ 9 ] = rtB .
inipmccc32 [ 1 ] ; tmp_m [ 10 ] = rtB . inipmccc32 [ 2 ] ; tmp_m [ 11 ] = rtB
. inipmccc32 [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] = rtB . nny34gtevo [ 0 ]
; tmp_m [ 13 ] = rtB . nny34gtevo [ 1 ] ; tmp_m [ 14 ] = rtB . nny34gtevo [ 2
] ; tmp_m [ 15 ] = rtB . nny34gtevo [ 3 ] ; tmp_g [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
simulationData -> mData -> mDx . mN = 4 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> josyacetrj [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . aoztfxt3k3 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . p3qsy4ac3i ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . ir5o5sem4f ; time_e =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_e ; simulationData -> mData -> mContStates .
mN = 8 ; simulationData -> mData -> mContStates . mX = & rtX . en2pd5luhl [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . fcg5fdf0oq ; simulationData -> mData ->
mModeVector . mN = 10 ; simulationData -> mData -> mModeVector . mX = & rtDW
. aha3ttluaz [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
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
o10dy052cl [ 0 ] ; tmp_j [ 1 ] = rtB . o10dy052cl [ 1 ] ; tmp_j [ 2 ] = rtB .
o10dy052cl [ 2 ] ; tmp_j [ 3 ] = rtB . o10dy052cl [ 3 ] ; tmp_f [ 1 ] = 4 ;
tmp_j [ 4 ] = rtB . kwsufxstz0 [ 0 ] ; tmp_j [ 5 ] = rtB . kwsufxstz0 [ 1 ] ;
tmp_j [ 6 ] = rtB . kwsufxstz0 [ 2 ] ; tmp_j [ 7 ] = rtB . kwsufxstz0 [ 3 ] ;
tmp_f [ 2 ] = 8 ; tmp_j [ 8 ] = rtB . e5djqxbatk [ 0 ] ; tmp_j [ 9 ] = rtB .
e5djqxbatk [ 1 ] ; tmp_j [ 10 ] = rtB . e5djqxbatk [ 2 ] ; tmp_j [ 11 ] = rtB
. e5djqxbatk [ 3 ] ; tmp_f [ 3 ] = 12 ; tmp_j [ 12 ] = rtB . hg55o3nyo3 [ 0 ]
; tmp_j [ 13 ] = rtB . hg55o3nyo3 [ 1 ] ; tmp_j [ 14 ] = rtB . hg55o3nyo3 [ 2
] ; tmp_j [ 15 ] = rtB . hg55o3nyo3 [ 3 ] ; tmp_f [ 4 ] = 16 ; tmp_j [ 16 ] =
rtB . pnxfeg3myh [ 0 ] ; tmp_j [ 17 ] = rtB . pnxfeg3myh [ 1 ] ; tmp_j [ 18 ]
= rtB . pnxfeg3myh [ 2 ] ; tmp_j [ 19 ] = rtB . pnxfeg3myh [ 3 ] ; tmp_f [ 5
] = 20 ; tmp_j [ 20 ] = rtB . d432tayljp [ 0 ] ; tmp_j [ 21 ] = rtB .
d432tayljp [ 1 ] ; tmp_j [ 22 ] = rtB . d432tayljp [ 2 ] ; tmp_j [ 23 ] = rtB
. d432tayljp [ 3 ] ; tmp_f [ 6 ] = 24 ; tmp_j [ 24 ] = rtB . clw3kkg5lz [ 0 ]
; tmp_j [ 25 ] = rtB . clw3kkg5lz [ 1 ] ; tmp_j [ 26 ] = rtB . clw3kkg5lz [ 2
] ; tmp_j [ 27 ] = rtB . clw3kkg5lz [ 3 ] ; tmp_f [ 7 ] = 28 ; simulationData
-> mData -> mInputValues . mN = 28 ; simulationData -> mData -> mInputValues
. mX = & tmp_j [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 8 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_f [ 0 ] ;
simulationData -> mData -> mDx . mN = 8 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> en2pd5luhl [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . jspmsolpsx ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . mtcob204rl ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . mvbznvevad ; time_i =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_i ; simulationData -> mData -> mContStates .
mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX . hywdustkrw [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . br0nvfzzdo ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
huqf5ahxl5 [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
h2xuzybx31 [ 0 ] ; tmp_c [ 1 ] = rtB . h2xuzybx31 [ 1 ] ; tmp_c [ 2 ] = rtB .
h2xuzybx31 [ 2 ] ; tmp_c [ 3 ] = rtB . h2xuzybx31 [ 3 ] ; tmp_k [ 1 ] = 4 ;
tmp_c [ 4 ] = rtB . aalhpeekcz [ 0 ] ; tmp_c [ 5 ] = rtB . aalhpeekcz [ 1 ] ;
tmp_c [ 6 ] = rtB . aalhpeekcz [ 2 ] ; tmp_c [ 7 ] = rtB . aalhpeekcz [ 3 ] ;
tmp_k [ 2 ] = 8 ; tmp_c [ 8 ] = rtB . n2nhbhgaoj [ 0 ] ; tmp_c [ 9 ] = rtB .
n2nhbhgaoj [ 1 ] ; tmp_c [ 10 ] = rtB . n2nhbhgaoj [ 2 ] ; tmp_c [ 11 ] = rtB
. n2nhbhgaoj [ 3 ] ; tmp_k [ 3 ] = 12 ; tmp_c [ 12 ] = rtB . ji3vchq3tw [ 0 ]
; tmp_c [ 13 ] = rtB . ji3vchq3tw [ 1 ] ; tmp_c [ 14 ] = rtB . ji3vchq3tw [ 2
] ; tmp_c [ 15 ] = rtB . ji3vchq3tw [ 3 ] ; tmp_k [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_c [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_k [ 0 ] ;
simulationData -> mData -> mDx . mN = 4 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> hywdustkrw [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . j0ckgxpmx5 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . esgd45ifwg ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . ehoo31suuw ; time_m =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_m ; simulationData -> mData -> mContStates .
mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX . l0e0xe2uy4 [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . oogtzxflgo ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
eofsatdfl4 [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
j2hdft1opa [ 0 ] ; tmp_b [ 1 ] = rtB . j2hdft1opa [ 1 ] ; tmp_b [ 2 ] = rtB .
j2hdft1opa [ 2 ] ; tmp_b [ 3 ] = rtB . j2hdft1opa [ 3 ] ; tmp_n [ 1 ] = 4 ;
tmp_b [ 4 ] = rtB . lkp0ijlter [ 0 ] ; tmp_b [ 5 ] = rtB . lkp0ijlter [ 1 ] ;
tmp_b [ 6 ] = rtB . lkp0ijlter [ 2 ] ; tmp_b [ 7 ] = rtB . lkp0ijlter [ 3 ] ;
tmp_n [ 2 ] = 8 ; tmp_b [ 8 ] = rtB . c3sg5zcxif [ 0 ] ; tmp_b [ 9 ] = rtB .
c3sg5zcxif [ 1 ] ; tmp_b [ 10 ] = rtB . c3sg5zcxif [ 2 ] ; tmp_b [ 11 ] = rtB
. c3sg5zcxif [ 3 ] ; tmp_n [ 3 ] = 12 ; tmp_b [ 12 ] = rtB . pv1aefa4ak [ 0 ]
; tmp_b [ 13 ] = rtB . pv1aefa4ak [ 1 ] ; tmp_b [ 14 ] = rtB . pv1aefa4ak [ 2
] ; tmp_b [ 15 ] = rtB . pv1aefa4ak [ 3 ] ; tmp_n [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_b [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_n [ 0 ] ;
simulationData -> mData -> mDx . mN = 4 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> l0e0xe2uy4 [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . eqaph1hnr4 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . hsnnp23xx3 ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . hp2ndf5vf3 ; time_g =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_g ; simulationData -> mData -> mContStates .
mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX . bp3pw3plbw [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . fhsxv1yddz ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
l0sp34a5vt [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
mmtghsbk5w [ 0 ] ; tmp_l [ 1 ] = rtB . mmtghsbk5w [ 1 ] ; tmp_l [ 2 ] = rtB .
mmtghsbk5w [ 2 ] ; tmp_l [ 3 ] = rtB . mmtghsbk5w [ 3 ] ; tmp_d [ 1 ] = 4 ;
tmp_l [ 4 ] = rtB . cqr0wtwuy4 [ 0 ] ; tmp_l [ 5 ] = rtB . cqr0wtwuy4 [ 1 ] ;
tmp_l [ 6 ] = rtB . cqr0wtwuy4 [ 2 ] ; tmp_l [ 7 ] = rtB . cqr0wtwuy4 [ 3 ] ;
tmp_d [ 2 ] = 8 ; tmp_l [ 8 ] = rtB . dwr0nxvsbj [ 0 ] ; tmp_l [ 9 ] = rtB .
dwr0nxvsbj [ 1 ] ; tmp_l [ 10 ] = rtB . dwr0nxvsbj [ 2 ] ; tmp_l [ 11 ] = rtB
. dwr0nxvsbj [ 3 ] ; tmp_d [ 3 ] = 12 ; tmp_l [ 12 ] = rtB . kdsjhcimkb [ 0 ]
; tmp_l [ 13 ] = rtB . kdsjhcimkb [ 1 ] ; tmp_l [ 14 ] = rtB . kdsjhcimkb [ 2
] ; tmp_l [ 15 ] = rtB . kdsjhcimkb [ 3 ] ; tmp_d [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_l [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_d [ 0 ] ;
simulationData -> mData -> mDx . mN = 4 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> bp3pw3plbw [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . cq5hsabgd5 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . pfajoqccjj ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . onerx1yfb2 ; time_j =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_j ; simulationData -> mData -> mContStates .
mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX . fxz224311k [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . cwd4sm1def ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
iwcrwapmy1 [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
ovfjzuhpy1 [ 0 ] ; tmp_o [ 1 ] = rtB . ovfjzuhpy1 [ 1 ] ; tmp_o [ 2 ] = rtB .
ovfjzuhpy1 [ 2 ] ; tmp_o [ 3 ] = rtB . ovfjzuhpy1 [ 3 ] ; tmp_dz [ 1 ] = 4 ;
tmp_o [ 4 ] = rtB . got3v1adxi [ 0 ] ; tmp_o [ 5 ] = rtB . got3v1adxi [ 1 ] ;
tmp_o [ 6 ] = rtB . got3v1adxi [ 2 ] ; tmp_o [ 7 ] = rtB . got3v1adxi [ 3 ] ;
tmp_dz [ 2 ] = 8 ; tmp_o [ 8 ] = rtB . dgpujci0nh [ 0 ] ; tmp_o [ 9 ] = rtB .
dgpujci0nh [ 1 ] ; tmp_o [ 10 ] = rtB . dgpujci0nh [ 2 ] ; tmp_o [ 11 ] = rtB
. dgpujci0nh [ 3 ] ; tmp_dz [ 3 ] = 12 ; tmp_o [ 12 ] = rtB . bezsqifqzd [ 0
] ; tmp_o [ 13 ] = rtB . bezsqifqzd [ 1 ] ; tmp_o [ 14 ] = rtB . bezsqifqzd [
2 ] ; tmp_o [ 15 ] = rtB . bezsqifqzd [ 3 ] ; tmp_dz [ 4 ] = 16 ;
simulationData -> mData -> mInputValues . mN = 16 ; simulationData -> mData
-> mInputValues . mX = & tmp_o [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_dz [ 0 ] ; simulationData -> mData -> mDx . mN = 4 ; simulationData ->
mData -> mDx . mX = & _rtXdot -> fxz224311k [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . geu4q0xuqi ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . o4y0j0g15n ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlProjection ( void ) { NeslSimulationData * simulationData ;
real_T time ; boolean_T tmp ; real_T tmp_p [ 24 ] ; int_T tmp_e [ 7 ] ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; int32_T tmp_i ; char * msg ; simulationData = ( NeslSimulationData * ) rtDW
. mkeckqut4f ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN
= 1 ; simulationData -> mData -> mTime . mX = & time ; simulationData ->
mData -> mContStates . mN = 28 ; simulationData -> mData -> mContStates . mX
= & rtX . hbu5otnenm [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 1
; simulationData -> mData -> mDiscStates . mX = & rtDW . pw2pe5xudt ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . izcotr23dr ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
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
ggdoah4lpg [ 0 ] ; tmp_p [ 1 ] = rtB . ggdoah4lpg [ 1 ] ; tmp_p [ 2 ] = rtB .
ggdoah4lpg [ 2 ] ; tmp_p [ 3 ] = rtB . ggdoah4lpg [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . myut2kekff [ 0 ] ; tmp_p [ 5 ] = rtB . myut2kekff [ 1 ] ;
tmp_p [ 6 ] = rtB . myut2kekff [ 2 ] ; tmp_p [ 7 ] = rtB . myut2kekff [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . gloyjgyfuk [ 0 ] ; tmp_p [ 9 ] = rtB .
gloyjgyfuk [ 1 ] ; tmp_p [ 10 ] = rtB . gloyjgyfuk [ 2 ] ; tmp_p [ 11 ] = rtB
. gloyjgyfuk [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . oi2jfcurfm [ 0 ]
; tmp_p [ 13 ] = rtB . oi2jfcurfm [ 1 ] ; tmp_p [ 14 ] = rtB . oi2jfcurfm [ 2
] ; tmp_p [ 15 ] = rtB . oi2jfcurfm [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . j5gqirfivu [ 0 ] ; tmp_p [ 17 ] = rtB . j5gqirfivu [ 1 ] ; tmp_p [ 18 ]
= rtB . j5gqirfivu [ 2 ] ; tmp_p [ 19 ] = rtB . j5gqirfivu [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . ijej1daezt [ 0 ] ; tmp_p [ 21 ] = rtB .
ijej1daezt [ 1 ] ; tmp_p [ 22 ] = rtB . ijej1daezt [ 2 ] ; tmp_p [ 23 ] = rtB
. ijej1daezt [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . maabazmrfg ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . bxxdhn0h2f ,
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
) ; simulationData = ( NeslSimulationData * ) rtDW . mkeckqut4f ; time =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time ; simulationData -> mData -> mContStates . mN
= 28 ; simulationData -> mData -> mContStates . mX = & rtX . hbu5otnenm [ 0 ]
; simulationData -> mData -> mDiscStates . mN = 1 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . pw2pe5xudt ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
izcotr23dr ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
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
ggdoah4lpg [ 0 ] ; tmp_p [ 1 ] = rtB . ggdoah4lpg [ 1 ] ; tmp_p [ 2 ] = rtB .
ggdoah4lpg [ 2 ] ; tmp_p [ 3 ] = rtB . ggdoah4lpg [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . myut2kekff [ 0 ] ; tmp_p [ 5 ] = rtB . myut2kekff [ 1 ] ;
tmp_p [ 6 ] = rtB . myut2kekff [ 2 ] ; tmp_p [ 7 ] = rtB . myut2kekff [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . gloyjgyfuk [ 0 ] ; tmp_p [ 9 ] = rtB .
gloyjgyfuk [ 1 ] ; tmp_p [ 10 ] = rtB . gloyjgyfuk [ 2 ] ; tmp_p [ 11 ] = rtB
. gloyjgyfuk [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . oi2jfcurfm [ 0 ]
; tmp_p [ 13 ] = rtB . oi2jfcurfm [ 1 ] ; tmp_p [ 14 ] = rtB . oi2jfcurfm [ 2
] ; tmp_p [ 15 ] = rtB . oi2jfcurfm [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . j5gqirfivu [ 0 ] ; tmp_p [ 17 ] = rtB . j5gqirfivu [ 1 ] ; tmp_p [ 18 ]
= rtB . j5gqirfivu [ 2 ] ; tmp_p [ 19 ] = rtB . j5gqirfivu [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . ijej1daezt [ 0 ] ; tmp_p [ 21 ] = rtB .
ijej1daezt [ 1 ] ; tmp_p [ 22 ] = rtB . ijej1daezt [ 2 ] ; tmp_p [ 23 ] = rtB
. ijej1daezt [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 28 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> hbu5otnenm [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . maabazmrfg ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . bxxdhn0h2f ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } _rtXdot -> k32vukczvp = rtB . ladvsqy4po ; _rtXdot -> cim0sdziv1 = rtB
. iztuma3owj ; _rtXdot -> jq40kv3kof = rtB . p2n0iwadpz ; _rtXdot ->
i0jaxz1ns1 = rtB . hqaumiwlfi ; _rtXdot -> kpt4tgks43 = rtB . oaqctdd1z4 ;
_rtXdot -> bgm2jlczsl = rtB . asyj1ffrm5 ; simulationData = (
NeslSimulationData * ) rtDW . b2ulm0qurb ; time_p = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_p ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . josyacetrj [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . pw3owok3vx ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
cjrqthhfyx [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
oawdzxyk1g [ 0 ] ; tmp_m [ 1 ] = rtB . oawdzxyk1g [ 1 ] ; tmp_m [ 2 ] = rtB .
oawdzxyk1g [ 2 ] ; tmp_m [ 3 ] = rtB . oawdzxyk1g [ 3 ] ; tmp_g [ 1 ] = 4 ;
tmp_m [ 4 ] = rtB . go1xfp1pfe [ 0 ] ; tmp_m [ 5 ] = rtB . go1xfp1pfe [ 1 ] ;
tmp_m [ 6 ] = rtB . go1xfp1pfe [ 2 ] ; tmp_m [ 7 ] = rtB . go1xfp1pfe [ 3 ] ;
tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB . inipmccc32 [ 0 ] ; tmp_m [ 9 ] = rtB .
inipmccc32 [ 1 ] ; tmp_m [ 10 ] = rtB . inipmccc32 [ 2 ] ; tmp_m [ 11 ] = rtB
. inipmccc32 [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] = rtB . nny34gtevo [ 0 ]
; tmp_m [ 13 ] = rtB . nny34gtevo [ 1 ] ; tmp_m [ 14 ] = rtB . nny34gtevo [ 2
] ; tmp_m [ 15 ] = rtB . nny34gtevo [ 3 ] ; tmp_g [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
simulationData -> mData -> mDx . mN = 4 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> josyacetrj [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . aoztfxt3k3 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . p3qsy4ac3i ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } simulationData = ( NeslSimulationData * ) rtDW . ir5o5sem4f ;
time_e = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_e ; simulationData -> mData ->
mContStates . mN = 8 ; simulationData -> mData -> mContStates . mX = & rtX .
en2pd5luhl [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . fcg5fdf0oq ;
simulationData -> mData -> mModeVector . mN = 10 ; simulationData -> mData ->
mModeVector . mX = & rtDW . aha3ttluaz [ 0 ] ; tmp = ( ssIsMajorTimeStep (
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
0 ] = 0 ; tmp_j [ 0 ] = rtB . o10dy052cl [ 0 ] ; tmp_j [ 1 ] = rtB .
o10dy052cl [ 1 ] ; tmp_j [ 2 ] = rtB . o10dy052cl [ 2 ] ; tmp_j [ 3 ] = rtB .
o10dy052cl [ 3 ] ; tmp_f [ 1 ] = 4 ; tmp_j [ 4 ] = rtB . kwsufxstz0 [ 0 ] ;
tmp_j [ 5 ] = rtB . kwsufxstz0 [ 1 ] ; tmp_j [ 6 ] = rtB . kwsufxstz0 [ 2 ] ;
tmp_j [ 7 ] = rtB . kwsufxstz0 [ 3 ] ; tmp_f [ 2 ] = 8 ; tmp_j [ 8 ] = rtB .
e5djqxbatk [ 0 ] ; tmp_j [ 9 ] = rtB . e5djqxbatk [ 1 ] ; tmp_j [ 10 ] = rtB
. e5djqxbatk [ 2 ] ; tmp_j [ 11 ] = rtB . e5djqxbatk [ 3 ] ; tmp_f [ 3 ] = 12
; tmp_j [ 12 ] = rtB . hg55o3nyo3 [ 0 ] ; tmp_j [ 13 ] = rtB . hg55o3nyo3 [ 1
] ; tmp_j [ 14 ] = rtB . hg55o3nyo3 [ 2 ] ; tmp_j [ 15 ] = rtB . hg55o3nyo3 [
3 ] ; tmp_f [ 4 ] = 16 ; tmp_j [ 16 ] = rtB . pnxfeg3myh [ 0 ] ; tmp_j [ 17 ]
= rtB . pnxfeg3myh [ 1 ] ; tmp_j [ 18 ] = rtB . pnxfeg3myh [ 2 ] ; tmp_j [ 19
] = rtB . pnxfeg3myh [ 3 ] ; tmp_f [ 5 ] = 20 ; tmp_j [ 20 ] = rtB .
d432tayljp [ 0 ] ; tmp_j [ 21 ] = rtB . d432tayljp [ 1 ] ; tmp_j [ 22 ] = rtB
. d432tayljp [ 2 ] ; tmp_j [ 23 ] = rtB . d432tayljp [ 3 ] ; tmp_f [ 6 ] = 24
; tmp_j [ 24 ] = rtB . clw3kkg5lz [ 0 ] ; tmp_j [ 25 ] = rtB . clw3kkg5lz [ 1
] ; tmp_j [ 26 ] = rtB . clw3kkg5lz [ 2 ] ; tmp_j [ 27 ] = rtB . clw3kkg5lz [
3 ] ; tmp_f [ 7 ] = 28 ; simulationData -> mData -> mInputValues . mN = 28 ;
simulationData -> mData -> mInputValues . mX = & tmp_j [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 8 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_f [ 0 ] ; simulationData -> mData -> mDx . mN = 8 ;
simulationData -> mData -> mDx . mX = & _rtXdot -> en2pd5luhl [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . jspmsolpsx ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . mtcob204rl ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } simulationData = ( NeslSimulationData * ) rtDW . mvbznvevad ;
time_i = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_i ; simulationData -> mData ->
mContStates . mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX .
hywdustkrw [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . br0nvfzzdo ;
simulationData -> mData -> mModeVector . mN = 5 ; simulationData -> mData ->
mModeVector . mX = & rtDW . huqf5ahxl5 [ 0 ] ; tmp = ( ssIsMajorTimeStep (
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
0 ] = 0 ; tmp_c [ 0 ] = rtB . h2xuzybx31 [ 0 ] ; tmp_c [ 1 ] = rtB .
h2xuzybx31 [ 1 ] ; tmp_c [ 2 ] = rtB . h2xuzybx31 [ 2 ] ; tmp_c [ 3 ] = rtB .
h2xuzybx31 [ 3 ] ; tmp_k [ 1 ] = 4 ; tmp_c [ 4 ] = rtB . aalhpeekcz [ 0 ] ;
tmp_c [ 5 ] = rtB . aalhpeekcz [ 1 ] ; tmp_c [ 6 ] = rtB . aalhpeekcz [ 2 ] ;
tmp_c [ 7 ] = rtB . aalhpeekcz [ 3 ] ; tmp_k [ 2 ] = 8 ; tmp_c [ 8 ] = rtB .
n2nhbhgaoj [ 0 ] ; tmp_c [ 9 ] = rtB . n2nhbhgaoj [ 1 ] ; tmp_c [ 10 ] = rtB
. n2nhbhgaoj [ 2 ] ; tmp_c [ 11 ] = rtB . n2nhbhgaoj [ 3 ] ; tmp_k [ 3 ] = 12
; tmp_c [ 12 ] = rtB . ji3vchq3tw [ 0 ] ; tmp_c [ 13 ] = rtB . ji3vchq3tw [ 1
] ; tmp_c [ 14 ] = rtB . ji3vchq3tw [ 2 ] ; tmp_c [ 15 ] = rtB . ji3vchq3tw [
3 ] ; tmp_k [ 4 ] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ;
simulationData -> mData -> mInputValues . mX = & tmp_c [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_k [ 0 ] ; simulationData -> mData -> mDx . mN = 4 ;
simulationData -> mData -> mDx . mX = & _rtXdot -> hywdustkrw [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . j0ckgxpmx5 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . esgd45ifwg ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } simulationData = ( NeslSimulationData * ) rtDW . ehoo31suuw ;
time_m = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_m ; simulationData -> mData ->
mContStates . mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX .
l0e0xe2uy4 [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . oogtzxflgo ;
simulationData -> mData -> mModeVector . mN = 5 ; simulationData -> mData ->
mModeVector . mX = & rtDW . eofsatdfl4 [ 0 ] ; tmp = ( ssIsMajorTimeStep (
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
0 ] = 0 ; tmp_b [ 0 ] = rtB . j2hdft1opa [ 0 ] ; tmp_b [ 1 ] = rtB .
j2hdft1opa [ 1 ] ; tmp_b [ 2 ] = rtB . j2hdft1opa [ 2 ] ; tmp_b [ 3 ] = rtB .
j2hdft1opa [ 3 ] ; tmp_n [ 1 ] = 4 ; tmp_b [ 4 ] = rtB . lkp0ijlter [ 0 ] ;
tmp_b [ 5 ] = rtB . lkp0ijlter [ 1 ] ; tmp_b [ 6 ] = rtB . lkp0ijlter [ 2 ] ;
tmp_b [ 7 ] = rtB . lkp0ijlter [ 3 ] ; tmp_n [ 2 ] = 8 ; tmp_b [ 8 ] = rtB .
c3sg5zcxif [ 0 ] ; tmp_b [ 9 ] = rtB . c3sg5zcxif [ 1 ] ; tmp_b [ 10 ] = rtB
. c3sg5zcxif [ 2 ] ; tmp_b [ 11 ] = rtB . c3sg5zcxif [ 3 ] ; tmp_n [ 3 ] = 12
; tmp_b [ 12 ] = rtB . pv1aefa4ak [ 0 ] ; tmp_b [ 13 ] = rtB . pv1aefa4ak [ 1
] ; tmp_b [ 14 ] = rtB . pv1aefa4ak [ 2 ] ; tmp_b [ 15 ] = rtB . pv1aefa4ak [
3 ] ; tmp_n [ 4 ] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ;
simulationData -> mData -> mInputValues . mX = & tmp_b [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_n [ 0 ] ; simulationData -> mData -> mDx . mN = 4 ;
simulationData -> mData -> mDx . mX = & _rtXdot -> l0e0xe2uy4 [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . eqaph1hnr4 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . hsnnp23xx3 ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } simulationData = ( NeslSimulationData * ) rtDW . hp2ndf5vf3 ;
time_g = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_g ; simulationData -> mData ->
mContStates . mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX .
bp3pw3plbw [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . fhsxv1yddz ;
simulationData -> mData -> mModeVector . mN = 5 ; simulationData -> mData ->
mModeVector . mX = & rtDW . l0sp34a5vt [ 0 ] ; tmp = ( ssIsMajorTimeStep (
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
0 ] = 0 ; tmp_l [ 0 ] = rtB . mmtghsbk5w [ 0 ] ; tmp_l [ 1 ] = rtB .
mmtghsbk5w [ 1 ] ; tmp_l [ 2 ] = rtB . mmtghsbk5w [ 2 ] ; tmp_l [ 3 ] = rtB .
mmtghsbk5w [ 3 ] ; tmp_d [ 1 ] = 4 ; tmp_l [ 4 ] = rtB . cqr0wtwuy4 [ 0 ] ;
tmp_l [ 5 ] = rtB . cqr0wtwuy4 [ 1 ] ; tmp_l [ 6 ] = rtB . cqr0wtwuy4 [ 2 ] ;
tmp_l [ 7 ] = rtB . cqr0wtwuy4 [ 3 ] ; tmp_d [ 2 ] = 8 ; tmp_l [ 8 ] = rtB .
dwr0nxvsbj [ 0 ] ; tmp_l [ 9 ] = rtB . dwr0nxvsbj [ 1 ] ; tmp_l [ 10 ] = rtB
. dwr0nxvsbj [ 2 ] ; tmp_l [ 11 ] = rtB . dwr0nxvsbj [ 3 ] ; tmp_d [ 3 ] = 12
; tmp_l [ 12 ] = rtB . kdsjhcimkb [ 0 ] ; tmp_l [ 13 ] = rtB . kdsjhcimkb [ 1
] ; tmp_l [ 14 ] = rtB . kdsjhcimkb [ 2 ] ; tmp_l [ 15 ] = rtB . kdsjhcimkb [
3 ] ; tmp_d [ 4 ] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ;
simulationData -> mData -> mInputValues . mX = & tmp_l [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_d [ 0 ] ; simulationData -> mData -> mDx . mN = 4 ;
simulationData -> mData -> mDx . mX = & _rtXdot -> bp3pw3plbw [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . cq5hsabgd5 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . pfajoqccjj ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } simulationData = ( NeslSimulationData * ) rtDW . onerx1yfb2 ;
time_j = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_j ; simulationData -> mData ->
mContStates . mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX .
fxz224311k [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . cwd4sm1def ;
simulationData -> mData -> mModeVector . mN = 5 ; simulationData -> mData ->
mModeVector . mX = & rtDW . iwcrwapmy1 [ 0 ] ; tmp = ( ssIsMajorTimeStep (
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
[ 0 ] = 0 ; tmp_o [ 0 ] = rtB . ovfjzuhpy1 [ 0 ] ; tmp_o [ 1 ] = rtB .
ovfjzuhpy1 [ 1 ] ; tmp_o [ 2 ] = rtB . ovfjzuhpy1 [ 2 ] ; tmp_o [ 3 ] = rtB .
ovfjzuhpy1 [ 3 ] ; tmp_dz [ 1 ] = 4 ; tmp_o [ 4 ] = rtB . got3v1adxi [ 0 ] ;
tmp_o [ 5 ] = rtB . got3v1adxi [ 1 ] ; tmp_o [ 6 ] = rtB . got3v1adxi [ 2 ] ;
tmp_o [ 7 ] = rtB . got3v1adxi [ 3 ] ; tmp_dz [ 2 ] = 8 ; tmp_o [ 8 ] = rtB .
dgpujci0nh [ 0 ] ; tmp_o [ 9 ] = rtB . dgpujci0nh [ 1 ] ; tmp_o [ 10 ] = rtB
. dgpujci0nh [ 2 ] ; tmp_o [ 11 ] = rtB . dgpujci0nh [ 3 ] ; tmp_dz [ 3 ] =
12 ; tmp_o [ 12 ] = rtB . bezsqifqzd [ 0 ] ; tmp_o [ 13 ] = rtB . bezsqifqzd
[ 1 ] ; tmp_o [ 14 ] = rtB . bezsqifqzd [ 2 ] ; tmp_o [ 15 ] = rtB .
bezsqifqzd [ 3 ] ; tmp_dz [ 4 ] = 16 ; simulationData -> mData ->
mInputValues . mN = 16 ; simulationData -> mData -> mInputValues . mX = &
tmp_o [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_dz [ 0 ] ;
simulationData -> mData -> mDx . mN = 4 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> fxz224311k [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . geu4q0xuqi ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . o4y0j0g15n ,
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
NeslSimulationData * ) rtDW . b2ulm0qurb ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . josyacetrj [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . pw3owok3vx ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
cjrqthhfyx [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
oawdzxyk1g [ 0 ] ; tmp_p [ 1 ] = rtB . oawdzxyk1g [ 1 ] ; tmp_p [ 2 ] = rtB .
oawdzxyk1g [ 2 ] ; tmp_p [ 3 ] = rtB . oawdzxyk1g [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . go1xfp1pfe [ 0 ] ; tmp_p [ 5 ] = rtB . go1xfp1pfe [ 1 ] ;
tmp_p [ 6 ] = rtB . go1xfp1pfe [ 2 ] ; tmp_p [ 7 ] = rtB . go1xfp1pfe [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . inipmccc32 [ 0 ] ; tmp_p [ 9 ] = rtB .
inipmccc32 [ 1 ] ; tmp_p [ 10 ] = rtB . inipmccc32 [ 2 ] ; tmp_p [ 11 ] = rtB
. inipmccc32 [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . nny34gtevo [ 0 ]
; tmp_p [ 13 ] = rtB . nny34gtevo [ 1 ] ; tmp_p [ 14 ] = rtB . nny34gtevo [ 2
] ; tmp_p [ 15 ] = rtB . nny34gtevo [ 3 ] ; tmp_e [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ; tmp_i =
rtMassMatrix . pr ; tmp_i = double_pointer_shift ( tmp_i , rtDW . a2nd5ads1x
) ; simulationData -> mData -> mMassMatrixPr . mN = 2 ; simulationData ->
mData -> mMassMatrixPr . mX = tmp_i ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . aoztfxt3k3 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_m =
ne_simulator_method ( ( NeslSimulator * ) rtDW . p3qsy4ac3i ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_m != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . ir5o5sem4f ; time_p =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_p ; simulationData -> mData -> mContStates .
mN = 8 ; simulationData -> mData -> mContStates . mX = & rtX . en2pd5luhl [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . fcg5fdf0oq ; simulationData -> mData ->
mModeVector . mN = 10 ; simulationData -> mData -> mModeVector . mX = & rtDW
. aha3ttluaz [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
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
o10dy052cl [ 0 ] ; tmp_g [ 1 ] = rtB . o10dy052cl [ 1 ] ; tmp_g [ 2 ] = rtB .
o10dy052cl [ 2 ] ; tmp_g [ 3 ] = rtB . o10dy052cl [ 3 ] ; tmp_j [ 1 ] = 4 ;
tmp_g [ 4 ] = rtB . kwsufxstz0 [ 0 ] ; tmp_g [ 5 ] = rtB . kwsufxstz0 [ 1 ] ;
tmp_g [ 6 ] = rtB . kwsufxstz0 [ 2 ] ; tmp_g [ 7 ] = rtB . kwsufxstz0 [ 3 ] ;
tmp_j [ 2 ] = 8 ; tmp_g [ 8 ] = rtB . e5djqxbatk [ 0 ] ; tmp_g [ 9 ] = rtB .
e5djqxbatk [ 1 ] ; tmp_g [ 10 ] = rtB . e5djqxbatk [ 2 ] ; tmp_g [ 11 ] = rtB
. e5djqxbatk [ 3 ] ; tmp_j [ 3 ] = 12 ; tmp_g [ 12 ] = rtB . hg55o3nyo3 [ 0 ]
; tmp_g [ 13 ] = rtB . hg55o3nyo3 [ 1 ] ; tmp_g [ 14 ] = rtB . hg55o3nyo3 [ 2
] ; tmp_g [ 15 ] = rtB . hg55o3nyo3 [ 3 ] ; tmp_j [ 4 ] = 16 ; tmp_g [ 16 ] =
rtB . pnxfeg3myh [ 0 ] ; tmp_g [ 17 ] = rtB . pnxfeg3myh [ 1 ] ; tmp_g [ 18 ]
= rtB . pnxfeg3myh [ 2 ] ; tmp_g [ 19 ] = rtB . pnxfeg3myh [ 3 ] ; tmp_j [ 5
] = 20 ; tmp_g [ 20 ] = rtB . d432tayljp [ 0 ] ; tmp_g [ 21 ] = rtB .
d432tayljp [ 1 ] ; tmp_g [ 22 ] = rtB . d432tayljp [ 2 ] ; tmp_g [ 23 ] = rtB
. d432tayljp [ 3 ] ; tmp_j [ 6 ] = 24 ; tmp_g [ 24 ] = rtB . clw3kkg5lz [ 0 ]
; tmp_g [ 25 ] = rtB . clw3kkg5lz [ 1 ] ; tmp_g [ 26 ] = rtB . clw3kkg5lz [ 2
] ; tmp_g [ 27 ] = rtB . clw3kkg5lz [ 3 ] ; tmp_j [ 7 ] = 28 ; simulationData
-> mData -> mInputValues . mN = 28 ; simulationData -> mData -> mInputValues
. mX = & tmp_g [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 8 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_j [ 0 ] ; tmp_i =
rtMassMatrix . pr ; tmp_i = double_pointer_shift ( tmp_i , rtDW . nimo41obeb
) ; simulationData -> mData -> mMassMatrixPr . mN = 4 ; simulationData ->
mData -> mMassMatrixPr . mX = tmp_i ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . jspmsolpsx ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_m =
ne_simulator_method ( ( NeslSimulator * ) rtDW . mtcob204rl ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_m != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . mvbznvevad ; time_e =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_e ; simulationData -> mData -> mContStates .
mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX . hywdustkrw [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . br0nvfzzdo ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
huqf5ahxl5 [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
h2xuzybx31 [ 0 ] ; tmp_f [ 1 ] = rtB . h2xuzybx31 [ 1 ] ; tmp_f [ 2 ] = rtB .
h2xuzybx31 [ 2 ] ; tmp_f [ 3 ] = rtB . h2xuzybx31 [ 3 ] ; tmp_c [ 1 ] = 4 ;
tmp_f [ 4 ] = rtB . aalhpeekcz [ 0 ] ; tmp_f [ 5 ] = rtB . aalhpeekcz [ 1 ] ;
tmp_f [ 6 ] = rtB . aalhpeekcz [ 2 ] ; tmp_f [ 7 ] = rtB . aalhpeekcz [ 3 ] ;
tmp_c [ 2 ] = 8 ; tmp_f [ 8 ] = rtB . n2nhbhgaoj [ 0 ] ; tmp_f [ 9 ] = rtB .
n2nhbhgaoj [ 1 ] ; tmp_f [ 10 ] = rtB . n2nhbhgaoj [ 2 ] ; tmp_f [ 11 ] = rtB
. n2nhbhgaoj [ 3 ] ; tmp_c [ 3 ] = 12 ; tmp_f [ 12 ] = rtB . ji3vchq3tw [ 0 ]
; tmp_f [ 13 ] = rtB . ji3vchq3tw [ 1 ] ; tmp_f [ 14 ] = rtB . ji3vchq3tw [ 2
] ; tmp_f [ 15 ] = rtB . ji3vchq3tw [ 3 ] ; tmp_c [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_f [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_c [ 0 ] ; tmp_i =
rtMassMatrix . pr ; tmp_i = double_pointer_shift ( tmp_i , rtDW . lyzikhn1qu
) ; simulationData -> mData -> mMassMatrixPr . mN = 2 ; simulationData ->
mData -> mMassMatrixPr . mX = tmp_i ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . j0ckgxpmx5 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_m =
ne_simulator_method ( ( NeslSimulator * ) rtDW . esgd45ifwg ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_m != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . ehoo31suuw ; time_i =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_i ; simulationData -> mData -> mContStates .
mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX . l0e0xe2uy4 [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . oogtzxflgo ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
eofsatdfl4 [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
j2hdft1opa [ 0 ] ; tmp_k [ 1 ] = rtB . j2hdft1opa [ 1 ] ; tmp_k [ 2 ] = rtB .
j2hdft1opa [ 2 ] ; tmp_k [ 3 ] = rtB . j2hdft1opa [ 3 ] ; tmp_b [ 1 ] = 4 ;
tmp_k [ 4 ] = rtB . lkp0ijlter [ 0 ] ; tmp_k [ 5 ] = rtB . lkp0ijlter [ 1 ] ;
tmp_k [ 6 ] = rtB . lkp0ijlter [ 2 ] ; tmp_k [ 7 ] = rtB . lkp0ijlter [ 3 ] ;
tmp_b [ 2 ] = 8 ; tmp_k [ 8 ] = rtB . c3sg5zcxif [ 0 ] ; tmp_k [ 9 ] = rtB .
c3sg5zcxif [ 1 ] ; tmp_k [ 10 ] = rtB . c3sg5zcxif [ 2 ] ; tmp_k [ 11 ] = rtB
. c3sg5zcxif [ 3 ] ; tmp_b [ 3 ] = 12 ; tmp_k [ 12 ] = rtB . pv1aefa4ak [ 0 ]
; tmp_k [ 13 ] = rtB . pv1aefa4ak [ 1 ] ; tmp_k [ 14 ] = rtB . pv1aefa4ak [ 2
] ; tmp_k [ 15 ] = rtB . pv1aefa4ak [ 3 ] ; tmp_b [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_k [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_b [ 0 ] ; tmp_i =
rtMassMatrix . pr ; tmp_i = double_pointer_shift ( tmp_i , rtDW . okzl3d4upr
) ; simulationData -> mData -> mMassMatrixPr . mN = 2 ; simulationData ->
mData -> mMassMatrixPr . mX = tmp_i ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . eqaph1hnr4 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_m =
ne_simulator_method ( ( NeslSimulator * ) rtDW . hsnnp23xx3 ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_m != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . hp2ndf5vf3 ; time_m =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_m ; simulationData -> mData -> mContStates .
mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX . bp3pw3plbw [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . fhsxv1yddz ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
l0sp34a5vt [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
mmtghsbk5w [ 0 ] ; tmp_n [ 1 ] = rtB . mmtghsbk5w [ 1 ] ; tmp_n [ 2 ] = rtB .
mmtghsbk5w [ 2 ] ; tmp_n [ 3 ] = rtB . mmtghsbk5w [ 3 ] ; tmp_l [ 1 ] = 4 ;
tmp_n [ 4 ] = rtB . cqr0wtwuy4 [ 0 ] ; tmp_n [ 5 ] = rtB . cqr0wtwuy4 [ 1 ] ;
tmp_n [ 6 ] = rtB . cqr0wtwuy4 [ 2 ] ; tmp_n [ 7 ] = rtB . cqr0wtwuy4 [ 3 ] ;
tmp_l [ 2 ] = 8 ; tmp_n [ 8 ] = rtB . dwr0nxvsbj [ 0 ] ; tmp_n [ 9 ] = rtB .
dwr0nxvsbj [ 1 ] ; tmp_n [ 10 ] = rtB . dwr0nxvsbj [ 2 ] ; tmp_n [ 11 ] = rtB
. dwr0nxvsbj [ 3 ] ; tmp_l [ 3 ] = 12 ; tmp_n [ 12 ] = rtB . kdsjhcimkb [ 0 ]
; tmp_n [ 13 ] = rtB . kdsjhcimkb [ 1 ] ; tmp_n [ 14 ] = rtB . kdsjhcimkb [ 2
] ; tmp_n [ 15 ] = rtB . kdsjhcimkb [ 3 ] ; tmp_l [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_n [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_l [ 0 ] ; tmp_i =
rtMassMatrix . pr ; tmp_i = double_pointer_shift ( tmp_i , rtDW . mnfh0gsrkg
) ; simulationData -> mData -> mMassMatrixPr . mN = 2 ; simulationData ->
mData -> mMassMatrixPr . mX = tmp_i ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . cq5hsabgd5 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_m =
ne_simulator_method ( ( NeslSimulator * ) rtDW . pfajoqccjj ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_m != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . onerx1yfb2 ; time_g =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_g ; simulationData -> mData -> mContStates .
mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX . fxz224311k [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . cwd4sm1def ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
iwcrwapmy1 [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
ovfjzuhpy1 [ 0 ] ; tmp_d [ 1 ] = rtB . ovfjzuhpy1 [ 1 ] ; tmp_d [ 2 ] = rtB .
ovfjzuhpy1 [ 2 ] ; tmp_d [ 3 ] = rtB . ovfjzuhpy1 [ 3 ] ; tmp_o [ 1 ] = 4 ;
tmp_d [ 4 ] = rtB . got3v1adxi [ 0 ] ; tmp_d [ 5 ] = rtB . got3v1adxi [ 1 ] ;
tmp_d [ 6 ] = rtB . got3v1adxi [ 2 ] ; tmp_d [ 7 ] = rtB . got3v1adxi [ 3 ] ;
tmp_o [ 2 ] = 8 ; tmp_d [ 8 ] = rtB . dgpujci0nh [ 0 ] ; tmp_d [ 9 ] = rtB .
dgpujci0nh [ 1 ] ; tmp_d [ 10 ] = rtB . dgpujci0nh [ 2 ] ; tmp_d [ 11 ] = rtB
. dgpujci0nh [ 3 ] ; tmp_o [ 3 ] = 12 ; tmp_d [ 12 ] = rtB . bezsqifqzd [ 0 ]
; tmp_d [ 13 ] = rtB . bezsqifqzd [ 1 ] ; tmp_d [ 14 ] = rtB . bezsqifqzd [ 2
] ; tmp_d [ 15 ] = rtB . bezsqifqzd [ 3 ] ; tmp_o [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_d [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_o [ 0 ] ; tmp_i =
rtMassMatrix . pr ; tmp_i = double_pointer_shift ( tmp_i , rtDW . oggkregolh
) ; simulationData -> mData -> mMassMatrixPr . mN = 2 ; simulationData ->
mData -> mMassMatrixPr . mX = tmp_i ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . geu4q0xuqi ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_m =
ne_simulator_method ( ( NeslSimulator * ) rtDW . o4y0j0g15n ,
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
ssGetSolverZcSignalVector ( rtS ) ) ; _rtZCSV -> b4bnynrbwu = rtB .
cavafntrgm ; _rtZCSV -> b1kp2eptxt = rtB . fht4xkh1ev - rtP . D1_UpperSat ;
_rtZCSV -> hm4y42m1s0 = rtB . fht4xkh1ev - rtP . D1_LowerSat ; _rtZCSV ->
fgwvum4dm1 = rtB . eackyyj2tp ; _rtZCSV -> f50mw2yttj = rtB . eh2hjsaicu -
rtP . D2_UpperSat ; _rtZCSV -> cejw0f4a24 = rtB . eh2hjsaicu - rtP .
D2_LowerSat ; _rtZCSV -> demoxsl1pj = rtB . i53xrhehpp ; _rtZCSV ->
nhs2kimyri = rtB . oew5eo25ef - rtP . D3_UpperSat ; _rtZCSV -> przjmcjc4j =
rtB . oew5eo25ef - rtP . D3_LowerSat ; _rtZCSV -> cjaaxpeiax = rtB .
jk5baceso4 ; _rtZCSV -> hy0w1y0grz = rtB . bkvix0h45z - rtP . D4_UpperSat ;
_rtZCSV -> obzu144xuo = rtB . bkvix0h45z - rtP . D4_LowerSat ; _rtZCSV ->
le0qltnypy = rtB . dnyn3lbtrv ; _rtZCSV -> ns402oa5jx = rtB . ldiq5q5naa -
rtP . D5_UpperSat ; _rtZCSV -> luoufj3fg2 = rtB . ldiq5q5naa - rtP .
D5_LowerSat ; _rtZCSV -> eow4c0liok = rtB . onhuz22qes ; _rtZCSV ->
fq3dz0hjjb = rtB . ao5dn0t2uz - rtP . D6_UpperSat ; _rtZCSV -> gowtcpijum =
rtB . ao5dn0t2uz - rtP . D6_LowerSat ; simulationData = ( NeslSimulationData
* ) rtDW . b2ulm0qurb ; time = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time ;
simulationData -> mData -> mContStates . mN = 4 ; simulationData -> mData ->
mContStates . mX = & rtX . josyacetrj [ 0 ] ; simulationData -> mData ->
mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = & rtDW .
pw3owok3vx ; simulationData -> mData -> mModeVector . mN = 5 ; simulationData
-> mData -> mModeVector . mX = & rtDW . cjrqthhfyx [ 0 ] ; tmp = (
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
0 ] = 0 ; tmp_p [ 0 ] = rtB . oawdzxyk1g [ 0 ] ; tmp_p [ 1 ] = rtB .
oawdzxyk1g [ 1 ] ; tmp_p [ 2 ] = rtB . oawdzxyk1g [ 2 ] ; tmp_p [ 3 ] = rtB .
oawdzxyk1g [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . go1xfp1pfe [ 0 ] ;
tmp_p [ 5 ] = rtB . go1xfp1pfe [ 1 ] ; tmp_p [ 6 ] = rtB . go1xfp1pfe [ 2 ] ;
tmp_p [ 7 ] = rtB . go1xfp1pfe [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB .
inipmccc32 [ 0 ] ; tmp_p [ 9 ] = rtB . inipmccc32 [ 1 ] ; tmp_p [ 10 ] = rtB
. inipmccc32 [ 2 ] ; tmp_p [ 11 ] = rtB . inipmccc32 [ 3 ] ; tmp_e [ 3 ] = 12
; tmp_p [ 12 ] = rtB . nny34gtevo [ 0 ] ; tmp_p [ 13 ] = rtB . nny34gtevo [ 1
] ; tmp_p [ 14 ] = rtB . nny34gtevo [ 2 ] ; tmp_p [ 15 ] = rtB . nny34gtevo [
3 ] ; tmp_e [ 4 ] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ;
simulationData -> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_e [ 0 ] ; simulationData -> mData -> mNonSampledZCs . mN = 5 ;
simulationData -> mData -> mNonSampledZCs . mX = & _rtZCSV -> dxejivzs5p ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . aoztfxt3k3 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_d = ne_simulator_method ( ( NeslSimulator * ) rtDW . p3qsy4ac3i ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_d !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . ir5o5sem4f ; time_p =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_p ; simulationData -> mData -> mContStates .
mN = 8 ; simulationData -> mData -> mContStates . mX = & rtX . en2pd5luhl [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . fcg5fdf0oq ; simulationData -> mData ->
mModeVector . mN = 10 ; simulationData -> mData -> mModeVector . mX = & rtDW
. aha3ttluaz [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
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
o10dy052cl [ 0 ] ; tmp_i [ 1 ] = rtB . o10dy052cl [ 1 ] ; tmp_i [ 2 ] = rtB .
o10dy052cl [ 2 ] ; tmp_i [ 3 ] = rtB . o10dy052cl [ 3 ] ; tmp_m [ 1 ] = 4 ;
tmp_i [ 4 ] = rtB . kwsufxstz0 [ 0 ] ; tmp_i [ 5 ] = rtB . kwsufxstz0 [ 1 ] ;
tmp_i [ 6 ] = rtB . kwsufxstz0 [ 2 ] ; tmp_i [ 7 ] = rtB . kwsufxstz0 [ 3 ] ;
tmp_m [ 2 ] = 8 ; tmp_i [ 8 ] = rtB . e5djqxbatk [ 0 ] ; tmp_i [ 9 ] = rtB .
e5djqxbatk [ 1 ] ; tmp_i [ 10 ] = rtB . e5djqxbatk [ 2 ] ; tmp_i [ 11 ] = rtB
. e5djqxbatk [ 3 ] ; tmp_m [ 3 ] = 12 ; tmp_i [ 12 ] = rtB . hg55o3nyo3 [ 0 ]
; tmp_i [ 13 ] = rtB . hg55o3nyo3 [ 1 ] ; tmp_i [ 14 ] = rtB . hg55o3nyo3 [ 2
] ; tmp_i [ 15 ] = rtB . hg55o3nyo3 [ 3 ] ; tmp_m [ 4 ] = 16 ; tmp_i [ 16 ] =
rtB . pnxfeg3myh [ 0 ] ; tmp_i [ 17 ] = rtB . pnxfeg3myh [ 1 ] ; tmp_i [ 18 ]
= rtB . pnxfeg3myh [ 2 ] ; tmp_i [ 19 ] = rtB . pnxfeg3myh [ 3 ] ; tmp_m [ 5
] = 20 ; tmp_i [ 20 ] = rtB . d432tayljp [ 0 ] ; tmp_i [ 21 ] = rtB .
d432tayljp [ 1 ] ; tmp_i [ 22 ] = rtB . d432tayljp [ 2 ] ; tmp_i [ 23 ] = rtB
. d432tayljp [ 3 ] ; tmp_m [ 6 ] = 24 ; tmp_i [ 24 ] = rtB . clw3kkg5lz [ 0 ]
; tmp_i [ 25 ] = rtB . clw3kkg5lz [ 1 ] ; tmp_i [ 26 ] = rtB . clw3kkg5lz [ 2
] ; tmp_i [ 27 ] = rtB . clw3kkg5lz [ 3 ] ; tmp_m [ 7 ] = 28 ; simulationData
-> mData -> mInputValues . mN = 28 ; simulationData -> mData -> mInputValues
. mX = & tmp_i [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 8 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_m [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 10 ; simulationData -> mData
-> mNonSampledZCs . mX = & _rtZCSV -> fv5cxlggao ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . jspmsolpsx ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_d =
ne_simulator_method ( ( NeslSimulator * ) rtDW . mtcob204rl ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_d !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . mvbznvevad ; time_e =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_e ; simulationData -> mData -> mContStates .
mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX . hywdustkrw [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . br0nvfzzdo ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
huqf5ahxl5 [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
h2xuzybx31 [ 0 ] ; tmp_g [ 1 ] = rtB . h2xuzybx31 [ 1 ] ; tmp_g [ 2 ] = rtB .
h2xuzybx31 [ 2 ] ; tmp_g [ 3 ] = rtB . h2xuzybx31 [ 3 ] ; tmp_j [ 1 ] = 4 ;
tmp_g [ 4 ] = rtB . aalhpeekcz [ 0 ] ; tmp_g [ 5 ] = rtB . aalhpeekcz [ 1 ] ;
tmp_g [ 6 ] = rtB . aalhpeekcz [ 2 ] ; tmp_g [ 7 ] = rtB . aalhpeekcz [ 3 ] ;
tmp_j [ 2 ] = 8 ; tmp_g [ 8 ] = rtB . n2nhbhgaoj [ 0 ] ; tmp_g [ 9 ] = rtB .
n2nhbhgaoj [ 1 ] ; tmp_g [ 10 ] = rtB . n2nhbhgaoj [ 2 ] ; tmp_g [ 11 ] = rtB
. n2nhbhgaoj [ 3 ] ; tmp_j [ 3 ] = 12 ; tmp_g [ 12 ] = rtB . ji3vchq3tw [ 0 ]
; tmp_g [ 13 ] = rtB . ji3vchq3tw [ 1 ] ; tmp_g [ 14 ] = rtB . ji3vchq3tw [ 2
] ; tmp_g [ 15 ] = rtB . ji3vchq3tw [ 3 ] ; tmp_j [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_g [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_j [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 5 ; simulationData -> mData
-> mNonSampledZCs . mX = & _rtZCSV -> ctxsq5kac3 ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . j0ckgxpmx5 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_d =
ne_simulator_method ( ( NeslSimulator * ) rtDW . esgd45ifwg ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_d !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . ehoo31suuw ; time_i =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_i ; simulationData -> mData -> mContStates .
mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX . l0e0xe2uy4 [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . oogtzxflgo ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
eofsatdfl4 [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
j2hdft1opa [ 0 ] ; tmp_f [ 1 ] = rtB . j2hdft1opa [ 1 ] ; tmp_f [ 2 ] = rtB .
j2hdft1opa [ 2 ] ; tmp_f [ 3 ] = rtB . j2hdft1opa [ 3 ] ; tmp_c [ 1 ] = 4 ;
tmp_f [ 4 ] = rtB . lkp0ijlter [ 0 ] ; tmp_f [ 5 ] = rtB . lkp0ijlter [ 1 ] ;
tmp_f [ 6 ] = rtB . lkp0ijlter [ 2 ] ; tmp_f [ 7 ] = rtB . lkp0ijlter [ 3 ] ;
tmp_c [ 2 ] = 8 ; tmp_f [ 8 ] = rtB . c3sg5zcxif [ 0 ] ; tmp_f [ 9 ] = rtB .
c3sg5zcxif [ 1 ] ; tmp_f [ 10 ] = rtB . c3sg5zcxif [ 2 ] ; tmp_f [ 11 ] = rtB
. c3sg5zcxif [ 3 ] ; tmp_c [ 3 ] = 12 ; tmp_f [ 12 ] = rtB . pv1aefa4ak [ 0 ]
; tmp_f [ 13 ] = rtB . pv1aefa4ak [ 1 ] ; tmp_f [ 14 ] = rtB . pv1aefa4ak [ 2
] ; tmp_f [ 15 ] = rtB . pv1aefa4ak [ 3 ] ; tmp_c [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_f [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_c [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 5 ; simulationData -> mData
-> mNonSampledZCs . mX = & _rtZCSV -> f1bxp1i2xo ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . eqaph1hnr4 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_d =
ne_simulator_method ( ( NeslSimulator * ) rtDW . hsnnp23xx3 ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_d !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . hp2ndf5vf3 ; time_m =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_m ; simulationData -> mData -> mContStates .
mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX . bp3pw3plbw [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . fhsxv1yddz ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
l0sp34a5vt [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
mmtghsbk5w [ 0 ] ; tmp_k [ 1 ] = rtB . mmtghsbk5w [ 1 ] ; tmp_k [ 2 ] = rtB .
mmtghsbk5w [ 2 ] ; tmp_k [ 3 ] = rtB . mmtghsbk5w [ 3 ] ; tmp_b [ 1 ] = 4 ;
tmp_k [ 4 ] = rtB . cqr0wtwuy4 [ 0 ] ; tmp_k [ 5 ] = rtB . cqr0wtwuy4 [ 1 ] ;
tmp_k [ 6 ] = rtB . cqr0wtwuy4 [ 2 ] ; tmp_k [ 7 ] = rtB . cqr0wtwuy4 [ 3 ] ;
tmp_b [ 2 ] = 8 ; tmp_k [ 8 ] = rtB . dwr0nxvsbj [ 0 ] ; tmp_k [ 9 ] = rtB .
dwr0nxvsbj [ 1 ] ; tmp_k [ 10 ] = rtB . dwr0nxvsbj [ 2 ] ; tmp_k [ 11 ] = rtB
. dwr0nxvsbj [ 3 ] ; tmp_b [ 3 ] = 12 ; tmp_k [ 12 ] = rtB . kdsjhcimkb [ 0 ]
; tmp_k [ 13 ] = rtB . kdsjhcimkb [ 1 ] ; tmp_k [ 14 ] = rtB . kdsjhcimkb [ 2
] ; tmp_k [ 15 ] = rtB . kdsjhcimkb [ 3 ] ; tmp_b [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_k [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_b [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 5 ; simulationData -> mData
-> mNonSampledZCs . mX = & _rtZCSV -> ftyblwyig1 ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . cq5hsabgd5 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_d =
ne_simulator_method ( ( NeslSimulator * ) rtDW . pfajoqccjj ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_d !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . onerx1yfb2 ; time_g =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_g ; simulationData -> mData -> mContStates .
mN = 4 ; simulationData -> mData -> mContStates . mX = & rtX . fxz224311k [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . cwd4sm1def ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
iwcrwapmy1 [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
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
ovfjzuhpy1 [ 0 ] ; tmp_n [ 1 ] = rtB . ovfjzuhpy1 [ 1 ] ; tmp_n [ 2 ] = rtB .
ovfjzuhpy1 [ 2 ] ; tmp_n [ 3 ] = rtB . ovfjzuhpy1 [ 3 ] ; tmp_l [ 1 ] = 4 ;
tmp_n [ 4 ] = rtB . got3v1adxi [ 0 ] ; tmp_n [ 5 ] = rtB . got3v1adxi [ 1 ] ;
tmp_n [ 6 ] = rtB . got3v1adxi [ 2 ] ; tmp_n [ 7 ] = rtB . got3v1adxi [ 3 ] ;
tmp_l [ 2 ] = 8 ; tmp_n [ 8 ] = rtB . dgpujci0nh [ 0 ] ; tmp_n [ 9 ] = rtB .
dgpujci0nh [ 1 ] ; tmp_n [ 10 ] = rtB . dgpujci0nh [ 2 ] ; tmp_n [ 11 ] = rtB
. dgpujci0nh [ 3 ] ; tmp_l [ 3 ] = 12 ; tmp_n [ 12 ] = rtB . bezsqifqzd [ 0 ]
; tmp_n [ 13 ] = rtB . bezsqifqzd [ 1 ] ; tmp_n [ 14 ] = rtB . bezsqifqzd [ 2
] ; tmp_n [ 15 ] = rtB . bezsqifqzd [ 3 ] ; tmp_l [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_n [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_l [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 5 ; simulationData -> mData
-> mNonSampledZCs . mX = & _rtZCSV -> foljlmmtzp ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . geu4q0xuqi ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_d =
ne_simulator_method ( ( NeslSimulator * ) rtDW . o4y0j0g15n ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_d !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlTerminate ( void ) { neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . maabazmrfg ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . mkeckqut4f ) ; nesl_erase_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_6"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
en1uoclqpn ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
jgihp3vmhr ) ; nesl_erase_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_6"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
aoztfxt3k3 ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
b2ulm0qurb ) ; nesl_erase_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_2"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
m54odtvz3u ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
d4hhejeuln ) ; nesl_erase_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_2"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
jspmsolpsx ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
ir5o5sem4f ) ; nesl_erase_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_7"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
oxiddlwl0e ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
jedewwpx2b ) ; nesl_erase_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_7"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
j0ckgxpmx5 ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
mvbznvevad ) ; nesl_erase_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_5"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
o0t2zajdar ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
lxi10debkw ) ; nesl_erase_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_5"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
eqaph1hnr4 ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
ehoo31suuw ) ; nesl_erase_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_1"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
oofcw1u5oj ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
ojep3hp3tz ) ; nesl_erase_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_1"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
cq5hsabgd5 ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
hp2ndf5vf3 ) ; nesl_erase_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_3"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
mb03qpxir0 ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
onsxqbd1pr ) ; nesl_erase_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_3"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
geu4q0xuqi ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
onerx1yfb2 ) ; nesl_erase_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_4"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
loqycrqsns ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
gpyxtothik ) ; nesl_erase_simulator (
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration_4"
) ; { if ( rtDW . fkhju0d3rl . AQHandles ) { sdiTerminateStreaming ( & rtDW .
fkhju0d3rl . AQHandles ) ; } if ( rtDW . fkhju0d3rl . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . fkhju0d3rl . SlioLTF ) ; } } { if ( rtDW
. nbjxrunoh4 . AQHandles ) { sdiTerminateStreaming ( & rtDW . nbjxrunoh4 .
AQHandles ) ; } if ( rtDW . nbjxrunoh4 . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . nbjxrunoh4 . SlioLTF ) ; } } { if ( rtDW
. ox2wjis5ak . AQHandles ) { sdiTerminateStreaming ( & rtDW . ox2wjis5ak .
AQHandles ) ; } if ( rtDW . ox2wjis5ak . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . ox2wjis5ak . SlioLTF ) ; } } { if ( rtDW
. avhnfypyzw . AQHandles ) { sdiTerminateStreaming ( & rtDW . avhnfypyzw .
AQHandles ) ; } if ( rtDW . avhnfypyzw . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . avhnfypyzw . SlioLTF ) ; } } { if ( rtDW
. h5ig2mnnp5 . AQHandles ) { sdiTerminateStreaming ( & rtDW . h5ig2mnnp5 .
AQHandles ) ; } if ( rtDW . h5ig2mnnp5 . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . h5ig2mnnp5 . SlioLTF ) ; } } { if ( rtDW
. ju0hwcip3s . AQHandles ) { sdiTerminateStreaming ( & rtDW . ju0hwcip3s .
AQHandles ) ; } if ( rtDW . ju0hwcip3s . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . ju0hwcip3s . SlioLTF ) ; } } { if ( rtDW
. h1wvgvd1h4 . AQHandles ) { sdiTerminateStreaming ( & rtDW . h1wvgvd1h4 .
AQHandles ) ; } if ( rtDW . h1wvgvd1h4 . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . h1wvgvd1h4 . SlioLTF ) ; } } { if ( rtDW
. dcbtcmf10i . AQHandles ) { sdiTerminateStreaming ( & rtDW . dcbtcmf10i .
AQHandles ) ; } if ( rtDW . dcbtcmf10i . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . dcbtcmf10i . SlioLTF ) ; } } { if ( rtDW
. jvokyr3vc0 . AQHandles ) { sdiTerminateStreaming ( & rtDW . jvokyr3vc0 .
AQHandles ) ; } if ( rtDW . jvokyr3vc0 . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . jvokyr3vc0 . SlioLTF ) ; } } { if ( rtDW
. gvul0tg30e . AQHandles ) { sdiTerminateStreaming ( & rtDW . gvul0tg30e .
AQHandles ) ; } if ( rtDW . gvul0tg30e . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . gvul0tg30e . SlioLTF ) ; } } { if ( rtDW
. pluidmihey . AQHandles ) { sdiTerminateStreaming ( & rtDW . pluidmihey .
AQHandles ) ; } if ( rtDW . pluidmihey . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . pluidmihey . SlioLTF ) ; } } { if ( rtDW
. nqajuamynq . AQHandles ) { sdiTerminateStreaming ( & rtDW . nqajuamynq .
AQHandles ) ; } if ( rtDW . nqajuamynq . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . nqajuamynq . SlioLTF ) ; } } { if ( rtDW
. dkygoqftlz . AQHandles ) { sdiTerminateStreaming ( & rtDW . dkygoqftlz .
AQHandles ) ; } if ( rtDW . dkygoqftlz . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . dkygoqftlz . SlioLTF ) ; } } { if ( rtDW
. d4ovmgffgs . AQHandles ) { sdiTerminateStreaming ( & rtDW . d4ovmgffgs .
AQHandles ) ; } if ( rtDW . d4ovmgffgs . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . d4ovmgffgs . SlioLTF ) ; } } { if ( rtDW
. bj5lql4lou . AQHandles ) { sdiTerminateStreaming ( & rtDW . bj5lql4lou .
AQHandles ) ; } if ( rtDW . bj5lql4lou . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . bj5lql4lou . SlioLTF ) ; } } { if ( rtDW
. ixg02n0kht . AQHandles ) { sdiTerminateStreaming ( & rtDW . ixg02n0kht .
AQHandles ) ; } if ( rtDW . ixg02n0kht . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . ixg02n0kht . SlioLTF ) ; } } { if ( rtDW
. akh35vbfzy . AQHandles ) { sdiTerminateStreaming ( & rtDW . akh35vbfzy .
AQHandles ) ; } if ( rtDW . akh35vbfzy . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . akh35vbfzy . SlioLTF ) ; } } { if ( rtDW
. c2qb0n32ss . AQHandles ) { sdiTerminateStreaming ( & rtDW . c2qb0n32ss .
AQHandles ) ; } if ( rtDW . c2qb0n32ss . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . c2qb0n32ss . SlioLTF ) ; } } { if ( rtDW
. bx5yrpmeoz . AQHandles ) { sdiTerminateStreaming ( & rtDW . bx5yrpmeoz .
AQHandles ) ; } if ( rtDW . bx5yrpmeoz . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . bx5yrpmeoz . SlioLTF ) ; } } { if ( rtDW
. oyj5nltrtm . AQHandles ) { sdiTerminateStreaming ( & rtDW . oyj5nltrtm .
AQHandles ) ; } if ( rtDW . oyj5nltrtm . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . oyj5nltrtm . SlioLTF ) ; } } { if ( rtDW
. l1xqkb0uuj . AQHandles ) { sdiTerminateStreaming ( & rtDW . l1xqkb0uuj .
AQHandles ) ; } if ( rtDW . l1xqkb0uuj . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . l1xqkb0uuj . SlioLTF ) ; } } { if ( rtDW
. cqsrogmetz . AQHandles ) { sdiTerminateStreaming ( & rtDW . cqsrogmetz .
AQHandles ) ; } if ( rtDW . cqsrogmetz . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . cqsrogmetz . SlioLTF ) ; } } { if ( rtDW
. nuk5ajouhh . AQHandles ) { sdiTerminateStreaming ( & rtDW . nuk5ajouhh .
AQHandles ) ; } if ( rtDW . nuk5ajouhh . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . nuk5ajouhh . SlioLTF ) ; } } { if ( rtDW
. difeoh0o3t . AQHandles ) { sdiTerminateStreaming ( & rtDW . difeoh0o3t .
AQHandles ) ; } if ( rtDW . difeoh0o3t . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . difeoh0o3t . SlioLTF ) ; } } { if ( rtDW
. ijvorwciil . AQHandles ) { sdiTerminateStreaming ( & rtDW . ijvorwciil .
AQHandles ) ; } if ( rtDW . ijvorwciil . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . ijvorwciil . SlioLTF ) ; } } { if ( rtDW
. ewswq3ixhs . AQHandles ) { sdiTerminateStreaming ( & rtDW . ewswq3ixhs .
AQHandles ) ; } if ( rtDW . ewswq3ixhs . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . ewswq3ixhs . SlioLTF ) ; } } { if ( rtDW
. pd5b5eork3 . AQHandles ) { sdiTerminateStreaming ( & rtDW . pd5b5eork3 .
AQHandles ) ; } if ( rtDW . pd5b5eork3 . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . pd5b5eork3 . SlioLTF ) ; } } { if ( rtDW
. lxuytvgznq . AQHandles ) { sdiTerminateStreaming ( & rtDW . lxuytvgznq .
AQHandles ) ; } if ( rtDW . lxuytvgznq . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . lxuytvgznq . SlioLTF ) ; } } { if ( rtDW
. crkalficod . AQHandles ) { sdiTerminateStreaming ( & rtDW . crkalficod .
AQHandles ) ; } if ( rtDW . crkalficod . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . crkalficod . SlioLTF ) ; } } { if ( rtDW
. ckmmj1b1a4 . AQHandles ) { sdiTerminateStreaming ( & rtDW . ckmmj1b1a4 .
AQHandles ) ; } if ( rtDW . ckmmj1b1a4 . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . ckmmj1b1a4 . SlioLTF ) ; } } { if ( rtDW
. ejwlgw0b0w . AQHandles ) { sdiTerminateStreaming ( & rtDW . ejwlgw0b0w .
AQHandles ) ; } if ( rtDW . ejwlgw0b0w . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . ejwlgw0b0w . SlioLTF ) ; } } { if ( rtDW
. lkmtjgr4pk . AQHandles ) { sdiTerminateStreaming ( & rtDW . lkmtjgr4pk .
AQHandles ) ; } if ( rtDW . lkmtjgr4pk . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . lkmtjgr4pk . SlioLTF ) ; } } { if ( rtDW
. doxequ5ptr . AQHandles ) { sdiTerminateStreaming ( & rtDW . doxequ5ptr .
AQHandles ) ; } if ( rtDW . doxequ5ptr . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . doxequ5ptr . SlioLTF ) ; } } { if ( rtDW
. isfan0gc4x . AQHandles ) { sdiTerminateStreaming ( & rtDW . isfan0gc4x .
AQHandles ) ; } if ( rtDW . isfan0gc4x . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . isfan0gc4x . SlioLTF ) ; } } { if ( rtDW
. bhw5fpwwrv . AQHandles ) { sdiTerminateStreaming ( & rtDW . bhw5fpwwrv .
AQHandles ) ; } if ( rtDW . bhw5fpwwrv . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . bhw5fpwwrv . SlioLTF ) ; } } { if ( rtDW
. ffbfzmbeso . AQHandles ) { sdiTerminateStreaming ( & rtDW . ffbfzmbeso .
AQHandles ) ; } if ( rtDW . ffbfzmbeso . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . ffbfzmbeso . SlioLTF ) ; } } { if ( rtDW
. bdep3qr3ra . AQHandles ) { sdiTerminateStreaming ( & rtDW . bdep3qr3ra .
AQHandles ) ; } if ( rtDW . bdep3qr3ra . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . bdep3qr3ra . SlioLTF ) ; } } { if ( rtDW
. p14ax2esvj . AQHandles ) { sdiTerminateStreaming ( & rtDW . p14ax2esvj .
AQHandles ) ; } if ( rtDW . p14ax2esvj . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . p14ax2esvj . SlioLTF ) ; } } { if ( rtDW
. d0f32oeoza . AQHandles ) { sdiTerminateStreaming ( & rtDW . d0f32oeoza .
AQHandles ) ; } if ( rtDW . d0f32oeoza . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . d0f32oeoza . SlioLTF ) ; } } { if ( rtDW
. dksd5f0dzc . AQHandles ) { sdiTerminateStreaming ( & rtDW . dksd5f0dzc .
AQHandles ) ; } if ( rtDW . dksd5f0dzc . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . dksd5f0dzc . SlioLTF ) ; } } { if ( rtDW
. amkx3ztxsb . AQHandles ) { sdiTerminateStreaming ( & rtDW . amkx3ztxsb .
AQHandles ) ; } if ( rtDW . amkx3ztxsb . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . amkx3ztxsb . SlioLTF ) ; } } { if ( rtDW
. lc00gioize . AQHandles ) { sdiTerminateStreaming ( & rtDW . lc00gioize .
AQHandles ) ; } if ( rtDW . lc00gioize . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . lc00gioize . SlioLTF ) ; } } { if ( rtDW
. ld2f3yh3ph . AQHandles ) { sdiTerminateStreaming ( & rtDW . ld2f3yh3ph .
AQHandles ) ; } if ( rtDW . ld2f3yh3ph . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . ld2f3yh3ph . SlioLTF ) ; } } { if ( rtDW
. gio3iy02hl . AQHandles ) { sdiTerminateStreaming ( & rtDW . gio3iy02hl .
AQHandles ) ; } if ( rtDW . gio3iy02hl . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . gio3iy02hl . SlioLTF ) ; } } { if ( rtDW
. mkxd2pc5z0 . AQHandles ) { sdiTerminateStreaming ( & rtDW . mkxd2pc5z0 .
AQHandles ) ; } if ( rtDW . mkxd2pc5z0 . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . mkxd2pc5z0 . SlioLTF ) ; } } { if ( rtDW
. cc5bqxzmbs . AQHandles ) { sdiTerminateStreaming ( & rtDW . cc5bqxzmbs .
AQHandles ) ; } if ( rtDW . cc5bqxzmbs . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . cc5bqxzmbs . SlioLTF ) ; } } { if ( rtDW
. iyliuua3m1 . AQHandles ) { sdiTerminateStreaming ( & rtDW . iyliuua3m1 .
AQHandles ) ; } if ( rtDW . iyliuua3m1 . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . iyliuua3m1 . SlioLTF ) ; } } { if ( rtDW
. k4edalu3p2 . AQHandles ) { sdiTerminateStreaming ( & rtDW . k4edalu3p2 .
AQHandles ) ; } if ( rtDW . k4edalu3p2 . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . k4edalu3p2 . SlioLTF ) ; } } if (
rt_slioCatalogue ( ) != ( NULL ) ) { void * * slioCatalogueAddr =
rt_slioCatalogueAddr ( ) ; rtwSaveDatasetsToMatFile (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ,
rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 62 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 6 ) ; ssSetNumU (
rtS , 6 ) ; ssSetDirectFeedThrough ( rtS , 1 ) ; ssSetNumSampleTimes ( rtS ,
3 ) ; ssSetNumBlocks ( rtS , 772 ) ; ssSetNumBlockIO ( rtS , 133 ) ;
ssSetNumBlockParams ( rtS , 78 ) ; } void MdlInitializeSampleTimes ( void ) {
ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0 ) ;
ssSetSampleTime ( rtS , 2 , 0.1 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 1.0 ) ; ssSetOffsetTime ( rtS , 2 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 3631493749U ) ;
ssSetChecksumVal ( rtS , 1 , 2582222913U ) ; ssSetChecksumVal ( rtS , 2 ,
3759986011U ) ; ssSetChecksumVal ( rtS , 3 , 1457407973U ) ; }
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
; ( void ) memset ( dwork , 0 , sizeof ( DW ) ) ; } { rtDW . a2nd5ads1x = 34
; rtDW . nimo41obeb = 36 ; rtDW . lyzikhn1qu = 40 ; rtDW . okzl3d4upr = 42 ;
rtDW . mnfh0gsrkg = 44 ; rtDW . oggkregolh = 46 ; } { static
DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 ,
sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 14 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; }
cst_robotarm_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive ( rtS
, true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "cst_robotarm" ) ;
ssSetPath ( rtS , "cst_robotarm" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal
( rtS , 10.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo
. loggingInterval = NULL ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; }
{ { static int_T rt_LoggedStateWidths [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 ,
2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 } ; static
int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2
, 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 ,
2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 } ; static boolean_T
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
"Discrete" , "states" , "states" , "states" , "states" , "states" , "states"
, "Discrete" , "Discrete" , "Discrete" , "Discrete" , "Discrete" , "Discrete"
, "Discrete" , "Discrete" , "Discrete" , "Discrete" , "Discrete" , "Discrete"
, "Discrete" , "Discrete" , "Discrete" , "Discrete" , "Discrete" , "Discrete"
, "Discrete" , "Discrete" , "Discrete" , "Discrete" , "Discrete" , "Discrete"
, "Discrete" , "Discrete" , "Discrete" , "Discrete" , "Discrete" , "Discrete"
, "Discrete" , "Discrete" , "Discrete" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = {
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R1" ,
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R1" ,
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R2" ,
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R2" ,
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R3" ,
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R3" ,
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R4" ,
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R4" ,
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R5" ,
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R5" ,
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R6" ,
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R6" ,
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R7" ,
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R7" ,
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gripper/Revolute1" ,
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gripper/Revolute1" ,
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gripper/Revolute3" ,
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gripper/Revolute3" ,
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gripper/Revolute2" ,
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gripper/Revolute2" ,
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gripper/Revolute" ,
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gripper/Revolute" ,
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/P2" ,
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/P2" ,
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/P1" ,
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/P1" ,
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gear Constraint" ,
"cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gear Constraint" ,
"cst_robotarm/Integrator" , "cst_robotarm/Integrator1" ,
"cst_robotarm/Integrator2" , "cst_robotarm/Integrator3" ,
"cst_robotarm/Integrator4" , "cst_robotarm/Integrator5" ,
"cst_robotarm/6 DOF Robot Arm/DC Motors/Turntable Motor/DC Motor" ,
 "cst_robotarm/6 DOF Robot Arm/DC Motors/Turntable Motor/Power Amplifier/H-Bridge"
,
 "cst_robotarm/6 DOF Robot Arm/DC Motors/Turntable Motor/Power Amplifier/Controlled PWM Voltage"
, "cst_robotarm/6 DOF Robot Arm/DC Motors/Turntable Motor/DC Motor" ,
"cst_robotarm/6 DOF Robot Arm/DC Motors/Bicep Motor1/DC Motor" ,
"cst_robotarm/6 DOF Robot Arm/DC Motors/Bicep Motor2/DC Motor" ,
"cst_robotarm/6 DOF Robot Arm/DC Motors/Bicep Motor1/Power Amplifier/H-Bridge"
,
"cst_robotarm/6 DOF Robot Arm/DC Motors/Bicep Motor2/Power Amplifier/H-Bridge"
,
 "cst_robotarm/6 DOF Robot Arm/DC Motors/Bicep Motor2/Power Amplifier/Controlled PWM Voltage"
,
 "cst_robotarm/6 DOF Robot Arm/DC Motors/Bicep Motor1/Power Amplifier/Controlled PWM Voltage"
, "cst_robotarm/6 DOF Robot Arm/DC Motors/Bicep Motor1/DC Motor" ,
"cst_robotarm/6 DOF Robot Arm/DC Motors/Bicep Motor2/DC Motor" ,
"cst_robotarm/6 DOF Robot Arm/DC Motors/Forearm Motor/DC Motor" ,
"cst_robotarm/6 DOF Robot Arm/DC Motors/Forearm Motor/Power Amplifier/H-Bridge"
,
 "cst_robotarm/6 DOF Robot Arm/DC Motors/Forearm Motor/Power Amplifier/Controlled PWM Voltage"
, "cst_robotarm/6 DOF Robot Arm/DC Motors/Forearm Motor/DC Motor" ,
"cst_robotarm/6 DOF Robot Arm/DC Motors/Wrist Motor/DC Motor" ,
"cst_robotarm/6 DOF Robot Arm/DC Motors/Wrist Motor/Power Amplifier/H-Bridge"
,
 "cst_robotarm/6 DOF Robot Arm/DC Motors/Wrist Motor/Power Amplifier/Controlled PWM Voltage"
, "cst_robotarm/6 DOF Robot Arm/DC Motors/Wrist Motor/DC Motor" ,
"cst_robotarm/6 DOF Robot Arm/DC Motors/Hand Motor/DC Motor" ,
"cst_robotarm/6 DOF Robot Arm/DC Motors/Hand Motor/Power Amplifier/H-Bridge"
,
 "cst_robotarm/6 DOF Robot Arm/DC Motors/Hand Motor/Power Amplifier/Controlled PWM Voltage"
, "cst_robotarm/6 DOF Robot Arm/DC Motors/Hand Motor/DC Motor" ,
"cst_robotarm/6 DOF Robot Arm/DC Motors/Hand Motor1/DC Motor" ,
"cst_robotarm/6 DOF Robot Arm/DC Motors/Hand Motor1/Power Amplifier/H-Bridge"
,
 "cst_robotarm/6 DOF Robot Arm/DC Motors/Hand Motor1/Power Amplifier/Controlled PWM Voltage"
, "cst_robotarm/6 DOF Robot Arm/DC Motors/Hand Motor1/DC Motor" ,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/STATE_6"
, "cst_robotarm/Signal Conditioning/Discrete\nTransfer Fcn" ,
"cst_robotarm/Signal Conditioning/Discrete\nTransfer Fcn1" ,
"cst_robotarm/Signal Conditioning/Discrete\nTransfer Fcn2" ,
"cst_robotarm/Signal Conditioning/Discrete\nTransfer Fcn3" ,
"cst_robotarm/Signal Conditioning/Discrete\nTransfer Fcn4" ,
"cst_robotarm/Signal Conditioning/Discrete\nTransfer Fcn5" ,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_7_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_17_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_16_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_18_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_5_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_8_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_6_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_1_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_9_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_8_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_7_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_9_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_2_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_10_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_20_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_19_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_21_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_6_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_11_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_11_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_10_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_12_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_4_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_12_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_14_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_13_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INPUT_15_1_1"
,
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver\nConfiguration/EVAL_KEY/INTERNAL_3_1_1"
} ; static const char_T * rt_LoggedStateNames [ ] = {
"cst_robotarm.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R1.Rz.q" ,
"cst_robotarm.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R1.Rz.w" ,
"cst_robotarm.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R2.Rz.q" ,
"cst_robotarm.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R2.Rz.w" ,
"cst_robotarm.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R3.Rz.q" ,
"cst_robotarm.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R3.Rz.w" ,
"cst_robotarm.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R4.Rz.q" ,
"cst_robotarm.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R4.Rz.w" ,
"cst_robotarm.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R5.Rz.q" ,
"cst_robotarm.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R5.Rz.w" ,
"cst_robotarm.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R6.Rz.q" ,
"cst_robotarm.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R6.Rz.w" ,
"cst_robotarm.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R7.Rz.q" ,
"cst_robotarm.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.R7.Rz.w" ,
 "cst_robotarm.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gripper.Revolute1.Rz.q"
,
 "cst_robotarm.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gripper.Revolute1.Rz.w"
,
 "cst_robotarm.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gripper.Revolute3.Rz.q"
,
 "cst_robotarm.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gripper.Revolute3.Rz.w"
,
 "cst_robotarm.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gripper.Revolute2.Rz.q"
,
 "cst_robotarm.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gripper.Revolute2.Rz.w"
,
"cst_robotarm.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gripper.Revolute.Rz.q"
,
"cst_robotarm.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gripper.Revolute.Rz.w"
, "cst_robotarm.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.P2.Rz.q" ,
"cst_robotarm.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.P2.Rz.w" ,
"cst_robotarm.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.P1.Rz.q" ,
"cst_robotarm.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.P1.Rz.w" ,
"cst_robotarm.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gear_Constraint.q"
,
"cst_robotarm.x6_DOF_Robot_Arm.x6_DOF_Robot_Arm_Mechanics.Gear_Constraint.w"
, "" , "" , "" , "" , "" , "" ,
"cst_robotarm.x6_DOF_Robot_Arm.DC_Motors.Turntable_Motor.DC_Motor.i_L" ,
 "cst_robotarm.x6_DOF_Robot_Arm.DC_Motors.Turntable_Motor.Power_Amplifier.H_Bridge.v_lag"
,
 "cst_robotarm.x6_DOF_Robot_Arm.DC_Motors.Turntable_Motor.Power_Amplifier.Controlled_PWM_Voltage.p2.v"
, "cst_robotarm.x6_DOF_Robot_Arm.DC_Motors.Turntable_Motor.DC_Motor.v" ,
"cst_robotarm.x6_DOF_Robot_Arm.DC_Motors.Bicep_Motor1.DC_Motor.i_L" ,
"cst_robotarm.x6_DOF_Robot_Arm.DC_Motors.Bicep_Motor2.DC_Motor.i_L" ,
 "cst_robotarm.x6_DOF_Robot_Arm.DC_Motors.Bicep_Motor1.Power_Amplifier.H_Bridge.v_lag"
,
 "cst_robotarm.x6_DOF_Robot_Arm.DC_Motors.Bicep_Motor2.Power_Amplifier.H_Bridge.v_lag"
,
 "cst_robotarm.x6_DOF_Robot_Arm.DC_Motors.Bicep_Motor2.Power_Amplifier.Controlled_PWM_Voltage.p2.v"
,
 "cst_robotarm.x6_DOF_Robot_Arm.DC_Motors.Bicep_Motor1.Power_Amplifier.Controlled_PWM_Voltage.p2.v"
, "cst_robotarm.x6_DOF_Robot_Arm.DC_Motors.Bicep_Motor1.DC_Motor.v" ,
"cst_robotarm.x6_DOF_Robot_Arm.DC_Motors.Bicep_Motor2.DC_Motor.v" ,
"cst_robotarm.x6_DOF_Robot_Arm.DC_Motors.Forearm_Motor.DC_Motor.i_L" ,
 "cst_robotarm.x6_DOF_Robot_Arm.DC_Motors.Forearm_Motor.Power_Amplifier.H_Bridge.v_lag"
,
 "cst_robotarm.x6_DOF_Robot_Arm.DC_Motors.Forearm_Motor.Power_Amplifier.Controlled_PWM_Voltage.p2.v"
, "cst_robotarm.x6_DOF_Robot_Arm.DC_Motors.Forearm_Motor.DC_Motor.v" ,
"cst_robotarm.x6_DOF_Robot_Arm.DC_Motors.Wrist_Motor.DC_Motor.i_L" ,
 "cst_robotarm.x6_DOF_Robot_Arm.DC_Motors.Wrist_Motor.Power_Amplifier.H_Bridge.v_lag"
,
 "cst_robotarm.x6_DOF_Robot_Arm.DC_Motors.Wrist_Motor.Power_Amplifier.Controlled_PWM_Voltage.p2.v"
, "cst_robotarm.x6_DOF_Robot_Arm.DC_Motors.Wrist_Motor.DC_Motor.v" ,
"cst_robotarm.x6_DOF_Robot_Arm.DC_Motors.Hand_Motor.DC_Motor.i_L" ,
 "cst_robotarm.x6_DOF_Robot_Arm.DC_Motors.Hand_Motor.Power_Amplifier.H_Bridge.v_lag"
,
 "cst_robotarm.x6_DOF_Robot_Arm.DC_Motors.Hand_Motor.Power_Amplifier.Controlled_PWM_Voltage.p2.v"
, "cst_robotarm.x6_DOF_Robot_Arm.DC_Motors.Hand_Motor.DC_Motor.v" ,
"cst_robotarm.x6_DOF_Robot_Arm.DC_Motors.Hand_Motor1.DC_Motor.i_L" ,
 "cst_robotarm.x6_DOF_Robot_Arm.DC_Motors.Hand_Motor1.Power_Amplifier.H_Bridge.v_lag"
,
 "cst_robotarm.x6_DOF_Robot_Arm.DC_Motors.Hand_Motor1.Power_Amplifier.Controlled_PWM_Voltage.p2.v"
, "cst_robotarm.x6_DOF_Robot_Arm.DC_Motors.Hand_Motor1.DC_Motor.v" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" ,
"" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" } ; static boolean_T
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
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . hbu5otnenm [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . hbu5otnenm [ 1 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . hbu5otnenm [ 2 ] ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . hbu5otnenm [ 3 ] ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . hbu5otnenm [ 4 ] ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . hbu5otnenm [ 5 ] ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . hbu5otnenm [ 6 ] ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . hbu5otnenm [ 7 ] ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . hbu5otnenm [ 8 ] ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . hbu5otnenm [ 9 ] ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . hbu5otnenm [ 10 ] ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . hbu5otnenm [ 11 ] ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . hbu5otnenm [ 12 ] ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . hbu5otnenm [ 13 ] ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . hbu5otnenm [ 14 ] ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . hbu5otnenm [ 15 ] ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtX . hbu5otnenm [ 16 ] ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtX . hbu5otnenm [ 17 ] ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtX . hbu5otnenm [ 18 ] ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtX . hbu5otnenm [ 19 ] ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtX . hbu5otnenm [ 20 ] ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtX . hbu5otnenm [ 21 ] ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtX . hbu5otnenm [ 22 ] ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtX . hbu5otnenm [ 23 ] ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtX . hbu5otnenm [ 24 ] ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtX . hbu5otnenm [ 25 ] ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) & rtX . hbu5otnenm [ 26 ] ;
rt_LoggedStateSignalPtrs [ 27 ] = ( void * ) & rtX . hbu5otnenm [ 27 ] ;
rt_LoggedStateSignalPtrs [ 28 ] = ( void * ) & rtX . k32vukczvp ;
rt_LoggedStateSignalPtrs [ 29 ] = ( void * ) & rtX . cim0sdziv1 ;
rt_LoggedStateSignalPtrs [ 30 ] = ( void * ) & rtX . jq40kv3kof ;
rt_LoggedStateSignalPtrs [ 31 ] = ( void * ) & rtX . i0jaxz1ns1 ;
rt_LoggedStateSignalPtrs [ 32 ] = ( void * ) & rtX . kpt4tgks43 ;
rt_LoggedStateSignalPtrs [ 33 ] = ( void * ) & rtX . bgm2jlczsl ;
rt_LoggedStateSignalPtrs [ 34 ] = ( void * ) & rtX . josyacetrj [ 0 ] ;
rt_LoggedStateSignalPtrs [ 35 ] = ( void * ) & rtX . josyacetrj [ 1 ] ;
rt_LoggedStateSignalPtrs [ 36 ] = ( void * ) & rtX . josyacetrj [ 2 ] ;
rt_LoggedStateSignalPtrs [ 37 ] = ( void * ) & rtX . josyacetrj [ 3 ] ;
rt_LoggedStateSignalPtrs [ 38 ] = ( void * ) & rtX . en2pd5luhl [ 0 ] ;
rt_LoggedStateSignalPtrs [ 39 ] = ( void * ) & rtX . en2pd5luhl [ 1 ] ;
rt_LoggedStateSignalPtrs [ 40 ] = ( void * ) & rtX . en2pd5luhl [ 2 ] ;
rt_LoggedStateSignalPtrs [ 41 ] = ( void * ) & rtX . en2pd5luhl [ 3 ] ;
rt_LoggedStateSignalPtrs [ 42 ] = ( void * ) & rtX . en2pd5luhl [ 4 ] ;
rt_LoggedStateSignalPtrs [ 43 ] = ( void * ) & rtX . en2pd5luhl [ 5 ] ;
rt_LoggedStateSignalPtrs [ 44 ] = ( void * ) & rtX . en2pd5luhl [ 6 ] ;
rt_LoggedStateSignalPtrs [ 45 ] = ( void * ) & rtX . en2pd5luhl [ 7 ] ;
rt_LoggedStateSignalPtrs [ 46 ] = ( void * ) & rtX . hywdustkrw [ 0 ] ;
rt_LoggedStateSignalPtrs [ 47 ] = ( void * ) & rtX . hywdustkrw [ 1 ] ;
rt_LoggedStateSignalPtrs [ 48 ] = ( void * ) & rtX . hywdustkrw [ 2 ] ;
rt_LoggedStateSignalPtrs [ 49 ] = ( void * ) & rtX . hywdustkrw [ 3 ] ;
rt_LoggedStateSignalPtrs [ 50 ] = ( void * ) & rtX . l0e0xe2uy4 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 51 ] = ( void * ) & rtX . l0e0xe2uy4 [ 1 ] ;
rt_LoggedStateSignalPtrs [ 52 ] = ( void * ) & rtX . l0e0xe2uy4 [ 2 ] ;
rt_LoggedStateSignalPtrs [ 53 ] = ( void * ) & rtX . l0e0xe2uy4 [ 3 ] ;
rt_LoggedStateSignalPtrs [ 54 ] = ( void * ) & rtX . bp3pw3plbw [ 0 ] ;
rt_LoggedStateSignalPtrs [ 55 ] = ( void * ) & rtX . bp3pw3plbw [ 1 ] ;
rt_LoggedStateSignalPtrs [ 56 ] = ( void * ) & rtX . bp3pw3plbw [ 2 ] ;
rt_LoggedStateSignalPtrs [ 57 ] = ( void * ) & rtX . bp3pw3plbw [ 3 ] ;
rt_LoggedStateSignalPtrs [ 58 ] = ( void * ) & rtX . fxz224311k [ 0 ] ;
rt_LoggedStateSignalPtrs [ 59 ] = ( void * ) & rtX . fxz224311k [ 1 ] ;
rt_LoggedStateSignalPtrs [ 60 ] = ( void * ) & rtX . fxz224311k [ 2 ] ;
rt_LoggedStateSignalPtrs [ 61 ] = ( void * ) & rtX . fxz224311k [ 3 ] ;
rt_LoggedStateSignalPtrs [ 62 ] = ( void * ) & rtDW . pw2pe5xudt ;
rt_LoggedStateSignalPtrs [ 63 ] = ( void * ) & rtDW . osuwpyfhhy ;
rt_LoggedStateSignalPtrs [ 64 ] = ( void * ) & rtDW . n1egvt1ecq ;
rt_LoggedStateSignalPtrs [ 65 ] = ( void * ) & rtDW . fxsfevo34c ;
rt_LoggedStateSignalPtrs [ 66 ] = ( void * ) & rtDW . n0cpdtot23 ;
rt_LoggedStateSignalPtrs [ 67 ] = ( void * ) & rtDW . dhnlnnkmax ;
rt_LoggedStateSignalPtrs [ 68 ] = ( void * ) & rtDW . g55yrwtthh ;
rt_LoggedStateSignalPtrs [ 69 ] = ( void * ) rtDW . kzdsnvl0ni ;
rt_LoggedStateSignalPtrs [ 70 ] = ( void * ) rtDW . e5pyhcmzqf ;
rt_LoggedStateSignalPtrs [ 71 ] = ( void * ) rtDW . nttssxfe10 ;
rt_LoggedStateSignalPtrs [ 72 ] = ( void * ) rtDW . nrfeeblrr2 ;
rt_LoggedStateSignalPtrs [ 73 ] = ( void * ) rtDW . bcq0i32d1x ;
rt_LoggedStateSignalPtrs [ 74 ] = ( void * ) rtDW . iogo3cshur ;
rt_LoggedStateSignalPtrs [ 75 ] = ( void * ) rtDW . grxbe2l4yb ;
rt_LoggedStateSignalPtrs [ 76 ] = ( void * ) rtDW . kdprvszesk ;
rt_LoggedStateSignalPtrs [ 77 ] = ( void * ) rtDW . oi5gacvc4f ;
rt_LoggedStateSignalPtrs [ 78 ] = ( void * ) rtDW . mxa34oudwo ;
rt_LoggedStateSignalPtrs [ 79 ] = ( void * ) rtDW . onw2qwsiq3 ;
rt_LoggedStateSignalPtrs [ 80 ] = ( void * ) rtDW . cmhkhckkbw ;
rt_LoggedStateSignalPtrs [ 81 ] = ( void * ) rtDW . mbaklywx2p ;
rt_LoggedStateSignalPtrs [ 82 ] = ( void * ) rtDW . ceopzbvdcs ;
rt_LoggedStateSignalPtrs [ 83 ] = ( void * ) rtDW . deyxx53lrn ;
rt_LoggedStateSignalPtrs [ 84 ] = ( void * ) rtDW . n5ciem0fnx ;
rt_LoggedStateSignalPtrs [ 85 ] = ( void * ) rtDW . mdu2prkicz ;
rt_LoggedStateSignalPtrs [ 86 ] = ( void * ) rtDW . lzyv2sl2tx ;
rt_LoggedStateSignalPtrs [ 87 ] = ( void * ) rtDW . ohsmzxhpuz ;
rt_LoggedStateSignalPtrs [ 88 ] = ( void * ) rtDW . f2lssqn4ys ;
rt_LoggedStateSignalPtrs [ 89 ] = ( void * ) rtDW . kt415tdana ;
rt_LoggedStateSignalPtrs [ 90 ] = ( void * ) rtDW . bkypudi3a1 ;
rt_LoggedStateSignalPtrs [ 91 ] = ( void * ) rtDW . enulsbgyxv ;
rt_LoggedStateSignalPtrs [ 92 ] = ( void * ) rtDW . owkmmn2z4e ;
rt_LoggedStateSignalPtrs [ 93 ] = ( void * ) rtDW . lnedb1enyu ;
rt_LoggedStateSignalPtrs [ 94 ] = ( void * ) rtDW . gjf2vc4lik ;
rt_LoggedStateSignalPtrs [ 95 ] = ( void * ) rtDW . ghhq4q11uc ;
rt_LoggedStateSignalPtrs [ 96 ] = ( void * ) rtDW . iir45l3sdw ;
rt_LoggedStateSignalPtrs [ 97 ] = ( void * ) rtDW . n5l2mrc3v5 ;
rt_LoggedStateSignalPtrs [ 98 ] = ( void * ) rtDW . phevtdietv ;
rt_LoggedStateSignalPtrs [ 99 ] = ( void * ) rtDW . hrcshd2jnu ;
rt_LoggedStateSignalPtrs [ 100 ] = ( void * ) rtDW . gxur1jxjle ;
rt_LoggedStateSignalPtrs [ 101 ] = ( void * ) rtDW . fdxk5h5nfb ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "tmp_raccel_xout" ) ; rtliSetLogXFinal (
ssGetRTWLogInfo ( rtS ) , "xFinal" ) ; rtliSetLogVarNameModifier (
ssGetRTWLogInfo ( rtS ) , "none" ) ; rtliSetLogFormat ( ssGetRTWLogInfo ( rtS
) , 2 ) ; rtliSetLogMaxRows ( ssGetRTWLogInfo ( rtS ) , 1000 ) ;
rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS ) , 1 ) ; { static void *
rt_LoggedOutputSignalPtrs [ ] = { & rtY . cfas0ohras , & rtY . ii5aafmyuz , &
rtY . ownmemr1ra , & rtY . mgphslt1nt , & rtY . izfs0fudc1 , & rtY .
o3szmiut1b } ; rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( (
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
rt_LoggedOutputBlockNames_0 [ ] = { "cst_robotarm/tAngle" } ; static const
char_T * rt_LoggedOutputLabels_1 [ ] = { "bAngle" } ; static const char_T *
rt_LoggedOutputBlockNames_1 [ ] = { "cst_robotarm/bAngle" } ; static const
char_T * rt_LoggedOutputLabels_2 [ ] = { "fAngle" } ; static const char_T *
rt_LoggedOutputBlockNames_2 [ ] = { "cst_robotarm/fAngle" } ; static const
char_T * rt_LoggedOutputLabels_3 [ ] = { "wAngle" } ; static const char_T *
rt_LoggedOutputBlockNames_3 [ ] = { "cst_robotarm/wAngle" } ; static const
char_T * rt_LoggedOutputLabels_4 [ ] = { "hAngle" } ; static const char_T *
rt_LoggedOutputBlockNames_4 [ ] = { "cst_robotarm/hAngle" } ; static const
char_T * rt_LoggedOutputLabels_5 [ ] = { "gAngle" } ; static const char_T *
rt_LoggedOutputBlockNames_5 [ ] = { "cst_robotarm/gAngle" } ; static
RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static RTWLogSignalInfo
rt_LoggedOutputSignalInfo [ ] = { { 1 , rt_LoggedOutputWidths ,
rt_LoggedOutputNumDimensions , rt_LoggedOutputDimensions ,
rt_LoggedOutputIsVarDims , rt_LoggedCurrentSignalDimensions ,
rt_LoggedCurrentSignalDimensionsSize , rt_LoggedOutputDataTypeIds ,
rt_LoggedOutputComplexSignals , ( NULL ) , rt_LoggingPreprocessingFcnPtrs , {
rt_LoggedOutputLabels_0 } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedOutputBlockNames_0 } , { ( NULL ) } , ( NULL ) ,
rt_RTWLogDataTypeConvert } , { 1 , rt_LoggedOutputWidths + 1 ,
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
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) } ; static ssNonContDerivSigInfo
nonContDerivSigInfo [ 6 ] = { { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
l5vvo0nd3q ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
ht4gnbs14o ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
gcyzeyasy2 ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
hsgnje4cmi ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
fl2ljqidug ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
grwuc0rtke ) , ( NULL ) } } ; { int i ; for ( i = 0 ; i < 62 ; ++ i ) {
contStateJacPerturbBoundMinVec [ i ] = 0 ; contStateJacPerturbBoundMaxVec [ i
] = rtGetInf ( ) ; } } ssSetSolverRelTol ( rtS , 0.001 ) ; ssSetStepSize (
rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , -
1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 0.05 )
; ssSetSolverMaxOrder ( rtS , - 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 1 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 6 ) ; ssSetNonContDerivSigInfos ( rtS ,
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
real_T ) ) ; } } ssSetChecksumVal ( rtS , 0 , 3631493749U ) ;
ssSetChecksumVal ( rtS , 1 , 2582222913U ) ; ssSetChecksumVal ( rtS , 2 ,
3759986011U ) ; ssSetChecksumVal ( rtS , 3 , 1457407973U ) ; { static const
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
