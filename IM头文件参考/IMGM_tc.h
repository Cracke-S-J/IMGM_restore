/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMGM
* 文件名称 : IMGM_tc.h
* 概要描述 :
*	IM组件IMGM数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMGM_TC_H_
#define _IMGM_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <TTXAxSCEN_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    IMGM_STEP_INPUT = 1,
    IMGM_STEP_INITIALIZE = 2,
    IMGM_STEP_CALIBRATE = 3,
    IMGM_STEP_WRAPUP = 4,
} IMGM_step_enum;

typedef enum
{
    IMGM_BOTH = 0,
    IMGM_ANY = 1,
    IMGM_CHUCK_1 = 2,
    IMGM_CHUCK_2 = 3,
} IMGM_chuck_selection;

typedef enum
{
    IMGM_AXIS_X_Y = 0,
    IMGM_AXIS_Y_X = 1,
    IMGM_AXIS_X = 2,
    IMGM_AXIS_Y = 3,
} IMGM_axis_selection;

typedef enum
{
    IMGM_MODE_BOTH = 0,
    IMGM_MODE_ACQUIRE = 1,
    IMGM_MODE_PROCESS = 2,
} IMGM_mode_selection;

typedef struct
{
    bool P1;
    bool P2;
    bool P3;
    bool P4;
    IMGM_chuck_selection chuck;
    IMGM_axis_selection axis;
} IMGM_side_selection;

typedef char IMGM_input_struct_test_log_name[0x100];

typedef struct
{
    IMGM_input_struct_test_log_name test_log_name;
    IMGM_mode_selection mode;
    IMGM_side_selection measure;
    IMGM_side_selection expose;
    bool use_wafers;
    bool download_maps;
    double scan_area_lbx;
    double scan_area_lby;
    double scan_area_rtx;
    double scan_area_rty;
    double pitch_x;
    double pitch_y;
    int repeat_x;
    int repeat_y;
    int htre_repeat_x;
    int htre_repeat_y;
} IMGM_input_struct;

typedef enum
{
    IMGM_CALIBR_VALID = 0,
    IMGM_CALIBR_FAILED = 1,
    IMGM_CALIBR_RUNNING = 2,
    IMGM_CALIBR_FACTORY = 3,
    IMGM_CALIBR_NONE = 4,
} IMGM_calib_status_enum;

typedef enum
{
    IMGM_PROG_C1 = 0,
    IMGM_PROG_C2 = 1,
} IMGM_prog_chuck_enum;

typedef enum
{
    IMGM_PROG_SCAN_AXIS_X = 0,
    IMGM_PROG_SCAN_AXIS_Y = 1,
    IMGM_PROG_SCAN_AXIS_NONE = 2,
} IMGM_prog_scan_axis_enum;

typedef enum
{
    IMGM_PROG_SIDE_EXPOSE = 0,
    IMGM_PROG_SIDE_MEASURE = 1,
} IMGM_prog_side_enum;

typedef enum
{
    IMGM_PROG_PHASE_ACQUIRE = 0,
    IMGM_PROG_PHASE_PROCESS = 1,
    IMGM_PROG_PHASE_DOWNLOAD = 2,
} IMGM_prog_phase_enum;

typedef struct
{
    IMGM_prog_side_enum side;
    IMGM_prog_chuck_enum chuck;
    IMGM_prog_scan_axis_enum axis;
} IMGM_prog_task_struct;

typedef struct
{
    IMGM_prog_task_struct task;
} IMGM_prog_task_event;

typedef struct
{
    IMGM_prog_task_struct task;
    int nr_act_todo;
    double time_per_act;
} IMGM_prog_task_config;

typedef struct
{
    int len;
    int max_len;
    IMGM_prog_task_config* array;
} IMGM_prog_task_config_list;

typedef IMGM_prog_task_config_list IMGM_prog_config_list[0x2];

typedef char IMGM_result_struct_acquisition_name[0x100];

typedef char IMGM_result_struct_processing_text[0x100];

typedef char IMGM_result_struct_processing_files[0x10][0x100];

typedef struct
{
    IMGM_result_struct_acquisition_name acquisition_name;
    bool acquisition_result;
    bool processing_result;
    IMGM_result_struct_processing_text processing_text;
    IMGM_result_struct_processing_files processing_files;
    bool download_result;
    bool total_result;
} IMGM_result_struct;

typedef struct
{
    TTXAxSCEN_verification_type_enum verification_type;
    int verification_1;
    int verification_2;
} IMGM_verification_struct;



#endif // _IMGM_TC_H_
