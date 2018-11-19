/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMGCxTC
* 文件名称 : IMGCxTC_tc.h
* 概要描述 :
*	IM组件IMGCxTC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMGCxTC_TC_H_
#define _IMGCxTC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <base.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    horvervect start;
    horvervect end;
} IMGCxTC_position_struct;

typedef IMGCxTC_position_struct IMGCxTC_chuck_scan_positions_struct_position[0x4];

typedef struct
{
    IMGCxTC_chuck_scan_positions_struct_position position;
} IMGCxTC_chuck_scan_positions_struct;

typedef bool IMGCxTC_calibration_struct_do_area[0x4];

typedef struct
{
    bool init_drivers;
    IMGCxTC_calibration_struct_do_area do_area;
    bool enable_restore;
    bool create_diagnostics_file;
    IMGCxTC_chuck_scan_positions_struct chuck_scan_positions;
    horvervect pre_start_length;
    double start_calibration_delay;
} IMGCxTC_calibration_struct;

typedef struct
{
    IMGCxTC_calibration_struct calibr;
} IMGCxTC_tc_struct;



#endif // _IMGCxTC_TC_H_
