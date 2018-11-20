/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : RL
* 模块名称 : RLXA
* 文件名称 : RLXA_tc.h
* 概要描述 :
*	RL组件RLXA数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _RLXA_TC_H_
#define _RLXA_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <THXA.h> 
#include <SMXA.h> 
#include <WPxSCANxDEF_tc.h> 
#include <LFXAxDEF_tc.h> 
#include <RLxTABLESET_tc.h> 
#include <LEXAxDEF_tc.h> 
#include <base.h> 
#include <WPxCHUCK_tc.h> 
#include <LEXAxSPOT_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    double gainCorrection;
} RLXA_ag_gain_correction_t;

typedef struct
{
    LEXAxSPOT_spot_selection_t Z_capture_spot_selection;
    bool Ry_capture_needed;
    LEXAxSPOT_spot_selection_t Ry_capture_spot_selection;
    bool change_of_process;
    bool on_process;
} RLXA_capture_def_t;

typedef enum
{
    RLXA_CAPTURE_SCENARIO_NORMAL = 0,
    RLXA_CAPTURE_SCENARIO_FALLBACK = 1,
} RLXA_capture_scenario_t;

typedef enum
{
    RLXA_SCAN_PERFORMANCE_ID_GLC = 0,
    RLXA_SCAN_PERFORMANCE_ID_PDGC = 1,
    RLXA_SCAN_PERFORMANCE_ID_WSM = 2,
    RLXA_SCAN_PERFORMANCE_ID_AG = 3,
    RLXA_SCAN_PERFORMANCE_ID_ILS = 4,
    RLXA_SCAN_PERFORMANCE_ID_SLS = 5,
    RLXA_SCAN_PERFORMANCE_ID_COLS = 6,
    RLXA_SCAN_PERFORMANCE_ID_WCOLS = 7,
} RLXA_scan_performance_type_t;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    horvervect capture_position;
    RLXA_capture_def_t capture_def;
} RLXA_request_ags_capture_robust_t;

typedef struct
{
    double Z;
    double Ry;
} RLXA_get_result_ags_capture_robust_t;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    horvervect capture_position;
    RLXA_capture_def_t capture_def;
} RLXA_request_ags_capture_t;

typedef struct
{
    double Z;
    double Ry;
} RLXA_get_result_ags_capture_t;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    horvervect capture_position;
} RLXA_request_ags_raw_capture_t;

typedef struct
{
    double Z;
} RLXA_get_result_ags_raw_capture_t;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    horvervect capture_position;
    LEXAxSPOT_spot_selection_t spot_selection;
    bool Ry_capture_needed;
    RLXA_capture_scenario_t scenario;
} RLXA_request_wafer_capture_t;

typedef struct
{
    double Z;
    double Ry;
} RLXA_get_result_wafer_capture_t;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    horvervect position;
    bool capture_needed;
    RLXA_capture_def_t capture_def;
    double accuracy;
    LEXAxSPOT_spot_selection_t spot_selection;
} RLXA_request_ags_height_t;

typedef struct
{
    LEXAxDEF_statmeas_report_t ags_heights_report;
    LEXAxDEF_statmeas_data_t ags_heights_data;
} RLXA_get_result_ags_height_t;

typedef double RLXA_request_ags_scan_height_t_pdgc_correction[0x9];

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    horvervect position;
    bool capture_needed;
    RLXA_capture_def_t capture_def;
    double accuracy;
    LEXAxSPOT_spot_selection_t spot_selection;
    RLXA_request_ags_scan_height_t_pdgc_correction pdgc_correction;
} RLXA_request_ags_scan_height_t;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    double wafer_stage_Rx;
    double wafer_stage_Rz;
    horvervect capture_position;
    bool capture_needed;
    RLXA_capture_def_t capture_def;
    xyvect centre_position;
    double radius;
    double start_angle;
    double end_angle;
    RLxTABLESET_table_set_t table_set;
} RLXA_request_glc_t;

typedef struct
{
    LEXAxDEF_scan_report_t glc_report;
} RLXA_get_result_glc_t;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    horvervect start_pos;
    horvervect end_pos;
    RLxTABLESET_table_set_t table_set;
} RLXA_request_linear_scan_t;

typedef struct
{
    LEXAxDEF_scan_report_t scan_report;
    LEXAxDEF_scan_data_t scan_data;
} RLXA_get_result_linear_scan_t;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    horvervect servo_scan_start_pos;
    horvervect servo_scan_end_pos;
    RLxTABLESET_table_set_t servo_scan_table_set;
    xyavect calib_scan_start_pos;
    xyavect calib_scan_end_pos;
    RLxTABLESET_table_set_t calib_scan_table_set;
} RLXA_request_pdgc_t;

typedef struct
{
    LEXAxDEF_pdgc_report_array_t table_reports;
} RLXA_get_result_pdgc_t;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    horvervect start_pos;
    horvervect end_pos;
    RLxTABLESET_table_set_t table_set;
} RLXA_request_zmap_t;

typedef struct
{
    LEXAxDEF_scan_report_t scan_report;
} RLXA_get_result_zmap_t;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    horvervect start_pos;
    horvervect end_pos;
    RLxTABLESET_sosi_table_set_t table_set;
    xyvect next_scan_in_m4_pos;
    LEXAxSPOT_spot_selection_t next_scan_in_z_spot;
    LEXAxSPOT_spot_selection_t next_scan_in_ry_spots;
    double next_scan_in_ry_y_pos;
    bool last_stroke;
} RLXA_request_sosi_zmap_t;

typedef struct
{
    bool overrule;
    double max_prep_velocity;
    double max_prep_acceleration;
    double max_prep_jerk;
    double max_scan_velocity;
    double max_scan_acceleration;
    double max_scan_jerk;
} RLXA_axis_servo_limits_t;

typedef struct
{
    bool overrule;
    double amount;
} RLXA_prescan_settle_time_t;

typedef struct
{
    RLXA_prescan_settle_time_t prescan_settle_time;
    RLXA_axis_servo_limits_t x_servo_limits;
    RLXA_axis_servo_limits_t y_servo_limits;
} RLXA_scan_servo_limits_t;

typedef struct
{
    int scan_id;
} RLXA_request_free_LE_buffer_t;

typedef struct
{
    LEXAxDEF_pdgc_table_id_array_t raw_pdgc_table_ids;
    LEXAxDEF_pdgc_grid_array_t pdgc_table_grid;
    LEXAxDEF_pdgc_table_id_t ave_pdgc_table_id;
} RLXA_request_det_pdgc_tables_t;

typedef struct
{
    int nr_invalid_entries;
} RLXA_get_result_det_pdgc_tables_t;

typedef struct
{
    LEXAxDEF_pdgc_table_params_array_t pdgc_table_params;
} RLXA_request_load_pdgc_tables_t;

typedef struct
{
    LEXAxDEF_pdgc_table_id_array_t pdgc_table_ids;
} RLXA_get_result_load_pdgc_tables_t;

typedef struct
{
    LEXAxDEF_pdgc_table_params_array_t pdgc_table_params;
} RLXA_request_save_pdgc_tables_t;

typedef struct
{
    LEXAxDEF_pdgc_table_id_array_t pdgc_table_ids;
} RLXA_request_clear_PDGC_tables_t;

typedef struct
{
    int numMeasurementErrors;
    int numSystemErrors;
    LFXAxDEF_error_source_t errorSpec;
    double scanStartTime;
    double scanDuration;
} RLXA_AG_statmeas_report_t;

typedef struct
{
    double z;
    double zStdDev;
    int numMeasurements;
} RLXA_AG_statmeas_data_t;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    horvervect extend_position;
} RLXA_AG_request_extend_t;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    horvervect capture_position;
} RLXA_AG_request_capture_t;

typedef struct
{
    double Z;
} RLXA_AG_get_result_capture_t;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    horvervect calib_position;
} RLXA_AG_request_calibrate_gain_t;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    horvervect measure_position;
    bool capture_needed;
    bool calibrate_gain;
    double accuracy;
} RLXA_AG_request_height_t;

typedef struct
{
    RLXA_AG_statmeas_report_t ag_height_report;
    RLXA_AG_statmeas_data_t ag_height_data;
} RLXA_AG_get_result_height_t;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    horvervect start_pos;
    horvervect end_pos;
    WPxSCANxDEF_polynomial_scan_params_struct z_profile;
    RLxTABLESET_AG_table_set_t table_set;
    bool perform_safe_travel;
} RLXA_AG_request_zmap_t;

typedef struct
{
    LEXAxDEF_scan_report_t scan_report;
} RLXA_AG_get_result_zmap_t;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int RLXA_initialize(void);
int RLXA_terminate(void);
int RLXA_get_status(SMXA_driverState *status_p);
int RLXA_set_sim_mode(const THXA_SIM_MODE *sim_mode,
	const THXA_TRACE_MODE *trace_mode,
	const THXA_REQ_MODE *req_mode);
int RLXA_get_sim_mode(THXA_SIM_MODE *sim_mode_p,
	THXA_TRACE_MODE *trace_mode_p,
	THXA_REQ_MODE *req_mode_p);
void RLXA_mc_changed(void);
void RLXA_rd_imp_data(void);
int RLXA_request_ags_capture_robust(const RLXA_request_ags_capture_robust_t *params_p,
	int *action_id_p);
int RLXA_get_result_ags_capture_robust(const int *action_id,
	RLXA_get_result_ags_capture_robust_t *params_p);
int RLXA_request_ags_capture(const RLXA_request_ags_capture_t *params_p,
	int *action_id_p);
int RLXA_get_result_ags_capture(const int *action_id,
	RLXA_get_result_ags_capture_t *params_p);
int RLXA_request_ags_raw_capture(const RLXA_request_ags_raw_capture_t *params_p,
	int *action_id_p);
int RLXA_get_result_ags_raw_capture(const int *action_id,
	RLXA_get_result_ags_raw_capture_t *params_p);
int RLXA_request_wafer_capture(const RLXA_request_wafer_capture_t *params_p,
	int *action_id_p);
int RLXA_get_result_wafer_capture(const int *action_id,
	RLXA_get_result_wafer_capture_t *params_p);
int RLXA_request_ags_height(const RLXA_request_ags_height_t *params_p,
	int *action_id_p);
int RLXA_get_result_ags_height(const int *action_id,
	RLXA_get_result_ags_height_t *params_p);
int RLXA_request_ags_scan_height(const RLXA_request_ags_scan_height_t *params_p,
	int *action_id_p);
int RLXA_get_result_ags_scan_height(const int *action_id,
	RLXA_get_result_ags_height_t *params_p);
int RLXA_request_glc(const RLXA_request_glc_t *params_p,
	int *action_id_p);
int RLXA_get_result_glc(const int *action_id,
	RLXA_get_result_glc_t *params_p);
int RLXA_request_linear_scan(const RLXA_request_linear_scan_t *params_p,
	int *action_id_p);
int RLXA_get_result_linear_scan(const int *action_id,
	RLXA_get_result_linear_scan_t *params_p);
int RLXA_request_pdgc(const RLXA_request_pdgc_t *params_p,
	int *action_id_p);
int RLXA_get_result_pdgc(const int *action_id,
	RLXA_get_result_pdgc_t *params_p);
int RLXA_request_zmap(const RLXA_request_zmap_t *params_p,
	int *action_id_p);
int RLXA_get_result_zmap(const int *action_id,
	RLXA_get_result_zmap_t *params_p);
int RLXA_request_sosi_zmap(const RLXA_request_sosi_zmap_t *params_p,
	int *action_id_p);
int RLXA_get_result_sosi_zmap(const int *action_id,
	RLXA_get_result_zmap_t *params_p);
int RLXA_request_adv_zmap(const RLXA_request_zmap_t *params_p,
	const RLXA_scan_servo_limits_t *servo_limits_p,
	int *action_id_p);
int RLXA_get_result_adv_zmap(const int *action_id,
	RLXA_get_result_zmap_t *params_p);
int RLXA_request_adv_sosi_zmap(const RLXA_request_sosi_zmap_t *params_p,
	const RLXA_scan_servo_limits_t *servo_limits_p,
	int *action_id_p);
int RLXA_get_result_adv_sosi_zmap(const int *action_id,
	RLXA_get_result_zmap_t *params_p);
int RLXA_request_free_LE_buffer(const RLXA_request_free_LE_buffer_t *params_p,
	int *action_id_p);
int RLXA_get_result_free_LE_buffer(const int *action_id);
int RLXA_request_det_pdgc_tables(const RLXA_request_det_pdgc_tables_t *params_p,
	int *action_id_p);
int RLXA_get_result_det_pdgc_tables(const int *action_id,
	RLXA_get_result_det_pdgc_tables_t *params_p);
int RLXA_request_clear_PDGC_tables(const RLXA_request_clear_PDGC_tables_t *params_p,
	int *action_id_p);
int RLXA_get_result_clear_PDGC_tables(const int *action_id);
int RLXA_request_load_pdgc_tables(const RLXA_request_load_pdgc_tables_t *params_p,
	int *action_id_p);
int RLXA_get_result_load_pdgc_tables(const int *action_id,
	RLXA_get_result_load_pdgc_tables_t *params_p);
int RLXA_request_save_pdgc_tables(const RLXA_request_save_pdgc_tables_t *params_p,
	int *action_id_p);
int RLXA_get_result_save_pdgc_tables(const int *action_id);
int RLXA_AG_request_extend(const RLXA_AG_request_extend_t *params_p,
	int *action_id_p);
int RLXA_AG_get_result_extend(const int *action_id);
int RLXA_AG_request_retract(const WPxCHUCK_chuck_id_enum *chuck_id,
	int *action_id_p);
int RLXA_AG_get_result_retract(const int *action_id);
int RLXA_AG_request_capture(const RLXA_AG_request_capture_t *params_p,
	int *action_id_p);
int RLXA_AG_get_result_capture(const int *action_id,
	RLXA_AG_get_result_capture_t *params_p);
int RLXA_AG_request_calibrate_gain(const RLXA_AG_request_calibrate_gain_t *params_p,
	int *action_id_p);
int RLXA_AG_get_result_calibrate_gain(const int *action_id);
int RLXA_AG_request_height(const RLXA_AG_request_height_t *params_p,
	int *action_id_p);
int RLXA_AG_get_result_height(const int *action_id,
	RLXA_AG_get_result_height_t *params_p);
int RLXA_AG_request_zmap(const RLXA_AG_request_zmap_t *params_p,
	int *action_id_p);
int RLXA_AG_get_result_zmap(const int *action_id,
	RLXA_AG_get_result_zmap_t *params_p);
int RLXA_get_PDGC_nr_of_scans(int *nr_of_pdgc_scans);
int RLXA_run_bondwire_test(void);
int RLXA_get_scan_performance_id(const RLXA_scan_performance_type_t *params,
	int *scan_performance_id_p);



#endif // _RLXA_TC_H_
