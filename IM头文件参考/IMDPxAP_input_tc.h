/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMDPxAP_input
* 文件名称 : IMDPxAP_input_tc.h
* 概要描述 :
*	IM组件IMDPxAP_input数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMDPxAP_input_TC_H_
#define _IMDPxAP_input_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <IMXTxDPS_tc.h> 
#include <base.h> 
#include <IMDP_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    bool gain;
    bool offset;
    bool noise;
    bool time_const;
    bool dps2lens;
    bool leak_test;
    bool WSacc_sensitivity;
} IMDPxAP_input_main_exec_t;

typedef struct
{
    bool do_offset_calibration;
    bool do_gain_calibration;
    bool do_check_time_constants;
    bool do_noise;
    bool do_compare_dps_to_lens;
    bool do_leak_test;
    bool do_WS_acc_test;
    IMDPxAP_input_main_exec_t execute;
} IMDPxAP_input_main_input_t;

typedef char IMDPxAP_input_adv_diag_t_filename[0x100];

typedef struct
{
    bool enable;
    IMDPxAP_input_adv_diag_t_filename filename;
} IMDPxAP_input_adv_diag_t;

typedef struct
{
    IMDPxAP_input_adv_diag_t simulation;
    IMDPxAP_input_adv_diag_t diagnose;
    IMDPxAP_input_adv_diag_t TSWDfile;
    IMDP_WS_chuck_enum WSacc_chuck;
    IMDP_WS_chuck_enum chuck_to_expose;
    horvervect chuck_position;
    IMXTxDPS_sensor_arr sensor_enable;
} IMDPxAP_input_adv_input_t;

typedef struct
{
    IMDPxAP_input_main_input_t main;
    IMDPxAP_input_adv_input_t adv;
} IMDPxAP_input_struct;



#endif // _IMDPxAP_input_TC_H_
