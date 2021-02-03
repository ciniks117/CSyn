#include "__cf_closedLoop_toTune.h"
#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
PmfMessageId closedLoop_toTune_b924f1e8_1_output ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const double *
input , const double * inputDot , const double * inputDdot , const double *
discreteState , double * output , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) input ; ( void )
inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void ) neDiagMgr ;
output [ 0 ] = state [ 12 ] ; output [ 1 ] = state [ 13 ] ; output [ 2 ] =
state [ 18 ] ; output [ 3 ] = state [ 19 ] ; output [ 4 ] = state [ 0 ] ;
output [ 5 ] = state [ 1 ] ; output [ 6 ] = state [ 2 ] ; output [ 7 ] =
state [ 3 ] ; output [ 8 ] = state [ 4 ] ; output [ 9 ] = state [ 5 ] ;
output [ 10 ] = state [ 6 ] ; output [ 11 ] = state [ 7 ] ; return NULL ; }
