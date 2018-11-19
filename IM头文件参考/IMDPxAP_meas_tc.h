/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMDPxAP_meas
* 文件名称 : IMDPxAP_meas_tc.h
* 概要描述 :
*	IM组件IMDPxAP_meas数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMDPxAP_meas_TC_H_
#define _IMDPxAP_meas_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <IMXTxDPS_tc.h> 
#include <IMXTxTR_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef IMXTxTR_trace_buffer_t IMDPxAP_meas_offset_t_DPS[0x6];

typedef struct
{
    IMDPxAP_meas_offset_t_DPS DPS;
    bool is_executed;
} IMDPxAP_meas_offset_t;

typedef IMXTxTR_trace_buffer_t IMDPxAP_meas_gain_lh_t_low[0x7];

typedef IMXTxTR_trace_buffer_t IMDPxAP_meas_gain_lh_t_high[0x7];

typedef struct
{
    IMDPxAP_meas_gain_lh_t_low low;
    IMDPxAP_meas_gain_lh_t_high high;
} IMDPxAP_meas_gain_lh_t;

typedef struct
{
    int len;
    int max_len;
    IMDPxAP_meas_gain_lh_t* array;
} IMDPxAP_meas_gain_arr;

typedef IMXTxTR_trace_buffer_t IMDPxAP_meas_gain_t_low0[0x7];

typedef struct
{
    IMDPxAP_meas_gain_t_low0 low0;
    IMDPxAP_meas_gain_arr measurement;
    bool is_executed;
} IMDPxAP_meas_gain_t;

typedef IMXTxTR_trace_buffer_t IMDPxAP_meas_noise_DPS_t_trace[0x6];

typedef struct
{
    IMDPxAP_meas_noise_DPS_t_trace trace;
} IMDPxAP_meas_noise_DPS_t;

typedef struct
{
    int len;
    int max_len;
    IMDPxAP_meas_noise_DPS_t* array;
} IMDPxAP_meas_noise_DPS_arr;

typedef IMXTxTR_trace_buffer_t IMDPxAP_meas_noise_t_barometer_data[0x7];

typedef struct
{
    IMDPxAP_meas_noise_t_barometer_data barometer_data;
    IMDPxAP_meas_noise_DPS_arr DPS_measurement;
    bool is_executed;
} IMDPxAP_meas_noise_t;

typedef IMXTxTR_trace_buffer_t IMDPxAP_meas_time_const_t_Pa[0x1];

typedef struct
{
    IMDPxAP_meas_time_const_t_Pa Pa;
    double P0;
    bool is_executed;
} IMDPxAP_meas_time_const_t;

typedef IMXTxTR_trace_buffer_t IMDPxAP_meas_DPS2lens_t_trace[0x7];

typedef struct
{
    double lens_pressure;
    double lens_over_pressure;
    IMDPxAP_meas_DPS2lens_t_trace trace;
    bool is_executed;
} IMDPxAP_meas_DPS2lens_t;

typedef struct
{
    IMDPxAP_meas_offset_t offset;
    IMDPxAP_meas_gain_t gain;
    IMDPxAP_meas_noise_t noise;
    IMDPxAP_meas_time_const_t time_const;
    IMDPxAP_meas_DPS2lens_t dps_to_lens;
} IMDPxAP_meas_calib_data_t;

typedef struct
{
    double P0;
    double P1;
    double P2;
    bool is_executed;
} IMDPxAP_meas_leak_test_t;

typedef IMXTxTR_trace_buffer_t IMDPxAP_meas_ws_acc_sens_trace_t_trace[0x7];

typedef struct
{
    IMDPxAP_meas_ws_acc_sens_trace_t_trace trace;
    IMXTxDPS_sensor_enum sensor;
} IMDPxAP_meas_ws_acc_sens_trace_t;

typedef IMDPxAP_meas_ws_acc_sens_trace_t IMDPxAP_meas_WSacc_sensitivity_t_move_near_sensor[0x6];

typedef struct
{
    IMDPxAP_meas_WSacc_sensitivity_t_move_near_sensor move_near_sensor;
    bool is_executed;
} IMDPxAP_meas_WSacc_sensitivity_t;



#endif // _IMDPxAP_meas_TC_H_
