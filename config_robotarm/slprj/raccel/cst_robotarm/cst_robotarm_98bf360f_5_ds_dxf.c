#include "ne_ds.h"
#include "cst_robotarm_98bf360f_5_ds_dxf.h"
#include "cst_robotarm_98bf360f_5_ds_sys_struct.h"
#include "cst_robotarm_98bf360f_5_ds_externals.h"
#include "cst_robotarm_98bf360f_5_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T cst_robotarm_98bf360f_5_ds_dxf ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t4 , NeDsMethodOutput * t5 ) { PmRealVector out ;
real_T t0 ; real_T t1 ; real_T t2 ; int32_T M_idx_4 ; int32_T M_idx_0 ;
int32_T M_idx_1 ; int32_T M_idx_2 ; int32_T M_idx_3 ; M_idx_0 = t4 -> mM . mX
[ 0 ] ; M_idx_1 = t4 -> mM . mX [ 1 ] ; M_idx_2 = t4 -> mM . mX [ 2 ] ;
M_idx_3 = t4 -> mM . mX [ 3 ] ; M_idx_4 = t4 -> mM . mX [ 4 ] ; out = t5 ->
mDXF ; if ( M_idx_0 != 0 ) { t0 = 0.074999999625046387 ; } else if ( M_idx_1
!= 0 ) { t0 = 0.074999999625046387 ; } else { t0 = 0.099999999500061845 ; }
if ( M_idx_0 != 0 ) { t1 = 0.0 ; } else if ( M_idx_1 != 0 ) { t1 = 0.0 ; }
else if ( M_idx_2 != 0 ) { t1 = 0.0 ; } else if ( M_idx_3 != 0 ) { t1 = - ( (
M_idx_4 != 0 ? - 1.0 : 1.0 ) * 2.4000000000000004 ) ; } else { t1 = 0.0 ; }
if ( M_idx_0 != 0 ) { t2 = 1.000000000075 ; } else if ( M_idx_1 != 0 ) { t2 =
1.000000000075 ; } else { t2 = 1.0000000001 ; } out . mX [ 0 ] = t0 *
0.41666666666666663 ; out . mX [ 1 ] = - ( M_idx_0 != 0 ? 1591.5494309189535
: 0.0 ) ; out . mX [ 2 ] = t1 * 0.41666666666666663 ; out . mX [ 3 ] = t2 *
0.41666666666666663 ; ( void ) sys ; ( void ) t5 ; return 0 ; }
