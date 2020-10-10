#include "ne_ds.h"
#include "cst_robotarm_original_6f156994_7_ds_dxf.h"
#include "cst_robotarm_original_6f156994_7_ds_sys_struct.h"
#include "cst_robotarm_original_6f156994_7_ds_externals.h"
#include "cst_robotarm_original_6f156994_7_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T cst_robotarm_original_6f156994_7_ds_dxf ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t7 , NeDsMethodOutput * t8 ) { PmRealVector
out ; real_T t0 ; real_T t1 ; real_T t2 ; real_T t3 ; real_T t4 ; real_T t5 ;
int32_T M_idx_5 ; int32_T M_idx_9 ; int32_T M_idx_0 ; int32_T M_idx_2 ;
int32_T M_idx_1 ; int32_T M_idx_6 ; int32_T M_idx_7 ; int32_T M_idx_8 ;
int32_T M_idx_3 ; int32_T M_idx_4 ; M_idx_0 = t7 -> mM . mX [ 0 ] ; M_idx_1 =
t7 -> mM . mX [ 1 ] ; M_idx_2 = t7 -> mM . mX [ 2 ] ; M_idx_3 = t7 -> mM . mX
[ 3 ] ; M_idx_4 = t7 -> mM . mX [ 4 ] ; M_idx_5 = t7 -> mM . mX [ 5 ] ;
M_idx_6 = t7 -> mM . mX [ 6 ] ; M_idx_7 = t7 -> mM . mX [ 7 ] ; M_idx_8 = t7
-> mM . mX [ 8 ] ; M_idx_9 = t7 -> mM . mX [ 9 ] ; out = t8 -> mDXF ; if (
M_idx_0 != 0 ) { t0 = 0.074999999625046387 ; } else if ( M_idx_2 != 0 ) { t0
= 0.074999999625046387 ; } else { t0 = 0.099999999500061845 ; } if ( M_idx_1
!= 0 ) { t1 = 0.074999999625046387 ; } else if ( M_idx_6 != 0 ) { t1 =
0.074999999625046387 ; } else { t1 = 0.099999999500061845 ; } if ( M_idx_1 !=
0 ) { t2 = 0.0 ; } else if ( M_idx_6 != 0 ) { t2 = 0.0 ; } else if ( M_idx_7
!= 0 ) { t2 = 0.0 ; } else if ( M_idx_8 != 0 ) { t2 = - ( ( M_idx_9 != 0 ? -
1.0 : 1.0 ) * 2.4000000000000004 ) ; } else { t2 = 0.0 ; } if ( M_idx_0 != 0
) { t3 = 0.0 ; } else if ( M_idx_2 != 0 ) { t3 = 0.0 ; } else if ( M_idx_3 !=
0 ) { t3 = 0.0 ; } else if ( M_idx_4 != 0 ) { t3 = - ( ( M_idx_5 != 0 ? - 1.0
: 1.0 ) * 2.4000000000000004 ) ; } else { t3 = 0.0 ; } if ( M_idx_0 != 0 ) {
t4 = 1.000000000075 ; } else if ( M_idx_2 != 0 ) { t4 = 1.000000000075 ; }
else { t4 = 1.0000000001 ; } if ( M_idx_1 != 0 ) { t5 = 1.000000000075 ; }
else if ( M_idx_6 != 0 ) { t5 = 1.000000000075 ; } else { t5 = 1.0000000001 ;
} out . mX [ 0 ] = t0 * 0.41666666666666663 ; out . mX [ 1 ] = t1 *
0.41666666666666663 ; out . mX [ 2 ] = - ( M_idx_0 != 0 ? 1591.5494309189535
: 0.0 ) ; out . mX [ 3 ] = - ( M_idx_1 != 0 ? 1591.5494309189535 : 0.0 ) ;
out . mX [ 4 ] = t2 * 0.41666666666666663 ; out . mX [ 5 ] = t3 *
0.41666666666666663 ; out . mX [ 6 ] = t4 * 0.41666666666666663 ; out . mX [
7 ] = t5 * 0.41666666666666663 ; ( void ) sys ; ( void ) t8 ; return 0 ; }
