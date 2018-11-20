/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVXTxMC
* 文件名称 : KVXTxMC_tc.h
* 概要描述 :
*	KV组件KVXTxMC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVXTxMC_TC_H_
#define _KVXTxMC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <MEXAxWAFxPLATE_tc.h> 
#include <MCXA.h> 
#include <LEXAxSPOT_tc.h> 
#include <WPxCHUCK_tc.h> 
//extern MEMWxVPxFM_FOCUS_MONITORING  PRESENT  //595, 620
//extern MEMWxVPxFM_IMPROVED_FSM  ENABLED  //609, 632
//extern GVxVPxMACHxLOC_MACHINE_LOC  ASML_SITE  //605, 626
//extern MIxVPxDC_WS_MEASUREMENT_SYSTEM  ENCODERS  //622, 596
//extern MEMWxVPxLVL_VERTICAL_STAGE_ALIGN_STRATEGY  IVSA  //599, 607
//extern MEMWxVPxLVL_VERTICAL_STAGE_ALIGN_STRATEGY  VSA_STANDARD_XVSA  //599, 628
//extern IHCCxVPxIMM_IMMERSION  PRESENT  //601, 620
//extern IHCCxVPxIMM_IMMERSION  ABSENT  //601, 604
//extern MEMWxVPxLVL_AGILE  AGILE2  //594, 631
//extern MEMWxVPxLVL_AGILE  PRESENT  //594, 620
//extern KVxEVPxAGILE_THRESHOLD_AGILE_CORR_VISIBLE  FALSE  //623, 615
//extern KVxEVPxAGILE_THRESHOLD_AGILE_CORR_VISIBLE  TRUE  //623, 630
//extern KVxVPxSA_HSA_VERT_SETPOINT  WAIT_FOR_CUR  //627, 614
//extern KVxVPxSA_HSA_VERT_SETPOINT  USE_PREVIOUS  //627, 610
//extern MEEWxVPxLVL_IMPROVED_LEVELING_2  ENABLED  //606, 632
//extern KVxVPxLSRY_SWITCH_200  ENABLED  //591, 632
//extern KRxVPxLVL_WZM_TYPE  TYPE_2  //618, 619
//extern EMWMxVPxSUSD_SUSD_FOCUS  DISABLED  //617, 593
//extern EMWMxVPxSUSD_SUSD_FOCUS  MODEL_TYPE_1  //617, 602
//extern EMWMxVPxSUSD_SUSD_FOCUS  MODEL_TYPE_2  //617, 603
//extern GVxVPxMACHxTYPE_MACHINE_ARCHITECTURE  NXE  //613, 629



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    double fsm_edge_exclusion;
    bool fsm_ero_correction;
    double fsm_ero_dist_edge;
} KVXTxMC_FSM_params;

typedef struct
{
    bool reject_failed_wafer;
    double max_z_deviation;
} KVXTxMC_GLC_deviation_check_params;

typedef enum
{
    KVXTxMC_CONTINUE = 0,
    KVXTxMC_REJECT = 1,
    KVXTxMC_RECOVER = 2,
} KVXTxMC_failed_wafer_action;

typedef struct
{
    KVXTxMC_failed_wafer_action failed_wafer_action;
    int max_nr_failed_wams;
    double valid_data_percent_threshold;
} KVXTxMC_LS_data_check_params;

typedef struct
{
    KVXTxMC_failed_wafer_action failed_wafer_action;
    int max_nr_failed_wams;
    double max_z_deviation;
    double max_rx_deviation;
    double max_ry_deviation;
    double min_plane_area_size_x;
    double min_plane_area_size_y;
} KVXTxMC_wam_deviation_check_params;

typedef struct
{
    KVXTxMC_GLC_deviation_check_params GLC_deviation_check_params;
    KVXTxMC_LS_data_check_params LS_data_check_params;
    KVXTxMC_wam_deviation_check_params wam_deviation_check_params;
} KVXTxMC_WM_data_checks_params;

typedef struct
{
    double idle_period;
    double drift_threshold;
    double drift_rate;
    double update_ratio;
} KVXTxMC_TIS_drift_correction_params;

typedef struct
{
    double extension_x_pos;
    double extension_y_pos;
    double extension_x_neg;
    double extension_y_neg;
} KVXTxMC_WM_scaninout_GLC_candidate_area_extension_params;

typedef struct
{
    double min_x_size;
    double min_y_size;
} KVXTxMC_WM_scaninout_minimum_scan_plane_area_params;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    double Z1;
    double Z2;
    double Z3;
    double Z4;
    double Z5;
} KVXTxMC_SUSD_params;

typedef enum
{
    KVXTxMC_VSA_DROP_DET_ACTION_WARNING = 0,
    KVXTxMC_VSA_DROP_DET_ACTION_WAFER_REJECT = 1,
    KVXTxMC_VSA_DROP_DET_ACTION_DRY_TIS = 2,
} KVXTxMC_VSA_drop_det_action_item;

typedef enum
{
    KVXTxMC_iVSA_DROP_DET_ACTION_WAFER_REJECT = 0,
    KVXTxMC_iVSA_DROP_DET_ACTION_DRY_TIS = 1,
} KVXTxMC_iVSA_drop_det_action_item;

typedef struct
{
    double threshold;
    double update_factor;
    double update_threshold;
    double outliers_threshold;
    int max_outliers;
    KVXTxMC_VSA_drop_det_action_item VSA_drop_det_action;
    KVXTxMC_iVSA_drop_det_action_item iVSA_drop_det_action;
} KVXTxMC_vsa_drop_det_mcs;

typedef struct
{
    double x_pos;
    double y_pos;
    LEXAxSPOT_spot_id_t ls_spot;
    double droplet_threshold;
} KVXTxMC_agile_reference_measurement_mcs;

typedef struct
{
    double threshold;
} KVXTxMC_auto_PDOC_corr_sets;

typedef struct
{
    double iVSA_height_difference_threshold;
} KVXTxMC_iVSA_height_difference_mcs;

typedef double KVXTxMC_AG_LS_resist_offsets_mcs_offset[0x9];

typedef struct
{
    KVXTxMC_AG_LS_resist_offsets_mcs_offset offset;
} KVXTxMC_AG_LS_resist_offsets_mcs;

typedef double KVXTxMC_MACH_CONST_STRUCT_AG_LS_resist_offsets[0x9];

typedef KVXTxMC_SUSD_params KVXTxMC_MACH_CONST_STRUCT_SUSD_correction_params[0x2];

typedef KVXTxMC_AG_LS_resist_offsets_mcs KVXTxMC_MACH_CONST_STRUCT_AG_LS_chuck_resist_offsets[0x2];

typedef struct
{
    KVXTxMC_WM_scaninout_GLC_candidate_area_extension_params wm_scaninout_glc_candidate_area_extension_params;
    KVXTxMC_WM_scaninout_minimum_scan_plane_area_params wm_scaninout_minimum_scan_plane_area_params;
    int sa_level_high_precision_count;
    KVXTxMC_MACH_CONST_STRUCT_AG_LS_resist_offsets AG_LS_resist_offsets;
    bool apply_IFPC;
    KVXTxMC_MACH_CONST_STRUCT_SUSD_correction_params SUSD_correction_params;
    KVXTxMC_vsa_drop_det_mcs vsa_drop_det;
    KVXTxMC_iVSA_height_difference_mcs iVSA_height_difference;
    KVXTxMC_MACH_CONST_STRUCT_AG_LS_chuck_resist_offsets AG_LS_chuck_resist_offsets;
} KVXTxMC_MACH_CONST_STRUCT;

typedef double KVXTxMC_iVSA_lane_PDGC_gain[0x9];

typedef struct
{
    KVXTxMC_iVSA_lane_PDGC_gain gain;
} KVXTxMC_iVSA_lane_PDGC;

typedef KVXTxMC_iVSA_lane_PDGC KVXTxMC_iVSA_plate_PDGC_lane[0x3];

typedef struct
{
    KVXTxMC_iVSA_plate_PDGC_lane lane;
} KVXTxMC_iVSA_plate_PDGC;

typedef struct
{
    bool use_high_precision;
    double settle_time;
    double y_speed;
} KVXTxMC_high_precision_XVSA_scan;

typedef double KVXTxMC_LS_drift_correction_dz[0x9];

typedef struct
{
    KVXTxMC_LS_drift_correction_dz dz;
    double dRy;
    timestamp last_update;
    bool valid;
} KVXTxMC_LS_drift_correction;

typedef struct
{
    double dRy;
} KVXTxMC_LS_stroke_tilt;

typedef KVXTxMC_iVSA_plate_PDGC KVXTxMC_chuck_dep_mcs_iVSA_plate_PDGC[0x2];

typedef struct
{
    KVXTxMC_chuck_dep_mcs_iVSA_plate_PDGC iVSA_plate_PDGC;
    KVXTxMC_LS_drift_correction LS_drift_correction;
    KVXTxMC_LS_stroke_tilt LS_stroke_tilt;
    timestamp LS_drift_for_SOSI_last_update;
} KVXTxMC_chuck_dep_mcs;

typedef struct
{
    bool enable_robust_iVSA;
    bool use_Ry_capture;
    int Ry_capture_spots;
    bool use_robust_capture;
} KVXTxMC_robust_iVSA_mcs;

typedef double KVXTxMC_EXTENDED_MACH_CONST_STRUCT_AG_LS_resist_offsets[0x9];

typedef KVXTxMC_SUSD_params KVXTxMC_EXTENDED_MACH_CONST_STRUCT_SUSD_correction_params[0x2];

typedef KVXTxMC_chuck_dep_mcs KVXTxMC_EXTENDED_MACH_CONST_STRUCT_chuck[0x2];

typedef KVXTxMC_AG_LS_resist_offsets_mcs KVXTxMC_EXTENDED_MACH_CONST_STRUCT_AG_LS_chuck_resist_offsets[0x2];

typedef struct
{
    KVXTxMC_WM_scaninout_GLC_candidate_area_extension_params wm_scaninout_glc_candidate_area_extension_params;
    KVXTxMC_WM_scaninout_minimum_scan_plane_area_params wm_scaninout_minimum_scan_plane_area_params;
    int sa_level_high_precision_count;
    KVXTxMC_WM_data_checks_params WM_data_checks_params;
    double max_COWA_setpoint_height_deviation;
    KVXTxMC_EXTENDED_MACH_CONST_STRUCT_AG_LS_resist_offsets AG_LS_resist_offsets;
    double max_PD_meas_SA_delay;
    bool apply_IFPC;
    KVXTxMC_FSM_params fsm_parameters;
    KVXTxMC_TIS_drift_correction_params TIS_drift_correction_params;
    KVXTxMC_EXTENDED_MACH_CONST_STRUCT_SUSD_correction_params SUSD_correction_params;
    KVXTxMC_high_precision_XVSA_scan high_precision_XVSA_scan;
    KVXTxMC_EXTENDED_MACH_CONST_STRUCT_chuck chuck;
    KVXTxMC_vsa_drop_det_mcs vsa_drop_det;
    KVXTxMC_iVSA_height_difference_mcs iVSA_height_difference;
    KVXTxMC_robust_iVSA_mcs robust_iVSA_mcs;
    KVXTxMC_auto_PDOC_corr_sets auto_PDOC_corr_sets;
    KVXTxMC_EXTENDED_MACH_CONST_STRUCT_AG_LS_chuck_resist_offsets AG_LS_chuck_resist_offsets;
    KVXTxMC_agile_reference_measurement_mcs agile_ref_measurement;
    bool kv_agile2_mcs_are_upgraded;
} KVXTxMC_EXTENDED_MACH_CONST_STRUCT;

typedef struct
{
    MCXA_FILE_HEAD mc_head;
    KVXTxMC_MACH_CONST_STRUCT mc;
} KVXTxMC_FILE_STRUCT;

typedef struct
{
    MCXA_FILE_HEAD mc_head;
    KVXTxMC_EXTENDED_MACH_CONST_STRUCT mc;
} KVXTxMC_EXTENDED_FILE_STRUCT;

typedef char KVXTxMC__save_id[0x400];

typedef KVXTxMC_SUSD_params KVXTxMC__get_SUSD_params_SUSD_correction_params[0x2];

typedef KVXTxMC_SUSD_params KVXTxMC__set_SUSD_params_SUSD_correction_params[0x2];



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
void KVXTxMC_load(void);
int KVXTxMC_save(const KVXTxMC__save_id *id);
int KVXTxMC_get_WM_scaninout_GLC_candidate_area_extension_params(KVXTxMC_WM_scaninout_GLC_candidate_area_extension_params *extensions_p);
int KVXTxMC_set_WM_scaninout_GLC_candidate_area_extension_params(const KVXTxMC_WM_scaninout_GLC_candidate_area_extension_params *extensions_p);
int KVXTxMC_get_WM_scaninout_plane_area_params(KVXTxMC_WM_scaninout_minimum_scan_plane_area_params *scaninout_plane_area_params_p);
int KVXTxMC_set_WM_scaninout_plane_area_params(const KVXTxMC_WM_scaninout_minimum_scan_plane_area_params *scaninout_plane_area_params_p);
int KVXTxMC_get_machine_constants(KVXTxMC_MACH_CONST_STRUCT *mach_const_p);
int KVXTxMC_get_ag_ls_chuck_resist_offsets(const int *chuck_ix,
	KVXTxMC_AG_LS_resist_offsets_mcs *ag_ls_resist_offsets);
int KVXTxMC_set_ag_ls_chuck_resist_offsets(const int *chuck_ix,
	const KVXTxMC_AG_LS_resist_offsets_mcs *ag_ls_resist_offsets);
int KVXTxMC_get_SUSD_params(KVXTxMC__get_SUSD_params_SUSD_correction_params *SUSD_correction_params);
int KVXTxMC_set_SUSD_params(const KVXTxMC__set_SUSD_params_SUSD_correction_params *SUSD_correction_params);
int KVXTxMC_get_iVSA_plate_PDGC(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	KVXTxMC_iVSA_plate_PDGC *plate_PDGC_p);
int KVXTxMC_set_iVSA_plate_PDGC(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	const KVXTxMC_iVSA_plate_PDGC *plate_PDGC_p);
int KVXTxMC_get_high_precision_XVSA_scan_mcs(KVXTxMC_high_precision_XVSA_scan *high_precision_XVSA_scan_p);
int KVXTxMC_get_LS_drift_correction(const WPxCHUCK_chuck_id_enum *chuck_id,
	KVXTxMC_LS_drift_correction *LS_drift_corr_p);
int KVXTxMC_set_LS_drift_correction(const WPxCHUCK_chuck_id_enum *chuck_id,
	const KVXTxMC_LS_drift_correction *LS_drift_corr_p);
int KVXTxMC_get_LS_stroke_tilt(const WPxCHUCK_chuck_id_enum *chuck_id,
	KVXTxMC_LS_stroke_tilt *LS_stroke_tilt_p);
int KVXTxMC_set_LS_stroke_tilt(const WPxCHUCK_chuck_id_enum *chuck_id,
	const KVXTxMC_LS_stroke_tilt *LS_stroke_tilt_p);
int KVXTxMC_get_fsm_ero_params(bool *ero_correction_p,
	double *ero_dist_edge_p);
int KVXTxMC_get_AGILE_ref_meas_mcs(KVXTxMC_agile_reference_measurement_mcs *agile_ref_meas_params);



#endif // _KVXTxMC_TC_H_
