#include "__cf_closedLoop_toTune.h"
#include "rt_logging_mmi.h"
#include "closedLoop_toTune_capi.h"
#include <math.h>
#include "closedLoop_toTune.h"
#include "closedLoop_toTune_private.h"
#include "closedLoop_toTune_dt.h"
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
"slprj\\raccel\\closedLoop_toTune\\closedLoop_toTune_Jpattern.mat" ; const
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
B rtB ; X rtX ; MassMatrix rtMassMatrix ; DW rtDW ; static SimStruct model_S
; SimStruct * const rtS = & model_S ; void MdlInitialize ( void ) { boolean_T
tmp ; int_T tmp_p ; char * tmp_e ; rtDW . luet2gj5du = 1U ; rtDW . ff1ypsbsry
= 0 ; tmp = false ; if ( tmp ) { tmp_p = strcmp ( "ode14x" , ssGetSolverName
( rtS ) ) ; if ( tmp_p != 0 ) { tmp_e = solver_mismatch_message ( "ode14x" ,
ssGetSolverName ( rtS ) ) ; ssSetErrorStatus ( rtS , tmp_e ) ; } } rtDW .
hbalfb24dh = rtP . PIDController_InitialConditionForFilter ; rtDW .
mcqxnh5qer = rtP . PIDController_InitialConditionForIntegrator ; rtDW .
dypi3mxxdf = 1U ; rtDW . amkot2yy4d = 0 ; rtDW . bwjx1snxyl = rtP .
PIDController1_InitialConditionForFilter ; rtDW . mfo0ooprpe = rtP .
PIDController1_InitialConditionForIntegrator ; rtDW . n4syeszzv5 = 1U ; rtDW
. cwebk52hxz = 0 ; rtDW . mhha3stacp = rtP .
PIDController2_InitialConditionForFilter ; rtDW . lx1kthg2ak = rtP .
PIDController2_InitialConditionForIntegrator ; rtDW . n21ig4q2la = 1U ; rtDW
. awuv0zqvac = 0 ; rtDW . lpwasbckyz = rtP .
PIDController3_InitialConditionForFilter ; rtDW . d4ohqbhzps = rtP .
PIDController3_InitialConditionForIntegrator ; rtDW . f1fl5shvqt = 1U ; rtDW
. jrc3tboejv = 0 ; rtDW . bjypbkgsog = rtP .
PIDController4_InitialConditionForFilter ; rtDW . d0kf2aazrh = rtP .
PIDController4_InitialConditionForIntegrator ; rtDW . ptqdowofkz = 1U ; rtDW
. kqwhwvmbo5 = 0 ; rtDW . ou3top1ox4 = rtP .
PIDController5_InitialConditionForFilter ; rtDW . mmsgagixgx = rtP .
PIDController5_InitialConditionForIntegrator ; rtDW . lfyvvh0sv5 = 1U ; rtDW
. gcr0no5gxx = 0 ; rtDW . nhkrizpina = rtP .
PIDController_InitialConditionForIntegrator_k0rtcmcmwi ; rtDW . iyvntabvlz =
1U ; rtDW . dnpgzoukr4 = 0 ; rtDW . prb2fus1cf = rtP .
PIDController1_InitialConditionForIntegrator_dtdxu53dzy ; rtDW . azfc3wig1a =
1U ; rtDW . dcszolnjqw = 0 ; rtDW . d1olc5hqid = rtP .
PIDController2_InitialConditionForIntegrator_oybt1x1ywj ; rtDW . pnmnijewrm =
1U ; rtDW . asudwslg1u = 0 ; rtDW . k3i3dxp2ad = rtP .
PIDController3_InitialConditionForIntegrator_grlnuwimvj ; rtDW . eumkre2nza =
1U ; rtDW . ks2knrfwk4 = 0 ; rtDW . e4gpd3p5q1 = rtP .
PIDController4_InitialConditionForIntegrator_aq511wqjoh ; rtDW . fce4agh0zo =
1U ; rtDW . lv2aww432q = 0 ; rtDW . o253susvy3 = rtP .
PIDController5_InitialConditionForIntegrator_pvky5nx2t5 ; tmp = false ; if (
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
externalInputIsInDatasetFormat ) { } } rtB . jhflzht2mj [ 0 ] = 0.0025 ; rtB
. jhflzht2mj [ 1 ] = 0.0 ; { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = (
FWksInfo * ) calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) {
ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "tuvar" ; fromwksInfo -> origDataTypeId
= 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo -> origWidth = 6 ;
fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo -> data = ( void
* ) rtP . FromWs_Data0 ; fromwksInfo -> nDataPoints = 20 ; fromwksInfo ->
time = ( double * ) rtP . FromWs_Time0 ; rtDW . f2qimf1l0g . TimePtr =
fromwksInfo -> time ; rtDW . f2qimf1l0g . DataPtr = fromwksInfo -> data ;
rtDW . f2qimf1l0g . RSimInfoPtr = fromwksInfo ; } rtDW . o535gad0gw .
PrevIndex = 0 ; } simulator = nesl_lease_simulator (
"closedLoop_toTune/Plant/Robot/Solver Configuration_1" , 0 , 0 ) ; rtDW .
pcl5k34iwh = ( void * ) simulator ; tmp = pointer_is_null ( rtDW . pcl5k34iwh
) ; if ( tmp ) { closedLoop_toTune_b924f1e8_1_gateway ( ) ; simulator =
nesl_lease_simulator ( "closedLoop_toTune/Plant/Robot/Solver Configuration_1"
, 0 , 0 ) ; rtDW . pcl5k34iwh = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . eezcqf5nt4 = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
b2efndbc2b = ( void * ) diagnosticManager ; modelParameters . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters . mSolverTolerance = 0.001 ;
modelParameters . mVariableStepSolver = false ; modelParameters .
mFixedStepSize = 0.0025 ; modelParameters . mStartTime = 0.0 ;
modelParameters . mLoadInitialState = false ; modelParameters . mUseSimState
= false ; modelParameters . mLinTrimCompile = false ; modelParameters .
mLoggingMode = SSC_LOGGING_NONE ; modelParameters . mRTWModifiedTimeStamp =
4.7682564E+8 ; tmp_p = 0.001 ; modelParameters . mSolverTolerance = tmp_p ;
tmp_p = 0.0025 ; modelParameters . mFixedStepSize = tmp_p ; tmp = false ;
modelParameters . mVariableStepSolver = tmp ; simulator = ( NeslSimulator * )
rtDW . pcl5k34iwh ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
b2efndbc2b ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; parameterBundle_mLogicalParameters_mN =
nesl_initialize_simulator ( simulator , & modelParameters , diagnosticManager
) ; if ( parameterBundle_mLogicalParameters_mN != 0 ) { tmp =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = ( NeslSimulator * ) rtDW . pcl5k34iwh ; expl_temp .
mRealParameters . mN = 0 ; expl_temp . mRealParameters . mX = NULL ;
expl_temp . mLogicalParameters . mN = 0 ; expl_temp . mLogicalParameters . mX
= NULL ; expl_temp . mIntegerParameters . mN = 0 ; expl_temp .
mIntegerParameters . mX = NULL ; expl_temp . mIndexParameters . mN = 0 ;
expl_temp . mIndexParameters . mX = NULL ; nesl_simulator_set_rtps (
simulator , expl_temp ) ; simulationData = ( NeslSimulationData * ) rtDW .
eezcqf5nt4 ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN =
1 ; simulationData -> mData -> mTime . mX = & time ; simulationData -> mData
-> mContStates . mN = 24 ; simulationData -> mData -> mContStates . mX = &
rtX . anlkrx3tc2 [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . ocr2gtrnaz ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . iezvtdo4zq ; tmp = false ; simulationData ->
mData -> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; simulationData -> mData -> mIsSolverCheckingCIC = false ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; simulationData -> mData ->
mIsSolverRequestingReset = false ; simulator = ( NeslSimulator * ) rtDW .
pcl5k34iwh ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . b2efndbc2b
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; parameterBundle_mLogicalParameters_mN =
ne_simulator_method ( simulator , NESL_SIM_INITIALIZEONCE , simulationData ,
diagnosticManager ) ; if ( parameterBundle_mLogicalParameters_mN != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
"closedLoop_toTune/Plant/Robot/Solver Configuration_1" , 1 , 0 ) ; rtDW .
os1chhphe1 = ( void * ) simulator ; tmp = pointer_is_null ( rtDW . os1chhphe1
) ; if ( tmp ) { closedLoop_toTune_b924f1e8_1_gateway ( ) ; simulator =
nesl_lease_simulator ( "closedLoop_toTune/Plant/Robot/Solver Configuration_1"
, 1 , 0 ) ; rtDW . os1chhphe1 = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . lh0gnnaa5c = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
ey4yt3c2wg = ( void * ) diagnosticManager ; modelParameters_p . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters_p . mSolverTolerance = 0.001 ;
modelParameters_p . mVariableStepSolver = false ; modelParameters_p .
mFixedStepSize = 0.0025 ; modelParameters_p . mStartTime = 0.0 ;
modelParameters_p . mLoadInitialState = false ; modelParameters_p .
mUseSimState = false ; modelParameters_p . mLinTrimCompile = false ;
modelParameters_p . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_p .
mRTWModifiedTimeStamp = 4.7682564E+8 ; tmp_p = 0.001 ; modelParameters_p .
mSolverTolerance = tmp_p ; tmp_p = 0.0025 ; modelParameters_p .
mFixedStepSize = tmp_p ; tmp = false ; modelParameters_p .
mVariableStepSolver = tmp ; simulator = ( NeslSimulator * ) rtDW . os1chhphe1
; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . ey4yt3c2wg ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; parameterBundle_mLogicalParameters_mN = nesl_initialize_simulator (
simulator , & modelParameters_p , diagnosticManager ) ; if (
parameterBundle_mLogicalParameters_mN != 0 ) { tmp = error_buffer_is_empty (
ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg = rtw_diagnostics_msg (
diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } simulationData = (
NeslSimulationData * ) rtDW . lh0gnnaa5c ; time_p = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_p ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . e5l3gibvg4 ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . iojrm1ldih ; tmp =
false ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData ->
mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; simulationData ->
mData -> mIsSolverCheckingCIC = false ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; simulationData -> mData -> mIsSolverRequestingReset = false ;
simulator = ( NeslSimulator * ) rtDW . os1chhphe1 ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . ey4yt3c2wg ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ;
parameterBundle_mLogicalParameters_mN = ne_simulator_method ( simulator ,
NESL_SIM_INITIALIZEONCE , simulationData , diagnosticManager ) ; if (
parameterBundle_mLogicalParameters_mN != 0 ) { tmp = error_buffer_is_empty (
ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg = rtw_diagnostics_msg (
diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } rtB . kscxrogtua [ 0
] = 0.0025 ; rtB . kscxrogtua [ 1 ] = 0.0 ; rtB . o3qvvpwmd3 [ 0 ] = 0.0025 ;
rtB . o3qvvpwmd3 [ 1 ] = 0.0 ; rtB . mi3hyl32jv [ 0 ] = 0.0025 ; rtB .
mi3hyl32jv [ 1 ] = 0.0 ; rtB . p5x1uibsfi [ 0 ] = 0.0025 ; rtB . p5x1uibsfi [
1 ] = 0.0 ; rtB . he3amknkw3 [ 0 ] = 0.0025 ; rtB . he3amknkw3 [ 1 ] = 0.0 ;
rtB . j1nlxlazhf [ 0 ] = 0.0025 ; rtB . j1nlxlazhf [ 1 ] = 0.0 ; rtB .
njkehyxd2c [ 0 ] = 0.0025 ; rtB . njkehyxd2c [ 1 ] = 0.0 ; rtB . hslnzetru2 [
0 ] = 0.0025 ; rtB . hslnzetru2 [ 1 ] = 0.0 ; rtB . p4rleumfzg [ 0 ] = 0.0025
; rtB . p4rleumfzg [ 1 ] = 0.0 ; rtB . p01y5fcekv [ 0 ] = 0.0025 ; rtB .
p01y5fcekv [ 1 ] = 0.0 ; rtB . kirrpnesgo [ 0 ] = 0.0025 ; rtB . kirrpnesgo [
1 ] = 0.0 ; { int i ; if ( ( i = rl32eScopeExists ( 1 ) ) == 0 ) { if ( ( i =
rl32eDefScope ( 1 , 2 ) ) != 0 ) { printf ( "Error creating scope 1\n" ) ; }
else { rl32eAddSignal ( 1 , rl32eGetSignalNo ( "Plant/Robot/Gain" ) ) ;
rl32eSetScope ( 1 , 4 , 5000 ) ; rl32eSetScope ( 1 , 5 , 0 ) ; rl32eSetScope
( 1 , 6 , 1 ) ; rl32eSetScope ( 1 , 0 , 0 ) ; rl32eSetScope ( 1 , 3 ,
rl32eGetSignalNo ( "Plant/Robot/Gain" ) ) ; rl32eSetScope ( 1 , 1 , 0.0 ) ;
rl32eSetScope ( 1 , 2 , 0 ) ; rl32eSetScope ( 1 , 9 , 0 ) ;
rl32eSetTargetScope ( 1 , 1 , 2.0 ) ; rl32eSetTargetScope ( 1 , 11 , - 100.0
) ; rl32eSetTargetScope ( 1 , 10 , 100.0 ) ; xpceScopeAcqOK ( 1 , & rtDW .
nvp3tswtih . AcquireOK ) ; } } if ( i ) { rl32eRestartAcquisition ( 1 ) ; } }
{ int i ; if ( ( i = rl32eScopeExists ( 2 ) ) == 0 ) { if ( ( i =
rl32eDefScope ( 2 , 2 ) ) != 0 ) { printf ( "Error creating scope 2\n" ) ; }
else { rl32eAddSignal ( 2 , rl32eGetSignalNo ( "Plant/Robot/Gain1" ) ) ;
rl32eSetScope ( 2 , 4 , 5000 ) ; rl32eSetScope ( 2 , 5 , 0 ) ; rl32eSetScope
( 2 , 6 , 1 ) ; rl32eSetScope ( 2 , 0 , 0 ) ; rl32eSetScope ( 2 , 3 ,
rl32eGetSignalNo ( "Plant/Robot/Gain1" ) ) ; rl32eSetScope ( 2 , 1 , 0.0 ) ;
rl32eSetScope ( 2 , 2 , 0 ) ; rl32eSetScope ( 2 , 9 , 0 ) ;
rl32eSetTargetScope ( 2 , 1 , 2.0 ) ; rl32eSetTargetScope ( 2 , 11 , - 45.0 )
; rl32eSetTargetScope ( 2 , 10 , 45.0 ) ; xpceScopeAcqOK ( 2 , & rtDW .
j4znmhb1up . AcquireOK ) ; } } if ( i ) { rl32eRestartAcquisition ( 2 ) ; } }
{ int i ; if ( ( i = rl32eScopeExists ( 3 ) ) == 0 ) { if ( ( i =
rl32eDefScope ( 3 , 2 ) ) != 0 ) { printf ( "Error creating scope 3\n" ) ; }
else { rl32eAddSignal ( 3 , rl32eGetSignalNo ( "Plant/Robot/Gain2" ) ) ;
rl32eSetScope ( 3 , 4 , 5000 ) ; rl32eSetScope ( 3 , 5 , 0 ) ; rl32eSetScope
( 3 , 6 , 1 ) ; rl32eSetScope ( 3 , 0 , 0 ) ; rl32eSetScope ( 3 , 3 ,
rl32eGetSignalNo ( "Plant/Robot/Gain2" ) ) ; rl32eSetScope ( 3 , 1 , 0.0 ) ;
rl32eSetScope ( 3 , 2 , 0 ) ; rl32eSetScope ( 3 , 9 , 0 ) ;
rl32eSetTargetScope ( 3 , 1 , 2.0 ) ; rl32eSetTargetScope ( 3 , 11 , - 100.0
) ; rl32eSetTargetScope ( 3 , 10 , 5.0 ) ; xpceScopeAcqOK ( 3 , & rtDW .
njqnvhin1i . AcquireOK ) ; } } if ( i ) { rl32eRestartAcquisition ( 3 ) ; } }
{ int i ; if ( ( i = rl32eScopeExists ( 4 ) ) == 0 ) { if ( ( i =
rl32eDefScope ( 4 , 2 ) ) != 0 ) { printf ( "Error creating scope 4\n" ) ; }
else { rl32eAddSignal ( 4 , rl32eGetSignalNo ( "Plant/Robot/Gain3" ) ) ;
rl32eSetScope ( 4 , 4 , 5000 ) ; rl32eSetScope ( 4 , 5 , 0 ) ; rl32eSetScope
( 4 , 6 , 1 ) ; rl32eSetScope ( 4 , 0 , 0 ) ; rl32eSetScope ( 4 , 3 ,
rl32eGetSignalNo ( "Plant/Robot/Gain3" ) ) ; rl32eSetScope ( 4 , 1 , 0.0 ) ;
rl32eSetScope ( 4 , 2 , 0 ) ; rl32eSetScope ( 4 , 9 , 0 ) ;
rl32eSetTargetScope ( 4 , 1 , 2.0 ) ; rl32eSetTargetScope ( 4 , 11 , - 50.0 )
; rl32eSetTargetScope ( 4 , 10 , 50.0 ) ; xpceScopeAcqOK ( 4 , & rtDW .
a4yiq2c5qz . AcquireOK ) ; } } if ( i ) { rl32eRestartAcquisition ( 4 ) ; } }
{ int i ; if ( ( i = rl32eScopeExists ( 5 ) ) == 0 ) { if ( ( i =
rl32eDefScope ( 5 , 2 ) ) != 0 ) { printf ( "Error creating scope 5\n" ) ; }
else { rl32eAddSignal ( 5 , rl32eGetSignalNo ( "Plant/Robot/Gain4" ) ) ;
rl32eSetScope ( 5 , 4 , 5000 ) ; rl32eSetScope ( 5 , 5 , 0 ) ; rl32eSetScope
( 5 , 6 , 1 ) ; rl32eSetScope ( 5 , 0 , 0 ) ; rl32eSetScope ( 5 , 3 ,
rl32eGetSignalNo ( "Plant/Robot/Gain4" ) ) ; rl32eSetScope ( 5 , 1 , 0.0 ) ;
rl32eSetScope ( 5 , 2 , 0 ) ; rl32eSetScope ( 5 , 9 , 0 ) ;
rl32eSetTargetScope ( 5 , 1 , 2.0 ) ; rl32eSetTargetScope ( 5 , 11 , 120.0 )
; rl32eSetTargetScope ( 5 , 10 , 160.0 ) ; xpceScopeAcqOK ( 5 , & rtDW .
delwqzjfmb . AcquireOK ) ; } } if ( i ) { rl32eRestartAcquisition ( 5 ) ; } }
{ int i ; if ( ( i = rl32eScopeExists ( 6 ) ) == 0 ) { if ( ( i =
rl32eDefScope ( 6 , 2 ) ) != 0 ) { printf ( "Error creating scope 6\n" ) ; }
else { rl32eAddSignal ( 6 , rl32eGetSignalNo ( "Plant/Robot/Gain5" ) ) ;
rl32eSetScope ( 6 , 4 , 5000 ) ; rl32eSetScope ( 6 , 5 , 0 ) ; rl32eSetScope
( 6 , 6 , 1 ) ; rl32eSetScope ( 6 , 0 , 0 ) ; rl32eSetScope ( 6 , 3 ,
rl32eGetSignalNo ( "Plant/Robot/Gain5" ) ) ; rl32eSetScope ( 6 , 1 , 0.0 ) ;
rl32eSetScope ( 6 , 2 , 0 ) ; rl32eSetScope ( 6 , 9 , 0 ) ;
rl32eSetTargetScope ( 6 , 1 , 2.0 ) ; rl32eSetTargetScope ( 6 , 11 , - 160.0
) ; rl32eSetTargetScope ( 6 , 10 , - 120.0 ) ; xpceScopeAcqOK ( 6 , & rtDW .
kxwqlyfzql . AcquireOK ) ; } } if ( i ) { rl32eRestartAcquisition ( 6 ) ; } }
simulator = nesl_lease_simulator (
"closedLoop_toTune/Plant/Robot/Solver Configuration_2" , 0 , 0 ) ; rtDW .
hnxbpl1wx5 = ( void * ) simulator ; tmp = pointer_is_null ( rtDW . hnxbpl1wx5
) ; if ( tmp ) { closedLoop_toTune_b924f1e8_2_gateway ( ) ; simulator =
nesl_lease_simulator ( "closedLoop_toTune/Plant/Robot/Solver Configuration_2"
, 0 , 0 ) ; rtDW . hnxbpl1wx5 = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . izfvfuof1b = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
k0z433ri5i = ( void * ) diagnosticManager ; modelParameters_e . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters_e . mSolverTolerance = 0.001 ;
modelParameters_e . mVariableStepSolver = false ; modelParameters_e .
mFixedStepSize = 0.0025 ; modelParameters_e . mStartTime = 0.0 ;
modelParameters_e . mLoadInitialState = false ; modelParameters_e .
mUseSimState = false ; modelParameters_e . mLinTrimCompile = false ;
modelParameters_e . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_e .
mRTWModifiedTimeStamp = 4.7682564E+8 ; tmp_p = 0.001 ; modelParameters_e .
mSolverTolerance = tmp_p ; tmp_p = 0.0025 ; modelParameters_e .
mFixedStepSize = tmp_p ; tmp = false ; modelParameters_e .
mVariableStepSolver = tmp ; simulator = ( NeslSimulator * ) rtDW . hnxbpl1wx5
; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . k0z433ri5i ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; parameterBundle_mLogicalParameters_mN = nesl_initialize_simulator (
simulator , & modelParameters_e , diagnosticManager ) ; if (
parameterBundle_mLogicalParameters_mN != 0 ) { tmp = error_buffer_is_empty (
ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg = rtw_diagnostics_msg (
diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } simulator = (
NeslSimulator * ) rtDW . hnxbpl1wx5 ; expl_temp_p . mRealParameters . mN = 0
; expl_temp_p . mRealParameters . mX = NULL ; expl_temp_p .
mLogicalParameters . mN = 0 ; expl_temp_p . mLogicalParameters . mX = NULL ;
expl_temp_p . mIntegerParameters . mN = 0 ; expl_temp_p . mIntegerParameters
. mX = NULL ; expl_temp_p . mIndexParameters . mN = 0 ; expl_temp_p .
mIndexParameters . mX = NULL ; nesl_simulator_set_rtps ( simulator ,
expl_temp_p ) ; simulationData = ( NeslSimulationData * ) rtDW . izfvfuof1b ;
time_e = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_e ; simulationData -> mData ->
mContStates . mN = 30 ; simulationData -> mData -> mContStates . mX = & rtX .
fdlxnailwx [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . i1v2wl3m4b ;
simulationData -> mData -> mModeVector . mN = 6 ; simulationData -> mData ->
mModeVector . mX = & rtDW . puciepvfhp [ 0 ] ; tmp = false ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; simulationData -> mData -> mIsSolverCheckingCIC
= false ; tmp = ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData
-> mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 =
( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; simulationData -> mData ->
mIsSolverRequestingReset = false ; simulator = ( NeslSimulator * ) rtDW .
hnxbpl1wx5 ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . k0z433ri5i
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; parameterBundle_mLogicalParameters_mN =
ne_simulator_method ( simulator , NESL_SIM_INITIALIZEONCE , simulationData ,
diagnosticManager ) ; if ( parameterBundle_mLogicalParameters_mN != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
"closedLoop_toTune/Plant/Robot/Solver Configuration_2" , 1 , 0 ) ; rtDW .
k22u2dj12d = ( void * ) simulator ; tmp = pointer_is_null ( rtDW . k22u2dj12d
) ; if ( tmp ) { closedLoop_toTune_b924f1e8_2_gateway ( ) ; simulator =
nesl_lease_simulator ( "closedLoop_toTune/Plant/Robot/Solver Configuration_2"
, 1 , 0 ) ; rtDW . k22u2dj12d = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . df4vdmnuwt = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
modeusfujc = ( void * ) diagnosticManager ; modelParameters_i . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters_i . mSolverTolerance = 0.001 ;
modelParameters_i . mVariableStepSolver = false ; modelParameters_i .
mFixedStepSize = 0.0025 ; modelParameters_i . mStartTime = 0.0 ;
modelParameters_i . mLoadInitialState = false ; modelParameters_i .
mUseSimState = false ; modelParameters_i . mLinTrimCompile = false ;
modelParameters_i . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_i .
mRTWModifiedTimeStamp = 4.7682564E+8 ; tmp_p = 0.001 ; modelParameters_i .
mSolverTolerance = tmp_p ; tmp_p = 0.0025 ; modelParameters_i .
mFixedStepSize = tmp_p ; tmp = false ; modelParameters_i .
mVariableStepSolver = tmp ; simulator = ( NeslSimulator * ) rtDW . k22u2dj12d
; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . modeusfujc ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; parameterBundle_mLogicalParameters_mN = nesl_initialize_simulator (
simulator , & modelParameters_i , diagnosticManager ) ; if (
parameterBundle_mLogicalParameters_mN != 0 ) { tmp = error_buffer_is_empty (
ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg = rtw_diagnostics_msg (
diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } simulationData = (
NeslSimulationData * ) rtDW . df4vdmnuwt ; time_i = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_i ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . bdwqisxww0 ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . anqxhpocun ; tmp =
false ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData ->
mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; simulationData ->
mData -> mIsSolverCheckingCIC = false ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; simulationData -> mData -> mIsSolverRequestingReset = false ;
simulator = ( NeslSimulator * ) rtDW . k22u2dj12d ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . modeusfujc ; diagnosticTree =
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
tmp_m [ 8 ] ; boolean_T first_output ; real_T time_e ; real_T tmp_g [ 48 ] ;
int_T tmp_j [ 13 ] ; real_T time_i ; real_T tmp_f [ 84 ] ; int_T tmp_c [ 14 ]
; real_T u0 ; real_T u1 ; real_T u2 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
rtB . ox013agrey = rtP . filter_tc - rtB . jhflzht2mj [ 0 ] ; rtB .
mvayvdtnfm = ( rtB . ox013agrey <= rtP . Constant_Value ) ; } { real_T *
pDataValues = ( real_T * ) rtDW . f2qimf1l0g . DataPtr ; real_T * pTimeValues
= ( real_T * ) rtDW . f2qimf1l0g . TimePtr ; int_T currTimeIndex = rtDW .
o535gad0gw . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints
, lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . f2qimf1l0g .
RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints
- 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >=
pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t
< pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ]
) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex +
1 ] ) { currTimeIndex ++ ; } } } rtDW . o535gad0gw . PrevIndex =
currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 =
pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 6 ; ++ elIdx ) { ( & rtB . g2zj4z3fcf [ 0 ]
) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; } }
} else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 6 ; ++ elIdx ) { ( & rtB .
g2zj4z3fcf [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ;
pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1
) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 6 ; ++ elIdx ) { d1
= pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( & rtB .
g2zj4z3fcf [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 )
; pDataValues += numPoints ; } } } } } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
rtB . kiyhgelsu1 = rtB . g2zj4z3fcf [ 0 ] ; rtB . pn0xtm1qfs = rtP .
LowPassFilterDiscreteorContinuous_K * rtB . kiyhgelsu1 ; if ( rtDW .
luet2gj5du != 0 ) { rtDW . liczzslnug = rtB . pn0xtm1qfs ; if ( rtDW .
liczzslnug >= rtP . Integrator_UpperSat ) { rtDW . liczzslnug = rtP .
Integrator_UpperSat ; } else { if ( rtDW . liczzslnug <= rtP .
Integrator_LowerSat ) { rtDW . liczzslnug = rtP . Integrator_LowerSat ; } } }
if ( rtB . mvayvdtnfm || ( rtDW . ff1ypsbsry != 0 ) ) { rtDW . liczzslnug =
rtB . pn0xtm1qfs ; if ( rtDW . liczzslnug >= rtP . Integrator_UpperSat ) {
rtDW . liczzslnug = rtP . Integrator_UpperSat ; } else { if ( rtDW .
liczzslnug <= rtP . Integrator_LowerSat ) { rtDW . liczzslnug = rtP .
Integrator_LowerSat ; } } } if ( rtDW . liczzslnug >= rtP .
Integrator_UpperSat ) { rtDW . liczzslnug = rtP . Integrator_UpperSat ; }
else { if ( rtDW . liczzslnug <= rtP . Integrator_LowerSat ) { rtDW .
liczzslnug = rtP . Integrator_LowerSat ; } } rtB . ezhopqv52b = rtDW .
liczzslnug ; u0 = rtB . ezhopqv52b ; u1 = rtP . Saturation_LowerSat ; u2 =
rtP . Saturation_UpperSat ; if ( u0 > u2 ) { rtB . fqolhzt2ru = u2 ; } else
if ( u0 < u1 ) { rtB . fqolhzt2ru = u1 ; } else { rtB . fqolhzt2ru = u0 ; } }
simulationData = ( NeslSimulationData * ) rtDW . eezcqf5nt4 ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 24 ;
simulationData -> mData -> mContStates . mX = & rtX . anlkrx3tc2 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . ocr2gtrnaz ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
iezvtdo4zq ; first_output = false ; simulationData -> mData -> mFoundZcEvents
= first_output ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; first_output = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = first_output ; simulationData -> mData ->
mIsSolverCheckingCIC = false ; first_output = ssIsSolverComputingJacobian (
rtS ) ; simulationData -> mData -> mIsComputingJacobian = first_output ;
simulationData -> mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian (
rtS ) != 0 ) ; simulationData -> mData -> mIsSolverRequestingReset = false ;
tmp_p [ 0 ] = 0 ; tmp [ 0 ] = rtB . jrljlnvocq [ 0 ] ; tmp [ 1 ] = rtB .
jrljlnvocq [ 1 ] ; tmp [ 2 ] = rtB . jrljlnvocq [ 2 ] ; tmp [ 3 ] = rtB .
jrljlnvocq [ 3 ] ; tmp_p [ 1 ] = 4 ; tmp [ 4 ] = rtB . b2bp1tloeo [ 0 ] ; tmp
[ 5 ] = rtB . b2bp1tloeo [ 1 ] ; tmp [ 6 ] = rtB . b2bp1tloeo [ 2 ] ; tmp [ 7
] = rtB . b2bp1tloeo [ 3 ] ; tmp_p [ 2 ] = 8 ; tmp [ 8 ] = rtB . lmsabjovac [
0 ] ; tmp [ 9 ] = rtB . lmsabjovac [ 1 ] ; tmp [ 10 ] = rtB . lmsabjovac [ 2
] ; tmp [ 11 ] = rtB . lmsabjovac [ 3 ] ; tmp_p [ 3 ] = 12 ; tmp [ 12 ] = rtB
. n3klnoiklk [ 0 ] ; tmp [ 13 ] = rtB . n3klnoiklk [ 1 ] ; tmp [ 14 ] = rtB .
n3klnoiklk [ 2 ] ; tmp [ 15 ] = rtB . n3klnoiklk [ 3 ] ; tmp_p [ 4 ] = 16 ;
tmp [ 16 ] = rtB . o01lkeuvd1 [ 0 ] ; tmp [ 17 ] = rtB . o01lkeuvd1 [ 1 ] ;
tmp [ 18 ] = rtB . o01lkeuvd1 [ 2 ] ; tmp [ 19 ] = rtB . o01lkeuvd1 [ 3 ] ;
tmp_p [ 5 ] = 20 ; tmp [ 20 ] = rtB . ebfmf2wsfd [ 0 ] ; tmp [ 21 ] = rtB .
ebfmf2wsfd [ 1 ] ; tmp [ 22 ] = rtB . ebfmf2wsfd [ 2 ] ; tmp [ 23 ] = rtB .
ebfmf2wsfd [ 3 ] ; tmp_p [ 6 ] = 24 ; simulationData -> mData -> mInputValues
. mN = 24 ; simulationData -> mData -> mInputValues . mX = & tmp [ 0 ] ;
simulationData -> mData -> mInputOffsets . mN = 7 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_p [ 0 ] ; simulationData -> mData -> mOutputs .
mN = 24 ; simulationData -> mData -> mOutputs . mX = & rtB . lrmydxoplg [ 0 ]
; simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData
-> mSampleHits . mX = NULL ; simulationData -> mData ->
mIsFundamentalSampleHit = false ; simulationData -> mData -> mTolerances . mN
= 0 ; simulationData -> mData -> mTolerances . mX = NULL ; simulationData ->
mData -> mCstateHasChanged = false ; simulator = ( NeslSimulator * ) rtDW .
pcl5k34iwh ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . b2efndbc2b
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_e = ne_simulator_method ( simulator ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( tmp_e != 0 ) {
first_output = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
first_output ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } simulationData = (
NeslSimulationData * ) rtDW . lh0gnnaa5c ; time_p = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_p ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . e5l3gibvg4 ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . iojrm1ldih ;
first_output = false ; simulationData -> mData -> mFoundZcEvents =
first_output ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; first_output = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = first_output ; simulationData -> mData ->
mIsSolverCheckingCIC = false ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; simulationData -> mData -> mIsSolverRequestingReset = false ; tmp_m [
0 ] = 0 ; tmp_i [ 0 ] = rtB . jrljlnvocq [ 0 ] ; tmp_i [ 1 ] = rtB .
jrljlnvocq [ 1 ] ; tmp_i [ 2 ] = rtB . jrljlnvocq [ 2 ] ; tmp_i [ 3 ] = rtB .
jrljlnvocq [ 3 ] ; tmp_m [ 1 ] = 4 ; tmp_i [ 4 ] = rtB . b2bp1tloeo [ 0 ] ;
tmp_i [ 5 ] = rtB . b2bp1tloeo [ 1 ] ; tmp_i [ 6 ] = rtB . b2bp1tloeo [ 2 ] ;
tmp_i [ 7 ] = rtB . b2bp1tloeo [ 3 ] ; tmp_m [ 2 ] = 8 ; tmp_i [ 8 ] = rtB .
lmsabjovac [ 0 ] ; tmp_i [ 9 ] = rtB . lmsabjovac [ 1 ] ; tmp_i [ 10 ] = rtB
. lmsabjovac [ 2 ] ; tmp_i [ 11 ] = rtB . lmsabjovac [ 3 ] ; tmp_m [ 3 ] = 12
; tmp_i [ 12 ] = rtB . n3klnoiklk [ 0 ] ; tmp_i [ 13 ] = rtB . n3klnoiklk [ 1
] ; tmp_i [ 14 ] = rtB . n3klnoiklk [ 2 ] ; tmp_i [ 15 ] = rtB . n3klnoiklk [
3 ] ; tmp_m [ 4 ] = 16 ; tmp_i [ 16 ] = rtB . o01lkeuvd1 [ 0 ] ; tmp_i [ 17 ]
= rtB . o01lkeuvd1 [ 1 ] ; tmp_i [ 18 ] = rtB . o01lkeuvd1 [ 2 ] ; tmp_i [ 19
] = rtB . o01lkeuvd1 [ 3 ] ; tmp_m [ 5 ] = 20 ; tmp_i [ 20 ] = rtB .
ebfmf2wsfd [ 0 ] ; tmp_i [ 21 ] = rtB . ebfmf2wsfd [ 1 ] ; tmp_i [ 22 ] = rtB
. ebfmf2wsfd [ 2 ] ; tmp_i [ 23 ] = rtB . ebfmf2wsfd [ 3 ] ; tmp_m [ 6 ] = 24
; memcpy ( & tmp_i [ 24 ] , & rtB . lrmydxoplg [ 0 ] , 24U * sizeof ( real_T
) ) ; tmp_m [ 7 ] = 48 ; simulationData -> mData -> mInputValues . mN = 48 ;
simulationData -> mData -> mInputValues . mX = & tmp_i [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 8 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_m [ 0 ] ; simulationData -> mData -> mOutputs . mN = 12 ;
simulationData -> mData -> mOutputs . mX = & rtB . md32vri2gx [ 0 ] ;
simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData ->
mSampleHits . mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit
= false ; simulationData -> mData -> mTolerances . mN = 0 ; simulationData ->
mData -> mTolerances . mX = NULL ; simulationData -> mData ->
mCstateHasChanged = false ; simulator = ( NeslSimulator * ) rtDW . os1chhphe1
; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . ey4yt3c2wg ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_e = ne_simulator_method ( simulator , NESL_SIM_OUTPUTS ,
simulationData , diagnosticManager ) ; if ( tmp_e != 0 ) { first_output =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( first_output ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } if ( ssIsMajorTimeStep ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtB . cz2gtbbcky = rtP
. GAIN_Gain * rtB . md32vri2gx [ 4 ] ; rtB . jvuvjolqwh = rtP . Gain_Gain *
rtB . cz2gtbbcky ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . geukecwg0u =
rtB . jvuvjolqwh ; rtB . fbeayl3q3y = rtB . fqolhzt2ru - rtB . geukecwg0u ;
rtB . dqoim5n1jb = rtP . PIDController_D * rtB . fbeayl3q3y ; rtB .
kx5pait0in = rtDW . hbalfb24dh ; rtB . nknphymk3l = rtB . dqoim5n1jb - rtB .
kx5pait0in ; rtB . dqauotsnvc = rtP . PIDController_I * rtB . fbeayl3q3y ;
rtB . cg4ctkqhve = rtDW . mcqxnh5qer ; rtB . fmehcowgyi = rtP .
PIDController_N * rtB . nknphymk3l ; rtB . gq1s2wme44 = rtP . PIDController_P
* rtB . fbeayl3q3y ; rtB . mrr4rjxmd5 = ( rtB . gq1s2wme44 + rtB . cg4ctkqhve
) + rtB . fmehcowgyi ; rtB . dxeawvlvpe = rtP . filter1_tc - rtB . kscxrogtua
[ 0 ] ; rtB . dfulmqk4uv = ( rtB . dxeawvlvpe <= rtP .
Constant_Value_elzocfzv3z ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB .
giazxg11vu = rtB . g2zj4z3fcf [ 1 ] ; } rtB . gw0rerd52a = rtP .
LowPassFilterDiscreteorContinuous_K_iadlz4dfqb * rtB . giazxg11vu ; if ( rtDW
. dypi3mxxdf != 0 ) { rtDW . hri0uk1gw2 = rtB . gw0rerd52a ; if ( rtDW .
hri0uk1gw2 >= rtP . Integrator_UpperSat_lfmj5hqb2j ) { rtDW . hri0uk1gw2 =
rtP . Integrator_UpperSat_lfmj5hqb2j ; } else { if ( rtDW . hri0uk1gw2 <= rtP
. Integrator_LowerSat_k5sgxqrrjs ) { rtDW . hri0uk1gw2 = rtP .
Integrator_LowerSat_k5sgxqrrjs ; } } } if ( rtB . dfulmqk4uv || ( rtDW .
amkot2yy4d != 0 ) ) { rtDW . hri0uk1gw2 = rtB . gw0rerd52a ; if ( rtDW .
hri0uk1gw2 >= rtP . Integrator_UpperSat_lfmj5hqb2j ) { rtDW . hri0uk1gw2 =
rtP . Integrator_UpperSat_lfmj5hqb2j ; } else { if ( rtDW . hri0uk1gw2 <= rtP
. Integrator_LowerSat_k5sgxqrrjs ) { rtDW . hri0uk1gw2 = rtP .
Integrator_LowerSat_k5sgxqrrjs ; } } } if ( rtDW . hri0uk1gw2 >= rtP .
Integrator_UpperSat_lfmj5hqb2j ) { rtDW . hri0uk1gw2 = rtP .
Integrator_UpperSat_lfmj5hqb2j ; } else { if ( rtDW . hri0uk1gw2 <= rtP .
Integrator_LowerSat_k5sgxqrrjs ) { rtDW . hri0uk1gw2 = rtP .
Integrator_LowerSat_k5sgxqrrjs ; } } rtB . ll25dgbfe2 = rtDW . hri0uk1gw2 ;
u0 = rtB . ll25dgbfe2 ; u1 = rtP . Saturation_LowerSat_aqldnegvun ; u2 = rtP
. Saturation_UpperSat_o5sqceaxad ; if ( u0 > u2 ) { rtB . loqom214rl = u2 ; }
else if ( u0 < u1 ) { rtB . loqom214rl = u1 ; } else { rtB . loqom214rl = u0
; } } rtB . gohknt3zhv = rtP . GAIN_Gain_bwl2tn4amr * rtB . md32vri2gx [ 6 ]
; rtB . l1bih2veee = rtP . Gain1_Gain * rtB . gohknt3zhv ; if ( ssIsSampleHit
( rtS , 1 , 0 ) ) { rtB . i1v54eahu0 = rtB . l1bih2veee ; rtB . ah33na0mde =
rtB . loqom214rl - rtB . i1v54eahu0 ; rtB . mja1ugwxdu = rtP .
PIDController1_D * rtB . ah33na0mde ; rtB . bodksgvhlf = rtDW . bwjx1snxyl ;
rtB . pgkgp0bijj = rtB . mja1ugwxdu - rtB . bodksgvhlf ; rtB . ilet4fenmw =
rtP . PIDController1_I * rtB . ah33na0mde ; rtB . fhm3nn5d1b = rtDW .
mfo0ooprpe ; rtB . h0nm5jgafs = rtP . PIDController1_N * rtB . pgkgp0bijj ;
rtB . gvs21fqhuk = rtP . PIDController1_P * rtB . ah33na0mde ; rtB .
mo23g4pnrk = ( rtB . gvs21fqhuk + rtB . fhm3nn5d1b ) + rtB . h0nm5jgafs ; rtB
. m10kbud4ob = rtP . filter2_tc - rtB . o3qvvpwmd3 [ 0 ] ; rtB . kbuzw5x2iq =
( rtB . m10kbud4ob <= rtP . Constant_Value_ccyvr50cmy ) ; if ( ssIsSampleHit
( rtS , 1 , 0 ) ) { rtB . mtgk0ff4be = rtB . g2zj4z3fcf [ 2 ] ; } rtB .
h5wr1gji1b = rtP . LowPassFilterDiscreteorContinuous_K_dj2wq5ptg4 * rtB .
mtgk0ff4be ; if ( rtDW . n4syeszzv5 != 0 ) { rtDW . c1jwwx42fx = rtB .
h5wr1gji1b ; if ( rtDW . c1jwwx42fx >= rtP . Integrator_UpperSat_mkchvcaeor )
{ rtDW . c1jwwx42fx = rtP . Integrator_UpperSat_mkchvcaeor ; } else { if (
rtDW . c1jwwx42fx <= rtP . Integrator_LowerSat_al00fjl4v2 ) { rtDW .
c1jwwx42fx = rtP . Integrator_LowerSat_al00fjl4v2 ; } } } if ( rtB .
kbuzw5x2iq || ( rtDW . cwebk52hxz != 0 ) ) { rtDW . c1jwwx42fx = rtB .
h5wr1gji1b ; if ( rtDW . c1jwwx42fx >= rtP . Integrator_UpperSat_mkchvcaeor )
{ rtDW . c1jwwx42fx = rtP . Integrator_UpperSat_mkchvcaeor ; } else { if (
rtDW . c1jwwx42fx <= rtP . Integrator_LowerSat_al00fjl4v2 ) { rtDW .
c1jwwx42fx = rtP . Integrator_LowerSat_al00fjl4v2 ; } } } if ( rtDW .
c1jwwx42fx >= rtP . Integrator_UpperSat_mkchvcaeor ) { rtDW . c1jwwx42fx =
rtP . Integrator_UpperSat_mkchvcaeor ; } else { if ( rtDW . c1jwwx42fx <= rtP
. Integrator_LowerSat_al00fjl4v2 ) { rtDW . c1jwwx42fx = rtP .
Integrator_LowerSat_al00fjl4v2 ; } } rtB . cqwvwhr1jq = rtDW . c1jwwx42fx ;
u0 = rtB . cqwvwhr1jq ; u1 = rtP . Saturation_LowerSat_e0wofzrvyc ; u2 = rtP
. Saturation_UpperSat_drbu1b01ue ; if ( u0 > u2 ) { rtB . dclv2c3egj = u2 ; }
else if ( u0 < u1 ) { rtB . dclv2c3egj = u1 ; } else { rtB . dclv2c3egj = u0
; } } rtB . ii4qwz2ynt = rtP . GAIN_Gain_nohv0ojvel * rtB . md32vri2gx [ 8 ]
; rtB . cqmb4ean0h = rtP . Gain2_Gain * rtB . ii4qwz2ynt ; if ( ssIsSampleHit
( rtS , 1 , 0 ) ) { rtB . kn52niorhw = rtB . cqmb4ean0h ; rtB . l4uwl1uy0r =
rtB . dclv2c3egj - rtB . kn52niorhw ; rtB . o0k0kwosqj = rtP .
PIDController2_D * rtB . l4uwl1uy0r ; rtB . fpggvpdrmb = rtDW . mhha3stacp ;
rtB . lcc15x1i4j = rtB . o0k0kwosqj - rtB . fpggvpdrmb ; rtB . frxbxzmcnw =
rtP . PIDController2_I * rtB . l4uwl1uy0r ; rtB . oagwqvtorn = rtDW .
lx1kthg2ak ; rtB . iqpo2uomij = rtP . PIDController2_N * rtB . lcc15x1i4j ;
rtB . i1jllhl2ro = rtP . PIDController2_P * rtB . l4uwl1uy0r ; rtB .
h3pb04vqfl = ( rtB . i1jllhl2ro + rtB . oagwqvtorn ) + rtB . iqpo2uomij ; rtB
. hwwdionvx0 = rtP . filter3_tc - rtB . mi3hyl32jv [ 0 ] ; rtB . b2kt2bq2rg =
( rtB . hwwdionvx0 <= rtP . Constant_Value_ltfu2n3aso ) ; if ( ssIsSampleHit
( rtS , 1 , 0 ) ) { rtB . lkil0izc4t = rtB . g2zj4z3fcf [ 3 ] ; } rtB .
d2mrurkchw = rtP . LowPassFilterDiscreteorContinuous_K_ix20lvg4ww * rtB .
lkil0izc4t ; if ( rtDW . n21ig4q2la != 0 ) { rtDW . bsqva4pohk = rtB .
d2mrurkchw ; if ( rtDW . bsqva4pohk >= rtP . Integrator_UpperSat_bysv0peofj )
{ rtDW . bsqva4pohk = rtP . Integrator_UpperSat_bysv0peofj ; } else { if (
rtDW . bsqva4pohk <= rtP . Integrator_LowerSat_cxf0fnk0y4 ) { rtDW .
bsqva4pohk = rtP . Integrator_LowerSat_cxf0fnk0y4 ; } } } if ( rtB .
b2kt2bq2rg || ( rtDW . awuv0zqvac != 0 ) ) { rtDW . bsqva4pohk = rtB .
d2mrurkchw ; if ( rtDW . bsqva4pohk >= rtP . Integrator_UpperSat_bysv0peofj )
{ rtDW . bsqva4pohk = rtP . Integrator_UpperSat_bysv0peofj ; } else { if (
rtDW . bsqva4pohk <= rtP . Integrator_LowerSat_cxf0fnk0y4 ) { rtDW .
bsqva4pohk = rtP . Integrator_LowerSat_cxf0fnk0y4 ; } } } if ( rtDW .
bsqva4pohk >= rtP . Integrator_UpperSat_bysv0peofj ) { rtDW . bsqva4pohk =
rtP . Integrator_UpperSat_bysv0peofj ; } else { if ( rtDW . bsqva4pohk <= rtP
. Integrator_LowerSat_cxf0fnk0y4 ) { rtDW . bsqva4pohk = rtP .
Integrator_LowerSat_cxf0fnk0y4 ; } } rtB . lokezzkpnq = rtDW . bsqva4pohk ;
u0 = rtB . lokezzkpnq ; u1 = rtP . Saturation_LowerSat_cangmrc0kb ; u2 = rtP
. Saturation_UpperSat_e0c2zptto2 ; if ( u0 > u2 ) { rtB . etvjy1bchk = u2 ; }
else if ( u0 < u1 ) { rtB . etvjy1bchk = u1 ; } else { rtB . etvjy1bchk = u0
; } } rtB . dra2krvba4 = rtP . GAIN_Gain_ecfhfkgqbl * rtB . md32vri2gx [ 10 ]
; rtB . ibqzqe3oou = rtP . Gain3_Gain * rtB . dra2krvba4 ; if ( ssIsSampleHit
( rtS , 1 , 0 ) ) { rtB . cviauid1d3 = rtB . ibqzqe3oou ; rtB . bfdxinhtnw =
rtB . etvjy1bchk - rtB . cviauid1d3 ; rtB . nlg5uajt21 = rtP .
PIDController3_D * rtB . bfdxinhtnw ; rtB . mbum4xbd0e = rtDW . lpwasbckyz ;
rtB . pv3si0fkfr = rtB . nlg5uajt21 - rtB . mbum4xbd0e ; rtB . l4bvwu01j3 =
rtP . PIDController3_I * rtB . bfdxinhtnw ; rtB . brueov51ao = rtDW .
d4ohqbhzps ; rtB . idhpkfnk0a = rtP . PIDController3_N * rtB . pv3si0fkfr ;
rtB . gpphxbqvy3 = rtP . PIDController3_P * rtB . bfdxinhtnw ; rtB .
aamnmjm1yc = ( rtB . gpphxbqvy3 + rtB . brueov51ao ) + rtB . idhpkfnk0a ; rtB
. j50fv2yw23 = rtP . filter4_tc - rtB . p5x1uibsfi [ 0 ] ; rtB . jrzojgf3va =
( rtB . j50fv2yw23 <= rtP . Constant_Value_ioexv0z50z ) ; if ( ssIsSampleHit
( rtS , 1 , 0 ) ) { rtB . mfwdsafnjz = rtB . g2zj4z3fcf [ 4 ] ; } rtB .
ebwtivil4o = rtP . LowPassFilterDiscreteorContinuous_K_dqv5icbpo4 * rtB .
mfwdsafnjz ; if ( rtDW . f1fl5shvqt != 0 ) { rtDW . bfnpjdpcts = rtB .
ebwtivil4o ; if ( rtDW . bfnpjdpcts >= rtP . Integrator_UpperSat_cwwfgeyo4e )
{ rtDW . bfnpjdpcts = rtP . Integrator_UpperSat_cwwfgeyo4e ; } else { if (
rtDW . bfnpjdpcts <= rtP . Integrator_LowerSat_gjgwydu10i ) { rtDW .
bfnpjdpcts = rtP . Integrator_LowerSat_gjgwydu10i ; } } } if ( rtB .
jrzojgf3va || ( rtDW . jrc3tboejv != 0 ) ) { rtDW . bfnpjdpcts = rtB .
ebwtivil4o ; if ( rtDW . bfnpjdpcts >= rtP . Integrator_UpperSat_cwwfgeyo4e )
{ rtDW . bfnpjdpcts = rtP . Integrator_UpperSat_cwwfgeyo4e ; } else { if (
rtDW . bfnpjdpcts <= rtP . Integrator_LowerSat_gjgwydu10i ) { rtDW .
bfnpjdpcts = rtP . Integrator_LowerSat_gjgwydu10i ; } } } if ( rtDW .
bfnpjdpcts >= rtP . Integrator_UpperSat_cwwfgeyo4e ) { rtDW . bfnpjdpcts =
rtP . Integrator_UpperSat_cwwfgeyo4e ; } else { if ( rtDW . bfnpjdpcts <= rtP
. Integrator_LowerSat_gjgwydu10i ) { rtDW . bfnpjdpcts = rtP .
Integrator_LowerSat_gjgwydu10i ; } } rtB . pv3ytmgy52 = rtDW . bfnpjdpcts ;
u0 = rtB . pv3ytmgy52 ; u1 = rtP . Saturation_LowerSat_esw3yahypq ; u2 = rtP
. Saturation_UpperSat_eznfskdcrl ; if ( u0 > u2 ) { rtB . dnefh5theb = u2 ; }
else if ( u0 < u1 ) { rtB . dnefh5theb = u1 ; } else { rtB . dnefh5theb = u0
; } } rtB . cdt2p1s14w = rtP . GAIN_Gain_piwslcsoon * rtB . md32vri2gx [ 2 ]
; rtB . c0qaqk5b53 = rtP . Gain4_Gain * rtB . cdt2p1s14w ; if ( ssIsSampleHit
( rtS , 1 , 0 ) ) { rtB . dw2bf5brbz = rtB . c0qaqk5b53 ; rtB . jkz1k1ztnc =
rtB . dnefh5theb - rtB . dw2bf5brbz ; rtB . egzy5dbwp0 = rtP .
PIDController4_D * rtB . jkz1k1ztnc ; rtB . jspilqipin = rtDW . bjypbkgsog ;
rtB . npsucfyiyj = rtB . egzy5dbwp0 - rtB . jspilqipin ; rtB . h0svs1rpby =
rtP . PIDController4_I * rtB . jkz1k1ztnc ; rtB . nsormta4tz = rtDW .
d0kf2aazrh ; rtB . bb2tvjwhg5 = rtP . PIDController4_N * rtB . npsucfyiyj ;
rtB . devyvktlbb = rtP . PIDController4_P * rtB . jkz1k1ztnc ; rtB .
euoedwiyxz = ( rtB . devyvktlbb + rtB . nsormta4tz ) + rtB . bb2tvjwhg5 ; rtB
. gfql04q11h = rtP . filter5_tc - rtB . he3amknkw3 [ 0 ] ; rtB . pcez2gw042 =
( rtB . gfql04q11h <= rtP . Constant_Value_hhcejr3ea0 ) ; if ( ssIsSampleHit
( rtS , 1 , 0 ) ) { rtB . lrrgqvyxev = rtB . g2zj4z3fcf [ 5 ] ; } rtB .
mpdwhul4c3 = rtP . LowPassFilterDiscreteorContinuous_K_jebkrx2q00 * rtB .
lrrgqvyxev ; if ( rtDW . ptqdowofkz != 0 ) { rtDW . al0mzj21sg = rtB .
mpdwhul4c3 ; if ( rtDW . al0mzj21sg >= rtP . Integrator_UpperSat_ebd22dx1d1 )
{ rtDW . al0mzj21sg = rtP . Integrator_UpperSat_ebd22dx1d1 ; } else { if (
rtDW . al0mzj21sg <= rtP . Integrator_LowerSat_h5qrw1zwan ) { rtDW .
al0mzj21sg = rtP . Integrator_LowerSat_h5qrw1zwan ; } } } if ( rtB .
pcez2gw042 || ( rtDW . kqwhwvmbo5 != 0 ) ) { rtDW . al0mzj21sg = rtB .
mpdwhul4c3 ; if ( rtDW . al0mzj21sg >= rtP . Integrator_UpperSat_ebd22dx1d1 )
{ rtDW . al0mzj21sg = rtP . Integrator_UpperSat_ebd22dx1d1 ; } else { if (
rtDW . al0mzj21sg <= rtP . Integrator_LowerSat_h5qrw1zwan ) { rtDW .
al0mzj21sg = rtP . Integrator_LowerSat_h5qrw1zwan ; } } } if ( rtDW .
al0mzj21sg >= rtP . Integrator_UpperSat_ebd22dx1d1 ) { rtDW . al0mzj21sg =
rtP . Integrator_UpperSat_ebd22dx1d1 ; } else { if ( rtDW . al0mzj21sg <= rtP
. Integrator_LowerSat_h5qrw1zwan ) { rtDW . al0mzj21sg = rtP .
Integrator_LowerSat_h5qrw1zwan ; } } rtB . kib51taq3o = rtDW . al0mzj21sg ;
u0 = rtB . kib51taq3o ; u1 = rtP . Saturation_LowerSat_aku5h2443e ; u2 = rtP
. Saturation_UpperSat_fp4onlvepw ; if ( u0 > u2 ) { rtB . lzciuaakro = u2 ; }
else if ( u0 < u1 ) { rtB . lzciuaakro = u1 ; } else { rtB . lzciuaakro = u0
; } } rtB . hjxmaadmti = rtP . GAIN_Gain_jkkozojh3f * rtB . md32vri2gx [ 0 ]
; rtB . jm5mspklpa = rtP . Gain5_Gain * rtB . hjxmaadmti ; if ( ssIsSampleHit
( rtS , 1 , 0 ) ) { rtB . bsd0rneemv = rtB . jm5mspklpa ; rtB . egqt5e4qc0 =
rtB . lzciuaakro - rtB . bsd0rneemv ; rtB . oqgrnwgpxv = rtP .
PIDController5_D * rtB . egqt5e4qc0 ; rtB . der1hzp1xn = rtDW . ou3top1ox4 ;
rtB . ge4nyhm1r3 = rtB . oqgrnwgpxv - rtB . der1hzp1xn ; rtB . e5v2koad5v =
rtP . PIDController5_I * rtB . egqt5e4qc0 ; rtB . p2qcrjqxdh = rtDW .
mmsgagixgx ; rtB . fftrdajetv = rtP . PIDController5_N * rtB . ge4nyhm1r3 ;
rtB . a0dbybcqci = rtP . PIDController5_P * rtB . egqt5e4qc0 ; rtB .
jbsevw1lu1 = ( rtB . a0dbybcqci + rtB . p2qcrjqxdh ) + rtB . fftrdajetv ; u0
= muDoubleScalarMax ( rtB . jhflzht2mj [ 0 ] , rtP . filter_tc ) ; rtB .
d5tlsdo253 = u0 ; rtB . gqkd1ueiwi = ( real_T ) ( rtB . d5tlsdo253 == 0.0 ) *
2.2204460492503131e-16 + rtB . d5tlsdo253 ; rtB . fsmvwznsct = rtB .
pn0xtm1qfs - rtB . fqolhzt2ru ; rtB . hwxfmqt0gr = 1.0 / rtB . gqkd1ueiwi *
rtB . fsmvwznsct ; u0 = muDoubleScalarMax ( rtB . kscxrogtua [ 0 ] , rtP .
filter1_tc ) ; rtB . deythrkt14 = u0 ; rtB . fe1hwnkjzh = ( real_T ) ( rtB .
deythrkt14 == 0.0 ) * 2.2204460492503131e-16 + rtB . deythrkt14 ; rtB .
n4qnpxnbuu = rtB . gw0rerd52a - rtB . loqom214rl ; rtB . gwv4jfdhm1 = 1.0 /
rtB . fe1hwnkjzh * rtB . n4qnpxnbuu ; u0 = muDoubleScalarMax ( rtB .
o3qvvpwmd3 [ 0 ] , rtP . filter2_tc ) ; rtB . lebmhzg0mt = u0 ; rtB .
mgs2im4zap = ( real_T ) ( rtB . lebmhzg0mt == 0.0 ) * 2.2204460492503131e-16
+ rtB . lebmhzg0mt ; rtB . bsvezlusnl = rtB . h5wr1gji1b - rtB . dclv2c3egj ;
rtB . gw1dmadrpe = 1.0 / rtB . mgs2im4zap * rtB . bsvezlusnl ; u0 =
muDoubleScalarMax ( rtB . mi3hyl32jv [ 0 ] , rtP . filter3_tc ) ; rtB .
cpjkmvluab = u0 ; rtB . b2lkww2jyt = ( real_T ) ( rtB . cpjkmvluab == 0.0 ) *
2.2204460492503131e-16 + rtB . cpjkmvluab ; rtB . mq21afeej4 = rtB .
d2mrurkchw - rtB . etvjy1bchk ; rtB . mvgpkg11eh = 1.0 / rtB . b2lkww2jyt *
rtB . mq21afeej4 ; u0 = muDoubleScalarMax ( rtB . p5x1uibsfi [ 0 ] , rtP .
filter4_tc ) ; rtB . o4cw4y3nry = u0 ; rtB . ltma5vi0g1 = ( real_T ) ( rtB .
o4cw4y3nry == 0.0 ) * 2.2204460492503131e-16 + rtB . o4cw4y3nry ; rtB .
bueu3wy0fh = rtB . ebwtivil4o - rtB . dnefh5theb ; rtB . mv3uo5px30 = 1.0 /
rtB . ltma5vi0g1 * rtB . bueu3wy0fh ; u0 = muDoubleScalarMax ( rtB .
he3amknkw3 [ 0 ] , rtP . filter5_tc ) ; rtB . meb4zbqjxi = u0 ; rtB .
csxd24zgug = ( real_T ) ( rtB . meb4zbqjxi == 0.0 ) * 2.2204460492503131e-16
+ rtB . meb4zbqjxi ; rtB . jk5kvepviq = rtB . mpdwhul4c3 - rtB . lzciuaakro ;
rtB . pq0iqevv0y = 1.0 / rtB . csxd24zgug * rtB . jk5kvepviq ; } rtB .
jtp3uxrzli = rtP . GAIN_Gain_mulmeca5gq * rtB . md32vri2gx [ 11 ] ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . ps1sa4yqwt = rtB . jtp3uxrzli ; rtB .
gj0ycrtj5t = rtP . Gain10_Gain * rtB . ps1sa4yqwt ; rtB . cje00jsebg = rtP .
Gain12_Gain * rtB . euoedwiyxz ; } rtB . ehyt3ybvhy = rtP .
GAIN_Gain_l2gp1dcapi * rtB . md32vri2gx [ 3 ] ; if ( ssIsSampleHit ( rtS , 1
, 0 ) ) { rtB . c1crd40ka1 = rtB . ehyt3ybvhy ; rtB . bkvd0q0xbh = rtP .
Gain13_Gain * rtB . c1crd40ka1 ; rtB . ov22k0lvp4 = rtP . Gain15_Gain * rtB .
jbsevw1lu1 ; } rtB . mddp40g3ij = rtP . GAIN_Gain_eewbit12qx * rtB .
md32vri2gx [ 1 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . atxuog4za1 =
rtB . mddp40g3ij ; rtB . nn4ue0o2n1 = rtP . Gain16_Gain * rtB . atxuog4za1 ;
rtB . l0ovgbpw0v = rtP . Gain2_Gain_iktjgimoln * rtB . mrr4rjxmd5 ; rtB .
a1acouxm22 = rtP . Gain3_Gain_hzczzgk3bt * rtB . mo23g4pnrk ; } rtB .
htz5ycylyf = rtP . GAIN_Gain_gj1zc25hs4 * rtB . md32vri2gx [ 5 ] ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . ows41rmx5g = rtB . htz5ycylyf ; rtB .
mvs4yx5z0y = rtP . Gain4_Gain_gkiyqinsa1 * rtB . ows41rmx5g ; } rtB .
hlsy5izhcz = rtP . GAIN_Gain_e3s5mnjjuy * rtB . md32vri2gx [ 7 ] ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . m3owjuhgvc = rtB . hlsy5izhcz ; rtB .
ablwxnz4t2 = rtP . Gain5_Gain_avuh005k0g * rtB . m3owjuhgvc ; rtB .
m13gwn2ern = rtP . Gain6_Gain * rtB . h3pb04vqfl ; } rtB . gwx425b5rd = rtP .
GAIN_Gain_bka4fo5kzw * rtB . md32vri2gx [ 9 ] ; if ( ssIsSampleHit ( rtS , 1
, 0 ) ) { rtB . lfxlotm5a0 = rtB . gwx425b5rd ; rtB . lojqadga1m = rtP .
Gain7_Gain * rtB . lfxlotm5a0 ; rtB . plzvecy2ci = rtP . Gain9_Gain * rtB .
aamnmjm1yc ; rtB . nxxbgul0jm = rtP . filter_tc_kcv10akjdr - rtB . j1nlxlazhf
[ 0 ] ; rtB . ffpw4qlmce = ( rtB . nxxbgul0jm <= rtP .
Constant_Value_lm1lurr4hy ) ; rtB . j2yatlqg4t = rtP .
LowPassFilterDiscreteorContinuous_K_bvtursactz * rtB . l0ovgbpw0v ; if ( rtDW
. lfyvvh0sv5 != 0 ) { rtDW . c33j3xhn2h = rtB . j2yatlqg4t ; if ( rtDW .
c33j3xhn2h >= rtP . Integrator_UpperSat_hxosttrbn1 ) { rtDW . c33j3xhn2h =
rtP . Integrator_UpperSat_hxosttrbn1 ; } else { if ( rtDW . c33j3xhn2h <= rtP
. Integrator_LowerSat_njt0zyqb4b ) { rtDW . c33j3xhn2h = rtP .
Integrator_LowerSat_njt0zyqb4b ; } } } if ( rtB . ffpw4qlmce || ( rtDW .
gcr0no5gxx != 0 ) ) { rtDW . c33j3xhn2h = rtB . j2yatlqg4t ; if ( rtDW .
c33j3xhn2h >= rtP . Integrator_UpperSat_hxosttrbn1 ) { rtDW . c33j3xhn2h =
rtP . Integrator_UpperSat_hxosttrbn1 ; } else { if ( rtDW . c33j3xhn2h <= rtP
. Integrator_LowerSat_njt0zyqb4b ) { rtDW . c33j3xhn2h = rtP .
Integrator_LowerSat_njt0zyqb4b ; } } } if ( rtDW . c33j3xhn2h >= rtP .
Integrator_UpperSat_hxosttrbn1 ) { rtDW . c33j3xhn2h = rtP .
Integrator_UpperSat_hxosttrbn1 ; } else { if ( rtDW . c33j3xhn2h <= rtP .
Integrator_LowerSat_njt0zyqb4b ) { rtDW . c33j3xhn2h = rtP .
Integrator_LowerSat_njt0zyqb4b ; } } rtB . ashhku0ld2 = rtDW . c33j3xhn2h ;
u0 = rtB . ashhku0ld2 ; u1 = rtP . Saturation_LowerSat_avgaf5ds21 ; u2 = rtP
. Saturation_UpperSat_irbb5ee3qe ; if ( u0 > u2 ) { rtB . eu1wtgr3lr = u2 ; }
else if ( u0 < u1 ) { rtB . eu1wtgr3lr = u1 ; } else { rtB . eu1wtgr3lr = u0
; } rtB . ir55binbpc = rtB . eu1wtgr3lr - rtB . mvs4yx5z0y ; rtB . aaezvyca1i
= rtP . PIDController_I_a0r5e54zkz * rtB . ir55binbpc ; rtB . fqdakf20fg =
rtDW . nhkrizpina ; rtB . chrxx4xqzd = rtP . PIDController_P_mq1jsyv5uw * rtB
. ir55binbpc ; rtB . hut5ed5ncb = rtB . chrxx4xqzd + rtB . fqdakf20fg ; rtB .
nwddfz0u4c = rtP . filter1_tc_exm4toz5mi - rtB . njkehyxd2c [ 0 ] ; rtB .
dpejr15fy5 = ( rtB . nwddfz0u4c <= rtP . Constant_Value_kzhoi3f11e ) ; rtB .
oyu3bdsl5p = rtP . LowPassFilterDiscreteorContinuous_K_ldbi3kk5oi * rtB .
a1acouxm22 ; if ( rtDW . iyvntabvlz != 0 ) { rtDW . bgfsqdlzb2 = rtB .
oyu3bdsl5p ; if ( rtDW . bgfsqdlzb2 >= rtP . Integrator_UpperSat_pfwih5q0ig )
{ rtDW . bgfsqdlzb2 = rtP . Integrator_UpperSat_pfwih5q0ig ; } else { if (
rtDW . bgfsqdlzb2 <= rtP . Integrator_LowerSat_pbd52ykhos ) { rtDW .
bgfsqdlzb2 = rtP . Integrator_LowerSat_pbd52ykhos ; } } } if ( rtB .
dpejr15fy5 || ( rtDW . dnpgzoukr4 != 0 ) ) { rtDW . bgfsqdlzb2 = rtB .
oyu3bdsl5p ; if ( rtDW . bgfsqdlzb2 >= rtP . Integrator_UpperSat_pfwih5q0ig )
{ rtDW . bgfsqdlzb2 = rtP . Integrator_UpperSat_pfwih5q0ig ; } else { if (
rtDW . bgfsqdlzb2 <= rtP . Integrator_LowerSat_pbd52ykhos ) { rtDW .
bgfsqdlzb2 = rtP . Integrator_LowerSat_pbd52ykhos ; } } } if ( rtDW .
bgfsqdlzb2 >= rtP . Integrator_UpperSat_pfwih5q0ig ) { rtDW . bgfsqdlzb2 =
rtP . Integrator_UpperSat_pfwih5q0ig ; } else { if ( rtDW . bgfsqdlzb2 <= rtP
. Integrator_LowerSat_pbd52ykhos ) { rtDW . bgfsqdlzb2 = rtP .
Integrator_LowerSat_pbd52ykhos ; } } rtB . bwztrzbo3q = rtDW . bgfsqdlzb2 ;
u0 = rtB . bwztrzbo3q ; u1 = rtP . Saturation_LowerSat_nkqwrbgzd1 ; u2 = rtP
. Saturation_UpperSat_jfp3gm1jww ; if ( u0 > u2 ) { rtB . ivgngk3er1 = u2 ; }
else if ( u0 < u1 ) { rtB . ivgngk3er1 = u1 ; } else { rtB . ivgngk3er1 = u0
; } rtB . ffcbgxjkk2 = rtB . ivgngk3er1 - rtB . ablwxnz4t2 ; rtB . mekozqjtbe
= rtP . PIDController1_I_jo4mb24iod * rtB . ffcbgxjkk2 ; rtB . kuafjwwjj0 =
rtDW . prb2fus1cf ; rtB . fuw4y5ptc3 = rtP . PIDController1_P_dbvxmh3exo *
rtB . ffcbgxjkk2 ; rtB . fyv5sb3uga = rtB . fuw4y5ptc3 + rtB . kuafjwwjj0 ;
rtB . oynr1ardse = rtP . filter2_tc_mwhxojqmwa - rtB . hslnzetru2 [ 0 ] ; rtB
. ezdth4z4el = ( rtB . oynr1ardse <= rtP . Constant_Value_dstjrw10qx ) ; rtB
. mb4emfy1e1 = rtP . LowPassFilterDiscreteorContinuous_K_ijtsxy1si3 * rtB .
m13gwn2ern ; if ( rtDW . azfc3wig1a != 0 ) { rtDW . oc01bukxc2 = rtB .
mb4emfy1e1 ; if ( rtDW . oc01bukxc2 >= rtP . Integrator_UpperSat_edcqyime1g )
{ rtDW . oc01bukxc2 = rtP . Integrator_UpperSat_edcqyime1g ; } else { if (
rtDW . oc01bukxc2 <= rtP . Integrator_LowerSat_kapqoyjcmn ) { rtDW .
oc01bukxc2 = rtP . Integrator_LowerSat_kapqoyjcmn ; } } } if ( rtB .
ezdth4z4el || ( rtDW . dcszolnjqw != 0 ) ) { rtDW . oc01bukxc2 = rtB .
mb4emfy1e1 ; if ( rtDW . oc01bukxc2 >= rtP . Integrator_UpperSat_edcqyime1g )
{ rtDW . oc01bukxc2 = rtP . Integrator_UpperSat_edcqyime1g ; } else { if (
rtDW . oc01bukxc2 <= rtP . Integrator_LowerSat_kapqoyjcmn ) { rtDW .
oc01bukxc2 = rtP . Integrator_LowerSat_kapqoyjcmn ; } } } if ( rtDW .
oc01bukxc2 >= rtP . Integrator_UpperSat_edcqyime1g ) { rtDW . oc01bukxc2 =
rtP . Integrator_UpperSat_edcqyime1g ; } else { if ( rtDW . oc01bukxc2 <= rtP
. Integrator_LowerSat_kapqoyjcmn ) { rtDW . oc01bukxc2 = rtP .
Integrator_LowerSat_kapqoyjcmn ; } } rtB . ifesd4uvi5 = rtDW . oc01bukxc2 ;
u0 = rtB . ifesd4uvi5 ; u1 = rtP . Saturation_LowerSat_acc4hmqzqd ; u2 = rtP
. Saturation_UpperSat_cu3m2bizko ; if ( u0 > u2 ) { rtB . nqdhd25la3 = u2 ; }
else if ( u0 < u1 ) { rtB . nqdhd25la3 = u1 ; } else { rtB . nqdhd25la3 = u0
; } rtB . fugz5sg2sv = rtB . nqdhd25la3 - rtB . lojqadga1m ; rtB . omdgfacbza
= rtP . PIDController2_I_gwszoiqkdx * rtB . fugz5sg2sv ; rtB . cshiufn5c5 =
rtDW . d1olc5hqid ; rtB . lbwnjiuxsr = rtP . PIDController2_P_b4eyl414uz *
rtB . fugz5sg2sv ; rtB . kz2wf5heu5 = rtB . lbwnjiuxsr + rtB . cshiufn5c5 ;
rtB . kqhgk1l5tm = rtP . filter3_tc_b0rftn00ld - rtB . p4rleumfzg [ 0 ] ; rtB
. pj2cosrmgv = ( rtB . kqhgk1l5tm <= rtP . Constant_Value_p51hfq4twj ) ; rtB
. beudjok0zo = rtP . LowPassFilterDiscreteorContinuous_K_nfdjuhre1x * rtB .
plzvecy2ci ; if ( rtDW . pnmnijewrm != 0 ) { rtDW . ituhf3b0wr = rtB .
beudjok0zo ; if ( rtDW . ituhf3b0wr >= rtP . Integrator_UpperSat_lkw0yc02po )
{ rtDW . ituhf3b0wr = rtP . Integrator_UpperSat_lkw0yc02po ; } else { if (
rtDW . ituhf3b0wr <= rtP . Integrator_LowerSat_indtf15swa ) { rtDW .
ituhf3b0wr = rtP . Integrator_LowerSat_indtf15swa ; } } } if ( rtB .
pj2cosrmgv || ( rtDW . asudwslg1u != 0 ) ) { rtDW . ituhf3b0wr = rtB .
beudjok0zo ; if ( rtDW . ituhf3b0wr >= rtP . Integrator_UpperSat_lkw0yc02po )
{ rtDW . ituhf3b0wr = rtP . Integrator_UpperSat_lkw0yc02po ; } else { if (
rtDW . ituhf3b0wr <= rtP . Integrator_LowerSat_indtf15swa ) { rtDW .
ituhf3b0wr = rtP . Integrator_LowerSat_indtf15swa ; } } } if ( rtDW .
ituhf3b0wr >= rtP . Integrator_UpperSat_lkw0yc02po ) { rtDW . ituhf3b0wr =
rtP . Integrator_UpperSat_lkw0yc02po ; } else { if ( rtDW . ituhf3b0wr <= rtP
. Integrator_LowerSat_indtf15swa ) { rtDW . ituhf3b0wr = rtP .
Integrator_LowerSat_indtf15swa ; } } rtB . hnkuut20k4 = rtDW . ituhf3b0wr ;
u0 = rtB . hnkuut20k4 ; u1 = rtP . Saturation_LowerSat_fbnlwwz3ni ; u2 = rtP
. Saturation_UpperSat_aejz2ybmfq ; if ( u0 > u2 ) { rtB . cnnfzpjomf = u2 ; }
else if ( u0 < u1 ) { rtB . cnnfzpjomf = u1 ; } else { rtB . cnnfzpjomf = u0
; } rtB . l4ihoo3otx = rtB . cnnfzpjomf - rtB . gj0ycrtj5t ; rtB . o4wxrlodfy
= rtP . PIDController3_I_bob1q1d43e * rtB . l4ihoo3otx ; rtB . egnyznlrun =
rtDW . k3i3dxp2ad ; rtB . blode0dhl5 = rtP . PIDController3_P_igsxoi0cjh *
rtB . l4ihoo3otx ; rtB . khcwqmpttq = rtB . blode0dhl5 + rtB . egnyznlrun ;
rtB . azlkk5ukj5 = rtP . filter4_tc_m5dsazuczp - rtB . p01y5fcekv [ 0 ] ; rtB
. psxp5i3lg4 = ( rtB . azlkk5ukj5 <= rtP . Constant_Value_bg1z0fnmqv ) ; rtB
. mjipizwcde = rtP . LowPassFilterDiscreteorContinuous_K_kznnc2puht * rtB .
cje00jsebg ; if ( rtDW . eumkre2nza != 0 ) { rtDW . bpulvyc40u = rtB .
mjipizwcde ; if ( rtDW . bpulvyc40u >= rtP . Integrator_UpperSat_lfd3uwwmqw )
{ rtDW . bpulvyc40u = rtP . Integrator_UpperSat_lfd3uwwmqw ; } else { if (
rtDW . bpulvyc40u <= rtP . Integrator_LowerSat_ix4wayzgyy ) { rtDW .
bpulvyc40u = rtP . Integrator_LowerSat_ix4wayzgyy ; } } } if ( rtB .
psxp5i3lg4 || ( rtDW . ks2knrfwk4 != 0 ) ) { rtDW . bpulvyc40u = rtB .
mjipizwcde ; if ( rtDW . bpulvyc40u >= rtP . Integrator_UpperSat_lfd3uwwmqw )
{ rtDW . bpulvyc40u = rtP . Integrator_UpperSat_lfd3uwwmqw ; } else { if (
rtDW . bpulvyc40u <= rtP . Integrator_LowerSat_ix4wayzgyy ) { rtDW .
bpulvyc40u = rtP . Integrator_LowerSat_ix4wayzgyy ; } } } if ( rtDW .
bpulvyc40u >= rtP . Integrator_UpperSat_lfd3uwwmqw ) { rtDW . bpulvyc40u =
rtP . Integrator_UpperSat_lfd3uwwmqw ; } else { if ( rtDW . bpulvyc40u <= rtP
. Integrator_LowerSat_ix4wayzgyy ) { rtDW . bpulvyc40u = rtP .
Integrator_LowerSat_ix4wayzgyy ; } } rtB . bcs4zro1sc = rtDW . bpulvyc40u ;
u0 = rtB . bcs4zro1sc ; u1 = rtP . Saturation_LowerSat_gakz0d2xnn ; u2 = rtP
. Saturation_UpperSat_izwihy1hdf ; if ( u0 > u2 ) { rtB . fza5dbobgj = u2 ; }
else if ( u0 < u1 ) { rtB . fza5dbobgj = u1 ; } else { rtB . fza5dbobgj = u0
; } rtB . bbxfb2lt5i = rtB . fza5dbobgj - rtB . bkvd0q0xbh ; rtB . ou1hxpsbtc
= rtP . PIDController4_I_lqglmmjoiy * rtB . bbxfb2lt5i ; rtB . d3y2k2c1cl =
rtDW . e4gpd3p5q1 ; rtB . pdkvwktmkv = rtP . PIDController4_P_a1czxzuwsb *
rtB . bbxfb2lt5i ; rtB . fbm3deed12 = rtB . pdkvwktmkv + rtB . d3y2k2c1cl ;
rtB . bjj2r2kqch = rtP . filter5_tc_cs0psgs55d - rtB . kirrpnesgo [ 0 ] ; rtB
. aw5fczldrp = ( rtB . bjj2r2kqch <= rtP . Constant_Value_odca2fbdaq ) ; rtB
. gimkhjafkq = rtP . LowPassFilterDiscreteorContinuous_K_elbapaqm2w * rtB .
ov22k0lvp4 ; if ( rtDW . fce4agh0zo != 0 ) { rtDW . iwb0eino0x = rtB .
gimkhjafkq ; if ( rtDW . iwb0eino0x >= rtP . Integrator_UpperSat_gjz1pvjay2 )
{ rtDW . iwb0eino0x = rtP . Integrator_UpperSat_gjz1pvjay2 ; } else { if (
rtDW . iwb0eino0x <= rtP . Integrator_LowerSat_hwnksdfkmv ) { rtDW .
iwb0eino0x = rtP . Integrator_LowerSat_hwnksdfkmv ; } } } if ( rtB .
aw5fczldrp || ( rtDW . lv2aww432q != 0 ) ) { rtDW . iwb0eino0x = rtB .
gimkhjafkq ; if ( rtDW . iwb0eino0x >= rtP . Integrator_UpperSat_gjz1pvjay2 )
{ rtDW . iwb0eino0x = rtP . Integrator_UpperSat_gjz1pvjay2 ; } else { if (
rtDW . iwb0eino0x <= rtP . Integrator_LowerSat_hwnksdfkmv ) { rtDW .
iwb0eino0x = rtP . Integrator_LowerSat_hwnksdfkmv ; } } } if ( rtDW .
iwb0eino0x >= rtP . Integrator_UpperSat_gjz1pvjay2 ) { rtDW . iwb0eino0x =
rtP . Integrator_UpperSat_gjz1pvjay2 ; } else { if ( rtDW . iwb0eino0x <= rtP
. Integrator_LowerSat_hwnksdfkmv ) { rtDW . iwb0eino0x = rtP .
Integrator_LowerSat_hwnksdfkmv ; } } rtB . jdkd14gwno = rtDW . iwb0eino0x ;
u0 = rtB . jdkd14gwno ; u1 = rtP . Saturation_LowerSat_nssiijzpqc ; u2 = rtP
. Saturation_UpperSat_i55r4kuqpb ; if ( u0 > u2 ) { rtB . om4ycpup2d = u2 ; }
else if ( u0 < u1 ) { rtB . om4ycpup2d = u1 ; } else { rtB . om4ycpup2d = u0
; } rtB . hiredmbfaq = rtB . om4ycpup2d - rtB . nn4ue0o2n1 ; rtB . bipz2gs2vb
= rtP . PIDController5_I_mpy1uti4u1 * rtB . hiredmbfaq ; rtB . matyiq12y5 =
rtDW . o253susvy3 ; rtB . grtyslbuut = rtP . PIDController5_P_dzwlsrlmqy *
rtB . hiredmbfaq ; rtB . g3uwu00l2j = rtB . grtyslbuut + rtB . matyiq12y5 ;
u0 = muDoubleScalarMax ( rtB . j1nlxlazhf [ 0 ] , rtP . filter_tc_kcv10akjdr
) ; rtB . mvrwthfshy = u0 ; rtB . mdbjo22jfb = ( real_T ) ( rtB . mvrwthfshy
== 0.0 ) * 2.2204460492503131e-16 + rtB . mvrwthfshy ; rtB . aoq52irvwi = rtB
. j2yatlqg4t - rtB . eu1wtgr3lr ; rtB . d4il4jbr1v = 1.0 / rtB . mdbjo22jfb *
rtB . aoq52irvwi ; u0 = muDoubleScalarMax ( rtB . njkehyxd2c [ 0 ] , rtP .
filter1_tc_exm4toz5mi ) ; rtB . hhllbndska = u0 ; rtB . htjuj5klu4 = ( real_T
) ( rtB . hhllbndska == 0.0 ) * 2.2204460492503131e-16 + rtB . hhllbndska ;
rtB . nodycz41hd = rtB . oyu3bdsl5p - rtB . ivgngk3er1 ; rtB . obw1lciifs =
1.0 / rtB . htjuj5klu4 * rtB . nodycz41hd ; u0 = muDoubleScalarMax ( rtB .
hslnzetru2 [ 0 ] , rtP . filter2_tc_mwhxojqmwa ) ; rtB . cktb0tkc0f = u0 ;
rtB . hprtfj5lqp = ( real_T ) ( rtB . cktb0tkc0f == 0.0 ) *
2.2204460492503131e-16 + rtB . cktb0tkc0f ; rtB . pji40g4vfw = rtB .
mb4emfy1e1 - rtB . nqdhd25la3 ; rtB . ew1rj0v0ip = 1.0 / rtB . hprtfj5lqp *
rtB . pji40g4vfw ; u0 = muDoubleScalarMax ( rtB . p4rleumfzg [ 0 ] , rtP .
filter3_tc_b0rftn00ld ) ; rtB . ozjpi5gmzi = u0 ; rtB . l4jkzxpz40 = ( real_T
) ( rtB . ozjpi5gmzi == 0.0 ) * 2.2204460492503131e-16 + rtB . ozjpi5gmzi ;
rtB . mrbmdp3mvq = rtB . beudjok0zo - rtB . cnnfzpjomf ; rtB . grxgbhmppu =
1.0 / rtB . l4jkzxpz40 * rtB . mrbmdp3mvq ; u0 = muDoubleScalarMax ( rtB .
p01y5fcekv [ 0 ] , rtP . filter4_tc_m5dsazuczp ) ; rtB . iogfygqx3c = u0 ;
rtB . kwjnhm1rik = ( real_T ) ( rtB . iogfygqx3c == 0.0 ) *
2.2204460492503131e-16 + rtB . iogfygqx3c ; rtB . hyoixeg4fl = rtB .
mjipizwcde - rtB . fza5dbobgj ; rtB . lc3qdiuf3t = 1.0 / rtB . kwjnhm1rik *
rtB . hyoixeg4fl ; u0 = muDoubleScalarMax ( rtB . kirrpnesgo [ 0 ] , rtP .
filter5_tc_cs0psgs55d ) ; rtB . fxjrycxns1 = u0 ; rtB . fueydjqllo = ( real_T
) ( rtB . fxjrycxns1 == 0.0 ) * 2.2204460492503131e-16 + rtB . fxjrycxns1 ;
rtB . lud1nitdqz = rtB . gimkhjafkq - rtB . om4ycpup2d ; rtB . fwqrljkgl5 =
1.0 / rtB . fueydjqllo * rtB . lud1nitdqz ; } rtDW . nvp3tswtih . AcquireOK =
1 ; rtDW . j4znmhb1up . AcquireOK = 1 ; rtDW . njqnvhin1i . AcquireOK = 1 ;
rtDW . a4yiq2c5qz . AcquireOK = 1 ; rtDW . delwqzjfmb . AcquireOK = 1 ; rtDW
. kxwqlyfzql . AcquireOK = 1 ; first_output = false ; if ( rtDW . dduqiujiyo
== 0.0 ) { rtDW . dduqiujiyo = 1.0 ; first_output = true ; } if (
first_output ) { rtX . n212yfmu3n = rtB . md32vri2gx [ 1 ] ; } rtB .
ih22bf4bis [ 0 ] = rtX . n212yfmu3n ; rtB . ih22bf4bis [ 1 ] = ( rtB .
md32vri2gx [ 1 ] - rtX . n212yfmu3n ) * 1000.0 ; rtB . ih22bf4bis [ 2 ] = 0.0
; rtB . ih22bf4bis [ 3 ] = 0.0 ; first_output = false ; if ( rtDW .
o15jwcclhk == 0.0 ) { rtDW . o15jwcclhk = 1.0 ; first_output = true ; } if (
first_output ) { rtX . mm14y0qob4 = rtB . md32vri2gx [ 3 ] ; } rtB .
ey2x1plpfc [ 0 ] = rtX . mm14y0qob4 ; rtB . ey2x1plpfc [ 1 ] = ( rtB .
md32vri2gx [ 3 ] - rtX . mm14y0qob4 ) * 1000.0 ; rtB . ey2x1plpfc [ 2 ] = 0.0
; rtB . ey2x1plpfc [ 3 ] = 0.0 ; first_output = false ; if ( rtDW .
nkabqhmeiu == 0.0 ) { rtDW . nkabqhmeiu = 1.0 ; first_output = true ; } if (
first_output ) { rtX . nyhtwgatpw = rtB . md32vri2gx [ 5 ] ; } rtB .
hiwi0ircf1 [ 0 ] = rtX . nyhtwgatpw ; rtB . hiwi0ircf1 [ 1 ] = ( rtB .
md32vri2gx [ 5 ] - rtX . nyhtwgatpw ) * 1000.0 ; rtB . hiwi0ircf1 [ 2 ] = 0.0
; rtB . hiwi0ircf1 [ 3 ] = 0.0 ; first_output = false ; if ( rtDW .
kdanylioto == 0.0 ) { rtDW . kdanylioto = 1.0 ; first_output = true ; } if (
first_output ) { rtX . aunhsozkjd = rtB . md32vri2gx [ 7 ] ; } rtB .
cyn5mhsbrs [ 0 ] = rtX . aunhsozkjd ; rtB . cyn5mhsbrs [ 1 ] = ( rtB .
md32vri2gx [ 7 ] - rtX . aunhsozkjd ) * 1000.0 ; rtB . cyn5mhsbrs [ 2 ] = 0.0
; rtB . cyn5mhsbrs [ 3 ] = 0.0 ; first_output = false ; if ( rtDW .
k4esgf3pin == 0.0 ) { rtDW . k4esgf3pin = 1.0 ; first_output = true ; } if (
first_output ) { rtX . bpjbkl34c1 = rtB . md32vri2gx [ 9 ] ; } rtB .
lkiqnu3azd [ 0 ] = rtX . bpjbkl34c1 ; rtB . lkiqnu3azd [ 1 ] = ( rtB .
md32vri2gx [ 9 ] - rtX . bpjbkl34c1 ) * 1000.0 ; rtB . lkiqnu3azd [ 2 ] = 0.0
; rtB . lkiqnu3azd [ 3 ] = 0.0 ; first_output = false ; if ( rtDW .
jxguvtxodm == 0.0 ) { rtDW . jxguvtxodm = 1.0 ; first_output = true ; } if (
first_output ) { rtX . lm0fxpm1n1 = rtB . md32vri2gx [ 11 ] ; } rtB .
nvmxvdiax2 [ 0 ] = rtX . lm0fxpm1n1 ; rtB . nvmxvdiax2 [ 1 ] = ( rtB .
md32vri2gx [ 11 ] - rtX . lm0fxpm1n1 ) * 1000.0 ; rtB . nvmxvdiax2 [ 2 ] =
0.0 ; rtB . nvmxvdiax2 [ 3 ] = 0.0 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
rtB . odaelk0hd5 = rtB . fyv5sb3uga ; } if ( ssIsMajorTimeStep ( rtS ) ) {
rtDW . ml2zc01qz1 = rtB . odaelk0hd5 ; } first_output = false ; if ( rtDW .
j01x0sjof1 == 0.0 ) { rtDW . j01x0sjof1 = 1.0 ; first_output = true ; } if (
first_output ) { rtX . opt4eui41m [ 0 ] = rtDW . ml2zc01qz1 ; rtX .
opt4eui41m [ 1 ] = 0.0 ; } rtB . ar5quhe3n1 [ 0 ] = rtX . opt4eui41m [ 0 ] ;
rtB . ar5quhe3n1 [ 1 ] = rtX . opt4eui41m [ 1 ] ; rtB . ar5quhe3n1 [ 2 ] = (
( rtDW . ml2zc01qz1 - rtX . opt4eui41m [ 0 ] ) * 1000.0 - 2.0 * rtX .
opt4eui41m [ 1 ] ) * 1000.0 ; rtB . ar5quhe3n1 [ 3 ] = 0.0 ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . jwsksleeja = rtB . khcwqmpttq ; } if
( ssIsMajorTimeStep ( rtS ) ) { rtDW . fnn2jlfmi3 = rtB . jwsksleeja ; }
first_output = false ; if ( rtDW . iimmcuvdjs == 0.0 ) { rtDW . iimmcuvdjs =
1.0 ; first_output = true ; } if ( first_output ) { rtX . msharprh4q [ 0 ] =
rtDW . fnn2jlfmi3 ; rtX . msharprh4q [ 1 ] = 0.0 ; } rtB . au2eumcmnw [ 0 ] =
rtX . msharprh4q [ 0 ] ; rtB . au2eumcmnw [ 1 ] = rtX . msharprh4q [ 1 ] ;
rtB . au2eumcmnw [ 2 ] = ( ( rtDW . fnn2jlfmi3 - rtX . msharprh4q [ 0 ] ) *
1000.0 - 2.0 * rtX . msharprh4q [ 1 ] ) * 1000.0 ; rtB . au2eumcmnw [ 3 ] =
0.0 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . mh22xyaypy = rtB .
g3uwu00l2j ; } if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . fox2nnpevw = rtB .
mh22xyaypy ; } first_output = false ; if ( rtDW . lngpao5zhs == 0.0 ) { rtDW
. lngpao5zhs = 1.0 ; first_output = true ; } if ( first_output ) { rtX .
cnf2gqarr4 [ 0 ] = rtDW . fox2nnpevw ; rtX . cnf2gqarr4 [ 1 ] = 0.0 ; } rtB .
hwnqfegtgf [ 0 ] = rtX . cnf2gqarr4 [ 0 ] ; rtB . hwnqfegtgf [ 1 ] = rtX .
cnf2gqarr4 [ 1 ] ; rtB . hwnqfegtgf [ 2 ] = ( ( rtDW . fox2nnpevw - rtX .
cnf2gqarr4 [ 0 ] ) * 1000.0 - 2.0 * rtX . cnf2gqarr4 [ 1 ] ) * 1000.0 ; rtB .
hwnqfegtgf [ 3 ] = 0.0 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB .
c11nptjhkq = rtB . fbm3deed12 ; } if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
kswjrqpbnd = rtB . c11nptjhkq ; } first_output = false ; if ( rtDW .
p1zvslcvk0 == 0.0 ) { rtDW . p1zvslcvk0 = 1.0 ; first_output = true ; } if (
first_output ) { rtX . dopllilgmw [ 0 ] = rtDW . kswjrqpbnd ; rtX .
dopllilgmw [ 1 ] = 0.0 ; } rtB . pzpf3nd3va [ 0 ] = rtX . dopllilgmw [ 0 ] ;
rtB . pzpf3nd3va [ 1 ] = rtX . dopllilgmw [ 1 ] ; rtB . pzpf3nd3va [ 2 ] = (
( rtDW . kswjrqpbnd - rtX . dopllilgmw [ 0 ] ) * 1000.0 - 2.0 * rtX .
dopllilgmw [ 1 ] ) * 1000.0 ; rtB . pzpf3nd3va [ 3 ] = 0.0 ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . f14l2fld1f = rtB . hut5ed5ncb ; } if
( ssIsMajorTimeStep ( rtS ) ) { rtDW . gwlc5gste3 = rtB . f14l2fld1f ; }
first_output = false ; if ( rtDW . d03mkwdo2x == 0.0 ) { rtDW . d03mkwdo2x =
1.0 ; first_output = true ; } if ( first_output ) { rtX . j2t2fcuhnz [ 0 ] =
rtDW . gwlc5gste3 ; rtX . j2t2fcuhnz [ 1 ] = 0.0 ; } rtB . lcncbuna0k [ 0 ] =
rtX . j2t2fcuhnz [ 0 ] ; rtB . lcncbuna0k [ 1 ] = rtX . j2t2fcuhnz [ 1 ] ;
rtB . lcncbuna0k [ 2 ] = ( ( rtDW . gwlc5gste3 - rtX . j2t2fcuhnz [ 0 ] ) *
1000.0 - 2.0 * rtX . j2t2fcuhnz [ 1 ] ) * 1000.0 ; rtB . lcncbuna0k [ 3 ] =
0.0 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . pdalytysiw = rtB .
kz2wf5heu5 ; } if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . oem5mgthn3 = rtB .
pdalytysiw ; } first_output = false ; if ( rtDW . cektosfijb == 0.0 ) { rtDW
. cektosfijb = 1.0 ; first_output = true ; } if ( first_output ) { rtX .
eyfhribqoa [ 0 ] = rtDW . oem5mgthn3 ; rtX . eyfhribqoa [ 1 ] = 0.0 ; } rtB .
hstmkliglr [ 0 ] = rtX . eyfhribqoa [ 0 ] ; rtB . hstmkliglr [ 1 ] = rtX .
eyfhribqoa [ 1 ] ; rtB . hstmkliglr [ 2 ] = ( ( rtDW . oem5mgthn3 - rtX .
eyfhribqoa [ 0 ] ) * 1000.0 - 2.0 * rtX . eyfhribqoa [ 1 ] ) * 1000.0 ; rtB .
hstmkliglr [ 3 ] = 0.0 ; simulationData = ( NeslSimulationData * ) rtDW .
izfvfuof1b ; time_e = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN
= 1 ; simulationData -> mData -> mTime . mX = & time_e ; simulationData ->
mData -> mContStates . mN = 30 ; simulationData -> mData -> mContStates . mX
= & rtX . fdlxnailwx [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0
; simulationData -> mData -> mDiscStates . mX = & rtDW . i1v2wl3m4b ;
simulationData -> mData -> mModeVector . mN = 6 ; simulationData -> mData ->
mModeVector . mX = & rtDW . puciepvfhp [ 0 ] ; first_output = false ;
simulationData -> mData -> mFoundZcEvents = first_output ; simulationData ->
mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; first_output = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = first_output ;
simulationData -> mData -> mIsSolverCheckingCIC = false ; first_output =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = first_output ; simulationData -> mData ->
mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
simulationData -> mData -> mIsSolverRequestingReset = false ; tmp_j [ 0 ] = 0
; tmp_g [ 0 ] = rtB . ih22bf4bis [ 0 ] ; tmp_g [ 1 ] = rtB . ih22bf4bis [ 1 ]
; tmp_g [ 2 ] = rtB . ih22bf4bis [ 2 ] ; tmp_g [ 3 ] = rtB . ih22bf4bis [ 3 ]
; tmp_j [ 1 ] = 4 ; tmp_g [ 4 ] = rtB . ey2x1plpfc [ 0 ] ; tmp_g [ 5 ] = rtB
. ey2x1plpfc [ 1 ] ; tmp_g [ 6 ] = rtB . ey2x1plpfc [ 2 ] ; tmp_g [ 7 ] = rtB
. ey2x1plpfc [ 3 ] ; tmp_j [ 2 ] = 8 ; tmp_g [ 8 ] = rtB . hiwi0ircf1 [ 0 ] ;
tmp_g [ 9 ] = rtB . hiwi0ircf1 [ 1 ] ; tmp_g [ 10 ] = rtB . hiwi0ircf1 [ 2 ]
; tmp_g [ 11 ] = rtB . hiwi0ircf1 [ 3 ] ; tmp_j [ 3 ] = 12 ; tmp_g [ 12 ] =
rtB . cyn5mhsbrs [ 0 ] ; tmp_g [ 13 ] = rtB . cyn5mhsbrs [ 1 ] ; tmp_g [ 14 ]
= rtB . cyn5mhsbrs [ 2 ] ; tmp_g [ 15 ] = rtB . cyn5mhsbrs [ 3 ] ; tmp_j [ 4
] = 16 ; tmp_g [ 16 ] = rtB . lkiqnu3azd [ 0 ] ; tmp_g [ 17 ] = rtB .
lkiqnu3azd [ 1 ] ; tmp_g [ 18 ] = rtB . lkiqnu3azd [ 2 ] ; tmp_g [ 19 ] = rtB
. lkiqnu3azd [ 3 ] ; tmp_j [ 5 ] = 20 ; tmp_g [ 20 ] = rtB . nvmxvdiax2 [ 0 ]
; tmp_g [ 21 ] = rtB . nvmxvdiax2 [ 1 ] ; tmp_g [ 22 ] = rtB . nvmxvdiax2 [ 2
] ; tmp_g [ 23 ] = rtB . nvmxvdiax2 [ 3 ] ; tmp_j [ 6 ] = 24 ; tmp_g [ 24 ] =
rtB . ar5quhe3n1 [ 0 ] ; tmp_g [ 25 ] = rtB . ar5quhe3n1 [ 1 ] ; tmp_g [ 26 ]
= rtB . ar5quhe3n1 [ 2 ] ; tmp_g [ 27 ] = rtB . ar5quhe3n1 [ 3 ] ; tmp_j [ 7
] = 28 ; tmp_g [ 28 ] = rtB . au2eumcmnw [ 0 ] ; tmp_g [ 29 ] = rtB .
au2eumcmnw [ 1 ] ; tmp_g [ 30 ] = rtB . au2eumcmnw [ 2 ] ; tmp_g [ 31 ] = rtB
. au2eumcmnw [ 3 ] ; tmp_j [ 8 ] = 32 ; tmp_g [ 32 ] = rtB . hwnqfegtgf [ 0 ]
; tmp_g [ 33 ] = rtB . hwnqfegtgf [ 1 ] ; tmp_g [ 34 ] = rtB . hwnqfegtgf [ 2
] ; tmp_g [ 35 ] = rtB . hwnqfegtgf [ 3 ] ; tmp_j [ 9 ] = 36 ; tmp_g [ 36 ] =
rtB . pzpf3nd3va [ 0 ] ; tmp_g [ 37 ] = rtB . pzpf3nd3va [ 1 ] ; tmp_g [ 38 ]
= rtB . pzpf3nd3va [ 2 ] ; tmp_g [ 39 ] = rtB . pzpf3nd3va [ 3 ] ; tmp_j [ 10
] = 40 ; tmp_g [ 40 ] = rtB . lcncbuna0k [ 0 ] ; tmp_g [ 41 ] = rtB .
lcncbuna0k [ 1 ] ; tmp_g [ 42 ] = rtB . lcncbuna0k [ 2 ] ; tmp_g [ 43 ] = rtB
. lcncbuna0k [ 3 ] ; tmp_j [ 11 ] = 44 ; tmp_g [ 44 ] = rtB . hstmkliglr [ 0
] ; tmp_g [ 45 ] = rtB . hstmkliglr [ 1 ] ; tmp_g [ 46 ] = rtB . hstmkliglr [
2 ] ; tmp_g [ 47 ] = rtB . hstmkliglr [ 3 ] ; tmp_j [ 12 ] = 48 ;
simulationData -> mData -> mInputValues . mN = 48 ; simulationData -> mData
-> mInputValues . mX = & tmp_g [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 13 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_j [ 0 ] ; simulationData -> mData -> mOutputs . mN = 36 ; simulationData
-> mData -> mOutputs . mX = & rtB . hhho25daxq [ 0 ] ; simulationData ->
mData -> mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX =
NULL ; simulationData -> mData -> mIsFundamentalSampleHit = false ;
simulationData -> mData -> mTolerances . mN = 0 ; simulationData -> mData ->
mTolerances . mX = NULL ; simulationData -> mData -> mCstateHasChanged =
false ; simulator = ( NeslSimulator * ) rtDW . hnxbpl1wx5 ; diagnosticManager
= ( NeuDiagnosticManager * ) rtDW . k0z433ri5i ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_e =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( tmp_e != 0 ) { first_output =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( first_output ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } if ( ssIsMajorTimeStep ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } simulationData = (
NeslSimulationData * ) rtDW . df4vdmnuwt ; time_i = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_i ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . bdwqisxww0 ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . anqxhpocun ;
first_output = false ; simulationData -> mData -> mFoundZcEvents =
first_output ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; first_output = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = first_output ; simulationData -> mData ->
mIsSolverCheckingCIC = false ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; simulationData -> mData -> mIsSolverRequestingReset = false ; tmp_c [
0 ] = 0 ; tmp_f [ 0 ] = rtB . ih22bf4bis [ 0 ] ; tmp_f [ 1 ] = rtB .
ih22bf4bis [ 1 ] ; tmp_f [ 2 ] = rtB . ih22bf4bis [ 2 ] ; tmp_f [ 3 ] = rtB .
ih22bf4bis [ 3 ] ; tmp_c [ 1 ] = 4 ; tmp_f [ 4 ] = rtB . ey2x1plpfc [ 0 ] ;
tmp_f [ 5 ] = rtB . ey2x1plpfc [ 1 ] ; tmp_f [ 6 ] = rtB . ey2x1plpfc [ 2 ] ;
tmp_f [ 7 ] = rtB . ey2x1plpfc [ 3 ] ; tmp_c [ 2 ] = 8 ; tmp_f [ 8 ] = rtB .
hiwi0ircf1 [ 0 ] ; tmp_f [ 9 ] = rtB . hiwi0ircf1 [ 1 ] ; tmp_f [ 10 ] = rtB
. hiwi0ircf1 [ 2 ] ; tmp_f [ 11 ] = rtB . hiwi0ircf1 [ 3 ] ; tmp_c [ 3 ] = 12
; tmp_f [ 12 ] = rtB . cyn5mhsbrs [ 0 ] ; tmp_f [ 13 ] = rtB . cyn5mhsbrs [ 1
] ; tmp_f [ 14 ] = rtB . cyn5mhsbrs [ 2 ] ; tmp_f [ 15 ] = rtB . cyn5mhsbrs [
3 ] ; tmp_c [ 4 ] = 16 ; tmp_f [ 16 ] = rtB . lkiqnu3azd [ 0 ] ; tmp_f [ 17 ]
= rtB . lkiqnu3azd [ 1 ] ; tmp_f [ 18 ] = rtB . lkiqnu3azd [ 2 ] ; tmp_f [ 19
] = rtB . lkiqnu3azd [ 3 ] ; tmp_c [ 5 ] = 20 ; tmp_f [ 20 ] = rtB .
nvmxvdiax2 [ 0 ] ; tmp_f [ 21 ] = rtB . nvmxvdiax2 [ 1 ] ; tmp_f [ 22 ] = rtB
. nvmxvdiax2 [ 2 ] ; tmp_f [ 23 ] = rtB . nvmxvdiax2 [ 3 ] ; tmp_c [ 6 ] = 24
; tmp_f [ 24 ] = rtB . ar5quhe3n1 [ 0 ] ; tmp_f [ 25 ] = rtB . ar5quhe3n1 [ 1
] ; tmp_f [ 26 ] = rtB . ar5quhe3n1 [ 2 ] ; tmp_f [ 27 ] = rtB . ar5quhe3n1 [
3 ] ; tmp_c [ 7 ] = 28 ; tmp_f [ 28 ] = rtB . au2eumcmnw [ 0 ] ; tmp_f [ 29 ]
= rtB . au2eumcmnw [ 1 ] ; tmp_f [ 30 ] = rtB . au2eumcmnw [ 2 ] ; tmp_f [ 31
] = rtB . au2eumcmnw [ 3 ] ; tmp_c [ 8 ] = 32 ; tmp_f [ 32 ] = rtB .
hwnqfegtgf [ 0 ] ; tmp_f [ 33 ] = rtB . hwnqfegtgf [ 1 ] ; tmp_f [ 34 ] = rtB
. hwnqfegtgf [ 2 ] ; tmp_f [ 35 ] = rtB . hwnqfegtgf [ 3 ] ; tmp_c [ 9 ] = 36
; tmp_f [ 36 ] = rtB . pzpf3nd3va [ 0 ] ; tmp_f [ 37 ] = rtB . pzpf3nd3va [ 1
] ; tmp_f [ 38 ] = rtB . pzpf3nd3va [ 2 ] ; tmp_f [ 39 ] = rtB . pzpf3nd3va [
3 ] ; tmp_c [ 10 ] = 40 ; tmp_f [ 40 ] = rtB . lcncbuna0k [ 0 ] ; tmp_f [ 41
] = rtB . lcncbuna0k [ 1 ] ; tmp_f [ 42 ] = rtB . lcncbuna0k [ 2 ] ; tmp_f [
43 ] = rtB . lcncbuna0k [ 3 ] ; tmp_c [ 11 ] = 44 ; tmp_f [ 44 ] = rtB .
hstmkliglr [ 0 ] ; tmp_f [ 45 ] = rtB . hstmkliglr [ 1 ] ; tmp_f [ 46 ] = rtB
. hstmkliglr [ 2 ] ; tmp_f [ 47 ] = rtB . hstmkliglr [ 3 ] ; tmp_c [ 12 ] =
48 ; memcpy ( & tmp_f [ 48 ] , & rtB . hhho25daxq [ 0 ] , 36U * sizeof (
real_T ) ) ; tmp_c [ 13 ] = 84 ; simulationData -> mData -> mInputValues . mN
= 84 ; simulationData -> mData -> mInputValues . mX = & tmp_f [ 0 ] ;
simulationData -> mData -> mInputOffsets . mN = 14 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_c [ 0 ] ; simulationData -> mData -> mOutputs .
mN = 18 ; simulationData -> mData -> mOutputs . mX = & rtB . b2caeksf4i [ 0 ]
; simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData
-> mSampleHits . mX = NULL ; simulationData -> mData ->
mIsFundamentalSampleHit = false ; simulationData -> mData -> mTolerances . mN
= 0 ; simulationData -> mData -> mTolerances . mX = NULL ; simulationData ->
mData -> mCstateHasChanged = false ; simulator = ( NeslSimulator * ) rtDW .
k22u2dj12d ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . modeusfujc
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_e = ne_simulator_method ( simulator ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( tmp_e != 0 ) {
first_output = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
first_output ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtB . jrljlnvocq [ 0 ]
= rtB . b2caeksf4i [ 0 ] ; rtB . jrljlnvocq [ 1 ] = 0.0 ; rtB . jrljlnvocq [
2 ] = 0.0 ; rtB . jrljlnvocq [ 3 ] = 0.0 ; rtB . b2bp1tloeo [ 0 ] = rtB .
b2caeksf4i [ 1 ] ; rtB . b2bp1tloeo [ 1 ] = 0.0 ; rtB . b2bp1tloeo [ 2 ] =
0.0 ; rtB . b2bp1tloeo [ 3 ] = 0.0 ; rtB . lmsabjovac [ 0 ] = rtB .
b2caeksf4i [ 2 ] ; rtB . lmsabjovac [ 1 ] = 0.0 ; rtB . lmsabjovac [ 2 ] =
0.0 ; rtB . lmsabjovac [ 3 ] = 0.0 ; rtB . n3klnoiklk [ 0 ] = rtB .
b2caeksf4i [ 3 ] ; rtB . n3klnoiklk [ 1 ] = 0.0 ; rtB . n3klnoiklk [ 2 ] =
0.0 ; rtB . n3klnoiklk [ 3 ] = 0.0 ; rtB . o01lkeuvd1 [ 0 ] = rtB .
b2caeksf4i [ 4 ] ; rtB . o01lkeuvd1 [ 1 ] = 0.0 ; rtB . o01lkeuvd1 [ 2 ] =
0.0 ; rtB . o01lkeuvd1 [ 3 ] = 0.0 ; rtB . ebfmf2wsfd [ 0 ] = rtB .
b2caeksf4i [ 5 ] ; rtB . ebfmf2wsfd [ 1 ] = 0.0 ; rtB . ebfmf2wsfd [ 2 ] =
0.0 ; rtB . ebfmf2wsfd [ 3 ] = 0.0 ; rtB . lvoipeofzz = rtP .
GAIN_Gain_lnpq3d2zgo * rtB . b2caeksf4i [ 7 ] ; rtB . nmoen0whma = rtP .
GAIN_Gain_ajv2eupdqg * rtB . b2caeksf4i [ 15 ] ; rtB . dbgszugdvs = rtP .
Gain_Gain_lqodkkl00f * rtB . nmoen0whma ; rtB . b0cqzuq31k = rtP .
Gain1_Gain_mcme34rskr * rtB . lvoipeofzz ; rtB . krc4jb2phm = rtP .
GAIN_Gain_bjo5gzmoax * rtB . b2caeksf4i [ 9 ] ; rtB . htvttv05oy = rtP .
Gain11_Gain * rtB . krc4jb2phm ; rtB . oj2z4dszqk = rtP .
GAIN_Gain_hhtmm14nxk * rtB . b2caeksf4i [ 13 ] ; rtB . kpiwt1usty = rtP .
Gain14_Gain * rtB . oj2z4dszqk ; rtB . onxt4mtv0n = rtP .
GAIN_Gain_kxzwwrg2ad * rtB . b2caeksf4i [ 11 ] ; rtB . pgmjibidt5 = rtP .
Gain17_Gain * rtB . onxt4mtv0n ; rtB . ofr3o5n2gr = rtP .
GAIN_Gain_pb2zwigstd * rtB . b2caeksf4i [ 17 ] ; rtB . i1yn4cbqfm = rtP .
Gain8_Gain * rtB . ofr3o5n2gr ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) {
NeslSimulationData * simulationData ; real_T time ; boolean_T tmp ; real_T
tmp_p [ 24 ] ; int_T tmp_e [ 7 ] ; NeslSimulator * simulator ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; int32_T tmp_i ; char * msg ; real_T time_p ; real_T tmp_m [ 48 ] ; int_T
tmp_g [ 13 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW . luet2gj5du = 0U
; rtDW . liczzslnug += rtP . Integrator_gainval * rtB . hwxfmqt0gr ; if (
rtDW . liczzslnug >= rtP . Integrator_UpperSat ) { rtDW . liczzslnug = rtP .
Integrator_UpperSat ; } else { if ( rtDW . liczzslnug <= rtP .
Integrator_LowerSat ) { rtDW . liczzslnug = rtP . Integrator_LowerSat ; } }
rtDW . ff1ypsbsry = ( int8_T ) rtB . mvayvdtnfm ; } simulationData = (
NeslSimulationData * ) rtDW . eezcqf5nt4 ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 24 ;
simulationData -> mData -> mContStates . mX = & rtX . anlkrx3tc2 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . ocr2gtrnaz ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
iezvtdo4zq ; tmp = false ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; simulationData ->
mData -> mIsSolverCheckingCIC = false ; tmp = ssIsSolverComputingJacobian (
rtS ) ; simulationData -> mData -> mIsComputingJacobian = tmp ;
simulationData -> mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian (
rtS ) != 0 ) ; simulationData -> mData -> mIsSolverRequestingReset = false ;
tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB . jrljlnvocq [ 0 ] ; tmp_p [ 1 ] = rtB .
jrljlnvocq [ 1 ] ; tmp_p [ 2 ] = rtB . jrljlnvocq [ 2 ] ; tmp_p [ 3 ] = rtB .
jrljlnvocq [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . b2bp1tloeo [ 0 ] ;
tmp_p [ 5 ] = rtB . b2bp1tloeo [ 1 ] ; tmp_p [ 6 ] = rtB . b2bp1tloeo [ 2 ] ;
tmp_p [ 7 ] = rtB . b2bp1tloeo [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB .
lmsabjovac [ 0 ] ; tmp_p [ 9 ] = rtB . lmsabjovac [ 1 ] ; tmp_p [ 10 ] = rtB
. lmsabjovac [ 2 ] ; tmp_p [ 11 ] = rtB . lmsabjovac [ 3 ] ; tmp_e [ 3 ] = 12
; tmp_p [ 12 ] = rtB . n3klnoiklk [ 0 ] ; tmp_p [ 13 ] = rtB . n3klnoiklk [ 1
] ; tmp_p [ 14 ] = rtB . n3klnoiklk [ 2 ] ; tmp_p [ 15 ] = rtB . n3klnoiklk [
3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] = rtB . o01lkeuvd1 [ 0 ] ; tmp_p [ 17 ]
= rtB . o01lkeuvd1 [ 1 ] ; tmp_p [ 18 ] = rtB . o01lkeuvd1 [ 2 ] ; tmp_p [ 19
] = rtB . o01lkeuvd1 [ 3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] = rtB .
ebfmf2wsfd [ 0 ] ; tmp_p [ 21 ] = rtB . ebfmf2wsfd [ 1 ] ; tmp_p [ 22 ] = rtB
. ebfmf2wsfd [ 2 ] ; tmp_p [ 23 ] = rtB . ebfmf2wsfd [ 3 ] ; tmp_e [ 6 ] = 24
; simulationData -> mData -> mInputValues . mN = 24 ; simulationData -> mData
-> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 7 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; simulator = ( NeslSimulator * ) rtDW . pcl5k34iwh ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . b2efndbc2b ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( simulator , NESL_SIM_UPDATE ,
simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW . hbalfb24dh += rtP .
Filter_gainval * rtB . fmehcowgyi ; rtDW . mcqxnh5qer += rtP .
Integrator_gainval_npglpy4vwg * rtB . dqauotsnvc ; rtDW . dypi3mxxdf = 0U ;
rtDW . hri0uk1gw2 += rtP . Integrator_gainval_o3lqevhiv0 * rtB . gwv4jfdhm1 ;
if ( rtDW . hri0uk1gw2 >= rtP . Integrator_UpperSat_lfmj5hqb2j ) { rtDW .
hri0uk1gw2 = rtP . Integrator_UpperSat_lfmj5hqb2j ; } else { if ( rtDW .
hri0uk1gw2 <= rtP . Integrator_LowerSat_k5sgxqrrjs ) { rtDW . hri0uk1gw2 =
rtP . Integrator_LowerSat_k5sgxqrrjs ; } } rtDW . amkot2yy4d = ( int8_T ) rtB
. dfulmqk4uv ; rtDW . bwjx1snxyl += rtP . Filter_gainval_ep02h3uqne * rtB .
h0nm5jgafs ; rtDW . mfo0ooprpe += rtP . Integrator_gainval_fkgi2urzne * rtB .
ilet4fenmw ; rtDW . n4syeszzv5 = 0U ; rtDW . c1jwwx42fx += rtP .
Integrator_gainval_m2kwfrohvf * rtB . gw1dmadrpe ; if ( rtDW . c1jwwx42fx >=
rtP . Integrator_UpperSat_mkchvcaeor ) { rtDW . c1jwwx42fx = rtP .
Integrator_UpperSat_mkchvcaeor ; } else { if ( rtDW . c1jwwx42fx <= rtP .
Integrator_LowerSat_al00fjl4v2 ) { rtDW . c1jwwx42fx = rtP .
Integrator_LowerSat_al00fjl4v2 ; } } rtDW . cwebk52hxz = ( int8_T ) rtB .
kbuzw5x2iq ; rtDW . mhha3stacp += rtP . Filter_gainval_jzpusmtczf * rtB .
iqpo2uomij ; rtDW . lx1kthg2ak += rtP . Integrator_gainval_ni1bbseuao * rtB .
frxbxzmcnw ; rtDW . n21ig4q2la = 0U ; rtDW . bsqva4pohk += rtP .
Integrator_gainval_axbx4gdp5p * rtB . mvgpkg11eh ; if ( rtDW . bsqva4pohk >=
rtP . Integrator_UpperSat_bysv0peofj ) { rtDW . bsqva4pohk = rtP .
Integrator_UpperSat_bysv0peofj ; } else { if ( rtDW . bsqva4pohk <= rtP .
Integrator_LowerSat_cxf0fnk0y4 ) { rtDW . bsqva4pohk = rtP .
Integrator_LowerSat_cxf0fnk0y4 ; } } rtDW . awuv0zqvac = ( int8_T ) rtB .
b2kt2bq2rg ; rtDW . lpwasbckyz += rtP . Filter_gainval_o0axdf1zsd * rtB .
idhpkfnk0a ; rtDW . d4ohqbhzps += rtP . Integrator_gainval_aawupoadui * rtB .
l4bvwu01j3 ; rtDW . f1fl5shvqt = 0U ; rtDW . bfnpjdpcts += rtP .
Integrator_gainval_lxv2frdbtv * rtB . mv3uo5px30 ; if ( rtDW . bfnpjdpcts >=
rtP . Integrator_UpperSat_cwwfgeyo4e ) { rtDW . bfnpjdpcts = rtP .
Integrator_UpperSat_cwwfgeyo4e ; } else { if ( rtDW . bfnpjdpcts <= rtP .
Integrator_LowerSat_gjgwydu10i ) { rtDW . bfnpjdpcts = rtP .
Integrator_LowerSat_gjgwydu10i ; } } rtDW . jrc3tboejv = ( int8_T ) rtB .
jrzojgf3va ; rtDW . bjypbkgsog += rtP . Filter_gainval_djvq3m5rlx * rtB .
bb2tvjwhg5 ; rtDW . d0kf2aazrh += rtP . Integrator_gainval_mmczkrctnd * rtB .
h0svs1rpby ; rtDW . ptqdowofkz = 0U ; rtDW . al0mzj21sg += rtP .
Integrator_gainval_eohgzrg3vd * rtB . pq0iqevv0y ; if ( rtDW . al0mzj21sg >=
rtP . Integrator_UpperSat_ebd22dx1d1 ) { rtDW . al0mzj21sg = rtP .
Integrator_UpperSat_ebd22dx1d1 ; } else { if ( rtDW . al0mzj21sg <= rtP .
Integrator_LowerSat_h5qrw1zwan ) { rtDW . al0mzj21sg = rtP .
Integrator_LowerSat_h5qrw1zwan ; } } rtDW . kqwhwvmbo5 = ( int8_T ) rtB .
pcez2gw042 ; rtDW . ou3top1ox4 += rtP . Filter_gainval_azvm5wbpik * rtB .
fftrdajetv ; rtDW . mmsgagixgx += rtP . Integrator_gainval_jrxbs0ybil * rtB .
e5v2koad5v ; rtDW . lfyvvh0sv5 = 0U ; rtDW . c33j3xhn2h += rtP .
Integrator_gainval_h3xna5sfll * rtB . d4il4jbr1v ; if ( rtDW . c33j3xhn2h >=
rtP . Integrator_UpperSat_hxosttrbn1 ) { rtDW . c33j3xhn2h = rtP .
Integrator_UpperSat_hxosttrbn1 ; } else { if ( rtDW . c33j3xhn2h <= rtP .
Integrator_LowerSat_njt0zyqb4b ) { rtDW . c33j3xhn2h = rtP .
Integrator_LowerSat_njt0zyqb4b ; } } rtDW . gcr0no5gxx = ( int8_T ) rtB .
ffpw4qlmce ; rtDW . nhkrizpina += rtP . Integrator_gainval_otmviw4jih * rtB .
aaezvyca1i ; rtDW . iyvntabvlz = 0U ; rtDW . bgfsqdlzb2 += rtP .
Integrator_gainval_g1pivvolan * rtB . obw1lciifs ; if ( rtDW . bgfsqdlzb2 >=
rtP . Integrator_UpperSat_pfwih5q0ig ) { rtDW . bgfsqdlzb2 = rtP .
Integrator_UpperSat_pfwih5q0ig ; } else { if ( rtDW . bgfsqdlzb2 <= rtP .
Integrator_LowerSat_pbd52ykhos ) { rtDW . bgfsqdlzb2 = rtP .
Integrator_LowerSat_pbd52ykhos ; } } rtDW . dnpgzoukr4 = ( int8_T ) rtB .
dpejr15fy5 ; rtDW . prb2fus1cf += rtP . Integrator_gainval_mgqsdlg1p3 * rtB .
mekozqjtbe ; rtDW . azfc3wig1a = 0U ; rtDW . oc01bukxc2 += rtP .
Integrator_gainval_m0oovljwbz * rtB . ew1rj0v0ip ; if ( rtDW . oc01bukxc2 >=
rtP . Integrator_UpperSat_edcqyime1g ) { rtDW . oc01bukxc2 = rtP .
Integrator_UpperSat_edcqyime1g ; } else { if ( rtDW . oc01bukxc2 <= rtP .
Integrator_LowerSat_kapqoyjcmn ) { rtDW . oc01bukxc2 = rtP .
Integrator_LowerSat_kapqoyjcmn ; } } rtDW . dcszolnjqw = ( int8_T ) rtB .
ezdth4z4el ; rtDW . d1olc5hqid += rtP . Integrator_gainval_ml0fjnpxz3 * rtB .
omdgfacbza ; rtDW . pnmnijewrm = 0U ; rtDW . ituhf3b0wr += rtP .
Integrator_gainval_enyfdvqy5k * rtB . grxgbhmppu ; if ( rtDW . ituhf3b0wr >=
rtP . Integrator_UpperSat_lkw0yc02po ) { rtDW . ituhf3b0wr = rtP .
Integrator_UpperSat_lkw0yc02po ; } else { if ( rtDW . ituhf3b0wr <= rtP .
Integrator_LowerSat_indtf15swa ) { rtDW . ituhf3b0wr = rtP .
Integrator_LowerSat_indtf15swa ; } } rtDW . asudwslg1u = ( int8_T ) rtB .
pj2cosrmgv ; rtDW . k3i3dxp2ad += rtP . Integrator_gainval_kekw1rm401 * rtB .
o4wxrlodfy ; rtDW . eumkre2nza = 0U ; rtDW . bpulvyc40u += rtP .
Integrator_gainval_o2js2uvnfz * rtB . lc3qdiuf3t ; if ( rtDW . bpulvyc40u >=
rtP . Integrator_UpperSat_lfd3uwwmqw ) { rtDW . bpulvyc40u = rtP .
Integrator_UpperSat_lfd3uwwmqw ; } else { if ( rtDW . bpulvyc40u <= rtP .
Integrator_LowerSat_ix4wayzgyy ) { rtDW . bpulvyc40u = rtP .
Integrator_LowerSat_ix4wayzgyy ; } } rtDW . ks2knrfwk4 = ( int8_T ) rtB .
psxp5i3lg4 ; rtDW . e4gpd3p5q1 += rtP . Integrator_gainval_lbry4slowr * rtB .
ou1hxpsbtc ; rtDW . fce4agh0zo = 0U ; rtDW . iwb0eino0x += rtP .
Integrator_gainval_i4ujstbkuh * rtB . fwqrljkgl5 ; if ( rtDW . iwb0eino0x >=
rtP . Integrator_UpperSat_gjz1pvjay2 ) { rtDW . iwb0eino0x = rtP .
Integrator_UpperSat_gjz1pvjay2 ; } else { if ( rtDW . iwb0eino0x <= rtP .
Integrator_LowerSat_hwnksdfkmv ) { rtDW . iwb0eino0x = rtP .
Integrator_LowerSat_hwnksdfkmv ; } } rtDW . lv2aww432q = ( int8_T ) rtB .
aw5fczldrp ; rtDW . o253susvy3 += rtP . Integrator_gainval_m1aaboyqi5 * rtB .
bipz2gs2vb ; } simulationData = ( NeslSimulationData * ) rtDW . izfvfuof1b ;
time_p = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_p ; simulationData -> mData ->
mContStates . mN = 30 ; simulationData -> mData -> mContStates . mX = & rtX .
fdlxnailwx [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . i1v2wl3m4b ;
simulationData -> mData -> mModeVector . mN = 6 ; simulationData -> mData ->
mModeVector . mX = & rtDW . puciepvfhp [ 0 ] ; tmp = false ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; simulationData -> mData -> mIsSolverCheckingCIC
= false ; tmp = ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData
-> mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 =
( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; simulationData -> mData ->
mIsSolverRequestingReset = false ; tmp_g [ 0 ] = 0 ; tmp_m [ 0 ] = rtB .
ih22bf4bis [ 0 ] ; tmp_m [ 1 ] = rtB . ih22bf4bis [ 1 ] ; tmp_m [ 2 ] = rtB .
ih22bf4bis [ 2 ] ; tmp_m [ 3 ] = rtB . ih22bf4bis [ 3 ] ; tmp_g [ 1 ] = 4 ;
tmp_m [ 4 ] = rtB . ey2x1plpfc [ 0 ] ; tmp_m [ 5 ] = rtB . ey2x1plpfc [ 1 ] ;
tmp_m [ 6 ] = rtB . ey2x1plpfc [ 2 ] ; tmp_m [ 7 ] = rtB . ey2x1plpfc [ 3 ] ;
tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB . hiwi0ircf1 [ 0 ] ; tmp_m [ 9 ] = rtB .
hiwi0ircf1 [ 1 ] ; tmp_m [ 10 ] = rtB . hiwi0ircf1 [ 2 ] ; tmp_m [ 11 ] = rtB
. hiwi0ircf1 [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] = rtB . cyn5mhsbrs [ 0 ]
; tmp_m [ 13 ] = rtB . cyn5mhsbrs [ 1 ] ; tmp_m [ 14 ] = rtB . cyn5mhsbrs [ 2
] ; tmp_m [ 15 ] = rtB . cyn5mhsbrs [ 3 ] ; tmp_g [ 4 ] = 16 ; tmp_m [ 16 ] =
rtB . lkiqnu3azd [ 0 ] ; tmp_m [ 17 ] = rtB . lkiqnu3azd [ 1 ] ; tmp_m [ 18 ]
= rtB . lkiqnu3azd [ 2 ] ; tmp_m [ 19 ] = rtB . lkiqnu3azd [ 3 ] ; tmp_g [ 5
] = 20 ; tmp_m [ 20 ] = rtB . nvmxvdiax2 [ 0 ] ; tmp_m [ 21 ] = rtB .
nvmxvdiax2 [ 1 ] ; tmp_m [ 22 ] = rtB . nvmxvdiax2 [ 2 ] ; tmp_m [ 23 ] = rtB
. nvmxvdiax2 [ 3 ] ; tmp_g [ 6 ] = 24 ; tmp_m [ 24 ] = rtB . ar5quhe3n1 [ 0 ]
; tmp_m [ 25 ] = rtB . ar5quhe3n1 [ 1 ] ; tmp_m [ 26 ] = rtB . ar5quhe3n1 [ 2
] ; tmp_m [ 27 ] = rtB . ar5quhe3n1 [ 3 ] ; tmp_g [ 7 ] = 28 ; tmp_m [ 28 ] =
rtB . au2eumcmnw [ 0 ] ; tmp_m [ 29 ] = rtB . au2eumcmnw [ 1 ] ; tmp_m [ 30 ]
= rtB . au2eumcmnw [ 2 ] ; tmp_m [ 31 ] = rtB . au2eumcmnw [ 3 ] ; tmp_g [ 8
] = 32 ; tmp_m [ 32 ] = rtB . hwnqfegtgf [ 0 ] ; tmp_m [ 33 ] = rtB .
hwnqfegtgf [ 1 ] ; tmp_m [ 34 ] = rtB . hwnqfegtgf [ 2 ] ; tmp_m [ 35 ] = rtB
. hwnqfegtgf [ 3 ] ; tmp_g [ 9 ] = 36 ; tmp_m [ 36 ] = rtB . pzpf3nd3va [ 0 ]
; tmp_m [ 37 ] = rtB . pzpf3nd3va [ 1 ] ; tmp_m [ 38 ] = rtB . pzpf3nd3va [ 2
] ; tmp_m [ 39 ] = rtB . pzpf3nd3va [ 3 ] ; tmp_g [ 10 ] = 40 ; tmp_m [ 40 ]
= rtB . lcncbuna0k [ 0 ] ; tmp_m [ 41 ] = rtB . lcncbuna0k [ 1 ] ; tmp_m [ 42
] = rtB . lcncbuna0k [ 2 ] ; tmp_m [ 43 ] = rtB . lcncbuna0k [ 3 ] ; tmp_g [
11 ] = 44 ; tmp_m [ 44 ] = rtB . hstmkliglr [ 0 ] ; tmp_m [ 45 ] = rtB .
hstmkliglr [ 1 ] ; tmp_m [ 46 ] = rtB . hstmkliglr [ 2 ] ; tmp_m [ 47 ] = rtB
. hstmkliglr [ 3 ] ; tmp_g [ 12 ] = 48 ; simulationData -> mData ->
mInputValues . mN = 48 ; simulationData -> mData -> mInputValues . mX = &
tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 13 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ; simulator = (
NeslSimulator * ) rtDW . hnxbpl1wx5 ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . k0z433ri5i ; diagnosticTree =
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
rtDW . eezcqf5nt4 ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime
. mN = 1 ; simulationData -> mData -> mTime . mX = & time ; simulationData ->
mData -> mContStates . mN = 24 ; simulationData -> mData -> mContStates . mX
= & rtX . anlkrx3tc2 [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0
; simulationData -> mData -> mDiscStates . mX = & rtDW . ocr2gtrnaz ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . iezvtdo4zq ; tmp = false ; simulationData ->
mData -> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; simulationData -> mData -> mIsSolverCheckingCIC = false ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; simulationData -> mData ->
mIsSolverRequestingReset = false ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
jrljlnvocq [ 0 ] ; tmp_p [ 1 ] = rtB . jrljlnvocq [ 1 ] ; tmp_p [ 2 ] = rtB .
jrljlnvocq [ 2 ] ; tmp_p [ 3 ] = rtB . jrljlnvocq [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . b2bp1tloeo [ 0 ] ; tmp_p [ 5 ] = rtB . b2bp1tloeo [ 1 ] ;
tmp_p [ 6 ] = rtB . b2bp1tloeo [ 2 ] ; tmp_p [ 7 ] = rtB . b2bp1tloeo [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . lmsabjovac [ 0 ] ; tmp_p [ 9 ] = rtB .
lmsabjovac [ 1 ] ; tmp_p [ 10 ] = rtB . lmsabjovac [ 2 ] ; tmp_p [ 11 ] = rtB
. lmsabjovac [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . n3klnoiklk [ 0 ]
; tmp_p [ 13 ] = rtB . n3klnoiklk [ 1 ] ; tmp_p [ 14 ] = rtB . n3klnoiklk [ 2
] ; tmp_p [ 15 ] = rtB . n3klnoiklk [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . o01lkeuvd1 [ 0 ] ; tmp_p [ 17 ] = rtB . o01lkeuvd1 [ 1 ] ; tmp_p [ 18 ]
= rtB . o01lkeuvd1 [ 2 ] ; tmp_p [ 19 ] = rtB . o01lkeuvd1 [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . ebfmf2wsfd [ 0 ] ; tmp_p [ 21 ] = rtB .
ebfmf2wsfd [ 1 ] ; tmp_p [ 22 ] = rtB . ebfmf2wsfd [ 2 ] ; tmp_p [ 23 ] = rtB
. ebfmf2wsfd [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 24 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> anlkrx3tc2 [ 0 ] ; simulator = ( NeslSimulator * ) rtDW .
pcl5k34iwh ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . b2efndbc2b
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( simulator ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } _rtXdot -> n212yfmu3n = ( rtB . md32vri2gx [ 1 ] - rtX . n212yfmu3n ) *
1000.0 ; _rtXdot -> mm14y0qob4 = ( rtB . md32vri2gx [ 3 ] - rtX . mm14y0qob4
) * 1000.0 ; _rtXdot -> nyhtwgatpw = ( rtB . md32vri2gx [ 5 ] - rtX .
nyhtwgatpw ) * 1000.0 ; _rtXdot -> aunhsozkjd = ( rtB . md32vri2gx [ 7 ] -
rtX . aunhsozkjd ) * 1000.0 ; _rtXdot -> bpjbkl34c1 = ( rtB . md32vri2gx [ 9
] - rtX . bpjbkl34c1 ) * 1000.0 ; _rtXdot -> lm0fxpm1n1 = ( rtB . md32vri2gx
[ 11 ] - rtX . lm0fxpm1n1 ) * 1000.0 ; _rtXdot -> opt4eui41m [ 0 ] = rtX .
opt4eui41m [ 1 ] ; _rtXdot -> opt4eui41m [ 1 ] = ( ( rtDW . ml2zc01qz1 - rtX
. opt4eui41m [ 0 ] ) * 1000.0 - 2.0 * rtX . opt4eui41m [ 1 ] ) * 1000.0 ;
_rtXdot -> msharprh4q [ 0 ] = rtX . msharprh4q [ 1 ] ; _rtXdot -> msharprh4q
[ 1 ] = ( ( rtDW . fnn2jlfmi3 - rtX . msharprh4q [ 0 ] ) * 1000.0 - 2.0 * rtX
. msharprh4q [ 1 ] ) * 1000.0 ; _rtXdot -> cnf2gqarr4 [ 0 ] = rtX .
cnf2gqarr4 [ 1 ] ; _rtXdot -> cnf2gqarr4 [ 1 ] = ( ( rtDW . fox2nnpevw - rtX
. cnf2gqarr4 [ 0 ] ) * 1000.0 - 2.0 * rtX . cnf2gqarr4 [ 1 ] ) * 1000.0 ;
_rtXdot -> dopllilgmw [ 0 ] = rtX . dopllilgmw [ 1 ] ; _rtXdot -> dopllilgmw
[ 1 ] = ( ( rtDW . kswjrqpbnd - rtX . dopllilgmw [ 0 ] ) * 1000.0 - 2.0 * rtX
. dopllilgmw [ 1 ] ) * 1000.0 ; _rtXdot -> j2t2fcuhnz [ 0 ] = rtX .
j2t2fcuhnz [ 1 ] ; _rtXdot -> j2t2fcuhnz [ 1 ] = ( ( rtDW . gwlc5gste3 - rtX
. j2t2fcuhnz [ 0 ] ) * 1000.0 - 2.0 * rtX . j2t2fcuhnz [ 1 ] ) * 1000.0 ;
_rtXdot -> eyfhribqoa [ 0 ] = rtX . eyfhribqoa [ 1 ] ; _rtXdot -> eyfhribqoa
[ 1 ] = ( ( rtDW . oem5mgthn3 - rtX . eyfhribqoa [ 0 ] ) * 1000.0 - 2.0 * rtX
. eyfhribqoa [ 1 ] ) * 1000.0 ; simulationData = ( NeslSimulationData * )
rtDW . izfvfuof1b ; time_p = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_p ;
simulationData -> mData -> mContStates . mN = 30 ; simulationData -> mData ->
mContStates . mX = & rtX . fdlxnailwx [ 0 ] ; simulationData -> mData ->
mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = & rtDW .
i1v2wl3m4b ; simulationData -> mData -> mModeVector . mN = 6 ; simulationData
-> mData -> mModeVector . mX = & rtDW . puciepvfhp [ 0 ] ; tmp = false ;
simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; simulationData -> mData -> mIsSolverCheckingCIC
= false ; tmp = ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData
-> mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 =
( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; simulationData -> mData ->
mIsSolverRequestingReset = false ; tmp_g [ 0 ] = 0 ; tmp_m [ 0 ] = rtB .
ih22bf4bis [ 0 ] ; tmp_m [ 1 ] = rtB . ih22bf4bis [ 1 ] ; tmp_m [ 2 ] = rtB .
ih22bf4bis [ 2 ] ; tmp_m [ 3 ] = rtB . ih22bf4bis [ 3 ] ; tmp_g [ 1 ] = 4 ;
tmp_m [ 4 ] = rtB . ey2x1plpfc [ 0 ] ; tmp_m [ 5 ] = rtB . ey2x1plpfc [ 1 ] ;
tmp_m [ 6 ] = rtB . ey2x1plpfc [ 2 ] ; tmp_m [ 7 ] = rtB . ey2x1plpfc [ 3 ] ;
tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB . hiwi0ircf1 [ 0 ] ; tmp_m [ 9 ] = rtB .
hiwi0ircf1 [ 1 ] ; tmp_m [ 10 ] = rtB . hiwi0ircf1 [ 2 ] ; tmp_m [ 11 ] = rtB
. hiwi0ircf1 [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] = rtB . cyn5mhsbrs [ 0 ]
; tmp_m [ 13 ] = rtB . cyn5mhsbrs [ 1 ] ; tmp_m [ 14 ] = rtB . cyn5mhsbrs [ 2
] ; tmp_m [ 15 ] = rtB . cyn5mhsbrs [ 3 ] ; tmp_g [ 4 ] = 16 ; tmp_m [ 16 ] =
rtB . lkiqnu3azd [ 0 ] ; tmp_m [ 17 ] = rtB . lkiqnu3azd [ 1 ] ; tmp_m [ 18 ]
= rtB . lkiqnu3azd [ 2 ] ; tmp_m [ 19 ] = rtB . lkiqnu3azd [ 3 ] ; tmp_g [ 5
] = 20 ; tmp_m [ 20 ] = rtB . nvmxvdiax2 [ 0 ] ; tmp_m [ 21 ] = rtB .
nvmxvdiax2 [ 1 ] ; tmp_m [ 22 ] = rtB . nvmxvdiax2 [ 2 ] ; tmp_m [ 23 ] = rtB
. nvmxvdiax2 [ 3 ] ; tmp_g [ 6 ] = 24 ; tmp_m [ 24 ] = rtB . ar5quhe3n1 [ 0 ]
; tmp_m [ 25 ] = rtB . ar5quhe3n1 [ 1 ] ; tmp_m [ 26 ] = rtB . ar5quhe3n1 [ 2
] ; tmp_m [ 27 ] = rtB . ar5quhe3n1 [ 3 ] ; tmp_g [ 7 ] = 28 ; tmp_m [ 28 ] =
rtB . au2eumcmnw [ 0 ] ; tmp_m [ 29 ] = rtB . au2eumcmnw [ 1 ] ; tmp_m [ 30 ]
= rtB . au2eumcmnw [ 2 ] ; tmp_m [ 31 ] = rtB . au2eumcmnw [ 3 ] ; tmp_g [ 8
] = 32 ; tmp_m [ 32 ] = rtB . hwnqfegtgf [ 0 ] ; tmp_m [ 33 ] = rtB .
hwnqfegtgf [ 1 ] ; tmp_m [ 34 ] = rtB . hwnqfegtgf [ 2 ] ; tmp_m [ 35 ] = rtB
. hwnqfegtgf [ 3 ] ; tmp_g [ 9 ] = 36 ; tmp_m [ 36 ] = rtB . pzpf3nd3va [ 0 ]
; tmp_m [ 37 ] = rtB . pzpf3nd3va [ 1 ] ; tmp_m [ 38 ] = rtB . pzpf3nd3va [ 2
] ; tmp_m [ 39 ] = rtB . pzpf3nd3va [ 3 ] ; tmp_g [ 10 ] = 40 ; tmp_m [ 40 ]
= rtB . lcncbuna0k [ 0 ] ; tmp_m [ 41 ] = rtB . lcncbuna0k [ 1 ] ; tmp_m [ 42
] = rtB . lcncbuna0k [ 2 ] ; tmp_m [ 43 ] = rtB . lcncbuna0k [ 3 ] ; tmp_g [
11 ] = 44 ; tmp_m [ 44 ] = rtB . hstmkliglr [ 0 ] ; tmp_m [ 45 ] = rtB .
hstmkliglr [ 1 ] ; tmp_m [ 46 ] = rtB . hstmkliglr [ 2 ] ; tmp_m [ 47 ] = rtB
. hstmkliglr [ 3 ] ; tmp_g [ 12 ] = 48 ; simulationData -> mData ->
mInputValues . mN = 48 ; simulationData -> mData -> mInputValues . mX = &
tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 13 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
simulationData -> mData -> mDx . mN = 30 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> fdlxnailwx [ 0 ] ; simulator = ( NeslSimulator * ) rtDW .
hnxbpl1wx5 ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . k0z433ri5i
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
NeslSimulationData * ) rtDW . eezcqf5nt4 ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 24 ;
simulationData -> mData -> mContStates . mX = & rtX . anlkrx3tc2 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . ocr2gtrnaz ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
iezvtdo4zq ; tmp = false ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; simulationData ->
mData -> mIsSolverCheckingCIC = false ; tmp = ssIsSolverComputingJacobian (
rtS ) ; simulationData -> mData -> mIsComputingJacobian = tmp ;
simulationData -> mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian (
rtS ) != 0 ) ; simulationData -> mData -> mIsSolverRequestingReset = false ;
tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB . jrljlnvocq [ 0 ] ; tmp_p [ 1 ] = rtB .
jrljlnvocq [ 1 ] ; tmp_p [ 2 ] = rtB . jrljlnvocq [ 2 ] ; tmp_p [ 3 ] = rtB .
jrljlnvocq [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . b2bp1tloeo [ 0 ] ;
tmp_p [ 5 ] = rtB . b2bp1tloeo [ 1 ] ; tmp_p [ 6 ] = rtB . b2bp1tloeo [ 2 ] ;
tmp_p [ 7 ] = rtB . b2bp1tloeo [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB .
lmsabjovac [ 0 ] ; tmp_p [ 9 ] = rtB . lmsabjovac [ 1 ] ; tmp_p [ 10 ] = rtB
. lmsabjovac [ 2 ] ; tmp_p [ 11 ] = rtB . lmsabjovac [ 3 ] ; tmp_e [ 3 ] = 12
; tmp_p [ 12 ] = rtB . n3klnoiklk [ 0 ] ; tmp_p [ 13 ] = rtB . n3klnoiklk [ 1
] ; tmp_p [ 14 ] = rtB . n3klnoiklk [ 2 ] ; tmp_p [ 15 ] = rtB . n3klnoiklk [
3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] = rtB . o01lkeuvd1 [ 0 ] ; tmp_p [ 17 ]
= rtB . o01lkeuvd1 [ 1 ] ; tmp_p [ 18 ] = rtB . o01lkeuvd1 [ 2 ] ; tmp_p [ 19
] = rtB . o01lkeuvd1 [ 3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] = rtB .
ebfmf2wsfd [ 0 ] ; tmp_p [ 21 ] = rtB . ebfmf2wsfd [ 1 ] ; tmp_p [ 22 ] = rtB
. ebfmf2wsfd [ 2 ] ; tmp_p [ 23 ] = rtB . ebfmf2wsfd [ 3 ] ; tmp_e [ 6 ] = 24
; simulationData -> mData -> mInputValues . mN = 24 ; simulationData -> mData
-> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 7 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; simulator = ( NeslSimulator * ) rtDW . pcl5k34iwh ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . b2efndbc2b ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( simulator , NESL_SIM_PROJECTION ,
simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . izfvfuof1b ; time_p = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_p ; simulationData -> mData -> mContStates . mN = 30 ;
simulationData -> mData -> mContStates . mX = & rtX . fdlxnailwx [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . i1v2wl3m4b ; simulationData -> mData ->
mModeVector . mN = 6 ; simulationData -> mData -> mModeVector . mX = & rtDW .
puciepvfhp [ 0 ] ; tmp = false ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; simulationData ->
mData -> mIsSolverCheckingCIC = false ; tmp = ssIsSolverComputingJacobian (
rtS ) ; simulationData -> mData -> mIsComputingJacobian = tmp ;
simulationData -> mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian (
rtS ) != 0 ) ; simulationData -> mData -> mIsSolverRequestingReset = false ;
tmp_g [ 0 ] = 0 ; tmp_m [ 0 ] = rtB . ih22bf4bis [ 0 ] ; tmp_m [ 1 ] = rtB .
ih22bf4bis [ 1 ] ; tmp_m [ 2 ] = rtB . ih22bf4bis [ 2 ] ; tmp_m [ 3 ] = rtB .
ih22bf4bis [ 3 ] ; tmp_g [ 1 ] = 4 ; tmp_m [ 4 ] = rtB . ey2x1plpfc [ 0 ] ;
tmp_m [ 5 ] = rtB . ey2x1plpfc [ 1 ] ; tmp_m [ 6 ] = rtB . ey2x1plpfc [ 2 ] ;
tmp_m [ 7 ] = rtB . ey2x1plpfc [ 3 ] ; tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB .
hiwi0ircf1 [ 0 ] ; tmp_m [ 9 ] = rtB . hiwi0ircf1 [ 1 ] ; tmp_m [ 10 ] = rtB
. hiwi0ircf1 [ 2 ] ; tmp_m [ 11 ] = rtB . hiwi0ircf1 [ 3 ] ; tmp_g [ 3 ] = 12
; tmp_m [ 12 ] = rtB . cyn5mhsbrs [ 0 ] ; tmp_m [ 13 ] = rtB . cyn5mhsbrs [ 1
] ; tmp_m [ 14 ] = rtB . cyn5mhsbrs [ 2 ] ; tmp_m [ 15 ] = rtB . cyn5mhsbrs [
3 ] ; tmp_g [ 4 ] = 16 ; tmp_m [ 16 ] = rtB . lkiqnu3azd [ 0 ] ; tmp_m [ 17 ]
= rtB . lkiqnu3azd [ 1 ] ; tmp_m [ 18 ] = rtB . lkiqnu3azd [ 2 ] ; tmp_m [ 19
] = rtB . lkiqnu3azd [ 3 ] ; tmp_g [ 5 ] = 20 ; tmp_m [ 20 ] = rtB .
nvmxvdiax2 [ 0 ] ; tmp_m [ 21 ] = rtB . nvmxvdiax2 [ 1 ] ; tmp_m [ 22 ] = rtB
. nvmxvdiax2 [ 2 ] ; tmp_m [ 23 ] = rtB . nvmxvdiax2 [ 3 ] ; tmp_g [ 6 ] = 24
; tmp_m [ 24 ] = rtB . ar5quhe3n1 [ 0 ] ; tmp_m [ 25 ] = rtB . ar5quhe3n1 [ 1
] ; tmp_m [ 26 ] = rtB . ar5quhe3n1 [ 2 ] ; tmp_m [ 27 ] = rtB . ar5quhe3n1 [
3 ] ; tmp_g [ 7 ] = 28 ; tmp_m [ 28 ] = rtB . au2eumcmnw [ 0 ] ; tmp_m [ 29 ]
= rtB . au2eumcmnw [ 1 ] ; tmp_m [ 30 ] = rtB . au2eumcmnw [ 2 ] ; tmp_m [ 31
] = rtB . au2eumcmnw [ 3 ] ; tmp_g [ 8 ] = 32 ; tmp_m [ 32 ] = rtB .
hwnqfegtgf [ 0 ] ; tmp_m [ 33 ] = rtB . hwnqfegtgf [ 1 ] ; tmp_m [ 34 ] = rtB
. hwnqfegtgf [ 2 ] ; tmp_m [ 35 ] = rtB . hwnqfegtgf [ 3 ] ; tmp_g [ 9 ] = 36
; tmp_m [ 36 ] = rtB . pzpf3nd3va [ 0 ] ; tmp_m [ 37 ] = rtB . pzpf3nd3va [ 1
] ; tmp_m [ 38 ] = rtB . pzpf3nd3va [ 2 ] ; tmp_m [ 39 ] = rtB . pzpf3nd3va [
3 ] ; tmp_g [ 10 ] = 40 ; tmp_m [ 40 ] = rtB . lcncbuna0k [ 0 ] ; tmp_m [ 41
] = rtB . lcncbuna0k [ 1 ] ; tmp_m [ 42 ] = rtB . lcncbuna0k [ 2 ] ; tmp_m [
43 ] = rtB . lcncbuna0k [ 3 ] ; tmp_g [ 11 ] = 44 ; tmp_m [ 44 ] = rtB .
hstmkliglr [ 0 ] ; tmp_m [ 45 ] = rtB . hstmkliglr [ 1 ] ; tmp_m [ 46 ] = rtB
. hstmkliglr [ 2 ] ; tmp_m [ 47 ] = rtB . hstmkliglr [ 3 ] ; tmp_g [ 12 ] =
48 ; simulationData -> mData -> mInputValues . mN = 48 ; simulationData ->
mData -> mInputValues . mX = & tmp_m [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 13 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_g [ 0 ] ; simulator = ( NeslSimulator * ) rtDW . hnxbpl1wx5 ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . k0z433ri5i ;
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
rtDW . eezcqf5nt4 ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime
. mN = 1 ; simulationData -> mData -> mTime . mX = & time ; simulationData ->
mData -> mContStates . mN = 24 ; simulationData -> mData -> mContStates . mX
= & rtX . anlkrx3tc2 [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0
; simulationData -> mData -> mDiscStates . mX = & rtDW . ocr2gtrnaz ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . iezvtdo4zq ; tmp = false ; simulationData ->
mData -> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; simulationData -> mData -> mIsSolverCheckingCIC = false ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; simulationData -> mData ->
mIsSolverRequestingReset = false ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
jrljlnvocq [ 0 ] ; tmp_p [ 1 ] = rtB . jrljlnvocq [ 1 ] ; tmp_p [ 2 ] = rtB .
jrljlnvocq [ 2 ] ; tmp_p [ 3 ] = rtB . jrljlnvocq [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . b2bp1tloeo [ 0 ] ; tmp_p [ 5 ] = rtB . b2bp1tloeo [ 1 ] ;
tmp_p [ 6 ] = rtB . b2bp1tloeo [ 2 ] ; tmp_p [ 7 ] = rtB . b2bp1tloeo [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . lmsabjovac [ 0 ] ; tmp_p [ 9 ] = rtB .
lmsabjovac [ 1 ] ; tmp_p [ 10 ] = rtB . lmsabjovac [ 2 ] ; tmp_p [ 11 ] = rtB
. lmsabjovac [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . n3klnoiklk [ 0 ]
; tmp_p [ 13 ] = rtB . n3klnoiklk [ 1 ] ; tmp_p [ 14 ] = rtB . n3klnoiklk [ 2
] ; tmp_p [ 15 ] = rtB . n3klnoiklk [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . o01lkeuvd1 [ 0 ] ; tmp_p [ 17 ] = rtB . o01lkeuvd1 [ 1 ] ; tmp_p [ 18 ]
= rtB . o01lkeuvd1 [ 2 ] ; tmp_p [ 19 ] = rtB . o01lkeuvd1 [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . ebfmf2wsfd [ 0 ] ; tmp_p [ 21 ] = rtB .
ebfmf2wsfd [ 1 ] ; tmp_p [ 22 ] = rtB . ebfmf2wsfd [ 2 ] ; tmp_p [ 23 ] = rtB
. ebfmf2wsfd [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 24 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> anlkrx3tc2 [ 0 ] ; simulator = ( NeslSimulator * ) rtDW .
pcl5k34iwh ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . b2efndbc2b
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( simulator ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } _rtXdot -> n212yfmu3n = ( rtB . md32vri2gx [ 1 ] - rtX . n212yfmu3n ) *
1000.0 ; _rtXdot -> mm14y0qob4 = ( rtB . md32vri2gx [ 3 ] - rtX . mm14y0qob4
) * 1000.0 ; _rtXdot -> nyhtwgatpw = ( rtB . md32vri2gx [ 5 ] - rtX .
nyhtwgatpw ) * 1000.0 ; _rtXdot -> aunhsozkjd = ( rtB . md32vri2gx [ 7 ] -
rtX . aunhsozkjd ) * 1000.0 ; _rtXdot -> bpjbkl34c1 = ( rtB . md32vri2gx [ 9
] - rtX . bpjbkl34c1 ) * 1000.0 ; _rtXdot -> lm0fxpm1n1 = ( rtB . md32vri2gx
[ 11 ] - rtX . lm0fxpm1n1 ) * 1000.0 ; _rtXdot -> opt4eui41m [ 0 ] = rtX .
opt4eui41m [ 1 ] ; _rtXdot -> opt4eui41m [ 1 ] = ( ( rtDW . ml2zc01qz1 - rtX
. opt4eui41m [ 0 ] ) * 1000.0 - 2.0 * rtX . opt4eui41m [ 1 ] ) * 1000.0 ;
_rtXdot -> msharprh4q [ 0 ] = rtX . msharprh4q [ 1 ] ; _rtXdot -> msharprh4q
[ 1 ] = ( ( rtDW . fnn2jlfmi3 - rtX . msharprh4q [ 0 ] ) * 1000.0 - 2.0 * rtX
. msharprh4q [ 1 ] ) * 1000.0 ; _rtXdot -> cnf2gqarr4 [ 0 ] = rtX .
cnf2gqarr4 [ 1 ] ; _rtXdot -> cnf2gqarr4 [ 1 ] = ( ( rtDW . fox2nnpevw - rtX
. cnf2gqarr4 [ 0 ] ) * 1000.0 - 2.0 * rtX . cnf2gqarr4 [ 1 ] ) * 1000.0 ;
_rtXdot -> dopllilgmw [ 0 ] = rtX . dopllilgmw [ 1 ] ; _rtXdot -> dopllilgmw
[ 1 ] = ( ( rtDW . kswjrqpbnd - rtX . dopllilgmw [ 0 ] ) * 1000.0 - 2.0 * rtX
. dopllilgmw [ 1 ] ) * 1000.0 ; _rtXdot -> j2t2fcuhnz [ 0 ] = rtX .
j2t2fcuhnz [ 1 ] ; _rtXdot -> j2t2fcuhnz [ 1 ] = ( ( rtDW . gwlc5gste3 - rtX
. j2t2fcuhnz [ 0 ] ) * 1000.0 - 2.0 * rtX . j2t2fcuhnz [ 1 ] ) * 1000.0 ;
_rtXdot -> eyfhribqoa [ 0 ] = rtX . eyfhribqoa [ 1 ] ; _rtXdot -> eyfhribqoa
[ 1 ] = ( ( rtDW . oem5mgthn3 - rtX . eyfhribqoa [ 0 ] ) * 1000.0 - 2.0 * rtX
. eyfhribqoa [ 1 ] ) * 1000.0 ; simulationData = ( NeslSimulationData * )
rtDW . izfvfuof1b ; time_p = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_p ;
simulationData -> mData -> mContStates . mN = 30 ; simulationData -> mData ->
mContStates . mX = & rtX . fdlxnailwx [ 0 ] ; simulationData -> mData ->
mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = & rtDW .
i1v2wl3m4b ; simulationData -> mData -> mModeVector . mN = 6 ; simulationData
-> mData -> mModeVector . mX = & rtDW . puciepvfhp [ 0 ] ; tmp = false ;
simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; simulationData -> mData -> mIsSolverCheckingCIC
= false ; tmp = ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData
-> mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 =
( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; simulationData -> mData ->
mIsSolverRequestingReset = false ; tmp_g [ 0 ] = 0 ; tmp_m [ 0 ] = rtB .
ih22bf4bis [ 0 ] ; tmp_m [ 1 ] = rtB . ih22bf4bis [ 1 ] ; tmp_m [ 2 ] = rtB .
ih22bf4bis [ 2 ] ; tmp_m [ 3 ] = rtB . ih22bf4bis [ 3 ] ; tmp_g [ 1 ] = 4 ;
tmp_m [ 4 ] = rtB . ey2x1plpfc [ 0 ] ; tmp_m [ 5 ] = rtB . ey2x1plpfc [ 1 ] ;
tmp_m [ 6 ] = rtB . ey2x1plpfc [ 2 ] ; tmp_m [ 7 ] = rtB . ey2x1plpfc [ 3 ] ;
tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB . hiwi0ircf1 [ 0 ] ; tmp_m [ 9 ] = rtB .
hiwi0ircf1 [ 1 ] ; tmp_m [ 10 ] = rtB . hiwi0ircf1 [ 2 ] ; tmp_m [ 11 ] = rtB
. hiwi0ircf1 [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] = rtB . cyn5mhsbrs [ 0 ]
; tmp_m [ 13 ] = rtB . cyn5mhsbrs [ 1 ] ; tmp_m [ 14 ] = rtB . cyn5mhsbrs [ 2
] ; tmp_m [ 15 ] = rtB . cyn5mhsbrs [ 3 ] ; tmp_g [ 4 ] = 16 ; tmp_m [ 16 ] =
rtB . lkiqnu3azd [ 0 ] ; tmp_m [ 17 ] = rtB . lkiqnu3azd [ 1 ] ; tmp_m [ 18 ]
= rtB . lkiqnu3azd [ 2 ] ; tmp_m [ 19 ] = rtB . lkiqnu3azd [ 3 ] ; tmp_g [ 5
] = 20 ; tmp_m [ 20 ] = rtB . nvmxvdiax2 [ 0 ] ; tmp_m [ 21 ] = rtB .
nvmxvdiax2 [ 1 ] ; tmp_m [ 22 ] = rtB . nvmxvdiax2 [ 2 ] ; tmp_m [ 23 ] = rtB
. nvmxvdiax2 [ 3 ] ; tmp_g [ 6 ] = 24 ; tmp_m [ 24 ] = rtB . ar5quhe3n1 [ 0 ]
; tmp_m [ 25 ] = rtB . ar5quhe3n1 [ 1 ] ; tmp_m [ 26 ] = rtB . ar5quhe3n1 [ 2
] ; tmp_m [ 27 ] = rtB . ar5quhe3n1 [ 3 ] ; tmp_g [ 7 ] = 28 ; tmp_m [ 28 ] =
rtB . au2eumcmnw [ 0 ] ; tmp_m [ 29 ] = rtB . au2eumcmnw [ 1 ] ; tmp_m [ 30 ]
= rtB . au2eumcmnw [ 2 ] ; tmp_m [ 31 ] = rtB . au2eumcmnw [ 3 ] ; tmp_g [ 8
] = 32 ; tmp_m [ 32 ] = rtB . hwnqfegtgf [ 0 ] ; tmp_m [ 33 ] = rtB .
hwnqfegtgf [ 1 ] ; tmp_m [ 34 ] = rtB . hwnqfegtgf [ 2 ] ; tmp_m [ 35 ] = rtB
. hwnqfegtgf [ 3 ] ; tmp_g [ 9 ] = 36 ; tmp_m [ 36 ] = rtB . pzpf3nd3va [ 0 ]
; tmp_m [ 37 ] = rtB . pzpf3nd3va [ 1 ] ; tmp_m [ 38 ] = rtB . pzpf3nd3va [ 2
] ; tmp_m [ 39 ] = rtB . pzpf3nd3va [ 3 ] ; tmp_g [ 10 ] = 40 ; tmp_m [ 40 ]
= rtB . lcncbuna0k [ 0 ] ; tmp_m [ 41 ] = rtB . lcncbuna0k [ 1 ] ; tmp_m [ 42
] = rtB . lcncbuna0k [ 2 ] ; tmp_m [ 43 ] = rtB . lcncbuna0k [ 3 ] ; tmp_g [
11 ] = 44 ; tmp_m [ 44 ] = rtB . hstmkliglr [ 0 ] ; tmp_m [ 45 ] = rtB .
hstmkliglr [ 1 ] ; tmp_m [ 46 ] = rtB . hstmkliglr [ 2 ] ; tmp_m [ 47 ] = rtB
. hstmkliglr [ 3 ] ; tmp_g [ 12 ] = 48 ; simulationData -> mData ->
mInputValues . mN = 48 ; simulationData -> mData -> mInputValues . mX = &
tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 13 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
simulationData -> mData -> mDx . mN = 30 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> fdlxnailwx [ 0 ] ; simulator = ( NeslSimulator * ) rtDW .
hnxbpl1wx5 ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . k0z433ri5i
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
. izfvfuof1b ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN
= 1 ; simulationData -> mData -> mTime . mX = & time ; simulationData ->
mData -> mContStates . mN = 30 ; simulationData -> mData -> mContStates . mX
= & rtX . fdlxnailwx [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0
; simulationData -> mData -> mDiscStates . mX = & rtDW . i1v2wl3m4b ;
simulationData -> mData -> mModeVector . mN = 6 ; simulationData -> mData ->
mModeVector . mX = & rtDW . puciepvfhp [ 0 ] ; tmp = false ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; simulationData -> mData -> mIsSolverCheckingCIC
= false ; tmp = ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData
-> mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 =
( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; simulationData -> mData ->
mIsSolverRequestingReset = false ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
ih22bf4bis [ 0 ] ; tmp_p [ 1 ] = rtB . ih22bf4bis [ 1 ] ; tmp_p [ 2 ] = rtB .
ih22bf4bis [ 2 ] ; tmp_p [ 3 ] = rtB . ih22bf4bis [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . ey2x1plpfc [ 0 ] ; tmp_p [ 5 ] = rtB . ey2x1plpfc [ 1 ] ;
tmp_p [ 6 ] = rtB . ey2x1plpfc [ 2 ] ; tmp_p [ 7 ] = rtB . ey2x1plpfc [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . hiwi0ircf1 [ 0 ] ; tmp_p [ 9 ] = rtB .
hiwi0ircf1 [ 1 ] ; tmp_p [ 10 ] = rtB . hiwi0ircf1 [ 2 ] ; tmp_p [ 11 ] = rtB
. hiwi0ircf1 [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . cyn5mhsbrs [ 0 ]
; tmp_p [ 13 ] = rtB . cyn5mhsbrs [ 1 ] ; tmp_p [ 14 ] = rtB . cyn5mhsbrs [ 2
] ; tmp_p [ 15 ] = rtB . cyn5mhsbrs [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . lkiqnu3azd [ 0 ] ; tmp_p [ 17 ] = rtB . lkiqnu3azd [ 1 ] ; tmp_p [ 18 ]
= rtB . lkiqnu3azd [ 2 ] ; tmp_p [ 19 ] = rtB . lkiqnu3azd [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . nvmxvdiax2 [ 0 ] ; tmp_p [ 21 ] = rtB .
nvmxvdiax2 [ 1 ] ; tmp_p [ 22 ] = rtB . nvmxvdiax2 [ 2 ] ; tmp_p [ 23 ] = rtB
. nvmxvdiax2 [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] = rtB . ar5quhe3n1 [ 0 ]
; tmp_p [ 25 ] = rtB . ar5quhe3n1 [ 1 ] ; tmp_p [ 26 ] = rtB . ar5quhe3n1 [ 2
] ; tmp_p [ 27 ] = rtB . ar5quhe3n1 [ 3 ] ; tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] =
rtB . au2eumcmnw [ 0 ] ; tmp_p [ 29 ] = rtB . au2eumcmnw [ 1 ] ; tmp_p [ 30 ]
= rtB . au2eumcmnw [ 2 ] ; tmp_p [ 31 ] = rtB . au2eumcmnw [ 3 ] ; tmp_e [ 8
] = 32 ; tmp_p [ 32 ] = rtB . hwnqfegtgf [ 0 ] ; tmp_p [ 33 ] = rtB .
hwnqfegtgf [ 1 ] ; tmp_p [ 34 ] = rtB . hwnqfegtgf [ 2 ] ; tmp_p [ 35 ] = rtB
. hwnqfegtgf [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] = rtB . pzpf3nd3va [ 0 ]
; tmp_p [ 37 ] = rtB . pzpf3nd3va [ 1 ] ; tmp_p [ 38 ] = rtB . pzpf3nd3va [ 2
] ; tmp_p [ 39 ] = rtB . pzpf3nd3va [ 3 ] ; tmp_e [ 10 ] = 40 ; tmp_p [ 40 ]
= rtB . lcncbuna0k [ 0 ] ; tmp_p [ 41 ] = rtB . lcncbuna0k [ 1 ] ; tmp_p [ 42
] = rtB . lcncbuna0k [ 2 ] ; tmp_p [ 43 ] = rtB . lcncbuna0k [ 3 ] ; tmp_e [
11 ] = 44 ; tmp_p [ 44 ] = rtB . hstmkliglr [ 0 ] ; tmp_p [ 45 ] = rtB .
hstmkliglr [ 1 ] ; tmp_p [ 46 ] = rtB . hstmkliglr [ 2 ] ; tmp_p [ 47 ] = rtB
. hstmkliglr [ 3 ] ; tmp_e [ 12 ] = 48 ; simulationData -> mData ->
mInputValues . mN = 48 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 13 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ; tmp_i =
rtMassMatrix . pr ; tmp_i = double_pointer_shift ( tmp_i , rtDW . cy021mvipw
) ; simulationData -> mData -> mMassMatrixPr . mN = 18 ; simulationData ->
mData -> mMassMatrixPr . mX = tmp_i ; simulator = ( NeslSimulator * ) rtDW .
hnxbpl1wx5 ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . k0z433ri5i
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_m = ne_simulator_method ( simulator ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_m != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlTerminate ( void ) { NeuDiagnosticManager * diagnosticManager
; NeslSimulationData * simulationData ; rt_FREE ( rtDW . f2qimf1l0g .
RSimInfoPtr ) ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
b2efndbc2b ; neu_destroy_diagnostic_manager ( diagnosticManager ) ;
simulationData = ( NeslSimulationData * ) rtDW . eezcqf5nt4 ;
nesl_destroy_simulation_data ( simulationData ) ; nesl_erase_simulator (
"closedLoop_toTune/Plant/Robot/Solver Configuration_1" ) ; diagnosticManager
= ( NeuDiagnosticManager * ) rtDW . ey4yt3c2wg ;
neu_destroy_diagnostic_manager ( diagnosticManager ) ; simulationData = (
NeslSimulationData * ) rtDW . lh0gnnaa5c ; nesl_destroy_simulation_data (
simulationData ) ; nesl_erase_simulator (
"closedLoop_toTune/Plant/Robot/Solver Configuration_1" ) ; diagnosticManager
= ( NeuDiagnosticManager * ) rtDW . k0z433ri5i ;
neu_destroy_diagnostic_manager ( diagnosticManager ) ; simulationData = (
NeslSimulationData * ) rtDW . izfvfuof1b ; nesl_destroy_simulation_data (
simulationData ) ; nesl_erase_simulator (
"closedLoop_toTune/Plant/Robot/Solver Configuration_2" ) ; diagnosticManager
= ( NeuDiagnosticManager * ) rtDW . modeusfujc ;
neu_destroy_diagnostic_manager ( diagnosticManager ) ; simulationData = (
NeslSimulationData * ) rtDW . df4vdmnuwt ; nesl_destroy_simulation_data (
simulationData ) ; nesl_erase_simulator (
"closedLoop_toTune/Plant/Robot/Solver Configuration_2" ) ; if (
rt_slioCatalogue ( ) != ( NULL ) ) { void * * slioCatalogueAddr =
rt_slioCatalogueAddr ( ) ; rtwSaveDatasetsToMatFile (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ,
rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 72 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
2 ) ; ssSetNumBlocks ( rtS , 604 ) ; ssSetNumBlockIO ( rtS , 293 ) ;
ssSetNumBlockParams ( rtS , 350 ) ; } void MdlInitializeSampleTimes ( void )
{ ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0025 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 76288948U ) ;
ssSetChecksumVal ( rtS , 1 , 4116318086U ) ; ssSetChecksumVal ( rtS , 2 ,
373972974U ) ; ssSetChecksumVal ( rtS , 3 , 3063206634U ) ; }
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
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { rtDW . cy021mvipw = 42 ; } { static
DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 ,
sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 17 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; }
closedLoop_toTune_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive (
rtS , true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "closedLoop_toTune" ) ;
ssSetPath ( rtS , "closedLoop_toTune" ) ; ssSetTStart ( rtS , 0.0 ) ;
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
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position/Upper Arm Revolute"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position/Upper Arm Revolute"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position1/Upper Arm Revolute"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position1/Upper Arm Revolute"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position2/Upper Arm Revolute"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position2/Upper Arm Revolute"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position3/Upper Arm Revolute"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position3/Upper Arm Revolute"
, "closedLoop_toTune/Plant/Robot/Gripper/Left Revolute A" ,
"closedLoop_toTune/Plant/Robot/Gripper/Left Revolute A" ,
"closedLoop_toTune/Plant/Robot/Gripper/Left Finger Revolute  A" ,
"closedLoop_toTune/Plant/Robot/Gripper/Left Finger Revolute  A" ,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position1/Upper Arm Revolute"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position1/Upper Arm Revolute"
, "closedLoop_toTune/Plant/Robot/Gripper/Right Revolute A" ,
"closedLoop_toTune/Plant/Robot/Gripper/Right Revolute A" ,
"closedLoop_toTune/Plant/Robot/Gripper/Right Finger Revolute A" ,
"closedLoop_toTune/Plant/Robot/Gripper/Right Finger Revolute A" ,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position3/Upper Arm Revolute"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position3/Upper Arm Revolute"
, "closedLoop_toTune/Plant/Robot/Gripper/Left Finger Revolute B" ,
"closedLoop_toTune/Plant/Robot/Gripper/Left Finger Revolute B" ,
"closedLoop_toTune/Plant/Robot/Gripper/Right Finger Revolute B" ,
"closedLoop_toTune/Plant/Robot/Gripper/Right Finger Revolute B" ,
"closedLoop_toTune/Plant/Robot/Solver\nConfiguration" ,
"closedLoop_toTune/Plant/Robot/Solver\nConfiguration" ,
"closedLoop_toTune/Plant/Robot/Solver\nConfiguration" ,
"closedLoop_toTune/Plant/Robot/Solver\nConfiguration" ,
"closedLoop_toTune/Plant/Robot/Solver\nConfiguration" ,
"closedLoop_toTune/Plant/Robot/Solver\nConfiguration" ,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Angular Velocity Source"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Angular Velocity Source"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position/Rot2Rev/Ideal Angular Velocity Source"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Angular Velocity Source"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position2/Rot2Rev/Ideal Angular Velocity Source"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Angular Velocity Source"
,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
,
 "closedLoop_toTune/Controller/Servomotor Position Controller/filter/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
,
 "closedLoop_toTune/Controller/Servomotor Position Controller/PID Controller/Filter/Disc. Forward Euler Filter/Filter"
,
 "closedLoop_toTune/Controller/Servomotor Position Controller/PID Controller/Integrator/Discrete/Integrator"
,
 "closedLoop_toTune/Controller/Servomotor Position Controller/filter1/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
,
 "closedLoop_toTune/Controller/Servomotor Position Controller/PID Controller1/Filter/Disc. Forward Euler Filter/Filter"
,
 "closedLoop_toTune/Controller/Servomotor Position Controller/PID Controller1/Integrator/Discrete/Integrator"
,
 "closedLoop_toTune/Controller/Servomotor Position Controller/filter2/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
,
 "closedLoop_toTune/Controller/Servomotor Position Controller/PID Controller2/Filter/Disc. Forward Euler Filter/Filter"
,
 "closedLoop_toTune/Controller/Servomotor Position Controller/PID Controller2/Integrator/Discrete/Integrator"
,
 "closedLoop_toTune/Controller/Servomotor Position Controller/filter3/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
,
 "closedLoop_toTune/Controller/Servomotor Position Controller/PID Controller3/Filter/Disc. Forward Euler Filter/Filter"
,
 "closedLoop_toTune/Controller/Servomotor Position Controller/PID Controller3/Integrator/Discrete/Integrator"
,
 "closedLoop_toTune/Controller/Servomotor Position Controller/filter4/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
,
 "closedLoop_toTune/Controller/Servomotor Position Controller/PID Controller4/Filter/Disc. Forward Euler Filter/Filter"
,
 "closedLoop_toTune/Controller/Servomotor Position Controller/PID Controller4/Integrator/Discrete/Integrator"
,
 "closedLoop_toTune/Controller/Servomotor Position Controller/filter5/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
,
 "closedLoop_toTune/Controller/Servomotor Position Controller/PID Controller5/Filter/Disc. Forward Euler Filter/Filter"
,
 "closedLoop_toTune/Controller/Servomotor Position Controller/PID Controller5/Integrator/Discrete/Integrator"
,
 "closedLoop_toTune/Controller/Servomotor Speed Controller/filter/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
,
 "closedLoop_toTune/Controller/Servomotor Speed Controller/PID Controller/Integrator/Discrete/Integrator"
,
 "closedLoop_toTune/Controller/Servomotor Speed Controller/filter1/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
,
 "closedLoop_toTune/Controller/Servomotor Speed Controller/PID Controller1/Integrator/Discrete/Integrator"
,
 "closedLoop_toTune/Controller/Servomotor Speed Controller/filter2/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
,
 "closedLoop_toTune/Controller/Servomotor Speed Controller/PID Controller2/Integrator/Discrete/Integrator"
,
 "closedLoop_toTune/Controller/Servomotor Speed Controller/filter3/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
,
 "closedLoop_toTune/Controller/Servomotor Speed Controller/PID Controller3/Integrator/Discrete/Integrator"
,
 "closedLoop_toTune/Controller/Servomotor Speed Controller/filter4/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
,
 "closedLoop_toTune/Controller/Servomotor Speed Controller/PID Controller4/Integrator/Discrete/Integrator"
,
 "closedLoop_toTune/Controller/Servomotor Speed Controller/filter5/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
,
 "closedLoop_toTune/Controller/Servomotor Speed Controller/PID Controller5/Integrator/Discrete/Integrator"
,
"closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_2_1_1"
,
"closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_2_1_1"
,
"closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_4_1_1"
,
"closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_4_1_1"
,
"closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_6_1_1"
,
"closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_6_1_1"
,
"closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_8_1_1"
,
"closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_8_1_1"
,
"closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_10_1_1"
,
"closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_10_1_1"
,
"closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_12_1_1"
,
"closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_12_1_1"
, "closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1"
, "closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1"
, "closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1"
, "closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1"
, "closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1"
, "closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1"
, "closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1"
, "closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1"
, "closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1"
, "closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1"
, "closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_6_1_1"
, "closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_6_1_1"
,
"closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_1_1_1"
,
"closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_3_1_1"
,
"closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_5_1_1"
,
"closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_7_1_1"
,
"closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_9_1_1"
,
"closedLoop_toTune/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_11_1_1"
} ; static const char_T * rt_LoggedStateNames [ ] = {
 "closedLoop_toTune.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Upper_Arm_Revolute.Rz.q"
,
 "closedLoop_toTune.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Upper_Arm_Revolute.Rz.w"
,
 "closedLoop_toTune.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Upper_Arm_Revolute.Rz.q"
,
 "closedLoop_toTune.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Upper_Arm_Revolute.Rz.w"
,
 "closedLoop_toTune.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Upper_Arm_Revolute.Rz.q"
,
 "closedLoop_toTune.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Upper_Arm_Revolute.Rz.w"
,
 "closedLoop_toTune.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Upper_Arm_Revolute.Rz.q"
,
 "closedLoop_toTune.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Upper_Arm_Revolute.Rz.w"
, "closedLoop_toTune.Plant.Robot.Gripper.Left_Revolute_A.Rz.q" ,
"closedLoop_toTune.Plant.Robot.Gripper.Left_Revolute_A.Rz.w" ,
"closedLoop_toTune.Plant.Robot.Gripper.Left_Finger_Revolute_A.Rz.q" ,
"closedLoop_toTune.Plant.Robot.Gripper.Left_Finger_Revolute_A.Rz.w" ,
 "closedLoop_toTune.Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Upper_Arm_Revolute.Rz.q"
,
 "closedLoop_toTune.Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Upper_Arm_Revolute.Rz.w"
, "closedLoop_toTune.Plant.Robot.Gripper.Right_Revolute_A.Rz.q" ,
"closedLoop_toTune.Plant.Robot.Gripper.Right_Revolute_A.Rz.w" ,
"closedLoop_toTune.Plant.Robot.Gripper.Right_Finger_Revolute_A.Rz.q" ,
"closedLoop_toTune.Plant.Robot.Gripper.Right_Finger_Revolute_A.Rz.w" ,
 "closedLoop_toTune.Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Upper_Arm_Revolute.Rz.q"
,
 "closedLoop_toTune.Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Upper_Arm_Revolute.Rz.w"
, "closedLoop_toTune.Plant.Robot.Gripper.Left_Finger_Revolute_B.Rz.q" ,
"closedLoop_toTune.Plant.Robot.Gripper.Left_Finger_Revolute_B.Rz.w" ,
"closedLoop_toTune.Plant.Robot.Gripper.Right_Finger_Revolute_B.Rz.q" ,
"closedLoop_toTune.Plant.Robot.Gripper.Right_Finger_Revolute_B.Rz.w" ,
"closedLoop_toTune.outputFiltered_1263233119_0" ,
"closedLoop_toTune.outputFiltered_3289095679_0" ,
"closedLoop_toTune.outputFiltered_3201027743_0" ,
"closedLoop_toTune.outputFiltered_33255678_0" ,
"closedLoop_toTune.outputFiltered_1434039606_0" ,
"closedLoop_toTune.outputFiltered_800712278_0" ,
 "closedLoop_toTune.Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_3846768174_0"
,
 "closedLoop_toTune.Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_3846768174_1"
,
 "closedLoop_toTune.Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_2733210878_0"
,
 "closedLoop_toTune.Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_2733210878_1"
,
 "closedLoop_toTune.Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_2676577614_0"
,
 "closedLoop_toTune.Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_2676577614_1"
,
 "closedLoop_toTune.Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_766085470_0"
,
 "closedLoop_toTune.Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_766085470_1"
,
 "closedLoop_toTune.Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_281649390_0"
,
 "closedLoop_toTune.Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_281649390_1"
,
 "closedLoop_toTune.Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_1466554942_0"
,
 "closedLoop_toTune.Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_1466554942_1"
,
 "closedLoop_toTune.Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
,
 "closedLoop_toTune.Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
,
 "closedLoop_toTune.Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
,
 "closedLoop_toTune.Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
,
 "closedLoop_toTune.Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
,
 "closedLoop_toTune.Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
,
 "closedLoop_toTune.Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
,
 "closedLoop_toTune.Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
,
 "closedLoop_toTune.Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
,
 "closedLoop_toTune.Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
,
 "closedLoop_toTune.Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
,
 "closedLoop_toTune.Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
,
 "closedLoop_toTune.Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.i"
,
 "closedLoop_toTune.Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.i"
,
 "closedLoop_toTune.Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.i"
,
 "closedLoop_toTune.Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.i"
,
 "closedLoop_toTune.Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.i"
,
 "closedLoop_toTune.Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.i"
,
 "closedLoop_toTune.Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Angular_Velocity_Source.t"
,
 "closedLoop_toTune.Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Angular_Velocity_Source.t"
,
 "closedLoop_toTune.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Rot2Rev.Ideal_Angular_Velocity_Source.t"
,
 "closedLoop_toTune.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Angular_Velocity_Source.t"
,
 "closedLoop_toTune.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Rot2Rev.Ideal_Angular_Velocity_Source.t"
,
 "closedLoop_toTune.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Angular_Velocity_Source.t"
,
 "closedLoop_toTune.Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
,
 "closedLoop_toTune.Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
,
 "closedLoop_toTune.Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
,
 "closedLoop_toTune.Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
,
 "closedLoop_toTune.Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
,
 "closedLoop_toTune.Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
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
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . anlkrx3tc2 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . anlkrx3tc2 [ 1 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . anlkrx3tc2 [ 2 ] ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . anlkrx3tc2 [ 3 ] ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . anlkrx3tc2 [ 4 ] ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . anlkrx3tc2 [ 5 ] ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . anlkrx3tc2 [ 6 ] ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . anlkrx3tc2 [ 7 ] ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . anlkrx3tc2 [ 8 ] ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . anlkrx3tc2 [ 9 ] ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . anlkrx3tc2 [ 10 ] ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . anlkrx3tc2 [ 11 ] ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . anlkrx3tc2 [ 12 ] ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . anlkrx3tc2 [ 13 ] ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . anlkrx3tc2 [ 14 ] ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . anlkrx3tc2 [ 15 ] ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtX . anlkrx3tc2 [ 16 ] ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtX . anlkrx3tc2 [ 17 ] ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtX . anlkrx3tc2 [ 18 ] ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtX . anlkrx3tc2 [ 19 ] ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtX . anlkrx3tc2 [ 20 ] ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtX . anlkrx3tc2 [ 21 ] ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtX . anlkrx3tc2 [ 22 ] ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtX . anlkrx3tc2 [ 23 ] ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtX . n212yfmu3n ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtX . mm14y0qob4 ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) & rtX . nyhtwgatpw ;
rt_LoggedStateSignalPtrs [ 27 ] = ( void * ) & rtX . aunhsozkjd ;
rt_LoggedStateSignalPtrs [ 28 ] = ( void * ) & rtX . bpjbkl34c1 ;
rt_LoggedStateSignalPtrs [ 29 ] = ( void * ) & rtX . lm0fxpm1n1 ;
rt_LoggedStateSignalPtrs [ 30 ] = ( void * ) & rtX . opt4eui41m [ 0 ] ;
rt_LoggedStateSignalPtrs [ 31 ] = ( void * ) & rtX . opt4eui41m [ 1 ] ;
rt_LoggedStateSignalPtrs [ 32 ] = ( void * ) & rtX . msharprh4q [ 0 ] ;
rt_LoggedStateSignalPtrs [ 33 ] = ( void * ) & rtX . msharprh4q [ 1 ] ;
rt_LoggedStateSignalPtrs [ 34 ] = ( void * ) & rtX . cnf2gqarr4 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 35 ] = ( void * ) & rtX . cnf2gqarr4 [ 1 ] ;
rt_LoggedStateSignalPtrs [ 36 ] = ( void * ) & rtX . dopllilgmw [ 0 ] ;
rt_LoggedStateSignalPtrs [ 37 ] = ( void * ) & rtX . dopllilgmw [ 1 ] ;
rt_LoggedStateSignalPtrs [ 38 ] = ( void * ) & rtX . j2t2fcuhnz [ 0 ] ;
rt_LoggedStateSignalPtrs [ 39 ] = ( void * ) & rtX . j2t2fcuhnz [ 1 ] ;
rt_LoggedStateSignalPtrs [ 40 ] = ( void * ) & rtX . eyfhribqoa [ 0 ] ;
rt_LoggedStateSignalPtrs [ 41 ] = ( void * ) & rtX . eyfhribqoa [ 1 ] ;
rt_LoggedStateSignalPtrs [ 42 ] = ( void * ) & rtX . fdlxnailwx [ 0 ] ;
rt_LoggedStateSignalPtrs [ 43 ] = ( void * ) & rtX . fdlxnailwx [ 1 ] ;
rt_LoggedStateSignalPtrs [ 44 ] = ( void * ) & rtX . fdlxnailwx [ 2 ] ;
rt_LoggedStateSignalPtrs [ 45 ] = ( void * ) & rtX . fdlxnailwx [ 3 ] ;
rt_LoggedStateSignalPtrs [ 46 ] = ( void * ) & rtX . fdlxnailwx [ 4 ] ;
rt_LoggedStateSignalPtrs [ 47 ] = ( void * ) & rtX . fdlxnailwx [ 5 ] ;
rt_LoggedStateSignalPtrs [ 48 ] = ( void * ) & rtX . fdlxnailwx [ 6 ] ;
rt_LoggedStateSignalPtrs [ 49 ] = ( void * ) & rtX . fdlxnailwx [ 7 ] ;
rt_LoggedStateSignalPtrs [ 50 ] = ( void * ) & rtX . fdlxnailwx [ 8 ] ;
rt_LoggedStateSignalPtrs [ 51 ] = ( void * ) & rtX . fdlxnailwx [ 9 ] ;
rt_LoggedStateSignalPtrs [ 52 ] = ( void * ) & rtX . fdlxnailwx [ 10 ] ;
rt_LoggedStateSignalPtrs [ 53 ] = ( void * ) & rtX . fdlxnailwx [ 11 ] ;
rt_LoggedStateSignalPtrs [ 54 ] = ( void * ) & rtX . fdlxnailwx [ 12 ] ;
rt_LoggedStateSignalPtrs [ 55 ] = ( void * ) & rtX . fdlxnailwx [ 13 ] ;
rt_LoggedStateSignalPtrs [ 56 ] = ( void * ) & rtX . fdlxnailwx [ 14 ] ;
rt_LoggedStateSignalPtrs [ 57 ] = ( void * ) & rtX . fdlxnailwx [ 15 ] ;
rt_LoggedStateSignalPtrs [ 58 ] = ( void * ) & rtX . fdlxnailwx [ 16 ] ;
rt_LoggedStateSignalPtrs [ 59 ] = ( void * ) & rtX . fdlxnailwx [ 17 ] ;
rt_LoggedStateSignalPtrs [ 60 ] = ( void * ) & rtX . fdlxnailwx [ 18 ] ;
rt_LoggedStateSignalPtrs [ 61 ] = ( void * ) & rtX . fdlxnailwx [ 19 ] ;
rt_LoggedStateSignalPtrs [ 62 ] = ( void * ) & rtX . fdlxnailwx [ 20 ] ;
rt_LoggedStateSignalPtrs [ 63 ] = ( void * ) & rtX . fdlxnailwx [ 21 ] ;
rt_LoggedStateSignalPtrs [ 64 ] = ( void * ) & rtX . fdlxnailwx [ 22 ] ;
rt_LoggedStateSignalPtrs [ 65 ] = ( void * ) & rtX . fdlxnailwx [ 23 ] ;
rt_LoggedStateSignalPtrs [ 66 ] = ( void * ) & rtX . fdlxnailwx [ 24 ] ;
rt_LoggedStateSignalPtrs [ 67 ] = ( void * ) & rtX . fdlxnailwx [ 25 ] ;
rt_LoggedStateSignalPtrs [ 68 ] = ( void * ) & rtX . fdlxnailwx [ 26 ] ;
rt_LoggedStateSignalPtrs [ 69 ] = ( void * ) & rtX . fdlxnailwx [ 27 ] ;
rt_LoggedStateSignalPtrs [ 70 ] = ( void * ) & rtX . fdlxnailwx [ 28 ] ;
rt_LoggedStateSignalPtrs [ 71 ] = ( void * ) & rtX . fdlxnailwx [ 29 ] ;
rt_LoggedStateSignalPtrs [ 72 ] = ( void * ) & rtDW . liczzslnug ;
rt_LoggedStateSignalPtrs [ 73 ] = ( void * ) & rtDW . hbalfb24dh ;
rt_LoggedStateSignalPtrs [ 74 ] = ( void * ) & rtDW . mcqxnh5qer ;
rt_LoggedStateSignalPtrs [ 75 ] = ( void * ) & rtDW . hri0uk1gw2 ;
rt_LoggedStateSignalPtrs [ 76 ] = ( void * ) & rtDW . bwjx1snxyl ;
rt_LoggedStateSignalPtrs [ 77 ] = ( void * ) & rtDW . mfo0ooprpe ;
rt_LoggedStateSignalPtrs [ 78 ] = ( void * ) & rtDW . c1jwwx42fx ;
rt_LoggedStateSignalPtrs [ 79 ] = ( void * ) & rtDW . mhha3stacp ;
rt_LoggedStateSignalPtrs [ 80 ] = ( void * ) & rtDW . lx1kthg2ak ;
rt_LoggedStateSignalPtrs [ 81 ] = ( void * ) & rtDW . bsqva4pohk ;
rt_LoggedStateSignalPtrs [ 82 ] = ( void * ) & rtDW . lpwasbckyz ;
rt_LoggedStateSignalPtrs [ 83 ] = ( void * ) & rtDW . d4ohqbhzps ;
rt_LoggedStateSignalPtrs [ 84 ] = ( void * ) & rtDW . bfnpjdpcts ;
rt_LoggedStateSignalPtrs [ 85 ] = ( void * ) & rtDW . bjypbkgsog ;
rt_LoggedStateSignalPtrs [ 86 ] = ( void * ) & rtDW . d0kf2aazrh ;
rt_LoggedStateSignalPtrs [ 87 ] = ( void * ) & rtDW . al0mzj21sg ;
rt_LoggedStateSignalPtrs [ 88 ] = ( void * ) & rtDW . ou3top1ox4 ;
rt_LoggedStateSignalPtrs [ 89 ] = ( void * ) & rtDW . mmsgagixgx ;
rt_LoggedStateSignalPtrs [ 90 ] = ( void * ) & rtDW . c33j3xhn2h ;
rt_LoggedStateSignalPtrs [ 91 ] = ( void * ) & rtDW . nhkrizpina ;
rt_LoggedStateSignalPtrs [ 92 ] = ( void * ) & rtDW . bgfsqdlzb2 ;
rt_LoggedStateSignalPtrs [ 93 ] = ( void * ) & rtDW . prb2fus1cf ;
rt_LoggedStateSignalPtrs [ 94 ] = ( void * ) & rtDW . oc01bukxc2 ;
rt_LoggedStateSignalPtrs [ 95 ] = ( void * ) & rtDW . d1olc5hqid ;
rt_LoggedStateSignalPtrs [ 96 ] = ( void * ) & rtDW . ituhf3b0wr ;
rt_LoggedStateSignalPtrs [ 97 ] = ( void * ) & rtDW . k3i3dxp2ad ;
rt_LoggedStateSignalPtrs [ 98 ] = ( void * ) & rtDW . bpulvyc40u ;
rt_LoggedStateSignalPtrs [ 99 ] = ( void * ) & rtDW . e4gpd3p5q1 ;
rt_LoggedStateSignalPtrs [ 100 ] = ( void * ) & rtDW . iwb0eino0x ;
rt_LoggedStateSignalPtrs [ 101 ] = ( void * ) & rtDW . o253susvy3 ;
rt_LoggedStateSignalPtrs [ 102 ] = ( void * ) & rtDW . ioeljr4qvu ;
rt_LoggedStateSignalPtrs [ 103 ] = ( void * ) & rtDW . dduqiujiyo ;
rt_LoggedStateSignalPtrs [ 104 ] = ( void * ) & rtDW . loi2p44l5g ;
rt_LoggedStateSignalPtrs [ 105 ] = ( void * ) & rtDW . o15jwcclhk ;
rt_LoggedStateSignalPtrs [ 106 ] = ( void * ) & rtDW . m2gd3x52qg ;
rt_LoggedStateSignalPtrs [ 107 ] = ( void * ) & rtDW . nkabqhmeiu ;
rt_LoggedStateSignalPtrs [ 108 ] = ( void * ) & rtDW . jjatyukdau ;
rt_LoggedStateSignalPtrs [ 109 ] = ( void * ) & rtDW . kdanylioto ;
rt_LoggedStateSignalPtrs [ 110 ] = ( void * ) & rtDW . krdgtk44dk ;
rt_LoggedStateSignalPtrs [ 111 ] = ( void * ) & rtDW . k4esgf3pin ;
rt_LoggedStateSignalPtrs [ 112 ] = ( void * ) & rtDW . cyacblwmwu ;
rt_LoggedStateSignalPtrs [ 113 ] = ( void * ) & rtDW . jxguvtxodm ;
rt_LoggedStateSignalPtrs [ 114 ] = ( void * ) & rtDW . ml2zc01qz1 ;
rt_LoggedStateSignalPtrs [ 115 ] = ( void * ) & rtDW . j01x0sjof1 ;
rt_LoggedStateSignalPtrs [ 116 ] = ( void * ) & rtDW . fnn2jlfmi3 ;
rt_LoggedStateSignalPtrs [ 117 ] = ( void * ) & rtDW . iimmcuvdjs ;
rt_LoggedStateSignalPtrs [ 118 ] = ( void * ) & rtDW . fox2nnpevw ;
rt_LoggedStateSignalPtrs [ 119 ] = ( void * ) & rtDW . lngpao5zhs ;
rt_LoggedStateSignalPtrs [ 120 ] = ( void * ) & rtDW . kswjrqpbnd ;
rt_LoggedStateSignalPtrs [ 121 ] = ( void * ) & rtDW . p1zvslcvk0 ;
rt_LoggedStateSignalPtrs [ 122 ] = ( void * ) & rtDW . gwlc5gste3 ;
rt_LoggedStateSignalPtrs [ 123 ] = ( void * ) & rtDW . d03mkwdo2x ;
rt_LoggedStateSignalPtrs [ 124 ] = ( void * ) & rtDW . oem5mgthn3 ;
rt_LoggedStateSignalPtrs [ 125 ] = ( void * ) & rtDW . cektosfijb ;
rt_LoggedStateSignalPtrs [ 126 ] = ( void * ) rtDW . og0ns0accm ;
rt_LoggedStateSignalPtrs [ 127 ] = ( void * ) rtDW . ezn104xtfk ;
rt_LoggedStateSignalPtrs [ 128 ] = ( void * ) rtDW . ezkcmaawd3 ;
rt_LoggedStateSignalPtrs [ 129 ] = ( void * ) rtDW . cg4btfqksn ;
rt_LoggedStateSignalPtrs [ 130 ] = ( void * ) rtDW . awm41kpugb ;
rt_LoggedStateSignalPtrs [ 131 ] = ( void * ) rtDW . bqhavurmfx ; }
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
real_T ) ) ; } } ssSetChecksumVal ( rtS , 0 , 76288948U ) ; ssSetChecksumVal
( rtS , 1 , 4116318086U ) ; ssSetChecksumVal ( rtS , 2 , 373972974U ) ;
ssSetChecksumVal ( rtS , 3 , 3063206634U ) ; { static const sysRanDType
rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo
; static const sysRanDType * systemRan [ 1 ] ; gblRTWExtModeInfo = &
rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; } rtP .
Integrator_UpperSat = rtInf ; rtP . Integrator_LowerSat = rtMinusInf ; rtP .
Saturation_UpperSat = rtInf ; rtP . Saturation_LowerSat = rtMinusInf ; rtP .
Integrator_UpperSat_lfmj5hqb2j = rtInf ; rtP . Integrator_LowerSat_k5sgxqrrjs
= rtMinusInf ; rtP . Saturation_UpperSat_o5sqceaxad = rtInf ; rtP .
Saturation_LowerSat_aqldnegvun = rtMinusInf ; rtP .
Integrator_UpperSat_mkchvcaeor = rtInf ; rtP . Integrator_LowerSat_al00fjl4v2
= rtMinusInf ; rtP . Saturation_UpperSat_drbu1b01ue = rtInf ; rtP .
Saturation_LowerSat_e0wofzrvyc = rtMinusInf ; rtP .
Integrator_UpperSat_bysv0peofj = rtInf ; rtP . Integrator_LowerSat_cxf0fnk0y4
= rtMinusInf ; rtP . Saturation_UpperSat_e0c2zptto2 = rtInf ; rtP .
Saturation_LowerSat_cangmrc0kb = rtMinusInf ; rtP .
Integrator_UpperSat_cwwfgeyo4e = rtInf ; rtP . Integrator_LowerSat_gjgwydu10i
= rtMinusInf ; rtP . Saturation_UpperSat_eznfskdcrl = rtInf ; rtP .
Saturation_LowerSat_esw3yahypq = rtMinusInf ; rtP .
Integrator_UpperSat_ebd22dx1d1 = rtInf ; rtP . Integrator_LowerSat_h5qrw1zwan
= rtMinusInf ; rtP . Saturation_UpperSat_fp4onlvepw = rtInf ; rtP .
Saturation_LowerSat_aku5h2443e = rtMinusInf ; rtP .
Integrator_UpperSat_hxosttrbn1 = rtInf ; rtP . Integrator_LowerSat_njt0zyqb4b
= rtMinusInf ; rtP . Saturation_UpperSat_irbb5ee3qe = rtInf ; rtP .
Saturation_LowerSat_avgaf5ds21 = rtMinusInf ; rtP .
Integrator_UpperSat_pfwih5q0ig = rtInf ; rtP . Integrator_LowerSat_pbd52ykhos
= rtMinusInf ; rtP . Saturation_UpperSat_jfp3gm1jww = rtInf ; rtP .
Saturation_LowerSat_nkqwrbgzd1 = rtMinusInf ; rtP .
Integrator_UpperSat_edcqyime1g = rtInf ; rtP . Integrator_LowerSat_kapqoyjcmn
= rtMinusInf ; rtP . Saturation_UpperSat_cu3m2bizko = rtInf ; rtP .
Saturation_LowerSat_acc4hmqzqd = rtMinusInf ; rtP .
Integrator_UpperSat_lkw0yc02po = rtInf ; rtP . Integrator_LowerSat_indtf15swa
= rtMinusInf ; rtP . Saturation_UpperSat_aejz2ybmfq = rtInf ; rtP .
Saturation_LowerSat_fbnlwwz3ni = rtMinusInf ; rtP .
Integrator_UpperSat_lfd3uwwmqw = rtInf ; rtP . Integrator_LowerSat_ix4wayzgyy
= rtMinusInf ; rtP . Saturation_UpperSat_izwihy1hdf = rtInf ; rtP .
Saturation_LowerSat_gakz0d2xnn = rtMinusInf ; rtP .
Integrator_UpperSat_gjz1pvjay2 = rtInf ; rtP . Integrator_LowerSat_hwnksdfkmv
= rtMinusInf ; rtP . Saturation_UpperSat_i55r4kuqpb = rtInf ; rtP .
Saturation_LowerSat_nssiijzpqc = rtMinusInf ; return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = - 1 ; void MdlOutputsParameterSampleTime
( int_T tid ) { UNUSED_PARAMETER ( tid ) ; }
