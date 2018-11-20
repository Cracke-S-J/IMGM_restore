/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVMA
* 文件名称 : KVMA_tc.h
* 概要描述 :
*	KV组件KVMA数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVMA_TC_H_
#define _KVMA_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <LEXAxDEF_tc.h> 
#include <ADELsr_tc.h> 
#include <ADELgen_tc.h> 
#include <CNXA.h> 
#include <MEXAxVSA_tc.h> 
#include <KVXT_tc.h> 
#include <MEXAxWAFxPLATE_tc.h> 
#include <base.h> 
#include <RLXA_tc.h> 
#include <WPxCHUCK_tc.h> 
#include <KVXA_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    KVMA_STATE_IDLE = 0,
    KVMA_STATE_WAITING_FOR_RESULTS = 1,
    KVMA_STATE_RESULTS_AVAILABLE = 2,
} KVMA_FM_state;

typedef enum
{
    KVMA_KVFM_DRIVER_STATE_IDLE = 0,
    KVMA_KVFM_DRIVER_STATE_BUSY = 1,
} KVMA_KVFM_driver_state;

typedef KVXA_plate_level_info KVMA_chuck_level_info_plate_info[0x2];

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    int nr_of_plates;
    KVMA_chuck_level_info_plate_info plate_info;
} KVMA_chuck_level_info;

typedef KVMA_chuck_level_info KVMA_plates_level_result_chuck_info[0x2];

typedef struct
{
    int nr_of_chucks;
    KVMA_plates_level_result_chuck_info chuck_info;
} KVMA_plates_level_result;

typedef KVXA_AG_plate_level_info KVMA_AG_chuck_level_info_plate_info[0x2];

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    int nr_of_plates;
    KVMA_AG_chuck_level_info_plate_info plate_info;
} KVMA_AG_chuck_level_info;

typedef KVMA_AG_chuck_level_info KVMA_AG_plate_level_result_chuck_info[0x2];

typedef struct
{
    int nr_of_chucks;
    KVMA_AG_plate_level_result_chuck_info chuck_info;
} KVMA_AG_plate_level_result;

typedef struct
{
    double height;
} KVMA_droplet_detection_data;

typedef bool KVMA_LS_ref_measurement_data_measure_z_valid[0x9];

typedef struct
{
    RLXA_get_result_ags_height_t height_result;
    KVMA_LS_ref_measurement_data_measure_z_valid measure_z_valid;
    double scan_start_time;
} KVMA_LS_ref_measurement_data;

typedef struct
{
    RLXA_AG_get_result_height_t height_result;
    bool measure_z_valid;
    double scan_start_time;
} KVMA_AG_ref_measurement_data;

typedef double KVMA_LS_ref_measurement_result_avg_z[0x9];

typedef bool KVMA_LS_ref_measurement_result_avg_z_valid[0x9];

typedef double KVMA_LS_ref_measurement_result_avg_scan_start_times[0x9];

typedef int KVMA_LS_ref_measurement_result_nr_valid_meas_results[0x9];

typedef struct
{
    xyavect ws_exp_pos_xyrz;
    zrxryvect ws_exp_pos_zrxry;
    int nr_meas_results;
    KVMA_LS_ref_measurement_result_avg_z avg_z;
    KVMA_LS_ref_measurement_result_avg_z_valid avg_z_valid;
    KVMA_LS_ref_measurement_result_avg_scan_start_times avg_scan_start_times;
    KVMA_LS_ref_measurement_result_nr_valid_meas_results nr_valid_meas_results;
} KVMA_LS_ref_measurement_result;

typedef struct
{
    xyavect ws_exp_pos_xyrz;
    zrxryvect ws_exp_pos_zrxry;
    int nr_meas_results;
    double avg_z;
    bool avg_z_valid;
    double avg_scan_start_times;
    int nr_valid_meas_results;
} KVMA_AG_ref_measurement_result;

typedef KVMA_LS_ref_measurement_data KVMA_AGILE_LS_ref_measurement_ref_msr_data[0x19];

typedef struct
{
    KVMA_AGILE_LS_ref_measurement_ref_msr_data ref_msr_data;
    KVMA_LS_ref_measurement_result ref_msr_result;
} KVMA_AGILE_LS_ref_measurement;

typedef KVMA_AG_ref_measurement_data KVMA_AGILE_AG_ref_measurement_ref_msr_data[0x19];

typedef struct
{
    KVMA_AGILE_AG_ref_measurement_ref_msr_data ref_msr_data;
    KVMA_AG_ref_measurement_result ref_msr_result;
} KVMA_AGILE_AG_ref_measurement;

typedef struct
{
    KVMA_AGILE_LS_ref_measurement LS_ref_msr;
    KVMA_AGILE_AG_ref_measurement AG_ref_msr;
} KVMA_AGILE_ref_measurement;

typedef KVMA_LS_ref_measurement_data KVMA_AGILE_LS_wfr_ref_measurement_ref_msr_data[0x1];

typedef struct
{
    KVMA_AGILE_LS_wfr_ref_measurement_ref_msr_data ref_msr_data;
    KVMA_LS_ref_measurement_result ref_msr_result;
} KVMA_AGILE_LS_wfr_ref_measurement;

typedef KVMA_AG_ref_measurement_data KVMA_AGILE_AG_wfr_ref_measurement_ref_msr_data[0x1];

typedef struct
{
    KVMA_AGILE_AG_wfr_ref_measurement_ref_msr_data ref_msr_data;
    KVMA_AG_ref_measurement_result ref_msr_result;
} KVMA_AGILE_AG_wfr_ref_measurement;

typedef struct
{
    KVMA_AGILE_LS_wfr_ref_measurement LS_wfr_ref_msr;
    KVMA_AGILE_AG_wfr_ref_measurement AG_wfr_ref_msr;
} KVMA_AGILE_wfr_ref_measurement;

typedef struct
{
    double previous_plate_avg_z;
} KVMA_plate_TIS_height_diff;

typedef KVMA_plate_TIS_height_diff KVMA_chuck_TIS_height_diff_plate[0x2];

typedef struct
{
    KVMA_chuck_TIS_height_diff_plate plate;
} KVMA_chuck_TIS_height_diff;

typedef KVMA_chuck_TIS_height_diff KVMA_TIS_height_diff_params_chuck[0x2];

typedef struct
{
    KVMA_TIS_height_diff_params_chuck chuck;
} KVMA_TIS_height_diff_params;

typedef struct
{
    MEXAxWAFxPLATE_wafer_level_plate plate_id;
    xyzvect plate_level_xyz;
} KVMA_plate_ref;

typedef KVMA_plate_ref KVMA_chuck_ref_plate_ref[0x2];

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    int nr_of_plates;
    KVMA_chuck_ref_plate_ref plate_ref;
} KVMA_chuck_ref;

typedef KVMA_chuck_ref KVMA_plates_level_ref_xyz_chuck_ref[0x2];

typedef struct
{
    int nr_of_chucks;
    KVMA_plates_level_ref_xyz_chuck_ref chuck_ref;
} KVMA_plates_level_ref_xyz;

typedef MEXAxWAFxPLATE_ref_heights KVMA_chuck_ref_heights_plate[0x2];

typedef struct
{
    KVMA_chuck_ref_heights_plate plate;
} KVMA_chuck_ref_heights;

typedef KVMA_chuck_ref_heights KVMA_plates_ref_heights_chuck[0x2];

typedef struct
{
    KVMA_plates_ref_heights_chuck chuck;
} KVMA_plates_ref_heights;

typedef struct
{
    MEXAxWAFxPLATE_wafer_level_plate plate_id;
    xyvect plate_xy;
} KVMA_plate_trans;

typedef KVMA_plate_trans KVMA_chuck_trans_plate_trans[0x2];

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    int nr_of_plates;
    KVMA_chuck_trans_plate_trans plate_trans;
} KVMA_chuck_trans;

typedef KVMA_chuck_trans KVMA_plates_trans_chuck_trans[0x2];

typedef struct
{
    int nr_of_chucks;
    KVMA_plates_trans_chuck_trans chuck_trans;
} KVMA_plates_trans;

typedef struct
{
    MEXAxWAFxPLATE_wafer_level_plate plate_id;
    zrxryvect plate_zrxry;
} KVMA_plate_wedge;

typedef KVMA_plate_wedge KVMA_chuck_wedge_plate_wedge[0x5];

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    int nr_of_plates;
    KVMA_chuck_wedge_plate_wedge plate_wedge;
} KVMA_chuck_wedge;

typedef KVMA_chuck_wedge KVMA_plates_wedge_chuck_wedge[0x2];

typedef struct
{
    int nr_of_chucks;
    KVMA_plates_wedge_chuck_wedge chuck_wedge;
} KVMA_plates_wedge;

typedef struct
{
    horvervect ref_pnt_6dof;
    xyvect target_pnt_xy;
    zrxryvect as_zrxry;
    double ws_x;
    zrxryvect zero_zrxry;
} KVMA_align_params;

typedef struct
{
    zrxryvect plate_zrxry;
    xyvect target_pnt_xy;
    xyzvect ref_pnt_xyz;
    xyzvect spot_xyz;
    horvervect ws_6dof;
    zrxryvect zero_zrxry;
} KVMA_level_params;

typedef struct
{
    zrxryvect zero_zrxry;
    bool valid;
} KVMA_zeroing_error;

typedef KVMA_zeroing_error KVMA_chucks_zeroing_errors_chuck[0x2];

typedef struct
{
    KVMA_chucks_zeroing_errors_chuck chuck;
} KVMA_chucks_zeroing_errors;

typedef KVXA_capture_params KVMA_capture_params_chuck[0x2];

typedef struct
{
    KVMA_capture_params_chuck chuck;
} KVMA_capture_params;

typedef struct
{
    MEXAxWAFxPLATE_wafer_level_plate plate_id;
    bool refs_valid;
    KVXT_TIS_drift_ref_struct drift_refs;
} KVMA_TIS_drift_refs_per_plate;

typedef KVMA_TIS_drift_refs_per_plate KVMA_TIS_drift_refs_per_chuck_tis[0x2];

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    int nr_of_plates;
    KVMA_TIS_drift_refs_per_chuck_tis tis;
} KVMA_TIS_drift_refs_per_chuck;

typedef KVMA_TIS_drift_refs_per_chuck KVMA_TIS_drift_detection_data_chuck[0x2];

typedef struct
{
    int nr_of_chucks;
    KVMA_TIS_drift_detection_data_chuck chuck;
} KVMA_TIS_drift_detection_data;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    double TIS1_delta_z;
    double TIS1_delta_Ry;
    double TIS2_delta_z;
    double TIS2_delta_Ry;
    double delta_Ry0;
    double warning_threshold_Ry;
    double error_threshold_Ry;
} KVMA_TIS_drift_modelling_results;

typedef MEXAxVSA_XVSA_scan_data KVMA_XVSA_chuck_scan_results_TIS[0x2];

typedef struct
{
    KVMA_XVSA_chuck_scan_results_TIS TIS;
} KVMA_XVSA_chuck_scan_results;

typedef KVMA_XVSA_chuck_scan_results KVMA_XVSA_scan_results_chuck[0x2];

typedef struct
{
    KVMA_XVSA_scan_results_chuck chuck;
} KVMA_XVSA_scan_results;

typedef struct
{
    xyvect ref_pos;
    double ws_SA_x_position;
    double dz;
    double dRy_plus_dRy0;
    double dRy;
    double max_deformation;
    MEXAxVSA_XVSA_profile deformation_profile;
} KVMA_XVSA_tis_model_results;

typedef KVMA_XVSA_tis_model_results KVMA_XVSA_chuck_model_results_TIS[0x2];

typedef double KVMA_XVSA_chuck_model_results_dZ_LE_spot[0x9];

typedef bool KVMA_XVSA_chuck_model_results_dZ_LE_spot_valid[0x9];

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    KVMA_XVSA_chuck_model_results_TIS TIS;
    double dZ0;
    double dRy0;
    KVMA_XVSA_chuck_model_results_dZ_LE_spot dZ_LE_spot;
    KVMA_XVSA_chuck_model_results_dZ_LE_spot_valid dZ_LE_spot_valid;
    double dZ_LE;
    double dRy_LE;
    double dRy_LE_filtered;
    timestamp measure_time;
} KVMA_XVSA_chuck_model_results;

typedef KVMA_XVSA_chuck_model_results KVMA_XVSA_model_results_chuck[0x2];

typedef struct
{
    KVMA_XVSA_model_results_chuck chuck;
} KVMA_XVSA_model_results;

typedef MEXAxVSA_iVSA_level_lanes KVMA_iVSA_chuck_level_lanes_plate[0x2];

typedef struct
{
    KVMA_iVSA_chuck_level_lanes_plate plate;
} KVMA_iVSA_chuck_level_lanes;

typedef KVMA_iVSA_chuck_level_lanes KVMA_iVSA_level_lanes_chuck[0x2];

typedef struct
{
    KVMA_iVSA_level_lanes_chuck chuck;
} KVMA_iVSA_level_lanes;

typedef bool KVMA_iVSA_meas_data_measure_z_valid[0x9];

typedef struct
{
    RLXA_get_result_ags_height_t level_result;
    KVMA_iVSA_meas_data_measure_z_valid measure_z_valid;
    bool capture_z_valid;
} KVMA_iVSA_meas_data;

typedef KVMA_iVSA_meas_data KVMA_iVSA_lane_data_meas[0x19];

typedef double KVMA_iVSA_lane_data_avg_z_per_spot[0x9];

typedef bool KVMA_iVSA_lane_data_avg_z_per_spot_valid[0x9];

typedef double KVMA_iVSA_lane_data_corrected_avg_z_per_spot[0x9];

typedef struct
{
    KVMA_iVSA_lane_data_meas meas;
    xyavect ws_exp_pos_xyrz;
    zrxryvect ws_exp_pos_zrxry;
    KVMA_iVSA_lane_data_avg_z_per_spot avg_z_per_spot;
    KVMA_iVSA_lane_data_avg_z_per_spot_valid avg_z_per_spot_valid;
    KVMA_iVSA_lane_data_corrected_avg_z_per_spot corrected_avg_z_per_spot;
} KVMA_iVSA_lane_data;

typedef KVMA_iVSA_lane_data KVMA_iVSA_plate_data_lane[0x3];

typedef struct
{
    MEXAxWAFxPLATE_wafer_level_plate plate_id;
    KVMA_iVSA_plate_data_lane lane;
} KVMA_iVSA_plate_data;

typedef KVMA_iVSA_plate_data KVMA_iVSA_data_plate[0x2];

typedef struct
{
    KVMA_iVSA_data_plate plate;
} KVMA_iVSA_data;

typedef KVXT_iVSA_plate_fallback_shape KVMA_iVSA_chuck_fallback_shapes_plate[0x2];

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    KVMA_iVSA_chuck_fallback_shapes_plate plate;
} KVMA_iVSA_chuck_fallback_shapes;

typedef KVMA_iVSA_chuck_fallback_shapes KVMA_iVSA_fallback_shapes_chuck[0x2];

typedef struct
{
    KVMA_iVSA_fallback_shapes_chuck chuck;
} KVMA_iVSA_fallback_shapes;

typedef struct
{
    int len;
    int max_len;
    CNXA_repl_addr* array;
} KVMA_reply_address_list;

typedef struct
{
    ADELgen_RecipeIDType subrecipe_name;
    ADELsr_CorrectionSetNameType correctionset_name;
} KVMA_subrecipe_part_id;

typedef struct
{
    ADELgen_RecipeIDType subrecipe_name;
    ADELsr_CorrectionSetNameType correctionset_name;
} KVMA_external_table_id;

typedef struct
{
    KVMA_external_table_id external_PDGC_table_id;
    LEXAxDEF_pdgc_table_id_t internal_PDGC_table_id;
    int grid_template_id;
    bool present;
    bool measured;
    bool possibly_applied_in_lot;
    bool possibly_measured_in_lot;
    bool possibly_when_needed_flag_in_lot;
} KVMA_PDGC_table_status;

typedef struct
{
    int len;
    int max_len;
    KVMA_PDGC_table_status* array;
} KVMA_PDGC_table_status_array;

typedef struct
{
    LEXAxDEF_pdgc_table_id_array_t raw_pdgc_table_ids;
    int lot_data_scan_nr;
} KVMA_pdgc_scan;

typedef struct
{
    int len;
    int max_len;
    KVMA_pdgc_scan* array;
} KVMA_pdgc_scan_array;

typedef struct
{
    KVMA_subrecipe_part_id meas_subrecipe_part_id;
    int grid_template_id;
    int part_nr;
    LEXAxDEF_pdgc_table_id_t internal_PDGC_table_id;
    KVMA_pdgc_scan_array pdgc_scans;
} KVMA_PDGC_meas_info;

typedef struct
{
    int len;
    int max_len;
    KVMA_PDGC_meas_info* array;
} KVMA_PDGC_meas_info_array;

typedef struct
{
    int wam_id;
    int WM_stroke_index;
    int wam_index;
    xyvect position;
} KVMA_PDGC_wam_info;

typedef struct
{
    int len;
    int max_len;
    KVMA_PDGC_wam_info* array;
} KVMA_PDGC_wam_info_array;

typedef struct
{
    int grid_template_id;
    KVMA_subrecipe_part_id subrecipe_part_id;
    KVMA_external_table_id external_PDGC_table_id;
    LEXAxDEF_pdgc_table_id_t internal_PDGC_table_id;
    KVMA_PDGC_wam_info_array PDGC_wams_info;
} KVMA_PDGC_matching_wams_info;

typedef struct
{
    int len;
    int max_len;
    KVMA_PDGC_matching_wams_info* array;
} KVMA_PDGC_matching_wams_info_array;

typedef struct
{
    int len;
    int max_len;
    KVMA_PDGC_matching_wams_info* array;
} KVMA_PDGC_appl_info_array;

typedef MEXAxWAFxPLATE_wafer_level_plate KVMA_wafer_level_plate_chuck[0x2];

typedef struct
{
    int nr_of_chucks;
    KVMA_wafer_level_plate_chuck chuck;
} KVMA_wafer_level_plate;

typedef struct
{
    int len;
    int max_len;
    int* array;
} KVMA_table_id_array_t;

typedef struct
{
    KVMA_external_table_id external_PDOC_table_id;
    int internal_PDOC_table_id;
    int grid_template_id;
    bool present;
    bool measured;
    bool possibly_applied_in_lot;
    bool possibly_measured_in_lot;
    bool possibly_when_needed_flag_in_lot;
} KVMA_PDOC_table_status;

typedef struct
{
    int len;
    int max_len;
    KVMA_PDOC_table_status* array;
} KVMA_PDOC_table_status_array;

typedef struct
{
    KVMA_table_id_array_t raw_pdoc_table_ids;
} KVMA_pdoc_AG_scan;

typedef struct
{
    int len;
    int max_len;
    KVMA_pdoc_AG_scan* array;
} KVMA_pdoc_AG_scan_array;

typedef struct
{
    KVMA_table_id_array_t raw_pdoc_table_ids;
    int lot_data_scan_nr;
    KVMA_pdoc_AG_scan_array pdoc_AG_scans;
} KVMA_pdoc_scan;

typedef struct
{
    int len;
    int max_len;
    KVMA_pdoc_scan* array;
} KVMA_pdoc_scan_array;

typedef struct
{
    KVMA_subrecipe_part_id meas_subrecipe_part_id;
    int grid_template_id;
    int part_nr;
    int internal_PDOC_table_id;
    KVMA_pdoc_scan_array pdoc_scans;
} KVMA_PDOC_meas_info;

typedef struct
{
    int len;
    int max_len;
    KVMA_PDOC_meas_info* array;
} KVMA_PDOC_meas_info_array;

typedef struct
{
    int wam_id;
    int WM_stroke_index;
    int wam_index;
    xyvect position;
} KVMA_PDOC_wam_info;

typedef struct
{
    int len;
    int max_len;
    KVMA_PDOC_wam_info* array;
} KVMA_PDOC_wam_info_array;

typedef struct
{
    int grid_template_id;
    KVMA_subrecipe_part_id subrecipe_part_id;
    KVMA_external_table_id external_PDOC_table_id;
    int internal_PDOC_table_id;
    KVMA_PDOC_wam_info_array PDOC_wams_info;
} KVMA_PDOC_matching_wams_info;

typedef struct
{
    int len;
    int max_len;
    KVMA_PDOC_matching_wams_info* array;
} KVMA_PDOC_matching_wams_info_array;

typedef struct
{
    int len;
    int max_len;
    KVMA_PDOC_matching_wams_info* array;
} KVMA_PDOC_appl_info_array;

typedef struct
{
    int nr_updates_done;
    double current_Ry;
} KVMA_chuck_LS_drift;

typedef KVMA_chuck_LS_drift KVMA_LS_drift_filter_chuck[0x2];

typedef struct
{
    KVMA_LS_drift_filter_chuck chuck;
} KVMA_LS_drift_filter;

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef double KVMA_VSA_spot_z;

typedef KVMA_VSA_spot_z KVMA_VSA_spot_z_array[0x9];

typedef struct
{
    KVMA_VSA_spot_z_array spot;
} KVMA_VSA_drop_det_lane_struct;

typedef KVMA_VSA_drop_det_lane_struct KVMA_VSA_drop_det_plate_struct_lane[0x2];

typedef struct
{
    KVMA_VSA_drop_det_plate_struct_lane lane;
    int nr_lanes;
} KVMA_VSA_drop_det_plate_struct;

typedef KVMA_VSA_drop_det_plate_struct KVMA_VSA_drop_det_chuck_struct_plate[0x2];

typedef struct
{
    KVMA_VSA_drop_det_chuck_struct_plate plate;
    timestamp measured_at_time;
    bool valid;
} KVMA_VSA_drop_det_chuck_struct;

typedef KVMA_VSA_drop_det_chuck_struct KVMA_VSA_drop_det_struct_chuck[0x2];

typedef struct
{
    KVMA_VSA_drop_det_struct_chuck chuck;
} KVMA_VSA_drop_det_struct;

typedef struct
{
    double X;
    double Z;
    double Ztilt;
    bool valid;
    double Zdroplet;
} KVMA_VSA_drop_det_spot_model_struct;

typedef KVMA_VSA_drop_det_spot_model_struct KVMA_VSA_drop_det_lane_model_struct_spot[0x9];

typedef struct
{
    KVMA_VSA_drop_det_lane_model_struct_spot spot;
} KVMA_VSA_drop_det_lane_model_struct;

typedef KVMA_VSA_drop_det_lane_model_struct KVMA_VSA_drop_det_plate_model_struct_lane[0x2];

typedef struct
{
    KVMA_VSA_drop_det_plate_model_struct_lane lane;
    int nr_lanes;
    int outliers;
    bool outliers_done;
} KVMA_VSA_drop_det_plate_model_struct;

typedef KVMA_VSA_drop_det_plate_model_struct KVMA_VSA_drop_det_chuck_model_results_plate[0x2];

typedef struct
{
    KVMA_VSA_drop_det_chuck_model_results_plate plate;
    bool allowed;
    bool droplet_detected;
} KVMA_VSA_drop_det_chuck_model_results;

typedef KVMA_VSA_drop_det_chuck_model_results KVMA_VSA_drop_det_model_results_chuck[0x2];

typedef struct
{
    KVMA_VSA_drop_det_model_results_chuck chuck;
} KVMA_VSA_drop_det_model_results;

typedef struct
{
    bool do_check_droplet_detection;
} KVMA_check_model_preconditions_check;

typedef enum
{
    KVMA_DROPLET_DETECTION_STATE_UNKNOWN = 0,
    KVMA_DROPLET_DETECTION_STATE_OK = 1,
    KVMA_DROPLET_DETECTION_STATE_VSA_DROPLET_DETECTED = 2,
    KVMA_DROPLET_DETECTION_STATE_IVSA_TOO_MANY_OUTLIERS = 3,
} KVMA_droplet_detection_state;



#endif // _KVMA_TC_H_
