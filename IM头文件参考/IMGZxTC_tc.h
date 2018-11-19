/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMGZxTC
* 文件名称 : IMGZxTC_tc.h
* 概要描述 :
*	IM组件IMGZxTC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMGZxTC_TC_H_
#define _IMGZxTC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <base.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    int delay_before_measurement;
    int measure_time;
    double limit;
    int retries;
} IMGZxTC_am_meas_struct;

typedef bool IMGZxTC_tc_struct_doGridPlate[0x4];

typedef bool IMGZxTC_tc_struct_doRefMark[0x2];

typedef struct
{
    double Dx;
    double Dy;
    double Delta;
    int QualityThreshold;
    double SearchRange;
    double SearchStep;
    int max_nr_of_retries;
    bool use_scan;
    bool initDrivers;
    bool doAMstabilityCheck;
    bool doSignalCalibration;
    bool use_hf_offset_fix;
    bool extended_tracing;
    bool restore_dry;
    bool memory_dump_on_error;
    bool memory_dump_on_low_q;
    double settle_time;
    xyzvect tilt_setpoint;
    double SignalStrengthLength;
    double scan_runout_length;
    IMGZxTC_tc_struct_doGridPlate doGridPlate;
    IMGZxTC_tc_struct_doRefMark doRefMark;
    double cond_numb_max;
    double limit_min_sv;
    IMGZxTC_am_meas_struct am_measure;
} IMGZxTC_tc_struct;



#endif // _IMGZxTC_TC_H_
