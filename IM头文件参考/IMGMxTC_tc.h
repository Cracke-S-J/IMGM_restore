/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMGMxTC
* 文件名称 : IMGMxTC_tc.h
* 概要描述 :
*	IM组件IMGMxTC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMGMxTC_TC_H_
#define _IMGMxTC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <IMGMxSCEN_tc.h> 
#include <IMGMxDC_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    IMGMxDC_dc_struct dc_struct;
    IMGMxSCEN_root_scenario scenario_new_machine;
    IMGMxSCEN_root_verification_scenario scenario_manual;
    IMGMxSCEN_root_verification_scenario scenario_epa_m;
    IMGMxSCEN_root_verification_scenario scenario_epa_e;
} IMGMxTC_tc_struct;



#endif // _IMGMxTC_TC_H_
