/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMCCxTC
* 文件名称 : IMCCxTC_tc.h
* 概要描述 :
*	IM组件IMCCxTC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMCCxTC_TC_H_
#define _IMCCxTC_TC_H_

/*------------------------------- Includes -------------------------------*/
//extern RSxVPxENV_RS_OBJECT_FIELD  SHIFTED  //54, 52



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    int am_delay_before_measurement;
    int am_measure_time;
    double am_limit;
    int am_retries;
} IMCCxTC_am_stab_struct;

typedef struct
{
    int test_const_nbr_tilts;
    double test_const_tilt_step;
    double test_const_cap_step;
    double test_const_cap_wndw;
    bool enable_range_check;
    double before_value_lower_limit;
    double before_value_upper_limit;
    IMCCxTC_am_stab_struct am;
} IMCCxTC_tc_struct;



#endif // _IMCCxTC_TC_H_
