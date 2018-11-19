/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMRCxTC
* 文件名称 : IMRCxTC_tc.h
* 概要描述 :
*	IM组件IMRCxTC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMRCxTC_TC_H_
#define _IMRCxTC_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    double lower_limit;
    double upper_limit;
} IMRCxTC_limits_struct;

typedef struct
{
    double Fstart;
    double Fend;
    double CoarseStep;
    double FineStep;
    double Acurrent;
} IMRCxTC_resSearch_struct;

typedef struct
{
    double Astart;
    double Amax;
    double Astep;
    int MinMove;
    double delay_before_ampsrch;
} IMRCxTC_ampSearch_struct;

typedef struct
{
    double delay_after_cal;
    double delay_for_dig_cal;
    double sin_gain_lower_limit;
    double sin_gain_upper_limit;
    double cos_gain_lower_limit;
    double cos_gain_upper_limit;
    double sin_offset_lower_limit;
    double sin_offset_upper_limit;
    double cos_offset_lower_limit;
    double cos_offset_upper_limit;
    double phase_lower_limit;
    double phase_upper_limit;
} IMRCxTC_calibr_struct;

typedef struct
{
    double delay_before_meas;
    double lissa_radius_mean;
    double lissa_radius_mean_range;
    double lissa_radius_range;
    double lissa_radius_stdev;
} IMRCxTC_lissajous_struct;

typedef struct
{
    double start_frequency;
    double stop_frequency;
    double level_fraction;
    double min_peak_frequency;
} IMRCxTC_dynamics_sensor_struct;

typedef IMRCxTC_dynamics_sensor_struct IMRCxTC_dynamics_sensor_struct_array[0x5];

typedef struct
{
    IMRCxTC_limits_struct limits;
    IMRCxTC_resSearch_struct resSearch;
    IMRCxTC_ampSearch_struct ampSearch;
    IMRCxTC_calibr_struct calibr;
    IMRCxTC_lissajous_struct lissajous_check;
} IMRCxTC_tc_struct;



#endif // _IMRCxTC_TC_H_
