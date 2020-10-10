#ifndef __c1_Autotrans_myModel_h__
#define __c1_Autotrans_myModel_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc1_Autotrans_myModelInstanceStruct
#define typedef_SFc1_Autotrans_myModelInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c1_sfEvent;
  uint8_T c1_tp_gear_state;
  uint8_T c1_tp_first;
  uint8_T c1_tp_second;
  uint8_T c1_tp_third;
  uint8_T c1_tp_fourth;
  uint8_T c1_tp_selection_state;
  uint8_T c1_tp_steady_state;
  uint8_T c1_tp_upshifting;
  uint8_T c1_tp_downshifting;
  uint8_T c1_is_active_c1_Autotrans_myModel;
  uint8_T c1_is_gear_state;
  uint8_T c1_is_active_gear_state;
  uint8_T c1_is_selection_state;
  uint8_T c1_is_active_selection_state;
  real_T c1_TWAIT;
  real_T c1_down_th;
  real_T c1_up_th;
  uint32_T c1_temporalCounter_i1;
  uint8_T c1_doSetSimStateSideEffects;
  const mxArray *c1_setSimStateSideEffectsInfo;
  void *c1_fEmlrtCtx;
  real_T *c1_Throttle;
  real_T *c1_VehicleSpeed;
  real_T *c1_Gear;
  real_T *c1_b_Gear;
  real_T *c1_b_Throttle;
  real_T *c1_b_down_th;
  real_T *c1_b_up_th;
} SFc1_Autotrans_myModelInstanceStruct;

#endif                                 /*typedef_SFc1_Autotrans_myModelInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c1_Autotrans_myModel_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c1_Autotrans_myModel_get_check_sum(mxArray *plhs[]);
extern void c1_Autotrans_myModel_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
