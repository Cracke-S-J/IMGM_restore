/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMRC
* 文件名称 : IMRC_tc.h
* 概要描述 :
*	IM组件IMRC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMRC_TC_H_
#define _IMRC_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    IMRC_STEP_INITIALIZE = 1,
    IMRC_STEP_GAP_VALIDATION = 2,
    IMRC_STEP_NOISE_TRACE_BEFORE = 3,
    IMRC_STEP_SENSOR_M2 = 4,
    IMRC_STEP_SENSOR_M3 = 5,
    IMRC_STEP_SENSOR_E1 = 6,
    IMRC_STEP_SENSOR_E2 = 7,
    IMRC_STEP_SENSOR_E3 = 8,
    IMRC_STEP_NOISE_TRACE_AFTER = 9,
} IMRC_step_enum;

typedef enum
{
    IMRC_ACTIVITY_RESONANCE_SEARCH = 0,
    IMRC_ACTIVITY_AMPLITUDE_SEARCH = 1,
    IMRC_ACTIVITY_RA_CALIBRATION = 2,
    IMRC_ACTIVITY_RA_CORRECTION = 3,
} IMRC_activity_enum;

typedef enum
{
    IMRC_STATUS_NONE = 0,
    IMRC_STATUS_TODO = 1,
    IMRC_STATUS_OK = 2,
    IMRC_STATUS_NOK = 3,
    IMRC_STATUS_NO_MOVEMENT = 4,
    IMRC_STATUS_PHASE_ERROR = 5,
    IMRC_STATUS_FAILED = 6,
    IMRC_STATUS_SMALL_ERROR = 7,
    IMRC_STATUS_BIG_WARNING = 8,
} IMRC_status_enum;

typedef enum
{
    IMRC_SIDE_MEASUREMENT = 0,
    IMRC_SIDE_EXPOSURE = 1,
} IMRC_side_enum;

typedef enum
{
    IMRC_SENSOR_M2 = 0,
    IMRC_SENSOR_M3 = 1,
    IMRC_SENSOR_E1 = 2,
    IMRC_SENSOR_E2 = 3,
    IMRC_SENSOR_E3 = 4,
} IMRC_sensor_enum;

typedef char IMRC_log_str[0x50];

typedef struct
{
    bool do_meas_side;
    bool do_exposure_side;
    bool do_meas_sensor2;
    bool do_meas_sensor3;
    bool do_exposure_sensor1;
    bool do_exposure_sensor2;
    bool do_exposure_sensor3;
    bool do_gapValidation;
    bool do_resonanceSearch;
    bool do_amplitudeSearch;
    bool do_calibration;
} IMRC_input_struct;

typedef char IMRC_result_mach_info_struct_vp_encoder_suspension[0x1C];

typedef char IMRC_result_mach_info_struct_empty_line[0x4];

typedef struct
{
    IMRC_result_mach_info_struct_vp_encoder_suspension vp_encoder_suspension;
    IMRC_result_mach_info_struct_empty_line empty_line;
} IMRC_result_mach_info_struct;

typedef char IMRC_result_gapVal_struct_TimeDifference[0x50];

typedef struct
{
    double LastStoredGap;
    timestamp LastMeasureTime;
    double MeasuredGap;
    double GapDifference;
    IMRC_result_gapVal_struct_TimeDifference TimeDifference;
    IMRC_status_enum Result;
} IMRC_result_gapVal_struct;

typedef char IMRC_result_gapVal_table_limits[0x50];

typedef struct
{
    IMRC_result_gapVal_table_limits limits;
    IMRC_result_gapVal_struct result_measure;
    IMRC_result_gapVal_struct result_expose;
} IMRC_result_gapVal_table;

typedef char IMRC_result_step_struct_Frequency[0x10];

typedef char IMRC_result_step_struct_Amplitude[0x10];

typedef char IMRC_result_step_struct_Efficiency[0x10];

typedef struct
{
    double Fresonance;
    double Aresonance;
    double Mresonance;
    IMRC_result_step_struct_Frequency Frequency;
    IMRC_result_step_struct_Amplitude Amplitude;
    IMRC_result_step_struct_Efficiency Efficiency;
    IMRC_status_enum Result;
} IMRC_result_step_struct;

typedef IMRC_result_step_struct IMRC_result_sensor_table[0x4];

typedef IMRC_result_sensor_table IMRC_result_sensors[0x5];

typedef struct
{
    int sine;
    int cosine;
} IMRC_raib_diag_struct;

typedef IMRC_raib_diag_struct IMRC_liss_value_struct_raib_diag[0x5];

typedef struct
{
    IMRC_liss_value_struct_raib_diag raib_diag;
} IMRC_liss_value_struct;

typedef struct
{
    double min;
    double max;
    double range;
    double mean;
    double stdev;
} IMRC_result_noise_sensor_struct;

typedef char IMRC_result_liss_sensor_struct_ok_nok[0x10];

typedef struct
{
    double min;
    double max;
    double range;
    double mean;
    double stdev;
    IMRC_result_liss_sensor_struct_ok_nok ok_nok;
} IMRC_result_liss_sensor_struct;

typedef IMRC_result_noise_sensor_struct IMRC_noise_sensor_table[0x5];

typedef IMRC_result_liss_sensor_struct IMRC_noise_liss_table[0x5];

typedef char IMRC_noise_check_result_struct_lissajous_ok_nok[0x50];

typedef char IMRC_noise_check_result_struct_noise_trace_file[0x50];

typedef char IMRC_noise_check_result_struct_empty_line[0x4];

typedef struct
{
    IMRC_noise_sensor_table movement;
    IMRC_noise_liss_table lissajous;
    IMRC_noise_check_result_struct_lissajous_ok_nok lissajous_ok_nok;
    IMRC_noise_check_result_struct_noise_trace_file noise_trace_file;
    IMRC_noise_check_result_struct_empty_line empty_line;
} IMRC_noise_check_result_struct;

typedef char IMRC_noise_check_struct_empty_ln[0x10];

typedef char IMRC_noise_check_struct_empty_ln2[0x10];

typedef struct
{
    double tc_lissa_radius_mean;
    double tc_lissa_radius_mean_range;
    double tc_lissa_radius_minmax_range;
    double tc_lissa_radius_stdev;
    IMRC_noise_check_struct_empty_ln empty_ln;
    double lissa_radius_min_check;
    double lissa_radius_max_check;
    double lissa_radius_range_check;
    double lissa_radius_mean_min_check;
    double lissa_radius_mean_max_check;
    double lissa_radius_stdev_check;
    IMRC_noise_check_struct_empty_ln2 empty_ln2;
    IMRC_noise_check_result_struct before;
    IMRC_noise_check_result_struct after;
} IMRC_noise_check_struct;

typedef char IMRC_gain_correction_struct_sin_limit[0x18];

typedef char IMRC_gain_correction_struct_cos_limit[0x18];

typedef struct
{
    double sin_gain;
    IMRC_gain_correction_struct_sin_limit sin_limit;
    double cos_gain;
    IMRC_gain_correction_struct_cos_limit cos_limit;
    IMRC_status_enum result;
} IMRC_gain_correction_struct;

typedef IMRC_gain_correction_struct IMRC_gain_correction_table[0x5];

typedef char IMRC_offset_correction_struct_sin_limit[0x18];

typedef char IMRC_offset_correction_struct_cos_limit[0x18];

typedef struct
{
    double sin_offset;
    IMRC_offset_correction_struct_sin_limit sin_limit;
    double cos_offset;
    IMRC_offset_correction_struct_cos_limit cos_limit;
    IMRC_status_enum result;
} IMRC_offset_correction_struct;

typedef IMRC_offset_correction_struct IMRC_offset_correction_table[0x5];

typedef char IMRC_phase_correction_struct_phase_limit[0x18];

typedef struct
{
    double phase;
    IMRC_status_enum phase_valid;
    IMRC_phase_correction_struct_phase_limit phase_limit;
    IMRC_status_enum result;
} IMRC_phase_correction_struct;

typedef IMRC_phase_correction_struct IMRC_phase_correction_table[0x5];

typedef struct
{
    IMRC_gain_correction_table gain_corr;
    IMRC_status_enum gain_result;
    IMRC_offset_correction_table offset_corr;
    IMRC_status_enum offset_result;
    IMRC_phase_correction_table phase_corr;
    IMRC_status_enum phase_result;
    IMRC_status_enum overall_result;
} IMRC_correction_part_struct;

typedef struct
{
    IMRC_correction_part_struct before_cal;
    IMRC_correction_part_struct after_cal;
} IMRC_correction_struct;

typedef struct
{
    IMRC_result_mach_info_struct machine_info;
    IMRC_result_gapVal_table gapVal;
    IMRC_result_sensors sensors;
    IMRC_noise_check_struct noise_check;
    IMRC_correction_struct correction;
} IMRC_result_struct;

typedef struct
{
    double frequency;
    double movement;
} IMRC_freq_mov_struct;

typedef struct
{
    int len;
    int max_len;
    IMRC_freq_mov_struct* array;
} IMRC_freq_mov_vararray;

typedef struct
{
    double measured_gap;
    double set_frequency;
    double set_amplitude;
    double actual_frequency;
    double actual_amplitude;
    double actual_offset;
} IMRC_ref_axis_calibr_data;



#endif // _IMRC_TC_H_
