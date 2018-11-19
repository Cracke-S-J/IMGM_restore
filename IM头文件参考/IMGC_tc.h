/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMGC
* 文件名称 : IMGC_tc.h
* 概要描述 :
*	IM组件IMGC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMGC_TC_H_
#define _IMGC_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    IMGC_STEP_INITIALIZE = 1,
    IMGC_STEP_CALIBRATE = 2,
    IMGC_STEP_WRAPUP = 3,
} IMGC_step_enum;

typedef enum
{
    IMGC_BOTH_CHUCKS = 0,
    IMGC_CHUCK_1 = 1,
    IMGC_CHUCK_2 = 2,
} IMGC_chuck_selection;

typedef struct
{
    IMGC_chuck_selection chuck_selection;
} IMGC_input_struct;

typedef enum
{
    IMGC_CALIBR_VALID = 0,
    IMGC_CALIBR_FAILED = 1,
    IMGC_CALIBR_RUNNING = 2,
    IMGC_CALIBR_FACTORY = 3,
    IMGC_CALIBR_NONE = 4,
} IMGC_signal_calibr_status_enum;

typedef enum
{
    IMGC_ERROR_NONE = 0,
    IMGC_ERROR_NO_SIGNAL = 1,
    IMGC_ERROR_SIGNAL_CLIPPING = 2,
    IMGC_ERROR_SIGNAL_I90_MISSING = 3,
    IMGC_ERROR_SIGNAL_I210_MISSING = 4,
    IMGC_ERROR_SIGNAL_I330_MISSING = 5,
    IMGC_ERROR_STANDSTILL_DETECTED = 6,
    IMGC_ERROR_VARYING_AMPLITUDES = 7,
    IMGC_ERROR_VELOCITY_OUT_OF_RANGE = 8,
    IMGC_ERROR_NUMERICAL_ANALYSIS = 9,
    IMGC_ERROR_UNKNOWN = 10,
} IMGC_signal_calibr_error_enum;

typedef struct
{
    IMGC_signal_calibr_status_enum status;
    int error_code;
    IMGC_signal_calibr_error_enum error_desc;
} IMGC_axis_status_struct;

typedef IMGC_axis_status_struct IMGC_axis_status_array[0x8];

typedef IMGC_axis_status_array IMGC_area_array[0x4];

typedef char IMGC_result_struct_rerun_after_error[0x100];

typedef struct
{
    IMGC_result_struct_rerun_after_error rerun_after_error;
    IMGC_area_array chuck1;
    IMGC_area_array chuck2;
    bool all_axis_valid;
} IMGC_result_struct;



#endif // _IMGC_TC_H_
