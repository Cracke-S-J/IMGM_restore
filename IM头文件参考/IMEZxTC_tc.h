/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMEZxTC
* 文件名称 : IMEZxTC_tc.h
* 概要描述 :
*	IM组件IMEZxTC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMEZxTC_TC_H_
#define _IMEZxTC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <QRRPxDF_tc.h> 
#include <RQRPxMCxRMZ_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    double enc_rz_rotation_y_distance;
    int enc_rz_rotation_nr_of_samples;
    RQRPxMCxRMZ_refmark_scale_enum lenstop_rz_refmark;
    double max_lenstop_rz;
    double max_enc_rz;
    double coarse_search_range_x;
    double coarse_search_range_y;
    double coarse_search_scanmove_x;
    double coarse_search_scanmove_y;
    double max_baseframe_repro_x;
    double max_baseframe_repro_y;
    int nr_of_samples_ma_filter_window;
    int nr_of_iterations_pref_set;
    int nr_of_iterations_position;
    int nr_of_iterations_parms;
    double peak_limit;
    double pa_limit;
    double pb_limit;
    double min_radius_peak;
    int min_max_radius_index;
    double max_a_shift;
    double max_x_shift_warning;
} IMEZxTC_zeroing_struct;

typedef struct
{
    int am_delay_before_measurement;
    int am_measure_time;
    double am_limit;
    int am_retries;
} IMEZxTC_meas_quality_struct;

typedef struct
{
    bool determineDiffSensorGainMatrix;
    bool replaceRsMcsWithTCValues;
    QRRPxDF_input_struct diff_cal;
    IMEZxTC_zeroing_struct zeroing;
    IMEZxTC_meas_quality_struct meas_quality;
} IMEZxTC_tc_struct;



#endif // _IMEZxTC_TC_H_
