/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMCDxTC
* 文件名称 : IMCDxTC_tc.h
* 概要描述 :
*	IM组件IMCDxTC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMCDxTC_TC_H_
#define _IMCDxTC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <base.h> 
#include <AMXAxSTAB_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    double x_min;
    double x_max;
    double y_min;
    double y_max;
} IMCDxTC_pos_window;

typedef IMCDxTC_pos_window IMCDxTC_connect_constants_xy_lim[0x4];

typedef struct
{
    double delta_rx;
    double delta_ry;
    IMCDxTC_connect_constants_xy_lim xy_lim;
    int nbr_of_samples;
} IMCDxTC_connect_constants;

typedef struct
{
    double wait_time;
    int nbr_of_samples;
} IMCDxTC_getpos_constants;

typedef struct
{
    IMCDxTC_getpos_constants getpos;
    IMCDxTC_connect_constants connect;
    AMXAxSTAB_test_const_struct am_limits;
} IMCDxTC_tc_struct;



#endif // _IMCDxTC_TC_H_
