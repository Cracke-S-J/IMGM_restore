/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMGMxSCHED
* 文件名称 : IMGMxSCHED_tc.h
* 概要描述 :
*	IM组件IMGMxSCHED数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMGMxSCHED_TC_H_
#define _IMGMxSCHED_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <WPxCHUCK_tc.h> 
#include <base.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    IMGMxSCHED_MEAS_DIR_X = 0,
    IMGMxSCHED_MEAS_DIR_Y = 1,
} IMGMxSCHED_MEAS_direction;

typedef enum
{
    IMGMxSCHED_MEAS_TYPE_BULK = 0,
    IMGMxSCHED_MEAS_TYPE_HTRE_E1_X_O = 1,
    IMGMxSCHED_MEAS_TYPE_HTRE_E1_Y_O = 2,
    IMGMxSCHED_MEAS_TYPE_HTRE_E2_X_O = 3,
    IMGMxSCHED_MEAS_TYPE_HTRE_E2_Y_O = 4,
    IMGMxSCHED_MEAS_TYPE_HTRE_E3_X_O = 5,
    IMGMxSCHED_MEAS_TYPE_HTRE_E3_Y_O = 6,
    IMGMxSCHED_MEAS_TYPE_HTRE_E4_X_O = 7,
    IMGMxSCHED_MEAS_TYPE_HTRE_E4_Y_O = 8,
    IMGMxSCHED_MEAS_TYPE_HTRE_M1_X_O = 9,
    IMGMxSCHED_MEAS_TYPE_HTRE_M1_Y_O = 10,
    IMGMxSCHED_MEAS_TYPE_HTRE_M2_X_O = 11,
    IMGMxSCHED_MEAS_TYPE_HTRE_M2_Y_O = 12,
    IMGMxSCHED_MEAS_TYPE_HTRE_M3_X_O = 13,
    IMGMxSCHED_MEAS_TYPE_HTRE_M3_Y_O = 14,
    IMGMxSCHED_MEAS_TYPE_HTRE_M4_X_O = 15,
    IMGMxSCHED_MEAS_TYPE_HTRE_M4_Y_O = 16,
    IMGMxSCHED_MEAS_TYPE_HTRE_E1_X_I = 17,
    IMGMxSCHED_MEAS_TYPE_HTRE_E1_Y_I = 18,
    IMGMxSCHED_MEAS_TYPE_HTRE_E2_X_I = 19,
    IMGMxSCHED_MEAS_TYPE_HTRE_E2_Y_I = 20,
    IMGMxSCHED_MEAS_TYPE_HTRE_E3_X_I = 21,
    IMGMxSCHED_MEAS_TYPE_HTRE_E3_Y_I = 22,
    IMGMxSCHED_MEAS_TYPE_HTRE_E4_X_I = 23,
    IMGMxSCHED_MEAS_TYPE_HTRE_E4_Y_I = 24,
    IMGMxSCHED_MEAS_TYPE_HTRE_M1_X_I = 25,
    IMGMxSCHED_MEAS_TYPE_HTRE_M1_Y_I = 26,
    IMGMxSCHED_MEAS_TYPE_HTRE_M2_X_I = 27,
    IMGMxSCHED_MEAS_TYPE_HTRE_M2_Y_I = 28,
    IMGMxSCHED_MEAS_TYPE_HTRE_M3_X_I = 29,
    IMGMxSCHED_MEAS_TYPE_HTRE_M3_Y_I = 30,
    IMGMxSCHED_MEAS_TYPE_HTRE_M4_X_I = 31,
    IMGMxSCHED_MEAS_TYPE_HTRE_M4_Y_I = 32,
    IMGMxSCHED_MEAS_TYPE_HTRE_P = 33,
    IMGMxSCHED_MEAS_TYPE_HTRE_N = 34,
} IMGMxSCHED_MEAS_type;

typedef enum
{
    IMGMxSCHED_PROCESS_NONE = 0,
    IMGMxSCHED_PROCESS_1D_LINES = 1,
    IMGMxSCHED_PROCESS_1D_2D_LINES = 2,
    IMGMxSCHED_PROCESS_MAKE_MAPS = 3,
    IMGMxSCHED_PROCESS_DOWNLOAD_MAPS = 4,
} IMGMxSCHED_PROCESS_action;

typedef xyvect IMGMxSCHED_MEAS_plate_p[0x6];

typedef struct
{
    bool store_enc;
    int nr_points;
    IMGMxSCHED_MEAS_plate_p p;
} IMGMxSCHED_MEAS_plate;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    WPxCHUCK_chuck_func_enum chuck_func;
    bool use_wafers;
    bool use_logistics;
} IMGMxSCHED_MEAS_simple_elem;

typedef IMGMxSCHED_MEAS_plate IMGMxSCHED_MEAS_elem_plates[0x4];

typedef struct
{
    IMGMxSCHED_MEAS_direction direction;
    WPxCHUCK_chuck_id_enum chuck_id;
    WPxCHUCK_chuck_func_enum chuck_func;
    bool use_wafers;
    bool use_logistics;
    IMGMxSCHED_MEAS_type type;
    int nr_repetitions;
    int frequency_divider;
    int max_line_retries;
    bool abort_on_error;
    bool do_inline_processing;
    IMGMxSCHED_PROCESS_action postprocess;
    xyvect left_bottom;
    xyvect right_top;
    bool scan_up;
    bool scans_moving_up;
    double settle_time;
    double max_speed;
    double max_accel;
    double max_jerk;
    double const_z;
    double const_rx;
    double const_ry;
    double const_rz;
    double pitch;
    double aa_filter;
    bool use_lbw_cog_controller;
    double htre_weld;
    double htre_xf8_p;
    double htre_xf8_n;
    int hfmap_version;
    int nr_scans;
    double predicted_duration;
    IMGMxSCHED_MEAS_elem_plates plates;
} IMGMxSCHED_MEAS_elem;

typedef IMGMxSCHED_MEAS_simple_elem IMGMxSCHED_MEAS_simple_single_list_list[0x2];

typedef struct
{
    int nr_list;
    bool already_done;
    IMGMxSCHED_MEAS_simple_single_list_list list;
} IMGMxSCHED_MEAS_simple_single_list;

typedef IMGMxSCHED_MEAS_elem IMGMxSCHED_MEAS_single_list_list[0x2];

typedef struct
{
    int nr_list;
    bool already_done;
    IMGMxSCHED_MEAS_single_list_list list;
} IMGMxSCHED_MEAS_single_list;

typedef IMGMxSCHED_MEAS_simple_elem IMGMxSCHED_MEAS_simple_list_act[0x48];

typedef struct
{
    int nr_act;
    IMGMxSCHED_MEAS_simple_list_act act;
} IMGMxSCHED_MEAS_simple_list;

typedef IMGMxSCHED_MEAS_elem IMGMxSCHED_MEAS_list_act[0x48];

typedef struct
{
    int nr_act;
    IMGMxSCHED_MEAS_list_act act;
} IMGMxSCHED_MEAS_list;

typedef IMGMxSCHED_MEAS_simple_list IMGMxSCHED_MEAS_simple_config_list[0x2];

typedef struct
{
    int nr_list;
    IMGMxSCHED_MEAS_simple_config_list list;
} IMGMxSCHED_MEAS_simple_config;

typedef IMGMxSCHED_MEAS_list IMGMxSCHED_MEAS_config_list[0x2];

typedef struct
{
    int nr_list;
    IMGMxSCHED_MEAS_config_list list;
} IMGMxSCHED_MEAS_config;



#endif // _IMGMxSCHED_TC_H_
