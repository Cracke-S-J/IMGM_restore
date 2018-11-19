/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : ASZD
* 文件名称 : ASZD_tc.h
* 概要描述 :
*	AS组件ASZD数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ASZD_TC_H_
#define _ASZD_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <ASXAxSBO_tc.h> 
#include <ASXAxMC_tc.h> 
#include <MDXAxAS_tc.h> 
#include <ASDT_tc.h> 
#include <base.h> 
#include <ASXA_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    bool enabled;
} ASZD_fit_color_struct;

typedef ASZD_fit_color_struct ASZD_zigzag_fit_spec_struct_color[0x4];

typedef struct
{
    ASXA_DIR_ENUM direction;
    ASXA_SEGMENT_ENUM segment;
    ASZD_zigzag_fit_spec_struct_color color;
} ASZD_zigzag_fit_spec_struct;

typedef bool ASZD_physical_data_struct_recipe_used_colors[0x4];

typedef struct
{
    int nr_of_samples;
    int trigger_pitch;
    double scan_time;
    xyavect exp_scan_center;
    ASDT_agc_mode_enum agc_mode;
    ASZD_zigzag_fit_spec_struct fit_spec;
    ASZD_physical_data_struct_recipe_used_colors recipe_used_colors;
} ASZD_physical_data_struct;

typedef struct
{
    MDXAxAS_fit_type_enum fit_type;
    MDXAxAS_zigzag_segments_matrix mark_info;
} ASZD_logical_mark_segment_struct;

typedef struct
{
    MDXAxAS_fit_type_enum fit_type;
    ASDT_PL2PP_physical_scan_data scan_data;
    MDXAxAS_zigzag_segment_struct segment_info;
} ASZD_physical_mark_segment_struct;

typedef struct
{
    ASXAxMC_signal_struct signal;
    ASXAxMC_scan_data_struct scan_data;
    ASXAxMC_mto_chuck_struct mto;
    ASXAxMC_AGC_settle_time_struct AGC_settle_time;
    ASXAxSBO_sbo_chuck_struct sbo;
    ASXAxMC_mark_mtwq_struct mtwq;
    ASXAxMC_zigzag_wq_struct wqnf;
} ASZD_zigzag_mc_data_struct;

typedef struct
{
    bool enabled;
    ASXA_STATUS_ENUM fit_status;
    double dc_value;
    double position;
    double MCC;
    double WQ;
} ASZD_zigzag_fit_color_result_struct;

typedef ASZD_zigzag_fit_color_result_struct ASZD_zigzag_fit_result_struct_color[0x4];

typedef struct
{
    ASXA_DIR_ENUM direction;
    ASXA_SEGMENT_ENUM segment;
    xyvect scan_offset;
    ASZD_zigzag_fit_result_struct_color color;
} ASZD_zigzag_fit_result_struct;

typedef struct
{
    bool enabled;
    ASXA_ZPOS_STATUS_ENUM pos_status;
    double MCC;
    double WQ;
    double position;
    bool validation;
    ASXA_ZVAL_STATUS_ENUM val_status;
    double used_weight_factor;
} ASZD_zigzag_recipe_col_result_struct;

typedef ASZD_zigzag_recipe_col_result_struct ASZD_zigzag_recipe_seg_result_struct_color[0x4];

typedef struct
{
    bool enabled;
    xyvect scan_offset;
    ASZD_zigzag_recipe_seg_result_struct_color color;
} ASZD_zigzag_recipe_seg_result_struct;

typedef ASZD_zigzag_recipe_seg_result_struct ASZD_zigzag_recipe_dir_result_struct_segment[0x2];

typedef struct
{
    bool enabled;
    ASZD_zigzag_recipe_dir_result_struct_segment segment;
} ASZD_zigzag_recipe_dir_result_struct;

typedef ASZD_zigzag_recipe_dir_result_struct ASZD_zigzag_recipe_result_struct_direction[0x2];

typedef struct
{
    bool enabled;
    ASZD_zigzag_recipe_result_struct_direction direction;
} ASZD_zigzag_recipe_result_struct;

typedef ASZD_zigzag_recipe_result_struct ASZD_zigzag_recipe_scan_result_struct_scan[0x32];

typedef struct
{
    ASZD_zigzag_recipe_scan_result_struct_scan scan;
} ASZD_zigzag_recipe_scan_result_struct;

typedef struct
{
    bool enabled;
    bool scan_found;
    int scan_index;
} ASZD_best_color_struct;

typedef ASZD_best_color_struct ASZD_best_seg_color_result_struct_color[0x4];

typedef struct
{
    bool enabled;
    ASZD_best_seg_color_result_struct_color color;
} ASZD_best_seg_color_result_struct;

typedef ASZD_best_seg_color_result_struct ASZD_best_dir_color_result_struct_segment[0x2];

typedef struct
{
    bool enabled;
    bool color_found;
    int color_index;
    ASZD_best_dir_color_result_struct_segment segment;
} ASZD_best_dir_color_result_struct;

typedef ASZD_best_dir_color_result_struct ASZD_best_color_result_struct_direction[0x2];

typedef struct
{
    ASZD_best_color_result_struct_direction direction;
} ASZD_best_color_result_struct;



#endif // _ASZD_TC_H_
