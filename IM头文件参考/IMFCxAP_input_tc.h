/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMFCxAP_input
* 文件名称 : IMFCxAP_input_tc.h
* 概要描述 :
*	IM组件IMFCxAP_input数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMFCxAP_input_TC_H_
#define _IMFCxAP_input_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <IMFCxDC_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    bool use_notch;
    double zero_freq;
    double zero_damp;
    double pole_freq;
    double pole_damp;
} IMFCxAP_input_notch_struct;

typedef IMFCxAP_input_notch_struct IMFCxAP_input_axes_notch_struct_notch[0x2];

typedef struct
{
    IMFCxAP_input_axes_notch_struct_notch notch;
} IMFCxAP_input_axes_notch_struct;

typedef IMFCxAP_input_axes_notch_struct IMFCxAP_input_side_notches_struct_axis[0x2];

typedef struct
{
    IMFCxAP_input_side_notches_struct_axis axis;
} IMFCxAP_input_side_notches_struct;

typedef bool IMFCxAP_input_do_side_struct_do[0x2];

typedef struct
{
    IMFCxAP_input_do_side_struct_do do;
} IMFCxAP_input_do_side_struct;

typedef IMFCxAP_input_do_side_struct IMFCxAP_input_struct_do_side[0x2];

typedef IMFCxAP_input_side_notches_struct IMFCxAP_input_struct_side_notches[0x2];

typedef struct
{
    IMFCxDC_runmode_enum runmode;
    IMFCxDC_graphics_sel_enum graphics_sel;
    IMFCxAP_input_struct_do_side do_side;
    IMFCxAP_input_struct_side_notches side_notches;
} IMFCxAP_input_struct;



#endif // _IMFCxAP_input_TC_H_
