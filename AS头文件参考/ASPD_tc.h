/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : ASPD
* 文件名称 : ASPD_tc.h
* 概要描述 :
*	AS组件ASPD数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ASPD_TC_H_
#define _ASPD_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <ASXAxMCxPWQ_tc.h> 
#include <ASXAxMC_tc.h> 
#include <MDXAxAS_tc.h> 
#include <ASDT_tc.h> 
#include <base.h> 
#include <ASXA_tc.h> 
#include <ASXAxSBO_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    ASXAxSBO_sbo_chuck_struct sbo_drift;
} ASPD_periodic_ic_data_struct;

typedef struct
{
    bool enabled;
} ASPD_fit_order_struct;

typedef ASPD_fit_order_struct ASPD_fit_color_struct_order[0x7];

typedef struct
{
    bool enabled;
    ASPD_fit_color_struct_order order;
} ASPD_fit_color_struct;

typedef ASPD_fit_color_struct ASPD_periodic_fit_spec_struct_color[0x4];

typedef struct
{
    ASXA_DIR_ENUM direction;
    ASXA_SEGMENT_ENUM segment;
    ASPD_periodic_fit_spec_struct_color color;
} ASPD_periodic_fit_spec_struct;

typedef bool ASPD_physical_data_struct_recipe_used_colors[0x4];

typedef struct
{
    int nr_of_samples;
    int trigger_pitch;
    double expected_sample_distance;
    double scan_time;
    xyavect exp_scan_center;
    ASDT_agc_mode_enum agc_mode;
    ASPD_periodic_fit_spec_struct fit_spec;
    ASPD_physical_data_struct_recipe_used_colors recipe_used_colors;
} ASPD_physical_data_struct;

typedef bool ASPD_logical_mark_segment_struct_coarse_grating[0x2][0x4];

typedef struct
{
    MDXAxAS_fit_type_enum fit_type;
    MDXAxAS_periodic_segments_matrix mark_info;
    ASPD_logical_mark_segment_struct_coarse_grating coarse_grating;
} ASPD_logical_mark_segment_struct;

typedef struct
{
    MDXAxAS_fit_type_enum fit_type;
    MDXAxAS_periodic_segment_struct segment_info;
} ASPD_physical_mark_segment_struct;

typedef struct
{
    ASXAxMC_signal_struct signal;
    ASXAxMC_scan_data_struct scan_data;
    ASXAxMC_mto_chuck_struct mto;
    ASXAxMC_AGC_settle_time_struct AGC_settle_time;
    ASXAxSBO_sbo_chuck_struct sbo;
    ASXAxMCxPWQ_periodic_wq_struct wq;
    ASDT_WS_settle_time_enum settle_ws_type;
    bool sbo_drift_update_enabled;
    double sbo_drift_update_coeff_alpha;
    double sbo_drift_update_coeff_one_minus_alpha;
} ASPD_periodic_mc_data_struct;

typedef struct
{
    bool enabled;
    ASXA_STATUS_ENUM fit_status;
    double dc_value;
    double amplitude;
    double position;
    double MCC;
    double WQ;
} ASPD_fit_order_result_struct;

typedef ASPD_fit_order_result_struct ASPD_fit_color_result_struct_order[0x7];

typedef struct
{
    bool enabled;
    ASPD_fit_color_result_struct_order order;
} ASPD_fit_color_result_struct;

typedef ASPD_fit_color_result_struct ASPD_period_fit_result_struct_color[0x4];

typedef struct
{
    ASXA_DIR_ENUM direction;
    ASXA_SEGMENT_ENUM segment;
    ASPD_period_fit_result_struct_color color;
} ASPD_period_fit_result_struct;



#endif // _ASPD_TC_H_
