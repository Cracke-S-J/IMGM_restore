/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMZQxTC
* 文件名称 : IMZQxTC_tc.h
* 概要描述 :
*	IM组件IMZQxTC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMZQxTC_TC_H_
#define _IMZQxTC_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    int laser_settle_delay;
    double min_level_psd9;
    double max_level_psd9;
    double min_level_psd16;
    double max_level_psd16;
} IMZQxTC_dark_limits_struct;

typedef struct
{
    double min_level_psd9;
    double max_level_psd9;
    double min_level_psd16;
    double max_level_psd16;
} IMZQxTC_intensity_limits_struct;

typedef struct
{
    bool audio;
    double min_level_psd9;
    double max_level_psd9;
    double max_delta_psd9;
    double min_level_psd16;
    double max_level_psd16;
    double max_delta_psd16;
} IMZQxTC_electrical_limits_struct;

typedef struct
{
    int sample_interval;
    int nr_samples;
    double Cv_psd9;
    double Cv_psd16;
    double Lpsd;
} IMZQxTC_stability_limits_struct;

typedef struct
{
    IMZQxTC_dark_limits_struct dark_limits;
    IMZQxTC_intensity_limits_struct intensity_limits;
    IMZQxTC_electrical_limits_struct electrical_limits;
    IMZQxTC_stability_limits_struct stability_limits;
} IMZQxTC_tc_struct;



#endif // _IMZQxTC_TC_H_
