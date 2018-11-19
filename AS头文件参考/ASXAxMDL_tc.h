/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : ASXAxMDL
* 文件名称 : ASXAxMDL_tc.h
* 概要描述 :
*	AS组件ASXAxMDL数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ASXAxMDL_TC_H_
#define _ASXAxMDL_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <SFXA_tc.h> 
#include <base.h> 
#include <MDXA_tc.h> 
#include <ASXAxSBO_tc.h> 
#include <WPxCHUCK_tc.h> 
#include <ASXA_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    ASXAxMDL_RED = 0,
    ASXAxMDL_GREEN = 1,
    ASXAxMDL_NIR = 2,
    ASXAxMDL_FIR = 3,
} ASXAxMDL_color_enum;

typedef enum
{
    ASXAxMDL_1 = 0,
    ASXAxMDL_2 = 1,
    ASXAxMDL_3 = 2,
    ASXAxMDL_4 = 3,
    ASXAxMDL_5 = 4,
    ASXAxMDL_6 = 5,
    ASXAxMDL_7 = 6,
} ASXAxMDL_order_enum;

typedef enum
{
    ASXAxMDL_SCAN_TYPE_PERIODIC = 0,
    ASXAxMDL_SCAN_TYPE_FAST_PERIODIC = 1,
    ASXAxMDL_SCAN_TYPE_TEMPLATE = 2,
    ASXAxMDL_SCAN_TYPE_ZIGZAG = 3,
    ASXAxMDL_SCAN_TYPE_MULTIPER = 4,
    ASXAxMDL_SCAN_TYPE_OBLIQUE = 5,
    ASXAxMDL_SCAN_TYPE_DUAL_PERIODIC = 6,
    ASXAxMDL_SCAN_TYPE_HIGH_PERF = 7,
} ASXAxMDL_scan_type_enum;

typedef struct
{
    int log_id;
    int scan_idx;
    bool best_scan;
    ASXA_DIR_ENUM direction;
    ASXA_PERIOD_ENUM period;
    bool recipe_color_enabled;
    ASXAxMDL_color_enum color;
    ASXAxMDL_order_enum order;
    double MCC;
    double WQ;
    double DC;
    double position;
    ASXA_PPOS_STATUS_ENUM pos_status;
    ASXA_PVAL_STATUS_ENUM val_status;
} ASXAxMDL_multi_per_physical_action_record_struct;

typedef struct
{
    int len;
    int max_len;
    ASXAxMDL_multi_per_physical_action_record_struct* array;
} ASXAxMDL_multi_per_result_var_array;

typedef struct
{
    int logical_action_id;
    WPxCHUCK_chuck_id_enum chuck_id;
    bool sbo_drift_successfully_updated;
    ASXAxSBO_sbo_chuck_struct sbo_drift;
} ASXAxMDL_sbo_drift_ilc_struct;

typedef struct
{
    bool custom_sbo_enabled;
} ASXAxMDL_fixed_data_struct;

typedef struct
{
    int logical_action_id;
    MDXA_mark_type_string mark_type;
    horvervect expected_pos;
    double dz_dx;
    double dz_dy;
    double mark_rotation;
    ASXA_CHUCK_ENUM chuck_id;
    ASXA_CARRIER_ENUM carrier_id;
    MDXA_alignment_step_enum alignment_step;
    ASXAxMDL_scan_type_enum scan_type;
} ASXAxMDL_scan_base_struct;

typedef enum
{
    ASXAxMDL_DP_SCAN_STATUS_SELECTED = 0,
    ASXAxMDL_DP_SCAN_STATUS_REJECTED_BY_BEST_SCAN_SELECTION = 1,
} ASXAxMDL_DP_SCAN_STATUS_ENUM;

typedef struct
{
    double wq_combi;
    double position;
    ASXA_PPOS_STATUS_ENUM pos_status;
    ASXA_PVAL_STATUS_ENUM val_status;
} ASXAxMDL_dual_periodic_color_scan_struct;

typedef ASXAxMDL_dual_periodic_color_scan_struct ASXAxMDL_dual_periodic_scan_struct_color[0x4];

typedef struct
{
    int lateral_scan_number;
    ASXAxMDL_dual_periodic_scan_struct_color color;
    ASXAxMDL_DP_SCAN_STATUS_ENUM status;
} ASXAxMDL_dual_periodic_scan_struct;

typedef ASXAxMDL_dual_periodic_scan_struct ASXAxMDL_dual_periodic_result_struct_scan_array[0x5];

typedef struct
{
    int nr_lateral_scans;
    ASXAxMDL_dual_periodic_result_struct_scan_array scan_array;
} ASXAxMDL_dual_periodic_result_struct;

typedef struct
{
    horvervect start_position;
    horvervect end_position;
    int oversample_factor;
    double scan_duration;
    SFXA_AGC_mode_enum AGC_mode;
    WPxCHUCK_chuck_id_enum chuck_id;
} ASXAxMDL_linear_scan_input_struct;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    horvervect WS_scan_pos;
    double meas_duration;
    double z_range;
} ASXAxMDL_static_scan_input_struct;



#endif // _ASXAxMDL_TC_H_
