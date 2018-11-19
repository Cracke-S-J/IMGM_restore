/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMGMxSCAN
* 文件名称 : IMGMxSCAN_tc.h
* 概要描述 :
*	IM组件IMGMxSCAN数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMGMxSCAN_TC_H_
#define _IMGMxSCAN_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/
#define IMGMxSCAN_MI_FREQ 	 0x4E20 



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    double x;
} IMGMxSCAN_setpoint_struct;

typedef struct
{
    int len;
    int max_len;
    IMGMxSCAN_setpoint_struct* array;
} IMGMxSCAN_setpoint_vararray;

typedef struct
{
    double v_max;
    double a_max;
    double j_max;
} IMGMxSCAN_motion_struct;



#endif // _IMGMxSCAN_TC_H_
