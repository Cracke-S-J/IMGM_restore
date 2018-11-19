/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : ASDT
* 文件名称 : ASDT_tc.h
* 概要描述 :
*	AS组件ASDT数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ASDT_TC_H_
#define _ASDT_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <base.h> 
#include <ASXA_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    ASDT_NO_AGC_LOCK = 0,
    ASDT_DEF_AGC_LOCK = 1,
    ASDT_SCAN_TIME_AGC_LOCK = 2,
} ASDT_agc_mode_enum;

typedef enum
{
    ASDT_WS_SETTLE_TIME_DEFAULT = 0,
    ASDT_WS_SETTLE_FAST = 1,
    ASDT_WS_SETTLE_HIGH_PERFORMANCE = 2,
} ASDT_WS_settle_time_enum;

typedef struct
{
    bool enabled;
    ASXA_DIR_ENUM scan_direction;
    ASXA_SCAN_SIGN_ENUM scan_sign;
    xyvect scan_offset;
    double scan_length;
    double scan_speed;
} ASDT_physical_segment_info_struct;

typedef struct
{
    horvervect ws_start_pos;
    horvervect ws_end_pos;
} ASDT_scan_spec_struct;

typedef struct
{
    int nr_of_samples;
    int trigger_pitch;
    double expected_sample_distance;
    double prep_time;
    double scan_time;
    int oversample_factor;
} ASDT_physical_data_struct;

typedef struct
{
    bool enabled;
    ASXA_SCAN_SIGN_ENUM scan_sign;
    xyvect sco;
    double sl;
    double ssf;
    ASDT_agc_mode_enum agc_mode;
} ASDT_PL2PP_physical_scan_data;

typedef struct
{
    int logical_action_id;
    int physical_action_id;
} ASDT_action_data_struct;



#endif // _ASDT_TC_H_
