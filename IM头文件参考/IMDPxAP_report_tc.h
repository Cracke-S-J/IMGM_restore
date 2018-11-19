/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMDPxAP_report
* 文件名称 : IMDPxAP_report_tc.h
* 概要描述 :
*	IM组件IMDPxAP_report数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMDPxAP_report_TC_H_
#define _IMDPxAP_report_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <IMXTxDPS_tc.h> 
#include <IMDP_tc.h> 
#include <IMDPxDC_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    IMDPxAP_report_STEP_OFFSET = 0,
    IMDPxAP_report_STEP_GAIN = 1,
    IMDPxAP_report_STEP_TIMECONST = 2,
    IMDPxAP_report_STEP_DPS2LENS = 3,
    IMDPxAP_report_STEP_NOISE = 4,
    IMDPxAP_report_STEP_LEAK = 5,
    IMDPxAP_report_STEP_WSACC = 6,
} IMDPxAP_report_step_enum;

typedef char IMDPxAP_report_status_t_error_text[0x14];

typedef struct
{
    bool valid;
    IMDPxAP_report_status_t_error_text error_text;
} IMDPxAP_report_status_t;

typedef struct
{
    double value;
} IMDPxAP_report_row_t;

typedef char IMDPxAP_report_min_max_limit_t_str_result[0x8];

typedef struct
{
    double value;
    IMDPxDC_min_max_t limit;
    IMDPxAP_report_min_max_limit_t_str_result str_result;
} IMDPxAP_report_min_max_limit_t;

typedef char IMDPxAP_report_limit_t_str_result[0x8];

typedef struct
{
    double value;
    double limit;
    IMDPxAP_report_limit_t_str_result str_result;
} IMDPxAP_report_limit_t;

typedef char IMDPxAP_report_mc_t_str_result[0x8];

typedef struct
{
    double old;
    double value;
    double delta;
    IMDPxAP_report_mc_t_str_result str_result;
} IMDPxAP_report_mc_t;

typedef IMDPxAP_report_min_max_limit_t IMDPxAP_report_offset_calib_t_DPS[0x6];

typedef struct
{
    IMDPxAP_report_offset_calib_t_DPS DPS;
    IMDPxAP_report_status_t status;
} IMDPxAP_report_offset_calib_t;

typedef IMDPxAP_report_limit_t IMDPxAP_report_gain_std_DPS_t_DPS[0x6];

typedef struct
{
    IMDPxAP_report_gain_std_DPS_t_DPS DPS;
} IMDPxAP_report_gain_std_DPS_t;

typedef IMDPxAP_report_min_max_limit_t IMDPxAP_report_gain_calib_t_DPS[0x6];

typedef IMDPxAP_report_min_max_limit_t IMDPxAP_report_gain_calib_t_overpressure_ves2[0x2];

typedef IMDPxAP_report_min_max_limit_t IMDPxAP_report_gain_calib_t_delta_V_DPS[0x6];

typedef struct
{
    IMDPxAP_report_gain_calib_t_DPS DPS;
    IMDPxAP_report_gain_std_DPS_t std;
    IMDPxAP_report_gain_calib_t_overpressure_ves2 overpressure_ves2;
    IMDPxAP_report_gain_calib_t_delta_V_DPS delta_V_DPS;
    IMDPxAP_report_status_t status;
} IMDPxAP_report_gain_calib_t;

typedef bool IMDPxAP_report_summary_t_calib_step_valid[0x7];

typedef char IMDPxAP_report_summary_t_calib_step[0x7][0x14];

typedef IMDPxAP_report_mc_t IMDPxAP_report_summary_t_offset_mc[0x6];

typedef IMDPxAP_report_mc_t IMDPxAP_report_summary_t_gain_mc[0x6];

typedef struct
{
    IMDPxAP_report_summary_t_calib_step_valid calib_step_valid;
    IMDPxAP_report_summary_t_calib_step calib_step;
    IMDPxAP_report_summary_t_offset_mc offset_mc;
    IMDPxAP_report_summary_t_gain_mc gain_mc;
    bool meas_quality;
} IMDPxAP_report_summary_t;

typedef IMDPxAP_report_limit_t IMDPxAP_report_noise_filt_t_DPS[0x6];

typedef struct
{
    IMDPxAP_report_noise_filt_t_DPS DPS;
    double filter_frequency;
} IMDPxAP_report_noise_filt_t;

typedef IMDPxAP_report_limit_t IMDPxAP_report_noise_t_barometer[0x2];

typedef double IMDPxAP_report_noise_t_DPS_unfiltered[0x6];

typedef IMDPxAP_report_row_t IMDPxAP_report_noise_t_report_DPS_unfiltered[0x6];

typedef IMDPxAP_report_limit_t IMDPxAP_report_noise_t_DPS_indiv[0x6];

typedef struct
{
    IMDPxAP_report_noise_t_barometer barometer;
    IMDPxAP_report_noise_t_DPS_unfiltered DPS_unfiltered;
    IMDPxAP_report_noise_filt_t DPS_filtered;
    IMDPxAP_report_noise_t_report_DPS_unfiltered report_DPS_unfiltered;
    IMDPxAP_report_noise_t_DPS_indiv DPS_indiv;
    IMDPxAP_report_status_t status;
} IMDPxAP_report_noise_t;

typedef IMDPxAP_report_min_max_limit_t IMDPxAP_report_time_const_t_RC_tau[0x2];

typedef struct
{
    IMDPxAP_report_time_const_t_RC_tau RC_tau;
    IMDPxAP_report_status_t status;
} IMDPxAP_report_time_const_t;

typedef double IMDPxAP_report_dps2lens_t_pressure[0x2];

typedef IMDPxAP_report_limit_t IMDPxAP_report_dps2lens_t_difference[0x2];

typedef struct
{
    IMDPxAP_report_dps2lens_t_pressure pressure;
    IMDPxAP_report_dps2lens_t_difference difference;
    IMDPxAP_report_status_t status;
} IMDPxAP_report_dps2lens_t;

typedef IMDPxAP_report_limit_t IMDPxAP_report_leak_t_t_leak_tau[0x2];

typedef struct
{
    IMDPxAP_report_leak_t_t_leak_tau t_leak_tau;
    IMDPxAP_report_status_t status;
} IMDPxAP_report_leak_t;

typedef struct
{
    IMDPxAP_report_offset_calib_t offset;
    IMDPxAP_report_gain_calib_t gain;
} IMDPxAP_report_calib_result_t;

typedef struct
{
    IMDPxAP_report_time_const_t time_const;
    IMDPxAP_report_dps2lens_t dps_to_lens;
    IMDPxAP_report_noise_t noise;
} IMDPxAP_report_verify_result_t;

typedef double IMDPxAP_report_WSacc_sens_max_arr[0x6];

typedef double IMDPxAP_report_WSacc_sens_4_sensor_arr[0x4];

typedef IMDPxAP_report_WSacc_sens_4_sensor_arr IMDPxAP_report_WSacc_move_t_DPS4[0x4];

typedef IMDPxAP_report_WSacc_sens_max_arr IMDPxAP_report_WSacc_move_t_DPS6[0x6];

typedef struct
{
    IMDP_SENSOR_COUNT_ENUM element;
    int filler0;
    union
    {
        IMDPxAP_report_WSacc_move_t_DPS4 DPS4;
        IMDPxAP_report_WSacc_move_t_DPS6 DPS6;
    } spec;
} IMDPxAP_report_WSacc_move_t;

typedef char IMDPxAP_report_str_row_t_value[0x8];

typedef struct
{
    IMDPxAP_report_str_row_t_value value;
} IMDPxAP_report_str_row_t;

typedef IMDPxAP_report_WSacc_sens_max_arr IMDPxAP_report_WSacc_result_t_DPS[0x6];

typedef IMDPxAP_report_limit_t IMDPxAP_report_WSacc_result_t_diagonal[0x6];

typedef char IMDPxAP_report_WSacc_result_t_connection[0x6][0x8];

typedef IMDPxAP_report_str_row_t IMDPxAP_report_WSacc_result_t_report_connection[0x6];

typedef struct
{
    IMDPxAP_report_WSacc_result_t_DPS DPS;
    IMDPxAP_report_WSacc_move_t move_near_sensor;
    IMDPxAP_report_WSacc_result_t_diagonal diagonal;
    IMDPxAP_report_WSacc_result_t_connection connection;
    IMDPxAP_report_WSacc_result_t_report_connection report_connection;
    IMDPxAP_report_status_t status;
} IMDPxAP_report_WSacc_result_t;

typedef IMXTxDPS_sensor_enum IMDPxAP_report_struct_sensor_index[0x6];

typedef struct
{
    IMDPxAP_report_summary_t summary;
    IMDPxAP_report_calib_result_t calibration;
    IMDPxAP_report_verify_result_t verify;
    IMDPxAP_report_leak_t leak_test;
    IMDPxAP_report_WSacc_result_t WSacc_sensitivity;
    IMDP_scenario_enum scenario_name;
    IMDPxAP_report_status_t status;
    IMDPxAP_report_struct_sensor_index sensor_index;
} IMDPxAP_report_struct;



#endif // _IMDPxAP_report_TC_H_
