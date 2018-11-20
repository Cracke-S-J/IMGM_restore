/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVxTEST
* 文件名称 : KVxTEST_tc.h
* 概要描述 :
*	KV组件KVxTEST数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVxTEST_TC_H_
#define _KVxTEST_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <KVXA_tc.h> 
#include <KVXT_tc.h> 
#include <MEXAxVSA_tc.h> 
#include <MEXAxWAFxPLATE_tc.h> 
#include <KVXTxMC_tc.h> 
#include <WPxCHUCK_tc.h> 
#include <KVMA_tc.h> 



/*-------------------------------- Defines -------------------------------*/
#define KVxTEST_ERR_BASE 	 0x4B560200 
#define KVxTEST_SYS_ERROR 	 0x4B560200 
#define KVxTEST_STATE_ERROR 	 0x4B560201 



/*-------------------------- Enums and Structs ---------------------------*/



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int KVxTEST_set_PDGC_table_status_array(const KVMA_PDGC_table_status_array *PDGC_table_status_array);
int KVxTEST_set_PDGC_meas_info_array(const KVMA_PDGC_meas_info_array *PDGC_meas_info_array);
int KVxTEST_get_PDGC_table_status_array(KVMA_PDGC_table_status_array *PDGC_table_status_array);
int KVxTEST_get_PDGC_meas_info_array(KVMA_PDGC_meas_info_array *PDGC_meas_info_array);
int KVxTEST_set_advanced_XVSA_flags(const bool *advanced_XVSA_enabled,
	const bool *XVSA_drift_ref_available,
	const bool *XVSA_done_for_cur_wafer);
int KVxTEST_set_test_XVSA_model_results(KVMA_XVSA_model_results *XVSA_model_res,
	KVMA_XVSA_model_results *XVSA_model_res_ref);
int KVxTEST_set_VSA_drop_det_ref_profile(const WPxCHUCK_chuck_id_enum *chuck_id,
	const timestamp *measured_time);
int KVxTEST_get_VSA_drop_det_model_results(KVMA_VSA_drop_det_model_results *vsa_drop_det_model_results_p);
int KVxTEST_get_VSA_drop_det_ref_profile(KVMA_VSA_drop_det_struct *vsa_drop_det_ref_profile_p);
int KVxTEST_set_detect_droplet_settings(const double *vsa_drop_det_threshold,
	const double *vsa_drop_det_update_factor,
	const double *vsa_drop_det_update_threshold,
	const double *vsa_drop_det_outliers_threshold,
	const int *vsa_drop_det_max_outliers,
	const KVXTxMC_VSA_drop_det_action_item *vsa_drop_det_action,
	const KVXTxMC_iVSA_drop_det_action_item *ivsa_drop_det_action);
int KVxTEST_store_TIS_drift_refs(const WPxCHUCK_chuck_id_enum *chuck_id);
int KVxTEST_check_for_TIS_drift(const WPxCHUCK_chuck_id_enum *chuck_id,
	const double *WS_zeroing_error_z,
	const double *WS_zeroing_error_ry);
int KVxTEST_vsa_droplet_detection(KVMA_droplet_detection_state *state_p);
int KVxTEST_set_valid_XVSA_reference(void);
int KVxTEST_set_iVSA_data(const KVMA_iVSA_data *new_data_p);
int KVxTEST_get_iVSA_data(KVMA_iVSA_data *data_p);
int KVxTEST_set_TIS_drift_correction_params(const KVXTxMC_TIS_drift_correction_params *TIS_drift_correction_params_p);
int KVxTEST_set_iVSA_level_lanes(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	const MEXAxVSA_iVSA_level_lanes *level_lanes);
int KVxTEST_get_iVSA_profile(MEXAxVSA_XVSA_results *data_p);
int KVxTEST_set_plate_ref_heights(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	const MEXAxWAFxPLATE_ref_heights *ref_heights);
int KVxTEST_set_E1_tis(const bool *E1_tis_present);
int KVxTEST_set_use_lane1_for_for_setpoint(const bool *lane_1_for_setpoint);
int KVxTEST_get_use_lane1_for_for_setpoint(bool *lane_1_for_setpoint_p);
int KVxTEST_KVMASA_start_wafer(const WPxCHUCK_chuck_id_enum *chuck_id);
int KVxTEST_get_iVSA_fallback_shapes(const WPxCHUCK_chuck_id_enum *chuck_id,
	KVXT_iVSA_plate_fallback_shape *fallback_shape_TIS1_p,
	KVXT_iVSA_plate_fallback_shape *fallback_shape_TIS2_p);
int KVxTEST_set_iVSA_height_difference_threshold(const double *iVSA_height_difference_threshold);
int KVxTEST_get_iVSA_height_difference_threshold(double *iVSA_height_difference_threshold);
int KVxTEST_get_plate_level_info(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	KVXA_plate_level_info *plate_level_info_p);
int KVxTEST_set_plate_level_info(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	const KVXA_plate_level_info *plate_level_info_p);
int KVxTEST_set_XVSA_SOSI_lvl_scan_refs(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	const MEXAxVSA_XVSA_scan_data *scan_result);
int KVxTEST_set_wafer_performed_flag(const bool *wafer_performed);



#endif // _KVxTEST_TC_H_
