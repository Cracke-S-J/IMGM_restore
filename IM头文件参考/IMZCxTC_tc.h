/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMZCxTC
* 文件名称 : IMZCxTC_tc.h
* 概要描述 :
*	IM组件IMZCxTC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMZCxTC_TC_H_
#define _IMZCxTC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <base.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    int x;
    int y;
    int rz;
    int z;
    int rx;
    int ry;
} IMZCxTC_gain_nbr_intervals_struct;

typedef struct
{
    double threshold_ux;
} IMZCxTC_gain_fit_quality_struct;

typedef struct
{
    double max_u_sub_v_voltage;
    double hard_min_avg_volt_psd9;
    double soft_min_avg_volt_psd9;
    double soft_max_avg_volt_psd9;
    double hard_max_avg_volt_psd9;
    double real_min_voltage;
    double real_max_voltage;
    double baseframe_box_x;
    double baseframe_box_y;
    double volt2meter_gain;
} IMZCxTC_check_const_struct;

typedef struct
{
    horvervect gain_move_box;
    IMZCxTC_gain_nbr_intervals_struct gain_nbr_intervals;
    IMZCxTC_gain_fit_quality_struct gain_fit_quality;
    IMZCxTC_check_const_struct check;
    bool init_drivers;
    bool use_tc_stage_zero_position;
    horvervect stage_zero_position;
    double max_offset_betw_mc_anc_cm;
} IMZCxTC_psd_struct;

typedef struct
{
    IMZCxTC_psd_struct psd;
} IMZCxTC_tc_struct;



#endif // _IMZCxTC_TC_H_
