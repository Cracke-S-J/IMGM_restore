/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : WP
* 模块名称 : WPxSCANxDEF
* 文件名称 : WPxSCANxDEF_tc.h
* 概要描述 :
*	WP组件WPxSCANxDEF数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _WPxSCANxDEF_TC_H_
#define _WPxSCANxDEF_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <SBXA_tc.h> 
#include <WPxSCANxPF_tc.h> 
#include <base.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    WPxSCANxDEF_SCAN_TYPE_LINEAR = 0,
    WPxSCANxDEF_SCAN_TYPE_POLYNOMIAL = 1,
    WPxSCANxDEF_SCAN_TYPE_WAFERSHAPE = 2,
    WPxSCANxDEF_SCAN_TYPE_VIRTUAL = 3,
    WPxSCANxDEF_SCAN_TYPE_REPEATED_POLYNOMIAL = 4,
} WPxSCANxDEF_scan_type_enum;

typedef struct
{
    bool ma_single;
    bool msd_single;
    bool ma_total_Z;
    bool msd_total_Z;
    bool store_ma;
    bool store_msd;
    bool store_raw_error;
    xyvect slitsize;
} WPxSCANxDEF_scan_performance_measurement_params_struct;

typedef struct
{
    double start_position;
    double end_position;
    WPxSCANxDEF_scan_performance_measurement_params_struct performance;
} WPxSCANxDEF_linear_scan_params_struct;

typedef struct
{
    double desired_start_position;
    double desired_end_position;
    WPxSCANxDEF_scan_performance_measurement_params_struct performance;
    double required_start_position;
    double required_end_position;
} WPxSCANxDEF_virtual_scan_params_struct;

typedef double WPxSCANxDEF_polynomial_struct_coef[0x5];

typedef struct
{
    WPxSCANxDEF_polynomial_struct_coef coef;
    double duration;
} WPxSCANxDEF_polynomial_struct;

typedef WPxSCANxDEF_polynomial_struct WPxSCANxDEF_polynomial_scan_params_struct_polynomial[0x40];

typedef struct
{
    int polynomial_cnt;
    WPxSCANxDEF_polynomial_scan_params_struct_polynomial polynomial;
    WPxSCANxDEF_scan_performance_measurement_params_struct performance;
} WPxSCANxDEF_polynomial_scan_params_struct;

typedef struct
{
    int first_index;
    int last_index;
    int repeat_count;
} WPxSCANxDEF_segment_struct;

typedef WPxSCANxDEF_polynomial_struct WPxSCANxDEF_repeated_polynomial_scan_params_struct_polynomial[0x40];

typedef WPxSCANxDEF_segment_struct WPxSCANxDEF_repeated_polynomial_scan_params_struct_segment[0x10];

typedef struct
{
    int polynomial_cnt;
    WPxSCANxDEF_repeated_polynomial_scan_params_struct_polynomial polynomial;
    int segment_cnt;
    WPxSCANxDEF_repeated_polynomial_scan_params_struct_segment segment;
    WPxSCANxDEF_scan_performance_measurement_params_struct performance;
} WPxSCANxDEF_repeated_polynomial_scan_params_struct;

typedef struct
{
    double start_position;
    double end_position;
    double PDGC_offset;
    bool keep_previous_offset;
    bool keep_end_offset;
    WPxSCANxDEF_scan_performance_measurement_params_struct performance;
} WPxSCANxDEF_wafershape_scan_params_struct;

typedef struct
{
    WPxSCANxDEF_scan_type_enum element;
    int filler0;
    union
    {
        WPxSCANxDEF_linear_scan_params_struct linear_scan;
        WPxSCANxDEF_polynomial_scan_params_struct polynomial_scan;
        WPxSCANxDEF_wafershape_scan_params_struct wafershape_scan;
        WPxSCANxDEF_virtual_scan_params_struct virtual_scan;
        WPxSCANxDEF_repeated_polynomial_scan_params_struct repeated_polynomial_scan;
    } spec;
} WPxSCANxDEF_queue_scan_type_struct;

typedef struct
{
    WPxSCANxDEF_queue_scan_type_struct move_params;
} WPxSCANxDEF_6dof_scan_axis_move_params_struct;

typedef WPxSCANxDEF_6dof_scan_axis_move_params_struct WPxSCANxDEF_6dof_scan_params_struct_axis_params[0x6];

typedef struct
{
    int scan_property_identifier;
    WPxSCANxDEF_6dof_scan_params_struct_axis_params axis_params;
} WPxSCANxDEF_6dof_scan_params_struct;

typedef WPxSCANxDEF_6dof_scan_axis_move_params_struct WPxSCANxDEF_6dof_scan_params_with_properties_struct_axis_params[0x6];

typedef struct
{
    WPxSCANxPF_6dof_scan_performance_property_struct scan_performance_properties;
    WPxSCANxDEF_6dof_scan_params_with_properties_struct_axis_params axis_params;
} WPxSCANxDEF_6dof_scan_params_with_properties_struct;

typedef WPxSCANxDEF_6dof_scan_axis_move_params_struct WPxSCANxDEF_6dof_asc_scan_params_with_properties_struct_axis_params[0x6];

typedef struct
{
    WPxSCANxPF_6dof_scan_performance_property_struct scan_performance_properties;
    WPxSCANxDEF_6dof_asc_scan_params_with_properties_struct_axis_params axis_params;
    int asc_scan_id;
} WPxSCANxDEF_6dof_asc_scan_params_with_properties_struct;

typedef struct
{
    double max_rate_limit_error;
    double rate_limit_duration;
} WPxSCANxDEF_rate_limit_performance_struct;

typedef struct
{
    WPxSCANxDEF_rate_limit_performance_struct prep_phase;
    WPxSCANxDEF_rate_limit_performance_struct scan_phase;
} WPxSCANxDEF_scan_rate_limit_performance_struct;

typedef double WPxSCANxDEF_result_array[0x20];

typedef struct
{
    double ma_single;
    double msd_single;
    double ma_total_Z;
    double msd_total_Z;
    int nr_of_err_samples;
    int nr_of_ma_samples;
    int nr_of_msd_samples;
    WPxSCANxDEF_result_array raw_error_store;
    WPxSCANxDEF_result_array ma_store;
    WPxSCANxDEF_result_array msd_store;
    xyvect slitsize;
    bool limit_exceeded;
} WPxSCANxDEF_performance_data_struct;

typedef struct
{
    WPxSCANxDEF_scan_rate_limit_performance_struct rate_limiter;
    WPxSCANxDEF_performance_data_struct performance;
} WPxSCANxDEF_6dof_scan_axis_performance_struct;

typedef WPxSCANxDEF_6dof_scan_axis_performance_struct WPxSCANxDEF_6dof_scan_results_struct_axis_performance_data[0x6];

typedef struct
{
    double scan_time;
    WPxSCANxDEF_6dof_scan_results_struct_axis_performance_data axis_performance_data;
} WPxSCANxDEF_6dof_scan_results_struct;

typedef struct
{
    double max_position_accuracy_error;
    WPxSCANxDEF_scan_rate_limit_performance_struct rate_limiter;
    WPxSCANxDEF_performance_data_struct performance;
} WPxSCANxDEF_virtual_scan_axis_performance_struct;

typedef WPxSCANxDEF_virtual_scan_axis_performance_struct WPxSCANxDEF_6dof_virtual_scan_results_struct_axis_performance_data[0x6];

typedef struct
{
    double scan_time;
    WPxSCANxDEF_6dof_virtual_scan_results_struct_axis_performance_data axis_performance_data;
} WPxSCANxDEF_6dof_virtual_scan_results_struct;

typedef horvervect WPxSCANxDEF_request_scan_move_struct_start[0x10];

typedef horvervect WPxSCANxDEF_request_scan_move_struct_end[0x10];

typedef int WPxSCANxDEF_request_scan_move_struct_scan_performance_identifier[0x10];

typedef struct
{
    int nr_moves;
    WPxSCANxDEF_request_scan_move_struct_start start;
    WPxSCANxDEF_request_scan_move_struct_end end;
    WPxSCANxDEF_request_scan_move_struct_scan_performance_identifier scan_performance_identifier;
} WPxSCANxDEF_request_scan_move_struct;

typedef horvervect WPxSCANxDEF_request_scan_move_adv_struct_start[0x10];

typedef horvervect WPxSCANxDEF_request_scan_move_adv_struct_end[0x10];

typedef WPxSCANxPF_6dof_scan_performance_property_struct WPxSCANxDEF_request_scan_move_adv_struct_scan_performance_settings[0x10];

typedef struct
{
    int nr_moves;
    WPxSCANxDEF_request_scan_move_adv_struct_start start;
    WPxSCANxDEF_request_scan_move_adv_struct_end end;
    WPxSCANxDEF_request_scan_move_adv_struct_scan_performance_settings scan_performance_settings;
} WPxSCANxDEF_request_scan_move_adv_struct;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int WPxSCANxDEF_pack_6dof_scan_params_struct(const virtual *params_struct,
	SBXA_action_params_struct *envelope_ptr);
int WPxSCANxDEF_unpack_6dof_scan_results_struct(const SBXA_action_results_struct *envelope_ptr,
	virtual **results_ptr);
int WPxSCANxDEF_is_repeated_polynomial_scan_supported(bool *is_supported);



#endif // _WPxSCANxDEF_TC_H_
