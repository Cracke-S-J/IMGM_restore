/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMDPxTC
* 文件名称 : IMDPxTC_tc.h
* 概要描述 :
*	IM组件IMDPxTC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMDPxTC_TC_H_
#define _IMDPxTC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <IMDPxSC_tc.h> 
#include <IMDPxDC_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef char IMDPxTC_general_matlab_struct_exec[0x100];

typedef char IMDPxTC_general_matlab_struct_TSWD_in[0x100];

typedef char IMDPxTC_general_matlab_struct_TSWD_out[0x100];

typedef struct
{
    IMDPxTC_general_matlab_struct_exec exec;
    IMDPxTC_general_matlab_struct_TSWD_in TSWD_in;
    IMDPxTC_general_matlab_struct_TSWD_out TSWD_out;
} IMDPxTC_general_matlab_struct;

typedef struct
{
    bool write_binary;
    IMDPxTC_general_matlab_struct matlab;
} IMDPxTC_general_struct;

typedef struct
{
    IMDPxTC_general_struct general;
    IMDPxDC_dc_struct design_const;
    IMDPxSC_root_scenario_t scen0;
    IMDPxSC_root_scenario_t scen1;
} IMDPxTC_tc_struct;



#endif // _IMDPxTC_TC_H_
