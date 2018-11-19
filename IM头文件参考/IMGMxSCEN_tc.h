/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMGMxSCEN
* 文件名称 : IMGMxSCEN_tc.h
* 概要描述 :
*	IM组件IMGMxSCEN数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMGMxSCEN_TC_H_
#define _IMGMxSCEN_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <IMGM_tc.h> 
#include <TTXAxSCEN_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    TTXAxSCEN_scenario_header_struct scenario_header;
    IMGM_input_struct inputs;
    IMGM_verification_struct valids;
} IMGMxSCEN_root_scenario;

typedef struct
{
    TTXAxSCEN_scenario_header_struct scenario_header;
    IMGM_input_struct inputs;
    IMGM_verification_struct final;
    IMGM_verification_struct setup;
} IMGMxSCEN_root_verification_scenario;



#endif // _IMGMxSCEN_TC_H_
