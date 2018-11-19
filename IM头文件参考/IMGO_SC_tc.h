/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMGO_SC
* 文件名称 : IMGO_SC_tc.h
* 概要描述 :
*	IM组件IMGO_SC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMGO_SC_TC_H_
#define _IMGO_SC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <IMGO_tc.h> 
#include <VIPRxSCEN_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    VIPRxSCEN_scenario_input_struct scen_input;
    IMGO_input_struct input;
    IMGO_verification_struct single;
} IMGO_SC_scenario_new_machine;

typedef struct
{
    VIPRxSCEN_scenario_input_struct scen_input;
    IMGO_input_struct input;
} IMGO_SC_scenario_manual;



#endif // _IMGO_SC_TC_H_
