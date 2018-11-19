/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : MI
* 模块名称 : MIRSXTxENC
* 文件名称 : MIRSXTxENC_tc.h
* 概要描述 :
*	MI组件MIRSXTxENC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _MIRSXTxENC_TC_H_
#define _MIRSXTxENC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <MIRSXAxENC_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    MIRSXTxENC_TEMPERATURE_OK = 0,
    MIRSXTxENC_TEMPERATURE_HOT = 1,
    MIRSXTxENC_TEMPERATURE_ERROR = 2,
} MIRSXTxENC_temperature_status_enum;

typedef enum
{
    MIRSXTxENC_EXTENDED_CALIBRATION_MODE = 0,
    MIRSXTxENC_NORMAL_CALIBRATION_MODE = 1,
    MIRSXTxENC_FACT_DEF_CALIBRATION_MODE = 2,
} MIRSXTxENC_signal_calibration_mode_enum;

typedef enum
{
    MIRSXTxENC_SIGNAL_CALIBRATION_VALID = 0,
    MIRSXTxENC_SIGNAL_CALIBRATION_FAILED = 1,
    MIRSXTxENC_SIGNAL_CALIBRATION_FACTORY = 2,
    MIRSXTxENC_SIGNAL_CALIBRATION_UNKNOWN = 3,
} MIRSXTxENC_signal_calibration_status_enum;

typedef enum
{
    MIRSXTxENC_X = 0,
    MIRSXTxENC_Y = 1,
} MIRSXTxENC_axis_direction_enum;

typedef enum
{
    MIRSXTxENC_IGNORE = 0,
    MIRSXTxENC_WARNING = 1,
    MIRSXTxENC_ERROR = 2,
} MIRSXTxENC_event_classification_enum;

typedef enum
{
    MIRSXTxENC_DATATYPE_POSITION = 0,
    MIRSXTxENC_DATATYPE_INCREMENT = 1,
    MIRSXTxENC_DATATYPE_CONSTANT = 2,
    MIRSXTxENC_DATATYPE_ROTATE = 3,
    MIRSXTxENC_DATATYPE_ANALOG = 4,
    MIRSXTxENC_DATATYPE_LIS_RADIUS = 5,
    MIRSXTxENC_DATATYPE_POSITION_ERROR = 6,
} MIRSXTxENC_datatype_enum;

typedef enum
{
    MIRSXTxENC_REFERENCE_VALID = 0,
    MIRSXTxENC_REFERENCE_UNKNOWN = 1,
    MIRSXTxENC_REFERENCE_FAILED = 2,
    MIRSXTxENC_REFERENCE_INVALIDATED = 3,
} MIRSXTxENC_reference_status_enum;

typedef enum
{
    MIRSXTxENC_CALIBRATION_STATUS_VALID = 0,
    MIRSXTxENC_CALIBRATION_STATUS_FAILED = 1,
    MIRSXTxENC_CALIBRATION_STATUS_FACTORY = 2,
    MIRSXTxENC_CALIBRATION_STATUS_UNKNOWN = 3,
} MIRSXTxENC_calibration_status_enum;

typedef enum
{
    MIRSXTxENC_QUALITY_OK = 0,
    MIRSXTxENC_QUALITY_ERROR = 1,
    MIRSXTxENC_QUALITY_INSUFFICIENT_DATA = 2,
} MIRSXTxENC_signal_quality_status_enum;

typedef enum
{
    MIRSXTxENC_COMP_MAP_GENERATE = 0,
    MIRSXTxENC_COMP_MAP_DEFAULT = 1,
    MIRSXTxENC_COMP_MAP_VERIFY = 2,
} MIRSXTxENC_comp_map_type_enum;

typedef enum
{
    MIRSXTxENC_COMP_MAP_NO_ERROR = 0,
    MIRSXTxENC_COMP_MAP_HPDB_INPUT_NOT_CONFIGURED = 1,
    MIRSXTxENC_COMP_MAP_POS_COUNTER_NOT_VALID = 2,
    MIRSXTxENC_COMP_MAP_REF_MARK_NOT_VALID = 3,
    MIRSXTxENC_COMP_MAP_EXTERNAL_NOT_VALID = 4,
    MIRSXTxENC_COMP_MAP_EXTERNAL_REF_MAK_NOT_VALID = 5,
    MIRSXTxENC_COMP_MAP_START_POS_BEYOND_SA = 6,
    MIRSXTxENC_COMP_MAP_SCAN_INTERVAL_OUT_OF_RANGE = 7,
    MIRSXTxENC_COMP_MAP_TIMEOUT_FOR_MOVEMENT = 8,
    MIRSXTxENC_COMP_MAP_VELOCITY_BELOW_MIN_SPEC = 9,
    MIRSXTxENC_COMP_MAP_VELOCITY_ABOVE_MAX_SPEC = 10,
    MIRSXTxENC_COMP_MAP_NUMERICAL_ANALYSIS = 11,
} MIRSXTxENC_comp_map_error_enum;

typedef enum
{
    MIRSXTxENC_ERRSRC_SIGNAL_CALIBRATION = 0,
    MIRSXTxENC_ERRSRC_REFERENCE = 1,
    MIRSXTxENC_ERRSRC_DELAY_CALIBRATION = 2,
    MIRSXTxENC_ERRSRC_MAX = 3,
} MIRSXTxENC_error_source_enum;

typedef enum
{
    MIRSXTxENC_CALIBRATION_TYPE_SIGNAL = 0,
    MIRSXTxENC_CALIBRATION_TYPE_COMP_MAP = 1,
} MIRSXTxENC_calibration_type_enum;

typedef struct
{
    double x1;
    double y1;
    double y2;
} MIRSXTxENC_power_laser_axes_struct;

typedef struct
{
    bool x1;
    bool y1;
    bool y2;
} MIRSXTxENC_select_axes_struct;

typedef struct
{
    int raw_value;
    bool running;
} MIRSXTxENC_position_axis_struct;

typedef struct
{
    MIRSXTxENC_position_axis_struct x1;
    MIRSXTxENC_position_axis_struct y1;
    MIRSXTxENC_position_axis_struct y2;
} MIRSXTxENC_position_axes_struct;

typedef struct
{
    bool running;
    bool signal_sum_amplitude_error;
    bool clock_10MHz_error;
    bool signal_acceleration_error;
} MIRSXTxENC_status_axis_struct;

typedef struct
{
    MIRSXTxENC_status_axis_struct x1;
    MIRSXTxENC_status_axis_struct y1;
    MIRSXTxENC_status_axis_struct y2;
} MIRSXTxENC_status_axes_struct;

typedef struct
{
    int slot;
    int vector;
    int identification;
    int pga_id;
    int epld_id;
    short application_code;
} MIRSXTxENC_board_status_struct;

typedef struct
{
    int board_idx;
    int channel_idx;
} MIRSXTxENC_channel_id_struct;

typedef struct
{
    bool clip_zero;
    bool clip_max;
    bool amplitude_low;
} MIRSXTxENC_fiber_signal_quality_struct;

typedef struct
{
    MIRSXTxENC_signal_quality_status_enum status;
    MIRSXTxENC_fiber_signal_quality_struct mx1;
    MIRSXTxENC_fiber_signal_quality_struct mx2;
    MIRSXTxENC_fiber_signal_quality_struct mx3;
    double amplitude_mx1;
    double amplitude_mx2;
    double amplitude_mx3;
    double mean_offset;
    double quality;
} MIRSXTxENC_signal_quality_struct;

typedef struct
{
    bool on;
    bool enabled;
    bool interlock_open;
    bool keyswitch_off;
    float power;
    MIRSXTxENC_temperature_status_enum temperature;
    double aging;
} MIRSXTxENC_laser_status_struct;

typedef struct
{
    MIRSXTxENC_signal_calibration_status_enum status;
    int error_code;
    double quality;
} MIRSXTxENC_signal_calibration_status_struct;

typedef struct
{
    bool enabled;
    int timeslot;
    MIRSXTxENC_datatype_enum datatype;
    int datavalue;
} MIRSXTxENC_output_channel_struct;

typedef struct
{
    bool use_input;
    bool enabled;
    int timeslot;
} MIRSXTxENC_input_channel_struct;

typedef MIRSXTxENC_event_classification_enum MIRSXTxENC_channel_struct_classification[0x80];

typedef char MIRSXTxENC_channel_struct_name[0x14];

typedef struct
{
    MIRSXTxENC_channel_struct_classification classification;
    MIRSXTxENC_output_channel_struct output;
    MIRSXTxENC_input_channel_struct input;
    int identification;
    bool invert_position;
    MIRSXTxENC_axis_direction_enum axis_type;
    MIRSXTxENC_channel_struct_name name;
} MIRSXTxENC_channel_struct;

typedef struct
{
    MIRSXTxENC_reference_status_enum status;
    int position;
    double quality;
    int error_code;
    int pa_overscan;
    int pb_overscan;
    int peak_offset_ref;
} MIRSXTxENC_reference_mark_status_struct;

typedef struct
{
    bool all_ok;
    bool pos_5V_fail;
    bool neg_5V_fail;
    double pos_5V;
    double neg_5V;
} MIRSXTxENC_powersupply_status_struct;

typedef struct
{
    bool all_ok;
    double ADC;
    double hybrid;
    double laser;
} MIRSXTxENC_temperature_status_struct;

typedef struct
{
    bool generation_successfull;
    bool generation_failed;
    bool factory_defaults_restored;
    bool no_generation;
    bool no_verify;
    bool invalid;
    bool inuse;
    bool no_extended_signal_calib_done;
    bool no_quality_value_measured_at_pos;
    bool provided_pos_outside_comp_map;
    bool checksum_error;
} MIRSXTxENC_comp_map_status_bits_struct;

typedef struct
{
    MIRSXTxENC_comp_map_error_enum error_code;
    MIRSXTxENC_comp_map_status_bits_struct status;
    int checksum;
} MIRSXTxENC_comp_map_status_struct;

typedef struct
{
    int software_id;
    MIRSXTxENC_temperature_status_struct temperature;
    MIRSXTxENC_powersupply_status_struct powersupply;
    MIRSXTxENC_reference_mark_status_struct reference_mark;
    MIRSXTxENC_channel_struct channel;
    MIRSXTxENC_channel_struct diag_channel;
    int position;
    MIRSXTxENC_signal_calibration_status_struct signal_calibration;
    MIRSXTxENC_comp_map_status_struct compensation_map;
    MIRSXTxENC_laser_status_struct laser;
    short dsp_status;
    MIRSXTxENC_signal_quality_struct quality;
} MIRSXTxENC_channel_status_struct;

typedef struct
{
    MIRSXTxENC_signal_calibration_status_struct x1;
    MIRSXTxENC_signal_calibration_status_struct y1;
    MIRSXTxENC_signal_calibration_status_struct y2;
} MIRSXTxENC_signal_calibration_axes_status_struct;

typedef struct
{
    MIRSXTxENC_comp_map_status_struct x1;
    MIRSXTxENC_comp_map_status_struct y1;
    MIRSXTxENC_comp_map_status_struct y2;
} MIRSXTxENC_comp_map_axes_status_struct;

typedef struct
{
    MIRSXTxENC_comp_map_error_enum error_code;
    MIRSXTxENC_comp_map_status_bits_struct status;
    int position;
    double quality;
} MIRSXTxENC_comp_map_quality_struct;

typedef struct
{
    double sa_counts;
    double sb_counts;
} MIRSXTxENC_comp_map_scan_window_struct;

typedef MIRSXTxENC_channel_id_struct MIRSXTxENC__dump_memory_multiple_channels_channel_id_arr[0x4];

typedef char MIRSXTxENC__dump_memory_multiple_channels_filename[0x50];



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int MIRSXTxENC_get_laser_power(MIRSXTxENC_power_laser_axes_struct *power_laser_axes_ptr);
int MIRSXTxENC_get_position_axes(MIRSXTxENC_position_axes_struct *position_axes_ptr);
int MIRSXTxENC_get_status_axes(MIRSXTxENC_status_axes_struct *status_axes_ptr);
int MIRSXTxENC_get_board_status(const int *board_idx,
	MIRSXTxENC_board_status_struct *board_status_ptr);
int MIRSXTxENC_get_channel_status(const MIRSXTxENC_channel_id_struct *channel_id_ptr,
	MIRSXTxENC_channel_status_struct *channel_status_ptr);
int MIRSXTxENC_get_calibration_movement_params(const MIRSXTxENC_calibration_type_enum *calib_type,
	MIRSXAxENC_movement_params_struct *calib_params);
int MIRSXTxENC_start_signal_calibration(const MIRSXTxENC_signal_calibration_mode_enum *signal_calibration_mode);
int MIRSXTxENC_stop_signal_calibration(MIRSXTxENC_signal_calibration_axes_status_struct *status_ptr);
int MIRSXTxENC_start_generate_comp_map(const MIRSXTxENC_comp_map_type_enum *generate_comp_type);
int MIRSXTxENC_stop_generate_comp_map(MIRSXTxENC_comp_map_axes_status_struct *status_ptr);
int MIRSXTxENC_enable_comp_map(const bool *enable);
int MIRSXTxENC_get_compensation_map_configuration(bool *comp_map_enabled,
	MIRSXTxENC_comp_map_scan_window_struct *scan_window);
int MIRSXTxENC_comp_map_quality(const MIRSXTxENC_channel_id_struct *channel_id_ptr,
	const int *position,
	MIRSXTxENC_comp_map_quality_struct *quality_ptr);
int MIRSXTxENC_enable_velocity_comp(const bool *enable);
int MIRSXTxENC_dump_memory_multiple_channels(const MIRSXTxENC__dump_memory_multiple_channels_channel_id_arr *channel_id_arr,
	const int *nchannels,
	const MIRSXTxENC__dump_memory_multiple_channels_filename *filename,
	const int *memory_dump_size);
int MIRSXTxENC_enable_laser(const MIRSXAxENC_axes_enum *axis,
	const MIRSXAxENC_laser_status_enum *laser_status);



#endif // _MIRSXTxENC_TC_H_
