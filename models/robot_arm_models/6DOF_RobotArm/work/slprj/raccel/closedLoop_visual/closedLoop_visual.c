#include "__cf_closedLoop_visual.h"
#include "rt_logging_mmi.h"
#include "closedLoop_visual_capi.h"
#include <math.h>
#include "closedLoop_visual.h"
#include "closedLoop_visual_private.h"
#include "closedLoop_visual_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; extern boolean_T
gblExtModeStartPktReceived ; void raccelForceExtModeShutdown ( ) { if ( !
gblExtModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , & stopRequested ) ; }
rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 1 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 1 ; int_T gbl_raccel_NumST = 2 ; const char_T
* gbl_raccel_Version = "9.1 (R2019a) 23-Nov-2018" ; void
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
"slprj\\raccel\\closedLoop_visual\\closedLoop_visual_Jpattern.mat" ; const
int_T gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern void * gblAperiodicPartitionHitTimes ; const int_T
gblInportDataTypeIdx [ ] = { - 1 } ; const int_T gblInportDims [ ] = { - 1 }
; const int_T gblInportComplex [ ] = { - 1 } ; const int_T
gblInportInterpoFlag [ ] = { - 1 } ; const int_T gblInportContinuous [ ] = {
- 1 } ; int_T enableFcnCallFlag [ ] = { 1 , 1 } ; const char *
raccelLoadInputsAndAperiodicHitTimes ( const char * inportFileName , int *
matFileFormat ) { return rt_RapidReadInportsMatFile ( inportFileName ,
matFileFormat , 1 ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
const jointMotionBus closedLoop_visual_rtZjointMotionBus = { 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 } ; B rtB ; X rtX ; MassMatrix rtMassMatrix ; DW rtDW ;
ExtY rtY ; static SimStruct model_S ; SimStruct * const rtS = & model_S ;
void MdlInitialize ( void ) { boolean_T tmp ; int_T tmp_p ; char * tmp_e ;
tmp = false ; if ( tmp ) { tmp_p = strcmp ( "ode14x" , ssGetSolverName ( rtS
) ) ; if ( tmp_p != 0 ) { tmp_e = solver_mismatch_message ( "ode14x" ,
ssGetSolverName ( rtS ) ) ; ssSetErrorStatus ( rtS , tmp_e ) ; } } rtDW .
drj4xadjzp = 1U ; rtDW . em0fyfhvo3 = 0 ; rtDW . pmanv5vib4 = rtP .
PIDController_InitialConditionForFilter ; rtDW . a0jorff1ss = rtP .
PIDController_InitialConditionForIntegrator ; rtDW . ilqh1aaypb = 1U ; rtDW .
klsm2newc5 = 0 ; rtDW . b3tylb2ldo = rtP .
PIDController_InitialConditionForFilter_bijcxd3biq ; rtDW . fufi0up1jf = rtP
. PIDController_InitialConditionForIntegrator_ber5p0pasi ; rtDW . i0arhlwpkr
= 1U ; rtDW . ambny1b3cd = 0 ; rtDW . msly0lvz1t = rtP .
PIDController_InitialConditionForFilter_l1xa4emaot ; rtDW . mc5mpe4xnm = rtP
. PIDController_InitialConditionForIntegrator_iybb1ixf51 ; rtDW . fd1b2b35qg
= 1U ; rtDW . axpxfydig1 = 0 ; rtDW . lmbrjj1yo3 = rtP .
PIDController_InitialConditionForFilter_mhpnjmh103 ; rtDW . fr123draxv = rtP
. PIDController_InitialConditionForIntegrator_ityg02255r ; rtDW . lbazymzajn
= 1U ; rtDW . eu1vn25ayr = 0 ; rtDW . celnn5zc2p = rtP .
PIDController_InitialConditionForFilter_bdfusxafxj ; rtDW . isrvloycz1 = rtP
. PIDController_InitialConditionForIntegrator_bvowefbi1b ; rtDW . h1vxeb0scs
= 1U ; rtDW . ie2533k5zy = 0 ; rtDW . jiah2uksw0 = rtP .
PIDController_InitialConditionForFilter_gqvtejr1kb ; rtDW . naiwehmog1 = rtP
. PIDController_InitialConditionForIntegrator_fu11ifn3yb ; rtDW . lhb2tg0f4z
= 1U ; rtDW . i03sqzsz3t = 0 ; rtDW . ocn5n2oria = rtP .
PIDController_InitialConditionForIntegrator_hthxsrdqok ; rtDW . cv3ju4xxmy =
1U ; rtDW . a4uh1p4rvk = 0 ; rtDW . nlstabwqbk = rtP .
PIDController_InitialConditionForIntegrator_eumty3ptkf ; rtDW . anoo3rym4l =
1U ; rtDW . bijsz2zuxo = 0 ; rtDW . aryinoifit = rtP .
PIDController_InitialConditionForIntegrator_lucwcnhkok ; rtDW . azsb3bde3k =
1U ; rtDW . pwf2bkifeq = 0 ; rtDW . ih51fkzbrp = rtP .
PIDController_InitialConditionForIntegrator_ijjwn33l3l ; rtDW . akfkxrbuhe =
1U ; rtDW . px4tkgbjaa = 0 ; rtDW . ozwizziqkv = rtP .
PIDController_InitialConditionForIntegrator_hhj2q0e3gi ; rtDW . maqw1lhppg =
1U ; rtDW . ehsgo0dd2g = 0 ; rtDW . i1v5qjzuaj = rtP .
PIDController_InitialConditionForIntegrator_al35d1opha ; tmp = false ; if (
tmp ) { tmp_p = strcmp ( "ode14x" , ssGetSolverName ( rtS ) ) ; if ( tmp_p !=
0 ) { tmp_e = solver_mismatch_message ( "ode14x" , ssGetSolverName ( rtS ) )
; ssSetErrorStatus ( rtS , tmp_e ) ; } } { static int_T modelMassMatrixIr [
60 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15
, 16 , 17 , 18 , 19 , 20 , 21 , 22 , 23 , 24 , 25 , 26 , 27 , 28 , 29 , 30 ,
31 , 32 , 33 , 34 , 35 , 36 , 37 , 38 , 39 , 40 , 41 , 43 , 57 , 45 , 59 , 47
, 54 , 49 , 55 , 51 , 56 , 53 , 58 , 42 , 44 , 46 , 48 , 50 , 52 } ; static
int_T modelMassMatrixJc [ 73 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10
, 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 , 23 , 24 , 25 ,
26 , 27 , 28 , 29 , 30 , 31 , 32 , 33 , 34 , 35 , 36 , 37 , 38 , 39 , 40 , 41
, 42 , 44 , 46 , 48 , 50 , 52 , 54 , 55 , 56 , 57 , 58 , 59 , 60 , 60 , 60 ,
60 , 60 , 60 , 60 , 60 , 60 , 60 , 60 , 60 , 60 , 60 , 60 , 60 , 60 , 60 , 60
} ; static real_T modelMassMatrixPr [ 60 ] = { 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 } ; ( void ) memcpy ( rtMassMatrix . ir , modelMassMatrixIr ,
60 * sizeof ( int_T ) ) ; ( void ) memcpy ( rtMassMatrix . jc ,
modelMassMatrixJc , 73 * sizeof ( int_T ) ) ; ( void ) memcpy ( rtMassMatrix
. pr , modelMassMatrixPr , 60 * sizeof ( real_T ) ) ; } } void MdlStart (
void ) { boolean_T tmp ; NeuDiagnosticManager * diagnosticManager ;
NeModelParameters modelParameters ; real_T tmp_p ; NeslSimulator * simulator
; NeuDiagnosticTree * diagnosticTree ; char * msg ; int_T
parameterBundle_mLogicalParameters_mN ; NeslSimulationData * simulationData ;
real_T time ; NeModelParameters modelParameters_p ; real_T time_p ;
NeModelParameters modelParameters_e ; real_T time_e ; NeModelParameters
modelParameters_i ; real_T time_i ; NeParameterBundle expl_temp ;
NeParameterBundle expl_temp_p ; { void * * slioCatalogueAddr =
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
externalInputIsInDatasetFormat ) { } } simulator = nesl_lease_simulator (
"closedLoop_visual/Plant/Robot/Solver Configuration_1" , 0 , 0 ) ; rtDW .
oiaqjmfdle = ( void * ) simulator ; tmp = pointer_is_null ( rtDW . oiaqjmfdle
) ; if ( tmp ) { closedLoop_visual_2f6391d8_1_gateway ( ) ; simulator =
nesl_lease_simulator ( "closedLoop_visual/Plant/Robot/Solver Configuration_1"
, 0 , 0 ) ; rtDW . oiaqjmfdle = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . fh2yevo3ke = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
orvixz3xj4 = ( void * ) diagnosticManager ; modelParameters . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters . mSolverTolerance = 0.001 ;
modelParameters . mVariableStepSolver = false ; modelParameters .
mFixedStepSize = 0.0025 ; modelParameters . mStartTime = 0.0 ;
modelParameters . mLoadInitialState = false ; modelParameters . mUseSimState
= false ; modelParameters . mLinTrimCompile = false ; modelParameters .
mLoggingMode = SSC_LOGGING_NONE ; modelParameters . mRTWModifiedTimeStamp =
4.76757287E+8 ; tmp_p = 0.001 ; modelParameters . mSolverTolerance = tmp_p ;
tmp_p = 0.0025 ; modelParameters . mFixedStepSize = tmp_p ; tmp = false ;
modelParameters . mVariableStepSolver = tmp ; simulator = ( NeslSimulator * )
rtDW . oiaqjmfdle ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
orvixz3xj4 ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; parameterBundle_mLogicalParameters_mN =
nesl_initialize_simulator ( simulator , & modelParameters , diagnosticManager
) ; if ( parameterBundle_mLogicalParameters_mN != 0 ) { tmp =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = ( NeslSimulator * ) rtDW . oiaqjmfdle ; expl_temp .
mRealParameters . mN = 0 ; expl_temp . mRealParameters . mX = NULL ;
expl_temp . mLogicalParameters . mN = 0 ; expl_temp . mLogicalParameters . mX
= NULL ; expl_temp . mIntegerParameters . mN = 0 ; expl_temp .
mIntegerParameters . mX = NULL ; expl_temp . mIndexParameters . mN = 0 ;
expl_temp . mIndexParameters . mX = NULL ; nesl_simulator_set_rtps (
simulator , expl_temp ) ; simulationData = ( NeslSimulationData * ) rtDW .
fh2yevo3ke ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN =
1 ; simulationData -> mData -> mTime . mX = & time ; simulationData -> mData
-> mContStates . mN = 24 ; simulationData -> mData -> mContStates . mX = &
rtX . gwgkdmwsw2 [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . mq0xsn5npj ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . gntbh4nenu ; tmp = false ; simulationData ->
mData -> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; simulationData -> mData -> mIsSolverCheckingCIC = false ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; simulationData -> mData ->
mIsSolverRequestingReset = false ; simulator = ( NeslSimulator * ) rtDW .
oiaqjmfdle ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . orvixz3xj4
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; parameterBundle_mLogicalParameters_mN =
ne_simulator_method ( simulator , NESL_SIM_INITIALIZEONCE , simulationData ,
diagnosticManager ) ; if ( parameterBundle_mLogicalParameters_mN != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
"closedLoop_visual/Plant/Robot/Solver Configuration_1" , 1 , 0 ) ; rtDW .
nplecvujsr = ( void * ) simulator ; tmp = pointer_is_null ( rtDW . nplecvujsr
) ; if ( tmp ) { closedLoop_visual_2f6391d8_1_gateway ( ) ; simulator =
nesl_lease_simulator ( "closedLoop_visual/Plant/Robot/Solver Configuration_1"
, 1 , 0 ) ; rtDW . nplecvujsr = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . mnmdamtgkb = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
cwe4k4yovf = ( void * ) diagnosticManager ; modelParameters_p . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters_p . mSolverTolerance = 0.001 ;
modelParameters_p . mVariableStepSolver = false ; modelParameters_p .
mFixedStepSize = 0.0025 ; modelParameters_p . mStartTime = 0.0 ;
modelParameters_p . mLoadInitialState = false ; modelParameters_p .
mUseSimState = false ; modelParameters_p . mLinTrimCompile = false ;
modelParameters_p . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_p .
mRTWModifiedTimeStamp = 4.76757287E+8 ; tmp_p = 0.001 ; modelParameters_p .
mSolverTolerance = tmp_p ; tmp_p = 0.0025 ; modelParameters_p .
mFixedStepSize = tmp_p ; tmp = false ; modelParameters_p .
mVariableStepSolver = tmp ; simulator = ( NeslSimulator * ) rtDW . nplecvujsr
; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . cwe4k4yovf ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; parameterBundle_mLogicalParameters_mN = nesl_initialize_simulator (
simulator , & modelParameters_p , diagnosticManager ) ; if (
parameterBundle_mLogicalParameters_mN != 0 ) { tmp = error_buffer_is_empty (
ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg = rtw_diagnostics_msg (
diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } simulationData = (
NeslSimulationData * ) rtDW . mnmdamtgkb ; time_p = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_p ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . ndyjoniux5 ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . gsycnb1f2n ; tmp =
false ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData ->
mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; simulationData ->
mData -> mIsSolverCheckingCIC = false ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; simulationData -> mData -> mIsSolverRequestingReset = false ;
simulator = ( NeslSimulator * ) rtDW . nplecvujsr ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . cwe4k4yovf ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ;
parameterBundle_mLogicalParameters_mN = ne_simulator_method ( simulator ,
NESL_SIM_INITIALIZEONCE , simulationData , diagnosticManager ) ; if (
parameterBundle_mLogicalParameters_mN != 0 ) { tmp = error_buffer_is_empty (
ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg = rtw_diagnostics_msg (
diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } rtB . gmdx0gmqhr [ 0
] = 0.0025 ; rtB . gmdx0gmqhr [ 1 ] = 0.0 ; { FWksInfo * fromwksInfo ; if ( (
fromwksInfo = ( FWksInfo * ) calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL )
) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "tuvar" ; fromwksInfo -> origDataTypeId
= 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo -> origWidth = 6 ;
fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo -> data = ( void
* ) rtP . FromWs_Data0 ; fromwksInfo -> nDataPoints = 20 ; fromwksInfo ->
time = ( double * ) rtP . FromWs_Time0 ; rtDW . nmmvz2iapr . TimePtr =
fromwksInfo -> time ; rtDW . nmmvz2iapr . DataPtr = fromwksInfo -> data ;
rtDW . nmmvz2iapr . RSimInfoPtr = fromwksInfo ; } rtDW . gwwo3yqkan .
PrevIndex = 0 ; } rtB . appycrz0rp [ 0 ] = 0.0025 ; rtB . appycrz0rp [ 1 ] =
0.0 ; rtB . fve542by3u [ 0 ] = 0.0025 ; rtB . fve542by3u [ 1 ] = 0.0 ; rtB .
nnvhvklxhr [ 0 ] = 0.0025 ; rtB . nnvhvklxhr [ 1 ] = 0.0 ; rtB . gqeml2pouw [
0 ] = 0.0025 ; rtB . gqeml2pouw [ 1 ] = 0.0 ; rtB . cck1e03vkh [ 0 ] = 0.0025
; rtB . cck1e03vkh [ 1 ] = 0.0 ; rtB . prvuto05ws [ 0 ] = 0.0025 ; rtB .
prvuto05ws [ 1 ] = 0.0 ; rtB . kpt0des132 [ 0 ] = 0.0025 ; rtB . kpt0des132 [
1 ] = 0.0 ; rtB . i2nhy303vy [ 0 ] = 0.0025 ; rtB . i2nhy303vy [ 1 ] = 0.0 ;
rtB . fv50yqfc3m [ 0 ] = 0.0025 ; rtB . fv50yqfc3m [ 1 ] = 0.0 ; rtB .
cel0300ljr [ 0 ] = 0.0025 ; rtB . cel0300ljr [ 1 ] = 0.0 ; rtB . nqspu5lpuf [
0 ] = 0.0025 ; rtB . nqspu5lpuf [ 1 ] = 0.0 ; { int i ; if ( ( i =
rl32eScopeExists ( 1 ) ) == 0 ) { if ( ( i = rl32eDefScope ( 1 , 2 ) ) != 0 )
{ printf ( "Error creating scope 1\n" ) ; } else { rl32eAddSignal ( 1 ,
rl32eGetSignalNo ( "Plant/Robot/Gain" ) ) ; rl32eSetScope ( 1 , 4 , 5000 ) ;
rl32eSetScope ( 1 , 5 , 0 ) ; rl32eSetScope ( 1 , 6 , 1 ) ; rl32eSetScope ( 1
, 0 , 0 ) ; rl32eSetScope ( 1 , 3 , rl32eGetSignalNo ( "Plant/Robot/Gain" ) )
; rl32eSetScope ( 1 , 1 , 0.0 ) ; rl32eSetScope ( 1 , 2 , 0 ) ; rl32eSetScope
( 1 , 9 , 0 ) ; rl32eSetTargetScope ( 1 , 1 , 2.0 ) ; rl32eSetTargetScope ( 1
, 11 , - 100.0 ) ; rl32eSetTargetScope ( 1 , 10 , 100.0 ) ; xpceScopeAcqOK (
1 , & rtDW . e2yhe4nhkm . AcquireOK ) ; } } if ( i ) {
rl32eRestartAcquisition ( 1 ) ; } } { int i ; if ( ( i = rl32eScopeExists ( 2
) ) == 0 ) { if ( ( i = rl32eDefScope ( 2 , 2 ) ) != 0 ) { printf (
"Error creating scope 2\n" ) ; } else { rl32eAddSignal ( 2 , rl32eGetSignalNo
( "Plant/Robot/Gain1" ) ) ; rl32eSetScope ( 2 , 4 , 5000 ) ; rl32eSetScope (
2 , 5 , 0 ) ; rl32eSetScope ( 2 , 6 , 1 ) ; rl32eSetScope ( 2 , 0 , 0 ) ;
rl32eSetScope ( 2 , 3 , rl32eGetSignalNo ( "Plant/Robot/Gain1" ) ) ;
rl32eSetScope ( 2 , 1 , 0.0 ) ; rl32eSetScope ( 2 , 2 , 0 ) ; rl32eSetScope (
2 , 9 , 0 ) ; rl32eSetTargetScope ( 2 , 1 , 2.0 ) ; rl32eSetTargetScope ( 2 ,
11 , - 45.0 ) ; rl32eSetTargetScope ( 2 , 10 , 45.0 ) ; xpceScopeAcqOK ( 2 ,
& rtDW . fvlncx4bnx . AcquireOK ) ; } } if ( i ) { rl32eRestartAcquisition (
2 ) ; } } { int i ; if ( ( i = rl32eScopeExists ( 3 ) ) == 0 ) { if ( ( i =
rl32eDefScope ( 3 , 2 ) ) != 0 ) { printf ( "Error creating scope 3\n" ) ; }
else { rl32eAddSignal ( 3 , rl32eGetSignalNo ( "Plant/Robot/Gain2" ) ) ;
rl32eSetScope ( 3 , 4 , 5000 ) ; rl32eSetScope ( 3 , 5 , 0 ) ; rl32eSetScope
( 3 , 6 , 1 ) ; rl32eSetScope ( 3 , 0 , 0 ) ; rl32eSetScope ( 3 , 3 ,
rl32eGetSignalNo ( "Plant/Robot/Gain2" ) ) ; rl32eSetScope ( 3 , 1 , 0.0 ) ;
rl32eSetScope ( 3 , 2 , 0 ) ; rl32eSetScope ( 3 , 9 , 0 ) ;
rl32eSetTargetScope ( 3 , 1 , 2.0 ) ; rl32eSetTargetScope ( 3 , 11 , - 100.0
) ; rl32eSetTargetScope ( 3 , 10 , 5.0 ) ; xpceScopeAcqOK ( 3 , & rtDW .
p5p3d1ybah . AcquireOK ) ; } } if ( i ) { rl32eRestartAcquisition ( 3 ) ; } }
{ int i ; if ( ( i = rl32eScopeExists ( 4 ) ) == 0 ) { if ( ( i =
rl32eDefScope ( 4 , 2 ) ) != 0 ) { printf ( "Error creating scope 4\n" ) ; }
else { rl32eAddSignal ( 4 , rl32eGetSignalNo ( "Plant/Robot/Gain3" ) ) ;
rl32eSetScope ( 4 , 4 , 5000 ) ; rl32eSetScope ( 4 , 5 , 0 ) ; rl32eSetScope
( 4 , 6 , 1 ) ; rl32eSetScope ( 4 , 0 , 0 ) ; rl32eSetScope ( 4 , 3 ,
rl32eGetSignalNo ( "Plant/Robot/Gain3" ) ) ; rl32eSetScope ( 4 , 1 , 0.0 ) ;
rl32eSetScope ( 4 , 2 , 0 ) ; rl32eSetScope ( 4 , 9 , 0 ) ;
rl32eSetTargetScope ( 4 , 1 , 2.0 ) ; rl32eSetTargetScope ( 4 , 11 , - 50.0 )
; rl32eSetTargetScope ( 4 , 10 , 50.0 ) ; xpceScopeAcqOK ( 4 , & rtDW .
byciun1ksb . AcquireOK ) ; } } if ( i ) { rl32eRestartAcquisition ( 4 ) ; } }
{ int i ; if ( ( i = rl32eScopeExists ( 5 ) ) == 0 ) { if ( ( i =
rl32eDefScope ( 5 , 2 ) ) != 0 ) { printf ( "Error creating scope 5\n" ) ; }
else { rl32eAddSignal ( 5 , rl32eGetSignalNo ( "Plant/Robot/Gain4" ) ) ;
rl32eSetScope ( 5 , 4 , 5000 ) ; rl32eSetScope ( 5 , 5 , 0 ) ; rl32eSetScope
( 5 , 6 , 1 ) ; rl32eSetScope ( 5 , 0 , 0 ) ; rl32eSetScope ( 5 , 3 ,
rl32eGetSignalNo ( "Plant/Robot/Gain4" ) ) ; rl32eSetScope ( 5 , 1 , 0.0 ) ;
rl32eSetScope ( 5 , 2 , 0 ) ; rl32eSetScope ( 5 , 9 , 0 ) ;
rl32eSetTargetScope ( 5 , 1 , 2.0 ) ; rl32eSetTargetScope ( 5 , 11 , 120.0 )
; rl32eSetTargetScope ( 5 , 10 , 160.0 ) ; xpceScopeAcqOK ( 5 , & rtDW .
kbak3eiue3 . AcquireOK ) ; } } if ( i ) { rl32eRestartAcquisition ( 5 ) ; } }
{ int i ; if ( ( i = rl32eScopeExists ( 6 ) ) == 0 ) { if ( ( i =
rl32eDefScope ( 6 , 2 ) ) != 0 ) { printf ( "Error creating scope 6\n" ) ; }
else { rl32eAddSignal ( 6 , rl32eGetSignalNo ( "Plant/Robot/Gain5" ) ) ;
rl32eSetScope ( 6 , 4 , 5000 ) ; rl32eSetScope ( 6 , 5 , 0 ) ; rl32eSetScope
( 6 , 6 , 1 ) ; rl32eSetScope ( 6 , 0 , 0 ) ; rl32eSetScope ( 6 , 3 ,
rl32eGetSignalNo ( "Plant/Robot/Gain5" ) ) ; rl32eSetScope ( 6 , 1 , 0.0 ) ;
rl32eSetScope ( 6 , 2 , 0 ) ; rl32eSetScope ( 6 , 9 , 0 ) ;
rl32eSetTargetScope ( 6 , 1 , 2.0 ) ; rl32eSetTargetScope ( 6 , 11 , - 160.0
) ; rl32eSetTargetScope ( 6 , 10 , - 120.0 ) ; xpceScopeAcqOK ( 6 , & rtDW .
ef1saldt45 . AcquireOK ) ; } } if ( i ) { rl32eRestartAcquisition ( 6 ) ; } }
simulator = nesl_lease_simulator (
"closedLoop_visual/Plant/Robot/Solver Configuration_2" , 0 , 0 ) ; rtDW .
hoinjnpu05 = ( void * ) simulator ; tmp = pointer_is_null ( rtDW . hoinjnpu05
) ; if ( tmp ) { closedLoop_visual_2f6391d8_2_gateway ( ) ; simulator =
nesl_lease_simulator ( "closedLoop_visual/Plant/Robot/Solver Configuration_2"
, 0 , 0 ) ; rtDW . hoinjnpu05 = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . fdriqx01pi = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
fkez4vs1k0 = ( void * ) diagnosticManager ; modelParameters_e . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters_e . mSolverTolerance = 0.001 ;
modelParameters_e . mVariableStepSolver = false ; modelParameters_e .
mFixedStepSize = 0.0025 ; modelParameters_e . mStartTime = 0.0 ;
modelParameters_e . mLoadInitialState = false ; modelParameters_e .
mUseSimState = false ; modelParameters_e . mLinTrimCompile = false ;
modelParameters_e . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_e .
mRTWModifiedTimeStamp = 4.76757287E+8 ; tmp_p = 0.001 ; modelParameters_e .
mSolverTolerance = tmp_p ; tmp_p = 0.0025 ; modelParameters_e .
mFixedStepSize = tmp_p ; tmp = false ; modelParameters_e .
mVariableStepSolver = tmp ; simulator = ( NeslSimulator * ) rtDW . hoinjnpu05
; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . fkez4vs1k0 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; parameterBundle_mLogicalParameters_mN = nesl_initialize_simulator (
simulator , & modelParameters_e , diagnosticManager ) ; if (
parameterBundle_mLogicalParameters_mN != 0 ) { tmp = error_buffer_is_empty (
ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg = rtw_diagnostics_msg (
diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } simulator = (
NeslSimulator * ) rtDW . hoinjnpu05 ; expl_temp_p . mRealParameters . mN = 0
; expl_temp_p . mRealParameters . mX = NULL ; expl_temp_p .
mLogicalParameters . mN = 0 ; expl_temp_p . mLogicalParameters . mX = NULL ;
expl_temp_p . mIntegerParameters . mN = 0 ; expl_temp_p . mIntegerParameters
. mX = NULL ; expl_temp_p . mIndexParameters . mN = 0 ; expl_temp_p .
mIndexParameters . mX = NULL ; nesl_simulator_set_rtps ( simulator ,
expl_temp_p ) ; simulationData = ( NeslSimulationData * ) rtDW . fdriqx01pi ;
time_e = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_e ; simulationData -> mData ->
mContStates . mN = 30 ; simulationData -> mData -> mContStates . mX = & rtX .
po2xstkzai [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . cawjwjevhp ;
simulationData -> mData -> mModeVector . mN = 6 ; simulationData -> mData ->
mModeVector . mX = & rtDW . jlxuucsfm3 [ 0 ] ; tmp = false ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; simulationData -> mData -> mIsSolverCheckingCIC
= false ; tmp = ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData
-> mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 =
( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; simulationData -> mData ->
mIsSolverRequestingReset = false ; simulator = ( NeslSimulator * ) rtDW .
hoinjnpu05 ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . fkez4vs1k0
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; parameterBundle_mLogicalParameters_mN =
ne_simulator_method ( simulator , NESL_SIM_INITIALIZEONCE , simulationData ,
diagnosticManager ) ; if ( parameterBundle_mLogicalParameters_mN != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
"closedLoop_visual/Plant/Robot/Solver Configuration_2" , 1 , 0 ) ; rtDW .
pfsbl0alkz = ( void * ) simulator ; tmp = pointer_is_null ( rtDW . pfsbl0alkz
) ; if ( tmp ) { closedLoop_visual_2f6391d8_2_gateway ( ) ; simulator =
nesl_lease_simulator ( "closedLoop_visual/Plant/Robot/Solver Configuration_2"
, 1 , 0 ) ; rtDW . pfsbl0alkz = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . cacbslwxfv = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
mkukpfbnwo = ( void * ) diagnosticManager ; modelParameters_i . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters_i . mSolverTolerance = 0.001 ;
modelParameters_i . mVariableStepSolver = false ; modelParameters_i .
mFixedStepSize = 0.0025 ; modelParameters_i . mStartTime = 0.0 ;
modelParameters_i . mLoadInitialState = false ; modelParameters_i .
mUseSimState = false ; modelParameters_i . mLinTrimCompile = false ;
modelParameters_i . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_i .
mRTWModifiedTimeStamp = 4.76757287E+8 ; tmp_p = 0.001 ; modelParameters_i .
mSolverTolerance = tmp_p ; tmp_p = 0.0025 ; modelParameters_i .
mFixedStepSize = tmp_p ; tmp = false ; modelParameters_i .
mVariableStepSolver = tmp ; simulator = ( NeslSimulator * ) rtDW . pfsbl0alkz
; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . mkukpfbnwo ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; parameterBundle_mLogicalParameters_mN = nesl_initialize_simulator (
simulator , & modelParameters_i , diagnosticManager ) ; if (
parameterBundle_mLogicalParameters_mN != 0 ) { tmp = error_buffer_is_empty (
ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg = rtw_diagnostics_msg (
diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } simulationData = (
NeslSimulationData * ) rtDW . cacbslwxfv ; time_i = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_i ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . jcbre1riq4 ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . lujs0ibj0y ; tmp =
false ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData ->
mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; simulationData ->
mData -> mIsSolverCheckingCIC = false ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; simulationData -> mData -> mIsSolverRequestingReset = false ;
simulator = ( NeslSimulator * ) rtDW . pfsbl0alkz ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . mkukpfbnwo ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ;
parameterBundle_mLogicalParameters_mN = ne_simulator_method ( simulator ,
NESL_SIM_INITIALIZEONCE , simulationData , diagnosticManager ) ; if (
parameterBundle_mLogicalParameters_mN != 0 ) { tmp = error_buffer_is_empty (
ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg = rtw_diagnostics_msg (
diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } MdlInitialize ( ) ; }
void MdlOutputs ( int_T tid ) { NeslSimulationData * simulationData ; real_T
time ; real_T tmp [ 24 ] ; int_T tmp_p [ 7 ] ; NeslSimulator * simulator ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; int32_T tmp_e ; char * msg ; real_T time_p ; real_T tmp_i [ 48 ] ; int_T
tmp_m [ 8 ] ; real_T maxV ; boolean_T first_output ; real_T time_e ; real_T
tmp_g [ 48 ] ; int_T tmp_j [ 13 ] ; real_T time_i ; real_T tmp_f [ 84 ] ;
int_T tmp_c [ 14 ] ; real_T u0 ; real_T u2 ; simulationData = (
NeslSimulationData * ) rtDW . fh2yevo3ke ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 24 ;
simulationData -> mData -> mContStates . mX = & rtX . gwgkdmwsw2 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . mq0xsn5npj ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
gntbh4nenu ; first_output = false ; simulationData -> mData -> mFoundZcEvents
= first_output ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; first_output = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = first_output ; simulationData -> mData ->
mIsSolverCheckingCIC = false ; first_output = ssIsSolverComputingJacobian (
rtS ) ; simulationData -> mData -> mIsComputingJacobian = first_output ;
simulationData -> mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian (
rtS ) != 0 ) ; simulationData -> mData -> mIsSolverRequestingReset = false ;
tmp_p [ 0 ] = 0 ; tmp [ 0 ] = rtB . acli4c4thv [ 0 ] ; tmp [ 1 ] = rtB .
acli4c4thv [ 1 ] ; tmp [ 2 ] = rtB . acli4c4thv [ 2 ] ; tmp [ 3 ] = rtB .
acli4c4thv [ 3 ] ; tmp_p [ 1 ] = 4 ; tmp [ 4 ] = rtB . knzgt5pcsx [ 0 ] ; tmp
[ 5 ] = rtB . knzgt5pcsx [ 1 ] ; tmp [ 6 ] = rtB . knzgt5pcsx [ 2 ] ; tmp [ 7
] = rtB . knzgt5pcsx [ 3 ] ; tmp_p [ 2 ] = 8 ; tmp [ 8 ] = rtB . orzbfuvelk [
0 ] ; tmp [ 9 ] = rtB . orzbfuvelk [ 1 ] ; tmp [ 10 ] = rtB . orzbfuvelk [ 2
] ; tmp [ 11 ] = rtB . orzbfuvelk [ 3 ] ; tmp_p [ 3 ] = 12 ; tmp [ 12 ] = rtB
. cvgkgbsato [ 0 ] ; tmp [ 13 ] = rtB . cvgkgbsato [ 1 ] ; tmp [ 14 ] = rtB .
cvgkgbsato [ 2 ] ; tmp [ 15 ] = rtB . cvgkgbsato [ 3 ] ; tmp_p [ 4 ] = 16 ;
tmp [ 16 ] = rtB . nfrqasfoje [ 0 ] ; tmp [ 17 ] = rtB . nfrqasfoje [ 1 ] ;
tmp [ 18 ] = rtB . nfrqasfoje [ 2 ] ; tmp [ 19 ] = rtB . nfrqasfoje [ 3 ] ;
tmp_p [ 5 ] = 20 ; tmp [ 20 ] = rtB . dvzsxsm21d [ 0 ] ; tmp [ 21 ] = rtB .
dvzsxsm21d [ 1 ] ; tmp [ 22 ] = rtB . dvzsxsm21d [ 2 ] ; tmp [ 23 ] = rtB .
dvzsxsm21d [ 3 ] ; tmp_p [ 6 ] = 24 ; simulationData -> mData -> mInputValues
. mN = 24 ; simulationData -> mData -> mInputValues . mX = & tmp [ 0 ] ;
simulationData -> mData -> mInputOffsets . mN = 7 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_p [ 0 ] ; simulationData -> mData -> mOutputs .
mN = 24 ; simulationData -> mData -> mOutputs . mX = & rtB . pk3fe41ded [ 0 ]
; simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData
-> mSampleHits . mX = NULL ; simulationData -> mData ->
mIsFundamentalSampleHit = false ; simulationData -> mData -> mTolerances . mN
= 0 ; simulationData -> mData -> mTolerances . mX = NULL ; simulationData ->
mData -> mCstateHasChanged = false ; simulator = ( NeslSimulator * ) rtDW .
oiaqjmfdle ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . orvixz3xj4
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_e = ne_simulator_method ( simulator ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( tmp_e != 0 ) {
first_output = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
first_output ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } simulationData = (
NeslSimulationData * ) rtDW . mnmdamtgkb ; time_p = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_p ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . ndyjoniux5 ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . gsycnb1f2n ;
first_output = false ; simulationData -> mData -> mFoundZcEvents =
first_output ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; first_output = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = first_output ; simulationData -> mData ->
mIsSolverCheckingCIC = false ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; simulationData -> mData -> mIsSolverRequestingReset = false ; tmp_m [
0 ] = 0 ; tmp_i [ 0 ] = rtB . acli4c4thv [ 0 ] ; tmp_i [ 1 ] = rtB .
acli4c4thv [ 1 ] ; tmp_i [ 2 ] = rtB . acli4c4thv [ 2 ] ; tmp_i [ 3 ] = rtB .
acli4c4thv [ 3 ] ; tmp_m [ 1 ] = 4 ; tmp_i [ 4 ] = rtB . knzgt5pcsx [ 0 ] ;
tmp_i [ 5 ] = rtB . knzgt5pcsx [ 1 ] ; tmp_i [ 6 ] = rtB . knzgt5pcsx [ 2 ] ;
tmp_i [ 7 ] = rtB . knzgt5pcsx [ 3 ] ; tmp_m [ 2 ] = 8 ; tmp_i [ 8 ] = rtB .
orzbfuvelk [ 0 ] ; tmp_i [ 9 ] = rtB . orzbfuvelk [ 1 ] ; tmp_i [ 10 ] = rtB
. orzbfuvelk [ 2 ] ; tmp_i [ 11 ] = rtB . orzbfuvelk [ 3 ] ; tmp_m [ 3 ] = 12
; tmp_i [ 12 ] = rtB . cvgkgbsato [ 0 ] ; tmp_i [ 13 ] = rtB . cvgkgbsato [ 1
] ; tmp_i [ 14 ] = rtB . cvgkgbsato [ 2 ] ; tmp_i [ 15 ] = rtB . cvgkgbsato [
3 ] ; tmp_m [ 4 ] = 16 ; tmp_i [ 16 ] = rtB . nfrqasfoje [ 0 ] ; tmp_i [ 17 ]
= rtB . nfrqasfoje [ 1 ] ; tmp_i [ 18 ] = rtB . nfrqasfoje [ 2 ] ; tmp_i [ 19
] = rtB . nfrqasfoje [ 3 ] ; tmp_m [ 5 ] = 20 ; tmp_i [ 20 ] = rtB .
dvzsxsm21d [ 0 ] ; tmp_i [ 21 ] = rtB . dvzsxsm21d [ 1 ] ; tmp_i [ 22 ] = rtB
. dvzsxsm21d [ 2 ] ; tmp_i [ 23 ] = rtB . dvzsxsm21d [ 3 ] ; tmp_m [ 6 ] = 24
; memcpy ( & tmp_i [ 24 ] , & rtB . pk3fe41ded [ 0 ] , 24U * sizeof ( real_T
) ) ; tmp_m [ 7 ] = 48 ; simulationData -> mData -> mInputValues . mN = 48 ;
simulationData -> mData -> mInputValues . mX = & tmp_i [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 8 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_m [ 0 ] ; simulationData -> mData -> mOutputs . mN = 12 ;
simulationData -> mData -> mOutputs . mX = & rtB . j3nnkf33ca [ 0 ] ;
simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData ->
mSampleHits . mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit
= false ; simulationData -> mData -> mTolerances . mN = 0 ; simulationData ->
mData -> mTolerances . mX = NULL ; simulationData -> mData ->
mCstateHasChanged = false ; simulator = ( NeslSimulator * ) rtDW . nplecvujsr
; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . cwe4k4yovf ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_e = ne_simulator_method ( simulator , NESL_SIM_OUTPUTS ,
simulationData , diagnosticManager ) ; if ( tmp_e != 0 ) { first_output =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( first_output ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } if ( ssIsMajorTimeStep ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtB . klh5xjdddk = rtP
. GAIN_Gain * rtB . j3nnkf33ca [ 4 ] ; rtB . gq3rvdqlb4 = rtP . Gain_Gain *
rtB . klh5xjdddk ; rtB . nove0333w1 = rtP . GAIN_Gain_ghcgkbkv3x * rtB .
j3nnkf33ca [ 6 ] ; rtB . otwgtai0e3 = rtP . Gain1_Gain * rtB . nove0333w1 ;
rtB . jst1wdleti = rtP . GAIN_Gain_bkr1j0bd3l * rtB . j3nnkf33ca [ 8 ] ; rtB
. jittjyrdyi = rtP . Gain2_Gain * rtB . jst1wdleti ; rtB . l4cp2r2na2 = rtP .
GAIN_Gain_lksnrktixr * rtB . j3nnkf33ca [ 10 ] ; rtB . ohmgnj5xqj = rtP .
Gain3_Gain * rtB . l4cp2r2na2 ; rtB . cf4a24iltw = rtP . GAIN_Gain_iurldfivlm
* rtB . j3nnkf33ca [ 2 ] ; rtB . ovijgdd4i5 = rtP . Gain4_Gain * rtB .
cf4a24iltw ; rtB . mfkdageusw = rtP . GAIN_Gain_cegszobnvd * rtB . j3nnkf33ca
[ 0 ] ; rtB . h1qge1ihq1 = rtP . Gain5_Gain * rtB . mfkdageusw ; rtB .
ieawijwcsm . upperArmJointMotion = rtB . gq3rvdqlb4 ; rtB . ieawijwcsm .
foreArmJointMotion = rtB . otwgtai0e3 ; rtB . ieawijwcsm . wristJointMotion =
rtB . jittjyrdyi ; rtB . ieawijwcsm . gripperJointMotion = rtB . ohmgnj5xqj ;
rtB . ieawijwcsm . rightFingerJointMotion = rtB . ovijgdd4i5 ; rtB .
ieawijwcsm . leftFingerJointMotion = rtB . h1qge1ihq1 ; rtY . nrsrysiyzh =
rtB . ieawijwcsm ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { maxV =
muDoubleScalarMax ( rtB . gmdx0gmqhr [ 0 ] , rtP .
FADiscretePositioncontrol_tc ) ; rtB . ifmseoanq0 = maxV ; rtB . oetqfd0pi1 =
( real_T ) ( rtB . ifmseoanq0 == 0.0 ) * 2.2204460492503131e-16 + rtB .
ifmseoanq0 ; rtB . g4zpnhujpe = rtP . FADiscretePositioncontrol_tc - rtB .
gmdx0gmqhr [ 0 ] ; rtB . jdslzqjqun = ( rtB . g4zpnhujpe <= rtP .
Constant_Value ) ; } { real_T * pDataValues = ( real_T * ) rtDW . nmmvz2iapr
. DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . nmmvz2iapr . TimePtr ;
int_T currTimeIndex = rtDW . gwwo3yqkan . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . nmmvz2iapr . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . gwwo3yqkan . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 6 ; ++ elIdx ) { ( & rtB . gtcchxvpps [ 0 ] ) [ elIdx ] =
pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; } } } else { {
int_T elIdx ; for ( elIdx = 0 ; elIdx < 6 ; ++ elIdx ) { ( & rtB . gtcchxvpps
[ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ; pDataValues +=
numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 =
1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 6 ; ++ elIdx ) { d1 = pDataValues [
TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( & rtB . gtcchxvpps [ 0 ]
) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ; pDataValues +=
numPoints ; } } } } } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . mobqz3bh01
= rtB . gtcchxvpps [ 1 ] ; rtB . f3xrqr2bqr = rtP .
LowPassFilterDiscreteorContinuous_K * rtB . mobqz3bh01 ; if ( rtDW .
drj4xadjzp != 0 ) { rtDW . a5b2pf1ca1 = rtB . f3xrqr2bqr ; if ( rtDW .
a5b2pf1ca1 >= rtP . Integrator_UpperSat ) { rtDW . a5b2pf1ca1 = rtP .
Integrator_UpperSat ; } else { if ( rtDW . a5b2pf1ca1 <= rtP .
Integrator_LowerSat ) { rtDW . a5b2pf1ca1 = rtP . Integrator_LowerSat ; } } }
if ( rtB . jdslzqjqun || ( rtDW . em0fyfhvo3 != 0 ) ) { rtDW . a5b2pf1ca1 =
rtB . f3xrqr2bqr ; if ( rtDW . a5b2pf1ca1 >= rtP . Integrator_UpperSat ) {
rtDW . a5b2pf1ca1 = rtP . Integrator_UpperSat ; } else { if ( rtDW .
a5b2pf1ca1 <= rtP . Integrator_LowerSat ) { rtDW . a5b2pf1ca1 = rtP .
Integrator_LowerSat ; } } } if ( rtDW . a5b2pf1ca1 >= rtP .
Integrator_UpperSat ) { rtDW . a5b2pf1ca1 = rtP . Integrator_UpperSat ; }
else { if ( rtDW . a5b2pf1ca1 <= rtP . Integrator_LowerSat ) { rtDW .
a5b2pf1ca1 = rtP . Integrator_LowerSat ; } } rtB . j1dprpcdq2 = rtDW .
a5b2pf1ca1 ; u0 = rtB . j1dprpcdq2 ; maxV = rtP . Saturation_LowerSat ; u2 =
rtP . Saturation_UpperSat ; if ( u0 > u2 ) { rtB . gbzealeak2 = u2 ; } else
if ( u0 < maxV ) { rtB . gbzealeak2 = maxV ; } else { rtB . gbzealeak2 = u0 ;
} rtB . isgcnkp2g3 = rtB . f3xrqr2bqr - rtB . gbzealeak2 ; rtB . blfe1jeuhj =
1.0 / rtB . oetqfd0pi1 * rtB . isgcnkp2g3 ; if ( ssIsSampleHit ( rtS , 1 , 0
) ) { rtB . hyv235hdhv = rtB . otwgtai0e3 ; } rtB . guwewsy53e = rtB .
gbzealeak2 - rtB . hyv235hdhv ; rtB . hangcs5e4q = rtP .
FADiscretePositioncontrol_Kd * rtB . guwewsy53e ; rtB . hcxw2v1h5q = rtDW .
pmanv5vib4 ; rtB . hxcesrcaxs = rtB . hangcs5e4q - rtB . hcxw2v1h5q ; rtB .
jn3qzzjeuq = rtP . FADiscretePositioncontrol_Ki * rtB . guwewsy53e ; rtB .
a2nda0rlib = rtDW . a0jorff1ss ; rtB . lqhzivpz11 = rtP .
FADiscretePositioncontrol_N * rtB . hxcesrcaxs ; rtB . j5dyuksjnm = rtP .
FADiscretePositioncontrol_Kp * rtB . guwewsy53e ; rtB . bplef3dxnq = ( rtB .
j5dyuksjnm + rtB . a2nda0rlib ) + rtB . lqhzivpz11 ; maxV = - rtP .
FADiscretePositioncontrol_sat ; u0 = rtB . bplef3dxnq ; u2 = rtP .
FADiscretePositioncontrol_sat ; if ( u0 > u2 ) { rtB . erkqnit1wv = u2 ; }
else if ( u0 < maxV ) { rtB . erkqnit1wv = maxV ; } else { rtB . erkqnit1wv =
u0 ; } maxV = muDoubleScalarMax ( rtB . appycrz0rp [ 0 ] , rtP .
GADiscretePositioncontrol_tc ) ; rtB . jn5rmd4dvo = maxV ; rtB . cauosez44j =
( real_T ) ( rtB . jn5rmd4dvo == 0.0 ) * 2.2204460492503131e-16 + rtB .
jn5rmd4dvo ; rtB . gkqcyjdn00 = rtP . GADiscretePositioncontrol_tc - rtB .
appycrz0rp [ 0 ] ; rtB . phkrya1ay3 = ( rtB . gkqcyjdn00 <= rtP .
Constant_Value_lrixhn0dkj ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB .
ibjatfeerz = rtB . gtcchxvpps [ 3 ] ; } rtB . cpbkgwmthj = rtP .
LowPassFilterDiscreteorContinuous_K_dblmcrutuw * rtB . ibjatfeerz ; if ( rtDW
. ilqh1aaypb != 0 ) { rtDW . bxa45rw5vc = rtB . cpbkgwmthj ; if ( rtDW .
bxa45rw5vc >= rtP . Integrator_UpperSat_czguogaom1 ) { rtDW . bxa45rw5vc =
rtP . Integrator_UpperSat_czguogaom1 ; } else { if ( rtDW . bxa45rw5vc <= rtP
. Integrator_LowerSat_fhhrbnlssc ) { rtDW . bxa45rw5vc = rtP .
Integrator_LowerSat_fhhrbnlssc ; } } } if ( rtB . phkrya1ay3 || ( rtDW .
klsm2newc5 != 0 ) ) { rtDW . bxa45rw5vc = rtB . cpbkgwmthj ; if ( rtDW .
bxa45rw5vc >= rtP . Integrator_UpperSat_czguogaom1 ) { rtDW . bxa45rw5vc =
rtP . Integrator_UpperSat_czguogaom1 ; } else { if ( rtDW . bxa45rw5vc <= rtP
. Integrator_LowerSat_fhhrbnlssc ) { rtDW . bxa45rw5vc = rtP .
Integrator_LowerSat_fhhrbnlssc ; } } } if ( rtDW . bxa45rw5vc >= rtP .
Integrator_UpperSat_czguogaom1 ) { rtDW . bxa45rw5vc = rtP .
Integrator_UpperSat_czguogaom1 ; } else { if ( rtDW . bxa45rw5vc <= rtP .
Integrator_LowerSat_fhhrbnlssc ) { rtDW . bxa45rw5vc = rtP .
Integrator_LowerSat_fhhrbnlssc ; } } rtB . jnbqjzgywz = rtDW . bxa45rw5vc ;
u0 = rtB . jnbqjzgywz ; maxV = rtP . Saturation_LowerSat_kngpvfh4ls ; u2 =
rtP . Saturation_UpperSat_b1wm32nmrw ; if ( u0 > u2 ) { rtB . alj4dpbhob = u2
; } else if ( u0 < maxV ) { rtB . alj4dpbhob = maxV ; } else { rtB .
alj4dpbhob = u0 ; } rtB . kqypmuwfo0 = rtB . cpbkgwmthj - rtB . alj4dpbhob ;
rtB . kqtmnjsgam = 1.0 / rtB . cauosez44j * rtB . kqypmuwfo0 ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . j31fpylddv = rtB . ohmgnj5xqj ; } rtB
. gl1ivij0yb = rtB . alj4dpbhob - rtB . j31fpylddv ; rtB . m3jycwj4xz = rtP .
GADiscretePositioncontrol_Kd * rtB . gl1ivij0yb ; rtB . hsggggwtm5 = rtDW .
b3tylb2ldo ; rtB . c202fqhyxc = rtB . m3jycwj4xz - rtB . hsggggwtm5 ; rtB .
c4dmfd3ngi = rtP . GADiscretePositioncontrol_Ki * rtB . gl1ivij0yb ; rtB .
hbedvtrsnp = rtDW . fufi0up1jf ; rtB . fvzicuhi4u = rtP .
GADiscretePositioncontrol_N * rtB . c202fqhyxc ; rtB . m1ps3yqjbz = rtP .
GADiscretePositioncontrol_Kp * rtB . gl1ivij0yb ; rtB . h4sewwbs22 = ( rtB .
m1ps3yqjbz + rtB . hbedvtrsnp ) + rtB . fvzicuhi4u ; maxV = - rtP .
GADiscretePositioncontrol_sat ; u0 = rtB . h4sewwbs22 ; u2 = rtP .
GADiscretePositioncontrol_sat ; if ( u0 > u2 ) { rtB . kl45z53n04 = u2 ; }
else if ( u0 < maxV ) { rtB . kl45z53n04 = maxV ; } else { rtB . kl45z53n04 =
u0 ; } maxV = muDoubleScalarMax ( rtB . fve542by3u [ 0 ] , rtP .
LFADiscretePositioncontrol_tc ) ; rtB . hongxggq3i = maxV ; rtB . bbphhn30rs
= ( real_T ) ( rtB . hongxggq3i == 0.0 ) * 2.2204460492503131e-16 + rtB .
hongxggq3i ; rtB . lbccudm3ny = rtP . LFADiscretePositioncontrol_tc - rtB .
fve542by3u [ 0 ] ; rtB . oom55hkhas = ( rtB . lbccudm3ny <= rtP .
Constant_Value_angmd05wja ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB .
e0qjdcsht3 = rtB . gtcchxvpps [ 5 ] ; } rtB . owvvmkpxl0 = rtP .
LowPassFilterDiscreteorContinuous_K_cgk1ez4ty3 * rtB . e0qjdcsht3 ; if ( rtDW
. i0arhlwpkr != 0 ) { rtDW . nqxlzyezrj = rtB . owvvmkpxl0 ; if ( rtDW .
nqxlzyezrj >= rtP . Integrator_UpperSat_jilgocqigo ) { rtDW . nqxlzyezrj =
rtP . Integrator_UpperSat_jilgocqigo ; } else { if ( rtDW . nqxlzyezrj <= rtP
. Integrator_LowerSat_meej1knsfc ) { rtDW . nqxlzyezrj = rtP .
Integrator_LowerSat_meej1knsfc ; } } } if ( rtB . oom55hkhas || ( rtDW .
ambny1b3cd != 0 ) ) { rtDW . nqxlzyezrj = rtB . owvvmkpxl0 ; if ( rtDW .
nqxlzyezrj >= rtP . Integrator_UpperSat_jilgocqigo ) { rtDW . nqxlzyezrj =
rtP . Integrator_UpperSat_jilgocqigo ; } else { if ( rtDW . nqxlzyezrj <= rtP
. Integrator_LowerSat_meej1knsfc ) { rtDW . nqxlzyezrj = rtP .
Integrator_LowerSat_meej1knsfc ; } } } if ( rtDW . nqxlzyezrj >= rtP .
Integrator_UpperSat_jilgocqigo ) { rtDW . nqxlzyezrj = rtP .
Integrator_UpperSat_jilgocqigo ; } else { if ( rtDW . nqxlzyezrj <= rtP .
Integrator_LowerSat_meej1knsfc ) { rtDW . nqxlzyezrj = rtP .
Integrator_LowerSat_meej1knsfc ; } } rtB . biteowggfb = rtDW . nqxlzyezrj ;
u0 = rtB . biteowggfb ; maxV = rtP . Saturation_LowerSat_ndevo5xjvz ; u2 =
rtP . Saturation_UpperSat_pkgoxl0lrf ; if ( u0 > u2 ) { rtB . kgov5zqwtr = u2
; } else if ( u0 < maxV ) { rtB . kgov5zqwtr = maxV ; } else { rtB .
kgov5zqwtr = u0 ; } rtB . pjofez22sm = rtB . owvvmkpxl0 - rtB . kgov5zqwtr ;
rtB . i2u0a1gwhd = 1.0 / rtB . bbphhn30rs * rtB . pjofez22sm ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . lsz5cnktz4 = rtB . h1qge1ihq1 ; } rtB
. g0juyqsq32 = rtB . kgov5zqwtr - rtB . lsz5cnktz4 ; rtB . cirtybmflb = rtP .
LFADiscretePositioncontrol_Kd * rtB . g0juyqsq32 ; rtB . mop4zig5wo = rtDW .
msly0lvz1t ; rtB . e3utpjlh4a = rtB . cirtybmflb - rtB . mop4zig5wo ; rtB .
f2pnpawcdm = rtP . LFADiscretePositioncontrol_Ki * rtB . g0juyqsq32 ; rtB .
oijqqlxvyg = rtDW . mc5mpe4xnm ; rtB . psg2d3ulvi = rtP .
LFADiscretePositioncontrol_N * rtB . e3utpjlh4a ; rtB . o4k3u44nl4 = rtP .
LFADiscretePositioncontrol_Kp * rtB . g0juyqsq32 ; rtB . j21fe4hamr = ( rtB .
o4k3u44nl4 + rtB . oijqqlxvyg ) + rtB . psg2d3ulvi ; maxV = - rtP .
LFADiscretePositioncontrol_sat ; u0 = rtB . j21fe4hamr ; u2 = rtP .
LFADiscretePositioncontrol_sat ; if ( u0 > u2 ) { rtB . cta4ely3va = u2 ; }
else if ( u0 < maxV ) { rtB . cta4ely3va = maxV ; } else { rtB . cta4ely3va =
u0 ; } maxV = muDoubleScalarMax ( rtB . nnvhvklxhr [ 0 ] , rtP .
RFADiscretePositioncontrol_tc ) ; rtB . oxnawm14z4 = maxV ; rtB . hp3kdyuspp
= ( real_T ) ( rtB . oxnawm14z4 == 0.0 ) * 2.2204460492503131e-16 + rtB .
oxnawm14z4 ; rtB . gubbkenzxe = rtP . RFADiscretePositioncontrol_tc - rtB .
nnvhvklxhr [ 0 ] ; rtB . ffarlqqvec = ( rtB . gubbkenzxe <= rtP .
Constant_Value_fdkwrdxtu1 ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB .
etk2wovvbv = rtB . gtcchxvpps [ 4 ] ; } rtB . f1ob31k1pi = rtP .
LowPassFilterDiscreteorContinuous_K_kyey52ep50 * rtB . etk2wovvbv ; if ( rtDW
. fd1b2b35qg != 0 ) { rtDW . giau5bnyxy = rtB . f1ob31k1pi ; if ( rtDW .
giau5bnyxy >= rtP . Integrator_UpperSat_k3htidczg5 ) { rtDW . giau5bnyxy =
rtP . Integrator_UpperSat_k3htidczg5 ; } else { if ( rtDW . giau5bnyxy <= rtP
. Integrator_LowerSat_ieq4zg3egn ) { rtDW . giau5bnyxy = rtP .
Integrator_LowerSat_ieq4zg3egn ; } } } if ( rtB . ffarlqqvec || ( rtDW .
axpxfydig1 != 0 ) ) { rtDW . giau5bnyxy = rtB . f1ob31k1pi ; if ( rtDW .
giau5bnyxy >= rtP . Integrator_UpperSat_k3htidczg5 ) { rtDW . giau5bnyxy =
rtP . Integrator_UpperSat_k3htidczg5 ; } else { if ( rtDW . giau5bnyxy <= rtP
. Integrator_LowerSat_ieq4zg3egn ) { rtDW . giau5bnyxy = rtP .
Integrator_LowerSat_ieq4zg3egn ; } } } if ( rtDW . giau5bnyxy >= rtP .
Integrator_UpperSat_k3htidczg5 ) { rtDW . giau5bnyxy = rtP .
Integrator_UpperSat_k3htidczg5 ; } else { if ( rtDW . giau5bnyxy <= rtP .
Integrator_LowerSat_ieq4zg3egn ) { rtDW . giau5bnyxy = rtP .
Integrator_LowerSat_ieq4zg3egn ; } } rtB . lszg3ivcf1 = rtDW . giau5bnyxy ;
u0 = rtB . lszg3ivcf1 ; maxV = rtP . Saturation_LowerSat_pnxjdliiid ; u2 =
rtP . Saturation_UpperSat_h1n4bbj4rg ; if ( u0 > u2 ) { rtB . ot5fmesjqg = u2
; } else if ( u0 < maxV ) { rtB . ot5fmesjqg = maxV ; } else { rtB .
ot5fmesjqg = u0 ; } rtB . naknctmcqx = rtB . f1ob31k1pi - rtB . ot5fmesjqg ;
rtB . p0evwnfym1 = 1.0 / rtB . hp3kdyuspp * rtB . naknctmcqx ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . gorad2wziy = rtB . ovijgdd4i5 ; } rtB
. p5uqm4tulo = rtB . ot5fmesjqg - rtB . gorad2wziy ; rtB . agyiw10lae = rtP .
RFADiscretePositioncontrol_Kd * rtB . p5uqm4tulo ; rtB . lusldgarmx = rtDW .
lmbrjj1yo3 ; rtB . fh55jet01v = rtB . agyiw10lae - rtB . lusldgarmx ; rtB .
ddcumew3cn = rtP . RFADiscretePositioncontrol_Ki * rtB . p5uqm4tulo ; rtB .
fau1h3urp2 = rtDW . fr123draxv ; rtB . miypggsa3e = rtP .
RFADiscretePositioncontrol_N * rtB . fh55jet01v ; rtB . hbhijaspkp = rtP .
RFADiscretePositioncontrol_Kp * rtB . p5uqm4tulo ; rtB . fsrrzmku3j = ( rtB .
hbhijaspkp + rtB . fau1h3urp2 ) + rtB . miypggsa3e ; maxV = - rtP .
RFADiscretePositioncontrol_sat ; u0 = rtB . fsrrzmku3j ; u2 = rtP .
RFADiscretePositioncontrol_sat ; if ( u0 > u2 ) { rtB . m1hwo11cjm = u2 ; }
else if ( u0 < maxV ) { rtB . m1hwo11cjm = maxV ; } else { rtB . m1hwo11cjm =
u0 ; } maxV = muDoubleScalarMax ( rtB . gqeml2pouw [ 0 ] , rtP .
UADiscretePositioncontrol_tc ) ; rtB . k5jw43vz3d = maxV ; rtB . cxtkjg3ys4 =
( real_T ) ( rtB . k5jw43vz3d == 0.0 ) * 2.2204460492503131e-16 + rtB .
k5jw43vz3d ; rtB . hj0hmqrh4a = rtP . UADiscretePositioncontrol_tc - rtB .
gqeml2pouw [ 0 ] ; rtB . jzdyk043zo = ( rtB . hj0hmqrh4a <= rtP .
Constant_Value_gt3vzcqmtv ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB .
ntghirwfvx = rtB . gtcchxvpps [ 0 ] ; } rtB . exgkqo5cql = rtP .
LowPassFilterDiscreteorContinuous_K_paeb1p5zo1 * rtB . ntghirwfvx ; if ( rtDW
. lbazymzajn != 0 ) { rtDW . bxdnouemfh = rtB . exgkqo5cql ; if ( rtDW .
bxdnouemfh >= rtP . Integrator_UpperSat_pm2laakorw ) { rtDW . bxdnouemfh =
rtP . Integrator_UpperSat_pm2laakorw ; } else { if ( rtDW . bxdnouemfh <= rtP
. Integrator_LowerSat_dap2gqqil4 ) { rtDW . bxdnouemfh = rtP .
Integrator_LowerSat_dap2gqqil4 ; } } } if ( rtB . jzdyk043zo || ( rtDW .
eu1vn25ayr != 0 ) ) { rtDW . bxdnouemfh = rtB . exgkqo5cql ; if ( rtDW .
bxdnouemfh >= rtP . Integrator_UpperSat_pm2laakorw ) { rtDW . bxdnouemfh =
rtP . Integrator_UpperSat_pm2laakorw ; } else { if ( rtDW . bxdnouemfh <= rtP
. Integrator_LowerSat_dap2gqqil4 ) { rtDW . bxdnouemfh = rtP .
Integrator_LowerSat_dap2gqqil4 ; } } } if ( rtDW . bxdnouemfh >= rtP .
Integrator_UpperSat_pm2laakorw ) { rtDW . bxdnouemfh = rtP .
Integrator_UpperSat_pm2laakorw ; } else { if ( rtDW . bxdnouemfh <= rtP .
Integrator_LowerSat_dap2gqqil4 ) { rtDW . bxdnouemfh = rtP .
Integrator_LowerSat_dap2gqqil4 ; } } rtB . es4yz3gayy = rtDW . bxdnouemfh ;
u0 = rtB . es4yz3gayy ; maxV = rtP . Saturation_LowerSat_nciqxysdzy ; u2 =
rtP . Saturation_UpperSat_j0pkmjhttf ; if ( u0 > u2 ) { rtB . bgbmzzakwx = u2
; } else if ( u0 < maxV ) { rtB . bgbmzzakwx = maxV ; } else { rtB .
bgbmzzakwx = u0 ; } rtB . hnqricx3sj = rtB . exgkqo5cql - rtB . bgbmzzakwx ;
rtB . l5v4lpwsc3 = 1.0 / rtB . cxtkjg3ys4 * rtB . hnqricx3sj ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . czblalftv1 = rtB . gq3rvdqlb4 ; } rtB
. fvd32u41b3 = rtB . bgbmzzakwx - rtB . czblalftv1 ; rtB . o1uizp3fbz = rtP .
UADiscretePositioncontrol_Kd * rtB . fvd32u41b3 ; rtB . j2pimpbea4 = rtDW .
celnn5zc2p ; rtB . d0ncuxtedw = rtB . o1uizp3fbz - rtB . j2pimpbea4 ; rtB .
fcted5fdfb = rtP . UADiscretePositioncontrol_Ki * rtB . fvd32u41b3 ; rtB .
n3k1jwldyd = rtDW . isrvloycz1 ; rtB . hu2rgr3hfe = rtP .
UADiscretePositioncontrol_N * rtB . d0ncuxtedw ; rtB . gglnc0muns = rtP .
UADiscretePositioncontrol_Kp * rtB . fvd32u41b3 ; rtB . lb0m24ncij = ( rtB .
gglnc0muns + rtB . n3k1jwldyd ) + rtB . hu2rgr3hfe ; maxV = - rtP .
UADiscretePositioncontrol_sat ; u0 = rtB . lb0m24ncij ; u2 = rtP .
UADiscretePositioncontrol_sat ; if ( u0 > u2 ) { rtB . krtkmxdgt1 = u2 ; }
else if ( u0 < maxV ) { rtB . krtkmxdgt1 = maxV ; } else { rtB . krtkmxdgt1 =
u0 ; } maxV = muDoubleScalarMax ( rtB . cck1e03vkh [ 0 ] , rtP .
WADiscretePositioncontrol_tc ) ; rtB . o2nuwl00sr = maxV ; rtB . ifhcacyg4u =
( real_T ) ( rtB . o2nuwl00sr == 0.0 ) * 2.2204460492503131e-16 + rtB .
o2nuwl00sr ; rtB . h4e0tjjx5q = rtP . WADiscretePositioncontrol_tc - rtB .
cck1e03vkh [ 0 ] ; rtB . jj1lgxwadp = ( rtB . h4e0tjjx5q <= rtP .
Constant_Value_lseib3tlc0 ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB .
odv3pfsoo3 = rtB . gtcchxvpps [ 2 ] ; } rtB . g2qbpw1u2y = rtP .
LowPassFilterDiscreteorContinuous_K_fbdarspjyq * rtB . odv3pfsoo3 ; if ( rtDW
. h1vxeb0scs != 0 ) { rtDW . hnsejpj33e = rtB . g2qbpw1u2y ; if ( rtDW .
hnsejpj33e >= rtP . Integrator_UpperSat_kos2lis5jd ) { rtDW . hnsejpj33e =
rtP . Integrator_UpperSat_kos2lis5jd ; } else { if ( rtDW . hnsejpj33e <= rtP
. Integrator_LowerSat_gvexo5zn1g ) { rtDW . hnsejpj33e = rtP .
Integrator_LowerSat_gvexo5zn1g ; } } } if ( rtB . jj1lgxwadp || ( rtDW .
ie2533k5zy != 0 ) ) { rtDW . hnsejpj33e = rtB . g2qbpw1u2y ; if ( rtDW .
hnsejpj33e >= rtP . Integrator_UpperSat_kos2lis5jd ) { rtDW . hnsejpj33e =
rtP . Integrator_UpperSat_kos2lis5jd ; } else { if ( rtDW . hnsejpj33e <= rtP
. Integrator_LowerSat_gvexo5zn1g ) { rtDW . hnsejpj33e = rtP .
Integrator_LowerSat_gvexo5zn1g ; } } } if ( rtDW . hnsejpj33e >= rtP .
Integrator_UpperSat_kos2lis5jd ) { rtDW . hnsejpj33e = rtP .
Integrator_UpperSat_kos2lis5jd ; } else { if ( rtDW . hnsejpj33e <= rtP .
Integrator_LowerSat_gvexo5zn1g ) { rtDW . hnsejpj33e = rtP .
Integrator_LowerSat_gvexo5zn1g ; } } rtB . k5wlkglx5b = rtDW . hnsejpj33e ;
u0 = rtB . k5wlkglx5b ; maxV = rtP . Saturation_LowerSat_ixkztlf2ug ; u2 =
rtP . Saturation_UpperSat_bfekxvwt24 ; if ( u0 > u2 ) { rtB . ct3vjnkgwf = u2
; } else if ( u0 < maxV ) { rtB . ct3vjnkgwf = maxV ; } else { rtB .
ct3vjnkgwf = u0 ; } rtB . kw3ti0ac3i = rtB . g2qbpw1u2y - rtB . ct3vjnkgwf ;
rtB . p4m03lz4zh = 1.0 / rtB . ifhcacyg4u * rtB . kw3ti0ac3i ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . bjzkus33nv = rtB . jittjyrdyi ; } rtB
. izk2jsqvak = rtB . ct3vjnkgwf - rtB . bjzkus33nv ; rtB . hccdqvuxr4 = rtP .
WADiscretePositioncontrol_Kd * rtB . izk2jsqvak ; rtB . o4oomwxpja = rtDW .
jiah2uksw0 ; rtB . hhfq3iwysd = rtB . hccdqvuxr4 - rtB . o4oomwxpja ; rtB .
iuontvn31z = rtP . WADiscretePositioncontrol_Ki * rtB . izk2jsqvak ; rtB .
cugbbnxpbn = rtDW . naiwehmog1 ; rtB . oued3wu2st = rtP .
WADiscretePositioncontrol_N * rtB . hhfq3iwysd ; rtB . bydx0yzmcq = rtP .
WADiscretePositioncontrol_Kp * rtB . izk2jsqvak ; rtB . jstshn3squ = ( rtB .
bydx0yzmcq + rtB . cugbbnxpbn ) + rtB . oued3wu2st ; maxV = - rtP .
WADiscretePositioncontrol_sat ; u0 = rtB . jstshn3squ ; u2 = rtP .
WADiscretePositioncontrol_sat ; if ( u0 > u2 ) { rtB . ft1d2ngzg4 = u2 ; }
else if ( u0 < maxV ) { rtB . ft1d2ngzg4 = maxV ; } else { rtB . ft1d2ngzg4 =
u0 ; } maxV = muDoubleScalarMax ( rtB . prvuto05ws [ 0 ] , rtP .
FADiscreteSpeedcontrol_tc ) ; rtB . kc4hjl50id = maxV ; rtB . pzhditorrc = (
real_T ) ( rtB . kc4hjl50id == 0.0 ) * 2.2204460492503131e-16 + rtB .
kc4hjl50id ; rtB . gmfp3wn4he = rtP . FADiscreteSpeedcontrol_tc - rtB .
prvuto05ws [ 0 ] ; rtB . f3gocd01pz = ( rtB . gmfp3wn4he <= rtP .
Constant_Value_gpr0azxf2n ) ; rtB . j0ofeidlq4 = rtP . Gain3_Gain_ddianwy5uo
* rtB . erkqnit1wv ; rtB . ffs2yfpdwl = rtP .
LowPassFilterDiscreteorContinuous_K_gk1e3ckbus * rtB . j0ofeidlq4 ; if ( rtDW
. lhb2tg0f4z != 0 ) { rtDW . ooo2af04bi = rtB . ffs2yfpdwl ; if ( rtDW .
ooo2af04bi >= rtP . Integrator_UpperSat_pxoupp3bpy ) { rtDW . ooo2af04bi =
rtP . Integrator_UpperSat_pxoupp3bpy ; } else { if ( rtDW . ooo2af04bi <= rtP
. Integrator_LowerSat_dxi0sl14if ) { rtDW . ooo2af04bi = rtP .
Integrator_LowerSat_dxi0sl14if ; } } } if ( rtB . f3gocd01pz || ( rtDW .
i03sqzsz3t != 0 ) ) { rtDW . ooo2af04bi = rtB . ffs2yfpdwl ; if ( rtDW .
ooo2af04bi >= rtP . Integrator_UpperSat_pxoupp3bpy ) { rtDW . ooo2af04bi =
rtP . Integrator_UpperSat_pxoupp3bpy ; } else { if ( rtDW . ooo2af04bi <= rtP
. Integrator_LowerSat_dxi0sl14if ) { rtDW . ooo2af04bi = rtP .
Integrator_LowerSat_dxi0sl14if ; } } } if ( rtDW . ooo2af04bi >= rtP .
Integrator_UpperSat_pxoupp3bpy ) { rtDW . ooo2af04bi = rtP .
Integrator_UpperSat_pxoupp3bpy ; } else { if ( rtDW . ooo2af04bi <= rtP .
Integrator_LowerSat_dxi0sl14if ) { rtDW . ooo2af04bi = rtP .
Integrator_LowerSat_dxi0sl14if ; } } rtB . mfi0a5ivzy = rtDW . ooo2af04bi ;
u0 = rtB . mfi0a5ivzy ; maxV = rtP . Saturation_LowerSat_bpwoq1jyyj ; u2 =
rtP . Saturation_UpperSat_ljcmvdtzmp ; if ( u0 > u2 ) { rtB . ejomoi4p0y = u2
; } else if ( u0 < maxV ) { rtB . ejomoi4p0y = maxV ; } else { rtB .
ejomoi4p0y = u0 ; } rtB . d0vaq03wni = rtB . ffs2yfpdwl - rtB . ejomoi4p0y ;
rtB . n1srrzcvqf = 1.0 / rtB . pzhditorrc * rtB . d0vaq03wni ; } rtB .
dfpgvlkj2f = rtP . GAIN_Gain_gipujhulkf * rtB . j3nnkf33ca [ 7 ] ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . beojsagteu = rtB . dfpgvlkj2f ; rtB .
flgkpytalf = rtP . Gain5_Gain_bdpfd5cloc * rtB . beojsagteu ; rtB .
cqcbggfyin = rtB . ejomoi4p0y - rtB . flgkpytalf ; rtB . a02mtaqnbs = rtP .
FADiscreteSpeedcontrol_Ki * rtB . cqcbggfyin ; rtB . n4fa3h5blc = rtDW .
ocn5n2oria ; rtB . kqgaourgku = rtP . FADiscreteSpeedcontrol_Kp * rtB .
cqcbggfyin ; rtB . bjlw0updzr = rtB . kqgaourgku + rtB . n4fa3h5blc ; maxV =
muDoubleScalarMax ( rtB . kpt0des132 [ 0 ] , rtP . GADiscreteSpeedcontrol_tc
) ; rtB . j2gvd10ake = maxV ; rtB . bncp344e40 = ( real_T ) ( rtB .
j2gvd10ake == 0.0 ) * 2.2204460492503131e-16 + rtB . j2gvd10ake ; rtB .
amzvbarht0 = rtP . GADiscreteSpeedcontrol_tc - rtB . kpt0des132 [ 0 ] ; rtB .
gog2qbskx2 = ( rtB . amzvbarht0 <= rtP . Constant_Value_j0d24bmf2w ) ; rtB .
lmb4eckheu = rtP . Gain9_Gain * rtB . kl45z53n04 ; rtB . dsfn4nqkol = rtP .
LowPassFilterDiscreteorContinuous_K_azyftkzlmk * rtB . lmb4eckheu ; if ( rtDW
. cv3ju4xxmy != 0 ) { rtDW . hxjqpdvr2h = rtB . dsfn4nqkol ; if ( rtDW .
hxjqpdvr2h >= rtP . Integrator_UpperSat_dyf31exjbb ) { rtDW . hxjqpdvr2h =
rtP . Integrator_UpperSat_dyf31exjbb ; } else { if ( rtDW . hxjqpdvr2h <= rtP
. Integrator_LowerSat_kf5ksuxrmw ) { rtDW . hxjqpdvr2h = rtP .
Integrator_LowerSat_kf5ksuxrmw ; } } } if ( rtB . gog2qbskx2 || ( rtDW .
a4uh1p4rvk != 0 ) ) { rtDW . hxjqpdvr2h = rtB . dsfn4nqkol ; if ( rtDW .
hxjqpdvr2h >= rtP . Integrator_UpperSat_dyf31exjbb ) { rtDW . hxjqpdvr2h =
rtP . Integrator_UpperSat_dyf31exjbb ; } else { if ( rtDW . hxjqpdvr2h <= rtP
. Integrator_LowerSat_kf5ksuxrmw ) { rtDW . hxjqpdvr2h = rtP .
Integrator_LowerSat_kf5ksuxrmw ; } } } if ( rtDW . hxjqpdvr2h >= rtP .
Integrator_UpperSat_dyf31exjbb ) { rtDW . hxjqpdvr2h = rtP .
Integrator_UpperSat_dyf31exjbb ; } else { if ( rtDW . hxjqpdvr2h <= rtP .
Integrator_LowerSat_kf5ksuxrmw ) { rtDW . hxjqpdvr2h = rtP .
Integrator_LowerSat_kf5ksuxrmw ; } } rtB . bxem2yp0nx = rtDW . hxjqpdvr2h ;
u0 = rtB . bxem2yp0nx ; maxV = rtP . Saturation_LowerSat_piqabk5uwl ; u2 =
rtP . Saturation_UpperSat_ku4zfj1mgj ; if ( u0 > u2 ) { rtB . bca4tdsxvy = u2
; } else if ( u0 < maxV ) { rtB . bca4tdsxvy = maxV ; } else { rtB .
bca4tdsxvy = u0 ; } rtB . ptmdq2mkgh = rtB . dsfn4nqkol - rtB . bca4tdsxvy ;
rtB . csjc4ym4ir = 1.0 / rtB . bncp344e40 * rtB . ptmdq2mkgh ; } rtB .
nj2pffpsiu = rtP . GAIN_Gain_d2bdwaaa5x * rtB . j3nnkf33ca [ 11 ] ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . hgyzugskjl = rtB . nj2pffpsiu ; rtB .
krr2znhfx3 = rtP . Gain10_Gain * rtB . hgyzugskjl ; rtB . idgel3ts4j = rtB .
bca4tdsxvy - rtB . krr2znhfx3 ; rtB . ivzbvvwgbn = rtP .
GADiscreteSpeedcontrol_Ki * rtB . idgel3ts4j ; rtB . eahexcxwyu = rtDW .
nlstabwqbk ; rtB . hj4ejv1dkh = rtP . GADiscreteSpeedcontrol_Kp * rtB .
idgel3ts4j ; rtB . b10kyicgqg = rtB . hj4ejv1dkh + rtB . eahexcxwyu ; rtB .
jhdz2gcqsm = rtP . Gain12_Gain * rtB . m1hwo11cjm ; } rtB . ajv0ck2p0k = rtP
. GAIN_Gain_fa3mxd0pxv * rtB . j3nnkf33ca [ 3 ] ; if ( ssIsSampleHit ( rtS ,
1 , 0 ) ) { rtB . j1zo0zth2q = rtB . ajv0ck2p0k ; rtB . msgq0a2jq0 = rtP .
Gain13_Gain * rtB . j1zo0zth2q ; rtB . m4vz0qylqm = rtP . Gain15_Gain * rtB .
cta4ely3va ; } rtB . iue0dcvznk = rtP . GAIN_Gain_cbggud5v1h * rtB .
j3nnkf33ca [ 1 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . hssorlwf4h =
rtB . iue0dcvznk ; rtB . nv1qketu4s = rtP . Gain16_Gain * rtB . hssorlwf4h ;
rtB . dvianjcb3b = rtP . Gain2_Gain_lgcuhly1ij * rtB . krtkmxdgt1 ; } rtB .
iu2q3ztt2v = rtP . GAIN_Gain_ih3mthbt50 * rtB . j3nnkf33ca [ 5 ] ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . edkl4fqdos = rtB . iu2q3ztt2v ; rtB .
m34tv4o2q4 = rtP . Gain4_Gain_debj45fomz * rtB . edkl4fqdos ; rtB .
k3jckrrgpv = rtP . Gain6_Gain * rtB . ft1d2ngzg4 ; } rtB . amp02sxfjh = rtP .
GAIN_Gain_a3e3501pqa * rtB . j3nnkf33ca [ 9 ] ; if ( ssIsSampleHit ( rtS , 1
, 0 ) ) { rtB . ie35z2hdow = rtB . amp02sxfjh ; rtB . ipiz0wbr2t = rtP .
Gain7_Gain * rtB . ie35z2hdow ; maxV = muDoubleScalarMax ( rtB . i2nhy303vy [
0 ] , rtP . LFADiscreteSpeedcontrol_tc ) ; rtB . dzlk0ptzql = maxV ; rtB .
kginuwp13t = ( real_T ) ( rtB . dzlk0ptzql == 0.0 ) * 2.2204460492503131e-16
+ rtB . dzlk0ptzql ; rtB . knf0jcww13 = rtP . LFADiscreteSpeedcontrol_tc -
rtB . i2nhy303vy [ 0 ] ; rtB . l3pf5coce3 = ( rtB . knf0jcww13 <= rtP .
Constant_Value_pqdzo2a0cn ) ; rtB . ethxpaa4c3 = rtP .
LowPassFilterDiscreteorContinuous_K_i2ua0qelre * rtB . m4vz0qylqm ; if ( rtDW
. anoo3rym4l != 0 ) { rtDW . eja5dvqkvx = rtB . ethxpaa4c3 ; if ( rtDW .
eja5dvqkvx >= rtP . Integrator_UpperSat_ft3uzmj1ph ) { rtDW . eja5dvqkvx =
rtP . Integrator_UpperSat_ft3uzmj1ph ; } else { if ( rtDW . eja5dvqkvx <= rtP
. Integrator_LowerSat_cfjq315toj ) { rtDW . eja5dvqkvx = rtP .
Integrator_LowerSat_cfjq315toj ; } } } if ( rtB . l3pf5coce3 || ( rtDW .
bijsz2zuxo != 0 ) ) { rtDW . eja5dvqkvx = rtB . ethxpaa4c3 ; if ( rtDW .
eja5dvqkvx >= rtP . Integrator_UpperSat_ft3uzmj1ph ) { rtDW . eja5dvqkvx =
rtP . Integrator_UpperSat_ft3uzmj1ph ; } else { if ( rtDW . eja5dvqkvx <= rtP
. Integrator_LowerSat_cfjq315toj ) { rtDW . eja5dvqkvx = rtP .
Integrator_LowerSat_cfjq315toj ; } } } if ( rtDW . eja5dvqkvx >= rtP .
Integrator_UpperSat_ft3uzmj1ph ) { rtDW . eja5dvqkvx = rtP .
Integrator_UpperSat_ft3uzmj1ph ; } else { if ( rtDW . eja5dvqkvx <= rtP .
Integrator_LowerSat_cfjq315toj ) { rtDW . eja5dvqkvx = rtP .
Integrator_LowerSat_cfjq315toj ; } } rtB . df1ow2uit1 = rtDW . eja5dvqkvx ;
u0 = rtB . df1ow2uit1 ; maxV = rtP . Saturation_LowerSat_ffce0ibflx ; u2 =
rtP . Saturation_UpperSat_k12phj5ehi ; if ( u0 > u2 ) { rtB . p2eczjfkkm = u2
; } else if ( u0 < maxV ) { rtB . p2eczjfkkm = maxV ; } else { rtB .
p2eczjfkkm = u0 ; } rtB . kecojrxdhq = rtB . ethxpaa4c3 - rtB . p2eczjfkkm ;
rtB . b24hv4z2vs = 1.0 / rtB . kginuwp13t * rtB . kecojrxdhq ; rtB .
hskakeq1mj = rtB . p2eczjfkkm - rtB . nv1qketu4s ; rtB . dd5ie0ajbq = rtP .
LFADiscreteSpeedcontrol_Ki * rtB . hskakeq1mj ; rtB . f2pglahcji = rtDW .
aryinoifit ; rtB . c22z5c25yo = rtP . LFADiscreteSpeedcontrol_Kp * rtB .
hskakeq1mj ; rtB . efupo3v3dn = rtB . c22z5c25yo + rtB . f2pglahcji ; maxV =
muDoubleScalarMax ( rtB . fv50yqfc3m [ 0 ] , rtP . RFADiscreteSpeedcontrol_tc
) ; rtB . lxtwqrxqs3 = maxV ; rtB . fsrf3gmnjy = ( real_T ) ( rtB .
lxtwqrxqs3 == 0.0 ) * 2.2204460492503131e-16 + rtB . lxtwqrxqs3 ; rtB .
g4q0iyarn1 = rtP . RFADiscreteSpeedcontrol_tc - rtB . fv50yqfc3m [ 0 ] ; rtB
. kqpqdscv03 = ( rtB . g4q0iyarn1 <= rtP . Constant_Value_btw4atao4i ) ; rtB
. iqrs4lvoq4 = rtP . LowPassFilterDiscreteorContinuous_K_jcls4yejjf * rtB .
jhdz2gcqsm ; if ( rtDW . azsb3bde3k != 0 ) { rtDW . jww4ubou4q = rtB .
iqrs4lvoq4 ; if ( rtDW . jww4ubou4q >= rtP . Integrator_UpperSat_icgexzc3ek )
{ rtDW . jww4ubou4q = rtP . Integrator_UpperSat_icgexzc3ek ; } else { if (
rtDW . jww4ubou4q <= rtP . Integrator_LowerSat_enhsd21rzi ) { rtDW .
jww4ubou4q = rtP . Integrator_LowerSat_enhsd21rzi ; } } } if ( rtB .
kqpqdscv03 || ( rtDW . pwf2bkifeq != 0 ) ) { rtDW . jww4ubou4q = rtB .
iqrs4lvoq4 ; if ( rtDW . jww4ubou4q >= rtP . Integrator_UpperSat_icgexzc3ek )
{ rtDW . jww4ubou4q = rtP . Integrator_UpperSat_icgexzc3ek ; } else { if (
rtDW . jww4ubou4q <= rtP . Integrator_LowerSat_enhsd21rzi ) { rtDW .
jww4ubou4q = rtP . Integrator_LowerSat_enhsd21rzi ; } } } if ( rtDW .
jww4ubou4q >= rtP . Integrator_UpperSat_icgexzc3ek ) { rtDW . jww4ubou4q =
rtP . Integrator_UpperSat_icgexzc3ek ; } else { if ( rtDW . jww4ubou4q <= rtP
. Integrator_LowerSat_enhsd21rzi ) { rtDW . jww4ubou4q = rtP .
Integrator_LowerSat_enhsd21rzi ; } } rtB . kdn0iimvo0 = rtDW . jww4ubou4q ;
u0 = rtB . kdn0iimvo0 ; maxV = rtP . Saturation_LowerSat_bhgwypt52q ; u2 =
rtP . Saturation_UpperSat_ptlwne5dr3 ; if ( u0 > u2 ) { rtB . htdxbjpvte = u2
; } else if ( u0 < maxV ) { rtB . htdxbjpvte = maxV ; } else { rtB .
htdxbjpvte = u0 ; } rtB . jl3dzj4kme = rtB . iqrs4lvoq4 - rtB . htdxbjpvte ;
rtB . ejhwcpty3j = 1.0 / rtB . fsrf3gmnjy * rtB . jl3dzj4kme ; rtB .
fre4yqpfef = rtB . htdxbjpvte - rtB . msgq0a2jq0 ; rtB . oo510d4zw4 = rtP .
RFADiscreteSpeedcontrol_Ki * rtB . fre4yqpfef ; rtB . nngijcbhxp = rtDW .
ih51fkzbrp ; rtB . psbnb2qkaq = rtP . RFADiscreteSpeedcontrol_Kp * rtB .
fre4yqpfef ; rtB . oho1nr4zyb = rtB . psbnb2qkaq + rtB . nngijcbhxp ; maxV =
muDoubleScalarMax ( rtB . cel0300ljr [ 0 ] , rtP . UADiscreteSpeedcontrol_tc
) ; rtB . mn5trbnavt = maxV ; rtB . oldoahijz0 = ( real_T ) ( rtB .
mn5trbnavt == 0.0 ) * 2.2204460492503131e-16 + rtB . mn5trbnavt ; rtB .
hag3nww5j4 = rtP . UADiscreteSpeedcontrol_tc - rtB . cel0300ljr [ 0 ] ; rtB .
lbqadsyant = ( rtB . hag3nww5j4 <= rtP . Constant_Value_abhuanbusd ) ; rtB .
psrgd4ccsi = rtP . LowPassFilterDiscreteorContinuous_K_i0guetzbzf * rtB .
dvianjcb3b ; if ( rtDW . akfkxrbuhe != 0 ) { rtDW . cprte2otvn = rtB .
psrgd4ccsi ; if ( rtDW . cprte2otvn >= rtP . Integrator_UpperSat_dh4d4fmkz3 )
{ rtDW . cprte2otvn = rtP . Integrator_UpperSat_dh4d4fmkz3 ; } else { if (
rtDW . cprte2otvn <= rtP . Integrator_LowerSat_fyi041pxta ) { rtDW .
cprte2otvn = rtP . Integrator_LowerSat_fyi041pxta ; } } } if ( rtB .
lbqadsyant || ( rtDW . px4tkgbjaa != 0 ) ) { rtDW . cprte2otvn = rtB .
psrgd4ccsi ; if ( rtDW . cprte2otvn >= rtP . Integrator_UpperSat_dh4d4fmkz3 )
{ rtDW . cprte2otvn = rtP . Integrator_UpperSat_dh4d4fmkz3 ; } else { if (
rtDW . cprte2otvn <= rtP . Integrator_LowerSat_fyi041pxta ) { rtDW .
cprte2otvn = rtP . Integrator_LowerSat_fyi041pxta ; } } } if ( rtDW .
cprte2otvn >= rtP . Integrator_UpperSat_dh4d4fmkz3 ) { rtDW . cprte2otvn =
rtP . Integrator_UpperSat_dh4d4fmkz3 ; } else { if ( rtDW . cprte2otvn <= rtP
. Integrator_LowerSat_fyi041pxta ) { rtDW . cprte2otvn = rtP .
Integrator_LowerSat_fyi041pxta ; } } rtB . ljydzqytvi = rtDW . cprte2otvn ;
u0 = rtB . ljydzqytvi ; maxV = rtP . Saturation_LowerSat_muwyyeshhe ; u2 =
rtP . Saturation_UpperSat_ormg3rfkdo ; if ( u0 > u2 ) { rtB . boniifyd0i = u2
; } else if ( u0 < maxV ) { rtB . boniifyd0i = maxV ; } else { rtB .
boniifyd0i = u0 ; } rtB . fzxyftd4i0 = rtB . psrgd4ccsi - rtB . boniifyd0i ;
rtB . frpc4jznjz = 1.0 / rtB . oldoahijz0 * rtB . fzxyftd4i0 ; rtB .
ezl0agc1ub = rtB . boniifyd0i - rtB . m34tv4o2q4 ; rtB . iuvcixaj1u = rtP .
UADiscreteSpeedcontrol_Ki * rtB . ezl0agc1ub ; rtB . acifvashpf = rtDW .
ozwizziqkv ; rtB . g5jcddbtus = rtP . UADiscreteSpeedcontrol_Kp * rtB .
ezl0agc1ub ; rtB . a12fn3eish = rtB . g5jcddbtus + rtB . acifvashpf ; maxV =
muDoubleScalarMax ( rtB . nqspu5lpuf [ 0 ] , rtP . WADiscreteSpeedcontrol_tc
) ; rtB . a5kxdqcvdg = maxV ; rtB . be0sk5wt1c = ( real_T ) ( rtB .
a5kxdqcvdg == 0.0 ) * 2.2204460492503131e-16 + rtB . a5kxdqcvdg ; rtB .
hqu3j44etp = rtP . WADiscreteSpeedcontrol_tc - rtB . nqspu5lpuf [ 0 ] ; rtB .
jqeseokzby = ( rtB . hqu3j44etp <= rtP . Constant_Value_exlhnub3yd ) ; rtB .
mczuwr2djk = rtP . LowPassFilterDiscreteorContinuous_K_kbnahp4pbf * rtB .
k3jckrrgpv ; if ( rtDW . maqw1lhppg != 0 ) { rtDW . f34n5dy3xh = rtB .
mczuwr2djk ; if ( rtDW . f34n5dy3xh >= rtP . Integrator_UpperSat_kidwxza1it )
{ rtDW . f34n5dy3xh = rtP . Integrator_UpperSat_kidwxza1it ; } else { if (
rtDW . f34n5dy3xh <= rtP . Integrator_LowerSat_g5j2kqgd1m ) { rtDW .
f34n5dy3xh = rtP . Integrator_LowerSat_g5j2kqgd1m ; } } } if ( rtB .
jqeseokzby || ( rtDW . ehsgo0dd2g != 0 ) ) { rtDW . f34n5dy3xh = rtB .
mczuwr2djk ; if ( rtDW . f34n5dy3xh >= rtP . Integrator_UpperSat_kidwxza1it )
{ rtDW . f34n5dy3xh = rtP . Integrator_UpperSat_kidwxza1it ; } else { if (
rtDW . f34n5dy3xh <= rtP . Integrator_LowerSat_g5j2kqgd1m ) { rtDW .
f34n5dy3xh = rtP . Integrator_LowerSat_g5j2kqgd1m ; } } } if ( rtDW .
f34n5dy3xh >= rtP . Integrator_UpperSat_kidwxza1it ) { rtDW . f34n5dy3xh =
rtP . Integrator_UpperSat_kidwxza1it ; } else { if ( rtDW . f34n5dy3xh <= rtP
. Integrator_LowerSat_g5j2kqgd1m ) { rtDW . f34n5dy3xh = rtP .
Integrator_LowerSat_g5j2kqgd1m ; } } rtB . hjfvmptswk = rtDW . f34n5dy3xh ;
u0 = rtB . hjfvmptswk ; maxV = rtP . Saturation_LowerSat_frbmey0f5g ; u2 =
rtP . Saturation_UpperSat_bj2nuqdj2t ; if ( u0 > u2 ) { rtB . dkr2klyqik = u2
; } else if ( u0 < maxV ) { rtB . dkr2klyqik = maxV ; } else { rtB .
dkr2klyqik = u0 ; } rtB . dp4vbgasuh = rtB . mczuwr2djk - rtB . dkr2klyqik ;
rtB . lh4ky3tqcp = 1.0 / rtB . be0sk5wt1c * rtB . dp4vbgasuh ; rtB .
nflabcywl5 = rtB . dkr2klyqik - rtB . ipiz0wbr2t ; rtB . bx0hsvyjif = rtP .
WADiscreteSpeedcontrol_Ki * rtB . nflabcywl5 ; rtB . aag31ygyq2 = rtDW .
i1v5qjzuaj ; rtB . hg0p25ayja = rtP . WADiscreteSpeedcontrol_Kp * rtB .
nflabcywl5 ; rtB . obj4q050ww = rtB . hg0p25ayja + rtB . aag31ygyq2 ; } rtDW
. e2yhe4nhkm . AcquireOK = 1 ; rtDW . fvlncx4bnx . AcquireOK = 1 ; rtDW .
p5p3d1ybah . AcquireOK = 1 ; rtDW . byciun1ksb . AcquireOK = 1 ; rtDW .
kbak3eiue3 . AcquireOK = 1 ; rtDW . ef1saldt45 . AcquireOK = 1 ; first_output
= false ; if ( rtDW . d3lfdhwsjw == 0.0 ) { rtDW . d3lfdhwsjw = 1.0 ;
first_output = true ; } if ( first_output ) { rtX . cumqqyz2cg = rtB .
j3nnkf33ca [ 1 ] ; } rtB . lv3dk0vxjj [ 0 ] = rtX . cumqqyz2cg ; rtB .
lv3dk0vxjj [ 1 ] = ( rtB . j3nnkf33ca [ 1 ] - rtX . cumqqyz2cg ) * 1000.0 ;
rtB . lv3dk0vxjj [ 2 ] = 0.0 ; rtB . lv3dk0vxjj [ 3 ] = 0.0 ; first_output =
false ; if ( rtDW . f1v3bebsxz == 0.0 ) { rtDW . f1v3bebsxz = 1.0 ;
first_output = true ; } if ( first_output ) { rtX . fdcrlx4ud4 = rtB .
j3nnkf33ca [ 3 ] ; } rtB . fixkmettoc [ 0 ] = rtX . fdcrlx4ud4 ; rtB .
fixkmettoc [ 1 ] = ( rtB . j3nnkf33ca [ 3 ] - rtX . fdcrlx4ud4 ) * 1000.0 ;
rtB . fixkmettoc [ 2 ] = 0.0 ; rtB . fixkmettoc [ 3 ] = 0.0 ; first_output =
false ; if ( rtDW . haj010meq5 == 0.0 ) { rtDW . haj010meq5 = 1.0 ;
first_output = true ; } if ( first_output ) { rtX . kzwrxm4myr = rtB .
j3nnkf33ca [ 5 ] ; } rtB . asixhrrsif [ 0 ] = rtX . kzwrxm4myr ; rtB .
asixhrrsif [ 1 ] = ( rtB . j3nnkf33ca [ 5 ] - rtX . kzwrxm4myr ) * 1000.0 ;
rtB . asixhrrsif [ 2 ] = 0.0 ; rtB . asixhrrsif [ 3 ] = 0.0 ; first_output =
false ; if ( rtDW . hjd4dlpjpx == 0.0 ) { rtDW . hjd4dlpjpx = 1.0 ;
first_output = true ; } if ( first_output ) { rtX . lmvlun415q = rtB .
j3nnkf33ca [ 7 ] ; } rtB . poqyqx1ybu [ 0 ] = rtX . lmvlun415q ; rtB .
poqyqx1ybu [ 1 ] = ( rtB . j3nnkf33ca [ 7 ] - rtX . lmvlun415q ) * 1000.0 ;
rtB . poqyqx1ybu [ 2 ] = 0.0 ; rtB . poqyqx1ybu [ 3 ] = 0.0 ; first_output =
false ; if ( rtDW . ianiojkna1 == 0.0 ) { rtDW . ianiojkna1 = 1.0 ;
first_output = true ; } if ( first_output ) { rtX . l31pskqy5j = rtB .
j3nnkf33ca [ 9 ] ; } rtB . e3jijk5hzs [ 0 ] = rtX . l31pskqy5j ; rtB .
e3jijk5hzs [ 1 ] = ( rtB . j3nnkf33ca [ 9 ] - rtX . l31pskqy5j ) * 1000.0 ;
rtB . e3jijk5hzs [ 2 ] = 0.0 ; rtB . e3jijk5hzs [ 3 ] = 0.0 ; first_output =
false ; if ( rtDW . l4urcs2vqx == 0.0 ) { rtDW . l4urcs2vqx = 1.0 ;
first_output = true ; } if ( first_output ) { rtX . eniv3pchxv = rtB .
j3nnkf33ca [ 11 ] ; } rtB . kbokax0jy0 [ 0 ] = rtX . eniv3pchxv ; rtB .
kbokax0jy0 [ 1 ] = ( rtB . j3nnkf33ca [ 11 ] - rtX . eniv3pchxv ) * 1000.0 ;
rtB . kbokax0jy0 [ 2 ] = 0.0 ; rtB . kbokax0jy0 [ 3 ] = 0.0 ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . hdabgtjkhh = rtB . bjlw0updzr ; } if
( ssIsMajorTimeStep ( rtS ) ) { rtDW . cx3lhcr5hy = rtB . hdabgtjkhh ; }
first_output = false ; if ( rtDW . jvuzjfeloy == 0.0 ) { rtDW . jvuzjfeloy =
1.0 ; first_output = true ; } if ( first_output ) { rtX . p2tpemdq0j [ 0 ] =
rtDW . cx3lhcr5hy ; rtX . p2tpemdq0j [ 1 ] = 0.0 ; } rtB . adplijeiu3 [ 0 ] =
rtX . p2tpemdq0j [ 0 ] ; rtB . adplijeiu3 [ 1 ] = rtX . p2tpemdq0j [ 1 ] ;
rtB . adplijeiu3 [ 2 ] = ( ( rtDW . cx3lhcr5hy - rtX . p2tpemdq0j [ 0 ] ) *
1000.0 - 2.0 * rtX . p2tpemdq0j [ 1 ] ) * 1000.0 ; rtB . adplijeiu3 [ 3 ] =
0.0 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . k2vziqgdpi = rtB .
b10kyicgqg ; } if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . ed3jdhmuic = rtB .
k2vziqgdpi ; } first_output = false ; if ( rtDW . fhlkawvcxc == 0.0 ) { rtDW
. fhlkawvcxc = 1.0 ; first_output = true ; } if ( first_output ) { rtX .
oorunl2yew [ 0 ] = rtDW . ed3jdhmuic ; rtX . oorunl2yew [ 1 ] = 0.0 ; } rtB .
fkmyqachua [ 0 ] = rtX . oorunl2yew [ 0 ] ; rtB . fkmyqachua [ 1 ] = rtX .
oorunl2yew [ 1 ] ; rtB . fkmyqachua [ 2 ] = ( ( rtDW . ed3jdhmuic - rtX .
oorunl2yew [ 0 ] ) * 1000.0 - 2.0 * rtX . oorunl2yew [ 1 ] ) * 1000.0 ; rtB .
fkmyqachua [ 3 ] = 0.0 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB .
pr04rv033g = rtB . efupo3v3dn ; } if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
iyutm2c4la = rtB . pr04rv033g ; } first_output = false ; if ( rtDW .
k5yzqucy20 == 0.0 ) { rtDW . k5yzqucy20 = 1.0 ; first_output = true ; } if (
first_output ) { rtX . gko3wp2kax [ 0 ] = rtDW . iyutm2c4la ; rtX .
gko3wp2kax [ 1 ] = 0.0 ; } rtB . jhnfskyafx [ 0 ] = rtX . gko3wp2kax [ 0 ] ;
rtB . jhnfskyafx [ 1 ] = rtX . gko3wp2kax [ 1 ] ; rtB . jhnfskyafx [ 2 ] = (
( rtDW . iyutm2c4la - rtX . gko3wp2kax [ 0 ] ) * 1000.0 - 2.0 * rtX .
gko3wp2kax [ 1 ] ) * 1000.0 ; rtB . jhnfskyafx [ 3 ] = 0.0 ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . a2py0rn10b = rtB . oho1nr4zyb ; } if
( ssIsMajorTimeStep ( rtS ) ) { rtDW . eufofduh2l = rtB . a2py0rn10b ; }
first_output = false ; if ( rtDW . idbi3jnfkp == 0.0 ) { rtDW . idbi3jnfkp =
1.0 ; first_output = true ; } if ( first_output ) { rtX . igj4xzveyr [ 0 ] =
rtDW . eufofduh2l ; rtX . igj4xzveyr [ 1 ] = 0.0 ; } rtB . j132ytumpt [ 0 ] =
rtX . igj4xzveyr [ 0 ] ; rtB . j132ytumpt [ 1 ] = rtX . igj4xzveyr [ 1 ] ;
rtB . j132ytumpt [ 2 ] = ( ( rtDW . eufofduh2l - rtX . igj4xzveyr [ 0 ] ) *
1000.0 - 2.0 * rtX . igj4xzveyr [ 1 ] ) * 1000.0 ; rtB . j132ytumpt [ 3 ] =
0.0 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . ine3qiqxwe = rtB .
a12fn3eish ; } if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . g3umqfw1p4 = rtB .
ine3qiqxwe ; } first_output = false ; if ( rtDW . hfofwehec0 == 0.0 ) { rtDW
. hfofwehec0 = 1.0 ; first_output = true ; } if ( first_output ) { rtX .
d0wlpacimb [ 0 ] = rtDW . g3umqfw1p4 ; rtX . d0wlpacimb [ 1 ] = 0.0 ; } rtB .
aya0m3v3i0 [ 0 ] = rtX . d0wlpacimb [ 0 ] ; rtB . aya0m3v3i0 [ 1 ] = rtX .
d0wlpacimb [ 1 ] ; rtB . aya0m3v3i0 [ 2 ] = ( ( rtDW . g3umqfw1p4 - rtX .
d0wlpacimb [ 0 ] ) * 1000.0 - 2.0 * rtX . d0wlpacimb [ 1 ] ) * 1000.0 ; rtB .
aya0m3v3i0 [ 3 ] = 0.0 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB .
eww2mhxkm5 = rtB . obj4q050ww ; } if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
mlkhe43blf = rtB . eww2mhxkm5 ; } first_output = false ; if ( rtDW .
kgy31g3lpf == 0.0 ) { rtDW . kgy31g3lpf = 1.0 ; first_output = true ; } if (
first_output ) { rtX . leswo0sava [ 0 ] = rtDW . mlkhe43blf ; rtX .
leswo0sava [ 1 ] = 0.0 ; } rtB . jkh24e405z [ 0 ] = rtX . leswo0sava [ 0 ] ;
rtB . jkh24e405z [ 1 ] = rtX . leswo0sava [ 1 ] ; rtB . jkh24e405z [ 2 ] = (
( rtDW . mlkhe43blf - rtX . leswo0sava [ 0 ] ) * 1000.0 - 2.0 * rtX .
leswo0sava [ 1 ] ) * 1000.0 ; rtB . jkh24e405z [ 3 ] = 0.0 ; simulationData =
( NeslSimulationData * ) rtDW . fdriqx01pi ; time_e = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_e ; simulationData -> mData -> mContStates . mN = 30 ;
simulationData -> mData -> mContStates . mX = & rtX . po2xstkzai [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . cawjwjevhp ; simulationData -> mData ->
mModeVector . mN = 6 ; simulationData -> mData -> mModeVector . mX = & rtDW .
jlxuucsfm3 [ 0 ] ; first_output = false ; simulationData -> mData ->
mFoundZcEvents = first_output ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; first_output = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = first_output ; simulationData -> mData ->
mIsSolverCheckingCIC = false ; first_output = ssIsSolverComputingJacobian (
rtS ) ; simulationData -> mData -> mIsComputingJacobian = first_output ;
simulationData -> mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian (
rtS ) != 0 ) ; simulationData -> mData -> mIsSolverRequestingReset = false ;
tmp_j [ 0 ] = 0 ; tmp_g [ 0 ] = rtB . lv3dk0vxjj [ 0 ] ; tmp_g [ 1 ] = rtB .
lv3dk0vxjj [ 1 ] ; tmp_g [ 2 ] = rtB . lv3dk0vxjj [ 2 ] ; tmp_g [ 3 ] = rtB .
lv3dk0vxjj [ 3 ] ; tmp_j [ 1 ] = 4 ; tmp_g [ 4 ] = rtB . fixkmettoc [ 0 ] ;
tmp_g [ 5 ] = rtB . fixkmettoc [ 1 ] ; tmp_g [ 6 ] = rtB . fixkmettoc [ 2 ] ;
tmp_g [ 7 ] = rtB . fixkmettoc [ 3 ] ; tmp_j [ 2 ] = 8 ; tmp_g [ 8 ] = rtB .
asixhrrsif [ 0 ] ; tmp_g [ 9 ] = rtB . asixhrrsif [ 1 ] ; tmp_g [ 10 ] = rtB
. asixhrrsif [ 2 ] ; tmp_g [ 11 ] = rtB . asixhrrsif [ 3 ] ; tmp_j [ 3 ] = 12
; tmp_g [ 12 ] = rtB . poqyqx1ybu [ 0 ] ; tmp_g [ 13 ] = rtB . poqyqx1ybu [ 1
] ; tmp_g [ 14 ] = rtB . poqyqx1ybu [ 2 ] ; tmp_g [ 15 ] = rtB . poqyqx1ybu [
3 ] ; tmp_j [ 4 ] = 16 ; tmp_g [ 16 ] = rtB . e3jijk5hzs [ 0 ] ; tmp_g [ 17 ]
= rtB . e3jijk5hzs [ 1 ] ; tmp_g [ 18 ] = rtB . e3jijk5hzs [ 2 ] ; tmp_g [ 19
] = rtB . e3jijk5hzs [ 3 ] ; tmp_j [ 5 ] = 20 ; tmp_g [ 20 ] = rtB .
kbokax0jy0 [ 0 ] ; tmp_g [ 21 ] = rtB . kbokax0jy0 [ 1 ] ; tmp_g [ 22 ] = rtB
. kbokax0jy0 [ 2 ] ; tmp_g [ 23 ] = rtB . kbokax0jy0 [ 3 ] ; tmp_j [ 6 ] = 24
; tmp_g [ 24 ] = rtB . adplijeiu3 [ 0 ] ; tmp_g [ 25 ] = rtB . adplijeiu3 [ 1
] ; tmp_g [ 26 ] = rtB . adplijeiu3 [ 2 ] ; tmp_g [ 27 ] = rtB . adplijeiu3 [
3 ] ; tmp_j [ 7 ] = 28 ; tmp_g [ 28 ] = rtB . fkmyqachua [ 0 ] ; tmp_g [ 29 ]
= rtB . fkmyqachua [ 1 ] ; tmp_g [ 30 ] = rtB . fkmyqachua [ 2 ] ; tmp_g [ 31
] = rtB . fkmyqachua [ 3 ] ; tmp_j [ 8 ] = 32 ; tmp_g [ 32 ] = rtB .
jhnfskyafx [ 0 ] ; tmp_g [ 33 ] = rtB . jhnfskyafx [ 1 ] ; tmp_g [ 34 ] = rtB
. jhnfskyafx [ 2 ] ; tmp_g [ 35 ] = rtB . jhnfskyafx [ 3 ] ; tmp_j [ 9 ] = 36
; tmp_g [ 36 ] = rtB . j132ytumpt [ 0 ] ; tmp_g [ 37 ] = rtB . j132ytumpt [ 1
] ; tmp_g [ 38 ] = rtB . j132ytumpt [ 2 ] ; tmp_g [ 39 ] = rtB . j132ytumpt [
3 ] ; tmp_j [ 10 ] = 40 ; tmp_g [ 40 ] = rtB . aya0m3v3i0 [ 0 ] ; tmp_g [ 41
] = rtB . aya0m3v3i0 [ 1 ] ; tmp_g [ 42 ] = rtB . aya0m3v3i0 [ 2 ] ; tmp_g [
43 ] = rtB . aya0m3v3i0 [ 3 ] ; tmp_j [ 11 ] = 44 ; tmp_g [ 44 ] = rtB .
jkh24e405z [ 0 ] ; tmp_g [ 45 ] = rtB . jkh24e405z [ 1 ] ; tmp_g [ 46 ] = rtB
. jkh24e405z [ 2 ] ; tmp_g [ 47 ] = rtB . jkh24e405z [ 3 ] ; tmp_j [ 12 ] =
48 ; simulationData -> mData -> mInputValues . mN = 48 ; simulationData ->
mData -> mInputValues . mX = & tmp_g [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 13 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_j [ 0 ] ; simulationData -> mData -> mOutputs . mN = 36 ; simulationData
-> mData -> mOutputs . mX = & rtB . lhnhzraedi [ 0 ] ; simulationData ->
mData -> mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX =
NULL ; simulationData -> mData -> mIsFundamentalSampleHit = false ;
simulationData -> mData -> mTolerances . mN = 0 ; simulationData -> mData ->
mTolerances . mX = NULL ; simulationData -> mData -> mCstateHasChanged =
false ; simulator = ( NeslSimulator * ) rtDW . hoinjnpu05 ; diagnosticManager
= ( NeuDiagnosticManager * ) rtDW . fkez4vs1k0 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_e =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( tmp_e != 0 ) { first_output =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( first_output ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } if ( ssIsMajorTimeStep ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } simulationData = (
NeslSimulationData * ) rtDW . cacbslwxfv ; time_i = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_i ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . jcbre1riq4 ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . lujs0ibj0y ;
first_output = false ; simulationData -> mData -> mFoundZcEvents =
first_output ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; first_output = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = first_output ; simulationData -> mData ->
mIsSolverCheckingCIC = false ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; simulationData -> mData -> mIsSolverRequestingReset = false ; tmp_c [
0 ] = 0 ; tmp_f [ 0 ] = rtB . lv3dk0vxjj [ 0 ] ; tmp_f [ 1 ] = rtB .
lv3dk0vxjj [ 1 ] ; tmp_f [ 2 ] = rtB . lv3dk0vxjj [ 2 ] ; tmp_f [ 3 ] = rtB .
lv3dk0vxjj [ 3 ] ; tmp_c [ 1 ] = 4 ; tmp_f [ 4 ] = rtB . fixkmettoc [ 0 ] ;
tmp_f [ 5 ] = rtB . fixkmettoc [ 1 ] ; tmp_f [ 6 ] = rtB . fixkmettoc [ 2 ] ;
tmp_f [ 7 ] = rtB . fixkmettoc [ 3 ] ; tmp_c [ 2 ] = 8 ; tmp_f [ 8 ] = rtB .
asixhrrsif [ 0 ] ; tmp_f [ 9 ] = rtB . asixhrrsif [ 1 ] ; tmp_f [ 10 ] = rtB
. asixhrrsif [ 2 ] ; tmp_f [ 11 ] = rtB . asixhrrsif [ 3 ] ; tmp_c [ 3 ] = 12
; tmp_f [ 12 ] = rtB . poqyqx1ybu [ 0 ] ; tmp_f [ 13 ] = rtB . poqyqx1ybu [ 1
] ; tmp_f [ 14 ] = rtB . poqyqx1ybu [ 2 ] ; tmp_f [ 15 ] = rtB . poqyqx1ybu [
3 ] ; tmp_c [ 4 ] = 16 ; tmp_f [ 16 ] = rtB . e3jijk5hzs [ 0 ] ; tmp_f [ 17 ]
= rtB . e3jijk5hzs [ 1 ] ; tmp_f [ 18 ] = rtB . e3jijk5hzs [ 2 ] ; tmp_f [ 19
] = rtB . e3jijk5hzs [ 3 ] ; tmp_c [ 5 ] = 20 ; tmp_f [ 20 ] = rtB .
kbokax0jy0 [ 0 ] ; tmp_f [ 21 ] = rtB . kbokax0jy0 [ 1 ] ; tmp_f [ 22 ] = rtB
. kbokax0jy0 [ 2 ] ; tmp_f [ 23 ] = rtB . kbokax0jy0 [ 3 ] ; tmp_c [ 6 ] = 24
; tmp_f [ 24 ] = rtB . adplijeiu3 [ 0 ] ; tmp_f [ 25 ] = rtB . adplijeiu3 [ 1
] ; tmp_f [ 26 ] = rtB . adplijeiu3 [ 2 ] ; tmp_f [ 27 ] = rtB . adplijeiu3 [
3 ] ; tmp_c [ 7 ] = 28 ; tmp_f [ 28 ] = rtB . fkmyqachua [ 0 ] ; tmp_f [ 29 ]
= rtB . fkmyqachua [ 1 ] ; tmp_f [ 30 ] = rtB . fkmyqachua [ 2 ] ; tmp_f [ 31
] = rtB . fkmyqachua [ 3 ] ; tmp_c [ 8 ] = 32 ; tmp_f [ 32 ] = rtB .
jhnfskyafx [ 0 ] ; tmp_f [ 33 ] = rtB . jhnfskyafx [ 1 ] ; tmp_f [ 34 ] = rtB
. jhnfskyafx [ 2 ] ; tmp_f [ 35 ] = rtB . jhnfskyafx [ 3 ] ; tmp_c [ 9 ] = 36
; tmp_f [ 36 ] = rtB . j132ytumpt [ 0 ] ; tmp_f [ 37 ] = rtB . j132ytumpt [ 1
] ; tmp_f [ 38 ] = rtB . j132ytumpt [ 2 ] ; tmp_f [ 39 ] = rtB . j132ytumpt [
3 ] ; tmp_c [ 10 ] = 40 ; tmp_f [ 40 ] = rtB . aya0m3v3i0 [ 0 ] ; tmp_f [ 41
] = rtB . aya0m3v3i0 [ 1 ] ; tmp_f [ 42 ] = rtB . aya0m3v3i0 [ 2 ] ; tmp_f [
43 ] = rtB . aya0m3v3i0 [ 3 ] ; tmp_c [ 11 ] = 44 ; tmp_f [ 44 ] = rtB .
jkh24e405z [ 0 ] ; tmp_f [ 45 ] = rtB . jkh24e405z [ 1 ] ; tmp_f [ 46 ] = rtB
. jkh24e405z [ 2 ] ; tmp_f [ 47 ] = rtB . jkh24e405z [ 3 ] ; tmp_c [ 12 ] =
48 ; memcpy ( & tmp_f [ 48 ] , & rtB . lhnhzraedi [ 0 ] , 36U * sizeof (
real_T ) ) ; tmp_c [ 13 ] = 84 ; simulationData -> mData -> mInputValues . mN
= 84 ; simulationData -> mData -> mInputValues . mX = & tmp_f [ 0 ] ;
simulationData -> mData -> mInputOffsets . mN = 14 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_c [ 0 ] ; simulationData -> mData -> mOutputs .
mN = 18 ; simulationData -> mData -> mOutputs . mX = & rtB . ngr0xxfpft [ 0 ]
; simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData
-> mSampleHits . mX = NULL ; simulationData -> mData ->
mIsFundamentalSampleHit = false ; simulationData -> mData -> mTolerances . mN
= 0 ; simulationData -> mData -> mTolerances . mX = NULL ; simulationData ->
mData -> mCstateHasChanged = false ; simulator = ( NeslSimulator * ) rtDW .
pfsbl0alkz ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . mkukpfbnwo
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_e = ne_simulator_method ( simulator ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( tmp_e != 0 ) {
first_output = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
first_output ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtB . acli4c4thv [ 0 ]
= rtB . ngr0xxfpft [ 0 ] ; rtB . acli4c4thv [ 1 ] = 0.0 ; rtB . acli4c4thv [
2 ] = 0.0 ; rtB . acli4c4thv [ 3 ] = 0.0 ; rtB . knzgt5pcsx [ 0 ] = rtB .
ngr0xxfpft [ 1 ] ; rtB . knzgt5pcsx [ 1 ] = 0.0 ; rtB . knzgt5pcsx [ 2 ] =
0.0 ; rtB . knzgt5pcsx [ 3 ] = 0.0 ; rtB . orzbfuvelk [ 0 ] = rtB .
ngr0xxfpft [ 2 ] ; rtB . orzbfuvelk [ 1 ] = 0.0 ; rtB . orzbfuvelk [ 2 ] =
0.0 ; rtB . orzbfuvelk [ 3 ] = 0.0 ; rtB . cvgkgbsato [ 0 ] = rtB .
ngr0xxfpft [ 3 ] ; rtB . cvgkgbsato [ 1 ] = 0.0 ; rtB . cvgkgbsato [ 2 ] =
0.0 ; rtB . cvgkgbsato [ 3 ] = 0.0 ; rtB . nfrqasfoje [ 0 ] = rtB .
ngr0xxfpft [ 4 ] ; rtB . nfrqasfoje [ 1 ] = 0.0 ; rtB . nfrqasfoje [ 2 ] =
0.0 ; rtB . nfrqasfoje [ 3 ] = 0.0 ; rtB . dvzsxsm21d [ 0 ] = rtB .
ngr0xxfpft [ 5 ] ; rtB . dvzsxsm21d [ 1 ] = 0.0 ; rtB . dvzsxsm21d [ 2 ] =
0.0 ; rtB . dvzsxsm21d [ 3 ] = 0.0 ; rtB . ng11s4vjyc = rtP .
GAIN_Gain_lu5wfgtmm3 * rtB . ngr0xxfpft [ 7 ] ; rtB . k3y4oqcihk = rtP .
GAIN_Gain_lycms1qu4d * rtB . ngr0xxfpft [ 15 ] ; rtB . pigztqhtgk = rtP .
Gain_Gain_a3lqnjnaie * rtB . k3y4oqcihk ; rtB . exs0n10ysv = rtP .
Gain1_Gain_kv2drkc1jq * rtB . ng11s4vjyc ; rtB . k04c00gsa1 = rtP .
GAIN_Gain_esl4ijmu4b * rtB . ngr0xxfpft [ 9 ] ; rtB . pbzaxgmwaq = rtP .
Gain11_Gain * rtB . k04c00gsa1 ; rtB . nqru1gad04 = rtP .
GAIN_Gain_ngbovfpstx * rtB . ngr0xxfpft [ 13 ] ; rtB . f2os4pvb41 = rtP .
Gain14_Gain * rtB . nqru1gad04 ; rtB . n55lwtabvy = rtP .
GAIN_Gain_n5wmkwmtp0 * rtB . ngr0xxfpft [ 11 ] ; rtB . o4ftyptaai = rtP .
Gain17_Gain * rtB . n55lwtabvy ; rtB . lspzt2bsxt = rtP .
GAIN_Gain_ocgf55rpfm * rtB . ngr0xxfpft [ 17 ] ; rtB . nlxpxyr5sf = rtP .
Gain8_Gain * rtB . lspzt2bsxt ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate (
int_T tid ) { NeslSimulationData * simulationData ; real_T time ; boolean_T
tmp ; real_T tmp_p [ 24 ] ; int_T tmp_e [ 7 ] ; NeslSimulator * simulator ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; int32_T tmp_i ; char * msg ; real_T time_p ; real_T tmp_m [ 48 ] ; int_T
tmp_g [ 13 ] ; simulationData = ( NeslSimulationData * ) rtDW . fh2yevo3ke ;
time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time ; simulationData -> mData ->
mContStates . mN = 24 ; simulationData -> mData -> mContStates . mX = & rtX .
gwgkdmwsw2 [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . mq0xsn5npj ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . gntbh4nenu ; tmp = false ; simulationData ->
mData -> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; simulationData -> mData -> mIsSolverCheckingCIC = false ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; simulationData -> mData ->
mIsSolverRequestingReset = false ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
acli4c4thv [ 0 ] ; tmp_p [ 1 ] = rtB . acli4c4thv [ 1 ] ; tmp_p [ 2 ] = rtB .
acli4c4thv [ 2 ] ; tmp_p [ 3 ] = rtB . acli4c4thv [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . knzgt5pcsx [ 0 ] ; tmp_p [ 5 ] = rtB . knzgt5pcsx [ 1 ] ;
tmp_p [ 6 ] = rtB . knzgt5pcsx [ 2 ] ; tmp_p [ 7 ] = rtB . knzgt5pcsx [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . orzbfuvelk [ 0 ] ; tmp_p [ 9 ] = rtB .
orzbfuvelk [ 1 ] ; tmp_p [ 10 ] = rtB . orzbfuvelk [ 2 ] ; tmp_p [ 11 ] = rtB
. orzbfuvelk [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . cvgkgbsato [ 0 ]
; tmp_p [ 13 ] = rtB . cvgkgbsato [ 1 ] ; tmp_p [ 14 ] = rtB . cvgkgbsato [ 2
] ; tmp_p [ 15 ] = rtB . cvgkgbsato [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . nfrqasfoje [ 0 ] ; tmp_p [ 17 ] = rtB . nfrqasfoje [ 1 ] ; tmp_p [ 18 ]
= rtB . nfrqasfoje [ 2 ] ; tmp_p [ 19 ] = rtB . nfrqasfoje [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . dvzsxsm21d [ 0 ] ; tmp_p [ 21 ] = rtB .
dvzsxsm21d [ 1 ] ; tmp_p [ 22 ] = rtB . dvzsxsm21d [ 2 ] ; tmp_p [ 23 ] = rtB
. dvzsxsm21d [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ; simulator = (
NeslSimulator * ) rtDW . oiaqjmfdle ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . orvixz3xj4 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( simulator , NESL_SIM_UPDATE , simulationData ,
diagnosticManager ) ; if ( tmp_i != 0 ) { tmp = error_buffer_is_empty (
ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg = rtw_diagnostics_msg (
diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { rtDW . drj4xadjzp = 0U ; rtDW . a5b2pf1ca1 += rtP .
Integrator_gainval * rtB . blfe1jeuhj ; if ( rtDW . a5b2pf1ca1 >= rtP .
Integrator_UpperSat ) { rtDW . a5b2pf1ca1 = rtP . Integrator_UpperSat ; }
else { if ( rtDW . a5b2pf1ca1 <= rtP . Integrator_LowerSat ) { rtDW .
a5b2pf1ca1 = rtP . Integrator_LowerSat ; } } rtDW . em0fyfhvo3 = ( int8_T )
rtB . jdslzqjqun ; rtDW . pmanv5vib4 += rtP . Filter_gainval * rtB .
lqhzivpz11 ; rtDW . a0jorff1ss += rtP . Integrator_gainval_evxnoheart * rtB .
jn3qzzjeuq ; rtDW . ilqh1aaypb = 0U ; rtDW . bxa45rw5vc += rtP .
Integrator_gainval_ixv0i24q4y * rtB . kqtmnjsgam ; if ( rtDW . bxa45rw5vc >=
rtP . Integrator_UpperSat_czguogaom1 ) { rtDW . bxa45rw5vc = rtP .
Integrator_UpperSat_czguogaom1 ; } else { if ( rtDW . bxa45rw5vc <= rtP .
Integrator_LowerSat_fhhrbnlssc ) { rtDW . bxa45rw5vc = rtP .
Integrator_LowerSat_fhhrbnlssc ; } } rtDW . klsm2newc5 = ( int8_T ) rtB .
phkrya1ay3 ; rtDW . b3tylb2ldo += rtP . Filter_gainval_m3bozatxx4 * rtB .
fvzicuhi4u ; rtDW . fufi0up1jf += rtP . Integrator_gainval_phjczhiptn * rtB .
c4dmfd3ngi ; rtDW . i0arhlwpkr = 0U ; rtDW . nqxlzyezrj += rtP .
Integrator_gainval_lgbng1p1od * rtB . i2u0a1gwhd ; if ( rtDW . nqxlzyezrj >=
rtP . Integrator_UpperSat_jilgocqigo ) { rtDW . nqxlzyezrj = rtP .
Integrator_UpperSat_jilgocqigo ; } else { if ( rtDW . nqxlzyezrj <= rtP .
Integrator_LowerSat_meej1knsfc ) { rtDW . nqxlzyezrj = rtP .
Integrator_LowerSat_meej1knsfc ; } } rtDW . ambny1b3cd = ( int8_T ) rtB .
oom55hkhas ; rtDW . msly0lvz1t += rtP . Filter_gainval_dcpihimpte * rtB .
psg2d3ulvi ; rtDW . mc5mpe4xnm += rtP . Integrator_gainval_fxz21rvcq2 * rtB .
f2pnpawcdm ; rtDW . fd1b2b35qg = 0U ; rtDW . giau5bnyxy += rtP .
Integrator_gainval_e4yvg5h4je * rtB . p0evwnfym1 ; if ( rtDW . giau5bnyxy >=
rtP . Integrator_UpperSat_k3htidczg5 ) { rtDW . giau5bnyxy = rtP .
Integrator_UpperSat_k3htidczg5 ; } else { if ( rtDW . giau5bnyxy <= rtP .
Integrator_LowerSat_ieq4zg3egn ) { rtDW . giau5bnyxy = rtP .
Integrator_LowerSat_ieq4zg3egn ; } } rtDW . axpxfydig1 = ( int8_T ) rtB .
ffarlqqvec ; rtDW . lmbrjj1yo3 += rtP . Filter_gainval_czxjn1rlbf * rtB .
miypggsa3e ; rtDW . fr123draxv += rtP . Integrator_gainval_bfghpclnjy * rtB .
ddcumew3cn ; rtDW . lbazymzajn = 0U ; rtDW . bxdnouemfh += rtP .
Integrator_gainval_hw1oy5wzvu * rtB . l5v4lpwsc3 ; if ( rtDW . bxdnouemfh >=
rtP . Integrator_UpperSat_pm2laakorw ) { rtDW . bxdnouemfh = rtP .
Integrator_UpperSat_pm2laakorw ; } else { if ( rtDW . bxdnouemfh <= rtP .
Integrator_LowerSat_dap2gqqil4 ) { rtDW . bxdnouemfh = rtP .
Integrator_LowerSat_dap2gqqil4 ; } } rtDW . eu1vn25ayr = ( int8_T ) rtB .
jzdyk043zo ; rtDW . celnn5zc2p += rtP . Filter_gainval_hd00yas04n * rtB .
hu2rgr3hfe ; rtDW . isrvloycz1 += rtP . Integrator_gainval_lyxhkmrez3 * rtB .
fcted5fdfb ; rtDW . h1vxeb0scs = 0U ; rtDW . hnsejpj33e += rtP .
Integrator_gainval_fgcdlddvaj * rtB . p4m03lz4zh ; if ( rtDW . hnsejpj33e >=
rtP . Integrator_UpperSat_kos2lis5jd ) { rtDW . hnsejpj33e = rtP .
Integrator_UpperSat_kos2lis5jd ; } else { if ( rtDW . hnsejpj33e <= rtP .
Integrator_LowerSat_gvexo5zn1g ) { rtDW . hnsejpj33e = rtP .
Integrator_LowerSat_gvexo5zn1g ; } } rtDW . ie2533k5zy = ( int8_T ) rtB .
jj1lgxwadp ; rtDW . jiah2uksw0 += rtP . Filter_gainval_jvx230nbth * rtB .
oued3wu2st ; rtDW . naiwehmog1 += rtP . Integrator_gainval_dfjgw4u3hp * rtB .
iuontvn31z ; rtDW . lhb2tg0f4z = 0U ; rtDW . ooo2af04bi += rtP .
Integrator_gainval_ax1qbi1zsf * rtB . n1srrzcvqf ; if ( rtDW . ooo2af04bi >=
rtP . Integrator_UpperSat_pxoupp3bpy ) { rtDW . ooo2af04bi = rtP .
Integrator_UpperSat_pxoupp3bpy ; } else { if ( rtDW . ooo2af04bi <= rtP .
Integrator_LowerSat_dxi0sl14if ) { rtDW . ooo2af04bi = rtP .
Integrator_LowerSat_dxi0sl14if ; } } rtDW . i03sqzsz3t = ( int8_T ) rtB .
f3gocd01pz ; rtDW . ocn5n2oria += rtP . Integrator_gainval_jh4ek35yra * rtB .
a02mtaqnbs ; rtDW . cv3ju4xxmy = 0U ; rtDW . hxjqpdvr2h += rtP .
Integrator_gainval_ilq14saqfb * rtB . csjc4ym4ir ; if ( rtDW . hxjqpdvr2h >=
rtP . Integrator_UpperSat_dyf31exjbb ) { rtDW . hxjqpdvr2h = rtP .
Integrator_UpperSat_dyf31exjbb ; } else { if ( rtDW . hxjqpdvr2h <= rtP .
Integrator_LowerSat_kf5ksuxrmw ) { rtDW . hxjqpdvr2h = rtP .
Integrator_LowerSat_kf5ksuxrmw ; } } rtDW . a4uh1p4rvk = ( int8_T ) rtB .
gog2qbskx2 ; rtDW . nlstabwqbk += rtP . Integrator_gainval_ozrhkkjmsl * rtB .
ivzbvvwgbn ; rtDW . anoo3rym4l = 0U ; rtDW . eja5dvqkvx += rtP .
Integrator_gainval_o1pkdugrbd * rtB . b24hv4z2vs ; if ( rtDW . eja5dvqkvx >=
rtP . Integrator_UpperSat_ft3uzmj1ph ) { rtDW . eja5dvqkvx = rtP .
Integrator_UpperSat_ft3uzmj1ph ; } else { if ( rtDW . eja5dvqkvx <= rtP .
Integrator_LowerSat_cfjq315toj ) { rtDW . eja5dvqkvx = rtP .
Integrator_LowerSat_cfjq315toj ; } } rtDW . bijsz2zuxo = ( int8_T ) rtB .
l3pf5coce3 ; rtDW . aryinoifit += rtP . Integrator_gainval_ivhv4zygdd * rtB .
dd5ie0ajbq ; rtDW . azsb3bde3k = 0U ; rtDW . jww4ubou4q += rtP .
Integrator_gainval_majrlzonqu * rtB . ejhwcpty3j ; if ( rtDW . jww4ubou4q >=
rtP . Integrator_UpperSat_icgexzc3ek ) { rtDW . jww4ubou4q = rtP .
Integrator_UpperSat_icgexzc3ek ; } else { if ( rtDW . jww4ubou4q <= rtP .
Integrator_LowerSat_enhsd21rzi ) { rtDW . jww4ubou4q = rtP .
Integrator_LowerSat_enhsd21rzi ; } } rtDW . pwf2bkifeq = ( int8_T ) rtB .
kqpqdscv03 ; rtDW . ih51fkzbrp += rtP . Integrator_gainval_ly3ytcugg3 * rtB .
oo510d4zw4 ; rtDW . akfkxrbuhe = 0U ; rtDW . cprte2otvn += rtP .
Integrator_gainval_ie3iqjywto * rtB . frpc4jznjz ; if ( rtDW . cprte2otvn >=
rtP . Integrator_UpperSat_dh4d4fmkz3 ) { rtDW . cprte2otvn = rtP .
Integrator_UpperSat_dh4d4fmkz3 ; } else { if ( rtDW . cprte2otvn <= rtP .
Integrator_LowerSat_fyi041pxta ) { rtDW . cprte2otvn = rtP .
Integrator_LowerSat_fyi041pxta ; } } rtDW . px4tkgbjaa = ( int8_T ) rtB .
lbqadsyant ; rtDW . ozwizziqkv += rtP . Integrator_gainval_ai021icgbp * rtB .
iuvcixaj1u ; rtDW . maqw1lhppg = 0U ; rtDW . f34n5dy3xh += rtP .
Integrator_gainval_faaohscdc3 * rtB . lh4ky3tqcp ; if ( rtDW . f34n5dy3xh >=
rtP . Integrator_UpperSat_kidwxza1it ) { rtDW . f34n5dy3xh = rtP .
Integrator_UpperSat_kidwxza1it ; } else { if ( rtDW . f34n5dy3xh <= rtP .
Integrator_LowerSat_g5j2kqgd1m ) { rtDW . f34n5dy3xh = rtP .
Integrator_LowerSat_g5j2kqgd1m ; } } rtDW . ehsgo0dd2g = ( int8_T ) rtB .
jqeseokzby ; rtDW . i1v5qjzuaj += rtP . Integrator_gainval_agnx1rsywz * rtB .
bx0hsvyjif ; } simulationData = ( NeslSimulationData * ) rtDW . fdriqx01pi ;
time_p = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_p ; simulationData -> mData ->
mContStates . mN = 30 ; simulationData -> mData -> mContStates . mX = & rtX .
po2xstkzai [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . cawjwjevhp ;
simulationData -> mData -> mModeVector . mN = 6 ; simulationData -> mData ->
mModeVector . mX = & rtDW . jlxuucsfm3 [ 0 ] ; tmp = false ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; simulationData -> mData -> mIsSolverCheckingCIC
= false ; tmp = ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData
-> mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 =
( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; simulationData -> mData ->
mIsSolverRequestingReset = false ; tmp_g [ 0 ] = 0 ; tmp_m [ 0 ] = rtB .
lv3dk0vxjj [ 0 ] ; tmp_m [ 1 ] = rtB . lv3dk0vxjj [ 1 ] ; tmp_m [ 2 ] = rtB .
lv3dk0vxjj [ 2 ] ; tmp_m [ 3 ] = rtB . lv3dk0vxjj [ 3 ] ; tmp_g [ 1 ] = 4 ;
tmp_m [ 4 ] = rtB . fixkmettoc [ 0 ] ; tmp_m [ 5 ] = rtB . fixkmettoc [ 1 ] ;
tmp_m [ 6 ] = rtB . fixkmettoc [ 2 ] ; tmp_m [ 7 ] = rtB . fixkmettoc [ 3 ] ;
tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB . asixhrrsif [ 0 ] ; tmp_m [ 9 ] = rtB .
asixhrrsif [ 1 ] ; tmp_m [ 10 ] = rtB . asixhrrsif [ 2 ] ; tmp_m [ 11 ] = rtB
. asixhrrsif [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] = rtB . poqyqx1ybu [ 0 ]
; tmp_m [ 13 ] = rtB . poqyqx1ybu [ 1 ] ; tmp_m [ 14 ] = rtB . poqyqx1ybu [ 2
] ; tmp_m [ 15 ] = rtB . poqyqx1ybu [ 3 ] ; tmp_g [ 4 ] = 16 ; tmp_m [ 16 ] =
rtB . e3jijk5hzs [ 0 ] ; tmp_m [ 17 ] = rtB . e3jijk5hzs [ 1 ] ; tmp_m [ 18 ]
= rtB . e3jijk5hzs [ 2 ] ; tmp_m [ 19 ] = rtB . e3jijk5hzs [ 3 ] ; tmp_g [ 5
] = 20 ; tmp_m [ 20 ] = rtB . kbokax0jy0 [ 0 ] ; tmp_m [ 21 ] = rtB .
kbokax0jy0 [ 1 ] ; tmp_m [ 22 ] = rtB . kbokax0jy0 [ 2 ] ; tmp_m [ 23 ] = rtB
. kbokax0jy0 [ 3 ] ; tmp_g [ 6 ] = 24 ; tmp_m [ 24 ] = rtB . adplijeiu3 [ 0 ]
; tmp_m [ 25 ] = rtB . adplijeiu3 [ 1 ] ; tmp_m [ 26 ] = rtB . adplijeiu3 [ 2
] ; tmp_m [ 27 ] = rtB . adplijeiu3 [ 3 ] ; tmp_g [ 7 ] = 28 ; tmp_m [ 28 ] =
rtB . fkmyqachua [ 0 ] ; tmp_m [ 29 ] = rtB . fkmyqachua [ 1 ] ; tmp_m [ 30 ]
= rtB . fkmyqachua [ 2 ] ; tmp_m [ 31 ] = rtB . fkmyqachua [ 3 ] ; tmp_g [ 8
] = 32 ; tmp_m [ 32 ] = rtB . jhnfskyafx [ 0 ] ; tmp_m [ 33 ] = rtB .
jhnfskyafx [ 1 ] ; tmp_m [ 34 ] = rtB . jhnfskyafx [ 2 ] ; tmp_m [ 35 ] = rtB
. jhnfskyafx [ 3 ] ; tmp_g [ 9 ] = 36 ; tmp_m [ 36 ] = rtB . j132ytumpt [ 0 ]
; tmp_m [ 37 ] = rtB . j132ytumpt [ 1 ] ; tmp_m [ 38 ] = rtB . j132ytumpt [ 2
] ; tmp_m [ 39 ] = rtB . j132ytumpt [ 3 ] ; tmp_g [ 10 ] = 40 ; tmp_m [ 40 ]
= rtB . aya0m3v3i0 [ 0 ] ; tmp_m [ 41 ] = rtB . aya0m3v3i0 [ 1 ] ; tmp_m [ 42
] = rtB . aya0m3v3i0 [ 2 ] ; tmp_m [ 43 ] = rtB . aya0m3v3i0 [ 3 ] ; tmp_g [
11 ] = 44 ; tmp_m [ 44 ] = rtB . jkh24e405z [ 0 ] ; tmp_m [ 45 ] = rtB .
jkh24e405z [ 1 ] ; tmp_m [ 46 ] = rtB . jkh24e405z [ 2 ] ; tmp_m [ 47 ] = rtB
. jkh24e405z [ 3 ] ; tmp_g [ 12 ] = 48 ; simulationData -> mData ->
mInputValues . mN = 48 ; simulationData -> mData -> mInputValues . mX = &
tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 13 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ; simulator = (
NeslSimulator * ) rtDW . hoinjnpu05 ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . fkez4vs1k0 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( simulator , NESL_SIM_UPDATE , simulationData ,
diagnosticManager ) ; if ( tmp_i != 0 ) { tmp = error_buffer_is_empty (
ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg = rtw_diagnostics_msg (
diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } UNUSED_PARAMETER (
tid ) ; } void MdlDerivatives ( void ) { NeslSimulationData * simulationData
; real_T time ; boolean_T tmp ; real_T tmp_p [ 24 ] ; int_T tmp_e [ 7 ] ;
NeslSimulator * simulator ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; int32_T tmp_i ; char * msg ; real_T
time_p ; real_T tmp_m [ 48 ] ; int_T tmp_g [ 13 ] ; XDot * _rtXdot ; _rtXdot
= ( ( XDot * ) ssGetdX ( rtS ) ) ; simulationData = ( NeslSimulationData * )
rtDW . fh2yevo3ke ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime
. mN = 1 ; simulationData -> mData -> mTime . mX = & time ; simulationData ->
mData -> mContStates . mN = 24 ; simulationData -> mData -> mContStates . mX
= & rtX . gwgkdmwsw2 [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0
; simulationData -> mData -> mDiscStates . mX = & rtDW . mq0xsn5npj ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . gntbh4nenu ; tmp = false ; simulationData ->
mData -> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; simulationData -> mData -> mIsSolverCheckingCIC = false ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; simulationData -> mData ->
mIsSolverRequestingReset = false ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
acli4c4thv [ 0 ] ; tmp_p [ 1 ] = rtB . acli4c4thv [ 1 ] ; tmp_p [ 2 ] = rtB .
acli4c4thv [ 2 ] ; tmp_p [ 3 ] = rtB . acli4c4thv [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . knzgt5pcsx [ 0 ] ; tmp_p [ 5 ] = rtB . knzgt5pcsx [ 1 ] ;
tmp_p [ 6 ] = rtB . knzgt5pcsx [ 2 ] ; tmp_p [ 7 ] = rtB . knzgt5pcsx [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . orzbfuvelk [ 0 ] ; tmp_p [ 9 ] = rtB .
orzbfuvelk [ 1 ] ; tmp_p [ 10 ] = rtB . orzbfuvelk [ 2 ] ; tmp_p [ 11 ] = rtB
. orzbfuvelk [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . cvgkgbsato [ 0 ]
; tmp_p [ 13 ] = rtB . cvgkgbsato [ 1 ] ; tmp_p [ 14 ] = rtB . cvgkgbsato [ 2
] ; tmp_p [ 15 ] = rtB . cvgkgbsato [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . nfrqasfoje [ 0 ] ; tmp_p [ 17 ] = rtB . nfrqasfoje [ 1 ] ; tmp_p [ 18 ]
= rtB . nfrqasfoje [ 2 ] ; tmp_p [ 19 ] = rtB . nfrqasfoje [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . dvzsxsm21d [ 0 ] ; tmp_p [ 21 ] = rtB .
dvzsxsm21d [ 1 ] ; tmp_p [ 22 ] = rtB . dvzsxsm21d [ 2 ] ; tmp_p [ 23 ] = rtB
. dvzsxsm21d [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 24 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> gwgkdmwsw2 [ 0 ] ; simulator = ( NeslSimulator * ) rtDW .
oiaqjmfdle ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . orvixz3xj4
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( simulator ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } _rtXdot -> cumqqyz2cg = ( rtB . j3nnkf33ca [ 1 ] - rtX . cumqqyz2cg ) *
1000.0 ; _rtXdot -> fdcrlx4ud4 = ( rtB . j3nnkf33ca [ 3 ] - rtX . fdcrlx4ud4
) * 1000.0 ; _rtXdot -> kzwrxm4myr = ( rtB . j3nnkf33ca [ 5 ] - rtX .
kzwrxm4myr ) * 1000.0 ; _rtXdot -> lmvlun415q = ( rtB . j3nnkf33ca [ 7 ] -
rtX . lmvlun415q ) * 1000.0 ; _rtXdot -> l31pskqy5j = ( rtB . j3nnkf33ca [ 9
] - rtX . l31pskqy5j ) * 1000.0 ; _rtXdot -> eniv3pchxv = ( rtB . j3nnkf33ca
[ 11 ] - rtX . eniv3pchxv ) * 1000.0 ; _rtXdot -> p2tpemdq0j [ 0 ] = rtX .
p2tpemdq0j [ 1 ] ; _rtXdot -> p2tpemdq0j [ 1 ] = ( ( rtDW . cx3lhcr5hy - rtX
. p2tpemdq0j [ 0 ] ) * 1000.0 - 2.0 * rtX . p2tpemdq0j [ 1 ] ) * 1000.0 ;
_rtXdot -> oorunl2yew [ 0 ] = rtX . oorunl2yew [ 1 ] ; _rtXdot -> oorunl2yew
[ 1 ] = ( ( rtDW . ed3jdhmuic - rtX . oorunl2yew [ 0 ] ) * 1000.0 - 2.0 * rtX
. oorunl2yew [ 1 ] ) * 1000.0 ; _rtXdot -> gko3wp2kax [ 0 ] = rtX .
gko3wp2kax [ 1 ] ; _rtXdot -> gko3wp2kax [ 1 ] = ( ( rtDW . iyutm2c4la - rtX
. gko3wp2kax [ 0 ] ) * 1000.0 - 2.0 * rtX . gko3wp2kax [ 1 ] ) * 1000.0 ;
_rtXdot -> igj4xzveyr [ 0 ] = rtX . igj4xzveyr [ 1 ] ; _rtXdot -> igj4xzveyr
[ 1 ] = ( ( rtDW . eufofduh2l - rtX . igj4xzveyr [ 0 ] ) * 1000.0 - 2.0 * rtX
. igj4xzveyr [ 1 ] ) * 1000.0 ; _rtXdot -> d0wlpacimb [ 0 ] = rtX .
d0wlpacimb [ 1 ] ; _rtXdot -> d0wlpacimb [ 1 ] = ( ( rtDW . g3umqfw1p4 - rtX
. d0wlpacimb [ 0 ] ) * 1000.0 - 2.0 * rtX . d0wlpacimb [ 1 ] ) * 1000.0 ;
_rtXdot -> leswo0sava [ 0 ] = rtX . leswo0sava [ 1 ] ; _rtXdot -> leswo0sava
[ 1 ] = ( ( rtDW . mlkhe43blf - rtX . leswo0sava [ 0 ] ) * 1000.0 - 2.0 * rtX
. leswo0sava [ 1 ] ) * 1000.0 ; simulationData = ( NeslSimulationData * )
rtDW . fdriqx01pi ; time_p = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_p ;
simulationData -> mData -> mContStates . mN = 30 ; simulationData -> mData ->
mContStates . mX = & rtX . po2xstkzai [ 0 ] ; simulationData -> mData ->
mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = & rtDW .
cawjwjevhp ; simulationData -> mData -> mModeVector . mN = 6 ; simulationData
-> mData -> mModeVector . mX = & rtDW . jlxuucsfm3 [ 0 ] ; tmp = false ;
simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; simulationData -> mData -> mIsSolverCheckingCIC
= false ; tmp = ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData
-> mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 =
( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; simulationData -> mData ->
mIsSolverRequestingReset = false ; tmp_g [ 0 ] = 0 ; tmp_m [ 0 ] = rtB .
lv3dk0vxjj [ 0 ] ; tmp_m [ 1 ] = rtB . lv3dk0vxjj [ 1 ] ; tmp_m [ 2 ] = rtB .
lv3dk0vxjj [ 2 ] ; tmp_m [ 3 ] = rtB . lv3dk0vxjj [ 3 ] ; tmp_g [ 1 ] = 4 ;
tmp_m [ 4 ] = rtB . fixkmettoc [ 0 ] ; tmp_m [ 5 ] = rtB . fixkmettoc [ 1 ] ;
tmp_m [ 6 ] = rtB . fixkmettoc [ 2 ] ; tmp_m [ 7 ] = rtB . fixkmettoc [ 3 ] ;
tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB . asixhrrsif [ 0 ] ; tmp_m [ 9 ] = rtB .
asixhrrsif [ 1 ] ; tmp_m [ 10 ] = rtB . asixhrrsif [ 2 ] ; tmp_m [ 11 ] = rtB
. asixhrrsif [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] = rtB . poqyqx1ybu [ 0 ]
; tmp_m [ 13 ] = rtB . poqyqx1ybu [ 1 ] ; tmp_m [ 14 ] = rtB . poqyqx1ybu [ 2
] ; tmp_m [ 15 ] = rtB . poqyqx1ybu [ 3 ] ; tmp_g [ 4 ] = 16 ; tmp_m [ 16 ] =
rtB . e3jijk5hzs [ 0 ] ; tmp_m [ 17 ] = rtB . e3jijk5hzs [ 1 ] ; tmp_m [ 18 ]
= rtB . e3jijk5hzs [ 2 ] ; tmp_m [ 19 ] = rtB . e3jijk5hzs [ 3 ] ; tmp_g [ 5
] = 20 ; tmp_m [ 20 ] = rtB . kbokax0jy0 [ 0 ] ; tmp_m [ 21 ] = rtB .
kbokax0jy0 [ 1 ] ; tmp_m [ 22 ] = rtB . kbokax0jy0 [ 2 ] ; tmp_m [ 23 ] = rtB
. kbokax0jy0 [ 3 ] ; tmp_g [ 6 ] = 24 ; tmp_m [ 24 ] = rtB . adplijeiu3 [ 0 ]
; tmp_m [ 25 ] = rtB . adplijeiu3 [ 1 ] ; tmp_m [ 26 ] = rtB . adplijeiu3 [ 2
] ; tmp_m [ 27 ] = rtB . adplijeiu3 [ 3 ] ; tmp_g [ 7 ] = 28 ; tmp_m [ 28 ] =
rtB . fkmyqachua [ 0 ] ; tmp_m [ 29 ] = rtB . fkmyqachua [ 1 ] ; tmp_m [ 30 ]
= rtB . fkmyqachua [ 2 ] ; tmp_m [ 31 ] = rtB . fkmyqachua [ 3 ] ; tmp_g [ 8
] = 32 ; tmp_m [ 32 ] = rtB . jhnfskyafx [ 0 ] ; tmp_m [ 33 ] = rtB .
jhnfskyafx [ 1 ] ; tmp_m [ 34 ] = rtB . jhnfskyafx [ 2 ] ; tmp_m [ 35 ] = rtB
. jhnfskyafx [ 3 ] ; tmp_g [ 9 ] = 36 ; tmp_m [ 36 ] = rtB . j132ytumpt [ 0 ]
; tmp_m [ 37 ] = rtB . j132ytumpt [ 1 ] ; tmp_m [ 38 ] = rtB . j132ytumpt [ 2
] ; tmp_m [ 39 ] = rtB . j132ytumpt [ 3 ] ; tmp_g [ 10 ] = 40 ; tmp_m [ 40 ]
= rtB . aya0m3v3i0 [ 0 ] ; tmp_m [ 41 ] = rtB . aya0m3v3i0 [ 1 ] ; tmp_m [ 42
] = rtB . aya0m3v3i0 [ 2 ] ; tmp_m [ 43 ] = rtB . aya0m3v3i0 [ 3 ] ; tmp_g [
11 ] = 44 ; tmp_m [ 44 ] = rtB . jkh24e405z [ 0 ] ; tmp_m [ 45 ] = rtB .
jkh24e405z [ 1 ] ; tmp_m [ 46 ] = rtB . jkh24e405z [ 2 ] ; tmp_m [ 47 ] = rtB
. jkh24e405z [ 3 ] ; tmp_g [ 12 ] = 48 ; simulationData -> mData ->
mInputValues . mN = 48 ; simulationData -> mData -> mInputValues . mX = &
tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 13 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
simulationData -> mData -> mDx . mN = 30 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> po2xstkzai [ 0 ] ; simulator = ( NeslSimulator * ) rtDW .
hoinjnpu05 ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . fkez4vs1k0
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( simulator ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlProjection ( void ) { NeslSimulationData * simulationData ;
real_T time ; boolean_T tmp ; real_T tmp_p [ 24 ] ; int_T tmp_e [ 7 ] ;
NeslSimulator * simulator ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; int32_T tmp_i ; char * msg ; real_T
time_p ; real_T tmp_m [ 48 ] ; int_T tmp_g [ 13 ] ; simulationData = (
NeslSimulationData * ) rtDW . fh2yevo3ke ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 24 ;
simulationData -> mData -> mContStates . mX = & rtX . gwgkdmwsw2 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . mq0xsn5npj ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
gntbh4nenu ; tmp = false ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; simulationData ->
mData -> mIsSolverCheckingCIC = false ; tmp = ssIsSolverComputingJacobian (
rtS ) ; simulationData -> mData -> mIsComputingJacobian = tmp ;
simulationData -> mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian (
rtS ) != 0 ) ; simulationData -> mData -> mIsSolverRequestingReset = false ;
tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB . acli4c4thv [ 0 ] ; tmp_p [ 1 ] = rtB .
acli4c4thv [ 1 ] ; tmp_p [ 2 ] = rtB . acli4c4thv [ 2 ] ; tmp_p [ 3 ] = rtB .
acli4c4thv [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . knzgt5pcsx [ 0 ] ;
tmp_p [ 5 ] = rtB . knzgt5pcsx [ 1 ] ; tmp_p [ 6 ] = rtB . knzgt5pcsx [ 2 ] ;
tmp_p [ 7 ] = rtB . knzgt5pcsx [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB .
orzbfuvelk [ 0 ] ; tmp_p [ 9 ] = rtB . orzbfuvelk [ 1 ] ; tmp_p [ 10 ] = rtB
. orzbfuvelk [ 2 ] ; tmp_p [ 11 ] = rtB . orzbfuvelk [ 3 ] ; tmp_e [ 3 ] = 12
; tmp_p [ 12 ] = rtB . cvgkgbsato [ 0 ] ; tmp_p [ 13 ] = rtB . cvgkgbsato [ 1
] ; tmp_p [ 14 ] = rtB . cvgkgbsato [ 2 ] ; tmp_p [ 15 ] = rtB . cvgkgbsato [
3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] = rtB . nfrqasfoje [ 0 ] ; tmp_p [ 17 ]
= rtB . nfrqasfoje [ 1 ] ; tmp_p [ 18 ] = rtB . nfrqasfoje [ 2 ] ; tmp_p [ 19
] = rtB . nfrqasfoje [ 3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] = rtB .
dvzsxsm21d [ 0 ] ; tmp_p [ 21 ] = rtB . dvzsxsm21d [ 1 ] ; tmp_p [ 22 ] = rtB
. dvzsxsm21d [ 2 ] ; tmp_p [ 23 ] = rtB . dvzsxsm21d [ 3 ] ; tmp_e [ 6 ] = 24
; simulationData -> mData -> mInputValues . mN = 24 ; simulationData -> mData
-> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 7 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; simulator = ( NeslSimulator * ) rtDW . oiaqjmfdle ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . orvixz3xj4 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( simulator , NESL_SIM_PROJECTION ,
simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . fdriqx01pi ; time_p = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_p ; simulationData -> mData -> mContStates . mN = 30 ;
simulationData -> mData -> mContStates . mX = & rtX . po2xstkzai [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . cawjwjevhp ; simulationData -> mData ->
mModeVector . mN = 6 ; simulationData -> mData -> mModeVector . mX = & rtDW .
jlxuucsfm3 [ 0 ] ; tmp = false ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; simulationData ->
mData -> mIsSolverCheckingCIC = false ; tmp = ssIsSolverComputingJacobian (
rtS ) ; simulationData -> mData -> mIsComputingJacobian = tmp ;
simulationData -> mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian (
rtS ) != 0 ) ; simulationData -> mData -> mIsSolverRequestingReset = false ;
tmp_g [ 0 ] = 0 ; tmp_m [ 0 ] = rtB . lv3dk0vxjj [ 0 ] ; tmp_m [ 1 ] = rtB .
lv3dk0vxjj [ 1 ] ; tmp_m [ 2 ] = rtB . lv3dk0vxjj [ 2 ] ; tmp_m [ 3 ] = rtB .
lv3dk0vxjj [ 3 ] ; tmp_g [ 1 ] = 4 ; tmp_m [ 4 ] = rtB . fixkmettoc [ 0 ] ;
tmp_m [ 5 ] = rtB . fixkmettoc [ 1 ] ; tmp_m [ 6 ] = rtB . fixkmettoc [ 2 ] ;
tmp_m [ 7 ] = rtB . fixkmettoc [ 3 ] ; tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB .
asixhrrsif [ 0 ] ; tmp_m [ 9 ] = rtB . asixhrrsif [ 1 ] ; tmp_m [ 10 ] = rtB
. asixhrrsif [ 2 ] ; tmp_m [ 11 ] = rtB . asixhrrsif [ 3 ] ; tmp_g [ 3 ] = 12
; tmp_m [ 12 ] = rtB . poqyqx1ybu [ 0 ] ; tmp_m [ 13 ] = rtB . poqyqx1ybu [ 1
] ; tmp_m [ 14 ] = rtB . poqyqx1ybu [ 2 ] ; tmp_m [ 15 ] = rtB . poqyqx1ybu [
3 ] ; tmp_g [ 4 ] = 16 ; tmp_m [ 16 ] = rtB . e3jijk5hzs [ 0 ] ; tmp_m [ 17 ]
= rtB . e3jijk5hzs [ 1 ] ; tmp_m [ 18 ] = rtB . e3jijk5hzs [ 2 ] ; tmp_m [ 19
] = rtB . e3jijk5hzs [ 3 ] ; tmp_g [ 5 ] = 20 ; tmp_m [ 20 ] = rtB .
kbokax0jy0 [ 0 ] ; tmp_m [ 21 ] = rtB . kbokax0jy0 [ 1 ] ; tmp_m [ 22 ] = rtB
. kbokax0jy0 [ 2 ] ; tmp_m [ 23 ] = rtB . kbokax0jy0 [ 3 ] ; tmp_g [ 6 ] = 24
; tmp_m [ 24 ] = rtB . adplijeiu3 [ 0 ] ; tmp_m [ 25 ] = rtB . adplijeiu3 [ 1
] ; tmp_m [ 26 ] = rtB . adplijeiu3 [ 2 ] ; tmp_m [ 27 ] = rtB . adplijeiu3 [
3 ] ; tmp_g [ 7 ] = 28 ; tmp_m [ 28 ] = rtB . fkmyqachua [ 0 ] ; tmp_m [ 29 ]
= rtB . fkmyqachua [ 1 ] ; tmp_m [ 30 ] = rtB . fkmyqachua [ 2 ] ; tmp_m [ 31
] = rtB . fkmyqachua [ 3 ] ; tmp_g [ 8 ] = 32 ; tmp_m [ 32 ] = rtB .
jhnfskyafx [ 0 ] ; tmp_m [ 33 ] = rtB . jhnfskyafx [ 1 ] ; tmp_m [ 34 ] = rtB
. jhnfskyafx [ 2 ] ; tmp_m [ 35 ] = rtB . jhnfskyafx [ 3 ] ; tmp_g [ 9 ] = 36
; tmp_m [ 36 ] = rtB . j132ytumpt [ 0 ] ; tmp_m [ 37 ] = rtB . j132ytumpt [ 1
] ; tmp_m [ 38 ] = rtB . j132ytumpt [ 2 ] ; tmp_m [ 39 ] = rtB . j132ytumpt [
3 ] ; tmp_g [ 10 ] = 40 ; tmp_m [ 40 ] = rtB . aya0m3v3i0 [ 0 ] ; tmp_m [ 41
] = rtB . aya0m3v3i0 [ 1 ] ; tmp_m [ 42 ] = rtB . aya0m3v3i0 [ 2 ] ; tmp_m [
43 ] = rtB . aya0m3v3i0 [ 3 ] ; tmp_g [ 11 ] = 44 ; tmp_m [ 44 ] = rtB .
jkh24e405z [ 0 ] ; tmp_m [ 45 ] = rtB . jkh24e405z [ 1 ] ; tmp_m [ 46 ] = rtB
. jkh24e405z [ 2 ] ; tmp_m [ 47 ] = rtB . jkh24e405z [ 3 ] ; tmp_g [ 12 ] =
48 ; simulationData -> mData -> mInputValues . mN = 48 ; simulationData ->
mData -> mInputValues . mX = & tmp_m [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 13 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_g [ 0 ] ; simulator = ( NeslSimulator * ) rtDW . hoinjnpu05 ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . fkez4vs1k0 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( simulator , NESL_SIM_PROJECTION ,
simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
} void MdlForcingFunction ( void ) { NeslSimulationData * simulationData ;
real_T time ; boolean_T tmp ; real_T tmp_p [ 24 ] ; int_T tmp_e [ 7 ] ;
NeslSimulator * simulator ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; int32_T tmp_i ; char * msg ; real_T
time_p ; real_T tmp_m [ 48 ] ; int_T tmp_g [ 13 ] ; XDot * _rtXdot ; _rtXdot
= ( ( XDot * ) ssGetdX ( rtS ) ) ; simulationData = ( NeslSimulationData * )
rtDW . fh2yevo3ke ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime
. mN = 1 ; simulationData -> mData -> mTime . mX = & time ; simulationData ->
mData -> mContStates . mN = 24 ; simulationData -> mData -> mContStates . mX
= & rtX . gwgkdmwsw2 [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0
; simulationData -> mData -> mDiscStates . mX = & rtDW . mq0xsn5npj ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . gntbh4nenu ; tmp = false ; simulationData ->
mData -> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; simulationData -> mData -> mIsSolverCheckingCIC = false ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; simulationData -> mData ->
mIsSolverRequestingReset = false ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
acli4c4thv [ 0 ] ; tmp_p [ 1 ] = rtB . acli4c4thv [ 1 ] ; tmp_p [ 2 ] = rtB .
acli4c4thv [ 2 ] ; tmp_p [ 3 ] = rtB . acli4c4thv [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . knzgt5pcsx [ 0 ] ; tmp_p [ 5 ] = rtB . knzgt5pcsx [ 1 ] ;
tmp_p [ 6 ] = rtB . knzgt5pcsx [ 2 ] ; tmp_p [ 7 ] = rtB . knzgt5pcsx [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . orzbfuvelk [ 0 ] ; tmp_p [ 9 ] = rtB .
orzbfuvelk [ 1 ] ; tmp_p [ 10 ] = rtB . orzbfuvelk [ 2 ] ; tmp_p [ 11 ] = rtB
. orzbfuvelk [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . cvgkgbsato [ 0 ]
; tmp_p [ 13 ] = rtB . cvgkgbsato [ 1 ] ; tmp_p [ 14 ] = rtB . cvgkgbsato [ 2
] ; tmp_p [ 15 ] = rtB . cvgkgbsato [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . nfrqasfoje [ 0 ] ; tmp_p [ 17 ] = rtB . nfrqasfoje [ 1 ] ; tmp_p [ 18 ]
= rtB . nfrqasfoje [ 2 ] ; tmp_p [ 19 ] = rtB . nfrqasfoje [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . dvzsxsm21d [ 0 ] ; tmp_p [ 21 ] = rtB .
dvzsxsm21d [ 1 ] ; tmp_p [ 22 ] = rtB . dvzsxsm21d [ 2 ] ; tmp_p [ 23 ] = rtB
. dvzsxsm21d [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 24 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> gwgkdmwsw2 [ 0 ] ; simulator = ( NeslSimulator * ) rtDW .
oiaqjmfdle ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . orvixz3xj4
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( simulator ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } _rtXdot -> cumqqyz2cg = ( rtB . j3nnkf33ca [ 1 ] - rtX . cumqqyz2cg ) *
1000.0 ; _rtXdot -> fdcrlx4ud4 = ( rtB . j3nnkf33ca [ 3 ] - rtX . fdcrlx4ud4
) * 1000.0 ; _rtXdot -> kzwrxm4myr = ( rtB . j3nnkf33ca [ 5 ] - rtX .
kzwrxm4myr ) * 1000.0 ; _rtXdot -> lmvlun415q = ( rtB . j3nnkf33ca [ 7 ] -
rtX . lmvlun415q ) * 1000.0 ; _rtXdot -> l31pskqy5j = ( rtB . j3nnkf33ca [ 9
] - rtX . l31pskqy5j ) * 1000.0 ; _rtXdot -> eniv3pchxv = ( rtB . j3nnkf33ca
[ 11 ] - rtX . eniv3pchxv ) * 1000.0 ; _rtXdot -> p2tpemdq0j [ 0 ] = rtX .
p2tpemdq0j [ 1 ] ; _rtXdot -> p2tpemdq0j [ 1 ] = ( ( rtDW . cx3lhcr5hy - rtX
. p2tpemdq0j [ 0 ] ) * 1000.0 - 2.0 * rtX . p2tpemdq0j [ 1 ] ) * 1000.0 ;
_rtXdot -> oorunl2yew [ 0 ] = rtX . oorunl2yew [ 1 ] ; _rtXdot -> oorunl2yew
[ 1 ] = ( ( rtDW . ed3jdhmuic - rtX . oorunl2yew [ 0 ] ) * 1000.0 - 2.0 * rtX
. oorunl2yew [ 1 ] ) * 1000.0 ; _rtXdot -> gko3wp2kax [ 0 ] = rtX .
gko3wp2kax [ 1 ] ; _rtXdot -> gko3wp2kax [ 1 ] = ( ( rtDW . iyutm2c4la - rtX
. gko3wp2kax [ 0 ] ) * 1000.0 - 2.0 * rtX . gko3wp2kax [ 1 ] ) * 1000.0 ;
_rtXdot -> igj4xzveyr [ 0 ] = rtX . igj4xzveyr [ 1 ] ; _rtXdot -> igj4xzveyr
[ 1 ] = ( ( rtDW . eufofduh2l - rtX . igj4xzveyr [ 0 ] ) * 1000.0 - 2.0 * rtX
. igj4xzveyr [ 1 ] ) * 1000.0 ; _rtXdot -> d0wlpacimb [ 0 ] = rtX .
d0wlpacimb [ 1 ] ; _rtXdot -> d0wlpacimb [ 1 ] = ( ( rtDW . g3umqfw1p4 - rtX
. d0wlpacimb [ 0 ] ) * 1000.0 - 2.0 * rtX . d0wlpacimb [ 1 ] ) * 1000.0 ;
_rtXdot -> leswo0sava [ 0 ] = rtX . leswo0sava [ 1 ] ; _rtXdot -> leswo0sava
[ 1 ] = ( ( rtDW . mlkhe43blf - rtX . leswo0sava [ 0 ] ) * 1000.0 - 2.0 * rtX
. leswo0sava [ 1 ] ) * 1000.0 ; simulationData = ( NeslSimulationData * )
rtDW . fdriqx01pi ; time_p = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_p ;
simulationData -> mData -> mContStates . mN = 30 ; simulationData -> mData ->
mContStates . mX = & rtX . po2xstkzai [ 0 ] ; simulationData -> mData ->
mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = & rtDW .
cawjwjevhp ; simulationData -> mData -> mModeVector . mN = 6 ; simulationData
-> mData -> mModeVector . mX = & rtDW . jlxuucsfm3 [ 0 ] ; tmp = false ;
simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; simulationData -> mData -> mIsSolverCheckingCIC
= false ; tmp = ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData
-> mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 =
( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; simulationData -> mData ->
mIsSolverRequestingReset = false ; tmp_g [ 0 ] = 0 ; tmp_m [ 0 ] = rtB .
lv3dk0vxjj [ 0 ] ; tmp_m [ 1 ] = rtB . lv3dk0vxjj [ 1 ] ; tmp_m [ 2 ] = rtB .
lv3dk0vxjj [ 2 ] ; tmp_m [ 3 ] = rtB . lv3dk0vxjj [ 3 ] ; tmp_g [ 1 ] = 4 ;
tmp_m [ 4 ] = rtB . fixkmettoc [ 0 ] ; tmp_m [ 5 ] = rtB . fixkmettoc [ 1 ] ;
tmp_m [ 6 ] = rtB . fixkmettoc [ 2 ] ; tmp_m [ 7 ] = rtB . fixkmettoc [ 3 ] ;
tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB . asixhrrsif [ 0 ] ; tmp_m [ 9 ] = rtB .
asixhrrsif [ 1 ] ; tmp_m [ 10 ] = rtB . asixhrrsif [ 2 ] ; tmp_m [ 11 ] = rtB
. asixhrrsif [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] = rtB . poqyqx1ybu [ 0 ]
; tmp_m [ 13 ] = rtB . poqyqx1ybu [ 1 ] ; tmp_m [ 14 ] = rtB . poqyqx1ybu [ 2
] ; tmp_m [ 15 ] = rtB . poqyqx1ybu [ 3 ] ; tmp_g [ 4 ] = 16 ; tmp_m [ 16 ] =
rtB . e3jijk5hzs [ 0 ] ; tmp_m [ 17 ] = rtB . e3jijk5hzs [ 1 ] ; tmp_m [ 18 ]
= rtB . e3jijk5hzs [ 2 ] ; tmp_m [ 19 ] = rtB . e3jijk5hzs [ 3 ] ; tmp_g [ 5
] = 20 ; tmp_m [ 20 ] = rtB . kbokax0jy0 [ 0 ] ; tmp_m [ 21 ] = rtB .
kbokax0jy0 [ 1 ] ; tmp_m [ 22 ] = rtB . kbokax0jy0 [ 2 ] ; tmp_m [ 23 ] = rtB
. kbokax0jy0 [ 3 ] ; tmp_g [ 6 ] = 24 ; tmp_m [ 24 ] = rtB . adplijeiu3 [ 0 ]
; tmp_m [ 25 ] = rtB . adplijeiu3 [ 1 ] ; tmp_m [ 26 ] = rtB . adplijeiu3 [ 2
] ; tmp_m [ 27 ] = rtB . adplijeiu3 [ 3 ] ; tmp_g [ 7 ] = 28 ; tmp_m [ 28 ] =
rtB . fkmyqachua [ 0 ] ; tmp_m [ 29 ] = rtB . fkmyqachua [ 1 ] ; tmp_m [ 30 ]
= rtB . fkmyqachua [ 2 ] ; tmp_m [ 31 ] = rtB . fkmyqachua [ 3 ] ; tmp_g [ 8
] = 32 ; tmp_m [ 32 ] = rtB . jhnfskyafx [ 0 ] ; tmp_m [ 33 ] = rtB .
jhnfskyafx [ 1 ] ; tmp_m [ 34 ] = rtB . jhnfskyafx [ 2 ] ; tmp_m [ 35 ] = rtB
. jhnfskyafx [ 3 ] ; tmp_g [ 9 ] = 36 ; tmp_m [ 36 ] = rtB . j132ytumpt [ 0 ]
; tmp_m [ 37 ] = rtB . j132ytumpt [ 1 ] ; tmp_m [ 38 ] = rtB . j132ytumpt [ 2
] ; tmp_m [ 39 ] = rtB . j132ytumpt [ 3 ] ; tmp_g [ 10 ] = 40 ; tmp_m [ 40 ]
= rtB . aya0m3v3i0 [ 0 ] ; tmp_m [ 41 ] = rtB . aya0m3v3i0 [ 1 ] ; tmp_m [ 42
] = rtB . aya0m3v3i0 [ 2 ] ; tmp_m [ 43 ] = rtB . aya0m3v3i0 [ 3 ] ; tmp_g [
11 ] = 44 ; tmp_m [ 44 ] = rtB . jkh24e405z [ 0 ] ; tmp_m [ 45 ] = rtB .
jkh24e405z [ 1 ] ; tmp_m [ 46 ] = rtB . jkh24e405z [ 2 ] ; tmp_m [ 47 ] = rtB
. jkh24e405z [ 3 ] ; tmp_g [ 12 ] = 48 ; simulationData -> mData ->
mInputValues . mN = 48 ; simulationData -> mData -> mInputValues . mX = &
tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 13 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
simulationData -> mData -> mDx . mN = 30 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> po2xstkzai [ 0 ] ; simulator = ( NeslSimulator * ) rtDW .
hoinjnpu05 ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . fkez4vs1k0
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( simulator ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } } void MdlMassMatrix ( void ) { NeslSimulationData *
simulationData ; real_T time ; boolean_T tmp ; real_T tmp_p [ 48 ] ; int_T
tmp_e [ 13 ] ; real_T * tmp_i ; NeslSimulator * simulator ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; int32_T tmp_m ; char * msg ; simulationData = ( NeslSimulationData * ) rtDW
. fdriqx01pi ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN
= 1 ; simulationData -> mData -> mTime . mX = & time ; simulationData ->
mData -> mContStates . mN = 30 ; simulationData -> mData -> mContStates . mX
= & rtX . po2xstkzai [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0
; simulationData -> mData -> mDiscStates . mX = & rtDW . cawjwjevhp ;
simulationData -> mData -> mModeVector . mN = 6 ; simulationData -> mData ->
mModeVector . mX = & rtDW . jlxuucsfm3 [ 0 ] ; tmp = false ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; simulationData -> mData -> mIsSolverCheckingCIC
= false ; tmp = ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData
-> mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 =
( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; simulationData -> mData ->
mIsSolverRequestingReset = false ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
lv3dk0vxjj [ 0 ] ; tmp_p [ 1 ] = rtB . lv3dk0vxjj [ 1 ] ; tmp_p [ 2 ] = rtB .
lv3dk0vxjj [ 2 ] ; tmp_p [ 3 ] = rtB . lv3dk0vxjj [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . fixkmettoc [ 0 ] ; tmp_p [ 5 ] = rtB . fixkmettoc [ 1 ] ;
tmp_p [ 6 ] = rtB . fixkmettoc [ 2 ] ; tmp_p [ 7 ] = rtB . fixkmettoc [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . asixhrrsif [ 0 ] ; tmp_p [ 9 ] = rtB .
asixhrrsif [ 1 ] ; tmp_p [ 10 ] = rtB . asixhrrsif [ 2 ] ; tmp_p [ 11 ] = rtB
. asixhrrsif [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . poqyqx1ybu [ 0 ]
; tmp_p [ 13 ] = rtB . poqyqx1ybu [ 1 ] ; tmp_p [ 14 ] = rtB . poqyqx1ybu [ 2
] ; tmp_p [ 15 ] = rtB . poqyqx1ybu [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . e3jijk5hzs [ 0 ] ; tmp_p [ 17 ] = rtB . e3jijk5hzs [ 1 ] ; tmp_p [ 18 ]
= rtB . e3jijk5hzs [ 2 ] ; tmp_p [ 19 ] = rtB . e3jijk5hzs [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . kbokax0jy0 [ 0 ] ; tmp_p [ 21 ] = rtB .
kbokax0jy0 [ 1 ] ; tmp_p [ 22 ] = rtB . kbokax0jy0 [ 2 ] ; tmp_p [ 23 ] = rtB
. kbokax0jy0 [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] = rtB . adplijeiu3 [ 0 ]
; tmp_p [ 25 ] = rtB . adplijeiu3 [ 1 ] ; tmp_p [ 26 ] = rtB . adplijeiu3 [ 2
] ; tmp_p [ 27 ] = rtB . adplijeiu3 [ 3 ] ; tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] =
rtB . fkmyqachua [ 0 ] ; tmp_p [ 29 ] = rtB . fkmyqachua [ 1 ] ; tmp_p [ 30 ]
= rtB . fkmyqachua [ 2 ] ; tmp_p [ 31 ] = rtB . fkmyqachua [ 3 ] ; tmp_e [ 8
] = 32 ; tmp_p [ 32 ] = rtB . jhnfskyafx [ 0 ] ; tmp_p [ 33 ] = rtB .
jhnfskyafx [ 1 ] ; tmp_p [ 34 ] = rtB . jhnfskyafx [ 2 ] ; tmp_p [ 35 ] = rtB
. jhnfskyafx [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] = rtB . j132ytumpt [ 0 ]
; tmp_p [ 37 ] = rtB . j132ytumpt [ 1 ] ; tmp_p [ 38 ] = rtB . j132ytumpt [ 2
] ; tmp_p [ 39 ] = rtB . j132ytumpt [ 3 ] ; tmp_e [ 10 ] = 40 ; tmp_p [ 40 ]
= rtB . aya0m3v3i0 [ 0 ] ; tmp_p [ 41 ] = rtB . aya0m3v3i0 [ 1 ] ; tmp_p [ 42
] = rtB . aya0m3v3i0 [ 2 ] ; tmp_p [ 43 ] = rtB . aya0m3v3i0 [ 3 ] ; tmp_e [
11 ] = 44 ; tmp_p [ 44 ] = rtB . jkh24e405z [ 0 ] ; tmp_p [ 45 ] = rtB .
jkh24e405z [ 1 ] ; tmp_p [ 46 ] = rtB . jkh24e405z [ 2 ] ; tmp_p [ 47 ] = rtB
. jkh24e405z [ 3 ] ; tmp_e [ 12 ] = 48 ; simulationData -> mData ->
mInputValues . mN = 48 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 13 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ; tmp_i =
rtMassMatrix . pr ; tmp_i = double_pointer_shift ( tmp_i , rtDW . fgqemyl0yo
) ; simulationData -> mData -> mMassMatrixPr . mN = 18 ; simulationData ->
mData -> mMassMatrixPr . mX = tmp_i ; simulator = ( NeslSimulator * ) rtDW .
hoinjnpu05 ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . fkez4vs1k0
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_m = ne_simulator_method ( simulator ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_m != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlTerminate ( void ) { NeuDiagnosticManager * diagnosticManager
; NeslSimulationData * simulationData ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . orvixz3xj4 ; neu_destroy_diagnostic_manager (
diagnosticManager ) ; simulationData = ( NeslSimulationData * ) rtDW .
fh2yevo3ke ; nesl_destroy_simulation_data ( simulationData ) ;
nesl_erase_simulator ( "closedLoop_visual/Plant/Robot/Solver Configuration_1"
) ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . cwe4k4yovf ;
neu_destroy_diagnostic_manager ( diagnosticManager ) ; simulationData = (
NeslSimulationData * ) rtDW . mnmdamtgkb ; nesl_destroy_simulation_data (
simulationData ) ; nesl_erase_simulator (
"closedLoop_visual/Plant/Robot/Solver Configuration_1" ) ; rt_FREE ( rtDW .
nmmvz2iapr . RSimInfoPtr ) ; diagnosticManager = ( NeuDiagnosticManager * )
rtDW . fkez4vs1k0 ; neu_destroy_diagnostic_manager ( diagnosticManager ) ;
simulationData = ( NeslSimulationData * ) rtDW . fdriqx01pi ;
nesl_destroy_simulation_data ( simulationData ) ; nesl_erase_simulator (
"closedLoop_visual/Plant/Robot/Solver Configuration_2" ) ; diagnosticManager
= ( NeuDiagnosticManager * ) rtDW . mkukpfbnwo ;
neu_destroy_diagnostic_manager ( diagnosticManager ) ; simulationData = (
NeslSimulationData * ) rtDW . cacbslwxfv ; nesl_destroy_simulation_data (
simulationData ) ; nesl_erase_simulator (
"closedLoop_visual/Plant/Robot/Solver Configuration_2" ) ; if (
rt_slioCatalogue ( ) != ( NULL ) ) { void * * slioCatalogueAddr =
rt_slioCatalogueAddr ( ) ; rtwSaveDatasetsToMatFile (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ,
rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 72 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 1 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
2 ) ; ssSetNumBlocks ( rtS , 611 ) ; ssSetNumBlockIO ( rtS , 300 ) ;
ssSetNumBlockParams ( rtS , 356 ) ; } void MdlInitializeSampleTimes ( void )
{ ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0025 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 2932799438U ) ;
ssSetChecksumVal ( rtS , 1 , 4130175437U ) ; ssSetChecksumVal ( rtS , 2 ,
1242794333U ) ; ssSetChecksumVal ( rtS , 3 , 3298442912U ) ; }
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
( B ) ) ; } { ssSetY ( rtS , & rtY ) ; rtY . nrsrysiyzh =
closedLoop_visual_rtZjointMotionBus ; } { real_T * x = ( real_T * ) & rtX ;
ssSetContStates ( rtS , x ) ; ( void ) memset ( ( void * ) x , 0 , sizeof ( X
) ) ; } { void * dwork = ( void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ;
( void ) memset ( dwork , 0 , sizeof ( DW ) ) ; } { rtDW . fgqemyl0yo = 42 ;
} { static DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo
, 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo
. numDataTypes = 17 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ;
dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; }
closedLoop_visual_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive (
rtS , true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "closedLoop_visual" ) ;
ssSetPath ( rtS , "closedLoop_visual" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 20.0 ) ; ssSetStepSize ( rtS , 0.0025 ) ;
ssSetFixedStepSize ( rtS , 0.0025 ) ; ssSetSolverExtrapolationOrder ( rtS , 1
) ; ssSetSolverNumberNewtonIterations ( rtS , 1 ) ; { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = NULL ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static int_T
rt_LoggedStateWidths [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 2 , 2 ,
2 , 2 , 2 } ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 2 ,
2 , 2 , 2 , 2 } ; static boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
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
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) , ( NULL ) ,
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
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "Discrete" ,
"FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" ,
"Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" ,
"FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" ,
"Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" ,
"FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" , "Discrete" ,
"Discrete" , "Discrete" , "Discrete" , "Discrete" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = {
 "closedLoop_visual/Plant/Robot/Torque Actuated Revolute Joint with Position/Upper Arm Revolute"
,
 "closedLoop_visual/Plant/Robot/Torque Actuated Revolute Joint with Position/Upper Arm Revolute"
,
 "closedLoop_visual/Plant/Robot/Torque Actuated Revolute Joint with Position1/Upper Arm Revolute"
,
 "closedLoop_visual/Plant/Robot/Torque Actuated Revolute Joint with Position1/Upper Arm Revolute"
,
 "closedLoop_visual/Plant/Robot/Torque Actuated Revolute Joint with Position2/Upper Arm Revolute"
,
 "closedLoop_visual/Plant/Robot/Torque Actuated Revolute Joint with Position2/Upper Arm Revolute"
,
 "closedLoop_visual/Plant/Robot/Torque Actuated Revolute Joint with Position3/Upper Arm Revolute"
,
 "closedLoop_visual/Plant/Robot/Torque Actuated Revolute Joint with Position3/Upper Arm Revolute"
, "closedLoop_visual/Plant/Robot/Gripper/Left Revolute A" ,
"closedLoop_visual/Plant/Robot/Gripper/Left Revolute A" ,
"closedLoop_visual/Plant/Robot/Gripper/Left Finger Revolute  A" ,
"closedLoop_visual/Plant/Robot/Gripper/Left Finger Revolute  A" ,
 "closedLoop_visual/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position1/Upper Arm Revolute"
,
 "closedLoop_visual/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position1/Upper Arm Revolute"
, "closedLoop_visual/Plant/Robot/Gripper/Right Revolute A" ,
"closedLoop_visual/Plant/Robot/Gripper/Right Revolute A" ,
"closedLoop_visual/Plant/Robot/Gripper/Right Finger Revolute A" ,
"closedLoop_visual/Plant/Robot/Gripper/Right Finger Revolute A" ,
 "closedLoop_visual/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position3/Upper Arm Revolute"
,
 "closedLoop_visual/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position3/Upper Arm Revolute"
, "closedLoop_visual/Plant/Robot/Gripper/Left Finger Revolute B" ,
"closedLoop_visual/Plant/Robot/Gripper/Left Finger Revolute B" ,
"closedLoop_visual/Plant/Robot/Gripper/Right Finger Revolute B" ,
"closedLoop_visual/Plant/Robot/Gripper/Right Finger Revolute B" ,
"closedLoop_visual/Plant/Robot/Solver\nConfiguration" ,
"closedLoop_visual/Plant/Robot/Solver\nConfiguration" ,
"closedLoop_visual/Plant/Robot/Solver\nConfiguration" ,
"closedLoop_visual/Plant/Robot/Solver\nConfiguration" ,
"closedLoop_visual/Plant/Robot/Solver\nConfiguration" ,
"closedLoop_visual/Plant/Robot/Solver\nConfiguration" ,
 "closedLoop_visual/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
,
 "closedLoop_visual/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
,
 "closedLoop_visual/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
,
 "closedLoop_visual/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
,
 "closedLoop_visual/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
,
 "closedLoop_visual/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
,
 "closedLoop_visual/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
,
 "closedLoop_visual/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
,
 "closedLoop_visual/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
,
 "closedLoop_visual/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
,
 "closedLoop_visual/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
,
 "closedLoop_visual/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
,
 "closedLoop_visual/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_visual/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_visual/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_visual/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_visual/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_visual/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_visual/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_visual/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_visual/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_visual/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_visual/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_visual/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_visual/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_visual/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_visual/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_visual/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_visual/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_visual/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_visual/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Angular Velocity Source"
,
 "closedLoop_visual/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Angular Velocity Source"
,
 "closedLoop_visual/Plant/Robot/Torque Actuated Revolute Joint with Position/Rot2Rev/Ideal Angular Velocity Source"
,
 "closedLoop_visual/Plant/Robot/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Angular Velocity Source"
,
 "closedLoop_visual/Plant/Robot/Torque Actuated Revolute Joint with Position2/Rot2Rev/Ideal Angular Velocity Source"
,
 "closedLoop_visual/Plant/Robot/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Angular Velocity Source"
,
 "closedLoop_visual/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_visual/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_visual/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_visual/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_visual/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_visual/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
,
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/PID Controller/Filter/Disc. Forward Euler Filter/Filter"
,
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/PID Controller/Integrator/Discrete/Integrator"
,
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
,
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/PID Controller/Filter/Disc. Forward Euler Filter/Filter"
,
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/PID Controller/Integrator/Discrete/Integrator"
,
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
,
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/PID Controller/Filter/Disc. Forward Euler Filter/Filter"
,
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/PID Controller/Integrator/Discrete/Integrator"
,
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
,
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/PID Controller/Filter/Disc. Forward Euler Filter/Filter"
,
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/PID Controller/Integrator/Discrete/Integrator"
,
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
,
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/PID Controller/Filter/Disc. Forward Euler Filter/Filter"
,
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/PID Controller/Integrator/Discrete/Integrator"
,
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
,
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/PID Controller/Filter/Disc. Forward Euler Filter/Filter"
,
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/PID Controller/Integrator/Discrete/Integrator"
,
 "closedLoop_visual/Controller/Servomotor Speed Controller/FA Discrete Speed control/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
,
 "closedLoop_visual/Controller/Servomotor Speed Controller/FA Discrete Speed control/PID Controller/Integrator/Discrete/Integrator"
,
 "closedLoop_visual/Controller/Servomotor Speed Controller/GA Discrete Speed control/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
,
 "closedLoop_visual/Controller/Servomotor Speed Controller/GA Discrete Speed control/PID Controller/Integrator/Discrete/Integrator"
,
 "closedLoop_visual/Controller/Servomotor Speed Controller/LFA Discrete Speed control/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
,
 "closedLoop_visual/Controller/Servomotor Speed Controller/LFA Discrete Speed control/PID Controller/Integrator/Discrete/Integrator"
,
 "closedLoop_visual/Controller/Servomotor Speed Controller/RFA Discrete Speed control/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
,
 "closedLoop_visual/Controller/Servomotor Speed Controller/RFA Discrete Speed control/PID Controller/Integrator/Discrete/Integrator"
,
 "closedLoop_visual/Controller/Servomotor Speed Controller/UA Discrete Speed control/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
,
 "closedLoop_visual/Controller/Servomotor Speed Controller/UA Discrete Speed control/PID Controller/Integrator/Discrete/Integrator"
,
 "closedLoop_visual/Controller/Servomotor Speed Controller/WA Discrete Speed control/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
,
 "closedLoop_visual/Controller/Servomotor Speed Controller/WA Discrete Speed control/PID Controller/Integrator/Discrete/Integrator"
,
"closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_2_1_1"
,
"closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_2_1_1"
,
"closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_4_1_1"
,
"closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_4_1_1"
,
"closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_6_1_1"
,
"closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_6_1_1"
,
"closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_8_1_1"
,
"closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_8_1_1"
,
"closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_10_1_1"
,
"closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_10_1_1"
,
"closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_12_1_1"
,
"closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_12_1_1"
, "closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1"
, "closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1"
, "closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1"
, "closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1"
, "closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1"
, "closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1"
, "closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1"
, "closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1"
, "closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1"
, "closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1"
, "closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_6_1_1"
, "closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_6_1_1"
,
"closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_1_1_1"
,
"closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_3_1_1"
,
"closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_5_1_1"
,
"closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_7_1_1"
,
"closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_9_1_1"
,
"closedLoop_visual/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_11_1_1"
} ; static const char_T * rt_LoggedStateNames [ ] = {
 "closedLoop_visual.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Upper_Arm_Revolute.Rz.q"
,
 "closedLoop_visual.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Upper_Arm_Revolute.Rz.w"
,
 "closedLoop_visual.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Upper_Arm_Revolute.Rz.q"
,
 "closedLoop_visual.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Upper_Arm_Revolute.Rz.w"
,
 "closedLoop_visual.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Upper_Arm_Revolute.Rz.q"
,
 "closedLoop_visual.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Upper_Arm_Revolute.Rz.w"
,
 "closedLoop_visual.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Upper_Arm_Revolute.Rz.q"
,
 "closedLoop_visual.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Upper_Arm_Revolute.Rz.w"
, "closedLoop_visual.Plant.Robot.Gripper.Left_Revolute_A.Rz.q" ,
"closedLoop_visual.Plant.Robot.Gripper.Left_Revolute_A.Rz.w" ,
"closedLoop_visual.Plant.Robot.Gripper.Left_Finger_Revolute_A.Rz.q" ,
"closedLoop_visual.Plant.Robot.Gripper.Left_Finger_Revolute_A.Rz.w" ,
 "closedLoop_visual.Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Upper_Arm_Revolute.Rz.q"
,
 "closedLoop_visual.Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Upper_Arm_Revolute.Rz.w"
, "closedLoop_visual.Plant.Robot.Gripper.Right_Revolute_A.Rz.q" ,
"closedLoop_visual.Plant.Robot.Gripper.Right_Revolute_A.Rz.w" ,
"closedLoop_visual.Plant.Robot.Gripper.Right_Finger_Revolute_A.Rz.q" ,
"closedLoop_visual.Plant.Robot.Gripper.Right_Finger_Revolute_A.Rz.w" ,
 "closedLoop_visual.Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Upper_Arm_Revolute.Rz.q"
,
 "closedLoop_visual.Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Upper_Arm_Revolute.Rz.w"
, "closedLoop_visual.Plant.Robot.Gripper.Left_Finger_Revolute_B.Rz.q" ,
"closedLoop_visual.Plant.Robot.Gripper.Left_Finger_Revolute_B.Rz.w" ,
"closedLoop_visual.Plant.Robot.Gripper.Right_Finger_Revolute_B.Rz.q" ,
"closedLoop_visual.Plant.Robot.Gripper.Right_Finger_Revolute_B.Rz.w" ,
"closedLoop_visual.outputFiltered_3014640452_0" ,
"closedLoop_visual.outputFiltered_1022310116_0" ,
"closedLoop_visual.outputFiltered_1177511300_0" ,
"closedLoop_visual.outputFiltered_4179614693_0" ,
"closedLoop_visual.outputFiltered_3756300401_0" ,
"closedLoop_visual.outputFiltered_2770651921_0" ,
 "closedLoop_visual.Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_2481143438_0"
,
 "closedLoop_visual.Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_2481143438_1"
,
 "closedLoop_visual.Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_3561178206_0"
,
 "closedLoop_visual.Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_3561178206_1"
,
 "closedLoop_visual.Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_3911413230_0"
,
 "closedLoop_visual.Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_3911413230_1"
,
 "closedLoop_visual.Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_1526968830_0"
,
 "closedLoop_visual.Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_1526968830_1"
,
 "closedLoop_visual.Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_1717803086_0"
,
 "closedLoop_visual.Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_1717803086_1"
,
 "closedLoop_visual.Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_566485662_0"
,
 "closedLoop_visual.Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_566485662_1"
,
 "closedLoop_visual.Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
,
 "closedLoop_visual.Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
,
 "closedLoop_visual.Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
,
 "closedLoop_visual.Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
,
 "closedLoop_visual.Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
,
 "closedLoop_visual.Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
,
 "closedLoop_visual.Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
,
 "closedLoop_visual.Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
,
 "closedLoop_visual.Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
,
 "closedLoop_visual.Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
,
 "closedLoop_visual.Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
,
 "closedLoop_visual.Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
,
 "closedLoop_visual.Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.i"
,
 "closedLoop_visual.Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.i"
,
 "closedLoop_visual.Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.i"
,
 "closedLoop_visual.Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.i"
,
 "closedLoop_visual.Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.i"
,
 "closedLoop_visual.Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.i"
,
 "closedLoop_visual.Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Angular_Velocity_Source.t"
,
 "closedLoop_visual.Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Angular_Velocity_Source.t"
,
 "closedLoop_visual.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Rot2Rev.Ideal_Angular_Velocity_Source.t"
,
 "closedLoop_visual.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Angular_Velocity_Source.t"
,
 "closedLoop_visual.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Rot2Rev.Ideal_Angular_Velocity_Source.t"
,
 "closedLoop_visual.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Angular_Velocity_Source.t"
,
 "closedLoop_visual.Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
,
 "closedLoop_visual.Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
,
 "closedLoop_visual.Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
,
 "closedLoop_visual.Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
,
 "closedLoop_visual.Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
,
 "closedLoop_visual.Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" ,
"" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" ,
"" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" } ;
static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static RTWLogDataTypeConvert
rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 ,
1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } ,
{ 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
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
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static
RTWLogSignalInfo rt_LoggedStateSignalInfo = { 132 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert } ; static void *
rt_LoggedStateSignalPtrs [ 132 ] ; rtliSetLogXSignalPtrs ( ssGetRTWLogInfo (
rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . gwgkdmwsw2 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . gwgkdmwsw2 [ 1 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . gwgkdmwsw2 [ 2 ] ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . gwgkdmwsw2 [ 3 ] ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . gwgkdmwsw2 [ 4 ] ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . gwgkdmwsw2 [ 5 ] ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . gwgkdmwsw2 [ 6 ] ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . gwgkdmwsw2 [ 7 ] ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . gwgkdmwsw2 [ 8 ] ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . gwgkdmwsw2 [ 9 ] ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . gwgkdmwsw2 [ 10 ] ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . gwgkdmwsw2 [ 11 ] ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . gwgkdmwsw2 [ 12 ] ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . gwgkdmwsw2 [ 13 ] ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . gwgkdmwsw2 [ 14 ] ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . gwgkdmwsw2 [ 15 ] ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtX . gwgkdmwsw2 [ 16 ] ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtX . gwgkdmwsw2 [ 17 ] ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtX . gwgkdmwsw2 [ 18 ] ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtX . gwgkdmwsw2 [ 19 ] ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtX . gwgkdmwsw2 [ 20 ] ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtX . gwgkdmwsw2 [ 21 ] ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtX . gwgkdmwsw2 [ 22 ] ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtX . gwgkdmwsw2 [ 23 ] ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtX . cumqqyz2cg ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtX . fdcrlx4ud4 ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) & rtX . kzwrxm4myr ;
rt_LoggedStateSignalPtrs [ 27 ] = ( void * ) & rtX . lmvlun415q ;
rt_LoggedStateSignalPtrs [ 28 ] = ( void * ) & rtX . l31pskqy5j ;
rt_LoggedStateSignalPtrs [ 29 ] = ( void * ) & rtX . eniv3pchxv ;
rt_LoggedStateSignalPtrs [ 30 ] = ( void * ) & rtX . p2tpemdq0j [ 0 ] ;
rt_LoggedStateSignalPtrs [ 31 ] = ( void * ) & rtX . p2tpemdq0j [ 1 ] ;
rt_LoggedStateSignalPtrs [ 32 ] = ( void * ) & rtX . oorunl2yew [ 0 ] ;
rt_LoggedStateSignalPtrs [ 33 ] = ( void * ) & rtX . oorunl2yew [ 1 ] ;
rt_LoggedStateSignalPtrs [ 34 ] = ( void * ) & rtX . gko3wp2kax [ 0 ] ;
rt_LoggedStateSignalPtrs [ 35 ] = ( void * ) & rtX . gko3wp2kax [ 1 ] ;
rt_LoggedStateSignalPtrs [ 36 ] = ( void * ) & rtX . igj4xzveyr [ 0 ] ;
rt_LoggedStateSignalPtrs [ 37 ] = ( void * ) & rtX . igj4xzveyr [ 1 ] ;
rt_LoggedStateSignalPtrs [ 38 ] = ( void * ) & rtX . d0wlpacimb [ 0 ] ;
rt_LoggedStateSignalPtrs [ 39 ] = ( void * ) & rtX . d0wlpacimb [ 1 ] ;
rt_LoggedStateSignalPtrs [ 40 ] = ( void * ) & rtX . leswo0sava [ 0 ] ;
rt_LoggedStateSignalPtrs [ 41 ] = ( void * ) & rtX . leswo0sava [ 1 ] ;
rt_LoggedStateSignalPtrs [ 42 ] = ( void * ) & rtX . po2xstkzai [ 0 ] ;
rt_LoggedStateSignalPtrs [ 43 ] = ( void * ) & rtX . po2xstkzai [ 1 ] ;
rt_LoggedStateSignalPtrs [ 44 ] = ( void * ) & rtX . po2xstkzai [ 2 ] ;
rt_LoggedStateSignalPtrs [ 45 ] = ( void * ) & rtX . po2xstkzai [ 3 ] ;
rt_LoggedStateSignalPtrs [ 46 ] = ( void * ) & rtX . po2xstkzai [ 4 ] ;
rt_LoggedStateSignalPtrs [ 47 ] = ( void * ) & rtX . po2xstkzai [ 5 ] ;
rt_LoggedStateSignalPtrs [ 48 ] = ( void * ) & rtX . po2xstkzai [ 6 ] ;
rt_LoggedStateSignalPtrs [ 49 ] = ( void * ) & rtX . po2xstkzai [ 7 ] ;
rt_LoggedStateSignalPtrs [ 50 ] = ( void * ) & rtX . po2xstkzai [ 8 ] ;
rt_LoggedStateSignalPtrs [ 51 ] = ( void * ) & rtX . po2xstkzai [ 9 ] ;
rt_LoggedStateSignalPtrs [ 52 ] = ( void * ) & rtX . po2xstkzai [ 10 ] ;
rt_LoggedStateSignalPtrs [ 53 ] = ( void * ) & rtX . po2xstkzai [ 11 ] ;
rt_LoggedStateSignalPtrs [ 54 ] = ( void * ) & rtX . po2xstkzai [ 12 ] ;
rt_LoggedStateSignalPtrs [ 55 ] = ( void * ) & rtX . po2xstkzai [ 13 ] ;
rt_LoggedStateSignalPtrs [ 56 ] = ( void * ) & rtX . po2xstkzai [ 14 ] ;
rt_LoggedStateSignalPtrs [ 57 ] = ( void * ) & rtX . po2xstkzai [ 15 ] ;
rt_LoggedStateSignalPtrs [ 58 ] = ( void * ) & rtX . po2xstkzai [ 16 ] ;
rt_LoggedStateSignalPtrs [ 59 ] = ( void * ) & rtX . po2xstkzai [ 17 ] ;
rt_LoggedStateSignalPtrs [ 60 ] = ( void * ) & rtX . po2xstkzai [ 18 ] ;
rt_LoggedStateSignalPtrs [ 61 ] = ( void * ) & rtX . po2xstkzai [ 19 ] ;
rt_LoggedStateSignalPtrs [ 62 ] = ( void * ) & rtX . po2xstkzai [ 20 ] ;
rt_LoggedStateSignalPtrs [ 63 ] = ( void * ) & rtX . po2xstkzai [ 21 ] ;
rt_LoggedStateSignalPtrs [ 64 ] = ( void * ) & rtX . po2xstkzai [ 22 ] ;
rt_LoggedStateSignalPtrs [ 65 ] = ( void * ) & rtX . po2xstkzai [ 23 ] ;
rt_LoggedStateSignalPtrs [ 66 ] = ( void * ) & rtX . po2xstkzai [ 24 ] ;
rt_LoggedStateSignalPtrs [ 67 ] = ( void * ) & rtX . po2xstkzai [ 25 ] ;
rt_LoggedStateSignalPtrs [ 68 ] = ( void * ) & rtX . po2xstkzai [ 26 ] ;
rt_LoggedStateSignalPtrs [ 69 ] = ( void * ) & rtX . po2xstkzai [ 27 ] ;
rt_LoggedStateSignalPtrs [ 70 ] = ( void * ) & rtX . po2xstkzai [ 28 ] ;
rt_LoggedStateSignalPtrs [ 71 ] = ( void * ) & rtX . po2xstkzai [ 29 ] ;
rt_LoggedStateSignalPtrs [ 72 ] = ( void * ) & rtDW . a5b2pf1ca1 ;
rt_LoggedStateSignalPtrs [ 73 ] = ( void * ) & rtDW . pmanv5vib4 ;
rt_LoggedStateSignalPtrs [ 74 ] = ( void * ) & rtDW . a0jorff1ss ;
rt_LoggedStateSignalPtrs [ 75 ] = ( void * ) & rtDW . bxa45rw5vc ;
rt_LoggedStateSignalPtrs [ 76 ] = ( void * ) & rtDW . b3tylb2ldo ;
rt_LoggedStateSignalPtrs [ 77 ] = ( void * ) & rtDW . fufi0up1jf ;
rt_LoggedStateSignalPtrs [ 78 ] = ( void * ) & rtDW . nqxlzyezrj ;
rt_LoggedStateSignalPtrs [ 79 ] = ( void * ) & rtDW . msly0lvz1t ;
rt_LoggedStateSignalPtrs [ 80 ] = ( void * ) & rtDW . mc5mpe4xnm ;
rt_LoggedStateSignalPtrs [ 81 ] = ( void * ) & rtDW . giau5bnyxy ;
rt_LoggedStateSignalPtrs [ 82 ] = ( void * ) & rtDW . lmbrjj1yo3 ;
rt_LoggedStateSignalPtrs [ 83 ] = ( void * ) & rtDW . fr123draxv ;
rt_LoggedStateSignalPtrs [ 84 ] = ( void * ) & rtDW . bxdnouemfh ;
rt_LoggedStateSignalPtrs [ 85 ] = ( void * ) & rtDW . celnn5zc2p ;
rt_LoggedStateSignalPtrs [ 86 ] = ( void * ) & rtDW . isrvloycz1 ;
rt_LoggedStateSignalPtrs [ 87 ] = ( void * ) & rtDW . hnsejpj33e ;
rt_LoggedStateSignalPtrs [ 88 ] = ( void * ) & rtDW . jiah2uksw0 ;
rt_LoggedStateSignalPtrs [ 89 ] = ( void * ) & rtDW . naiwehmog1 ;
rt_LoggedStateSignalPtrs [ 90 ] = ( void * ) & rtDW . ooo2af04bi ;
rt_LoggedStateSignalPtrs [ 91 ] = ( void * ) & rtDW . ocn5n2oria ;
rt_LoggedStateSignalPtrs [ 92 ] = ( void * ) & rtDW . hxjqpdvr2h ;
rt_LoggedStateSignalPtrs [ 93 ] = ( void * ) & rtDW . nlstabwqbk ;
rt_LoggedStateSignalPtrs [ 94 ] = ( void * ) & rtDW . eja5dvqkvx ;
rt_LoggedStateSignalPtrs [ 95 ] = ( void * ) & rtDW . aryinoifit ;
rt_LoggedStateSignalPtrs [ 96 ] = ( void * ) & rtDW . jww4ubou4q ;
rt_LoggedStateSignalPtrs [ 97 ] = ( void * ) & rtDW . ih51fkzbrp ;
rt_LoggedStateSignalPtrs [ 98 ] = ( void * ) & rtDW . cprte2otvn ;
rt_LoggedStateSignalPtrs [ 99 ] = ( void * ) & rtDW . ozwizziqkv ;
rt_LoggedStateSignalPtrs [ 100 ] = ( void * ) & rtDW . f34n5dy3xh ;
rt_LoggedStateSignalPtrs [ 101 ] = ( void * ) & rtDW . i1v5qjzuaj ;
rt_LoggedStateSignalPtrs [ 102 ] = ( void * ) & rtDW . hfbuq22el5 ;
rt_LoggedStateSignalPtrs [ 103 ] = ( void * ) & rtDW . d3lfdhwsjw ;
rt_LoggedStateSignalPtrs [ 104 ] = ( void * ) & rtDW . jd4u0spqsv ;
rt_LoggedStateSignalPtrs [ 105 ] = ( void * ) & rtDW . f1v3bebsxz ;
rt_LoggedStateSignalPtrs [ 106 ] = ( void * ) & rtDW . ahajwvzqnu ;
rt_LoggedStateSignalPtrs [ 107 ] = ( void * ) & rtDW . haj010meq5 ;
rt_LoggedStateSignalPtrs [ 108 ] = ( void * ) & rtDW . axhmkl11mv ;
rt_LoggedStateSignalPtrs [ 109 ] = ( void * ) & rtDW . hjd4dlpjpx ;
rt_LoggedStateSignalPtrs [ 110 ] = ( void * ) & rtDW . fdqcpdb3br ;
rt_LoggedStateSignalPtrs [ 111 ] = ( void * ) & rtDW . ianiojkna1 ;
rt_LoggedStateSignalPtrs [ 112 ] = ( void * ) & rtDW . nwgyu0nfcm ;
rt_LoggedStateSignalPtrs [ 113 ] = ( void * ) & rtDW . l4urcs2vqx ;
rt_LoggedStateSignalPtrs [ 114 ] = ( void * ) & rtDW . cx3lhcr5hy ;
rt_LoggedStateSignalPtrs [ 115 ] = ( void * ) & rtDW . jvuzjfeloy ;
rt_LoggedStateSignalPtrs [ 116 ] = ( void * ) & rtDW . ed3jdhmuic ;
rt_LoggedStateSignalPtrs [ 117 ] = ( void * ) & rtDW . fhlkawvcxc ;
rt_LoggedStateSignalPtrs [ 118 ] = ( void * ) & rtDW . iyutm2c4la ;
rt_LoggedStateSignalPtrs [ 119 ] = ( void * ) & rtDW . k5yzqucy20 ;
rt_LoggedStateSignalPtrs [ 120 ] = ( void * ) & rtDW . eufofduh2l ;
rt_LoggedStateSignalPtrs [ 121 ] = ( void * ) & rtDW . idbi3jnfkp ;
rt_LoggedStateSignalPtrs [ 122 ] = ( void * ) & rtDW . g3umqfw1p4 ;
rt_LoggedStateSignalPtrs [ 123 ] = ( void * ) & rtDW . hfofwehec0 ;
rt_LoggedStateSignalPtrs [ 124 ] = ( void * ) & rtDW . mlkhe43blf ;
rt_LoggedStateSignalPtrs [ 125 ] = ( void * ) & rtDW . kgy31g3lpf ;
rt_LoggedStateSignalPtrs [ 126 ] = ( void * ) rtDW . cgjfcelwsi ;
rt_LoggedStateSignalPtrs [ 127 ] = ( void * ) rtDW . jpbs3jsulr ;
rt_LoggedStateSignalPtrs [ 128 ] = ( void * ) rtDW . oye5t2ga5w ;
rt_LoggedStateSignalPtrs [ 129 ] = ( void * ) rtDW . pwfr10qjji ;
rt_LoggedStateSignalPtrs [ 130 ] = ( void * ) rtDW . jfoy3lslhi ;
rt_LoggedStateSignalPtrs [ 131 ] = ( void * ) rtDW . hu4bgelwvg ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "tmp_raccel_xout" ) ; rtliSetLogXFinal (
ssGetRTWLogInfo ( rtS ) , "xFinal" ) ; rtliSetLogVarNameModifier (
ssGetRTWLogInfo ( rtS ) , "none" ) ; rtliSetLogFormat ( ssGetRTWLogInfo ( rtS
) , 2 ) ; rtliSetLogMaxRows ( ssGetRTWLogInfo ( rtS ) , 0 ) ;
rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS ) , 1 ) ; rtliSetLogY (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogYSignalInfo ( ssGetRTWLogInfo (
rtS ) , ( NULL ) ) ; rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL
) ) ; } { static struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS ,
& statesInfo2 ) ; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssSolverInfo slvrInfo ; static struct _ssSFcnModelMethods3 mdlMethods3 ;
static struct _ssSFcnModelMethods2 mdlMethods2 ; static boolean_T
contStatesDisabled [ 72 ] ; ssSetSolverInfo ( rtS , & slvrInfo ) ;
ssSetSolverName ( rtS , "ode14x" ) ; ssSetVariableStepSolver ( rtS , 0 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 0 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ;
_ssSetSolverUpdateJacobianAtReset ( rtS , true ) ; ssSetSolverStateProjection
( rtS , 1 ) ; ( void ) memset ( ( void * ) & mdlMethods2 , 0 , sizeof (
mdlMethods2 ) ) ; ssSetModelMethods2 ( rtS , & mdlMethods2 ) ; ( void )
memset ( ( void * ) & mdlMethods3 , 0 , sizeof ( mdlMethods3 ) ) ;
ssSetModelMethods3 ( rtS , & mdlMethods3 ) ; ssSetModelProjection ( rtS ,
MdlProjection ) ; ssSetMassMatrixType ( rtS , ( ssMatrixType ) 1 ) ;
ssSetMassMatrixNzMax ( rtS , 60 ) ; ssSetModelMassMatrix ( rtS ,
MdlMassMatrix ) ; ssSetModelForcingFunction ( rtS , MdlForcingFunction ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 1 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 60 ) ; ssSetModelOutputs ( rtS ,
MdlOutputs ) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetTNextTid ( rtS , INT_MIN ) ; ssSetTNext ( rtS ,
rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ; ssSetNumNonsampledZCs ( rtS ,
0 ) ; ssSetContStateDisabled ( rtS , contStatesDisabled ) ; { int_T * ir =
rtMassMatrix . ir ; int_T * jc = rtMassMatrix . jc ; real_T * pr =
rtMassMatrix . pr ; ssSetMassMatrixIr ( rtS , ir ) ; ssSetMassMatrixJc ( rtS
, jc ) ; ssSetMassMatrixPr ( rtS , pr ) ; ( void ) memset ( ( void * ) ir , 0
, 60 * sizeof ( int_T ) ) ; ( void ) memset ( ( void * ) jc , 0 , ( 72 + 1 )
* sizeof ( int_T ) ) ; ( void ) memset ( ( void * ) pr , 0 , 60 * sizeof (
real_T ) ) ; } } ssSetChecksumVal ( rtS , 0 , 2932799438U ) ;
ssSetChecksumVal ( rtS , 1 , 4130175437U ) ; ssSetChecksumVal ( rtS , 2 ,
1242794333U ) ; ssSetChecksumVal ( rtS , 3 , 3298442912U ) ; { static const
sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo
rt_ExtModeInfo ; static const sysRanDType * systemRan [ 1 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } rtP . FADiscretePositioncontrol_sat = rtInf ; rtP .
GADiscretePositioncontrol_sat = rtInf ; rtP . UADiscretePositioncontrol_sat =
rtInf ; rtP . WADiscretePositioncontrol_sat = rtInf ; rtP .
Integrator_UpperSat = rtInf ; rtP . Integrator_LowerSat = rtMinusInf ; rtP .
Saturation_UpperSat = rtInf ; rtP . Saturation_LowerSat = rtMinusInf ; rtP .
Integrator_UpperSat_czguogaom1 = rtInf ; rtP . Integrator_LowerSat_fhhrbnlssc
= rtMinusInf ; rtP . Saturation_UpperSat_b1wm32nmrw = rtInf ; rtP .
Saturation_LowerSat_kngpvfh4ls = rtMinusInf ; rtP .
Integrator_UpperSat_jilgocqigo = rtInf ; rtP . Integrator_LowerSat_meej1knsfc
= rtMinusInf ; rtP . Saturation_UpperSat_pkgoxl0lrf = rtInf ; rtP .
Saturation_LowerSat_ndevo5xjvz = rtMinusInf ; rtP .
Integrator_UpperSat_k3htidczg5 = rtInf ; rtP . Integrator_LowerSat_ieq4zg3egn
= rtMinusInf ; rtP . Saturation_UpperSat_h1n4bbj4rg = rtInf ; rtP .
Saturation_LowerSat_pnxjdliiid = rtMinusInf ; rtP .
Integrator_UpperSat_pm2laakorw = rtInf ; rtP . Integrator_LowerSat_dap2gqqil4
= rtMinusInf ; rtP . Saturation_UpperSat_j0pkmjhttf = rtInf ; rtP .
Saturation_LowerSat_nciqxysdzy = rtMinusInf ; rtP .
Integrator_UpperSat_kos2lis5jd = rtInf ; rtP . Integrator_LowerSat_gvexo5zn1g
= rtMinusInf ; rtP . Saturation_UpperSat_bfekxvwt24 = rtInf ; rtP .
Saturation_LowerSat_ixkztlf2ug = rtMinusInf ; rtP .
Integrator_UpperSat_pxoupp3bpy = rtInf ; rtP . Integrator_LowerSat_dxi0sl14if
= rtMinusInf ; rtP . Saturation_UpperSat_ljcmvdtzmp = rtInf ; rtP .
Saturation_LowerSat_bpwoq1jyyj = rtMinusInf ; rtP .
Integrator_UpperSat_dyf31exjbb = rtInf ; rtP . Integrator_LowerSat_kf5ksuxrmw
= rtMinusInf ; rtP . Saturation_UpperSat_ku4zfj1mgj = rtInf ; rtP .
Saturation_LowerSat_piqabk5uwl = rtMinusInf ; rtP .
Integrator_UpperSat_ft3uzmj1ph = rtInf ; rtP . Integrator_LowerSat_cfjq315toj
= rtMinusInf ; rtP . Saturation_UpperSat_k12phj5ehi = rtInf ; rtP .
Saturation_LowerSat_ffce0ibflx = rtMinusInf ; rtP .
Integrator_UpperSat_icgexzc3ek = rtInf ; rtP . Integrator_LowerSat_enhsd21rzi
= rtMinusInf ; rtP . Saturation_UpperSat_ptlwne5dr3 = rtInf ; rtP .
Saturation_LowerSat_bhgwypt52q = rtMinusInf ; rtP .
Integrator_UpperSat_dh4d4fmkz3 = rtInf ; rtP . Integrator_LowerSat_fyi041pxta
= rtMinusInf ; rtP . Saturation_UpperSat_ormg3rfkdo = rtInf ; rtP .
Saturation_LowerSat_muwyyeshhe = rtMinusInf ; rtP .
Integrator_UpperSat_kidwxza1it = rtInf ; rtP . Integrator_LowerSat_g5j2kqgd1m
= rtMinusInf ; rtP . Saturation_UpperSat_bj2nuqdj2t = rtInf ; rtP .
Saturation_LowerSat_frbmey0f5g = rtMinusInf ; return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = - 1 ; void MdlOutputsParameterSampleTime
( int_T tid ) { UNUSED_PARAMETER ( tid ) ; }
