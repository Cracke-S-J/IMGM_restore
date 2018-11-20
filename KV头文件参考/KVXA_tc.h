/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVXA
* 文件名称 : KVXA_tc.h
* 概要描述 :
*	KV组件KVXA数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVXA_TC_H_
#define _KVXA_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <RLxTABLESET_tc.h> 
#include <MEXA_tc.h> 
#include <LEXAxSPOT_tc.h> 
#include <KWXA_tc.h> 
#include <WPxCHUCK_tc.h> 
#include <KVXAxLOTxRES_tc.h> 
#include <KVXAxLOTxPAR_tc.h> 
#include <MExMEASURE_tc.h> 
#include <MEXAxVSA_tc.h> 
#include <LEXAxDEF_tc.h> 
#include <ADELme_grid_tc.h> 
#include <ADELsr_tc.h> 
#include <ADELgen_tc.h> 
#include <MEXAxGRDxMTCH_tc.h> 
#include <MEXAxWAFxPLATE_tc.h> 
#include <RLXA_tc.h> 
#include <base.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    KVXA_STATE_INITIALISED = 0,
    KVXA_STATE_TERMINATED = 1,
} KVXA_state;

typedef struct
{
    bool capture_needed;
    zrxryvect capture_zrxry;
    RLXA_capture_def_t capture_def;
} KVXA_capture_params;

typedef struct
{
    zrxryvect zrxry;
    bool valid;
} KVXA_zrxryvect;

typedef bool KVXA_plate_level_result_measure_z_valid[0x9];

typedef struct
{
    RLXA_get_result_ags_height_t plate_level_result;
    KVXA_plate_level_result_measure_z_valid measure_z_valid;
    bool capture_z_valid;
} KVXA_plate_level_result;

typedef KVXA_plate_level_result KVXA_plate_level_info_plate_res[0x19];

typedef double KVXA_plate_level_info_avg_z_per_spot[0x9];

typedef bool KVXA_plate_level_info_avg_z_per_spot_valid[0x9];

typedef struct
{
    MEXAxWAFxPLATE_wafer_level_plate plate_id;
    KVXA_plate_level_info_plate_res plate_res;
    xyavect ws_exp_pos_xyrz;
    zrxryvect ws_exp_pos_zrxry;
    double plate_avg_z;
    bool plate_avg_z_valid;
    double plate_error_z;
    int nr_meas_results;
    KVXA_plate_level_info_avg_z_per_spot avg_z_per_spot;
    KVXA_plate_level_info_avg_z_per_spot_valid avg_z_per_spot_valid;
    int nr_valid_meas_results;
} KVXA_plate_level_info;

typedef enum
{
    KVXA_SA_DRIFT_MODEL_ACTION_STORE_AS_REFERENCE = 0,
    KVXA_SA_DRIFT_MODEL_ACTION_CHECK_FOR_TIS_DRIFT = 1,
    KVXA_SA_DRIFT_MODEL_ACTION_IVSA = 2,
    KVXA_SA_DRIFT_MODEL_ACTION_LS_DRIFT = 3,
    KVXA_SA_DRIFT_MODEL_ACTION_LS_DRIFT_SOSI_LVL = 4,
    KVXA_SA_DRIFT_MODEL_ACTION_NONE = 5,
} KVXA_SA_drift_model_action;

typedef struct
{
    RLXA_AG_get_result_height_t plate_level_result;
    bool measure_z_valid;
    double scan_start_time;
} KVXA_AG_plate_level_result;

typedef KVXA_AG_plate_level_result KVXA_AG_plate_level_info_plate_res[0x19];

typedef struct
{
    MEXAxWAFxPLATE_wafer_level_plate plate_id;
    KVXA_AG_plate_level_info_plate_res plate_res;
    xyavect ws_exp_pos_xyrz;
    zrxryvect ws_exp_pos_zrxry;
    double plate_error_z;
    int nr_meas_results;
    double avg_z;
    bool avg_z_valid;
    double avg_scan_start_times;
    int nr_valid_meas_results;
} KVXA_AG_plate_level_info;

typedef MEXAxGRDxMTCH_mirror_block_params KVXA_mirror_block_params[0x2];

typedef struct
{
    xyvect measure_position;
    double measured_height;
    double measured_height_std;
    bool height_valid;
} KVXA_meas_result;

typedef struct
{
    int len;
    int max_len;
    KVXA_meas_result* array;
} KVXA_meas_results;

typedef enum
{
    KVXA_CONTINUE = 0,
    KVXA_REJECT = 1,
    KVXA_RECOVER_GLC = 2,
    KVXA_RECOVER_SOSI = 3,
} KVXA_WM_recovery_method;

typedef struct
{
    ADELgen_RecipeIDType SubRecipeName;
    ADELsr_CorrectionSetNameType CorrectionSetName;
} KVXA_CorrectionSetIDType;

typedef struct
{
    int len;
    int max_len;
    KVXA_CorrectionSetIDType* array;
} KVXA_CorrectionSetIDListType;

typedef struct
{
    ADELgen_RecipeIDType SubRecipeName;
    ADELsr_CorrectionSetNameType CorrectionSetName;
    ADELme_grid_LsGridType LsGrid;
    LEXAxDEF_pdgc_table_id_t pdgc_table_id;
} KVXA_pdgc_id_mapping;

typedef struct
{
    int len;
    int max_len;
    KVXA_pdgc_id_mapping* array;
} KVXA_pdgc_id_mapping_list;

typedef struct
{
    int len;
    int max_len;
    RLXA_request_det_pdgc_tables_t* array;
} KVXA_RL_PDGC_averaging_params_array;

typedef struct
{
    MEXAxVSA_XVSA_fiducial_drift plate_drift;
    double plate_deformation;
} KVXA_XVSA_plate_model_results;

typedef double KVXA_XVSA_chuck_model_results_dZ_LE_spot[0x9];

typedef bool KVXA_XVSA_chuck_model_results_dZ_LE_spot_valid[0x9];

typedef struct
{
    KVXA_XVSA_plate_model_results TIS1;
    KVXA_XVSA_plate_model_results TIS2;
    KVXA_XVSA_chuck_model_results_dZ_LE_spot dZ_LE_spot;
    KVXA_XVSA_chuck_model_results_dZ_LE_spot_valid dZ_LE_spot_valid;
    double dRy_LE;
} KVXA_XVSA_chuck_model_results;

typedef RLXA_request_ags_scan_height_t KVXA_iVSA_level_params_lane_params[0x3];

typedef bool KVXA_iVSA_level_params_lane_usage[0x3];

typedef struct
{
    KVXA_iVSA_level_params_lane_params lane_params;
    KVXA_iVSA_level_params_lane_usage lane_usage;
    int nr_lane_params;
} KVXA_iVSA_level_params;

typedef bool KVXA_iVSA_level_results_lane_usage[0x3];

typedef RLXA_get_result_ags_height_t KVXA_iVSA_level_results_lane_results[0x3];

typedef bool KVXA_iVSA_level_results_lane_results_valid[0x3];

typedef struct
{
    KVXA_iVSA_level_results_lane_usage lane_usage;
    KVXA_iVSA_level_results_lane_results lane_results;
    KVXA_iVSA_level_results_lane_results_valid lane_results_valid;
    int nr_lane_results;
} KVXA_iVSA_level_results;

typedef zrxryvect KVXA_iVSA_ws_ver_pos_setpoint[0x3];

typedef bool KVXA_iVSA_ws_ver_pos_lane_usage[0x3];

typedef struct
{
    KVXA_iVSA_ws_ver_pos_setpoint setpoint;
    KVXA_iVSA_ws_ver_pos_lane_usage lane_usage;
    int nr_setpoints;
} KVXA_iVSA_ws_ver_pos;

typedef MExMEASURE_tis_lane_usage KVXA_iVSA_recovery_sequence_params_lane_usage_per_iteration[0x2];

typedef struct
{
    int nr_iterations;
    KVXA_iVSA_recovery_sequence_params_lane_usage_per_iteration lane_usage_per_iteration;
} KVXA_iVSA_recovery_sequence_params;

typedef struct
{
    bool wafer_approve_requested;
    bool wafer_immersion_approved;
    bool wafer_exposure_approved;
    double min_wafer_z;
    double max_wafer_z;
    zrxryvect IH_level_offset;
} KVXA_wafer_check_results;

typedef enum
{
    KVXA_SKIP_ALL_PRECONDITIONS = 0,
    KVXA_CHECK_ALL_PRECONDITIONS = 1,
} KVXA_precondition_check;

typedef struct
{
    bool enable_robust_iVSA;
    bool use_Ry_capture;
    int Ry_capture_spots;
    bool use_robust_capture;
} KVXA_robust_iVSA_params;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int KVXA_start_lot(const bool *lot_retry,
	const KVXAxLOTxPAR_levelling_lot_data_t *levelling_lot_data);
int KVXA_finish_lot(const bool *on_failure,
	KVXAxLOTxRES_lot_report *lot_report);
int KVXA_start_wafer(const WPxCHUCK_chuck_id_enum *chuck_id,
	const bool *skip_PDxC_meas,
	const bool *do_WM_recovery);
int KVXA_finish_wafer(MEXAxVSA_XVSA_results *xvsa_results,
	KVXAxLOTxRES_SA_results *sa_results,
	KVXAxLOTxRES_GLC_results *glc_results,
	KVXAxLOTxRES_PDGC_results *pdgc_results,
	KVXAxLOTxRES_WM_results *wm_results,
	KWXA_wafer_map_info *wafer_map_info);
int KVXA_get_wafer_measurement_properties(const KVXAxLOTxPAR_WM_lot_data_t *wafermap_route_p,
	const KVXAxLOTxPAR_PDGC_lot_data *PDGC_lot_data,
	const KVXAxLOTxPAR_PDOC_lot_data *PDOC_lot_data,
	const bool *new_lot,
	const bool *is_closing_wafer,
	int *pdxc_estimated_measurement_time,
	bool *delay_exposure_motion);
int KVXA_det_SA_level_params(const xyavect *exp_hor_pos,
	const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	zrxryvect *exp_ver_pos);
int KVXA_set_SA_level_params(const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	const xyavect *ws_exp_pos_xyrz_p);
int KVXA_get_SA_level_params(const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	MExMEASURE_SA_level_params_KV_KD *plate_level_params,
	LEXAxSPOT_spot_selection_t *le_spot_selection,
	double *accuracy,
	bool *capture_needed,
	RLXA_capture_def_t *capture_def);
int KVXA_set_SA_level_result(const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	const int *seq_nr,
	const RLXA_get_result_ags_height_t *plate_level_result,
	bool *do_recover);
int KVXA_det_SA_align_params(const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	const MExMEASURE_SA_align_params_KD_KV *plate_align_params,
	zrxryvect *ws_exp_pos_zrxry,
	double *ws_scan_tilt_x,
	double *ws_scan_tilt_y);
int KVXA_model_stage_alignment(const KVXA_SA_drift_model_action *SA_drift_model_action,
	const KVXA_precondition_check *precondition_check,
	const bool *single_TIS);
int KVXA_model_phase_capture_error(const bool *single_TIS,
	KVXA_zrxryvect *phase_capture_error_p);
int KVXA_save_current_zeroing_error_ref(void);
int KVXA_reset_zeroing_error_ref(const MEXA_zeroing_error_ref_reset_option *option,
	const WPxCHUCK_chuck_id_enum *chuck_id,
	const zrxryvect *new_zeroing_error_ref);
int KVXA_model_phase_capture_error_interf(const bool *single_TIS,
	KVXA_zrxryvect *phase_capture_error_p);
int KVXA_get_SA_level_nr_measurements(int *nr_of_meas);
int KVXA_reset_SA_for_repeat(const WPxCHUCK_chuck_id_enum *chuck_id);
int KVXA_get_number_of_GLC_scans(int *nr_of_scans);
int KVXA_get_GLC_params(const int *seq_nr,
	MExMEASURE_GLC_params_KV_KD *glc_params,
	double *glc_radius,
	RLxTABLESET_table_set_t *glc_tableset,
	zrxryvect *capture_zrxry,
	bool *capture_needed,
	RLXA_capture_def_t *capture_def);
int KVXA_set_GLC_params(const int *seq_nr,
	const MExMEASURE_GLC_params_KD_KV *glc_params);
int KVXA_put_GLC_results(const int *seq_nr,
	const RLXA_get_result_glc_t *glc_results);
int KVXA_det_align_params(const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	const xyvect *mark_xy,
	const xyavect *ws_exp_pos_xyrz,
	const zrxryvect *mark_level_offset_zrxry,
	const zrxryvect *focus_offset_zrxry,
	zrxryvect *ws_exp_pos_zrxry,
	double *ws_scan_tilt_x,
	double *ws_scan_tilt_y);
int KVXA_det_COWA_scan_params(const MExMEASURE_COWA_params_KD_KV *scan_params,
	zrxryvect *ws_exp_pos_zrxry,
	double *ws_scan_tilt_x,
	double *ws_scan_tilt_y);
int KVXA_det_FIWA_scan_params(const MExMEASURE_FIWA_params_KD_KV *scan_params,
	zrxryvect *ws_exp_pos_zrxry,
	double *ws_scan_tilt_x,
	double *ws_scan_tilt_y);
int KVXA_verify_COWA_setpoint(const xyvect *xypos,
	bool *valid);
int KVXA_get_last_stroke_end_position(xyvect *last_pos);
int KVXA_det_PD_meas_extra_sa_needed(const int *elapsed_time,
	bool *extra_sa_needed);
int KVXA_get_PDGC_nr_measurements(int *nr_of_meas);
int KVXA_get_PDGC_measurement_params(const int *seq_nr,
	MExMEASURE_PDGC_measurement_params_KV_KD *pdgc_meas_params,
	RLxTABLESET_table_set_t *pdgc_servo_table_set,
	RLxTABLESET_table_set_t *pdgc_calib_table_set);
int KVXA_det_PDGC_measurement_params(const int *seq_nr,
	const MExMEASURE_PDGC_measurement_params_KD_KV *pdgc_meas_params,
	zrxryvect *pdgc_servo_start,
	zrxryvect *pdgc_servo_end);
int KVXA_get_PDGC_averaging_params(KVXA_RL_PDGC_averaging_params_array *pdgc_averaging_params);
int KVXA_get_imported_PDGC_table_params(LEXAxDEF_pdgc_table_params_array_t *pdgc_table_params);
int KVXA_set_imported_PDGC_table_ids(const LEXAxDEF_pdgc_table_id_array_t *pdgc_table_ids);
int KVXA_get_exported_PDGC_table_params(LEXAxDEF_pdgc_table_params_array_t *pdgc_table_params);
int KVXA_set_measured_PDGC_table_id(const LEXAxDEF_pdgc_table_id_t *pdgc_table_id,
	const int *nr_invalid_entries);
int KVXA_det_XSA_align_params(const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	const MExMEASURE_SA_align_params_KD_KV *plate_align_params,
	zrxryvect *ws_exp_pos_zrxry,
	double *ws_scan_tilt_x,
	double *ws_scan_tilt_y);
int KVXA_det_XSA_level_params(const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	MExMEASURE_SA_level_params_KV_KD *XSA_scanin_params_KV_KD,
	MExMEASURE_SA_level_params_KV_KD *XSA_scanout_params_KV_KD,
	RLxTABLESET_table_set_t *zmap_table,
	zrxryvect *ws_exp_scanin_pos_zRxRy,
	zrxryvect *ws_exp_scanout_pos_zRxRy);
int KVXA_get_XSA_level_nr_measurements(int *nr_of_meas);
int KVXA_set_XSA_level_result(const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	const int *index,
	const RLXA_get_result_zmap_t *zmap_result);
int KVXA_get_iVSA_recovery_params(KVXA_iVSA_recovery_sequence_params *recovery_sequence_params_p);
int KVXA_get_iVSA_level_params(const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	const MExMEASURE_tis_lane_usage *lane_usage,
	MExMEASURE_iVSA_nom_level_pos *nom_level_pos_p,
	KVXA_iVSA_level_params *level_params_p);
int KVXA_det_iVSA_level_params(const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	const MExMEASURE_iVSA_ws_hor_pos *ws_hor_pos_p,
	KVXA_iVSA_ws_ver_pos *ws_ver_pos_p);
int KVXA_set_iVSA_level_results(const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	const int *seq_nr,
	const KVXA_iVSA_level_results *level_results_p,
	bool *do_recover_p);
int KVXA_get_WM_stroke_params(const int *seq_nr,
	MExMEASURE_WM_params_KV_KD *wm_params,
	RLxTABLESET_table_set_t *wm_tableset);
int KVXA_det_WM_stroke_params(const int *seq_nr,
	const MExMEASURE_WM_params_KD_KV *wm_stroke_params,
	zrxryvect *start_zrxry,
	zrxryvect *end_zrxry);
int KVXA_put_WM_stroke_results(const int *seq_nr,
	const RLXA_get_result_zmap_t *wm_stroke_results);
int KVXA_check_WM_recovery_method(KVXA_WM_recovery_method *WM_recovery_method);
int KVXA_get_SOSI_WM_stroke_params(const int *seq_nr,
	MExMEASURE_WM_params_KV_KD *wm_params,
	RLxTABLESET_sosi_table_set_t *wm_tableset,
	xyvect *scanin_point_z_next_stroke,
	LEXAxSPOT_spot_selection_t *next_scan_in_z_spot,
	xyvect *scanin_point_ry_next_stroke,
	LEXAxSPOT_spot_selection_t *next_scan_in_ry_spots);
int KVXA_det_SOSI_WM_stroke_params(const int *seq_nr,
	const MExMEASURE_WM_params_KD_KV *wm_stroke_params,
	zrxryvect *start_zrxry,
	zrxryvect *end_zrxry);
int KVXA_put_SOSI_WM_stroke_results(const int *seq_nr,
	const RLXA_get_result_zmap_t *wm_stroke_results);
int KVXA_check_SOSI_WM_recovery_method(KVXA_WM_recovery_method *WM_recovery_method);
int KVXA_get_WM_nr_strokes(int *nr_of_strokes);
int KVXA_get_FM_results(const WPxCHUCK_chuck_id_enum *chuck_id,
	int *event_code,
	KVXAxLOTxRES_FM_results *fm_results);
void KVXA_perform_FM(void);
int KVXA_remove_scan_from_buffer(const int *scan_id);
int KVXA_get_wafer_check_results(KVXA_wafer_check_results *wafer_check_results);
int KVXA_get_robust_iVSA_MC(KVXA_robust_iVSA_params *robust_iVSA_params);
int KVXA_get_wafer_capture_params(const bool *fallback,
	MExMEASURE_wc_params_KV_KD *hor_cap_pos,
	RLXA_request_wafer_capture_t *capture_def);
int KVXA_det_wafer_capture_params(horvervect **RL_cap_pos);
int KVXA_set_wafer_capture_results(const zrxryvect *cap_result);
int KVXA_reset_wafer_capture_results(void);
int KVXA_get_wafer_capture_results(zrxryvect *cap_result,
	bool *valid);
int KVXA_check_iVSA_height_difference(const bool *single_tis,
	bool *recovery_needed);
int KVXA_WM_recovery_enabled(bool *wm_recovery_enabled);



#endif // _KVXA_TC_H_
