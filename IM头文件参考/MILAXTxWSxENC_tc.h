/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : MI
* 模块名称 : MILAXTxWSxENC
* 文件名称 : MILAXTxWSxENC_tc.h
* 概要描述 :
*	MI组件MILAXTxWSxENC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _MILAXTxWSxENC_TC_H_
#define _MILAXTxWSxENC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <WPxSCANxDEF_tc.h> 
#include <base.h> 
#include <WPxCHUCK_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    MILAXTxWSxENC_RAW_MEASUREMENT = 0,
    MILAXTxWSxENC_PLATE_MAP_CORRECTED_MEASUREMENT = 1,
} MILAXTxWSxENC_h_map_measurement_type_enum;

typedef enum
{
    MILAXTxWSxENC_H_MAP_SCAN_TYPE = 0,
    MILAXTxWSxENC_INCONSISTENCY_SCAN_TYPE = 1,
} MILAXTxWSxENC_SCAN_TYPE;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    WPxCHUCK_chuck_func_enum chuck_func;
} MILAXTxWSxENC_drift_scan_data_struct;

typedef struct
{
    double delta_y;
    double delta_z;
} MILAXTxWSxENC_drift_reference_struct;

typedef struct
{
    MILAXTxWSxENC_drift_reference_struct drift_reference;
} MILAXTxWSxENC_drift_scan_results_struct;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    WPxCHUCK_chuck_func_enum chuck_func;
    MILAXTxWSxENC_drift_reference_struct drift_reference;
} MILAXTxWSxENC_set_drift_reference_data_struct;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    WPxCHUCK_chuck_func_enum chuck_func;
    double interpolation_margin;
    double settling_time;
    horvervect start;
    horvervect end;
    double velocity;
    double acceleration;
    double jerk;
} MILAXTxWSxENC_inconsistency_scan_data_struct;

typedef struct
{
    double deltay_avg;
    double deltaz_avg;
    double negotiated_scan_time;
} MILAXTxWSxENC_inconsistency_scan_results_struct;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    WPxCHUCK_chuck_func_enum chuck_func;
    MILAXTxWSxENC_h_map_measurement_type_enum measurement_type;
    int division_factor;
    horvervect start;
    horvervect end;
    double max_speed;
    double max_acceleration;
    double max_jerk;
} MILAXTxWSxENC_h_map_scan_data_struct;

typedef struct
{
    double hy;
    double hz;
    bool valid;
} MILAXTxWSxENC_h_map_sensor_sample_struct;

typedef MILAXTxWSxENC_h_map_sensor_sample_struct MILAXTxWSxENC_h_map_sample_struct_sensor_data[0x4];

typedef struct
{
    MILAXTxWSxENC_h_map_sample_struct_sensor_data sensor_data;
    horvervect position;
} MILAXTxWSxENC_h_map_sample_struct;

typedef struct
{
    int len;
    int max_len;
    MILAXTxWSxENC_h_map_sample_struct* array;
} MILAXTxWSxENC_h_map_sample_vararray;

typedef struct
{
    MILAXTxWSxENC_h_map_sample_vararray data;
} MILAXTxWSxENC_h_map_scan_results_struct;

typedef struct
{
    int nr_repetitions;
    int division_factor;
} MILAXTxWSxENC_hf_mien_scan_data_struct;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    WPxCHUCK_chuck_func_enum chuck_func;
    WPxSCANxDEF_6dof_scan_params_with_properties_struct wp_scan_params;
    MILAXTxWSxENC_hf_mien_scan_data_struct mien_scan_params;
} MILAXTxWSxENC_hf_map_scan_data_struct;

typedef struct
{
    double hy;
    double hz;
} MILAXTxWSxENC_hf_map_sensor_sample_struct;

typedef MILAXTxWSxENC_hf_map_sensor_sample_struct MILAXTxWSxENC_hf_map_sample_struct_sensor_data[0x4];

typedef struct
{
    MILAXTxWSxENC_hf_map_sample_struct_sensor_data sensor_data;
} MILAXTxWSxENC_hf_map_sample_struct;

typedef struct
{
    int len;
    int max_len;
    MILAXTxWSxENC_hf_map_sample_struct* array;
} MILAXTxWSxENC_hf_map_sample_vararray;

typedef struct
{
    MILAXTxWSxENC_hf_map_sample_vararray data;
    bool valid;
} MILAXTxWSxENC_hf_map_scan_results_struct;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    WPxCHUCK_chuck_func_enum chuck_func;
    WPxSCANxDEF_6dof_scan_params_with_properties_struct wp_scan_params;
    int division_factor;
} MILAXTxWSxENC_inconsistency_polynomial_scan_data_struct;

typedef struct
{
    double hy;
    double hz;
    bool valid;
} MILAXTxWSxENC_inconsistency_sample_struct;

typedef struct
{
    MILAXTxWSxENC_inconsistency_sample_struct inconsistency;
    horvervect position;
} MILAXTxWSxENC_inconsistency_polynomial_sample_struct;

typedef struct
{
    int len;
    int max_len;
    MILAXTxWSxENC_inconsistency_polynomial_sample_struct* array;
} MILAXTxWSxENC_inconsistency_polynomial_sample_vararray;

typedef struct
{
    MILAXTxWSxENC_inconsistency_polynomial_sample_vararray data;
} MILAXTxWSxENC_inconsistency_polynomial_scan_results_struct;

typedef struct
{
    int division_factor;
} MILAXTxWSxENC_diag_mien_scan_data_struct;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    WPxCHUCK_chuck_func_enum chuck_func;
    WPxSCANxDEF_6dof_scan_params_with_properties_struct wp_scan_params;
    MILAXTxWSxENC_diag_mien_scan_data_struct mien_scan_params;
} MILAXTxWSxENC_diag_scan_data_struct;

typedef short MILAXTxWSxENC_diag_sensor_sample_struct[0x4][0x2];

typedef struct
{
    MILAXTxWSxENC_diag_sensor_sample_struct sensor_data;
} MILAXTxWSxENC_diag_sample_reduced_struct;

typedef struct
{
    int len;
    int max_len;
    MILAXTxWSxENC_diag_sample_reduced_struct* array;
} MILAXTxWSxENC_diag_sample_reduced_vararray;

typedef struct
{
    MILAXTxWSxENC_diag_sample_reduced_vararray data;
} MILAXTxWSxENC_diag_scan_reduced_results_struct;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int MILAXTxWSxENC_request_drift_scan(const MILAXTxWSxENC_drift_scan_data_struct *scan_data,
	int *logical_action_id_ptr);
int MILAXTxWSxENC_get_result_drift_scan(const int *logical_action_id,
	MILAXTxWSxENC_drift_scan_results_struct *result_data);
int MILAXTxWSxENC_request_set_drift_reference(const MILAXTxWSxENC_set_drift_reference_data_struct *scan_data,
	int *logical_action_id_ptr);
int MILAXTxWSxENC_get_result_set_drift_reference(const int *logical_action_id);
int MILAXTxWSxENC_get_drift_reference(const WPxCHUCK_chuck_id_enum *chuck_id,
	MILAXTxWSxENC_drift_reference_struct *drift_reference);
int MILAXTxWSxENC_request_h_map_scan(const MILAXTxWSxENC_h_map_scan_data_struct *scan_data,
	int *logical_action_id_ptr);
int MILAXTxWSxENC_get_result_h_map_scan(const int *logical_action_id,
	MILAXTxWSxENC_h_map_scan_results_struct *result_data);
int MILAXTxWSxENC_request_hf_map_scan(const MILAXTxWSxENC_hf_map_scan_data_struct *scan_data,
	int *logical_action_id_ptr);
int MILAXTxWSxENC_get_result_hf_map_scan(const int *logical_action_id,
	MILAXTxWSxENC_hf_map_scan_results_struct *result_data);
int MILAXTxWSxENC_request_average_inconsistency_scan(const MILAXTxWSxENC_inconsistency_scan_data_struct *scan_data,
	int *logical_action_id_ptr);
int MILAXTxWSxENC_get_result_average_inconsistency_scan(const int *logical_action_id,
	MILAXTxWSxENC_inconsistency_scan_results_struct *result_data);
int MILAXTxWSxENC_get_maximum_scan_move_parameters(const MILAXTxWSxENC_SCAN_TYPE *scan_type,
	const WPxCHUCK_chuck_func_enum *chuck_func,
	double *max_velocity,
	double *max_acceleration,
	double *max_jerk);
int MILAXTxWSxENC_request_inconsistency_polynomial_scan(const MILAXTxWSxENC_inconsistency_polynomial_scan_data_struct *scan_data,
	int *logical_action_id);
int MILAXTxWSxENC_get_result_inconsistency_polynomial_scan(const int *logical_action_id,
	MILAXTxWSxENC_inconsistency_polynomial_scan_results_struct *result_data);
int MILAXTxWSxENC_request_diag_scan_reduced(const MILAXTxWSxENC_diag_scan_data_struct *scan_data,
	int *logical_action_id_ptr);
int MILAXTxWSxENC_get_result_diag_scan_reduced(const int *logical_action_id,
	MILAXTxWSxENC_diag_scan_reduced_results_struct *result_data);



#endif // _MILAXTxWSxENC_TC_H_
