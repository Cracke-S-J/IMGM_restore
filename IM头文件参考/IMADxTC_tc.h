/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMADxTC
* 文件名称 : IMADxTC_tc.h
* 概要描述 :
*	IM组件IMADxTC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMADxTC_TC_H_
#define _IMADxTC_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    double optimal;
    double upper_limit;
    double lower_limit;
} IMADxTC_adjustment_limits;

typedef struct
{
    IMADxTC_adjustment_limits z;
    IMADxTC_adjustment_limits rx;
    IMADxTC_adjustment_limits ry;
} IMADxTC_rs_cap_sensor_page;

typedef struct
{
    IMADxTC_rs_cap_sensor_page rs_cap_sensor_page;
} IMADxTC_test_constants;



#endif // _IMADxTC_TC_H_
