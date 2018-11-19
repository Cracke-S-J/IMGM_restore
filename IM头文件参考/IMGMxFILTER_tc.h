/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMGMxFILTER
* 文件名称 : IMGMxFILTER_tc.h
* 概要描述 :
*	IM组件IMGMxFILTER数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMGMxFILTER_TC_H_
#define _IMGMxFILTER_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/
#define IMGMxFILTER_EXTRA_SETPOINTS 	 0x2 



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    double pitch;
    double scan_speed;
    double rel_cutoff;
    int sample_freq;
} IMGMxFILTER_aa_params;

typedef struct
{
    double hy;
    double hz;
} IMGMxFILTER_encoder_result_struct;

typedef struct
{
    int len;
    int max_len;
    IMGMxFILTER_encoder_result_struct* array;
} IMGMxFILTER_encoder_result_vararray;

typedef struct
{
    int encoder_id;
    int first_sample;
    int last_sample;
    IMGMxFILTER_encoder_result_vararray samples_up;
    IMGMxFILTER_encoder_result_vararray samples_down;
} IMGMxFILTER_raw_element;

typedef struct
{
    int len;
    int max_len;
    IMGMxFILTER_raw_element* array;
} IMGMxFILTER_raw_vararray;

typedef struct
{
    int encoder_id;
    int start_pos;
    IMGMxFILTER_encoder_result_vararray samples_up;
    IMGMxFILTER_encoder_result_vararray samples_down;
} IMGMxFILTER_result_element;

typedef struct
{
    int len;
    int max_len;
    IMGMxFILTER_result_element* array;
} IMGMxFILTER_result_vararray;

typedef struct
{
    int sample_nr;
    double weight;
} IMGMxFILTER_interpol_elem;

typedef struct
{
    int len;
    int max_len;
    IMGMxFILTER_interpol_elem* array;
} IMGMxFILTER_interpol_vararray;



#endif // _IMGMxFILTER_TC_H_
