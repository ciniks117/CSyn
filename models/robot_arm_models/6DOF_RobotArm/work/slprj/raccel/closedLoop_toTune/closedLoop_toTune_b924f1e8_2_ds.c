#include "__cf_closedLoop_toTune.h"
#include "ne_ds.h"
#include "closedLoop_toTune_b924f1e8_2_ds_zc.h"
#include "closedLoop_toTune_b924f1e8_2_ds_tdxy_p.h"
#include "closedLoop_toTune_b924f1e8_2_ds_y.h"
#include "closedLoop_toTune_b924f1e8_2_ds_obs_all.h"
#include "closedLoop_toTune_b924f1e8_2_ds_obs_act.h"
#include "closedLoop_toTune_b924f1e8_2_ds_m_p.h"
#include "closedLoop_toTune_b924f1e8_2_ds_log.h"
#include "closedLoop_toTune_b924f1e8_2_ds_dxy_p.h"
#include "closedLoop_toTune_b924f1e8_2_ds_dnf_p.h"
#include "closedLoop_toTune_b924f1e8_2_ds_tdxf_p.h"
#include "closedLoop_toTune_b924f1e8_2_ds_a_p.h"
#include "closedLoop_toTune_b924f1e8_2_ds_obs_il.h"
#include "closedLoop_toTune_b924f1e8_2_ds_a.h"
#include "closedLoop_toTune_b924f1e8_2_ds_dxf_p.h"
#include "closedLoop_toTune_b924f1e8_2_ds_dxf.h"
#include "closedLoop_toTune_b924f1e8_2_ds_mode.h"
#include "closedLoop_toTune_b924f1e8_2_ds_f.h"
#include "closedLoop_toTune_b924f1e8_2_ds.h"
#include "ssc_ml_fun.h"
#include "closedLoop_toTune_b924f1e8_2_ds_external_struct.h"
#include "closedLoop_toTune_b924f1e8_2_ds_sys_struct.h"
#include "closedLoop_toTune_b924f1e8_2_ds_externals.h"
static int32_T ds_m ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_vmm ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dxm_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_dxm
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dum_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dum ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_dtm_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dtm ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_b_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_b ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_c_p ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_c ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_vmf ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_slf ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_slf0 ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_duf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_duf ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dtf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dtf ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_ddf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_ddf ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_tduf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dnf ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dnf_v_x ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_ic ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_icr ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_icr_im ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_icr_id ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_icr_il ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dxicr ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dxicr_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_tduicr_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_mduy_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_mdxy_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_tduy_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dxy ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_duy_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_duy ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dty_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dty ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_cache_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_cache_i ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_update_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_update_i ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_sfo ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_sfp
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_init_r ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_init_i ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_assert ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_passert ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_iassert ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_del_t ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_del_v ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_del_v0 ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_del_tmax ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dxdelt_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dxdelt ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dudelt_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_dudelt ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dtdelt_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dtdelt ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_obs_exp ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dp_l ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dp_i ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dp_j ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_dp_r
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_qx ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_qu ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_qt ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_q1 ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_qx_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_qu_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_qt_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_q1_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_var_tol ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_eq_tol ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_lv ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_slv ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
NeDsMethodOutput * ds_output_m_p ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_m ( const NeDynamicSystem *
ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_vmm (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxm_p ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dum_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dum ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dtm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dtm ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_a_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_a ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_b_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_b ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_c_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_c ( const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_f ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_vmf ( const NeDynamicSystem
* ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_slf (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_slf0 ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_duf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_duf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dtf_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dtf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_ddf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_tduf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tdxf_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dnf_p ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dnf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dnf_v_x ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ic ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_icr_im ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_icr_id ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icr_il (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxicr ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_tduicr_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_mduy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_mdxy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_tduy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tdxy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_y ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_dxy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxy ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_duy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_duy ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dty_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dty ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_mode ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_zc ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_cache_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_cache_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_update_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_update_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_sfo ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_sfp ( const NeDynamicSystem
* ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_init_r
( const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_init_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_log ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_assert ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_passert ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_iassert (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_del_t ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_del_v ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_del_v0 ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_del_tmax ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dxdelt_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxdelt ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dudelt_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dudelt ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dtdelt_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dtdelt ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_obs_exp (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_obs_act ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_obs_all (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_obs_il ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dp_l ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dp_i ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dp_j ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dp_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_qx ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_qu ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_qt ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_q1 ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_qx_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_qu_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_qt_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_q1_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_var_tol (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_eq_tol ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_lv ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_slv ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static void release_reference ( NeDynamicSystem * ds ) ; static void
get_reference ( NeDynamicSystem * ds ) ; static NeDynamicSystem * diagnostics
( const NeDynamicSystem * ds ) ; static void expand ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , PmRealVector * out ) ; static
NeEquationData s_equation_data [ 30 ] = { { "" , 0U , 8 ,
NE_EQUATION_DOMAIN_TIME ,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 0U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 2U , 1U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 3U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
, 2U , 4U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 6U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 2U , 7U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 9U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 2U , 10U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 12U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 2U , 13U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 15U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
, 2U , 16U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 18U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 19U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 20U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 21U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position2/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 22U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 23U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 3U , 24U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 5U , 27U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
, 3U , 32U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
, 5U , 35U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 3U , 40U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 5U , 43U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 3U , 48U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 5U , 51U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 3U , 56U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 5U , 59U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
, 3U , 64U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
, 5U , 67U , FALSE , 1.0 , "1" , } } ; static NeVariableData s_variable_data
[ 30 ] = { {
 "Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
, 0U , 0 ,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1.0 , "1" , 0.0 , TRUE , 1U , 1U , NE_INIT_MODE_MANDATORY ,
"Angular velocity" , } , {
 "Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
, 0U , 0 ,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
, 1.0 , "1" , 0.0 , TRUE , 1U , 1U , NE_INIT_MODE_MANDATORY ,
"Angular velocity" , } , {
 "Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
, 0U , 0 ,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1.0 , "1" , 0.0 , TRUE , 1U , 1U , NE_INIT_MODE_MANDATORY ,
"Angular velocity" , } , {
 "Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
, 0U , 0 ,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1.0 , "1" , 0.0 , TRUE , 1U , 1U , NE_INIT_MODE_MANDATORY ,
"Angular velocity" , } , {
 "Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
, 0U , 0 ,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1.0 , "1" , 0.0 , TRUE , 1U , 1U , NE_INIT_MODE_MANDATORY ,
"Angular velocity" , } , {
 "Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
, 0U , 0 ,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
, 1.0 , "1" , 0.0 , TRUE , 1U , 1U , NE_INIT_MODE_MANDATORY ,
"Angular velocity" , } , {
 "Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
, 0U , 0 ,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1.0 , "1" , 0.0 , TRUE , 1U , 1U , NE_INIT_MODE_NONE , "Demanded torque" ,
} , {
 "Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
, 0U , 0 ,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
, 1.0 , "1" , 0.0 , TRUE , 1U , 1U , NE_INIT_MODE_NONE , "Demanded torque" ,
} , {
 "Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
, 0U , 0 ,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1.0 , "1" , 0.0 , TRUE , 1U , 1U , NE_INIT_MODE_NONE , "Demanded torque" ,
} , {
 "Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
, 0U , 0 ,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1.0 , "1" , 0.0 , TRUE , 1U , 1U , NE_INIT_MODE_NONE , "Demanded torque" ,
} , {
 "Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
, 0U , 0 ,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1.0 , "1" , 0.0 , TRUE , 1U , 1U , NE_INIT_MODE_NONE , "Demanded torque" ,
} , {
 "Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
, 0U , 0 ,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
, 1.0 , "1" , 0.0 , TRUE , 1U , 1U , NE_INIT_MODE_NONE , "Demanded torque" ,
} , {
"Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.i"
, 0U , 0 ,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.i" ,
0U , 0 ,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.i"
, 0U , 0 ,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.i"
, 0U , 0 ,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.i"
, 0U , 0 ,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.i" ,
0U , 0 ,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Angular_Velocity_Source.t"
, 0U , 0 ,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Angular Velocity Source"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Torque" , } , {
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Angular_Velocity_Source.t"
, 0U , 0 ,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Angular Velocity Source"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Torque" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Rot2Rev.Ideal_Angular_Velocity_Source.t"
, 0U , 0 ,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position/Rot2Rev/Ideal Angular Velocity Source"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Torque" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Angular_Velocity_Source.t"
, 0U , 0 ,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Angular Velocity Source"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Torque" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Rot2Rev.Ideal_Angular_Velocity_Source.t"
, 0U , 0 ,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position2/Rot2Rev/Ideal Angular Velocity Source"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Torque" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Angular_Velocity_Source.t"
, 0U , 0 ,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Angular Velocity Source"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Torque" , } , {
 "Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
, 0U , 0 ,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Electrical torque"
, } , {
 "Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
, 0U , 0 ,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Electrical torque"
, } , {
 "Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
, 0U , 0 ,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Electrical torque"
, } , {
 "Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
, 0U , 0 ,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Electrical torque"
, } , {
 "Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
, 0U , 0 ,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Electrical torque"
, } , {
 "Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
, 0U , 0 ,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Electrical torque"
, } } ; static NeVariableData * s_discrete_data = NULL ; static
NeObservableData s_observable_data [ 304 ] = { { "Plant.DC_Voltage_Source.i"
, "closedLoop_toTune/Plant/DC Voltage Source" , 1U , 1U , "A" , 1.0e-6 , "A"
, NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Plant.DC_Voltage_Source.n.v" , "closedLoop_toTune/Plant/DC Voltage Source" ,
1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Plant.DC_Voltage_Source.p.v" , "closedLoop_toTune/Plant/DC Voltage Source" ,
1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Plant.DC_Voltage_Source.v" , "closedLoop_toTune/Plant/DC Voltage Source" ,
1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Plant.ERef_Vcc.V.v" , "closedLoop_toTune/Plant/ERef Vcc" , 1U , 1U , "V" ,
1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Plant.MRRef_Motor.W.w" , "closedLoop_toTune/Plant/MRRef Motor" , 1U , 1U ,
"rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Plant.Robot.C.w" , "closedLoop_toTune/Plant/Robot" , 1U , 1U , "rad/s" ,
1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } , {
"Plant.Robot.FA_R.w" , "closedLoop_toTune/Plant/Robot" , 1U , 1U , "rad/s" ,
1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } , {
"Plant.Robot.GA_R.w" , "closedLoop_toTune/Plant/Robot" , 1U , 1U , "rad/s" ,
1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } , {
"Plant.Robot.Gripper.LFA_R.w" , "closedLoop_toTune/Plant/Robot/Gripper" , 1U
, 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Plant.Robot.Gripper.Mechanical_Rotational_Reference1.W.w" ,
"closedLoop_toTune/Plant/Robot/Gripper/Mechanical Rotational Reference1" , 1U
, 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity"
, } , { "Plant.Robot.Gripper.Mechanical_Rotational_Reference2.W.w" ,
"closedLoop_toTune/Plant/Robot/Gripper/Mechanical Rotational Reference2" , 1U
, 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity"
, } , { "Plant.Robot.Gripper.RFA_R.w" ,
"closedLoop_toTune/Plant/Robot/Gripper" , 1U , 1U , "rad/s" , 1.0e-6 , "1/s"
, NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } , {
"Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.C.w" ,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position1"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.R.w" ,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position1"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.C.w"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position1/Rot2Rev"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Angular_Velocity_Source.C.w"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Angular_Velocity_Source.R.w"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Angular_Velocity_Source.S"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "rad/s" , 1.0e-6 , "rad/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "S"
, } , {
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Angular_Velocity_Source.t"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Angular_Velocity_Source.w"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angular velocity" , } , {
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Torque_Sensor.C.w"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Torque_Sensor.R.w"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Torque_Sensor.T"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T" , } , {
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Torque_Sensor.t"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Torque_Sensor.w"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angular velocity" , } , {
"Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.R.w"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position1/Rot2Rev"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.C.w" ,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position3"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.R.w" ,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position3"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.C.w"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position3/Rot2Rev"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Angular_Velocity_Source.C.w"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Angular_Velocity_Source.R.w"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Angular_Velocity_Source.S"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "rad/s" , 1.0e-6 , "rad/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "S"
, } , {
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Angular_Velocity_Source.t"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Angular_Velocity_Source.w"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angular velocity" , } , {
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Torque_Sensor.C.w"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Torque_Sensor.R.w"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Torque_Sensor.T"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T" , } , {
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Torque_Sensor.t"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Torque_Sensor.w"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angular velocity" , } , {
"Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.R.w"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position3/Rot2Rev"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , { "Plant.Robot.LFA_R.w" ,
"closedLoop_toTune/Plant/Robot" , 1U , 1U , "rad/s" , 1.0e-6 , "1/s" ,
NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } , {
"Plant.Robot.Mechanical_Rotational_Reference.W.w" ,
"closedLoop_toTune/Plant/Robot/Mechanical Rotational Reference" , 1U , 1U ,
"rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Plant.Robot.Mechanical_Rotational_Reference1.W.w" ,
"closedLoop_toTune/Plant/Robot/Mechanical Rotational Reference1" , 1U , 1U ,
"rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Plant.Robot.Mechanical_Rotational_Reference2.W.w" ,
"closedLoop_toTune/Plant/Robot/Mechanical Rotational Reference2" , 1U , 1U ,
"rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Plant.Robot.RFA_R.w" , "closedLoop_toTune/Plant/Robot" , 1U , 1U , "rad/s" ,
1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } , {
"Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.C.w" ,
"closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.R.w" ,
"closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Rot2Rev.C.w" ,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position/Rot2Rev"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Rot2Rev.Ideal_Angular_Velocity_Source.C.w"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Rot2Rev.Ideal_Angular_Velocity_Source.R.w"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Rot2Rev.Ideal_Angular_Velocity_Source.S"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "rad/s" , 1.0e-6 , "rad/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "S"
, } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Rot2Rev.Ideal_Angular_Velocity_Source.t"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Rot2Rev.Ideal_Angular_Velocity_Source.w"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angular velocity" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Rot2Rev.Ideal_Torque_Sensor.C.w"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Rot2Rev.Ideal_Torque_Sensor.R.w"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Rot2Rev.Ideal_Torque_Sensor.T"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Rot2Rev.Ideal_Torque_Sensor.t"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Rot2Rev.Ideal_Torque_Sensor.w"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angular velocity" , } , {
"Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Rot2Rev.R.w" ,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position/Rot2Rev"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.C.w" ,
"closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position1"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.R.w" ,
"closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position1"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.C.w" ,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position1/Rot2Rev"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Angular_Velocity_Source.C.w"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Angular_Velocity_Source.R.w"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Angular_Velocity_Source.S"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "rad/s" , 1.0e-6 , "rad/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "S"
, } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Angular_Velocity_Source.t"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Angular_Velocity_Source.w"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angular velocity" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Torque_Sensor.C.w"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Torque_Sensor.R.w"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Torque_Sensor.T"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Torque_Sensor.t"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Torque_Sensor.w"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angular velocity" , } , {
"Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.R.w" ,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position1/Rot2Rev"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.C.w" ,
"closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position2"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.R.w" ,
"closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position2"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Rot2Rev.C.w" ,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position2/Rot2Rev"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Rot2Rev.Ideal_Angular_Velocity_Source.C.w"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position2/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Rot2Rev.Ideal_Angular_Velocity_Source.R.w"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position2/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Rot2Rev.Ideal_Angular_Velocity_Source.S"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position2/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "rad/s" , 1.0e-6 , "rad/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "S"
, } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Rot2Rev.Ideal_Angular_Velocity_Source.t"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position2/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Rot2Rev.Ideal_Angular_Velocity_Source.w"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position2/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angular velocity" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Rot2Rev.Ideal_Torque_Sensor.C.w"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position2/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Rot2Rev.Ideal_Torque_Sensor.R.w"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position2/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Rot2Rev.Ideal_Torque_Sensor.T"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position2/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Rot2Rev.Ideal_Torque_Sensor.t"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position2/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Rot2Rev.Ideal_Torque_Sensor.w"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position2/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angular velocity" , } , {
"Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Rot2Rev.R.w" ,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position2/Rot2Rev"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.C.w" ,
"closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position3"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.R.w" ,
"closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position3"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.C.w" ,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position3/Rot2Rev"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Angular_Velocity_Source.C.w"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Angular_Velocity_Source.R.w"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Angular_Velocity_Source.S"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "rad/s" , 1.0e-6 , "rad/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "S"
, } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Angular_Velocity_Source.t"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Angular_Velocity_Source.w"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Angular Velocity Source"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angular velocity" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Torque_Sensor.C.w"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Torque_Sensor.R.w"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Torque_Sensor.T"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Torque_Sensor.t"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Torque_Sensor.w"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angular velocity" , } , {
"Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.R.w" ,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position3/Rot2Rev"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , { "Plant.Robot.UA_R.w" ,
"closedLoop_toTune/Plant/Robot" , 1U , 1U , "rad/s" , 1.0e-6 , "1/s" ,
NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } , {
"Plant.Robot.WA_R.w" , "closedLoop_toTune/Plant/Robot" , 1U , 1U , "rad/s" ,
1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } , {
"Plant.Servomotors.C.w" , "closedLoop_toTune/Plant/Servomotors" , 1U , 1U ,
"rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE
, FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } ,
{ "Plant.Servomotors.FA_R.w" , "closedLoop_toTune/Plant/Servomotors" , 1U ,
1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity"
, } , { "Plant.Servomotors.Fore_Arm_Servomotor.C.w" ,
"closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor" , 1U , 1U , "rad/s"
, 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } , {
"Plant.Servomotors.Fore_Arm_Servomotor.R.w" ,
"closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor" , 1U , 1U , "rad/s"
, 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } , {
"Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.C.w" ,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Gear_Box.O.w"
,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Gear Box"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
"Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Gear_Box.S.w"
,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Gear Box"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
"Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Gear_Box.t_in"
,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Gear Box"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Input shaft incoming torque" , } , {
"Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Gear_Box.t_out"
,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Gear Box"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Output shaft incoming torque" , } , {
 "Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.C.w"
,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.R.w"
,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.T"
,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T" , } , {
 "Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.t"
,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
 "Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.w"
,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angular velocity" , } , {
"Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.R.w" ,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.Omega"
,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "w"
, } , {
"Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.R.w"
,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
"Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.Tr"
,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "N*m" , 1.0e-6 , "N*m" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Tr" , } , {
"Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.Vm.v"
,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.Vp.v"
,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.C.w"
,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.faulted"
,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "1" , 1.0e-6 , "1" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Faulted flag" , } , {
"Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.i"
,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "A" , 1.0e-6 , "A" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
 "Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.power_dissipated"
,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "W" , 1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" ,
} , {
"Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.t"
,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
 "Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Electrical torque" ,
} , {
 "Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Demanded torque" , }
, {
"Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.v"
,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
 "Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "rpm" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "Angular velocity" , } , {
"Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.x0.v" ,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.x1.v" ,
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Plant.Servomotors.Fore_Arm_Servomotor.x0.v" ,
"closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor" , 1U , 1U , "V" ,
1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Plant.Servomotors.Fore_Arm_Servomotor.x1.v" ,
"closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor" , 1U , 1U , "V" ,
1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Plant.Servomotors.GA_R.w" , "closedLoop_toTune/Plant/Servomotors" , 1U , 1U
, "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity"
, } , { "Plant.Servomotors.Gripper_Servomotor.C.w" ,
"closedLoop_toTune/Plant/Servomotors/Gripper Servomotor" , 1U , 1U , "rad/s"
, 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } , {
"Plant.Servomotors.Gripper_Servomotor.R.w" ,
"closedLoop_toTune/Plant/Servomotors/Gripper Servomotor" , 1U , 1U , "rad/s"
, 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } , {
"Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.C.w" ,
"closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Gear_Box.O.w" ,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Gear Box"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
"Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Gear_Box.S.w" ,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Gear Box"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
"Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Gear_Box.t_in"
,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Gear Box"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Input shaft incoming torque" , } , {
"Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Gear_Box.t_out"
,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Gear Box"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Output shaft incoming torque" , } , {
 "Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.C.w"
,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.R.w"
,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.T"
,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T" , } , {
 "Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.t"
,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
 "Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.w"
,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angular velocity" , } , {
"Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.R.w" ,
"closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.Omega"
,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "w"
, } , {
"Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.R.w"
,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
"Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.Tr"
,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "N*m" , 1.0e-6 , "N*m" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Tr" , } , {
"Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.Vm.v"
,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.Vp.v"
,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.C.w"
,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.faulted"
,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "1" , 1.0e-6 , "1" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Faulted flag" , } , {
"Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.i" ,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "A" , 1.0e-6 , "A" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
 "Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.power_dissipated"
,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "W" , 1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" ,
} , {
"Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.t" ,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
 "Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Electrical torque" ,
} , {
 "Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Demanded torque" , }
, {
"Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.v" ,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
 "Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
,
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "rpm" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "Angular velocity" , } , {
"Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.x0.v" ,
"closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.x1.v" ,
"closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Plant.Servomotors.Gripper_Servomotor.x0.v" ,
"closedLoop_toTune/Plant/Servomotors/Gripper Servomotor" , 1U , 1U , "V" ,
1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Plant.Servomotors.Gripper_Servomotor.x1.v" ,
"closedLoop_toTune/Plant/Servomotors/Gripper Servomotor" , 1U , 1U , "V" ,
1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Plant.Servomotors.LFA_R.w" , "closedLoop_toTune/Plant/Servomotors" , 1U , 1U
, "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity"
, } , { "Plant.Servomotors.Left_Finger_Servomotor.C.w" ,
"closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor" , 1U , 1U ,
"rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE
, FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } ,
{ "Plant.Servomotors.Left_Finger_Servomotor.R.w" ,
"closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor" , 1U , 1U ,
"rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } ,
{ "Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.C.w" ,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Gear_Box.O.w"
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Gear Box"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
"Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Gear_Box.S.w"
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Gear Box"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
"Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Gear_Box.t_in"
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Gear Box"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Input shaft incoming torque" , } , {
 "Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Gear_Box.t_out"
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Gear Box"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Output shaft incoming torque" , } , {
 "Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.C.w"
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.R.w"
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.T"
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T" , } , {
 "Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.t"
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
 "Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.w"
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angular velocity" , } , {
"Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.R.w" ,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.Omega"
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "w"
, } , {
 "Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.R.w"
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
"Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.Tr"
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "N*m" , 1.0e-6 , "N*m" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Tr" , } , {
 "Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.Vm.v"
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
 "Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.Vp.v"
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
 "Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.C.w"
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.faulted"
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "1" , 1.0e-6 , "1" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Faulted flag" , } , {
"Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.i"
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "A" , 1.0e-6 , "A" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
 "Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.power_dissipated"
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "W" , 1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" ,
} , {
"Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.t"
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
 "Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Electrical torque" ,
} , {
 "Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Demanded torque" , }
, {
"Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.v"
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
 "Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "rpm" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "Angular velocity" , } , {
"Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.x0.v" ,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.x1.v" ,
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Plant.Servomotors.Left_Finger_Servomotor.x0.v" ,
"closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor" , 1U , 1U , "V"
, 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Plant.Servomotors.Left_Finger_Servomotor.x1.v" ,
"closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor" , 1U , 1U , "V"
, 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Plant.Servomotors.Mechanical_Rotational_Reference.W.w" ,
"closedLoop_toTune/Plant/Servomotors/Mechanical Rotational Reference" , 1U ,
1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" ,
} , { "Plant.Servomotors.Mechanical_Rotational_Reference1.W.w" ,
"closedLoop_toTune/Plant/Servomotors/Mechanical Rotational Reference1" , 1U ,
1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" ,
} , { "Plant.Servomotors.Mechanical_Rotational_Reference2.W.w" ,
"closedLoop_toTune/Plant/Servomotors/Mechanical Rotational Reference2" , 1U ,
1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" ,
} , { "Plant.Servomotors.Mechanical_Rotational_Reference3.W.w" ,
"closedLoop_toTune/Plant/Servomotors/Mechanical Rotational Reference3" , 1U ,
1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" ,
} , { "Plant.Servomotors.Mechanical_Rotational_Reference4.W.w" ,
"closedLoop_toTune/Plant/Servomotors/Mechanical Rotational Reference4" , 1U ,
1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" ,
} , { "Plant.Servomotors.RFA_R.w" , "closedLoop_toTune/Plant/Servomotors" ,
1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , { "Plant.Servomotors.Right_Finger_Servomotor.C.w"
, "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor" , 1U , 1U ,
"rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE
, FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } ,
{ "Plant.Servomotors.Right_Finger_Servomotor.R.w" ,
"closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor" , 1U , 1U ,
"rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } ,
{ "Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.C.w" ,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Gear_Box.O.w"
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Gear Box"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
"Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Gear_Box.S.w"
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Gear Box"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Gear_Box.t_in"
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Gear Box"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Input shaft incoming torque" , } , {
 "Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Gear_Box.t_out"
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Gear Box"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Output shaft incoming torque" , } , {
 "Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.C.w"
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.R.w"
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.T"
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T" , } , {
 "Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.t"
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
 "Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.w"
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angular velocity" , } , {
"Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.R.w" ,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.Omega"
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "w"
, } , {
 "Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.R.w"
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.Tr"
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "N*m" , 1.0e-6 , "N*m" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Tr" , } , {
 "Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.Vm.v"
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
 "Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.Vp.v"
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
 "Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.C.w"
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.faulted"
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "1" , 1.0e-6 , "1" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Faulted flag" , } , {
"Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.i"
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "A" , 1.0e-6 , "A" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
 "Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.power_dissipated"
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "W" , 1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" ,
} , {
"Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.t"
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
 "Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Electrical torque" ,
} , {
 "Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Demanded torque" , }
, {
"Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.v"
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
 "Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "rpm" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "Angular velocity" , } , {
"Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.x0.v" ,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.x1.v" ,
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Plant.Servomotors.Right_Finger_Servomotor.x0.v" ,
"closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor" , 1U , 1U , "V"
, 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Plant.Servomotors.Right_Finger_Servomotor.x1.v" ,
"closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor" , 1U , 1U , "V"
, 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Plant.Servomotors.UA_R.w" , "closedLoop_toTune/Plant/Servomotors" , 1U , 1U
, "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity"
, } , { "Plant.Servomotors.Upper_Arm_Servomotor.C.w" ,
"closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor" , 1U , 1U ,
"rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE
, FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } ,
{ "Plant.Servomotors.Upper_Arm_Servomotor.R.w" ,
"closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor" , 1U , 1U ,
"rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } ,
{ "Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.C.w" ,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Gear_Box.O.w"
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Gear Box"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
"Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Gear_Box.S.w"
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Gear Box"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
"Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Gear_Box.t_in"
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Gear Box"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Input shaft incoming torque" , } , {
"Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Gear_Box.t_out"
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Gear Box"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Output shaft incoming torque" , } , {
 "Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.C.w"
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.R.w"
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.T"
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T" , } , {
 "Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.t"
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
 "Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.w"
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angular velocity" , } , {
"Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.R.w" ,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.Omega"
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "w"
, } , {
"Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.R.w"
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
"Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.Tr"
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "N*m" , 1.0e-6 , "N*m" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Tr" , } , {
"Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.Vm.v"
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.Vp.v"
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.C.w"
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.faulted"
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "1" , 1.0e-6 , "1" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Faulted flag" , } , {
"Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.i"
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "A" , 1.0e-6 , "A" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
 "Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.power_dissipated"
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "W" , 1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" ,
} , {
"Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.t"
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
 "Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Electrical torque" ,
} , {
 "Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Demanded torque" , }
, {
"Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.v"
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
 "Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "rpm" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "Angular velocity" , } , {
"Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.x0.v" ,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.x1.v" ,
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Plant.Servomotors.Upper_Arm_Servomotor.x0.v" ,
"closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor" , 1U , 1U , "V" ,
1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Plant.Servomotors.Upper_Arm_Servomotor.x1.v" ,
"closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor" , 1U , 1U , "V" ,
1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Plant.Servomotors.WA_R.w" , "closedLoop_toTune/Plant/Servomotors" , 1U , 1U
, "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity"
, } , { "Plant.Servomotors.Wrist_Servomotor.C.w" ,
"closedLoop_toTune/Plant/Servomotors/Wrist Servomotor" , 1U , 1U , "rad/s" ,
1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } , {
"Plant.Servomotors.Wrist_Servomotor.R.w" ,
"closedLoop_toTune/Plant/Servomotors/Wrist Servomotor" , 1U , 1U , "rad/s" ,
1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } , {
"Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.C.w" ,
"closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Gear_Box.O.w" ,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Gear Box"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
"Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Gear_Box.S.w" ,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Gear Box"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
"Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Gear_Box.t_in" ,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Gear Box"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Input shaft incoming torque" , } , {
"Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Gear_Box.t_out" ,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Gear Box"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Output shaft incoming torque" , } , {
 "Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.C.w"
,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.R.w"
,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.T"
,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T" , } , {
 "Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.t"
,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
 "Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.w"
,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angular velocity" , } , {
"Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.R.w" ,
"closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.Omega"
,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "w"
, } , {
"Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.R.w" ,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
"Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.Tr" ,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "N*m" , 1.0e-6 , "N*m" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Tr" , } , {
"Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.Vm.v"
,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.Vp.v"
,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.C.w" ,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "rad/s" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
"Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.faulted"
,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "1" , 1.0e-6 , "1" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Faulted flag" , } , {
"Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.i" ,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "A" , 1.0e-6 , "A" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
 "Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.power_dissipated"
,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "W" , 1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" ,
} , {
"Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.t" ,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
 "Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Electrical torque" ,
} , {
 "Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "N*m" , 1.0e-6 , "J" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Demanded torque" , }
, { "Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.v"
,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
 "Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
,
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U , "rpm" , 1.0e-6 , "1/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "Angular velocity" , } , {
"Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.x0.v" ,
"closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.x1.v" ,
"closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor"
, 1U , 1U , "V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Plant.Servomotors.Wrist_Servomotor.x0.v" ,
"closedLoop_toTune/Plant/Servomotors/Wrist Servomotor" , 1U , 1U , "V" ,
1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Plant.Servomotors.Wrist_Servomotor.x1.v" ,
"closedLoop_toTune/Plant/Servomotors/Wrist Servomotor" , 1U , 1U , "V" ,
1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Plant.Servomotors.x0.v" , "closedLoop_toTune/Plant/Servomotors" , 1U , 1U ,
"V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Plant.Servomotors.x1.v" , "closedLoop_toTune/Plant/Servomotors" , 1U , 1U ,
"V" , 1.0e-6 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } } ; static
NeModeData * s_major_mode_data = NULL ; static NeZCData s_zc_data [ 6 ] = { {
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 0U ,
"Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U ,
"Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 2U ,
"Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor"
,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 3U ,
"Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor"
,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 4U ,
"Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 5U ,
"Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, NE_ZC_TYPE_FALSE , } } ; static NeRange s_range [ 6 ] = { {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeAssertData
s_assert_data [ 36 ] = { {
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 0U ,
"Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireExponentPositive" , } , {
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 1U ,
"Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireBaseNonnegative" , } , {
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 2U ,
"Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireExponentPositive" , } , {
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 3U ,
"Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireBaseNonnegative" , } , {
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 4U ,
"Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireExponentPositive" , } , {
 "closedLoop_toTune/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 5U ,
"Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireBaseNonnegative" , } , {
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 6U ,
"Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireExponentPositive" , } , {
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 7U ,
"Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireBaseNonnegative" , } , {
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 8U ,
"Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireExponentPositive" , } , {
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 9U ,
"Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireBaseNonnegative" , } , {
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 10U ,
"Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireExponentPositive" , } , {
 "closedLoop_toTune/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 11U ,
"Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireBaseNonnegative" , } , {
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 12U ,
"Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor"
,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireExponentPositive" , } , {
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 13U ,
"Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor"
,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireBaseNonnegative" , } , {
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 14U ,
"Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor"
,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireExponentPositive" , } , {
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 15U ,
"Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor"
,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireBaseNonnegative" , } , {
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 16U ,
"Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor"
,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireExponentPositive" , } , {
 "closedLoop_toTune/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 17U ,
"Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor"
,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireBaseNonnegative" , } , {
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 18U ,
"Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor"
,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireExponentPositive" , } , {
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 19U ,
"Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor"
,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireBaseNonnegative" , } , {
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 20U ,
"Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor"
,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireExponentPositive" , } , {
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 21U ,
"Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor"
,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireBaseNonnegative" , } , {
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 22U ,
"Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor"
,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireExponentPositive" , } , {
 "closedLoop_toTune/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 23U ,
"Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor"
,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireBaseNonnegative" , } , {
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 24U ,
"Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireExponentPositive" , } , {
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 25U ,
"Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireBaseNonnegative" , } , {
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 26U ,
"Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireExponentPositive" , } , {
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 27U ,
"Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireBaseNonnegative" , } , {
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 28U ,
"Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireExponentPositive" , } , {
 "closedLoop_toTune/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 29U ,
"Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireBaseNonnegative" , } , {
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 30U ,
"Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireExponentPositive" , } , {
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 31U ,
"Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireBaseNonnegative" , } , {
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 32U ,
"Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireExponentPositive" , } , {
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 33U ,
"Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireBaseNonnegative" , } , {
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 34U ,
"Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireExponentPositive" , } , {
 "closedLoop_toTune/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
, 1U , 35U ,
"Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireBaseNonnegative" , } } ; static
NeRange s_assert_range [ 36 ] = { {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeAssertData *
s_param_assert_data = NULL ; static NeRange * s_param_assert_range = NULL ;
static NeAssertData * s_initial_assert_data = NULL ; static NeRange *
s_initial_assert_range = NULL ; static NeRange s_equation_range [ 72 ] = { {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sources/angular_velocity.ssc"
, 36U , 5U , 36U , 19U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sources/angular_velocity.ssc"
, 36U , 5U , 36U , 19U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sources/angular_velocity.ssc"
, 36U , 5U , 36U , 19U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sources/angular_velocity.ssc"
, 36U , 5U , 36U , 19U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sources/angular_velocity.ssc"
, 36U , 5U , 36U , 19U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sources/angular_velocity.ssc"
, 36U , 5U , 36U , 19U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeParameterData
* s_logical_parameter_data = NULL ; static NeParameterData *
s_integer_parameter_data = NULL ; static NeParameterData *
s_index_parameter_data = NULL ; static NeParameterData *
s_real_parameter_data = NULL ; static NeDsMethodOutput * ds_output_m_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mM_P . mNumCol = 30 ;
out -> mM_P . mNumRow = 30 ; out -> mM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 31 ) ; out -> mM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 12 ) ;
return out ; } static NeDsMethodOutput * ds_output_m ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mM . mN = 12 ; out -> mM . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 12 ) ; return out
; } static NeDsMethodOutput * ds_output_vmm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVMM . mN = 12 ; out -> mVMM . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 12
) ; return out ; } static NeDsMethodOutput * ds_output_dxm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXM_P . mNumCol = 30 ; out ->
mDXM_P . mNumRow = 12 ; out -> mDXM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 31 ) ; out -> mDXM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXM . mN = 0 ; out -> mDXM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dum_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUM_P . mNumCol = 12 ; out ->
mDUM_P . mNumRow = 12 ; out -> mDUM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 13 ) ; out -> mDUM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dum ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUM . mN = 0 ; out -> mDUM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dtm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTM_P . mNumCol = 1 ; out ->
mDTM_P . mNumRow = 12 ; out -> mDTM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dtm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTM . mN = 0 ; out -> mDTM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_a_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mA_P . mNumCol = 30 ; out ->
mA_P . mNumRow = 30 ; out -> mA_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 31 ) ; out -> mA_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 42 ) ;
return out ; } static NeDsMethodOutput * ds_output_a ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mA . mN = 42 ; out -> mA . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 42 ) ; return out
; } static NeDsMethodOutput * ds_output_b_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mB_P . mNumCol = 12 ; out -> mB_P . mNumRow
= 30 ; out -> mB_P . mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator
, sizeof ( int32_T ) , 13 ) ; out -> mB_P . mIr = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 12 ) ; return out ; } static
NeDsMethodOutput * ds_output_b ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mB . mN = 12 ; out -> mB . mX = ( real_T * ) allocator -> mCallocFcn (
allocator , sizeof ( real_T ) , 12 ) ; return out ; } static NeDsMethodOutput
* ds_output_c_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mC_P .
mNumCol = 1 ; out -> mC_P . mNumRow = 30 ; out -> mC_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mC_P
. mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T
) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_c ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mC . mN = 0 ; out -> mC . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_f ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mF . mN = 30 ; out -> mF . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 30 ) ; return out
; } static NeDsMethodOutput * ds_output_vmf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVMF . mN = 30 ; out -> mVMF . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 30
) ; return out ; } static NeDsMethodOutput * ds_output_slf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLF . mN = 30 ; out -> mSLF .
mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T
) , 30 ) ; return out ; } static NeDsMethodOutput * ds_output_slf0 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLF0 . mN = 30 ; out -> mSLF0 .
mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T
) , 30 ) ; return out ; } static NeDsMethodOutput * ds_output_dxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXF_P . mNumCol = 30 ; out ->
mDXF_P . mNumRow = 30 ; out -> mDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 31 ) ; out -> mDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 30 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXF . mN = 30 ; out -> mDXF .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
30 ) ; return out ; } static NeDsMethodOutput * ds_output_duf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUF_P . mNumCol = 12 ; out ->
mDUF_P . mNumRow = 30 ; out -> mDUF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 13 ) ; out -> mDUF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_duf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUF . mN = 0 ; out -> mDUF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dtf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTF_P . mNumCol = 1 ; out ->
mDTF_P . mNumRow = 30 ; out -> mDTF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dtf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTF . mN = 0 ; out -> mDTF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_ddf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDF_P . mNumCol = 0 ; out ->
mDDF_P . mNumRow = 30 ; out -> mDDF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDDF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_ddf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDF . mN = 0 ; out -> mDDF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_tduf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUF_P . mNumCol = 12 ; out ->
mTDUF_P . mNumRow = 30 ; out -> mTDUF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 13 ) ; out -> mTDUF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 12 ) ;
return out ; } static NeDsMethodOutput * ds_output_tdxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDXF_P . mNumCol = 30 ; out ->
mTDXF_P . mNumRow = 30 ; out -> mTDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 31 ) ; out -> mTDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 66 ) ;
return out ; } static NeDsMethodOutput * ds_output_dnf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF_P . mNumCol = 54 ; out ->
mDNF_P . mNumRow = 30 ; out -> mDNF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 55 ) ; out -> mDNF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ;
return out ; } static NeDsMethodOutput * ds_output_dnf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF . mN = 6 ; out -> mDNF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 6 )
; return out ; } static NeDsMethodOutput * ds_output_dnf_v_x ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF_V_X . mN = 30 ; out ->
mDNF_V_X . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof
( boolean_T ) , 30 ) ; return out ; } static NeDsMethodOutput * ds_output_ic
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mIC . mN = 30 ; out ->
mIC . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 30 ) ; return out ; } static NeDsMethodOutput * ds_output_icr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR . mN = 0 ; out -> mICR . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_icr_im ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR_IM . mN = 0 ; out ->
mICR_IM . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_icr_id (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR_ID . mN = 0 ; out
-> mICR_ID . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( boolean_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_icr_il ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mICR_IL . mN = 0 ; out -> mICR_IL . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_dxicr ( const NeDynamicSystem * ds , PmAllocator
* allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXICR . mN = 0 ; out -> mDXICR . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICR_P . mNumCol = 30 ; out ->
mDXICR_P . mNumRow = 0 ; out -> mDXICR_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 31 ) ; out -> mDXICR_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_tduicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUICR_P . mNumCol = 12 ; out
-> mTDUICR_P . mNumRow = 0 ; out -> mTDUICR_P . mJc = ( int32_T * ) allocator
-> mCallocFcn ( allocator , sizeof ( int32_T ) , 13 ) ; out -> mTDUICR_P .
mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T )
, 0 ) ; return out ; } static NeDsMethodOutput * ds_output_mduy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMDUY_P . mNumCol = 12 ; out ->
mMDUY_P . mNumRow = 18 ; out -> mMDUY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 13 ) ; out -> mMDUY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_mdxy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMDXY_P . mNumCol = 30 ; out ->
mMDXY_P . mNumRow = 18 ; out -> mMDXY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 31 ) ; out -> mMDXY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_tduy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUY_P . mNumCol = 12 ; out ->
mTDUY_P . mNumRow = 18 ; out -> mTDUY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 13 ) ; out -> mTDUY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_tdxy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDXY_P . mNumCol = 30 ; out ->
mTDXY_P . mNumRow = 18 ; out -> mTDXY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 31 ) ; out -> mTDXY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 18 ) ;
return out ; } static NeDsMethodOutput * ds_output_y ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mY . mN = 18 ; out -> mY . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 18 ) ; return out
; } static NeDsMethodOutput * ds_output_dxy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXY_P . mNumCol = 30 ; out -> mDXY_P .
mNumRow = 18 ; out -> mDXY_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 31 ) ; out -> mDXY_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 18 ) ; return out
; } static NeDsMethodOutput * ds_output_dxy ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXY . mN = 18 ; out -> mDXY . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 18 ) ;
return out ; } static NeDsMethodOutput * ds_output_duy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUY_P . mNumCol = 12 ; out ->
mDUY_P . mNumRow = 18 ; out -> mDUY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 13 ) ; out -> mDUY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_duy ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUY . mN = 0 ; out -> mDUY . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dty_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTY_P . mNumCol = 1 ; out ->
mDTY_P . mNumRow = 18 ; out -> mDTY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dty ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTY . mN = 0 ; out -> mDTY . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_mode ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMODE . mN = 6 ; out -> mMODE .
mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) ,
6 ) ; return out ; } static NeDsMethodOutput * ds_output_zc ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mZC . mN = 6 ; out -> mZC . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 6 ) ;
return out ; } static NeDsMethodOutput * ds_output_cache_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCACHE_R . mN = 0 ; out ->
mCACHE_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_cache_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCACHE_I . mN = 0 ;
out -> mCACHE_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_update_r ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mUPDATE_R . mN = 0 ; out -> mUPDATE_R . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_update_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mUPDATE_I . mN = 0 ; out -> mUPDATE_I . mX
= ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0
) ; return out ; } static NeDsMethodOutput * ds_output_sfo ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSFO . mN = 0 ; out -> mSFO . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_sfp ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSFP . mN = 0 ; out -> mSFP . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_init_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mINIT_R . mN = 0 ; out ->
mINIT_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_init_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mINIT_I . mN = 0 ; out
-> mINIT_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_log (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLOG . mN = 304 ; out
-> mLOG . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 304 ) ; return out ; } static NeDsMethodOutput * ds_output_assert
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mASSERT . mN = 36 ;
out -> mASSERT . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 36 ) ; return out ; } static NeDsMethodOutput *
ds_output_passert ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mPASSERT . mN = 0 ; out -> mPASSERT . mX = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_iassert ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mIASSERT . mN = 0 ; out -> mIASSERT . mX =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_del_t ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_T . mN = 0 ; out -> mDEL_T
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_v ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_V . mN = 0 ; out -> mDEL_V
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_v0 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_V0 . mN = 0 ; out ->
mDEL_V0 . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_tmax
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_TMAX . mN = 0 ;
out -> mDEL_TMAX . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_dxdelt_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mDXDELT_P . mNumCol = 30 ; out -> mDXDELT_P . mNumRow = 0 ; out -> mDXDELT_P
. mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T
) , 31 ) ; out -> mDXDELT_P . mIr = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput
* ds_output_dxdelt ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mDXDELT . mN = 0 ; out -> mDXDELT . mX = ( real_T * ) allocator -> mCallocFcn
( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_dudelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDUDELT_P . mNumCol = 12 ; out -> mDUDELT_P
. mNumRow = 0 ; out -> mDUDELT_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 13 ) ; out -> mDUDELT_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dudelt ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUDELT . mN = 0 ; out ->
mDUDELT . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dtdelt_p
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTDELT_P . mNumCol =
1 ; out -> mDTDELT_P . mNumRow = 0 ; out -> mDTDELT_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out ->
mDTDELT_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dtdelt
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTDELT . mN = 0 ; out
-> mDTDELT . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_obs_exp (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mOBS_EXP . mN = 304 ;
out -> mOBS_EXP . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 304 ) ; return out ; } static NeDsMethodOutput *
ds_output_obs_act ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mOBS_ACT . mN = 304 ; out -> mOBS_ACT . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 304 ) ; return out ; } static
NeDsMethodOutput * ds_output_obs_all ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mOBS_ALL . mN = 304 ; out -> mOBS_ALL . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 304
) ; return out ; } static NeDsMethodOutput * ds_output_obs_il ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mOBS_IL . mN = 304 ; out ->
mOBS_IL . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 304 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_l
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_L . mN = 0 ; out
-> mDP_L . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_I . mN = 0 ; out
-> mDP_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_j (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_J . mN = 0 ; out
-> mDP_J . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_R . mN = 0 ; out
-> mDP_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_qx (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mQX . mN = 0 ; out ->
mQX . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_qu ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mQU . mN = 0 ; out -> mQU . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_qt ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQT . mN = 0 ; out -> mQT . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out
; } static NeDsMethodOutput * ds_output_q1 ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQ1 . mN = 0 ; out -> mQ1 . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out
; } static NeDsMethodOutput * ds_output_qx_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQX_P . mNumCol = 30 ; out -> mQX_P .
mNumRow = 30 ; out -> mQX_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 31 ) ; out -> mQX_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_qu_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQU_P . mNumCol = 12 ; out -> mQU_P .
mNumRow = 30 ; out -> mQU_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 13 ) ; out -> mQU_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_qt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQT_P . mNumCol = 1 ; out -> mQT_P .
mNumRow = 30 ; out -> mQT_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mQT_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_q1_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQ1_P . mNumCol = 1 ; out -> mQ1_P .
mNumRow = 30 ; out -> mQ1_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mQ1_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_var_tol ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVAR_TOL . mN = 30 ; out -> mVAR_TOL . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 30 ) ;
return out ; } static NeDsMethodOutput * ds_output_eq_tol ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mEQ_TOL . mN = 30 ; out ->
mEQ_TOL . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 30 ) ; return out ; } static NeDsMethodOutput * ds_output_lv (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLV . mN = 30 ; out ->
mLV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 30 ) ; return out ; } static NeDsMethodOutput * ds_output_slv (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLV . mN = 30 ; out
-> mSLV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 30 ) ; return out ; } static void release_reference (
NeDynamicSystem * ds ) { _NeDynamicSystem * _ds ; _ds = ( _NeDynamicSystem *
) ds ; if ( -- _ds -> mRefCnt == 0 ) { _ds -> mAlloc . mFreeFcn ( & _ds ->
mAlloc , _ds ) ; } } static void get_reference ( NeDynamicSystem * ds ) {
_NeDynamicSystem * _ds ; _ds = ( _NeDynamicSystem * ) ds ; ++ _ds -> mRefCnt
; } static NeDynamicSystem * diagnostics ( const NeDynamicSystem * ds ) {
_NeDynamicSystem * _ds = ( _NeDynamicSystem * ) ds ; ne_ds_get_reference ( &
_ds -> mBase ) ; return & _ds -> mBase ; } static void expand ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , PmRealVector * out )
{ ( void ) ds ; memcpy ( out -> mX , in -> mX . mX , sizeof ( real_T ) * out
-> mN ) ; } NeDynamicSystem * closedLoop_toTune_b924f1e8_2_dae_ds (
PmAllocator * allocator ) { NeDynamicSystem * ds ; _NeDynamicSystem * _ds ;
static NeDsIoInfo input_info [ 12 ] ; static NeDsIoInfo output_info [ 18 ] ;
_ds = ( _NeDynamicSystem * ) allocator -> mCallocFcn ( allocator , sizeof (
_NeDynamicSystem ) , 1 ) ; _ds -> mAlloc = * allocator ; _ds -> mRefCnt = 1 ;
ds = & _ds -> mBase ; ds -> mNumVariables = 30 ; ds ->
mNumDiscreteRealVariables = 0 ; ds -> mNumDifferentialVariables = 12 ; ds ->
mNumEquations = 30 ; ds -> mNumICResiduals = 0 ; ds -> mNumModes = 6 ; ds ->
mNumMajorModes = 0 ; ds -> mNumRealCache = 0 ; ds -> mNumIntCache = 0 ; ds ->
mNumObservables = 304 ; ds -> mNumObservableElements = 304 ; ds -> mNumZcs =
6 ; ds -> mNumAsserts = 36 ; ds -> mNumAssertRanges = 36 ; ds ->
mNumParamAsserts = 0 ; ds -> mNumParamAssertRanges = 0 ; ds ->
mNumInitialAsserts = 0 ; ds -> mNumInitialAssertRanges = 0 ; ds -> mNumRanges
= 6 ; ds -> mNumEquationRanges = 72 ; ds -> mNumFundamentalSamples = 0 ; ds
-> mNumDelays = 0 ; ds -> mNumLogicalParameters = 0 ; ds ->
mNumIntegerParameters = 0 ; ds -> mNumIndexParameters = 0 ; ds ->
mNumRealParameters = 0 ; ds -> mNumLogicalDerivedParameters = 0 ; ds ->
mNumIntegerDerivedParameters = 0 ; ds -> mNumIndexDerivedParameters = 0 ; ds
-> mNumRealDerivedParameters = 0 ; ds -> mIsOutputLinear = TRUE ; ds ->
mIsOutputSwitchedLinear = TRUE ; ds -> mNumIo [ NE_INPUT_IO_TYPE ] = 12 ;
input_info [ 0 ] . mIdentifier =
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Angular_Velocity_Source.S"
; input_info [ 0 ] . mM = 1 ; input_info [ 0 ] . mN = 1 ; input_info [ 0 ] .
mName =
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Angular_Velocity_Source.S"
; input_info [ 0 ] . mUnit = "rad/s" ; input_info [ 1 ] . mIdentifier =
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Angular_Velocity_Source.S"
; input_info [ 1 ] . mM = 1 ; input_info [ 1 ] . mN = 1 ; input_info [ 1 ] .
mName =
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Angular_Velocity_Source.S"
; input_info [ 1 ] . mUnit = "rad/s" ; input_info [ 2 ] . mIdentifier =
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Rot2Rev.Ideal_Angular_Velocity_Source.S"
; input_info [ 2 ] . mM = 1 ; input_info [ 2 ] . mN = 1 ; input_info [ 2 ] .
mName =
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Rot2Rev.Ideal_Angular_Velocity_Source.S"
; input_info [ 2 ] . mUnit = "rad/s" ; input_info [ 3 ] . mIdentifier =
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Angular_Velocity_Source.S"
; input_info [ 3 ] . mM = 1 ; input_info [ 3 ] . mN = 1 ; input_info [ 3 ] .
mName =
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Angular_Velocity_Source.S"
; input_info [ 3 ] . mUnit = "rad/s" ; input_info [ 4 ] . mIdentifier =
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Rot2Rev.Ideal_Angular_Velocity_Source.S"
; input_info [ 4 ] . mM = 1 ; input_info [ 4 ] . mN = 1 ; input_info [ 4 ] .
mName =
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Rot2Rev.Ideal_Angular_Velocity_Source.S"
; input_info [ 4 ] . mUnit = "rad/s" ; input_info [ 5 ] . mIdentifier =
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Angular_Velocity_Source.S"
; input_info [ 5 ] . mM = 1 ; input_info [ 5 ] . mN = 1 ; input_info [ 5 ] .
mName =
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Angular_Velocity_Source.S"
; input_info [ 5 ] . mUnit = "rad/s" ; input_info [ 6 ] . mIdentifier =
"Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.Tr"
; input_info [ 6 ] . mM = 1 ; input_info [ 6 ] . mN = 1 ; input_info [ 6 ] .
mName =
"Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.Tr"
; input_info [ 6 ] . mUnit = "N*m" ; input_info [ 7 ] . mIdentifier =
"Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.Tr"
; input_info [ 7 ] . mM = 1 ; input_info [ 7 ] . mN = 1 ; input_info [ 7 ] .
mName =
"Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.Tr"
; input_info [ 7 ] . mUnit = "N*m" ; input_info [ 8 ] . mIdentifier =
"Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.Tr"
; input_info [ 8 ] . mM = 1 ; input_info [ 8 ] . mN = 1 ; input_info [ 8 ] .
mName =
"Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.Tr"
; input_info [ 8 ] . mUnit = "N*m" ; input_info [ 9 ] . mIdentifier =
 "Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.Tr"
; input_info [ 9 ] . mM = 1 ; input_info [ 9 ] . mN = 1 ; input_info [ 9 ] .
mName =
 "Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.Tr"
; input_info [ 9 ] . mUnit = "N*m" ; input_info [ 10 ] . mIdentifier =
"Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.Tr"
; input_info [ 10 ] . mM = 1 ; input_info [ 10 ] . mN = 1 ; input_info [ 10 ]
. mName =
"Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.Tr"
; input_info [ 10 ] . mUnit = "N*m" ; input_info [ 11 ] . mIdentifier =
"Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.Tr" ;
input_info [ 11 ] . mM = 1 ; input_info [ 11 ] . mN = 1 ; input_info [ 11 ] .
mName =
"Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.Tr" ;
input_info [ 11 ] . mUnit = "N*m" ; ds -> mIo [ NE_INPUT_IO_TYPE ] =
input_info ; ds -> mNumIo [ NE_OUTPUT_IO_TYPE ] = 18 ; output_info [ 0 ] .
mIdentifier =
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Torque_Sensor.T"
; output_info [ 0 ] . mM = 1 ; output_info [ 0 ] . mN = 1 ; output_info [ 0 ]
. mName =
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Torque_Sensor.T"
; output_info [ 0 ] . mUnit = "N*m" ; output_info [ 1 ] . mIdentifier =
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Torque_Sensor.T"
; output_info [ 1 ] . mM = 1 ; output_info [ 1 ] . mN = 1 ; output_info [ 1 ]
. mName =
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Torque_Sensor.T"
; output_info [ 1 ] . mUnit = "N*m" ; output_info [ 2 ] . mIdentifier =
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Rot2Rev.Ideal_Torque_Sensor.T"
; output_info [ 2 ] . mM = 1 ; output_info [ 2 ] . mN = 1 ; output_info [ 2 ]
. mName =
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Rot2Rev.Ideal_Torque_Sensor.T"
; output_info [ 2 ] . mUnit = "N*m" ; output_info [ 3 ] . mIdentifier =
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Torque_Sensor.T"
; output_info [ 3 ] . mM = 1 ; output_info [ 3 ] . mN = 1 ; output_info [ 3 ]
. mName =
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Torque_Sensor.T"
; output_info [ 3 ] . mUnit = "N*m" ; output_info [ 4 ] . mIdentifier =
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Rot2Rev.Ideal_Torque_Sensor.T"
; output_info [ 4 ] . mM = 1 ; output_info [ 4 ] . mN = 1 ; output_info [ 4 ]
. mName =
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Rot2Rev.Ideal_Torque_Sensor.T"
; output_info [ 4 ] . mUnit = "N*m" ; output_info [ 5 ] . mIdentifier =
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Torque_Sensor.T"
; output_info [ 5 ] . mM = 1 ; output_info [ 5 ] . mN = 1 ; output_info [ 5 ]
. mName =
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Torque_Sensor.T"
; output_info [ 5 ] . mUnit = "N*m" ; output_info [ 6 ] . mIdentifier =
 "Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.T"
; output_info [ 6 ] . mM = 1 ; output_info [ 6 ] . mN = 1 ; output_info [ 6 ]
. mName =
 "Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.T"
; output_info [ 6 ] . mUnit = "N*m" ; output_info [ 7 ] . mIdentifier =
"Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.Omega"
; output_info [ 7 ] . mM = 1 ; output_info [ 7 ] . mN = 1 ; output_info [ 7 ]
. mName =
"Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.Omega"
; output_info [ 7 ] . mUnit = "rad/s" ; output_info [ 8 ] . mIdentifier =
 "Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.T"
; output_info [ 8 ] . mM = 1 ; output_info [ 8 ] . mN = 1 ; output_info [ 8 ]
. mName =
 "Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.T"
; output_info [ 8 ] . mUnit = "N*m" ; output_info [ 9 ] . mIdentifier =
"Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.Omega"
; output_info [ 9 ] . mM = 1 ; output_info [ 9 ] . mN = 1 ; output_info [ 9 ]
. mName =
"Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.Omega"
; output_info [ 9 ] . mUnit = "rad/s" ; output_info [ 10 ] . mIdentifier =
 "Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.T"
; output_info [ 10 ] . mM = 1 ; output_info [ 10 ] . mN = 1 ; output_info [
10 ] . mName =
 "Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.T"
; output_info [ 10 ] . mUnit = "N*m" ; output_info [ 11 ] . mIdentifier =
 "Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.Omega"
; output_info [ 11 ] . mM = 1 ; output_info [ 11 ] . mN = 1 ; output_info [
11 ] . mName =
 "Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.Omega"
; output_info [ 11 ] . mUnit = "rad/s" ; output_info [ 12 ] . mIdentifier =
 "Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.T"
; output_info [ 12 ] . mM = 1 ; output_info [ 12 ] . mN = 1 ; output_info [
12 ] . mName =
 "Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.T"
; output_info [ 12 ] . mUnit = "N*m" ; output_info [ 13 ] . mIdentifier =
 "Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.Omega"
; output_info [ 13 ] . mM = 1 ; output_info [ 13 ] . mN = 1 ; output_info [
13 ] . mName =
 "Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.Omega"
; output_info [ 13 ] . mUnit = "rad/s" ; output_info [ 14 ] . mIdentifier =
 "Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.T"
; output_info [ 14 ] . mM = 1 ; output_info [ 14 ] . mN = 1 ; output_info [
14 ] . mName =
 "Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.T"
; output_info [ 14 ] . mUnit = "N*m" ; output_info [ 15 ] . mIdentifier =
 "Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.Omega"
; output_info [ 15 ] . mM = 1 ; output_info [ 15 ] . mN = 1 ; output_info [
15 ] . mName =
 "Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.Omega"
; output_info [ 15 ] . mUnit = "rad/s" ; output_info [ 16 ] . mIdentifier =
 "Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.T"
; output_info [ 16 ] . mM = 1 ; output_info [ 16 ] . mN = 1 ; output_info [
16 ] . mName =
 "Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Ideal_Torque_Sensor.T"
; output_info [ 16 ] . mUnit = "N*m" ; output_info [ 17 ] . mIdentifier =
"Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.Omega"
; output_info [ 17 ] . mM = 1 ; output_info [ 17 ] . mN = 1 ; output_info [
17 ] . mName =
"Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.Omega"
; output_info [ 17 ] . mUnit = "rad/s" ; ds -> mIo [ NE_OUTPUT_IO_TYPE ] =
output_info ; ds -> mReleaseReference = release_reference ; ds ->
mGetReference = get_reference ; ds -> mDiagnosticsDsFcn = diagnostics ; ds ->
mExpandFcn = expand ; ds -> mMethods [ NE_DS_METHOD_M_P ] =
closedLoop_toTune_b924f1e8_2_ds_m_p ; ds -> mMakeOutput [ NE_DS_METHOD_M_P ]
= ds_output_m_p ; ds -> mMethods [ NE_DS_METHOD_M ] = ds_m ; ds ->
mMakeOutput [ NE_DS_METHOD_M ] = ds_output_m ; ds -> mMethods [
NE_DS_METHOD_VMM ] = ds_vmm ; ds -> mMakeOutput [ NE_DS_METHOD_VMM ] =
ds_output_vmm ; ds -> mMethods [ NE_DS_METHOD_DXM_P ] = ds_dxm_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DXM_P ] = ds_output_dxm_p ; ds -> mMethods [
NE_DS_METHOD_DXM ] = ds_dxm ; ds -> mMakeOutput [ NE_DS_METHOD_DXM ] =
ds_output_dxm ; ds -> mMethods [ NE_DS_METHOD_DUM_P ] = ds_dum_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DUM_P ] = ds_output_dum_p ; ds -> mMethods [
NE_DS_METHOD_DUM ] = ds_dum ; ds -> mMakeOutput [ NE_DS_METHOD_DUM ] =
ds_output_dum ; ds -> mMethods [ NE_DS_METHOD_DTM_P ] = ds_dtm_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DTM_P ] = ds_output_dtm_p ; ds -> mMethods [
NE_DS_METHOD_DTM ] = ds_dtm ; ds -> mMakeOutput [ NE_DS_METHOD_DTM ] =
ds_output_dtm ; ds -> mMethods [ NE_DS_METHOD_A_P ] =
closedLoop_toTune_b924f1e8_2_ds_a_p ; ds -> mMakeOutput [ NE_DS_METHOD_A_P ]
= ds_output_a_p ; ds -> mMethods [ NE_DS_METHOD_A ] =
closedLoop_toTune_b924f1e8_2_ds_a ; ds -> mMakeOutput [ NE_DS_METHOD_A ] =
ds_output_a ; ds -> mMethods [ NE_DS_METHOD_B_P ] = ds_b_p ; ds ->
mMakeOutput [ NE_DS_METHOD_B_P ] = ds_output_b_p ; ds -> mMethods [
NE_DS_METHOD_B ] = ds_b ; ds -> mMakeOutput [ NE_DS_METHOD_B ] = ds_output_b
; ds -> mMethods [ NE_DS_METHOD_C_P ] = ds_c_p ; ds -> mMakeOutput [
NE_DS_METHOD_C_P ] = ds_output_c_p ; ds -> mMethods [ NE_DS_METHOD_C ] = ds_c
; ds -> mMakeOutput [ NE_DS_METHOD_C ] = ds_output_c ; ds -> mMethods [
NE_DS_METHOD_F ] = closedLoop_toTune_b924f1e8_2_ds_f ; ds -> mMakeOutput [
NE_DS_METHOD_F ] = ds_output_f ; ds -> mMethods [ NE_DS_METHOD_VMF ] = ds_vmf
; ds -> mMakeOutput [ NE_DS_METHOD_VMF ] = ds_output_vmf ; ds -> mMethods [
NE_DS_METHOD_SLF ] = ds_slf ; ds -> mMakeOutput [ NE_DS_METHOD_SLF ] =
ds_output_slf ; ds -> mMethods [ NE_DS_METHOD_SLF0 ] = ds_slf0 ; ds ->
mMakeOutput [ NE_DS_METHOD_SLF0 ] = ds_output_slf0 ; ds -> mMethods [
NE_DS_METHOD_DXF_P ] = closedLoop_toTune_b924f1e8_2_ds_dxf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DXF_P ] = ds_output_dxf_p ; ds -> mMethods [
NE_DS_METHOD_DXF ] = closedLoop_toTune_b924f1e8_2_ds_dxf ; ds -> mMakeOutput
[ NE_DS_METHOD_DXF ] = ds_output_dxf ; ds -> mMethods [ NE_DS_METHOD_DUF_P ]
= ds_duf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DUF_P ] = ds_output_duf_p ; ds
-> mMethods [ NE_DS_METHOD_DUF ] = ds_duf ; ds -> mMakeOutput [
NE_DS_METHOD_DUF ] = ds_output_duf ; ds -> mMethods [ NE_DS_METHOD_DTF_P ] =
ds_dtf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DTF_P ] = ds_output_dtf_p ; ds ->
mMethods [ NE_DS_METHOD_DTF ] = ds_dtf ; ds -> mMakeOutput [ NE_DS_METHOD_DTF
] = ds_output_dtf ; ds -> mMethods [ NE_DS_METHOD_DDF_P ] = ds_ddf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DDF_P ] = ds_output_ddf_p ; ds -> mMethods [
NE_DS_METHOD_DDF ] = ds_ddf ; ds -> mMakeOutput [ NE_DS_METHOD_DDF ] =
ds_output_ddf ; ds -> mMethods [ NE_DS_METHOD_TDUF_P ] = ds_tduf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_TDUF_P ] = ds_output_tduf_p ; ds -> mMethods [
NE_DS_METHOD_TDXF_P ] = closedLoop_toTune_b924f1e8_2_ds_tdxf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_TDXF_P ] = ds_output_tdxf_p ; ds -> mMethods [
NE_DS_METHOD_DNF_P ] = closedLoop_toTune_b924f1e8_2_ds_dnf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DNF_P ] = ds_output_dnf_p ; ds -> mMethods [
NE_DS_METHOD_DNF ] = ds_dnf ; ds -> mMakeOutput [ NE_DS_METHOD_DNF ] =
ds_output_dnf ; ds -> mMethods [ NE_DS_METHOD_DNF_V_X ] = ds_dnf_v_x ; ds ->
mMakeOutput [ NE_DS_METHOD_DNF_V_X ] = ds_output_dnf_v_x ; ds -> mMethods [
NE_DS_METHOD_IC ] = ds_ic ; ds -> mMakeOutput [ NE_DS_METHOD_IC ] =
ds_output_ic ; ds -> mMethods [ NE_DS_METHOD_ICR ] = ds_icr ; ds ->
mMakeOutput [ NE_DS_METHOD_ICR ] = ds_output_icr ; ds -> mMethods [
NE_DS_METHOD_ICR_IM ] = ds_icr_im ; ds -> mMakeOutput [ NE_DS_METHOD_ICR_IM ]
= ds_output_icr_im ; ds -> mMethods [ NE_DS_METHOD_ICR_ID ] = ds_icr_id ; ds
-> mMakeOutput [ NE_DS_METHOD_ICR_ID ] = ds_output_icr_id ; ds -> mMethods [
NE_DS_METHOD_ICR_IL ] = ds_icr_il ; ds -> mMakeOutput [ NE_DS_METHOD_ICR_IL ]
= ds_output_icr_il ; ds -> mMethods [ NE_DS_METHOD_DXICR ] = ds_dxicr ; ds ->
mMakeOutput [ NE_DS_METHOD_DXICR ] = ds_output_dxicr ; ds -> mMethods [
NE_DS_METHOD_DXICR_P ] = ds_dxicr_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXICR_P ] = ds_output_dxicr_p ; ds -> mMethods [
NE_DS_METHOD_TDUICR_P ] = ds_tduicr_p ; ds -> mMakeOutput [
NE_DS_METHOD_TDUICR_P ] = ds_output_tduicr_p ; ds -> mMethods [
NE_DS_METHOD_MDUY_P ] = ds_mduy_p ; ds -> mMakeOutput [ NE_DS_METHOD_MDUY_P ]
= ds_output_mduy_p ; ds -> mMethods [ NE_DS_METHOD_MDXY_P ] = ds_mdxy_p ; ds
-> mMakeOutput [ NE_DS_METHOD_MDXY_P ] = ds_output_mdxy_p ; ds -> mMethods [
NE_DS_METHOD_TDUY_P ] = ds_tduy_p ; ds -> mMakeOutput [ NE_DS_METHOD_TDUY_P ]
= ds_output_tduy_p ; ds -> mMethods [ NE_DS_METHOD_TDXY_P ] =
closedLoop_toTune_b924f1e8_2_ds_tdxy_p ; ds -> mMakeOutput [
NE_DS_METHOD_TDXY_P ] = ds_output_tdxy_p ; ds -> mMethods [ NE_DS_METHOD_Y ]
= closedLoop_toTune_b924f1e8_2_ds_y ; ds -> mMakeOutput [ NE_DS_METHOD_Y ] =
ds_output_y ; ds -> mMethods [ NE_DS_METHOD_DXY_P ] =
closedLoop_toTune_b924f1e8_2_ds_dxy_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXY_P ] = ds_output_dxy_p ; ds -> mMethods [ NE_DS_METHOD_DXY ]
= ds_dxy ; ds -> mMakeOutput [ NE_DS_METHOD_DXY ] = ds_output_dxy ; ds ->
mMethods [ NE_DS_METHOD_DUY_P ] = ds_duy_p ; ds -> mMakeOutput [
NE_DS_METHOD_DUY_P ] = ds_output_duy_p ; ds -> mMethods [ NE_DS_METHOD_DUY ]
= ds_duy ; ds -> mMakeOutput [ NE_DS_METHOD_DUY ] = ds_output_duy ; ds ->
mMethods [ NE_DS_METHOD_DTY_P ] = ds_dty_p ; ds -> mMakeOutput [
NE_DS_METHOD_DTY_P ] = ds_output_dty_p ; ds -> mMethods [ NE_DS_METHOD_DTY ]
= ds_dty ; ds -> mMakeOutput [ NE_DS_METHOD_DTY ] = ds_output_dty ; ds ->
mMethods [ NE_DS_METHOD_MODE ] = closedLoop_toTune_b924f1e8_2_ds_mode ; ds ->
mMakeOutput [ NE_DS_METHOD_MODE ] = ds_output_mode ; ds -> mMethods [
NE_DS_METHOD_ZC ] = closedLoop_toTune_b924f1e8_2_ds_zc ; ds -> mMakeOutput [
NE_DS_METHOD_ZC ] = ds_output_zc ; ds -> mMethods [ NE_DS_METHOD_CACHE_R ] =
ds_cache_r ; ds -> mMakeOutput [ NE_DS_METHOD_CACHE_R ] = ds_output_cache_r ;
ds -> mMethods [ NE_DS_METHOD_CACHE_I ] = ds_cache_i ; ds -> mMakeOutput [
NE_DS_METHOD_CACHE_I ] = ds_output_cache_i ; ds -> mMethods [
NE_DS_METHOD_UPDATE_R ] = ds_update_r ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE_R ] = ds_output_update_r ; ds -> mMethods [
NE_DS_METHOD_UPDATE_I ] = ds_update_i ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE_I ] = ds_output_update_i ; ds -> mMethods [
NE_DS_METHOD_SFO ] = ds_sfo ; ds -> mMakeOutput [ NE_DS_METHOD_SFO ] =
ds_output_sfo ; ds -> mMethods [ NE_DS_METHOD_SFP ] = ds_sfp ; ds ->
mMakeOutput [ NE_DS_METHOD_SFP ] = ds_output_sfp ; ds -> mMethods [
NE_DS_METHOD_INIT_R ] = ds_init_r ; ds -> mMakeOutput [ NE_DS_METHOD_INIT_R ]
= ds_output_init_r ; ds -> mMethods [ NE_DS_METHOD_INIT_I ] = ds_init_i ; ds
-> mMakeOutput [ NE_DS_METHOD_INIT_I ] = ds_output_init_i ; ds -> mMethods [
NE_DS_METHOD_LOG ] = closedLoop_toTune_b924f1e8_2_ds_log ; ds -> mMakeOutput
[ NE_DS_METHOD_LOG ] = ds_output_log ; ds -> mMethods [ NE_DS_METHOD_ASSERT ]
= ds_assert ; ds -> mMakeOutput [ NE_DS_METHOD_ASSERT ] = ds_output_assert ;
ds -> mMethods [ NE_DS_METHOD_PASSERT ] = ds_passert ; ds -> mMakeOutput [
NE_DS_METHOD_PASSERT ] = ds_output_passert ; ds -> mMethods [
NE_DS_METHOD_IASSERT ] = ds_iassert ; ds -> mMakeOutput [
NE_DS_METHOD_IASSERT ] = ds_output_iassert ; ds -> mMethods [
NE_DS_METHOD_DEL_T ] = ds_del_t ; ds -> mMakeOutput [ NE_DS_METHOD_DEL_T ] =
ds_output_del_t ; ds -> mMethods [ NE_DS_METHOD_DEL_V ] = ds_del_v ; ds ->
mMakeOutput [ NE_DS_METHOD_DEL_V ] = ds_output_del_v ; ds -> mMethods [
NE_DS_METHOD_DEL_V0 ] = ds_del_v0 ; ds -> mMakeOutput [ NE_DS_METHOD_DEL_V0 ]
= ds_output_del_v0 ; ds -> mMethods [ NE_DS_METHOD_DEL_TMAX ] = ds_del_tmax ;
ds -> mMakeOutput [ NE_DS_METHOD_DEL_TMAX ] = ds_output_del_tmax ; ds ->
mMethods [ NE_DS_METHOD_DXDELT_P ] = ds_dxdelt_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXDELT_P ] = ds_output_dxdelt_p ; ds -> mMethods [
NE_DS_METHOD_DXDELT ] = ds_dxdelt ; ds -> mMakeOutput [ NE_DS_METHOD_DXDELT ]
= ds_output_dxdelt ; ds -> mMethods [ NE_DS_METHOD_DUDELT_P ] = ds_dudelt_p ;
ds -> mMakeOutput [ NE_DS_METHOD_DUDELT_P ] = ds_output_dudelt_p ; ds ->
mMethods [ NE_DS_METHOD_DUDELT ] = ds_dudelt ; ds -> mMakeOutput [
NE_DS_METHOD_DUDELT ] = ds_output_dudelt ; ds -> mMethods [
NE_DS_METHOD_DTDELT_P ] = ds_dtdelt_p ; ds -> mMakeOutput [
NE_DS_METHOD_DTDELT_P ] = ds_output_dtdelt_p ; ds -> mMethods [
NE_DS_METHOD_DTDELT ] = ds_dtdelt ; ds -> mMakeOutput [ NE_DS_METHOD_DTDELT ]
= ds_output_dtdelt ; ds -> mMethods [ NE_DS_METHOD_OBS_EXP ] = ds_obs_exp ;
ds -> mMakeOutput [ NE_DS_METHOD_OBS_EXP ] = ds_output_obs_exp ; ds ->
mMethods [ NE_DS_METHOD_OBS_ACT ] = closedLoop_toTune_b924f1e8_2_ds_obs_act ;
ds -> mMakeOutput [ NE_DS_METHOD_OBS_ACT ] = ds_output_obs_act ; ds ->
mMethods [ NE_DS_METHOD_OBS_ALL ] = closedLoop_toTune_b924f1e8_2_ds_obs_all ;
ds -> mMakeOutput [ NE_DS_METHOD_OBS_ALL ] = ds_output_obs_all ; ds ->
mMethods [ NE_DS_METHOD_OBS_IL ] = closedLoop_toTune_b924f1e8_2_ds_obs_il ;
ds -> mMakeOutput [ NE_DS_METHOD_OBS_IL ] = ds_output_obs_il ; ds -> mMethods
[ NE_DS_METHOD_DP_L ] = ds_dp_l ; ds -> mMakeOutput [ NE_DS_METHOD_DP_L ] =
ds_output_dp_l ; ds -> mMethods [ NE_DS_METHOD_DP_I ] = ds_dp_i ; ds ->
mMakeOutput [ NE_DS_METHOD_DP_I ] = ds_output_dp_i ; ds -> mMethods [
NE_DS_METHOD_DP_J ] = ds_dp_j ; ds -> mMakeOutput [ NE_DS_METHOD_DP_J ] =
ds_output_dp_j ; ds -> mMethods [ NE_DS_METHOD_DP_R ] = ds_dp_r ; ds ->
mMakeOutput [ NE_DS_METHOD_DP_R ] = ds_output_dp_r ; ds -> mMethods [
NE_DS_METHOD_QX ] = ds_qx ; ds -> mMakeOutput [ NE_DS_METHOD_QX ] =
ds_output_qx ; ds -> mMethods [ NE_DS_METHOD_QU ] = ds_qu ; ds -> mMakeOutput
[ NE_DS_METHOD_QU ] = ds_output_qu ; ds -> mMethods [ NE_DS_METHOD_QT ] =
ds_qt ; ds -> mMakeOutput [ NE_DS_METHOD_QT ] = ds_output_qt ; ds -> mMethods
[ NE_DS_METHOD_Q1 ] = ds_q1 ; ds -> mMakeOutput [ NE_DS_METHOD_Q1 ] =
ds_output_q1 ; ds -> mMethods [ NE_DS_METHOD_QX_P ] = ds_qx_p ; ds ->
mMakeOutput [ NE_DS_METHOD_QX_P ] = ds_output_qx_p ; ds -> mMethods [
NE_DS_METHOD_QU_P ] = ds_qu_p ; ds -> mMakeOutput [ NE_DS_METHOD_QU_P ] =
ds_output_qu_p ; ds -> mMethods [ NE_DS_METHOD_QT_P ] = ds_qt_p ; ds ->
mMakeOutput [ NE_DS_METHOD_QT_P ] = ds_output_qt_p ; ds -> mMethods [
NE_DS_METHOD_Q1_P ] = ds_q1_p ; ds -> mMakeOutput [ NE_DS_METHOD_Q1_P ] =
ds_output_q1_p ; ds -> mMethods [ NE_DS_METHOD_VAR_TOL ] = ds_var_tol ; ds ->
mMakeOutput [ NE_DS_METHOD_VAR_TOL ] = ds_output_var_tol ; ds -> mMethods [
NE_DS_METHOD_EQ_TOL ] = ds_eq_tol ; ds -> mMakeOutput [ NE_DS_METHOD_EQ_TOL ]
= ds_output_eq_tol ; ds -> mMethods [ NE_DS_METHOD_LV ] = ds_lv ; ds ->
mMakeOutput [ NE_DS_METHOD_LV ] = ds_output_lv ; ds -> mMethods [
NE_DS_METHOD_SLV ] = ds_slv ; ds -> mMakeOutput [ NE_DS_METHOD_SLV ] =
ds_output_slv ; ds -> mEquationData = s_equation_data ; ds -> mVariableData =
s_variable_data ; ds -> mDiscreteData = s_discrete_data ; ds ->
mObservableData = s_observable_data ; ds -> mMajorModeData =
s_major_mode_data ; ds -> mZCData = s_zc_data ; ds -> mRanges = s_range ; ds
-> mAssertData = s_assert_data ; ds -> mAssertRanges = s_assert_range ; ds ->
mParamAssertData = s_param_assert_data ; ds -> mParamAssertRanges =
s_param_assert_range ; ds -> mInitialAssertData = s_initial_assert_data ; ds
-> mInitialAssertRanges = s_initial_assert_range ; ds -> mEquationRanges =
s_equation_range ; ds -> mLogicalParameters = s_logical_parameter_data ; ds
-> mIntegerParameters = s_integer_parameter_data ; ds -> mIndexParameters =
s_index_parameter_data ; ds -> mRealParameters = s_real_parameter_data ;
return ( NeDynamicSystem * ) _ds ; } static int32_T ds_assert ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmIntVector out ; ( void ) t1 ; out = t2 -> mASSERT ; out . mX [ 0 ] =
1 ; out . mX [ 1 ] = 1 ; out . mX [ 2 ] = 1 ; out . mX [ 3 ] = 1 ; out . mX [
4 ] = 1 ; out . mX [ 5 ] = 1 ; out . mX [ 6 ] = 1 ; out . mX [ 7 ] = 1 ; out
. mX [ 8 ] = 1 ; out . mX [ 9 ] = 1 ; out . mX [ 10 ] = 1 ; out . mX [ 11 ] =
1 ; out . mX [ 12 ] = 1 ; out . mX [ 13 ] = 1 ; out . mX [ 14 ] = 1 ; out .
mX [ 15 ] = 1 ; out . mX [ 16 ] = 1 ; out . mX [ 17 ] = 1 ; out . mX [ 18 ] =
1 ; out . mX [ 19 ] = 1 ; out . mX [ 20 ] = 1 ; out . mX [ 21 ] = 1 ; out .
mX [ 22 ] = 1 ; out . mX [ 23 ] = 1 ; out . mX [ 24 ] = 1 ; out . mX [ 25 ] =
1 ; out . mX [ 26 ] = 1 ; out . mX [ 27 ] = 1 ; out . mX [ 28 ] = 1 ; out .
mX [ 29 ] = 1 ; out . mX [ 30 ] = 1 ; out . mX [ 31 ] = 1 ; out . mX [ 32 ] =
1 ; out . mX [ 33 ] = 1 ; out . mX [ 34 ] = 1 ; out . mX [ 35 ] = 1 ; ( void
) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_passert ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_iassert ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_del_v ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_del_v0 ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_del_tmax ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_del_t ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dxdelt ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dxdelt_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mDXDELT_P ; out . mNumCol = 30ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] =
0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out .
mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out . mJc [ 7 ] =
0 ; out . mJc [ 8 ] = 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ] = 0 ; out .
mJc [ 11 ] = 0 ; out . mJc [ 12 ] = 0 ; out . mJc [ 13 ] = 0 ; out . mJc [ 14
] = 0 ; out . mJc [ 15 ] = 0 ; out . mJc [ 16 ] = 0 ; out . mJc [ 17 ] = 0 ;
out . mJc [ 18 ] = 0 ; out . mJc [ 19 ] = 0 ; out . mJc [ 20 ] = 0 ; out .
mJc [ 21 ] = 0 ; out . mJc [ 22 ] = 0 ; out . mJc [ 23 ] = 0 ; out . mJc [ 24
] = 0 ; out . mJc [ 25 ] = 0 ; out . mJc [ 26 ] = 0 ; out . mJc [ 27 ] = 0 ;
out . mJc [ 28 ] = 0 ; out . mJc [ 29 ] = 0 ; out . mJc [ 30 ] = 0 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dudelt ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dudelt_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mDUDELT_P ; out . mNumCol = 12ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] =
0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out .
mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out . mJc [ 7 ] =
0 ; out . mJc [ 8 ] = 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ] = 0 ; out .
mJc [ 11 ] = 0 ; out . mJc [ 12 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_dtdelt ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dtdelt_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDTDELT_P ; out .
mNumCol = 1ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ]
= 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_cache_r (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_init_r ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_update_r ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_cache_i ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_init_i ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_update_i ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_sfp ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_sfo ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_duf ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_duf_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mDUF_P ; out . mNumCol = 12ULL ; out . mNumRow = 30ULL ; out . mJc [ 0 ] = 0
; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc
[ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ;
out . mJc [ 8 ] = 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ] = 0 ; out . mJc
[ 11 ] = 0 ; out . mJc [ 12 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
static int32_T ds_dtf ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dtf_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDTF_P ; out .
mNumCol = 1ULL ; out . mNumRow = 30ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1
] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_b ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmRealVector out ; ( void ) t1 ; out = t2 -> mB ; out . mX [ 0 ] = 1.0
; out . mX [ 1 ] = 1.0 ; out . mX [ 2 ] = 1.0 ; out . mX [ 3 ] = 1.0 ; out .
mX [ 4 ] = 1.0 ; out . mX [ 5 ] = 1.0 ; out . mX [ 6 ] = 1.0 ; out . mX [ 7 ]
= 1.0 ; out . mX [ 8 ] = 1.0 ; out . mX [ 9 ] = 1.0 ; out . mX [ 10 ] = 1.0 ;
out . mX [ 11 ] = 1.0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_b_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2
-> mB_P ; out . mNumCol = 12ULL ; out . mNumRow = 30ULL ; out . mJc [ 0 ] = 0
; out . mJc [ 1 ] = 1 ; out . mJc [ 2 ] = 2 ; out . mJc [ 3 ] = 3 ; out . mJc
[ 4 ] = 4 ; out . mJc [ 5 ] = 5 ; out . mJc [ 6 ] = 6 ; out . mJc [ 7 ] = 7 ;
out . mJc [ 8 ] = 8 ; out . mJc [ 9 ] = 9 ; out . mJc [ 10 ] = 10 ; out . mJc
[ 11 ] = 11 ; out . mJc [ 12 ] = 12 ; out . mIr [ 0 ] = 12 ; out . mIr [ 1 ]
= 13 ; out . mIr [ 2 ] = 14 ; out . mIr [ 3 ] = 15 ; out . mIr [ 4 ] = 16 ;
out . mIr [ 5 ] = 17 ; out . mIr [ 6 ] = 0 ; out . mIr [ 7 ] = 2 ; out . mIr
[ 8 ] = 4 ; out . mIr [ 9 ] = 6 ; out . mIr [ 10 ] = 8 ; out . mIr [ 11 ] =
10 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_c ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_c_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mC_P ; out . mNumCol = 1ULL ; out . mNumRow = 30ULL ; out . mJc [ 0 ] = 0 ;
out . mJc [ 1 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_tduf_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput
* t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out =
t2 -> mTDUF_P ; out . mNumCol = 12ULL ; out . mNumRow = 30ULL ; out . mJc [ 0
] = 0 ; out . mJc [ 1 ] = 1 ; out . mJc [ 2 ] = 2 ; out . mJc [ 3 ] = 3 ; out
. mJc [ 4 ] = 4 ; out . mJc [ 5 ] = 5 ; out . mJc [ 6 ] = 6 ; out . mJc [ 7 ]
= 7 ; out . mJc [ 8 ] = 8 ; out . mJc [ 9 ] = 9 ; out . mJc [ 10 ] = 10 ; out
. mJc [ 11 ] = 11 ; out . mJc [ 12 ] = 12 ; out . mIr [ 0 ] = 12 ; out . mIr
[ 1 ] = 13 ; out . mIr [ 2 ] = 14 ; out . mIr [ 3 ] = 15 ; out . mIr [ 4 ] =
16 ; out . mIr [ 5 ] = 17 ; out . mIr [ 6 ] = 0 ; out . mIr [ 7 ] = 2 ; out .
mIr [ 8 ] = 4 ; out . mIr [ 9 ] = 6 ; out . mIr [ 10 ] = 8 ; out . mIr [ 11 ]
= 10 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_ddf (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_ddf_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mDDF_P ; out . mNumCol = 0ULL ; out . mNumRow =
30ULL ; out . mJc [ 0 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
static int32_T ds_vmf ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector out ; (
void ) t1 ; out = t2 -> mVMF ; out . mX [ 0 ] = false ; out . mX [ 1 ] =
false ; out . mX [ 2 ] = false ; out . mX [ 3 ] = false ; out . mX [ 4 ] =
false ; out . mX [ 5 ] = false ; out . mX [ 6 ] = false ; out . mX [ 7 ] =
false ; out . mX [ 8 ] = false ; out . mX [ 9 ] = false ; out . mX [ 10 ] =
false ; out . mX [ 11 ] = false ; out . mX [ 12 ] = false ; out . mX [ 13 ] =
false ; out . mX [ 14 ] = false ; out . mX [ 15 ] = false ; out . mX [ 16 ] =
false ; out . mX [ 17 ] = false ; out . mX [ 18 ] = true ; out . mX [ 19 ] =
true ; out . mX [ 20 ] = true ; out . mX [ 21 ] = true ; out . mX [ 22 ] =
true ; out . mX [ 23 ] = true ; out . mX [ 24 ] = true ; out . mX [ 25 ] =
true ; out . mX [ 26 ] = true ; out . mX [ 27 ] = true ; out . mX [ 28 ] =
true ; out . mX [ 29 ] = true ; ( void ) sys ; ( void ) t2 ; return 0 ; }
static int32_T ds_slf ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector out ; (
void ) t1 ; out = t2 -> mSLF ; out . mX [ 0 ] = false ; out . mX [ 1 ] =
false ; out . mX [ 2 ] = false ; out . mX [ 3 ] = false ; out . mX [ 4 ] =
false ; out . mX [ 5 ] = false ; out . mX [ 6 ] = false ; out . mX [ 7 ] =
false ; out . mX [ 8 ] = false ; out . mX [ 9 ] = false ; out . mX [ 10 ] =
false ; out . mX [ 11 ] = false ; out . mX [ 12 ] = false ; out . mX [ 13 ] =
false ; out . mX [ 14 ] = false ; out . mX [ 15 ] = false ; out . mX [ 16 ] =
false ; out . mX [ 17 ] = false ; out . mX [ 18 ] = false ; out . mX [ 19 ] =
false ; out . mX [ 20 ] = false ; out . mX [ 21 ] = false ; out . mX [ 22 ] =
false ; out . mX [ 23 ] = false ; out . mX [ 24 ] = false ; out . mX [ 25 ] =
false ; out . mX [ 26 ] = false ; out . mX [ 27 ] = false ; out . mX [ 28 ] =
false ; out . mX [ 29 ] = false ; ( void ) sys ; ( void ) t2 ; return 0 ; }
static int32_T ds_dnf ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ; (
void ) t1 ; out = t2 -> mDNF ; out . mX [ 0 ] = - 83.333333333333329 ; out .
mX [ 1 ] = - 83.333333333333329 ; out . mX [ 2 ] = - 83.333333333333329 ; out
. mX [ 3 ] = - 83.333333333333329 ; out . mX [ 4 ] = - 83.333333333333329 ;
out . mX [ 5 ] = - 83.333333333333329 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_dnf_v_x ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector out ; (
void ) t1 ; out = t2 -> mDNF_V_X ; out . mX [ 0 ] = true ; out . mX [ 1 ] =
true ; out . mX [ 2 ] = true ; out . mX [ 3 ] = true ; out . mX [ 4 ] = true
; out . mX [ 5 ] = true ; out . mX [ 6 ] = true ; out . mX [ 7 ] = true ; out
. mX [ 8 ] = true ; out . mX [ 9 ] = true ; out . mX [ 10 ] = true ; out . mX
[ 11 ] = true ; out . mX [ 12 ] = false ; out . mX [ 13 ] = false ; out . mX
[ 14 ] = false ; out . mX [ 15 ] = false ; out . mX [ 16 ] = false ; out . mX
[ 17 ] = false ; out . mX [ 18 ] = false ; out . mX [ 19 ] = true ; out . mX
[ 20 ] = false ; out . mX [ 21 ] = true ; out . mX [ 22 ] = false ; out . mX
[ 23 ] = true ; out . mX [ 24 ] = false ; out . mX [ 25 ] = true ; out . mX [
26 ] = false ; out . mX [ 27 ] = true ; out . mX [ 28 ] = false ; out . mX [
29 ] = true ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_slf0 ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmBoolVector out ; ( void ) t1 ; out = t2 -> mSLF0
; out . mX [ 0 ] = false ; out . mX [ 1 ] = false ; out . mX [ 2 ] = false ;
out . mX [ 3 ] = false ; out . mX [ 4 ] = false ; out . mX [ 5 ] = false ;
out . mX [ 6 ] = false ; out . mX [ 7 ] = false ; out . mX [ 8 ] = false ;
out . mX [ 9 ] = false ; out . mX [ 10 ] = false ; out . mX [ 11 ] = false ;
out . mX [ 12 ] = false ; out . mX [ 13 ] = false ; out . mX [ 14 ] = false ;
out . mX [ 15 ] = false ; out . mX [ 16 ] = false ; out . mX [ 17 ] = false ;
out . mX [ 18 ] = false ; out . mX [ 19 ] = false ; out . mX [ 20 ] = false ;
out . mX [ 21 ] = false ; out . mX [ 22 ] = false ; out . mX [ 23 ] = false ;
out . mX [ 24 ] = false ; out . mX [ 25 ] = false ; out . mX [ 26 ] = false ;
out . mX [ 27 ] = false ; out . mX [ 28 ] = false ; out . mX [ 29 ] = false ;
( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_ic ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmRealVector out ; ( void ) t1 ; out = t2 -> mIC ; out . mX [ 0 ] =
0.0 ; out . mX [ 1 ] = 0.0 ; out . mX [ 2 ] = 0.0 ; out . mX [ 3 ] = 0.0 ;
out . mX [ 4 ] = 0.0 ; out . mX [ 5 ] = 0.0 ; out . mX [ 6 ] = 0.0 ; out . mX
[ 7 ] = 0.0 ; out . mX [ 8 ] = 0.0 ; out . mX [ 9 ] = 0.0 ; out . mX [ 10 ] =
0.0 ; out . mX [ 11 ] = 0.0 ; out . mX [ 12 ] = 0.0 ; out . mX [ 13 ] = 0.0 ;
out . mX [ 14 ] = 0.0 ; out . mX [ 15 ] = 0.0 ; out . mX [ 16 ] = 0.0 ; out .
mX [ 17 ] = 0.0 ; out . mX [ 18 ] = 0.0 ; out . mX [ 19 ] = 0.0 ; out . mX [
20 ] = 0.0 ; out . mX [ 21 ] = 0.0 ; out . mX [ 22 ] = 0.0 ; out . mX [ 23 ]
= 0.0 ; out . mX [ 24 ] = 0.0 ; out . mX [ 25 ] = 0.0 ; out . mX [ 26 ] = 0.0
; out . mX [ 27 ] = 0.0 ; out . mX [ 28 ] = 0.0 ; out . mX [ 29 ] = 0.0 ; (
void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_icr ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_icr_im ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_icr_id ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_icr_il ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dxicr ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_dxicr_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mDXICR_P ; out . mNumCol = 30ULL ; out . mNumRow =
0ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out
. mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ]
= 0 ; out . mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 0 ; out . mJc [ 9 ] = 0 ; out .
mJc [ 10 ] = 0 ; out . mJc [ 11 ] = 0 ; out . mJc [ 12 ] = 0 ; out . mJc [ 13
] = 0 ; out . mJc [ 14 ] = 0 ; out . mJc [ 15 ] = 0 ; out . mJc [ 16 ] = 0 ;
out . mJc [ 17 ] = 0 ; out . mJc [ 18 ] = 0 ; out . mJc [ 19 ] = 0 ; out .
mJc [ 20 ] = 0 ; out . mJc [ 21 ] = 0 ; out . mJc [ 22 ] = 0 ; out . mJc [ 23
] = 0 ; out . mJc [ 24 ] = 0 ; out . mJc [ 25 ] = 0 ; out . mJc [ 26 ] = 0 ;
out . mJc [ 27 ] = 0 ; out . mJc [ 28 ] = 0 ; out . mJc [ 29 ] = 0 ; out .
mJc [ 30 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_tduicr_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mTDUICR_P ; out . mNumCol = 12ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] =
0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out .
mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out . mJc [ 7 ] =
0 ; out . mJc [ 8 ] = 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ] = 0 ; out .
mJc [ 11 ] = 0 ; out . mJc [ 12 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_m ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ; (
void ) t1 ; out = t2 -> mM ; out . mX [ 0 ] = 1.73E-5 ; out . mX [ 1 ] =
1.93E-5 ; out . mX [ 2 ] = 1.93E-5 ; out . mX [ 3 ] = 1.93E-5 ; out . mX [ 4
] = 6.7200000000000007E-5 ; out . mX [ 5 ] = 1.73E-5 ; out . mX [ 6 ] = 0.001
; out . mX [ 7 ] = 0.001 ; out . mX [ 8 ] = 0.001 ; out . mX [ 9 ] = 0.001 ;
out . mX [ 10 ] = 0.001 ; out . mX [ 11 ] = 0.001 ; ( void ) sys ; ( void )
t2 ; return 0 ; } static int32_T ds_dxm ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dxm_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDXM_P ; out .
mNumCol = 30ULL ; out . mNumRow = 12ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1
] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out
. mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ; out . mJc [ 8 ]
= 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ] = 0 ; out . mJc [ 11 ] = 0 ; out
. mJc [ 12 ] = 0 ; out . mJc [ 13 ] = 0 ; out . mJc [ 14 ] = 0 ; out . mJc [
15 ] = 0 ; out . mJc [ 16 ] = 0 ; out . mJc [ 17 ] = 0 ; out . mJc [ 18 ] = 0
; out . mJc [ 19 ] = 0 ; out . mJc [ 20 ] = 0 ; out . mJc [ 21 ] = 0 ; out .
mJc [ 22 ] = 0 ; out . mJc [ 23 ] = 0 ; out . mJc [ 24 ] = 0 ; out . mJc [ 25
] = 0 ; out . mJc [ 26 ] = 0 ; out . mJc [ 27 ] = 0 ; out . mJc [ 28 ] = 0 ;
out . mJc [ 29 ] = 0 ; out . mJc [ 30 ] = 0 ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_dum ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dum_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDUM_P ; out .
mNumCol = 12ULL ; out . mNumRow = 12ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1
] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out
. mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ; out . mJc [ 8 ]
= 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ] = 0 ; out . mJc [ 11 ] = 0 ; out
. mJc [ 12 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dtm ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_dtm_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mDTM_P ; out . mNumCol = 1ULL ; out . mNumRow =
12ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; ( void ) sys ; ( void )
t2 ; return 0 ; } static int32_T ds_vmm ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector out ; (
void ) t1 ; out = t2 -> mVMM ; out . mX [ 0 ] = false ; out . mX [ 1 ] =
false ; out . mX [ 2 ] = false ; out . mX [ 3 ] = false ; out . mX [ 4 ] =
false ; out . mX [ 5 ] = false ; out . mX [ 6 ] = false ; out . mX [ 7 ] =
false ; out . mX [ 8 ] = false ; out . mX [ 9 ] = false ; out . mX [ 10 ] =
false ; out . mX [ 11 ] = false ; ( void ) sys ; ( void ) t2 ; return 0 ; }
static int32_T ds_obs_exp ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ;
real_T t0 [ 304 ] ; int32_T b ; ( void ) t1 ; out = t2 -> mOBS_EXP ; for ( b
= 0 ; b < 304 ; b ++ ) { t0 [ b ] = 0.0 ; } for ( b = 0 ; b < 304 ; b ++ ) {
out . mX [ b ] = t0 [ b ] ; } ( void ) sys ; ( void ) t2 ; return 0 ; }
static int32_T ds_dp_l ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dp_i ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dp_j ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_dp_r ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_qx ( const NeDynamicSystem
* sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void )
t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_qu ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_qt ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_q1 ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_qx_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mQX_P ; out .
mNumCol = 30ULL ; out . mNumRow = 30ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1
] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out
. mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ; out . mJc [ 8 ]
= 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ] = 0 ; out . mJc [ 11 ] = 0 ; out
. mJc [ 12 ] = 0 ; out . mJc [ 13 ] = 0 ; out . mJc [ 14 ] = 0 ; out . mJc [
15 ] = 0 ; out . mJc [ 16 ] = 0 ; out . mJc [ 17 ] = 0 ; out . mJc [ 18 ] = 0
; out . mJc [ 19 ] = 0 ; out . mJc [ 20 ] = 0 ; out . mJc [ 21 ] = 0 ; out .
mJc [ 22 ] = 0 ; out . mJc [ 23 ] = 0 ; out . mJc [ 24 ] = 0 ; out . mJc [ 25
] = 0 ; out . mJc [ 26 ] = 0 ; out . mJc [ 27 ] = 0 ; out . mJc [ 28 ] = 0 ;
out . mJc [ 29 ] = 0 ; out . mJc [ 30 ] = 0 ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_qu_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mQU_P ; out . mNumCol = 12ULL ; out . mNumRow =
30ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out
. mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ]
= 0 ; out . mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 0 ; out . mJc [ 9 ] = 0 ; out .
mJc [ 10 ] = 0 ; out . mJc [ 11 ] = 0 ; out . mJc [ 12 ] = 0 ; ( void ) sys ;
( void ) t2 ; return 0 ; } static int32_T ds_qt_p ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mQT_P ; out . mNumCol =
1ULL ; out . mNumRow = 30ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; (
void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_q1_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mQ1_P ; out .
mNumCol = 1ULL ; out . mNumRow = 30ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1
] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_var_tol (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmRealVector out ; ( void ) t1 ; out = t2 ->
mVAR_TOL ; out . mX [ 0 ] = 1.0E-9 ; out . mX [ 1 ] = 1.0E-9 ; out . mX [ 2 ]
= 1.0E-9 ; out . mX [ 3 ] = 1.0E-9 ; out . mX [ 4 ] = 1.0E-9 ; out . mX [ 5 ]
= 1.0E-9 ; out . mX [ 6 ] = 1.0E-9 ; out . mX [ 7 ] = 1.0E-9 ; out . mX [ 8 ]
= 1.0E-9 ; out . mX [ 9 ] = 1.0E-9 ; out . mX [ 10 ] = 1.0E-9 ; out . mX [ 11
] = 1.0E-9 ; out . mX [ 12 ] = 1.0E-9 ; out . mX [ 13 ] = 1.0E-9 ; out . mX [
14 ] = 1.0E-9 ; out . mX [ 15 ] = 1.0E-9 ; out . mX [ 16 ] = 1.0E-9 ; out .
mX [ 17 ] = 1.0E-9 ; out . mX [ 18 ] = 1.0E-9 ; out . mX [ 19 ] = 1.0E-9 ;
out . mX [ 20 ] = 1.0E-9 ; out . mX [ 21 ] = 1.0E-9 ; out . mX [ 22 ] =
1.0E-9 ; out . mX [ 23 ] = 1.0E-9 ; out . mX [ 24 ] = 1.0E-9 ; out . mX [ 25
] = 1.0E-9 ; out . mX [ 26 ] = 1.0E-9 ; out . mX [ 27 ] = 1.0E-9 ; out . mX [
28 ] = 1.0E-9 ; out . mX [ 29 ] = 1.0E-9 ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_eq_tol ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ; (
void ) t1 ; out = t2 -> mEQ_TOL ; out . mX [ 0 ] = 1.0E-9 ; out . mX [ 1 ] =
1.0E-9 ; out . mX [ 2 ] = 1.0E-9 ; out . mX [ 3 ] = 1.0E-9 ; out . mX [ 4 ] =
1.0E-9 ; out . mX [ 5 ] = 1.0E-9 ; out . mX [ 6 ] = 1.0E-9 ; out . mX [ 7 ] =
1.0E-9 ; out . mX [ 8 ] = 1.0E-9 ; out . mX [ 9 ] = 1.0E-9 ; out . mX [ 10 ]
= 1.0E-9 ; out . mX [ 11 ] = 1.0E-9 ; out . mX [ 12 ] = 1.0E-9 ; out . mX [
13 ] = 1.0E-9 ; out . mX [ 14 ] = 1.0E-9 ; out . mX [ 15 ] = 1.0E-9 ; out .
mX [ 16 ] = 1.0E-9 ; out . mX [ 17 ] = 1.0E-9 ; out . mX [ 18 ] = 1.0E-9 ;
out . mX [ 19 ] = 1.0E-9 ; out . mX [ 20 ] = 1.0E-9 ; out . mX [ 21 ] =
1.0E-9 ; out . mX [ 22 ] = 1.0E-9 ; out . mX [ 23 ] = 1.0E-9 ; out . mX [ 24
] = 1.0E-9 ; out . mX [ 25 ] = 1.0E-9 ; out . mX [ 26 ] = 1.0E-9 ; out . mX [
27 ] = 1.0E-9 ; out . mX [ 28 ] = 1.0E-9 ; out . mX [ 29 ] = 1.0E-9 ; ( void
) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_lv ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmBoolVector out ; ( void ) t1 ; out = t2 -> mLV ; out . mX [ 0 ] =
false ; out . mX [ 1 ] = false ; out . mX [ 2 ] = false ; out . mX [ 3 ] =
false ; out . mX [ 4 ] = false ; out . mX [ 5 ] = false ; out . mX [ 6 ] =
false ; out . mX [ 7 ] = false ; out . mX [ 8 ] = false ; out . mX [ 9 ] =
false ; out . mX [ 10 ] = false ; out . mX [ 11 ] = false ; out . mX [ 12 ] =
false ; out . mX [ 13 ] = false ; out . mX [ 14 ] = false ; out . mX [ 15 ] =
false ; out . mX [ 16 ] = false ; out . mX [ 17 ] = false ; out . mX [ 18 ] =
true ; out . mX [ 19 ] = true ; out . mX [ 20 ] = true ; out . mX [ 21 ] =
true ; out . mX [ 22 ] = true ; out . mX [ 23 ] = true ; out . mX [ 24 ] =
false ; out . mX [ 25 ] = false ; out . mX [ 26 ] = false ; out . mX [ 27 ] =
false ; out . mX [ 28 ] = false ; out . mX [ 29 ] = false ; ( void ) sys ; (
void ) t2 ; return 0 ; } static int32_T ds_slv ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector
out ; ( void ) t1 ; out = t2 -> mSLV ; out . mX [ 0 ] = false ; out . mX [ 1
] = false ; out . mX [ 2 ] = false ; out . mX [ 3 ] = false ; out . mX [ 4 ]
= false ; out . mX [ 5 ] = false ; out . mX [ 6 ] = false ; out . mX [ 7 ] =
false ; out . mX [ 8 ] = false ; out . mX [ 9 ] = false ; out . mX [ 10 ] =
false ; out . mX [ 11 ] = false ; out . mX [ 12 ] = false ; out . mX [ 13 ] =
false ; out . mX [ 14 ] = false ; out . mX [ 15 ] = false ; out . mX [ 16 ] =
false ; out . mX [ 17 ] = false ; out . mX [ 18 ] = true ; out . mX [ 19 ] =
true ; out . mX [ 20 ] = true ; out . mX [ 21 ] = true ; out . mX [ 22 ] =
true ; out . mX [ 23 ] = true ; out . mX [ 24 ] = false ; out . mX [ 25 ] =
false ; out . mX [ 26 ] = false ; out . mX [ 27 ] = false ; out . mX [ 28 ] =
false ; out . mX [ 29 ] = false ; ( void ) sys ; ( void ) t2 ; return 0 ; }
static int32_T ds_dxy ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ; (
void ) t1 ; out = t2 -> mDXY ; out . mX [ 0 ] = 1.0 ; out . mX [ 1 ] = 1.0 ;
out . mX [ 2 ] = 1.0 ; out . mX [ 3 ] = 1.0 ; out . mX [ 4 ] = 1.0 ; out . mX
[ 5 ] = 1.0 ; out . mX [ 6 ] = 1.0 ; out . mX [ 7 ] = 1.0 ; out . mX [ 8 ] =
1.0 ; out . mX [ 9 ] = 1.0 ; out . mX [ 10 ] = 1.0 ; out . mX [ 11 ] = 1.0 ;
out . mX [ 12 ] = 1.0 ; out . mX [ 13 ] = 1.0 ; out . mX [ 14 ] = 1.0 ; out .
mX [ 15 ] = 1.0 ; out . mX [ 16 ] = 1.0 ; out . mX [ 17 ] = 1.0 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_duy ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_duy_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mDUY_P ; out . mNumCol = 12ULL ; out . mNumRow = 18ULL ; out . mJc [ 0 ] = 0
; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc
[ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ;
out . mJc [ 8 ] = 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ] = 0 ; out . mJc
[ 11 ] = 0 ; out . mJc [ 12 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
static int32_T ds_mduy_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mMDUY_P ; out . mNumCol = 12ULL ; out . mNumRow =
18ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out
. mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ]
= 0 ; out . mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 0 ; out . mJc [ 9 ] = 0 ; out .
mJc [ 10 ] = 0 ; out . mJc [ 11 ] = 0 ; out . mJc [ 12 ] = 0 ; ( void ) sys ;
( void ) t2 ; return 0 ; } static int32_T ds_mdxy_p ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mMDXY_P ; out . mNumCol =
30ULL ; out . mNumRow = 18ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ;
out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [
5 ] = 0 ; out . mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 0 ;
out . mJc [ 9 ] = 0 ; out . mJc [ 10 ] = 0 ; out . mJc [ 11 ] = 0 ; out . mJc
[ 12 ] = 0 ; out . mJc [ 13 ] = 0 ; out . mJc [ 14 ] = 0 ; out . mJc [ 15 ] =
0 ; out . mJc [ 16 ] = 0 ; out . mJc [ 17 ] = 0 ; out . mJc [ 18 ] = 0 ; out
. mJc [ 19 ] = 0 ; out . mJc [ 20 ] = 0 ; out . mJc [ 21 ] = 0 ; out . mJc [
22 ] = 0 ; out . mJc [ 23 ] = 0 ; out . mJc [ 24 ] = 0 ; out . mJc [ 25 ] = 0
; out . mJc [ 26 ] = 0 ; out . mJc [ 27 ] = 0 ; out . mJc [ 28 ] = 0 ; out .
mJc [ 29 ] = 0 ; out . mJc [ 30 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_tduy_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mTDUY_P ; out . mNumCol = 12ULL ; out . mNumRow =
18ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out
. mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ]
= 0 ; out . mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 0 ; out . mJc [ 9 ] = 0 ; out .
mJc [ 10 ] = 0 ; out . mJc [ 11 ] = 0 ; out . mJc [ 12 ] = 0 ; ( void ) sys ;
( void ) t2 ; return 0 ; } static int32_T ds_dty ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1
; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dty_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDTY_P ; out .
mNumCol = 1ULL ; out . mNumRow = 18ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1
] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
