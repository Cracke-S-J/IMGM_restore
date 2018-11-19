/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : ASDP
* 文件名称 : ASDP_tc.h
* 概要描述 :
*	AS组件ASDP数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ASDP_TC_H_
#define _ASDP_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <ASXA_tc.h> 
#include <MDXAxAS_tc.h> 
#include <SFXA_tc.h> 
#include <ASXAxMC_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef double ASDP_dual_periodic_wq_ord_struct_wq_nf[0x4];

typedef struct
{
    ASDP_dual_periodic_wq_ord_struct_wq_nf wq_nf;
} ASDP_dual_periodic_wq_ord_struct;

typedef struct
{
    ASXAxMC_scan_data_struct scan_data;
    ASDP_dual_periodic_wq_ord_struct wq;
    bool settle_ws_enabled;
} ASDP_dual_periodic_mc_data_struct;

typedef struct
{
    SFXA_order_enum order_idx;
    double shift;
} ASDP_dual_period_fit_order_struct;

typedef struct
{
    bool enable;
    double MCC_threshold;
    ASDP_dual_period_fit_order_struct inner_order;
    ASDP_dual_period_fit_order_struct outer_order;
} ASDP_dual_period_fit_color_struct;

typedef ASDP_dual_period_fit_color_struct ASDP_dual_period_fit_input_struct_color_array[0x4];

typedef struct
{
    ASDP_dual_period_fit_input_struct_color_array color_array;
    MDXAxAS_fit_type_enum fit_type;
    double hilbert_bandwidth;
    double final_o2o_threshold;
    double base_period;
} ASDP_dual_period_fit_input_struct;

typedef bool ASDP_physical_data_struct_recipe_used_colors[0x4];

typedef struct
{
    ASDP_physical_data_struct_recipe_used_colors recipe_used_colors;
} ASDP_physical_data_struct;

typedef struct
{
    SFXA_order_enum order_idx;
    ASXA_STATUS_ENUM fit_status;
    double position;
    double MCC;
    double WQ;
} ASDP_fit_order_result_struct;

typedef struct
{
    bool enabled;
    double WQ_combi;
    ASDP_fit_order_result_struct inner_order;
    ASDP_fit_order_result_struct outer_order;
} ASDP_fit_color_result_struct;

typedef ASDP_fit_color_result_struct ASDP_fit_result_struct_color_array[0x4];

typedef struct
{
    ASXA_DIR_ENUM direction;
    ASDP_fit_result_struct_color_array color_array;
} ASDP_fit_result_struct;

typedef struct
{
    double position;
    double WQ;
} ASDP_zc_order_diag_struct;

typedef struct
{
    ASXA_ZC_STATUS_ENUM status;
    double MCC;
    double WQ_combi;
    double order2order_distance;
    ASDP_zc_order_diag_struct inner_order;
    ASDP_zc_order_diag_struct outer_order;
} ASDP_zc_list_diag_struct;

typedef ASDP_zc_list_diag_struct ASDP_zc_color_diag_struct_zero_crossing_list[0xA];

typedef struct
{
    bool enabled;
    int nr_of_zero_crossings;
    double used_MCC_threshold;
    double used_o2o_threshold;
    ASDP_zc_color_diag_struct_zero_crossing_list zero_crossing_list;
} ASDP_zc_color_diag_struct;

typedef ASDP_zc_color_diag_struct ASDP_zc_diag_struct_color_array[0x4];

typedef struct
{
    ASXA_DIR_ENUM direction;
    ASDP_zc_diag_struct_color_array color_array;
} ASDP_zc_diag_struct;



#endif // _ASDP_TC_H_
