/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVCAxLOG
* 文件名称 : KVCAxLOG_tc.h
* 概要描述 :
*	KV组件KVCAxLOG数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVCAxLOG_TC_H_
#define _KVCAxLOG_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <KV_tc.h> 
#include <LEXAxSPOT_tc.h> 
#include <LEXA_tc.h> 
#include <ADELpdocCorr_tc.h> 
#include <DTXAxIMAGE_tc.h> 
#include <ADELme_grid_tc.h> 
#include <ADELsr_tc.h> 
#include <ADELgen_tc.h> 
#include <GNLEXA_tc.h> 
#include <KVXAxLOTxPAR_tc.h> 
#include <WPxCHUCK_tc.h> 
#include <base.h> 
#include <KVCA_tc.h> 
//extern GVxVPxMACHxTYPE_MACHINE_ARCHITECTURE  NXT  //702, 715



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    KVCAxLOG_glc = 0,
    KVCAxLOG_pdgc = 1,
    KVCAxLOG_wm = 2,
    KVCAxLOG_wafer_safety = 3,
} KVCAxLOG_switches;

typedef enum
{
    KVCAxLOG_WSC_RESULT_APPROVED = 0,
    KVCAxLOG_WSC_RESULT_MEAS_ERR = 1,
    KVCAxLOG_WSC_RESULT_MB_OUT_OF_SPEC = 2,
    KVCAxLOG_WSC_RESULT_WAFER_OUT_OF_SPEC = 3,
    KVCAxLOG_WSC_RESULT_OTHER_REASON = 4,
} KVCAxLOG_wsc_result_enum;

typedef struct
{
    double x;
    double y;
} KVCAxLOG_meas_pos;

typedef bool KVCAxLOG_spot_selection_spot[0x9];

typedef struct
{
    bool capture_spot;
    bool centre_spot;
    KVCAxLOG_spot_selection_spot spot;
} KVCAxLOG_spot_selection;

typedef struct
{
    int req_scan_id;
    double rel_start_pos;
    double rel_end_pos;
    int nr_of_meas_pos;
    int rep_scan_id;
    int errorSpec;
    int nr_of_meas_errors;
    int nr_of_system_errors;
    bool periodJumpDetected;
    double scanDuration;
} KVCAxLOG_scan_report;

typedef struct
{
    int total;
    double perc;
} KVCAxLOG_spot_res;

typedef char KVCAxLOG_scan_result_spot_id[0x4];

typedef struct
{
    KVCAxLOG_scan_result_spot_id spot_id;
    int req;
    KVCAxLOG_spot_res z_valid;
    KVCAxLOG_spot_res z_usable;
    KVCAxLOG_spot_res meas_err;
    KVCAxLOG_spot_res sys_err;
} KVCAxLOG_scan_result;

typedef KVCAxLOG_scan_result KVCAxLOG_scan_result_table[0xA];

typedef struct
{
    int len;
    int max_len;
    KVCA_meas_position_def* array;
} KVCAxLOG_scan_data;

typedef int KVCAxLOG_lot_GLC_params_nr_of_req_spots[0x9];

typedef struct
{
    int nr_of_req_meas;
    KVCAxLOG_lot_GLC_params_nr_of_req_spots nr_of_req_spots;
} KVCAxLOG_lot_GLC_params;

typedef struct
{
    KVCAxLOG_scan_report scan_report;
    KVCAxLOG_spot_res tot_scan;
} KVCAxLOG_GLC_scan_result;

typedef int KVCAxLOG_model_GLC_nr_of_valid_points[0x9];

typedef struct
{
    int nr_of_glc_meas;
    KVCAxLOG_model_GLC_nr_of_valid_points nr_of_valid_points;
} KVCAxLOG_model_GLC;

typedef struct
{
    zrxryvect global_wafer_wedge;
    int nr_of_req_meas;
    int nr_of_valid_meas;
} KVCAxLOG_model_gww;

typedef float KVCAxLOG_global_level_point_zSpot[0x9];

typedef struct
{
    float rel_pos;
    float x;
    float y;
    KVCAxLOG_global_level_point_zSpot zSpot;
} KVCAxLOG_global_level_point;

typedef struct
{
    int len;
    int max_len;
    KVCAxLOG_global_level_point* array;
} KVCAxLOG_global_level_contour;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    KVXAxLOTxPAR_GLC_type_enum glc_type;
    int seq_nr;
} KVCAxLOG_wsc_params;

typedef struct
{
    double min_height;
    KVCAxLOG_meas_pos min_height_pos;
    double max_height;
    KVCAxLOG_meas_pos max_height_pos;
} KVCAxLOG_wsc_wafer_data;

typedef struct
{
    double min_height;
    KVCAxLOG_meas_pos min_height_pos;
    double max_height;
    KVCAxLOG_meas_pos max_height_pos;
    zrxryvect cld_wedge;
    KVCAxLOG_meas_pos cld_center_pos;
    bool in_spec;
} KVCAxLOG_wsc_mirror_block_data;

typedef struct
{
    double hovering_nom_gap;
    zrxryvect ih_ref_plane;
} KVCAxLOG_wsc_immersion_hood_data;

typedef struct
{
    double min_max_delta;
    double min_max_spec;
    bool wafer_immersion_approved;
    bool wafer_exposure_approved;
    KVCAxLOG_wsc_result_enum fail_reason;
    double limit_angle;
    double max_angle;
    zrxryvect IH_level_offset;
} KVCAxLOG_wsc_result_data;

typedef struct
{
    KVCAxLOG_wsc_params wsc_params;
    KVCAxLOG_wsc_wafer_data wsc_wafer;
    KVCAxLOG_wsc_mirror_block_data wsc_mirror_block;
    KVCAxLOG_wsc_immersion_hood_data wsc_immersion_hood;
    KVCAxLOG_wsc_result_data wsc_results;
} KVCAxLOG_wafer_safety_check_result;

typedef double KVCAxLOG_AG_scan_polynomial_interval_coef[0x5];

typedef struct
{
    KVCAxLOG_AG_scan_polynomial_interval_coef coef;
    double duration;
} KVCAxLOG_AG_scan_polynomial_interval;

typedef struct
{
    int len;
    int max_len;
    KVCAxLOG_AG_scan_polynomial_interval* array;
} KVCAxLOG_AG_scan_polynomial;

typedef struct
{
    double scan_x;
    double y_start;
    double y_end;
    zrxryvect y_filter_window;
    double default_interval_length;
    GNLEXA_boundary_conditions bound_condts;
    double limit_min_SV;
} KVCAxLOG_AG_scan_profile_fit_params;

typedef struct
{
    zrxryvect target_plane;
    KVCAxLOG_AG_scan_profile_fit_params fit_params;
    zrxryvect zeroing_error;
    KVCAxLOG_AG_scan_polynomial scan_profile;
} KVCAxLOG_det_AG_scan_params;

typedef struct
{
    KVCA_table_id_array_t raw_pdoc_table_ids;
    int ave_pdoc_table_id;
    ADELgen_RecipeIDType sub_recipe_name;
    ADELsr_CorrectionSetNameType correction_set_name;
} KVCAxLOG_PDOC_averaging_params_t;

typedef struct
{
    int len;
    int max_len;
    KVCAxLOG_PDOC_averaging_params_t* array;
} KVCAxLOG_PDOC_averaging_params_array;

typedef struct
{
    int xIndex;
    int yIndex;
    double height;
    double scan_start_time;
    ADELme_grid_PointStatusType PointStatus;
} KVCAxLOG_PointType;

typedef struct
{
    int len;
    int max_len;
    KVCAxLOG_PointType* array;
} KVCAxLOG_PointListType;

typedef struct
{
    int raw_table_id;
    int grid_template_id;
    xyvect field_id;
    DTXAxIMAGE_image_id_string image_id;
    KVCAxLOG_PointListType LS_PointList;
    KVCAxLOG_PointListType AG_PointList;
} KVCAxLOG_AG_LS_height_data_t;

typedef struct
{
    int raw_table_id;
    int grid_template_id;
    xyvect field_id;
    DTXAxIMAGE_image_id_string image_id;
    KVCAxLOG_PointListType LS_PointList;
} KVCAxLOG_LS_height_data_t;

typedef struct
{
    int table_id;
    int template_id;
    xyvect field_id;
    ADELpdocCorr_PdocPointListType PDOC_params;
} KVCAxLOG_raw_PDOM_table;

typedef struct
{
    KVCAxLOG_AG_LS_height_data_t AG_LS_height_data;
    KVCAxLOG_raw_PDOM_table raw_PDOM;
} KVCAxLOG_raw_PDOM_info;

typedef struct
{
    int table_id;
    int template_id;
    double average_PDOC_params_correction;
    ADELpdocCorr_PdocPointListType PDOC_params;
} KVCAxLOG_ave_PDOM_table;

typedef struct
{
    int len;
    int max_len;
    KVCAxLOG_ave_PDOM_table* array;
} KVCAxLOG_ave_PDOM_table_array;

typedef struct
{
    int LS_seq_nr;
    int AG_seq_nr;
    int scan_id;
} KVCAxLOG_AG_scan_sum;

typedef struct
{
    int len;
    int max_len;
    LEXA_AG_scan_meas_t* array;
} KVCAxLOG_AG_scan_meas;

typedef struct
{
    timestamp measurement_time;
    double AG_nozzle_height_estimate;
    bool corrected_for_TIS_drift;
} KVCAxLOG_AG_nozzle_height_estimate;

typedef char KVCAxLOG_spot_usage_row_spot_usage[0x9];

typedef struct
{
    float rel_pos;
    float y_pos;
    KVCAxLOG_spot_usage_row_spot_usage spot_usage;
} KVCAxLOG_spot_usage_row;

typedef struct
{
    int len;
    int max_len;
    KVCAxLOG_spot_usage_row* array;
} KVCAxLOG_spot_usage_matrix;

typedef struct
{
    KVCAxLOG_spot_usage_matrix spot_usage_table;
} KVCAxLOG_spot_usage_table;

typedef struct
{
    int len;
    int max_len;
    KVCAxLOG_spot_usage_table* array;
} KVCAxLOG_spot_usage_info;

typedef struct
{
    int wam_id;
} KVCAxLOG_spot_usage_wam_info;

typedef struct
{
    int stroke_nr;
} KVCAxLOG_WM_model_data;

typedef struct
{
    double x_pos;
    double x_neg;
    double y_pos;
    double y_neg;
    int nr_of_glc_meas;
} KVCAxLOG_WM_GLC_candidate_area_params;

typedef char KVCAxLOG_WM_scanio_params_io[0x8];

typedef struct
{
    KVCAxLOG_WM_scanio_params_io io;
    double rel_pos;
    LEXAxSPOT_spot_selection_t spot_selection;
    zrxryvect ws_zrxry;
} KVCAxLOG_WM_scanio_params;

typedef KVCAxLOG_WM_scanio_params KVCAxLOG_scanio_params_table[0x2];

typedef int KVCAxLOG_lot_WM_stroke_params_nr_of_req_spots[0x9];

typedef struct
{
    int seq_nr;
    int nr_of_req_meas;
    KVCAxLOG_lot_WM_stroke_params_nr_of_req_spots nr_of_req_spots;
} KVCAxLOG_lot_WM_stroke_params;

typedef struct
{
    int seq_nr;
    KVCAxLOG_scan_report scan_report;
    KVCAxLOG_spot_res tot_scan;
} KVCAxLOG_WM_scan_result;

typedef struct
{
    int seq_nr;
    zrxryvect ws_zer_err_zrxry;
    xyvect stroke_start_xy;
    xyvect stroke_end_xy;
} KVCAxLOG_WM_zer_err;

typedef struct
{
    int seq_nr;
    int nr_of_wams_defined;
    int nr_of_wams_stored;
    int nr_of_empty_wams;
    int nr_of_invalid_wams;
} KVCAxLOG_WM_stroke_info;

typedef int KVCAxLOG_spots_repaired[0x9][0x2];

typedef struct
{
    int wam_id;
    xyvect centre_xy;
    double y_start;
    double y_end;
    bool empty;
} KVCAxLOG_lot_WM_wam_params;

typedef struct
{
    int wam_id;
    bool do_wpd_check;
    double plane_deviation;
    zrxryvect wpd_zrxry;
    KVCA_deviation_info highest_point;
    KVCA_deviation_info lowest_point;
} KVCAxLOG_wpd_check_info;

typedef KVCAxLOG_wpd_check_info KVCAxLOG_WM_wpd_info_wam_wpd_info[0x3C];

typedef struct
{
    int seq_nr;
    int nr_of_wams;
    KVCAxLOG_WM_wpd_info_wam_wpd_info wam_wpd_info;
} KVCAxLOG_WM_wpd_info;

typedef struct
{
    double x;
    double y;
    double z;
    double rel_pos;
    int sample_index;
} KVCAxLOG_glc_point;

typedef struct
{
    int len;
    int max_len;
    KVCAxLOG_glc_point* array;
} KVCAxLOG_glc_points;

typedef char KVCAxLOG_spots_info_repair_info[0x9];

typedef struct
{
    float rel_pos;
    KVCAxLOG_spots_info_repair_info repair_info;
} KVCAxLOG_spots_info;

typedef struct
{
    int len;
    int max_len;
    KVCAxLOG_spots_info* array;
} KVCAxLOG_spots_info_table;

typedef struct
{
    double wafer_plane_deviation_limit;
    bool FSM_on;
    double FSM_absolute_limit;
} KVCAxLOG_WM_lot_wpd_fsm_data;

typedef struct
{
    int nr_of_wams;
    int nr_wams_failed_on_z;
    double max_delta_z;
    int nr_wams_failed_on_rx;
    double max_delta_rx;
    int nr_wams_failed_on_ry;
    double max_delta_ry;
} KVCAxLOG_wam_dev_check_summary;

typedef struct
{
    float x;
    float y;
    float z;
    bool valid;
} KVCAxLOG_wsc_measure_data;

typedef struct
{
    int len;
    int max_len;
    KVCAxLOG_wsc_measure_data* array;
} KVCAxLOG_wsc_measure_data_array;

typedef float KVCAxLOG_zmap_scan_meas_t_zSpot[0x9];

typedef struct
{
    KVCAxLOG_zmap_scan_meas_t_zSpot zSpot;
    float zCapture;
    LEXAxSPOT_spot_selection_t zValid;
    LEXAxSPOT_spot_selection_t zUseable;
    LEXAxSPOT_spot_selection_t measError;
    LEXAxSPOT_spot_selection_t systemError;
    float measPos;
    LEXAxSPOT_spot_selection_t esmOccured;
} KVCAxLOG_zmap_scan_meas_t;

typedef KVCAxLOG_zmap_scan_meas_t KVCAxLOG_scan_data_t_meas[0x258];

typedef struct
{
    int scanId;
    int numMeas;
    KVCAxLOG_scan_data_t_meas meas;
} KVCAxLOG_scan_data_t;

typedef struct
{
    int len;
    int max_len;
    KVCAxLOG_zmap_scan_meas_t* array;
} KVCAxLOG_zmap_scan_meas;

typedef struct
{
    int len;
    int max_len;
    double* array;
} KVCAxLOG_correctionValue_array;

typedef struct
{
    double yGridValue;
    KVCAxLOG_correctionValue_array correctionValue;
} KVCAxLOG_WM_fingerprint_row;

typedef struct
{
    int len;
    int max_len;
    double* array;
} KVCAxLOG_x_gridline_array;

typedef struct
{
    int len;
    int max_len;
    KVCAxLOG_WM_fingerprint_row* array;
} KVCAxLOG_WM_fingerprint_matrix;

typedef struct
{
    int topology_id;
} KVCAxLOG_WM_fingerprint_info;



#endif // _KVCAxLOG_TC_H_
