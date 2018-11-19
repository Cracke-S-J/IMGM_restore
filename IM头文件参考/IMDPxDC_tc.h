/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMDPxDC
* 文件名称 : IMDPxDC_tc.h
* 概要描述 :
*	IM组件IMDPxDC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMDPxDC_TC_H_
#define _IMDPxDC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <TTXAxSCEN_tc.h> 
#include <base.h> 
//extern MIIFxVPxWS_MI_PRESSURE_UPDATE_RATE  2_OR_4_HZ  //258, 260
//extern MIIFxVPxWS_MI_PRESSURE_UPDATE_RATE  14_HZ  //258, 256
//extern MIIFxVPxWS_MI_PRESSURE_UPDATE_RATE  20_HZ  //258, 254
//extern MIIFxVPxWS_MI_PRESSURE_UPDATE_RATE  40_HZ  //258, 259



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    double t_noise_baro_trace;
    int n_dps_update_rate;
    int n_noise_dps_rep;
    double f_noise_dps_filter_freq;
} IMDPxDC_noise_t;

typedef struct
{
    double t_offset_trace;
} IMDPxDC_offset_t;

typedef struct
{
    double t_gain_trace;
    double t_gain_stab;
    int n_gain_rep;
    int n_gain_dev;
} IMDPxDC_gain_t;

typedef struct
{
    double t_baro_delay;
    double t_baro_update;
    double t_fast_deflate;
    double t_fast_fill;
    double t_switch;
} IMDPxDC_general_const_t;

typedef struct
{
    double t_RC_delta;
} IMDPxDC_time_const_t;

typedef struct
{
    double t_leak_settle;
} IMDPxDC_leak_test_t;

typedef struct
{
    double velocity;
    double acceleration;
    double jerk;
} IMDPxDC_WS_acc_sens_move_t;

typedef xyvect IMDPxDC_WS_acc_sens_t_centre_position[0x6];

typedef struct
{
    IMDPxDC_WS_acc_sens_move_t ws_move;
    double amplitude;
    int n_moves_rep;
    IMDPxDC_WS_acc_sens_t_centre_position centre_position;
} IMDPxDC_WS_acc_sens_t;

typedef struct
{
    IMDPxDC_general_const_t general;
    IMDPxDC_noise_t noise;
    IMDPxDC_offset_t offset;
    IMDPxDC_gain_t gain;
    IMDPxDC_time_const_t time_const;
    IMDPxDC_leak_test_t leak_test;
    IMDPxDC_WS_acc_sens_t ws_acc_sens;
} IMDPxDC_dc_struct;

typedef struct
{
    double min;
    double max;
} IMDPxDC_min_max_t;

typedef struct
{
    double max_barometer;
    double max_DPS_filtered;
    double min_DPS_indiv;
} IMDPxDC_spec_noise_t;

typedef struct
{
    IMDPxDC_min_max_t DPS;
} IMDPxDC_spec_offset_t;

typedef struct
{
    IMDPxDC_min_max_t DPS;
    double max_delta;
    double max_std;
    IMDPxDC_min_max_t overpressure_ves2;
} IMDPxDC_spec_gain_t;

typedef struct
{
    IMDPxDC_min_max_t RC_tau;
} IMDPxDC_spec_time_const_t;

typedef struct
{
    double max_difference;
} IMDPxDC_spec_dps2lens_t;

typedef struct
{
    double min_t_leak_tau;
} IMDPxDC_spec_leak_test_t;

typedef struct
{
    double min_acc_sensitivity;
} IMDPxDC_spec_WS_acc_sens_t;

typedef struct
{
    IMDPxDC_spec_offset_t offset;
    IMDPxDC_spec_gain_t gain;
    IMDPxDC_spec_noise_t noise;
    IMDPxDC_spec_time_const_t time_const;
    IMDPxDC_spec_dps2lens_t dps2lens;
    IMDPxDC_spec_leak_test_t leak_test;
    IMDPxDC_spec_WS_acc_sens_t ws_acc_sens;
} IMDPxDC_spec_struct;

typedef struct
{
    TTXAxSCEN_verification_type_enum verfication_type;
    IMDPxDC_spec_struct spec;
} IMDPxDC_verify_struct;



#endif // _IMDPxDC_TC_H_
