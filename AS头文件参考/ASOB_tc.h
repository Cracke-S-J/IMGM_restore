/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : ASOB
* 文件名称 : ASOB_tc.h
* 概要描述 :
*	AS组件ASOB数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ASOB_TC_H_
#define _ASOB_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <ASXAxMC_tc.h> 
#include <ASXAxMCxPWQ_tc.h> 
#include <ASDT_tc.h> 
#include <ASPD_tc.h> 
#include <ASXA_tc.h> 
#include <MDXAxAS_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    MDXAxAS_fit_type_enum fit_type;
    MDXAxAS_oblique_segment_struct segment_info;
} ASOB_MD_mark_info_struct;

typedef struct
{
    ASXA_DIR_ENUM direction;
    ASXA_SEGMENT_ENUM segment;
    ASPD_period_fit_result_struct_color color;
} ASOB_oblique_fit_result_struct;

typedef struct
{
    bool enabled;
    ASXA_STATUS_ENUM fit_status;
    double dc_value;
    double amplitude;
    double position;
    double MCC;
    double WQ;
} ASOB_fit_order_result_struct;

typedef struct
{
    bool enabled;
} ASOB_oblique_fit_ord_struct;

typedef ASOB_oblique_fit_ord_struct ASOB_oblique_fit_col_struct_order[0x7];

typedef struct
{
    bool enabled;
    ASOB_oblique_fit_col_struct_order order;
} ASOB_oblique_fit_col_struct;

typedef ASDT_action_data_struct ASOB_oblique_fit_spec_struct_scan_id[0x2];

typedef ASOB_oblique_fit_col_struct ASOB_oblique_fit_spec_struct_color[0x4];

typedef struct
{
    ASOB_oblique_fit_spec_struct_scan_id scan_id;
    ASXA_DIR_ENUM direction;
    ASOB_oblique_fit_spec_struct_color color;
} ASOB_oblique_fit_spec_struct;

typedef double ASOB_CP_position_corrections_struct_position[0x4][0x7];

typedef struct
{
    ASOB_CP_position_corrections_struct_position position;
} ASOB_CP_position_corrections_struct;

typedef ASOB_CP_position_corrections_struct ASOB_PP2CP_mc_data_struct_corrections[0x2];

typedef struct
{
    ASXAxMCxPWQ_periodic_wq_struct wq;
    ASOB_PP2CP_mc_data_struct_corrections corrections;
} ASOB_PP2CP_mc_data_struct;

typedef ASOB_CP_position_corrections_struct ASOB_PL2PP_mc_data_struct_corrections[0x2];

typedef struct
{
    bool settle_ws_enabled;
    ASXAxMC_scan_data_struct scan_data;
    ASXAxMC_AGC_settle_time_struct AGC_settle_time;
    ASXAxMCxPWQ_periodic_wq_struct wq;
    ASOB_PL2PP_mc_data_struct_corrections corrections;
} ASOB_PL2PP_mc_data_struct;

typedef bool ASOB_PL2PP_physical_data_struct_recipe_used_colors[0x4];

typedef struct
{
    ASOB_oblique_fit_spec_struct fit_spec;
    ASOB_PL2PP_physical_data_struct_recipe_used_colors recipe_used_colors;
} ASOB_PL2PP_physical_data_struct;

typedef bool ASOB_PL2CL_mark_info_struct_order_mapping[0x7];

typedef double ASOB_PL2CL_mark_info_struct_angle[0x2];

typedef double ASOB_PL2CL_mark_info_struct_base_period[0x2];

typedef struct
{
    ASXA_DIR_ENUM scan_direction;
    ASOB_PL2CL_mark_info_struct_order_mapping order_mapping;
    ASOB_PL2CL_mark_info_struct_angle angle;
    ASOB_PL2CL_mark_info_struct_base_period base_period;
} ASOB_PL2CL_mark_info_struct;

typedef struct
{
    ASXAxMC_signal_struct signal;
} ASOB_PL2CL_mc_data_struct;



#endif // _ASOB_TC_H_
