/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMXTxTC
* 文件名称 : IMXTxTC_tc.h
* 概要描述 :
*	IM组件IMXTxTC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMXTxTC_TC_H_
#define _IMXTxTC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <IMXTxRCT_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    IMXTxTC_GRAPH_X_Y = 0,
    IMXTxTC_GRAPH_Z = 1,
    IMXTxTC_GRAPH_REF = 2,
    IMXTxTC_GRAPH_MAX = 3,
} IMXTxTC_graph_enum;

typedef double IMXTxTC_ifm_levels_struct_def_level[0x3];

typedef double IMXTxTC_ifm_levels_struct_low_level[0x3];

typedef struct
{
    IMXTxTC_ifm_levels_struct_def_level def_level;
    IMXTxTC_ifm_levels_struct_low_level low_level;
} IMXTxTC_ifm_levels_struct;

typedef struct
{
    IMXTxRCT_serial_settings serial;
    IMXTxRCT_settings rct;
    IMXTxTC_ifm_levels_struct ifm_levels;
} IMXTxTC_test_constants_struct;



#endif // _IMXTxTC_TC_H_
