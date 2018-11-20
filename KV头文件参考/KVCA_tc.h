/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVCA
* 文件名称 : KVCA_tc.h
* 概要描述 :
*	KV组件KVCA数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVCA_TC_H_
#define _KVCA_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <MEXAxSOSIxLVL_tc.h> 
#include <WPxSCANxDEF_tc.h> 
#include <MEXAxGL_tc.h> 
#include <KVXAxLOTxRES_tc.h> 
#include <RLXA_tc.h> 
#include <KWXA_tc.h> 
#include <WPxCHUCK_tc.h> 
#include <KVXA_tc.h> 
#include <SMXA.h> 
#include <MEXA_tc.h> 
#include <RLxTABLESET_tc.h> 
#include <LEXAxSPOT_tc.h> 
#include <ADELsr_tc.h> 
#include <ADELgen_tc.h> 
#include <DTXAxIMAGE_tc.h> 
#include <ADELme_grid_tc.h> 
#include <ADELpdocCorr_tc.h> 
#include <MExMEASURE_tc.h> 
#include <KVXTxMC_tc.h> 
#include <LEXA_tc.h> 
#include <base.h> 
#include <DTXA_tc.h> 
#include <LEXAxDEF_tc.h> 
#include <KVXAxLOTxPAR_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    KVCA_STATE_INITIALISED = 0,
    KVCA_STATE_TERMINATED = 1,
} KVCA_state;

typedef enum
{
    KVCA_VALID_INFO_OK = 0,
    KVCA_VALID_INFO_USABLE = 1,
    KVCA_VALID_INFO_SYS_ERROR = 2,
    KVCA_VALID_INFO_MEAS_ERROR = 3,
    KVCA_VALID_INFO_NOT_REQUESTED = 4,
} KVCA_valid_info;

typedef enum
{
    KVCA_REPAIR_INFO_COPY = 0,
    KVCA_REPAIR_INFO_INTERPOLATE = 1,
} KVCA_repair_info;

typedef enum
{
    KVCA_SCANIO_FIT_LSQ = 0,
    KVCA_SCANIO_FIT_GLOBAL_WAFER_WEDGE = 1,
    KVCA_SCANIO_FIT_AVERAGE = 2,
    KVCA_SCANIO_FIT_SINGLE_POINT = 3,
} KVCA_scanio_fit;

typedef enum
{
    KVCA_NO_FIT = 0,
    KVCA_1ST_ORDER_Z_XY_FIT = 1,
    KVCA_1ST_ORDER_Z_X_FIT = 2,
    KVCA_1ST_ORDER_Z_Y_FIT = 3,
    KVCA_2ND_ORDER_Z_XY_FIT = 4,
    KVCA_2ND_ORDER_Z_X_FIT = 5,
    KVCA_2ND_ORDER_Z_Y_FIT = 6,
} KVCA_lsq_fit_type_enum;

typedef enum
{
    KVCA_LEVELING_METHOD_TRADITIONAL = 0,
    KVCA_LEVELING_METHOD_EFL = 1,
    KVCA_LEVELING_METHOD_FWOL = 2,
} KVCA_leveling_method_enum;

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef unsigned int KVCA_table_id_t;

typedef struct
{
    int len;
    int max_len;
    KVCA_table_id_t* array;
} KVCA_table_id_array_t;

typedef struct
{
    double x_start;
    double x_end;
    double y_start;
    double y_end;
} KVCA_scanio_selection_area;

typedef struct
{
    double x;
    double y;
    double z;
    double xx;
    double xy;
    double yy;
} KVCA_solve_input_struct;

typedef struct
{
    double x;
    double y;
    double e;
    double xx;
    double xy;
    double yy;
} KVCA_solve_output_struct;

typedef struct
{
    double wafer_plane_deviation_limit;
    KVXAxLOTxPAR_FSM_parameters FSM_parameters;
    KVXAxLOTxPAR_FM_parameters FM_parameters;
    bool FWOL_layer_on;
    int number_of_wm_strokes;
    int max_nr_of_wams;
} KVCA_WM_lot_data_t;

typedef struct
{
    bool use_high_precision_sa_level;
    KVXAxLOTxPAR_GLC_lot_data glc_data;
    KVCA_WM_lot_data_t wm_data;
    KVXAxLOTxPAR_grid_templates_t grid_templates;
} KVCA_levelling_lot_data_t;

typedef struct
{
    LEXAxDEF_measgrid_table_t measgrid_table;
    LEXAxDEF_meas_spot_valid_table_t meas_spot_valid_table;
    LEXAxDEF_servo_spot_valid_table_t scan_servo_spot_valid_table;
    LEXAxDEF_servo_spot_valid_table_t sosi_immediate_spot_valid_table;
    LEXAxDEF_servo_spot_valid_table_t sosi_storage_spot_valid_table;
    LEXAxDEF_meas_spot_valid_table_t esm_spot_valid_table;
} KVCA_wm_tableset_t;

typedef struct
{
    KVCA_wm_tableset_t le_tableset;
    double x;
    double y_start;
    double y_end;
    DTXA_scan_direction scan_direction;
    KVXAxLOTxPAR_WM_area_array_t areas;
    KVCA_table_id_array_t PDOM_table_ids;
    int WSC_grid_template_id;
    int PJD_grid_template_id;
} KVCA_WM_stroke_t;

typedef KVXAxLOTxPAR_WM_area_t KVCA_WM_queue_stroke_t_areas[0x3C];

typedef struct
{
    KVCA_wm_tableset_t le_tableset;
    double x;
    double y_start;
    double y_end;
    DTXA_scan_direction scan_direction;
    KVCA_WM_queue_stroke_t_areas areas;
    KVCA_table_id_array_t PDOM_table_ids;
    int number_of_areas;
    int WSC_grid_template_id;
    int PJD_grid_template_id;
} KVCA_WM_queue_stroke_t;

typedef struct
{
    KVCA_WM_queue_stroke_t data;
    int seq_nr;
    bool store_used;
} KVCA_extended_WM_stroke_t;

typedef KVCA_extended_WM_stroke_t KVCA_WM_stroke_queue_t[0x32];

typedef LEXAxDEF_spot_switch_point_t KVCA_spot_valid_table_extended_valid_spots[0x258];

typedef struct
{
    int nr_of_meas;
    KVCA_spot_valid_table_extended_valid_spots valid_spots;
} KVCA_spot_valid_table_extended;

typedef struct
{
    int len;
    int max_len;
    KVCA_spot_valid_table_extended* array;
} KVCA_spot_valid_table_ext_arr;

typedef struct
{
    KVXAxLOTxPAR_grid_point_type_enum grid_point;
    KVXAxLOTxPAR_meas_point_type_enum meas_point;
} KVCA_point_type;

typedef struct
{
    double z;
    bool z_requested;
    bool z_valid;
    bool z_repaired;
    KVCA_valid_info z_valid_info;
    KVCA_repair_info z_repair_info;
    KVCA_point_type point_type;
} KVCA_meas_point_def;

typedef KVCA_meas_point_def KVCA_meas_position_def_meas_pnt_tbl[0x9];

typedef struct
{
    double rel_pos;
    xyvect pos_xy;
    KVCA_meas_position_def_meas_pnt_tbl meas_pnt_tbl;
} KVCA_meas_position_def;

typedef KVCA_meas_position_def KVCA_scan_data_meas_pos_tbl[0x258];

typedef struct
{
    int nr_of_meas;
    KVCA_scan_data_meas_pos_tbl meas_pos_tbl;
} KVCA_scan_data;

typedef struct
{
    double x;
    double y;
    double z;
    int meas_index;
    int sample_index;
} KVCA_glc_point;

typedef KVCA_glc_point KVCA_scanio_selected_glc_points_glc_points[0x258];

typedef struct
{
    int nr_glc_points;
    KVCA_scanio_selected_glc_points_glc_points glc_points;
} KVCA_scanio_selected_glc_points;

typedef struct
{
    KVCA_scanio_fit z;
    KVCA_scanio_fit rx;
    KVCA_scanio_fit ry;
} KVCA_scanio_wafer_plane_fit_info;

typedef struct
{
    int scanId;
    int numMeas;
    LEXAxDEF_scan_data_t_meas meas;
} KVCA_le_scan_data;

typedef struct
{
    int scanId;
    int numMeas;
    LEXA_AG_scan_meas_array_t meas;
} KVCA_ag_scan_data;

typedef bool KVCA_wam_data_x_gridline_valid[0x9];

typedef bool KVCA_wam_data_y_gridline_valid[0x258];

typedef KVCA_meas_position_def KVCA_wam_data_meas_pos_tbl[0x258];

typedef struct
{
    int nr_of_x_gridlines;
    int nr_of_y_gridlines;
    int nr_of_valid_x_gridlines;
    int nr_of_valid_y_gridlines;
    KVCA_wam_data_x_gridline_valid x_gridline_valid;
    KVCA_wam_data_y_gridline_valid y_gridline_valid;
    KVCA_wam_data_meas_pos_tbl meas_pos_tbl;
} KVCA_wam_data;

typedef struct
{
    int y_gridline_ix;
    int spot_ix;
    double x;
    double y;
    double z;
    double z_diff;
} KVCA_deviation_info;

typedef struct
{
    double min_value;
    double max_value;
    double velocity_limit;
} KVCA_WS_axis_parameters;

typedef struct
{
    double scan_velocity;
    double AG_scan_velocity;
    KVCA_WS_axis_parameters z;
    KVCA_WS_axis_parameters Ry;
} KVCA_WS_chuck_parameters;

typedef KVCA_WS_chuck_parameters KVCA_WS_parameters_chuck[0x2];

typedef struct
{
    KVCA_WS_parameters_chuck chuck;
} KVCA_WS_parameters;

typedef struct
{
    KVXTxMC_LS_data_check_params check_params;
    int nr_of_failed_wams;
    int nr_of_wams;
} KVCA_LS_data_check_info;

typedef struct
{
    int wam_index;
    int wam_id;
    zrxryvect height;
    bool z_valid;
    bool rx_valid;
    bool ry_valid;
    xyvect position;
} KVCA_wam_fit_data;

typedef struct
{
    int len;
    int max_len;
    KVCA_wam_fit_data* array;
} KVCA_wam_fit_data_array_t;

typedef struct
{
    int wam_index;
    int wam_id;
    zrxryvect delta;
    bool z_valid;
    bool rx_valid;
    bool ry_valid;
    xyvect position;
} KVCA_wam_dev;

typedef struct
{
    int len;
    int max_len;
    KVCA_wam_dev* array;
} KVCA_wam_dev_table_t;

typedef struct
{
    KVCA_solve_output_struct z_coeffs;
    KVCA_lsq_fit_type_enum z_fit_mode;
    KVCA_solve_output_struct rx_coeffs;
    KVCA_lsq_fit_type_enum rx_fit_mode;
    KVCA_solve_output_struct ry_coeffs;
    KVCA_lsq_fit_type_enum ry_fit_mode;
} KVCA_wam_fit_result_data;

typedef struct
{
    KVXTxMC_wam_deviation_check_params check_params;
    int nr_wams_failed_on_z;
    int nr_wams_failed_on_rx;
    int nr_wams_failed_on_ry;
    int nr_of_wams;
    double max_delta_z;
    double max_delta_rx;
    double max_delta_ry;
    KVCA_wam_fit_data_array_t wam_fit_data;
    KVCA_wam_fit_result_data wam_fit_results;
    KVCA_wam_dev_table_t dev_table;
} KVCA_wam_deviation_check_info;

typedef struct
{
    int len;
    int max_len;
    MExMEASURE_GLC_params_KD_KV* array;
} KVCA_GLC_params_KD_KV_array;

typedef struct
{
    double x;
    double x_gridline_offset;
    double y;
    double z;
    bool valid;
} KVCA_wsc_datapoint;

typedef struct
{
    int len;
    int max_len;
    KVCA_wsc_datapoint* array;
} KVCA_wsc_datapoint_array;

typedef struct
{
    double x;
    double y;
    double z;
    bool valid;
} KVCA_measpoint;

typedef struct
{
    int len;
    int max_len;
    KVCA_measpoint* array;
} KVCA_measpoint_array;

typedef struct
{
    int len;
    int max_len;
    MExMEASURE_WM_params_KD_KV* array;
} KVCA_PDOC_params_KD_KV_array;

typedef struct
{
    KVCA_PDOC_params_KD_KV_array pdoc_ag_params_kd_kv;
    int LS_seq_nr;
} KVCA_PDOC_AG_strokes_params_KD_KV;

typedef struct
{
    int len;
    int max_len;
    KVCA_PDOC_AG_strokes_params_KD_KV* array;
} KVCA_PDOC_AG_strokes_params_KD_KV_array;

typedef struct
{
    int table_id;
    int template_id;
    double average_PDOC_params_correction;
    ADELpdocCorr_PdocPointListType PDOC_params;
} KVCA_PDOM_table;

typedef struct
{
    int len;
    int max_len;
    KVCA_PDOM_table* array;
} KVCA_PDOM_table_array;

typedef struct
{
    int PDOM_table_id;
    int WM_grid_template_id;
    xyvect area_centre;
    int start_y_grid_line;
    int end_y_grid_line;
} KVCA_wam_PDOC_appl_info;

typedef struct
{
    int len;
    int max_len;
    KVCA_wam_PDOC_appl_info* array;
} KVCA_WM_stroke_PDOC_appl_info;

typedef struct
{
    double x;
    double y;
} KVCA_point;

typedef struct
{
    int len;
    int max_len;
    KVCA_point* array;
} KVCA_point_array;

typedef struct
{
    int xIndex;
    int yIndex;
    double height;
    double scan_start_time;
    ADELme_grid_PointStatusType PointStatus;
} KVCA_PointType;

typedef struct
{
    int len;
    int max_len;
    KVCA_PointType* array;
} KVCA_PointListType;

typedef struct
{
    int raw_table_id;
    int grid_template_id;
    xyvect field_id;
    DTXAxIMAGE_image_id_string image_id;
    KVCA_PointListType LS_PointList_before_AG_WM;
    KVCA_PointListType LS_PointList_after_AG_WM;
    KVCA_PointListType AG_PointList;
} KVCA_AG_LS_height_data_t;

typedef struct
{
    int len;
    int max_len;
    KVCA_AG_LS_height_data_t* array;
} KVCA_AG_LS_height_data_array_t;

typedef struct
{
    KVCA_AG_LS_height_data_array_t AG_LS_height_data_array;
} KVCA_PDOC_stroke_height_data_t;

typedef struct
{
    int len;
    int max_len;
    KVCA_PDOC_stroke_height_data_t* array;
} KVCA_PDOC_wafer_height_data;

typedef struct
{
    ADELgen_RecipeIDType sub_recipe_name;
    ADELpdocCorr_CorrectionSetListType corr_sets;
} KVCA_PDOC_subrecipe_corr_sets;

typedef struct
{
    int len;
    int max_len;
    KVCA_PDOC_subrecipe_corr_sets* array;
} KVCA_PDOC_subrecipes_corr_sets;

typedef struct
{
    double AG_nozzle_height_estimate;
    double scan_start_time;
    zrxryvect ws_zer_err_zrxry;
    double ws_exp_pos_x;
    bool corrected_for_TIS_drift;
} KVCA_AG_nozzle_height_estimate;

typedef struct
{
    int len;
    int max_len;
    KVCA_AG_nozzle_height_estimate* array;
} KVCA_AG_nozzle_height_estimate_array;

typedef struct
{
    double height;
    double scan_start_time;
} KVCA_PDOC_LS_reference;

typedef struct
{
    int len;
    int max_len;
    KVCA_PDOC_LS_reference* array;
} KVCA_PDOC_LS_reference_array;

typedef struct
{
    double z;
    bool z_requested;
    bool z_valid;
    bool z_repaired;
    KVCA_valid_info z_valid_info;
    KVCA_repair_info z_repair_info;
} KVCA_AG_meas_point_def;

typedef KVCA_AG_meas_point_def KVCA_AG_meas_position_def_meas_pnt_tbl[0x1];

typedef struct
{
    double rel_pos;
    xyvect pos_xy;
    KVCA_AG_meas_position_def_meas_pnt_tbl meas_pnt_tbl;
} KVCA_AG_meas_position_def;

typedef KVCA_AG_meas_position_def KVCA_airgauge_scan_data_meas_pos_tbl[0x258];

typedef struct
{
    int nr_of_meas;
    KVCA_airgauge_scan_data_meas_pos_tbl meas_pos_tbl;
} KVCA_airgauge_scan_data;

typedef struct
{
    int len;
    int max_len;
    KVCA_scan_data* array;
} KVCA_scan_data_array_t;

typedef struct
{
    int pdocTableId;
    ADELgen_RecipeIDType subRecipeName;
    ADELsr_CorrectionSetNameType correctionSetName;
    int grid_template_id;
} KVCA_table_params_t;

typedef struct
{
    int len;
    int max_len;
    KVCA_table_params_t* array;
} KVCA_table_params_array_t;

typedef struct
{
    KVCA_table_id_array_t raw_pdoc_table_ids;
    int ave_pdoc_table_id;
    ADELgen_RecipeIDType sub_recipe_name;
    ADELsr_CorrectionSetNameType correction_set_name;
} KVCA_PDOC_averaging_params_t;

typedef struct
{
    int len;
    int max_len;
    KVCA_PDOC_averaging_params_t* array;
} KVCA_PDOC_averaging_params_array;

typedef struct
{
    double x;
    double y_start;
    double y_end;
    DTXA_scan_direction scan_direction;
    LEXAxSPOT_spot_id_t ls_spot_id;
    RLxTABLESET_AG_table_set_t ag_tableset;
    KVCA_table_id_array_t raw_PDOM_table_ids;
} KVCA_AG_stroke_t;

typedef struct
{
    xyvect centre_xy;
    int WM_grid_template_id;
    double y_start;
    double y_end;
    int raw_PDOM_table_id;
    DTXAxIMAGE_image_id_string image_id;
} KVCA_raw_PDOM_table_info;

typedef struct
{
    int len;
    int max_len;
    KVCA_raw_PDOM_table_info* array;
} KVCA_raw_PDOM_table_info_array;

typedef struct
{
    RLxTABLESET_table_set_t le_tableset;
    double x;
    double y_start;
    double y_end;
    DTXA_scan_direction scan_direction;
    KVCA_raw_PDOM_table_info_array raw_PDOM_tables_info;
} KVCA_PDOC_LS_stroke_t;

typedef struct
{
    KVCA_AG_stroke_t AG_stroke_data;
    int seq_nr;
    bool store_used;
} KVCA_extended_AG_stroke_t;

typedef struct
{
    int len;
    int max_len;
    KVCA_extended_AG_stroke_t* array;
} KVCA_PDOC_AG_stroke_queue_t;

typedef struct
{
    KVCA_PDOC_LS_stroke_t PDOC_LS_stroke_data;
    int seq_nr;
    bool store_used;
} KVCA_extended_PDOC_LS_stroke_t;

typedef KVCA_extended_PDOC_LS_stroke_t KVCA_PDOC_LS_stroke_queue_t[0x32];

typedef struct
{
    zrxryvect value;
    bool valid;
} KVCA_chuck_reference_plane;

typedef KVCA_chuck_reference_plane KVCA_hovering_params_reference_plane[0x2];

typedef struct
{
    MEXA_hovering_reference reference;
    KVCA_hovering_params_reference_plane reference_plane;
    double min_gap;
    double max_gap;
    double nom_gap;
} KVCA_hovering_params;

typedef xyvect KVCA_wafer_check_params_meas_pos[0x258];

typedef double KVCA_wafer_check_params_meas_z[0x258];

typedef bool KVCA_wafer_check_params_meas_valid[0x258];

typedef struct
{
    bool valid;
    int seq_nr;
    int nr_meas;
    KVCA_wafer_check_params_meas_pos meas_pos;
    KVCA_wafer_check_params_meas_z meas_z;
    KVCA_wafer_check_params_meas_valid meas_valid;
} KVCA_wafer_check_params;

typedef struct
{
    int wam_id;
    int grid_template_id;
    int topology_id;
    bool EDL_requested;
    bool EDL_spots_switched;
    bool measured;
} KVCA_EDL_wam_data_t;

typedef struct
{
    int len;
    int max_len;
    KVCA_EDL_wam_data_t* array;
} KVCA_EDL_wams_data_array_t;

typedef struct
{
    int wam_id;
    int grid_template_id;
    int topology_id;
    DTXAxIMAGE_image_id_string image_id;
    bool FWOL_requested;
    bool overruled_by_EFL;
    bool measured;
    bool is_on_edge;
} KVCA_FWOL_wam_data_t;

typedef struct
{
    int len;
    int max_len;
    KVCA_FWOL_wam_data_t* array;
} KVCA_FWOL_wams_data_array_t;

typedef struct
{
    int nr_of_wams;
    KVCA_EDL_wams_data_array_t EDL_data;
    KVCA_FWOL_wams_data_array_t FWOL_data;
} KVCA_leveling_option_wams_data;

typedef struct
{
    int wam_id;
    int grid_template_id;
    KVCA_leveling_method_enum applied_leveling_method;
} KVCA_area_leveling_option_application;

typedef struct
{
    int len;
    int max_len;
    KVCA_area_leveling_option_application* array;
} KVCA_area_leveling_option_application_array_t;

typedef enum
{
    KVCA_WM_FP_NO_TYPE = 0,
    KVCA_WM_FP_INTRA_ROW_FINGERPRINT = 1,
} KVCA_WM_fingerprint_type;

typedef enum
{
    KVCA_POINT_VALID = 0,
    KVCA_POINT_INVALID = 1,
    KVCA_POINT_REPAIRED = 2,
} KVCA_correction_point_status_enum;

typedef struct
{
    int xIndex;
    int yIndex;
    double correctionValue;
    KVCA_correction_point_status_enum pointStatus;
} KVCA_WM_fingerprint_point_t;

typedef struct
{
    int len;
    int max_len;
    KVCA_WM_fingerprint_point_t* array;
} KVCA_WM_fingerprint_point_array_t;

typedef struct
{
    KVCA_WM_fingerprint_type fp_type;
    KVCA_WM_fingerprint_point_array_t fp_data;
    int topology_id;
    DTXAxIMAGE_image_id_string image_id;
} KVCA_WM_fingerprint_t;

typedef struct
{
    int len;
    int max_len;
    KVCA_WM_fingerprint_t* array;
} KVCA_WM_fingerprint_array_t;

typedef xyzvect KVCA__set_actual_le_positions_spots_xyz_p[0x9];

typedef KVXTxMC_SUSD_params KVCA__get_SUSD_params_SUSD_correction_params[0x2];

typedef KVXTxMC_SUSD_params KVCA__set_SUSD_params_SUSD_correction_params[0x2];

typedef xyzvect KVCA__set_actual_ag_positions_spots_xyz_p[0x1];



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int KVCA_initialise(void);
int KVCA_terminate(void);
int KVCA_get_status(SMXA_driverState *driver_state_p);
int KVCA_set_actual_le_positions(const KVCA__set_actual_le_positions_spots_xyz_p *spots_xyz_p,
	const xyzvect *capture_xyz_p);
int KVCA_set_scanio_minimum_scan_plane_area_size(const xyvect *minimum_size_p);
int KVCA_get_scanio_minimum_scan_plane_area_size(xyvect *minimum_size_p);
int KVCA_set_WM_scanio_GLC_candidate_area_extensions(const double *l_scanio_x_pos,
	const double *l_scanio_x_neg,
	const double *l_scanio_y_pos,
	const double *l_scanio_y_neg);
int KVCA_get_WM_scanio_GLC_candidate_area_extensions(double *l_scanio_x_pos_p,
	double *l_scanio_x_neg_p,
	double *l_scanio_y_pos_p,
	double *l_scanio_y_neg_p);
int KVCA_set_wafer_stage_params(const KVCA_WS_parameters *wafer_stage_params);
int KVCA_set_WM_data_checks_params(const KVXTxMC_WM_data_checks_params *WM_data_checks_params);
int KVCA_get_WM_data_checks_params(KVXTxMC_WM_data_checks_params *WM_data_checks_params);
int KVCA_set_comp_sim_mode(const bool *comp_sim_mode);
int KVCA_set_AG_LS_resist_offsets(const int *chuck_ix,
	const KVXTxMC_AG_LS_resist_offsets_mcs *AG_LS_resist_offsets);
int KVCA_set_agile2_droplet_detection_params(const double *threshold);
int KVCA_set_agile2_reference_location(const xyvect *ref_pos);
int KVCA_get_mirror_block_params(KVXA_mirror_block_params *mirror_block_params_p);
int KVCA_set_mirror_block_params(const KVXA_mirror_block_params *mirror_block_params_p);
int KVCA_set_hovering_params(const KVCA_hovering_params *hovering_params_p);
int KVCA_get_SUSD_params(KVCA__get_SUSD_params_SUSD_correction_params *SUSD_correction_params);
int KVCA_set_SUSD_params(const KVCA__set_SUSD_params_SUSD_correction_params *SUSD_correction_params);
int KVCA_get_leveling_option_params(bool *apply_IFPC);
int KVCA_set_leveling_option_params(const bool *apply_IFPC);
int KVCA_start_lot(const KVCA_levelling_lot_data_t *levelling_lot_data_p);
int KVCA_finish_lot(void);
int KVCA_start_wafer(const WPxCHUCK_chuck_id_enum *chuck_id,
	const bool *do_WM_recovery);
int KVCA_finish_wafer(KWXA_wafer_map_info *wafer_map_info_p);
int KVCA_set_zeroing_errors(const zrxryvect *ws_zeroing_err_p);
int KVCA_set_LS_Ry_drift(const WPxCHUCK_chuck_id_enum *chuck_id,
	const double *Ry_drift);
int KVCA_set_LS_stroke_tilt(const WPxCHUCK_chuck_id_enum *chuck_id,
	const double *Ry_drift);
int KVCA_set_GLC_params(const int *seq_nr,
	const MExMEASURE_GLC_params_KD_KV *glc_params_p);
int KVCA_put_GLC_results(const int *seq_nr,
	const RLXA_get_result_glc_t *glc_results_p);
int KVCA_get_global_wafer_wedge(const bool *corrected_for_zeroing_err,
	zrxryvect *global_wafer_wedge_p);
int KVCA_get_GLC_meas_results(KVXA_meas_results *glc_meas_results_p);
int KVCA_get_global_level_contour(KVCA_scan_data *global_level_contour_p);
int KVCA_get_wafer_approve_requested(bool *wafer_approve_requested_p);
int KVCA_det_WM_stroke_params(const int *seq_nr,
	const MExMEASURE_WM_params_KD_KV *wm_stroke_params_p,
	const KVCA_WM_stroke_t *wm_stroke_data_p,
	zrxryvect *start_zrxry_p,
	zrxryvect *end_zrxry_p);
int KVCA_det_SOSI_WM_stroke_params(const int *seq_nr,
	const MExMEASURE_WM_params_KD_KV *wm_stroke_params_p,
	const KVCA_WM_stroke_t *wm_stroke_data_p,
	const zrxryvect *start_zrxry_p,
	const zrxryvect *end_zrxry_p);
int KVCA_put_WM_stroke_results(const int *seq_nr,
	const RLXA_get_result_zmap_t *wm_stroke_results_p);
int KVCA_put_SOSI_WM_stroke_results(const int *seq_nr,
	const RLXA_get_result_zmap_t *wm_stroke_results_p);
int KVCA_get_extended_wafer_map(const WPxCHUCK_chuck_id_enum *chuck_id,
	KWXA_wafer_map *wafer_map_p);
int KVCA_get_wafer_map_for_FSM(const bool *extend_wafer_coverage,
	const WPxCHUCK_chuck_id_enum *chuck_id,
	KWXA_wafer_map *wafer_map_p);
int KVCA_get_WM_results(KVXAxLOTxRES_WM_results *wm_results_p,
	KVCA_area_leveling_option_application_array_t *area_leveling_option_application_p);
int KVCA_correct_zeroing_errors_on_WM(void);
int KVCA_set_EWC_usage_to_store(const bool *EWC_usage);
int KVCA_check_WM_recovery_method(KVXA_WM_recovery_method *WM_recovery_method);
int KVCA_check_SOSI_WM_recovery_method(KVXA_WM_recovery_method *WM_recovery_method);
int KVCA_get_WM_global_wafer_wedge(const bool *corrected_for_zeroing_err,
	zrxryvect *global_wafer_wedge_p);
int KVCA_set_diagnostics(const MEXAxGL_state *state_p);
void KVCA_set_context(const MEXAxGL_context_list *context);
int KVCA_get_wafer_check_results(KVXA_wafer_check_results *wafer_check_results);
int KVCA_get_SOSI_wafer_check_results(KVXA_wafer_check_results *wafer_check_results_p);
int KVCA_set_actual_ag_positions(const KVCA__set_actual_ag_positions_spots_xyz_p *spots_xyz_p);
int KVCA_import_PDOC_tables(const KVCA_table_params_array_t *pdocTableParams_p,
	KVCA_table_id_array_t *pdocTableIds_p);
int KVCA_det_PDOC_LS_stroke_params(const int *LS_seq_nr,
	const MExMEASURE_WM_params_KD_KV *pdoc_LS_stroke_params_p,
	const KVCA_PDOC_LS_stroke_t *pdoc_LS_stroke_data_p,
	zrxryvect *pdoc_LS_start_zrxry_p,
	zrxryvect *pdoc_LS_end_zrxry_p);
int KVCA_put_PDOC_LS_stroke_results(const int *LS_seq_nr,
	const KVCA_PDOC_LS_stroke_t *pdoc_ls_stroke_data,
	const RLXA_get_result_zmap_t *pdoc_AG_stroke_results);
int KVCA_export_PDOC_tables(const KVCA_table_params_array_t *pdocTableParams_p);
int KVCA_model_PDOC(const KVCA_PDOC_averaging_params_array *pdoc_averaging_params_p,
	KVCA_table_id_array_t *pdoc_table_ids_p);
int KVCA_det_PDOC_AG_stroke_params(const int *LS_seq_nr,
	const int *AG_seq_nr,
	const MExMEASURE_PDOC_AG_params_KD_KV *pdoc_AG_stroke_params_p,
	const KVCA_AG_stroke_t *pdoc_AG_stroke_data_p,
	const KVCA_PDOC_LS_stroke_t *pdoc_LS_stroke_data_p,
	WPxSCANxDEF_polynomial_scan_params_struct *pdoc_AG_z_profile_p,
	zrxryvect *start_pos_p,
	zrxryvect *end_pos_p,
	double *scan_duration);
int KVCA_put_PDOC_AG_stroke_results(const int *LS_seq_nr,
	const int *AG_seq_nr,
	const KVCA_AG_stroke_t *ag_stroke_data_p,
	const KVCA_PDOC_LS_stroke_t *ls_stroke_data_p,
	const RLXA_AG_get_result_zmap_t *pdoc_AG_stroke_results_p);
int KVCA_set_AG_height(const KVCA_AG_nozzle_height_estimate *AG_nozzle_height_estimate);
int KVCA_set_LS_height(const KVCA_PDOC_LS_reference *PDOC_LS_reference);
int KVCA_set_AG_wfr_ref_height(const double *Waf_Ref_AGZ);
int KVCA_set_LS_wfr_ref_height(const KVCA_PDOC_LS_reference *PDOC_LS_reference);
int KVCA_destroy_PDOC_LS_scan_results(void);
void KVCA_PDOC_ready_for_second_LS_WM_meas(void);
int KVCA_set_sosi_lvl_limits(const MEXAxSOSIxLVL_sosi_lvl_limits *sosi_lvl_limits_p);



#endif // _KVCA_TC_H_
