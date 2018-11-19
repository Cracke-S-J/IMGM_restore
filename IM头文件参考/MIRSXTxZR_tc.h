/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : MI
* 模块名称 : MIRSXTxZR
* 文件名称 : MIRSXTxZR_tc.h
* 概要描述 :
*	MI组件MIRSXTxZR数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _MIRSXTxZR_TC_H_
#define _MIRSXTxZR_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <MIXAxRSxZR_tc.h> 
#include <base.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    MIRSXTxZR_REFERENCE_VALID = 0,
    MIRSXTxZR_REFERENCE_UNKNOWN = 1,
    MIRSXTxZR_REFERENCE_FAILED = 2,
    MIRSXTxZR_REFERENCE_INVALIDATED = 3,
} MIRSXTxZR_reference_status_enum;

typedef struct
{
    MIRSXTxZR_reference_status_enum status;
    int position;
    double quality;
    int error_code;
    int pa_overscan;
    int pb_overscan;
    int peak_offset_ref;
} MIRSXTxZR_reference_mark_status_struct;

typedef struct
{
    double x1_pa_overscan;
    double x1_pb_overscan;
    double x1_peak_offset_ref;
    double y1_pa_overscan;
    double y1_pb_overscan;
    double y1_peak_offset_ref;
    double y2_pa_overscan;
    double y2_pb_overscan;
    double y2_peak_offset_ref;
    xyvect ref_mark_pitch;
} MIRSXTxZR_enc_parameters_struct;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int MIRSXTxZR_enc_start_calibrate(void);
int MIRSXTxZR_enc_finished_calibrate(const MIXAxRSxZR_axes_enum *zeroing_axis,
	bool *succeeded_ptr,
	xyavect *coarse_to_fine_offset_ptr,
	MIRSXTxZR_reference_mark_status_struct *x1_status_ptr,
	MIRSXTxZR_reference_mark_status_struct *y1_status_ptr,
	MIRSXTxZR_reference_mark_status_struct *y2_status_ptr);
int MIRSXTxZR_get_zero_position(xyavect *zero_position_ptr);
int MIRSXTxZR_set_zero_position(const xyavect *zero_position_ptr);
int MIRSXTxZR_get_default_zero_position(xyavect *zero_position_ptr);
int MIRSXTxZR_enc_get_parameters(MIRSXTxZR_enc_parameters_struct *parameters_ptr);
int MIRSXTxZR_enc_set_parameters(const MIRSXTxZR_enc_parameters_struct *parameters_ptr);
int MIRSXTxZR_enc_get_default_parameters(MIRSXTxZR_enc_parameters_struct *parameters_ptr);



#endif // _MIRSXTxZR_TC_H_
