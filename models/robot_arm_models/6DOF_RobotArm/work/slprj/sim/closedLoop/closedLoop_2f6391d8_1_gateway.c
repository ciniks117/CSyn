#include "__cf_closedLoop.h"
#ifdef MATLAB_MEX_FILE
#include "tmwtypes.h"
#else
#include "rtwtypes.h"
#endif
#include "nesl_rtw.h"
#include "closedLoop_2f6391d8_1.h"
void closedLoop_2f6391d8_1_gateway ( void ) { NeModelParameters modelparams =
{ ( NeSolverType ) 0 , 0.001 , 0 , 0.0025 , 0 , 0 , 0 , 0 , (
SscLoggingSetting ) 0 , 476756437 , } ; NeSolverParameters solverparams = { 0
, 0 , 1 , 0 , 0 , 0.001 , 1e-06 , 1e-09 , 0 , 0 , 100 , 0 , 1 , 0 , 1e-09 , 0
, ( NeLocalSolverChoice ) 0 , 0.001 , 0 , 3 , 2 , ( NeLinearAlgebraChoice ) 1
, ( NeEquationFormulationChoice ) 0 , 1024 , 1 , 0.001 , (
NePartitionStorageMethod ) 0 , 1024 , ( NePartitionMethod ) 1 , } ; const
NeOutputParameters * outputparameters = NULL ; NeDae * dae ; size_t
numOutputs = 0 ; { static const NeOutputParameters outputparameters_init [ ]
= { { 0 , 0 , } , } ; outputparameters = outputparameters_init ; numOutputs =
sizeof ( outputparameters_init ) / sizeof ( outputparameters_init [ 0 ] ) ; }
closedLoop_2f6391d8_1_dae ( & dae , & modelparams , & solverparams ) ;
nesl_register_simulator_group (
"closedLoop/Plant/Robot/Solver Configuration_1" , 1 , & dae , & solverparams
, & modelparams , numOutputs , outputparameters ) ; }
