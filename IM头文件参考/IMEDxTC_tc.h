/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMEDxTC
* 文件名称 : IMEDxTC_tc.h
* 概要描述 :
*	IM组件IMEDxTC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMEDxTC_TC_H_
#define _IMEDxTC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <AMXAxSTAB_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    double adc_limit;
    double hybrid_limit;
    double laser_limit;
} IMEDxTC_herb_temperature_limits;

typedef struct
{
    double pos_5v_min;
    double pos_5v_max;
    double neg_5v_min;
    double neg_5v_max;
} IMEDxTC_herb_power_limits;

typedef struct
{
    double laser_min;
    double laser_max;
} IMEDxTC_herb_laser_limits;

typedef struct
{
    IMEDxTC_herb_temperature_limits temperature_limits;
    IMEDxTC_herb_power_limits power_limits;
    IMEDxTC_herb_laser_limits laser_limits;
} IMEDxTC_herb_constants;

typedef struct
{
    double signal_min;
    double signal_unexp_max;
    double signal_quality_min;
} IMEDxTC_fiber_constants;

typedef struct
{
    double signal_quality_min;
    double head_efficiency_min;
    double laser_power_min;
    double laser_power_max;
    double signal_min;
    double radius_min;
    int nr_trace_points;
} IMEDxTC_signal_constants;

typedef struct
{
    double vel;
    double acc;
    double jerk;
} IMEDxTC_move_constants;

typedef struct
{
    double acc_X;
    double jerk_X;
    double acc_Y;
    double jerk_Y;
    double acc_Rz;
    double jerk_Rz;
    double acc_Rx;
    double jerk_Rx;
    double acc_Ry;
    double jerk_Ry;
    double vel_X;
    double vel_Y;
    double vel_Rz;
    double vel_Z;
    double vel_Rx;
    double vel_Ry;
} IMEDxTC_debug_move_profile;

typedef struct
{
    double max_x;
    double max_y;
    double radius_min;
    double refmark_radius_min;
    double refmark_begin_pos;
} IMEDxTC_full_constants;

typedef struct
{
    double rx_y1;
    double rx_y2;
    double rx_x1;
    double ry_y1;
    double ry_y2;
    double ry_x1;
    double rz_y1;
    double rz_y2;
    double rz_x1;
    double max_Rxy;
    double max_Rz;
} IMEDxTC_head_constants;

typedef struct
{
    IMEDxTC_move_constants x;
    IMEDxTC_move_constants y;
} IMEDxTC_reliab_constants;

typedef struct
{
    IMEDxTC_move_constants x;
    IMEDxTC_move_constants y;
} IMEDxTC_memory_constants;

typedef double IMEDxTC_reference_constants_quality_limit[0x4];

typedef struct
{
    IMEDxTC_reference_constants_quality_limit quality_limit;
} IMEDxTC_reference_constants;

typedef struct
{
    double quality_limit;
    double radius_limit;
} IMEDxTC_comp_map_constants;

typedef struct
{
    double min_no_calibration;
    double max_no_calibration;
    double min_x;
    double max_x;
    double min_y1;
    double max_y1;
    double min_y2;
    double max_y2;
} IMEDxTC_displacements_constants;

typedef struct
{
    IMEDxTC_herb_constants herb;
    IMEDxTC_fiber_constants fiber;
    IMEDxTC_signal_constants signal;
    IMEDxTC_full_constants full;
    IMEDxTC_head_constants head;
    IMEDxTC_reference_constants reference;
    IMEDxTC_reliab_constants reliab;
    AMXAxSTAB_test_const_struct am_limits;
    IMEDxTC_memory_constants memory;
    IMEDxTC_debug_move_profile debug_move_profile;
    IMEDxTC_comp_map_constants comp_map;
    IMEDxTC_displacements_constants displacements;
} IMEDxTC_test_constants;



#endif // _IMEDxTC_TC_H_
