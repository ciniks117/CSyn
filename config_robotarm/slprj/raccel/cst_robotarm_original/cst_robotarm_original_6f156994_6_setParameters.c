#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
void cst_robotarm_original_6f156994_6_computeRuntimeParameters ( real_T * in
, real_T * out ) { ( void ) in ; ( void ) out ; } void
cst_robotarm_original_6f156994_6_computeAsmRuntimeDerivedValuesDoubles (
const double * rtp , double * rtdvd ) { ( void ) rtp ; ( void ) rtdvd ; }
void cst_robotarm_original_6f156994_6_computeAsmRuntimeDerivedValuesInts (
const double * rtp , int * rtdvi ) { ( void ) rtp ; ( void ) rtdvi ; } void
cst_robotarm_original_6f156994_6_computeAsmRuntimeDerivedValues ( const
double * rtp , RuntimeDerivedValuesBundle * rtdv ) {
cst_robotarm_original_6f156994_6_computeAsmRuntimeDerivedValuesDoubles ( rtp
, rtdv -> mDoubles . mValues ) ;
cst_robotarm_original_6f156994_6_computeAsmRuntimeDerivedValuesInts ( rtp ,
rtdv -> mInts . mValues ) ; } void
cst_robotarm_original_6f156994_6_computeSimRuntimeDerivedValuesDoubles (
const double * rtp , double * rtdvd ) { ( void ) rtp ; ( void ) rtdvd ; }
void cst_robotarm_original_6f156994_6_computeSimRuntimeDerivedValuesInts (
const double * rtp , int * rtdvi ) { ( void ) rtp ; ( void ) rtdvi ; } void
cst_robotarm_original_6f156994_6_computeSimRuntimeDerivedValues ( const
double * rtp , RuntimeDerivedValuesBundle * rtdv ) {
cst_robotarm_original_6f156994_6_computeSimRuntimeDerivedValuesDoubles ( rtp
, rtdv -> mDoubles . mValues ) ;
cst_robotarm_original_6f156994_6_computeSimRuntimeDerivedValuesInts ( rtp ,
rtdv -> mInts . mValues ) ; }
