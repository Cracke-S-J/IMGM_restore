/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMGMxPLAN
* 文件名称 : IMGMxPLAN_tc.h
* 概要描述 :
*	IM组件IMGMxPLAN数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMGMxPLAN_TC_H_
#define _IMGMxPLAN_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <DTXA.h> 
#include <WHxDEVICE_tc.h> 
#include <WPxCHUCK_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    IMGMxPLAN_ACT_SWAP = 0,
    IMGMxPLAN_ACT_LOAD = 1,
    IMGMxPLAN_ACT_UNLOAD = 2,
    IMGMxPLAN_ACT_ZERO = 3,
    IMGMxPLAN_ACT_APPROVE = 4,
} IMGMxPLAN_ACT_enum;

typedef struct
{
    IMGMxPLAN_ACT_enum action;
    WPxCHUCK_chuck_id_enum chuck_id;
    WPxCHUCK_chuck_func_enum chuck_func;
    WHxDEVICE_wafer_location_enum wafer_loc;
    DTXA_wafer_type wafer_type;
} IMGMxPLAN_ACT_struct;

typedef IMGMxPLAN_ACT_struct IMGMxPLAN_ACT_list_act[0xA];

typedef struct
{
    int nr_act;
    IMGMxPLAN_ACT_list_act act;
} IMGMxPLAN_ACT_list;



#endif // _IMGMxPLAN_TC_H_
