/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : ASMPD
* 文件名称 : ASMPD_tc.h
* 概要描述 :
*	AS组件ASMPD数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ASMPD_TC_H_
#define _ASMPD_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <ASPD_tc.h> 
#include <ASXA_tc.h> 
#include <MDXAxAS_tc.h> 
#include <ASXAxMCxPWQ_tc.h> 
#include <ASXAxSBO_tc.h> 
#include <ASXAxMC_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    ASXAxMC_signal_struct signal;
    ASXAxMC_scan_data_struct scan_data;
    ASXAxMC_mto_chuck_struct mto;
    ASXAxMC_AGC_settle_time_struct AGC_settle_time;
    ASXAxSBO_sbo_chuck_struct sbo;
    ASXAxMCxPWQ_periodic_wq_struct pwq;
} ASMPD_multi_per_mc_data_struct;

typedef bool ASMPD_logical_mark_segment_struct_coarse_grating[0x2][0x4];

typedef struct
{
    MDXAxAS_fit_type_enum fit_type;
    MDXAxAS_multi_per_segments_matrix mark_info;
    ASMPD_logical_mark_segment_struct_coarse_grating coarse_grating;
} ASMPD_logical_mark_segment_struct;

typedef struct
{
    bool enabled;
    ASXA_STATUS_ENUM fit_status;
    double dc_value;
    double amplitude;
    double position;
    double MCC;
    double WQ;
} ASMPD_fit_result_ord_struct;

typedef struct
{
    bool enabled;
    ASPD_fit_color_result_struct_order order;
} ASMPD_fit_result_col_struct;

typedef struct
{
    ASXA_DIR_ENUM direction;
    ASXA_SEGMENT_ENUM segment;
    ASPD_period_fit_result_struct_color color;
} ASMPD_fit_result_struct;

typedef struct
{
    bool enabled;
} ASMPD_fit_spec_ord_struct;

typedef struct
{
    bool enabled;
    ASPD_fit_color_struct_order order;
} ASMPD_fit_spec_col_struct;

typedef struct
{
    ASXA_DIR_ENUM direction;
    ASXA_SEGMENT_ENUM segment;
    ASPD_periodic_fit_spec_struct_color color;
} ASMPD_fit_spec_struct;



#endif // _ASMPD_TC_H_
