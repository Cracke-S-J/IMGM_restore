/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMDPxAP_sim
* 文件名称 : IMDPxAP_sim_tc.h
* 概要描述 :
*	IM组件IMDPxAP_sim数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMDPxAP_sim_TC_H_
#define _IMDPxAP_sim_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <IMDPxAP_meas_tc.h> 
#include <IMDPxDC_tc.h> 
#include <IMDPxAP_input_tc.h> 
#include <IMXTxDD_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    IMXTxDD_machine_info_t machine_info;
    IMDPxAP_input_struct input;
    IMDPxDC_dc_struct design_constant;
} IMDPxAP_sim_header_t;

typedef struct
{
    IMDPxAP_sim_header_t header;
    IMDPxAP_meas_calib_data_t calibration;
    IMDPxAP_meas_leak_test_t leak_test;
    IMDPxAP_meas_WSacc_sensitivity_t WSacc_sensitivity;
} IMDPxAP_sim_data_t;



#endif // _IMDPxAP_sim_TC_H_
