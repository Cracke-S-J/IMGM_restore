/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMGD_DC
* 文件名称 : IMGD_DC_tc.h
* 概要描述 :
*	IM组件IMGD_DC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMGD_DC_TC_H_
#define _IMGD_DC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <base.h> 
#include <IMGD_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef IMGD_filename IMGD_DC_electronics_struct_parameter_file[0x2];

typedef struct
{
    int min_comm_quality;
    IMGD_DC_electronics_struct_parameter_file parameter_file;
    int hfmap_diagnosis_timeout;
    int laser_quality_valid_timeout;
    double calibration_file_age_threshold;
} IMGD_DC_electronics_struct;

typedef struct
{
    bool enable_connection_subtest;
    double delta;
    bool enable_direction_subtest;
    bool trace_ab;
    double X;
    double Y;
    double Z;
    double dY;
    double dZ;
    double settling_time;
    double tolerance_SPM_y;
    double tolerance_SPM_z;
    double tolerance_BF_y;
    double tolerance_BF_z;
    int nr_samples;
} IMGD_DC_connectivity_struct;

typedef horvervect IMGD_DC_area_array[0x4];

typedef struct
{
    IMGD_DC_area_array area_position;
    double y_pos_expose_during_m2e;
    double y_pos_measure_during_rop;
    double scan_distance;
    double max_scan_velocity;
    double from_pos_x;
    double from_pos_y;
    double to_pos_x;
    double to_pos_y;
    int trace_length;
    double delay_vme_querysignal;
    int ampl_quality_min;
    int ampl_quality_max;
    int mod_quality_min;
    int mod_quality_max;
    int radius_min;
    int radius_max;
    int raw_amplitude_min;
    int raw_amplitude_max;
} IMGD_DC_signal_quality_subtest_struct;

typedef struct
{
    bool enable_subtest;
    IMGD_chuck_func_enum chuck_func;
    horvervect start;
    horvervect end;
    int trace_length;
    double lissajous_radius_min;
} IMGD_DC_axis_monitor_struct;

typedef struct
{
    bool enable_subtest;
    horvervect start;
    horvervect end;
    double scan_velocity;
    int trace_length;
    int stabilisation_time;
    double max_detector_noise;
} IMGD_DC_detector_noise_struct;

typedef struct
{
    IMGD_DC_signal_quality_subtest_struct signal_quality;
    IMGD_DC_axis_monitor_struct axis_monitor;
    IMGD_DC_detector_noise_struct detector_noise;
} IMGD_DC_signal_quality_struct;

typedef struct
{
    IMGD_control_mode_enum control_mode;
    double range;
    double Z_range_for_fit;
    int nr_steps;
    int nr_samples;
    int nr_repeats;
    double max_mean_offset;
    double Rx_signal_drop_max;
    double Z_signal_drop_max;
    double lissajous_range_min;
    double lissajous_range_max;
    double min_lissajous_optimum;
} IMGD_DC_encoder_alignment_struct;

typedef struct
{
    double d_pos;
    int nr_repeats;
    int frequency_lower_limit;
    int frequency_upper_limit;
    double max_3sig_y;
    double max_3sig_z;
    horvervect pos_c;
    horvervect pos_n;
    horvervect pos_e;
    horvervect pos_s;
    horvervect pos_w;
} IMGD_DC_performance_struct;

typedef struct
{
    double threshold_y_pos_expose;
    double safe_y_pos_measure;
    double threshold_y_pos_measure;
    double safe_y_pos_expose;
    horvervect zero;
    horvervect plus;
    horvervect minus;
    horvervect tilt;
} IMGD_DC_check_spm_struct;

typedef struct
{
    int min_laser_quality;
    IMGD_DC_electronics_struct electronics;
    IMGD_DC_connectivity_struct connectivity;
    IMGD_DC_signal_quality_struct signal_quality;
    IMGD_DC_encoder_alignment_struct encoder_alignment;
    IMGD_DC_performance_struct performance;
    IMGD_DC_check_spm_struct check_spm;
    bool enable_dumping;
} IMGD_DC_dc_struct;



#endif // _IMGD_DC_TC_H_
