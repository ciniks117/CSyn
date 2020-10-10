#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "cst_robotarm_breach_98bf360f_6_geometries.h"
PmfMessageId cst_robotarm_breach_98bf360f_6_compOutputs ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , const double * input , const double * inputDot , const double *
inputDdot , const double * discreteState , double * output ,
NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void ) rtdvd ; (
void ) rtdvi ; ( void ) modeVector ; ( void ) input ; ( void ) inputDot ; (
void ) inputDdot ; ( void ) discreteState ; ( void ) neDiagMgr ; output [ 0 ]
= state [ 0 ] ; output [ 1 ] = state [ 1 ] ; output [ 2 ] = state [ 2 ] ;
output [ 3 ] = state [ 3 ] ; output [ 4 ] = state [ 4 ] ; output [ 5 ] =
state [ 5 ] ; output [ 6 ] = state [ 6 ] ; output [ 7 ] = state [ 7 ] ;
output [ 8 ] = state [ 8 ] ; output [ 9 ] = state [ 9 ] ; output [ 10 ] =
state [ 12 ] ; output [ 11 ] = state [ 13 ] ; return NULL ; }
