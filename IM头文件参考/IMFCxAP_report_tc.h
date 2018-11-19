/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMFCxAP_report
* 文件名称 : IMFCxAP_report_tc.h
* 概要描述 :
*	IM组件IMFCxAP_report数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMFCxAP_report_TC_H_
#define _IMFCxAP_report_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <MIIFXTxWS_tc.h> 
#include <IMFCxDC_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    double freq;
    double amp;
    double limit;
    IMFCxDC_result_enum result;
} IMFCxAP_report_peak_row_struct;

typedef IMFCxAP_report_peak_row_struct IMFCxAP_report_peaks[0x2];

typedef IMFCxAP_report_peaks IMFCxAP_report_peaks_array[0x2];

typedef struct
{
    bool use_notch;
    MIIFXTxWS_filter_config_enum configuration;
    double zero_freq;
    double zero_damp;
    double pole_freq;
    double pole_damp;
} IMFCxAP_report_notch_parms_struct;

typedef IMFCxAP_report_notch_parms_struct IMFCxAP_report_mi_parms_2filters[0x2];

typedef IMFCxAP_report_mi_parms_2filters IMFCxAP_report_mi_parms_2axes[0x2];

typedef IMFCxAP_report_mi_parms_2axes IMFCxAP_report_mi_parms_array[0x2];

typedef enum
{
    IMFCxAP_report_PEAK_FREQUENCY = 0,
    IMFCxAP_report_NO_ACTIVE_FILTERS = 1,
    IMFCxAP_report_OPTIMAL_FILTERS = 2,
} IMFCxAP_report_result_table_enum;

typedef struct
{
    double peak;
    double peak2;
    double limit;
    IMFCxDC_result_enum res;
} IMFCxAP_report_result_line;

typedef IMFCxAP_report_result_line IMFCxAP_report_result_lines[0x3];

typedef struct
{
    double value;
    double threshold;
    IMFCxDC_result_enum res;
} IMFCxAP_report_std3x_line;

typedef IMFCxAP_report_std3x_line IMFCxAP_report_std3x_lines[0x2];

typedef char IMFCxAP_report_side_struct_empty_line[0x4];

typedef IMFCxAP_report_result_lines IMFCxAP_report_side_struct_results[0x2];

typedef struct
{
    IMFCxAP_report_side_struct_empty_line empty_line;
    IMFCxAP_report_std3x_lines std3x;
    IMFCxAP_report_side_struct_results results;
    IMFCxAP_report_peaks_array peaks_no_fi;
    IMFCxAP_report_peaks_array peaks_freqs;
} IMFCxAP_report_side_struct;

typedef IMFCxAP_report_side_struct IMFCxAP_report_mi_result_values_s[0x2];

typedef struct
{
    IMFCxAP_report_mi_result_values_s s;
    IMFCxDC_result_enum ok_result;
    IMFCxAP_report_mi_parms_array old_parms;
    IMFCxAP_report_mi_parms_array new_parms;
} IMFCxAP_report_mi_result_values;

typedef struct
{
    IMFCxDC_result_enum result;
} IMFCxAP_report_sum_side_axis_struct;

typedef IMFCxAP_report_sum_side_axis_struct IMFCxAP_report_sum_side_struct_axis[0x2];

typedef struct
{
    IMFCxAP_report_sum_side_struct_axis axis;
} IMFCxAP_report_sum_side_struct;

typedef IMFCxAP_report_sum_side_struct IMFCxAP_report_sum_result_values_side[0x2];

typedef struct
{
    IMFCxAP_report_sum_result_values_side side;
} IMFCxAP_report_sum_result_values;

typedef struct
{
    IMFCxAP_report_sum_result_values sum_results;
    IMFCxAP_report_mi_result_values mi_results;
} IMFCxAP_report_struct;



#endif // _IMFCxAP_report_TC_H_
