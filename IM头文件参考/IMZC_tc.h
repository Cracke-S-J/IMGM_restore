/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMZC
* 文件名称 : IMZC_tc.h
* 概要描述 :
*	IM组件IMZC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMZC_TC_H_
#define _IMZC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <MIXTxWSxZS_tc.h> 
#include <base.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    IMZC_STEP_INITIALIZE = 1,
    IMZC_STEP_CALIBRATE = 2,
    IMZC_STEP_FINALIZE = 3,
} IMZC_step_enum;

typedef enum
{
    IMZC_AXIS_X = 0,
    IMZC_AXIS_Y = 1,
    IMZC_AXIS_RZ = 2,
    IMZC_AXIS_Z = 3,
    IMZC_AXIS_RX = 4,
    IMZC_AXIS_RY = 5,
} IMZC_axis_enum;

typedef enum
{
    IMZC_NA = 0,
    IMZC_OK = 1,
    IMZC_CHECK_NEEDED = 2,
    IMZC_FAILED = 3,
    IMZC_NOT_PERFORMED = 4,
} IMZC_result_enum;

typedef enum
{
    IMZC_PSD_NA = 0,
    IMZC_PSD_NOK = 1,
    IMZC_PSD_ZEROING_FAILED = 2,
    IMZC_PSD_ELECTRICAL_FAILED = 3,
    IMZC_PSD_NOK_OUT_HARD_LIMITS = 4,
    IMZC_PSD_RANGE_CHECK_FAILED = 5,
    IMZC_PSD_OK = 6,
} IMZC_cal_result_enum;

typedef enum
{
    IMZC_PSD_ID_PSD1 = 0,
    IMZC_PSD_ID_PSD2 = 1,
    IMZC_PSD_ID_PSD3 = 2,
} IMZC_psd_id_enum;

typedef enum
{
    IMZC_ANSWER_NONE = 0,
    IMZC_ANSWER_YES = 1,
    IMZC_ANSWER_NO = 2,
} IMZC_answer_enum;

typedef char IMZC_log_str[0x64];

typedef bool IMZC_input_struct_do_chuck[0x2];

typedef bool IMZC_input_struct_do_reset_phase_cap_offset[0x2];

typedef struct
{
    IMZC_input_struct_do_chuck do_chuck;
    IMZC_input_struct_do_reset_phase_cap_offset do_reset_phase_cap_offset;
} IMZC_input_struct;

typedef struct
{
    double u_avg;
    double v_avg;
} IMZC_avg_volts_struct;

typedef struct
{
    IMZC_result_enum electrical_ok;
    IMZC_result_enum intensity_ok;
    IMZC_result_enum range_check_ok;
    IMZC_result_enum quality_ok;
} IMZC_psd_result_struct;

typedef struct
{
    horvervect old;
    horvervect preset;
    horvervect now;
    horvervect new_old;
} IMZC_val_struct;

typedef struct
{
    double old;
    double now;
    double new_old;
} IMZC_val_scalar_struct;

typedef struct
{
    MIXTxWSxZS_model_parameter_struct old;
    MIXTxWSxZS_model_parameter_struct preset;
    MIXTxWSxZS_model_parameter_struct now;
    MIXTxWSxZS_model_parameter_struct new_old;
} IMZC_mi_zs_parms_struct;

typedef double IMZC_fit_quality_psd_struct_quality[0x6];

typedef struct
{
    IMZC_fit_quality_psd_struct_quality quality;
} IMZC_fit_quality_psd_struct;

typedef IMZC_fit_quality_psd_struct IMZC_fit_quality_struct_u[0x3];

typedef IMZC_fit_quality_psd_struct IMZC_fit_quality_struct_v[0x3];

typedef struct
{
    IMZC_fit_quality_struct_u u;
    IMZC_fit_quality_struct_v v;
} IMZC_fit_quality_struct;

typedef IMZC_psd_result_struct IMZC_chuck_result_struct_psd[0x3];

typedef IMZC_avg_volts_struct IMZC_chuck_result_struct_avg_volts[0x3];

typedef char IMZC_chuck_result_struct_s[0x50];

typedef struct
{
    IMZC_chuck_result_struct_psd psd;
    IMZC_chuck_result_struct_avg_volts avg_volts;
    IMZC_val_struct mi_zero_pos;
    IMZC_val_struct pco;
    horvervect mi_zero_pos_pe;
    IMZC_mi_zs_parms_struct mi_zs_parms;
    IMZC_fit_quality_struct fit_quality;
    IMZC_chuck_result_struct_s s;
} IMZC_chuck_result_struct;

typedef IMZC_chuck_result_struct IMZC_chuck_result_array[0x2];

typedef struct
{
    IMZC_cal_result_enum result;
} IMZC_summary_struct;

typedef IMZC_summary_struct IMZC_summary_array[0x2];

typedef char IMZC_result_struct_s1[0x50];

typedef char IMZC_result_struct_s2[0x50];

typedef struct
{
    IMZC_result_struct_s1 s1;
    IMZC_summary_array summary;
    IMZC_result_struct_s2 s2;
    IMZC_chuck_result_array chuck;
} IMZC_result_struct;



#endif // _IMZC_TC_H_
