/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : MI
* 模块名称 : MIENXTxRA
* 文件名称 : MIENXTxRA_tc.h
* 概要描述 :
*	MI组件MIENXTxRA数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _MIENXTxRA_TC_H_
#define _MIENXTxRA_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/
#define MIENXTxRA_DEFAULT_TIMEOUT 	 0xA 
#define MIENXTxRA_MAX_STRING_LEN 	 0x100 
#define MIENXTxRA_NUM_MEAS_SYSTEMS 	 0x2 
#define MIENXTxRA_NUM_AXES 	 0x3 
#define MIENXTxRA_NUM_RACE_AXES 	 0x4 



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    MIENXTxRA_MEAS_SYSTEM_1 = 0,
    MIENXTxRA_MEAS_SYSTEM_2 = 1,
} MIENXTxRA_meas_system_enum;

typedef enum
{
    MIENXTxRA_AXIS_1 = 0,
    MIENXTxRA_AXIS_2 = 1,
    MIENXTxRA_AXIS_3 = 2,
} MIENXTxRA_axis_enum;

typedef enum
{
    MIENXTxRA_CALIBRATION_BUSY = 0,
    MIENXTxRA_CALIBRATION_FINISHED_OK = 1,
    MIENXTxRA_CALIBRATION_ERROR_NO_MOVEMENT = 2,
    MIENXTxRA_CALIBRATION_ERROR_PHASE_ERROR = 3,
    MIENXTxRA_CALIBRATION_ERROR_OTHER = 4,
} MIENXTxRA_calibration_status_enum;

typedef enum
{
    MIENXTxRA_RACE_AXIS_1 = 0,
    MIENXTxRA_RACE_AXIS_2 = 1,
    MIENXTxRA_RACE_AXIS_3 = 2,
    MIENXTxRA_RACE_AXIS_4 = 3,
} MIENXTxRA_race_axis_enum;

typedef enum
{
    MIENXTxRA_RACE_AXIS_MODE_SHORTED = 0,
    MIENXTxRA_RACE_AXIS_MODE_FLOATING = 1,
    MIENXTxRA_RACE_AXIS_MODE_ENABLED = 2,
} MIENXTxRA_race_axis_mode_enum;

typedef enum
{
    MIENXTxRA_BIST_RESULT_OK = 0,
    MIENXTxRA_BIST_RESULT_NOT_READY = 1,
    MIENXTxRA_BIST_RESULT_24V_SUPPLY_NOK = 2,
    MIENXTxRA_BIST_RESULT_12V_SUPPLY_NOK = 3,
    MIENXTxRA_BIST_RESULT_INTERNAL_ERROR = 4,
    MIENXTxRA_BIST_RESULT_OTHER_ERROR = 5,
} MIENXTxRA_race_bist_result_enum;

typedef struct
{
    double current;
    double voltage_p;
    double voltage_n;
    double sense;
} MIENXTxRA_trace_item_t;

typedef MIENXTxRA_trace_item_t MIENXTxRA_trace_array[0x4];

typedef struct
{
    int len;
    int max_len;
    MIENXTxRA_trace_array* array;
} MIENXTxRA_trace_list_va;

typedef enum
{
    MIENXTxRA_GAP_OK = 0,
    MIENXTxRA_GAP_TOO_BIG = 1,
    MIENXTxRA_GAP_TOO_SMALL = 2,
} MIENXTxRA_gap_validation_result_enum;

typedef enum
{
    MIENXTxRA_MEASURE_SIDE = 0,
    MIENXTxRA_EXPOSURE_SIDE = 1,
} MIENXTxRA_side_enum;

typedef enum
{
    MIENXTxRA_LASER_STATE_OFF = 0,
    MIENXTxRA_LASER_STATE_ON = 1,
} MIENXTxRA_laser_state_enum;

typedef enum
{
    MIENXTxRA_LASER_WARNING_OK = 0,
    MIENXTxRA_LASER_WARNING_NEAR_END_OF_LIFE = 1,
} MIENXTxRA_laser_warning_enum;

typedef enum
{
    MIENXTxRA_LASER_CURRENT_NORMAL = 0,
    MIENXTxRA_LASER_CURRENT_INCREASING = 1,
    MIENXTxRA_LASER_CURRENT_WARNING = 2,
    MIENXTxRA_LASER_CURRENT_ERROR = 3,
} MIENXTxRA_laser_current_enum;

typedef struct
{
    MIENXTxRA_laser_state_enum laser_state;
    MIENXTxRA_laser_warning_enum laser_warning;
    MIENXTxRA_laser_current_enum laser_current;
    double monitor_current;
    double temperature;
} MIENXTxRA_laser_status_t;

typedef struct
{
    MIENXTxRA_race_axis_mode_enum axis_mode;
    bool frequency_moving;
    bool amplitude_moving;
    bool offset_moving;
    double actual_frequency;
    double actual_amplitude;
    double actual_offset;
    double board_sense_current;
    double board_sense_voltage_p;
    double board_sense_voltage_n;
    double coil_sense_voltage;
    MIENXTxRA_race_axis_mode_enum output_state;
    bool actuator_detected;
    bool temperature_error_active;
    bool overloaded;
    int load_compensation;
} MIENXTxRA_race_axis_status_t;

typedef struct
{
    bool axis_1;
    bool axis_2;
    bool axis_3;
    bool axis_4;
} MIENXTxRA_race_trace_axis_spec_t;

typedef struct
{
    bool current;
    bool voltage_p;
    bool voltage_n;
    bool sense;
} MIENXTxRA_race_trace_register_spec_t;

typedef struct
{
    double GapLowerLimit;
    double GapUpperLimit;
    double GapFrequency;
    double GapAmplitude;
    double actualFrequency;
    double actualAmplitude;
    double actualOffset;
    double GapLastStored;
    timestamp GapLastMeasureTime;
    double GapMeasured;
    timestamp GapMeasureTime;
    MIENXTxRA_gap_validation_result_enum result;
} MIENXTxRA_gap_validation_t;

typedef struct
{
    double Fresonance;
    double Aresonance;
} MIENXTxRA_ref_axis_resonance_settings_struct;

typedef char MIENXTxRA_error_data_t_error_text[0x100];

typedef struct
{
    int error_id;
    MIENXTxRA_error_data_t_error_text error_text;
} MIENXTxRA_error_data_t;

typedef MIENXTxRA_error_data_t MIENXTxRA_error_data_array[0x2][0x3];

typedef struct
{
    double sin_gain;
    double cos_gain;
    double sin_offset;
    double cos_offset;
    double phase;
} MIENXTxRA_raib_correction_t;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int MIENXTxRA_start_raib_axis_calibration(const MIENXTxRA_meas_system_enum *meas_system_id,
	const MIENXTxRA_axis_enum *axis_id);
int MIENXTxRA_hard_raib_reset_calibration(const MIENXTxRA_meas_system_enum *meas_system_id,
	const MIENXTxRA_axis_enum *axis_id);
int MIENXTxRA_get_raib_axis_calibration_status(const MIENXTxRA_meas_system_enum *meas_system_id,
	const MIENXTxRA_axis_enum *axis_id,
	MIENXTxRA_calibration_status_enum *calibration_status);
int MIENXTxRA_get_raib_correction_values(const MIENXTxRA_meas_system_enum *meas_system_id,
	const MIENXTxRA_axis_enum *axis_id,
	MIENXTxRA_raib_correction_t *correction_values);
int MIENXTxRA_execute_race_bist(MIENXTxRA_race_bist_result_enum *bist_result);
int MIENXTxRA_get_race_axis_status(const MIENXTxRA_race_axis_enum *race_axis_id,
	MIENXTxRA_race_axis_status_t *axis_status);
int MIENXTxRA_set_race_axis_mode(const MIENXTxRA_race_axis_enum *race_axis_id,
	const MIENXTxRA_race_axis_mode_enum *axis_mode);
int MIENXTxRA_set_race_axis_delta_frequency(const MIENXTxRA_race_axis_enum *race_axis_id,
	const double *delta_frequency);
int MIENXTxRA_set_race_axis_delta_amplitude(const MIENXTxRA_race_axis_enum *race_axis_id,
	const double *delta_amplitude);
int MIENXTxRA_set_race_axis_delta_offset(const MIENXTxRA_race_axis_enum *race_axis_id,
	const double *delta_offset);
int MIENXTxRA_set_race_axis_delta_frequency_time(const MIENXTxRA_race_axis_enum *race_axis_id,
	const double *delta_frequency,
	const double *delta_time);
int MIENXTxRA_set_race_axis_delta_amplitude_time(const MIENXTxRA_race_axis_enum *race_axis_id,
	const double *delta_amplitude,
	const double *delta_time);
int MIENXTxRA_set_race_axis_delta_offset_time(const MIENXTxRA_race_axis_enum *race_axis_id,
	const double *delta_offset,
	const double *delta_time);
int MIENXTxRA_move_race_axis(const MIENXTxRA_race_axis_enum *race_axis_id);
int MIENXTxRA_fade_race_axis(const MIENXTxRA_race_axis_enum *race_axis_id);
int MIENXTxRA_start_tracing(const int *update_rate,
	const MIENXTxRA_race_trace_axis_spec_t *axis_selection,
	const MIENXTxRA_race_trace_register_spec_t *register_selection);
int MIENXTxRA_stop_tracing(MIENXTxRA_trace_list_va *trace_data);
int MIENXTxRA_do_gap_validation(const MIENXTxRA_side_enum *side,
	MIENXTxRA_gap_validation_t *gap_val_info);
int MIENXTxRA_save_gap_validation(const MIENXTxRA_side_enum *side,
	const MIENXTxRA_gap_validation_t *gap_val_info);
int MIENXTxRA_get_t_set(double *t_set);
int MIENXTxRA_get_t_trace(double *t_trace);
int MIENXTxRA_get_ref_axis_resonance_settings(const MIENXTxRA_meas_system_enum *meas_system_id,
	const MIENXTxRA_axis_enum *axis_id,
	MIENXTxRA_ref_axis_resonance_settings_struct *resonance_settings);
int MIENXTxRA_set_ref_axis_resonance_settings(const MIENXTxRA_meas_system_enum *meas_system_id,
	const MIENXTxRA_axis_enum *axis_id,
	const MIENXTxRA_ref_axis_resonance_settings_struct *resonance_settings);
int MIENXTxRA_get_laser_status(const MIENXTxRA_meas_system_enum *meas_system_id,
	const MIENXTxRA_axis_enum *axis_id,
	MIENXTxRA_laser_status_t *laser_status_ptr);
int MIENXTxRA_switch_laser(const MIENXTxRA_meas_system_enum *meas_system_id,
	const MIENXTxRA_laser_state_enum *laser_state);
int MIENXTxRA_enable_error_handler(const bool *enable);
int MIENXTxRA_get_RA_error_status(MIENXTxRA_error_data_array *error_data);



#endif // _MIENXTxRA_TC_H_
