/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMGO_TC
* 文件名称 : IMGO_TC_tc.h
* 概要描述 :
*	IM组件IMGO_TC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMGO_TC_TC_H_
#define _IMGO_TC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <IMGO_SC_tc.h> 
#include <IMGO_DC_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    IMGO_DC_dc_struct dc_struct;
    IMGO_SC_scenario_new_machine new_machine_scenario;
    IMGO_SC_scenario_manual manual_scenario;
} IMGO_TC_tc_struct;



#endif // _IMGO_TC_TC_H_
