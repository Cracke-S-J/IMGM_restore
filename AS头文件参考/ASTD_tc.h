/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : ASTD
* 文件名称 : ASTD_tc.h
* 概要描述 :
*	AS组件ASTD数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ASTD_TC_H_
#define _ASTD_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <ASXAxMCxPWQ_tc.h> 
#include <ASXAxMC_tc.h> 
#include <MDXAxAS_tc.h> 
#include <ASDT_tc.h> 
#include <ASXA_tc.h> 
#include <base.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    horvervect ws_start_pos;
    horvervect ws_end_pos;
} ASTD_scan_spec_struct;

typedef struct
{
    bool enabled;
    double wq_nf;
} ASTD_template_fit_color_struct;

typedef ASTD_template_fit_color_struct ASTD_template_fit_spec_struct_color[0x4];

typedef struct
{
    ASXA_DIR_ENUM direction;
    ASTD_template_fit_spec_struct_color color;
} ASTD_template_fit_spec_struct;

typedef bool ASTD_physical_data_struct_recipe_used_colors[0x4];

typedef struct
{
    int nr_of_samples;
    int trigger_pitch;
    double scan_time;
    xyavect exp_scan_center;
    ASDT_agc_mode_enum agc_mode;
    ASTD_template_fit_spec_struct fit_spec;
    ASTD_physical_data_struct_recipe_used_colors recipe_used_colors;
} ASTD_physical_data_struct;

typedef struct
{
    MDXAxAS_fit_type_enum fit_type;
    MDXAxAS_template_segments_matrix mark_info;
} ASTD_logical_mark_segment_struct;

typedef struct
{
    MDXAxAS_fit_type_enum fit_type;
    ASDT_PL2PP_physical_scan_data scan_data;
    MDXAxAS_template_segment_struct segment_info;
} ASTD_physical_mark_segment_struct;

typedef struct
{
    ASXAxMC_scan_data_struct scan_data;
    ASXAxMC_mtc_chuck_struct mtc;
    ASXAxMC_sbc_chuck_struct sbc;
    ASXAxMCxPWQ_periodic_wq_struct wq;
} ASTD_template_mc_data_struct;

typedef struct
{
    ASXA_PEAK_REJECT_REASON_ENUM reject_reason;
    double aligned_position;
    double WQ;
    double peak_curv;
    double peak_mcc;
    double mcc_parabolic_fit;
    double peak_scaling;
    double amplitude_scaling;
} ASTD_peak_data;

typedef ASTD_peak_data ASTD_peak_data_col_struct_peak_data[0xF];

typedef struct
{
    int nr_of_peaks;
    ASTD_peak_data_col_struct_peak_data peak_data;
} ASTD_peak_data_col_struct;

typedef ASTD_peak_data_col_struct ASTD_peak_data_struct_col_array[0x4];

typedef struct
{
    ASTD_peak_data_struct_col_array col_array;
} ASTD_peak_data_struct;

typedef struct
{
    bool enabled;
    ASXA_TPOS_STATUS_ENUM pos_status;
    double dc_value;
    double amplitude;
    double position;
    double MCC;
    double WQ;
} ASTD_template_fit_color_result_struct;

typedef ASTD_template_fit_color_result_struct ASTD_template_fit_result_struct_color[0x4];

typedef struct
{
    ASXA_DIR_ENUM direction;
    ASTD_template_fit_result_struct_color color;
    ASTD_peak_data_struct peak_data;
} ASTD_template_fit_result_struct;

typedef struct
{
    bool enabled;
    ASXA_TPOS_STATUS_ENUM pos_status;
    double MCC;
    double WQ;
    double position;
    bool validation;
    ASXA_TVAL_STATUS_ENUM val_status;
    double used_weight_factor;
} ASTD_template_recipe_col_result_struct;

typedef ASTD_template_recipe_col_result_struct ASTD_template_recipe_dir_result_struct_color[0x4];

typedef struct
{
    bool enabled;
    ASTD_template_recipe_dir_result_struct_color color;
} ASTD_template_recipe_dir_result_struct;

typedef ASTD_template_recipe_dir_result_struct ASTD_template_recipe_scan_result_struct_direction[0x2];

typedef struct
{
    bool enabled;
    ASTD_template_recipe_scan_result_struct_direction direction;
} ASTD_template_recipe_scan_result_struct;

typedef ASTD_template_recipe_scan_result_struct ASTD_template_recipe_result_struct_scan[0x32];

typedef struct
{
    ASTD_template_recipe_result_struct_scan scan;
} ASTD_template_recipe_result_struct;

typedef struct
{
    int scan_index;
    int color_index;
    bool found;
} ASTD_best_dir_color_result_struct;

typedef ASTD_best_dir_color_result_struct ASTD_best_color_result_struct_direction[0x2];

typedef struct
{
    ASTD_best_color_result_struct_direction direction;
} ASTD_best_color_result_struct;



#endif // _ASTD_TC_H_
