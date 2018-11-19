/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMFC
* 文件名称 : IMFC_tc.h
* 概要描述 :
*	IM组件IMFC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMFC_TC_H_
#define _IMFC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <IMFCxAP_input_tc.h> 
#include <IMFCxAP_report_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    IMFCxAP_report_struct report;
    bool imfc_start_test;
    int imfc_update;
    bool imfc_save_mcs;
} IMFC_result_struct;

typedef struct
{
    IMFCxAP_input_struct input;
    IMFC_result_struct result;
} IMFC_data_struct;



#endif // _IMFC_TC_H_
