/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMDPxSC
* 文件名称 : IMDPxSC_tc.h
* 概要描述 :
*	IM组件IMDPxSC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMDPxSC_TC_H_
#define _IMDPxSC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <IMDPxDC_tc.h> 
#include <IMDPxAP_input_tc.h> 
#include <TTXAxSCEN_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    TTXAxSCEN_scenario_header_struct scenario_header;
    IMDPxAP_input_struct input;
    IMDPxDC_verify_struct verify;
} IMDPxSC_root_scenario_t;



#endif // _IMDPxSC_TC_H_
