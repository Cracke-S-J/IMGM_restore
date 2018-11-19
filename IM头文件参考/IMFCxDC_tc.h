/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMFCxDC
* 文件名称 : IMFCxDC_tc.h
* 概要描述 :
*	IM组件IMFCxDC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMFCxDC_TC_H_
#define _IMFCxDC_TC_H_

/*------------------------------- Includes -------------------------------*/
//extern WPCMxVPxPLATFORM_WS_CONFIG  TYPE_1  //273, 275
//extern WPCMxVPxPLATFORM_WS_CONFIG  TYPE_2  //273, 276
//extern WPCMxVPxPLATFORM_WS_CONFIG  TYPE_3  //273, 277
//extern IPxVPxLT_LENS_TYPE  41  //272, 270
//extern IPxVPxLT_LENS_TYPE  70  //272, 271



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    IMFCxDC_EXPOSE = 0,
    IMFCxDC_MEASURE = 1,
} IMFCxDC_side_enum;

typedef enum
{
    IMFCxDC_NOTCH_1 = 0,
    IMFCxDC_NOTCH_2 = 1,
} IMFCxDC_notch_enum;

typedef enum
{
    IMFCxDC_AXIS_X = 0,
    IMFCxDC_AXIS_Y = 1,
} IMFCxDC_axis_enum;

typedef enum
{
    IMFCxDC_EXP_AXIS_X_FILTER_1 = 0,
    IMFCxDC_EXP_AXIS_X_FILTER_2 = 1,
    IMFCxDC_EXP_AXIS_Y_FILTER_1 = 2,
    IMFCxDC_EXP_AXIS_Y_FILTER_2 = 3,
    IMFCxDC_MEA_AXIS_X_FILTER_1 = 4,
    IMFCxDC_MEA_AXIS_X_FILTER_2 = 5,
    IMFCxDC_MEA_AXIS_Y_FILTER_1 = 6,
    IMFCxDC_MEA_AXIS_Y_FILTER_2 = 7,
} IMFCxDC_axis_filter_enum;

typedef enum
{
    IMFCxDC_CALIBRATE_CHECK = 0,
    IMFCxDC_CHECK_ONLY = 1,
} IMFCxDC_runmode_enum;

typedef enum
{
    IMFCxDC_PEAK_1 = 0,
    IMFCxDC_PEAK_2 = 1,
} IMFCxDC_peak_enum;

typedef enum
{
    IMFCxDC_NOT_MEASURED = 0,
    IMFCxDC_N_A = 1,
    IMFCxDC_OK = 2,
    IMFCxDC_NOK = 3,
} IMFCxDC_result_enum;

typedef enum
{
    IMFCxDC_GRAPHICS_SEL_NO_FILTER = 0,
    IMFCxDC_GRAPHICS_SEL_FILTERED = 1,
    IMFCxDC_GRAPHICS_SEL_COMBINED = 2,
} IMFCxDC_graphics_sel_enum;

typedef struct
{
    IMFCxDC_axis_filter_enum axis_filter_id;
    bool activate_and_calibrate;
    double fstart;
    double fend;
    double zero_damp;
    double pole_damp;
} IMFCxDC_notch_struct;

typedef IMFCxDC_notch_struct IMFCxDC_axis_struct_notch[0x2];

typedef struct
{
    IMFCxDC_axis_struct_notch notch;
} IMFCxDC_axis_struct;

typedef IMFCxDC_axis_struct IMFCxDC_side_struct_axis[0x2];

typedef struct
{
    IMFCxDC_side_enum side_id;
    IMFCxDC_side_struct_axis axis;
    double max_freq_peak;
    double max_highest_peak;
} IMFCxDC_side_struct;

typedef IMFCxDC_side_struct IMFCxDC_dc_struct_side[0x2];

typedef struct
{
    int trace_update_rate;
    double freq_window;
    double fband;
    double std3x_threshold;
    IMFCxDC_dc_struct_side side;
} IMFCxDC_dc_struct;



#endif // _IMFCxDC_TC_H_
