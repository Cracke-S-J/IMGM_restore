/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMGMxDATA
* 文件名称 : IMGMxDATA_tc.h
* 概要描述 :
*	IM组件IMGMxDATA数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMGMxDATA_TC_H_
#define _IMGMxDATA_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <IMGMxFILTER_tc.h> 
#include <IMGMxSCAN_tc.h> 
#include <IMGMxSCHED_tc.h> 
#include <IMGMxTC_tc.h> 
#include <IMGM_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    instanceid TaskInstId;
    IMGM_input_struct input;
    IMGMxTC_tc_struct test_const;
    timestamp start_time;
} IMGMxDATA_calibration_settings_t;

typedef struct
{
    IMGMxSCHED_MEAS_elem measurement_element;
    timestamp start_time;
    IMGMxSCAN_setpoint_vararray setpoints;
} IMGMxDATA_area_settings_t;

typedef struct
{
    instanceid TaskInstId;
    instanceid AreaSettingsInstId;
} IMGMxDATA_area_settings_InstId_t;

typedef struct
{
    instanceid TaskInstId;
    instanceid AreaInstId;
    timestamp start_time;
    int counter;
} IMGMxDATA_line_settings_t;

typedef struct
{
    timestamp stop_time;
    int counter;
    bool valid;
    IMGMxFILTER_result_vararray data;
} IMGMxDATA_line_results_t;

typedef struct
{
    instanceid TaskInstId;
    instanceid AreaInstId;
    int counter;
    instanceid LineResultsInstId;
} IMGMxDATA_line_results_InstId_t;

typedef struct
{
    instanceid TaskInstId;
    instanceid AreaInstId;
    timestamp stop_time;
    bool valid;
    int nr_failed_lines;
    int nr_retries_performed;
} IMGMxDATA_area_results_t;

typedef struct
{
    instanceid TaskInstId;
    timestamp stop_time;
    IMGM_result_struct result;
} IMGMxDATA_calibration_results_t;



#endif // _IMGMxDATA_TC_H_
