/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVXT
* 文件名称 : KVXT_tc.h
* 概要描述 :
*	KV组件KVXT数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVXT_TC_H_
#define _KVXT_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <MEXAxGL_tc.h> 
#include <KWXA_tc.h> 
#include <KVXAxLOTxPAR_tc.h> 
#include <MBXA_tc.h> 
#include <MEXAxVSA_tc.h> 
#include <KVXA_tc.h> 
#include <base.h> 
#include <WPxCHUCK_tc.h> 
#include <MEXAxWAFxPLATE_tc.h> 
#include <LEXAxSPOT_tc.h> 
//extern MEMWxEVPxALxLAYOUT_TIS1_CHUCK1_LAYOUT_MEASURE  E1  //158, 162
//extern MEMWxEVPxALxLAYOUT_TIS2_CHUCK1_LAYOUT_MEASURE  E1  //181, 162
//extern MEMWxEVPxALxLAYOUT_TIS1_CHUCK2_LAYOUT_MEASURE  E1  //186, 162
//extern MEMWxEVPxALxLAYOUT_TIS2_CHUCK2_LAYOUT_MEASURE  E1  //169, 162
//extern MEMWxVPxLVL_SKIP_SPOTS_ON_GRATINGS_IVSA  ENABLED  //188, 191



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef double KVXT_TIS_drift_ref_struct_height[0x9];

typedef struct
{
    KVXT_TIS_drift_ref_struct_height height;
    LEXAxSPOT_spot_selection_t measValid;
} KVXT_TIS_drift_ref_struct;

typedef double KVXT_iVSA_plate_fallback_shape_dz[0x9];

typedef bool KVXT_iVSA_plate_fallback_shape_usability_per_spot[0x9];

typedef struct
{
    MEXAxWAFxPLATE_wafer_level_plate plate_id;
    KVXT_iVSA_plate_fallback_shape_dz dz;
    timestamp last_update;
    bool valid;
    bool reduced_usability_enabled;
    KVXT_iVSA_plate_fallback_shape_usability_per_spot usability_per_spot;
    double avg_y_shape;
} KVXT_iVSA_plate_fallback_shape;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int KVXT_set_plate_level_ref_xyz(const WPxCHUCK_chuck_id_enum *stage_id,
	const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	const xyzvect *plate_level_ref_xyz);
int KVXT_get_plate_level_ref_xyz(const WPxCHUCK_chuck_id_enum *stage_id,
	const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	xyzvect *plate_level_ref_xyz);
int KVXT_set_le_spot_xyz(const LEXAxSPOT_spot_id_t *spot_id,
	const xyzvect *le_spot_xyz);
int KVXT_get_le_spot_xyz(const LEXAxSPOT_spot_id_t *spot_id,
	xyzvect *le_spot_xyz);
int KVXT_set_al_athena_zrxry(const zrxryvect *al_athena_zrxry);
int KVXT_get_al_athena_zrxry(zrxryvect *al_athena_zrxry);
int KVXT_set_plate_wedge(const WPxCHUCK_chuck_id_enum *stage_id,
	const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	const zrxryvect *plate_wedge);
int KVXT_get_plate_wedge(const WPxCHUCK_chuck_id_enum *stage_id,
	const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	zrxryvect *plate_wedge);
int KVXT_set_SA_level_high_precision_count(const int *precision_count);
int KVXT_get_SA_level_high_precision_count(int *precision_count);
int KVXT_set_comp_sim_mode(const bool *comp_sim_mode);
int KVXT_get_comp_sim_mode(bool *comp_sim_mode);
int KVXT_get_plate_drift_refs(const WPxCHUCK_chuck_id_enum *stage_id,
	const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	KVXT_TIS_drift_ref_struct *drift_refs,
	bool *validity);
int KVXT_set_plate_drift_refs(const WPxCHUCK_chuck_id_enum *stage_id,
	const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	const KVXT_TIS_drift_ref_struct *drift_refs,
	const bool *validity);
int KVXT_set_chuck_id(const WPxCHUCK_chuck_id_enum *chuck_id);
int KVXT_get_chuck_id(WPxCHUCK_chuck_id_enum *chuck_id);
int KVXT_set_SA_plate_level_info(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	const KVXA_plate_level_info *plate_level_info);
int KVXT_get_SA_plate_level_info(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	KVXA_plate_level_info *plate_level_info);
int KVXT_set_ws_zeroing_error_zrxry(const zrxryvect *ws_zeroing_error_zrxry);
int KVXT_get_ws_zeroing_error_zrxry(const WPxCHUCK_chuck_id_enum *chuck_id,
	zrxryvect *ws_zeroing_error_zrxry);
int KVXT_set_le_spot_id_SA(const LEXAxSPOT_spot_selection_t *spot_id);
int KVXT_get_le_spot_id_SA(LEXAxSPOT_spot_selection_t *spot_id);
int KVXT_set_SA_capture_params(const KVXA_capture_params *capture_params);
int KVXT_get_SA_capture_params(KVXA_capture_params *capture_params);
int KVXT_set_high_precision_SA_levelling(const bool *high_precision_levelling);
int KVXT_get_high_precision_SA_levelling(bool *high_precision_levelling);
int KVXT_set_SA_model_done(const bool *sa_model_done);
int KVXT_get_SA_model_done(bool *sa_model_done);
int KVXT_retrieve_XVSA_scan_data(const WPxCHUCK_chuck_id_enum *chuck_id,
	MEXAxVSA_XVSA_scan_data *tis1_scan_data,
	MEXAxVSA_XVSA_scan_data *tis2_scan_data,
	KVXA_XVSA_chuck_model_results *xvsa_results,
	bool *xvsa_results_valid);
int KVXT_get_XVSA_scan_results(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	MEXAxVSA_XVSA_scan_data *scan_result);
int KVXT_set_XVSA_scan_refs(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	const MEXAxVSA_XVSA_scan_data *scan_result);
int KVXT_set_XVSA_thresholds(const MEXAxVSA_XVSA_thresholds *XVSA_warning_levels,
	const MEXAxVSA_XVSA_thresholds *XVSA_error_levels);
int KVXT_get_period_XVSA(MBXA_period_struct *period);
int KVXT_set_XVSA_drift_ref_profile(const WPxCHUCK_chuck_id_enum *chuck_id,
	const bool *found_stable_chuck_profile);
int KVXT_retrieve_LS_drift_SOSI(const WPxCHUCK_chuck_id_enum *chuck_id,
	double *Ry_drift);
int KVXT_get_LS_drift_SOSI_update_needed(const WPxCHUCK_chuck_id_enum *chuck_id,
	bool *LS_drift_SOSI_corr_update_needed_p);
int KVXT_flush_LS_drift_SOSI_filter(const WPxCHUCK_chuck_id_enum *chuck_id);
int KVXT_get_iVSA_update_needed(const WPxCHUCK_chuck_id_enum *chuck_id,
	bool *LS_drift_corr_update_needed_p,
	bool *fallback_shape_update_needed_p);
int KVXT_model_iVSA_fallback_shapes(const WPxCHUCK_chuck_id_enum *chuck_id,
	const KVXA_iVSA_level_results *level_results_TIS1_p,
	const KVXA_iVSA_level_results *level_results_TIS2_p,
	KVXT_iVSA_plate_fallback_shape *fallback_shape_TIS1_p,
	KVXT_iVSA_plate_fallback_shape *fallback_shape_TIS2_p);
int KVXT_set_iVSA_fallback_shapes(const WPxCHUCK_chuck_id_enum *chuck_id,
	const KVXT_iVSA_plate_fallback_shape *fallback_shape_TIS1_p,
	const KVXT_iVSA_plate_fallback_shape *fallback_shape_TIS2_p);
int KVXT_invalidate_iVSA_fallback_shapes(const WPxCHUCK_chuck_id_enum *chuck_id);
int KVXT_flush_LS_drift_filter(const WPxCHUCK_chuck_id_enum *chuck_id);
int KVXT_iVSA_to_XVSA(const MEXAxVSA_iVSA_level_lanes *measured_iVSA_lanes,
	const xyzvect *plate_level_ref,
	MEXAxVSA_XVSA_profile *profile);
int KVXT_set_global_wafer_wedge(const zrxryvect *global_wafer_wedge);
int KVXT_get_global_wafer_wedge(zrxryvect *global_wafer_wedge);
int KVXT_set_lot_GLC_params(const KVXAxLOTxPAR_GLC_lot_data *glc_lot_data);
int KVXT_get_lot_GLC_params(KVXAxLOTxPAR_GLC_lot_data *glc_lot_data);
int KVXT_set_GLC_capture_params(const KVXA_capture_params *capture_params);
int KVXT_get_GLC_capture_params(KVXA_capture_params *capture_params);
int KVXT_get_GLC_meas_results(KVXA_meas_results *glc_meas_results);
int KVXT_get_wafer_map(const WPxCHUCK_chuck_id_enum *chuck_id,
	KWXA_wafer_map *wafer_map);
int KVXT_set_le_spot_id_WM(const LEXAxSPOT_spot_selection_t *spot_id);
int KVXT_get_le_spot_id_WM(LEXAxSPOT_spot_selection_t *spot_id);
int KVXT_set_lot_WM_params(const KVXAxLOTxPAR_WM_lot_data_t *wm_lot_data);
int KVXT_get_lot_WM_params(KVXAxLOTxPAR_WM_lot_data_t *wm_lot_data);
int KVXT_reset_chuck_spot_detection(const int *chuck_id);
int KVXT_set_diagnostics(const MEXAxGL_state *state);
int KVXT_get_diagnostics(MEXAxGL_state *state);
void KVXT_set_context(const MEXAxGL_context_list *context);
int KVXT_log_stubs_get_last_error_log(int *exception_code,
	int *exception_link);



#endif // _KVXT_TC_H_
