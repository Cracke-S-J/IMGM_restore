/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVMAxLOG
* 文件名称 : KVMAxLOG_tc.h
* 概要描述 :
*	KV组件KVMAxLOG数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVMAxLOG_TC_H_
#define _KVMAxLOG_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <KWXAxDDxLOG_tc.h> 
#include <KVCAxLOG_tc.h> 
#include <KVCA_tc.h> 
#include <KVXA_tc.h> 
#include <MEXAxVSA_tc.h> 
#include <KVXT_tc.h> 
#include <MEXAxWAFxPLATE_tc.h> 
#include <WPxCHUCK_tc.h> 
#include <RLXA_tc.h> 
#include <LEXAxDEF_tc.h> 
#include <DTXAxIMAGE_tc.h> 
#include <DTXA_tc.h> 
#include <KVXAxLOTxPAR_tc.h> 
#include <LEXAxSPOT_tc.h> 
#include <KVXTxMC_tc.h> 
#include <KVMA_tc.h> 
#include <base.h> 
#include <KV_tc.h> 
//extern MEMWxVPxLVL_AGILE  AGILE2  //953, 1008



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    KVMAxLOG_mcs = 0,
    KVMAxLOG_lot = 1,
    KVMAxLOG_wafer = 2,
    KVMAxLOG_pa = 3,
    KVMAxLOG_pl = 4,
    KVMAxLOG_glc = 5,
    KVMAxLOG_wa = 6,
    KVMAxLOG_pdgc = 7,
    KVMAxLOG_wm = 8,
} KVMAxLOG_switches;

typedef struct
{
    int len;
    int max_len;
    KV_spot_data* array;
} KVMAxLOG_spot_table;

typedef struct
{
    zrxryvect al_athena_zrxry;
    KVMA_plates_level_ref_xyz pl_ref;
    KVMA_plates_wedge pl_wedge;
    KVMAxLOG_spot_table spot_table;
} KVMAxLOG_imported_data;

typedef struct
{
    KVXTxMC_WM_scaninout_GLC_candidate_area_extension_params extension_params;
    KVXTxMC_WM_scaninout_minimum_scan_plane_area_params minimum_params;
    int sa_precision_count;
} KVMAxLOG_change_htm_mcs;

typedef struct
{
    bool use_high_precision_sa_level;
} KVMAxLOG_SA_lot_data;

typedef struct
{
    int template_id;
    LEXAxSPOT_spot_selection_t spot_selection;
    KVXAxLOTxPAR_double_array y_gridlines;
    KVXAxLOTxPAR_double_array x_gridlines;
} KVMAxLOG_WM_grid_template;

typedef struct
{
    int len;
    int max_len;
    KVMAxLOG_WM_grid_template* array;
} KVMAxLOG_WM_grid_template_array;

typedef char KVMAxLOG_grid_point_row_spot[0x9];

typedef struct
{
    double y_gridlines;
    KVMAxLOG_grid_point_row_spot spot;
} KVMAxLOG_grid_point_row;

typedef struct
{
    int len;
    int max_len;
    KVMAxLOG_grid_point_row* array;
} KVMAxLOG_grid_point_matrix;

typedef struct
{
    KVMAxLOG_grid_point_matrix grid_point_table;
} KVMAxLOG_grid_point_table;

typedef struct
{
    int len;
    int max_len;
    KVMAxLOG_grid_point_table* array;
} KVMAxLOG_grid_point_info;

typedef struct
{
    int template_id;
} KVMAxLOG_template_id_info;

typedef struct
{
    int nr_of_strokes;
    KVXAxLOTxPAR_FSD_parameters_t FSD_parameters;
    KVXAxLOTxPAR_CSD_parameters_t CSD_parameters;
    KVXAxLOTxPAR_EDL_parameters EDL_parameters;
    double focus_edge_clearance;
} KVMAxLOG_WM_lot_data;

typedef struct
{
    int seq_nr;
    DTXA_scan_direction scan_direction;
    double x;
    double y_start;
    double y_end;
    int nr_of_wm_areas;
} KVMAxLOG_WM_lot_stroke_params;

typedef struct
{
    xyvect centre_xy;
    DTXAxIMAGE_image_id_string image_id;
    int WM_grid_template_id;
    double y_start;
    double y_end;
    int area_id;
    int topology_id;
    bool do_FSD;
    bool do_wafer_plane_deviation_check;
    bool do_FWOL;
    bool do_EDL;
    bool do_EDL_allow_CDFEC;
    bool do_EDL_fingerprint_correction;
} KVMAxLOG_WM_area_t;

typedef struct
{
    int len;
    int max_len;
    KVMAxLOG_WM_area_t* array;
} KVMAxLOG_WM_area_params_table;

typedef char KVMAxLOG_meas_point_row_spot[0x9];

typedef struct
{
    KVMAxLOG_meas_point_row_spot spot;
} KVMAxLOG_meas_point_row;

typedef struct
{
    int len;
    int max_len;
    KVMAxLOG_meas_point_row* array;
} KVMAxLOG_meas_point_matrix;

typedef struct
{
    KVMAxLOG_meas_point_matrix meas_point_table;
} KVMAxLOG_meas_point_table;

typedef struct
{
    int len;
    int max_len;
    KVMAxLOG_meas_point_table* array;
} KVMAxLOG_meas_point_info;

typedef struct
{
    int area_id;
} KVMAxLOG_meas_point_area_id_info;

typedef struct
{
    int len;
    int max_len;
    LEXAxDEF_zmap_meas_point_def_t* array;
} KVMAxLOG_zmap_grid_table;

typedef struct
{
    int len;
    int max_len;
    LEXAxDEF_pdgc_meas_point_def_t* array;
} KVMAxLOG_pdgc_grid_table;

typedef struct
{
    int len;
    int max_len;
    LEXAxDEF_AG_meas_point_def_t* array;
} KVMAxLOG_AG_grid_table;

typedef char KVMAxLOG_spot_switch_point_spots[0x9];

typedef struct
{
    double rel_pos;
    KVMAxLOG_spot_switch_point_spots spots;
} KVMAxLOG_spot_switch_point;

typedef struct
{
    int len;
    int max_len;
    KVMAxLOG_spot_switch_point* array;
} KVMAxLOG_valid_spots;

typedef struct
{
    double rel_pos;
    char AG_spot;
} KVMAxLOG_AG_spot_switch_point;

typedef struct
{
    int len;
    int max_len;
    KVMAxLOG_AG_spot_switch_point* array;
} KVMAxLOG_AG_spot_valid_table;

typedef struct
{
    xyzvect capture_position;
    bool do_Ry_capture;
    LEXAxSPOT_spot_selection_t spot_selection;
    RLXA_capture_scenario_t scenario;
} KVMAxLOG_sosi_capture_params;

typedef struct
{
    double Z;
    double Ry;
} KVMAxLOG_sosi_capture_results;

typedef struct
{
    bool use_high_precision_sa_level;
    int nr_sa_level_measurements;
    WPxCHUCK_chuck_id_enum chuck_id;
    LEXAxSPOT_spot_selection_t le_spot_id_sa;
    xyzvect le_spot_xyz;
    bool sa_le_capture_needed;
    LEXAxSPOT_spot_selection_t sa_le_capture_definition;
    double sa_le_accuracy;
} KVMAxLOG_prepare_SA;

typedef struct
{
    bool use_high_precision_xsa_level;
    int nr_xsa_level_measurements;
    WPxCHUCK_chuck_id_enum chuck_id;
    xyzvect le_spot_xyz;
} KVMAxLOG_prepare_XSA;

typedef struct
{
    MEXAxWAFxPLATE_wafer_level_plate plate_id;
    zrxryvect ws_exp_pos_zrxry;
    zrxryvect ws_zeroing_error_zrxry;
    bool zeroing_errors_valid;
    bool model_done;
    double plate_avg_z;
    bool plate_avg_z_valid;
    double plate_error_z;
    double ws_exp_pos_x;
    bool capture_needed;
} KVMAxLOG_prepare_SA_level_scan;

typedef struct
{
    xyvect plate_xy;
    double ws_exp_pos_x;
    zrxryvect ws_exp_pos_zrxry;
} KVMAxLOG_prepare_XSA_scanpoint_params;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    MEXAxWAFxPLATE_wafer_level_plate plate_id;
    zrxryvect ws_zeroing_error_zrxry;
    xyvect central_le_spot_xy;
    zrxryvect le_spot_zrxry;
    zrxryvect global_plate_params;
    KVMAxLOG_prepare_XSA_scanpoint_params scanin;
    KVMAxLOG_prepare_XSA_scanpoint_params scanout;
} KVMAxLOG_prepare_XSA_level_scan;

typedef zrxryvect KVMAxLOG_prepare_iVSA_level_scan_lane_zrxry[0x3];

typedef struct
{
    MEXAxWAFxPLATE_wafer_level_plate plate_id;
    KVMAxLOG_prepare_iVSA_level_scan_lane_zrxry lane_zrxry;
} KVMAxLOG_prepare_iVSA_level_scan;

typedef float KVMAxLOG_get_SA_level_scan_results_le_static_z_spot[0x9];

typedef float KVMAxLOG_get_SA_level_scan_results_le_static_z_spot_std_dev[0x9];

typedef bool KVMAxLOG_get_SA_level_scan_results_le_static_spot_z_valid[0x9];

typedef struct
{
    MEXAxWAFxPLATE_wafer_level_plate plate_id;
    int seq_nr;
    KVMAxLOG_get_SA_level_scan_results_le_static_z_spot le_static_z_spot;
    KVMAxLOG_get_SA_level_scan_results_le_static_z_spot_std_dev le_static_z_spot_std_dev;
    float le_static_z_capture;
    float le_static_z_capture_std_dev;
    KVMAxLOG_get_SA_level_scan_results_le_static_spot_z_valid le_static_spot_z_valid;
    bool le_static_capture_z_valid;
    int nr_of_measurements;
} KVMAxLOG_get_SA_level_scan_results;

typedef char KVMAxLOG_seq_info_valid[0xC];

typedef struct
{
    double value;
    KVMAxLOG_seq_info_valid valid;
} KVMAxLOG_seq_info;

typedef char KVMAxLOG_model_SA_desc[0x10];

typedef KVMAxLOG_seq_info KVMAxLOG_model_SA_seq_info[0x2];

typedef struct
{
    KVMAxLOG_model_SA_desc desc;
    KVMAxLOG_model_SA_seq_info seq_info;
} KVMAxLOG_model_SA;

typedef KVMAxLOG_model_SA KVMAxLOG_model_SA_table[0x1C];

typedef struct
{
    KVXT_iVSA_plate_fallback_shape orig_stored_shape;
    KVXT_iVSA_plate_fallback_shape measured_shape;
    KVXT_iVSA_plate_fallback_shape stored_shape;
} KVMAxLOG_model_iVSA_fallback_shapes;

typedef struct
{
    MEXAxWAFxPLATE_wafer_level_plate plate_id;
    xyvect ref_pos;
    double dz;
    double dRy;
    double max_deformation;
    MEXAxVSA_XVSA_profile profile;
} KVMAxLOG_model_iVSA_deformation_profile;

typedef struct
{
    double z;
    double rx;
    double ry;
    bool valid;
} KVMAxLOG_WS_zeroing_error;

typedef struct
{
    KVXAxLOTxPAR_GLC_type_enum glc_type;
    xyvect capture_xy;
    xyvect centre_xy;
    double start_angle;
    double end_angle;
    double radius;
} KVMAxLOG_GLC_params;

typedef struct
{
    int len;
    int max_len;
    KVXA_CorrectionSetIDType* array;
} KVMAxLOG_external_table_id_array;

typedef struct
{
    KVXA_CorrectionSetIDType matching_subrecipe_part_id;
    KVXA_CorrectionSetIDType external_table_id;
} KVMAxLOG_matching_part;

typedef struct
{
    int len;
    int max_len;
    KVMAxLOG_matching_part* array;
} KVMAxLOG_matching_parts_array;

typedef struct
{
    int len;
    int max_len;
    KVMAxLOG_matching_part* array;
} KVMAxLOG_match_appl_subr_parts;

typedef struct
{
    double x;
    double servo_scan_y_start;
    double servo_scan_y_end;
    double calib_scan_y_start;
    double calib_scan_y_end;
} KVMAxLOG_PDGC_stroke;

typedef struct
{
    int len;
    int max_len;
    KVMAxLOG_PDGC_stroke* array;
} KVMAxLOG_PDGC_strokes_array;

typedef struct
{
    KVXA_CorrectionSetIDType matching_subrecipe_part;
    KVMAxLOG_PDGC_strokes_array PDGC_strokes;
} KVMAxLOG_PDGC_scans_definition;

typedef struct
{
    int len;
    int max_len;
    KVMAxLOG_PDGC_scans_definition* array;
} KVMAxLOG_PDGC_scans_definition_array;

typedef struct
{
    LEXAxDEF_pdgc_table_id_array_t raw_PDGC_table_ids;
} KVMAxLOG_pdgc_scan;

typedef struct
{
    int len;
    int max_len;
    KVMAxLOG_pdgc_scan* array;
} KVMAxLOG_pdgc_scan_array;

typedef struct
{
    LEXAxDEF_pdgc_table_id_t internal_PDGC_table_id;
    KVMAxLOG_pdgc_scan_array pdgc_scans;
} KVMAxLOG_PDGC_meas_info;

typedef struct
{
    int len;
    int max_len;
    KVMAxLOG_PDGC_meas_info* array;
} KVMAxLOG_PDGC_meas_info_array;

typedef struct
{
    KVXAxLOTxPAR_xyvect_array field_positions;
    LEXAxDEF_pdgc_table_id_t internal_PDGC_table_id;
} KVMAxLOG_PDGC_appl_info;

typedef struct
{
    int len;
    int max_len;
    KVMAxLOG_PDGC_appl_info* array;
} KVMAxLOG_PDGC_appl_info_array;

typedef struct
{
    KVMAxLOG_PDGC_stroke PDGC_stroke;
    int seq_nr;
} KVMAxLOG_PDGC_scan_params;

typedef struct
{
    double x;
    double LS_scan_y_start;
    double LS_scan_y_end;
} KVMAxLOG_PDOC_stroke;

typedef struct
{
    double x;
    double LS_scan_y_start;
    double LS_scan_y_end;
} KVMAxLOG_PDOC_LS_stroke;

typedef struct
{
    double x;
    double AG_scan_y_start;
    double AG_scan_y_end;
    bool scan_preceeded_by_travel;
} KVMAxLOG_PDOC_AG_stroke;

typedef struct
{
    int len;
    int max_len;
    KVMAxLOG_PDOC_stroke* array;
} KVMAxLOG_PDOC_strokes_array;

typedef struct
{
    KVXA_CorrectionSetIDType matching_subrecipe_part;
    KVMAxLOG_PDOC_strokes_array PDOC_strokes;
} KVMAxLOG_PDOC_scans_definition;

typedef struct
{
    KVXAxLOTxPAR_xyvect_array field_positions;
    int internal_PDOC_table_id;
} KVMAxLOG_PDOC_appl_info;

typedef struct
{
    int len;
    int max_len;
    KVMAxLOG_PDOC_appl_info* array;
} KVMAxLOG_PDOC_appl_info_array;

typedef struct
{
    int len;
    int max_len;
    KVMAxLOG_PDOC_scans_definition* array;
} KVMAxLOG_PDOC_scans_definition_array;

typedef struct
{
    KVMA_table_id_array_t raw_pdoc_table_ids;
} KVMAxLOG_pdoc_AG_scan;

typedef struct
{
    int len;
    int max_len;
    KVMAxLOG_pdoc_AG_scan* array;
} KVMAxLOG_pdoc_AG_scan_array;

typedef struct
{
    KVXAxLOTxPAR_int_array raw_pdoc_table_ids;
    KVMAxLOG_pdoc_AG_scan_array pdoc_AG_scans;
} KVMAxLOG_pdoc_scan;

typedef struct
{
    int len;
    int max_len;
    KVMAxLOG_pdoc_scan* array;
} KVMAxLOG_pdoc_scan_array;

typedef struct
{
    int internal_PDOC_table_id;
    KVMAxLOG_pdoc_scan_array pdoc_scans;
} KVMAxLOG_PDOC_meas_info;

typedef struct
{
    int len;
    int max_len;
    KVMAxLOG_PDOC_meas_info* array;
} KVMAxLOG_PDOC_meas_info_array;

typedef struct
{
    MEXAxWAFxPLATE_wafer_level_plate plate_id;
    xyvect plate_level_xy;
    xyvect ag_spot_xy;
    double accuracy;
    bool capture_needed;
    bool gain_calibration_needed;
} KVMAxLOG_AG_height_params;

typedef struct
{
    xyvect plate_level_xy;
    xyvect ls_spot_xy;
    LEXAxSPOT_spot_selection_t msr_spot_selection;
    double accuracy;
    bool capture_needed;
    LEXAxSPOT_spot_selection_t cap_spot_selection;
} KVMAxLOG_LS_height_params;

typedef struct
{
    MEXAxWAFxPLATE_wafer_level_plate plate_id;
    xyavect ws_exp_pos_xyrz;
    xyzvect airgauge_xyz;
    zrxryvect plate_wedge;
    zrxryvect ws_zeroing_error_zrxry;
    double LS_ref_height;
    zrxryvect ws_exp_pos_zrxry;
} KVMAxLOG_prepare_AG_height_scan;

typedef struct
{
    zrxryvect start_zrxry;
    zrxryvect end_zrxry;
} KVMAxLOG_det_PDOC_LS_stroke;

typedef struct
{
    xyavect ws_exp_pos_xyrz;
    xyzvect levelsensor_xyz;
    zrxryvect ws_exp_pos_zrxry;
} KVMAxLOG_prepare_LS_height_scan;

typedef double KVMAxLOG_LS_ref_modeling_avg_z[0x9];

typedef bool KVMAxLOG_LS_ref_modeling_avg_z_valid[0x9];

typedef int KVMAxLOG_LS_ref_modeling_nr_valid_meas_results[0x9];

typedef timestamp KVMAxLOG_LS_ref_modeling_measurement_time[0x9];

typedef struct
{
    int ls_spot_id;
    int nr_meas_results;
    KVMAxLOG_LS_ref_modeling_avg_z avg_z;
    KVMAxLOG_LS_ref_modeling_avg_z_valid avg_z_valid;
    KVMAxLOG_LS_ref_modeling_nr_valid_meas_results nr_valid_meas_results;
    KVMAxLOG_LS_ref_modeling_measurement_time measurement_time;
} KVMAxLOG_LS_ref_modeling;

typedef struct
{
    bool z_valid;
    double Wfr_Ref_z;
    timestamp measurement_time;
} KVMAxLOG_LS_wfr_ref_result;

typedef struct
{
    bool z_valid;
    double Wfr_Ref_z;
    timestamp measurement_time;
} KVMAxLOG_AG_wfr_ref_result;

typedef struct
{
    int seq_nr;
    zrxryvect global_wafer_wedge;
    double x;
    double y_start;
    double y_end;
} KVMAxLOG_WM_stroke_params;

typedef struct
{
    xyvect area_centre_xy;
    float plane_deviation;
    int area_id;
    bool area_measurement_ok;
    bool plane_deviation_check_done;
    bool plane_deviation_check_ok;
    bool FSM_check_ok;
    bool FSM_check_done;
    KVCA_leveling_method_enum leveling_method;
} KVMAxLOG_WM_area_results_main;

typedef struct
{
    int stroke;
    KVMAxLOG_WM_area_results_main area_results;
    float x_gridlines_shift;
    int nr_of_x_gridlines;
    int nr_of_y_gridlines;
} KVMAxLOG_WM_area_results;

typedef struct
{
    int len;
    int max_len;
    KVMAxLOG_WM_area_results* array;
} KVMAxLOG_WM_area_results_table;

typedef struct
{
    MEXAxWAFxPLATE_wafer_level_plate plate_id;
    zrxryvect ws_exp_pos_zrxry;
    double ws_scan_tilt_x;
    double ws_scan_tilt_y;
} KVMAxLOG_expected_pos;

typedef struct
{
    MEXAxWAFxPLATE_wafer_level_plate plate_id;
    xyvect plate_align_xy;
    xyavect ws_exp_pos_xyrz;
    zrxryvect al_athena_zrxry;
    zrxryvect focus_offset_zrxry;
    zrxryvect plate_wedge;
    zrxryvect mark_level_offset_zrxry;
    double plate_error_z;
    bool model_done;
    zrxryvect ws_zeroing_error_zrxry;
} KVMAxLOG_prepare_plate_alignment_scan;

typedef struct
{
    xyvect wafer_align_xy;
    xyavect ws_exp_pos_xyrz;
    zrxryvect al_athena_zrxry;
    zrxryvect focus_offset_zrxry;
    zrxryvect global_wafer_wedge;
    zrxryvect mark_level_offset_zrxry;
    zrxryvect ws_zeroing_error_zrxry;
} KVMAxLOG_prepare_wafer_alignment_scan;

typedef struct
{
    int seq_nr;
    KVCAxLOG_scan_report scan_report;
    KVCAxLOG_spot_res tot_scan;
} KVMAxLOG_XVSA_scan_info;

typedef struct
{
    MEXAxVSA_XVSA_scan_data_point meas;
    double RelPos;
} KVMAxLOG_XVSA_scan_data_point;

typedef struct
{
    int len;
    int max_len;
    KVMAxLOG_XVSA_scan_data_point* array;
} KVMAxLOG_XVSA_scan_data;

typedef struct
{
    double x_rel;
    double z;
    int n;
} KVMAxLOG_XVSA_deformation_data_point;

typedef struct
{
    int len;
    int max_len;
    KVMAxLOG_XVSA_deformation_data_point* array;
} KVMAxLOG_XVSA_deformation_data;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    KVMA_zeroing_error zeroing_error_ref;
    KVMA_zeroing_error zeroing_error_cur;
} KVMAxLOG_SA_zeroing_check;

typedef struct
{
    int len;
    int max_len;
    double* array;
} KVMAxLOG_XVSA_deform_profile_z;

typedef struct
{
    int plate_id;
    double x_start;
    double x_end;
    KVMAxLOG_XVSA_deform_profile_z Z;
} KVMAxLOG_XVSA_deform_profile_per_TIS;

typedef KVMAxLOG_XVSA_deform_profile_per_TIS KVMAxLOG_XVSA_deform_profile_chuck_data_TIS[0x2];

typedef struct
{
    int chuck_id;
    KVMAxLOG_XVSA_deform_profile_chuck_data_TIS TIS;
} KVMAxLOG_XVSA_deform_profile_chuck_data;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    MEXAxWAFxPLATE_wafer_level_plate plate_id;
    double tis_grating_drift;
} KVMAxLOG_iVSA_TIS_grating_drift;

typedef char KVMAxLOG_pjd_gridpoints_spot[0x9];

typedef struct
{
    float y;
    KVMAxLOG_pjd_gridpoints_spot spot;
} KVMAxLOG_pjd_gridpoints;

typedef struct
{
    int len;
    int max_len;
    KVMAxLOG_pjd_gridpoints* array;
} KVMAxLOG_pjd_gridpoints_array;

typedef char KVMAxLOG_wsc_gridpoints_spot[0x9];

typedef struct
{
    float y;
    KVMAxLOG_wsc_gridpoints_spot spot;
} KVMAxLOG_wsc_gridpoints;

typedef struct
{
    int len;
    int max_len;
    KVMAxLOG_wsc_gridpoints* array;
} KVMAxLOG_wsc_gridpoints_array;

typedef struct
{
    int wam_index;
} KVMAxLOG_gww_wams_used;

typedef struct
{
    int len;
    int max_len;
    KVMAxLOG_gww_wams_used* array;
} KVMAxLOG_gww_wams_used_array;

typedef struct
{
    float position;
    LEXAxSPOT_spot_selection_t spots;
} KVMAxLOG_spot_switch_point_t;

typedef KVMAxLOG_spot_switch_point_t KVMAxLOG_servo_spot_valid_table_t_validSpots[0x258];

typedef struct
{
    int numEntries;
    KVMAxLOG_servo_spot_valid_table_t_validSpots validSpots;
} KVMAxLOG_servo_spot_valid_table_t;

typedef KVMAxLOG_spot_switch_point_t KVMAxLOG_meas_spot_valid_table_t_validSpots[0x258];

typedef struct
{
    int numEntries;
    KVMAxLOG_meas_spot_valid_table_t_validSpots validSpots;
} KVMAxLOG_meas_spot_valid_table_t;

typedef struct
{
    float position;
    LEXAxDEF_pdgc_table_id_t pdgcTableId;
    int index;
} KVMAxLOG_zmap_meas_point_def_t;

typedef struct
{
    float position;
    LEXAxDEF_pdgc_table_id_t rawPdgcTableId;
    int index;
} KVMAxLOG_pdgc_meas_point_def_t;

typedef struct
{
    float position;
} KVMAxLOG_AG_meas_point_def_t;

typedef KVMAxLOG_zmap_meas_point_def_t KVMAxLOG_meas_point_def_t_zmap[0x258];

typedef KVMAxLOG_pdgc_meas_point_def_t KVMAxLOG_meas_point_def_t_pdgc[0x258];

typedef KVMAxLOG_AG_meas_point_def_t KVMAxLOG_meas_point_def_t_ag[0x258];

typedef struct
{
    LEXAxDEF_scan_type_t element;
    int filler0;
    union
    {
        KVMAxLOG_meas_point_def_t_zmap zmap;
        KVMAxLOG_meas_point_def_t_pdgc pdgc;
        KVMAxLOG_meas_point_def_t_ag ag;
        char one_char;
    } spec;
} KVMAxLOG_meas_point_def_t;

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef unsigned short DTXAxIMAGE_image_id_string;

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef unsigned int numEntries;



#endif // _KVMAxLOG_TC_H_
