/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : MI
* 模块名称 : MIENXTxWS
* 文件名称 : MIENXTxWS_tc.h
* 概要描述 :
*	MI组件MIENXTxWS数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _MIENXTxWS_TC_H_
#define _MIENXTxWS_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <base.h> 
#include <WPxCHUCK_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    MIENXTxWS_SENSOR_1 = 0,
    MIENXTxWS_SENSOR_2 = 1,
    MIENXTxWS_SENSOR_3 = 2,
    MIENXTxWS_SENSOR_4 = 3,
} MIENXTxWS_sensor_enum;

typedef enum
{
    MIENXTxWS_AXIS_1A = 0,
    MIENXTxWS_AXIS_1B = 1,
    MIENXTxWS_AXIS_2A = 2,
    MIENXTxWS_AXIS_2B = 3,
    MIENXTxWS_AXIS_3A = 4,
    MIENXTxWS_AXIS_3B = 5,
    MIENXTxWS_AXIS_4A = 6,
    MIENXTxWS_AXIS_4B = 7,
    MIENXTxWS_AXIS_ALL = 8,
} MIENXTxWS_raw_axis_id_enum;

typedef enum
{
    MIENXTxWS_CHUCK1_MEAS = 0,
    MIENXTxWS_CHUCK2_MEAS = 1,
    MIENXTxWS_CHUCK1_EXP = 2,
    MIENXTxWS_CHUCK2_EXP = 3,
} MIENXTxWS_chuck_pos_id_enum;

typedef enum
{
    MIENXTxWS_FILTER1 = 0,
    MIENXTxWS_FILTER2 = 1,
} MIENXTxWS_filter_id_enum;

typedef enum
{
    MIENXTxWS_SIGNAL_CALIBR_VALID = 0,
    MIENXTxWS_SIGNAL_CALIBR_FAILED = 1,
    MIENXTxWS_SIGNAL_CALIBR_RUNNING = 2,
    MIENXTxWS_SIGNAL_CALIBR_FACTORY = 3,
    MIENXTxWS_SIGNAL_CALIBR_NONE = 4,
} MIENXTxWS_signal_calibr_status_enum;

typedef enum
{
    MIENXTxWS_CALIBR_TYPE_MEASURE = 0,
    MIENXTxWS_CALIBR_TYPE_BETWEEN_M_E = 1,
    MIENXTxWS_CALIBR_TYPE_EXPOSE = 2,
    MIENXTxWS_CALIBR_TYPE_RUNOUT = 3,
    MIENXTxWS_MAX_CALIBR_TYPE = 4,
} MIENXTxWS_calibr_type_enum;

typedef enum
{
    MIENXTxWS_PASS_TRAJECTORY_TA1_H = 0,
    MIENXTxWS_PASS_TRAJECTORY_TA1_V = 1,
    MIENXTxWS_PASS_TRAJECTORY_TB2_H = 2,
    MIENXTxWS_PASS_TRAJECTORY_TB2_V = 3,
    MIENXTxWS_PASS_TRAJECTORY_TB1_H = 4,
    MIENXTxWS_PASS_TRAJECTORY_TB1_V = 5,
    MIENXTxWS_PASS_TRAJECTORY_TA2_H = 6,
    MIENXTxWS_PASS_TRAJECTORY_TA2_V = 7,
} MIENXTxWS_pass_trajectory_enum;

typedef enum
{
    MIENXTxWS_GRID_PLATE_M1 = 0,
    MIENXTxWS_GRID_PLATE_M2 = 1,
    MIENXTxWS_GRID_PLATE_M3 = 2,
    MIENXTxWS_GRID_PLATE_M4 = 3,
    MIENXTxWS_GRID_PLATE_E1 = 4,
    MIENXTxWS_GRID_PLATE_E2 = 5,
    MIENXTxWS_GRID_PLATE_E3 = 6,
    MIENXTxWS_GRID_PLATE_E4 = 7,
} MIENXTxWS_grid_plate_enum;

typedef enum
{
    MIENXTxWS_REF_MARK_1 = 0,
    MIENXTxWS_REF_MARK_2 = 1,
} MIENXTxWS_ref_mark_enum;

typedef enum
{
    MIENXTxWS_INFO_NONE = 0,
    MIENXTxWS_INFO_PASS_SUCCESSFUL = 1,
    MIENXTxWS_INFO_PASS_RUNNING = 2,
    MIENXTxWS_INFO_NO_REF_MARK_DETECTED = 3,
    MIENXTxWS_INFO_DETECTION_PENDING = 4,
} MIENXTxWS_info_enum;

typedef enum
{
    MIENXTxWS_DATATYPE_POSITION = 0,
    MIENXTxWS_DATATYPE_INCREMENTAL = 1,
    MIENXTxWS_DATATYPE_CONSTANT = 2,
    MIENXTxWS_DATATYPE_BIT_SHIFTED = 3,
    MIENXTxWS_DATATYPE_PACKED_SIGNALS = 4,
    MIENXTxWS_DATATYPE_LISSAJOUS_RADIUS = 5,
    MIENXTxWS_DATATYPE_POSITION_ERROR_INFO = 6,
    MIENXTxWS_DATATYPE_HFMAP_CORRECTION = 7,
} MIENXTxWS_datatype_enum;

typedef enum
{
    MIENXTxWS_CHANNEL_RAW = 0,
    MIENXTxWS_CHANNEL_DIAG = 1,
} MIENXTxWS_channel_enum;

typedef enum
{
    MIENXTxWS_LASER_STATE_OFF = 0,
    MIENXTxWS_LASER_STATE_ON = 1,
} MIENXTxWS_laser_state_enum;

typedef enum
{
    MIENXTxWS_HFMAP_TYPE_NONE = 0,
    MIENXTxWS_HFMAP_TYPE_JH = 1,
    MIENXTxWS_HFMAP_TYPE_ASML = 2,
} MIENXTxWS_hfmap_type_enum;

typedef enum
{
    MIENXTxWS_DIAGNOSTICS_FULL = 0,
    MIENXTxWS_DIAGNOSTICS_SHORT = 1,
    MIENXTxWS_DIAGNOSTICS_REFMARK = 2,
    MIENXTxWS_DIAGNOSTICS_CUSTOMER = 3,
} MIENXTxWS_diagnostics_enum;

typedef enum
{
    MIENXTxWS_REFRESH_NOT_NEEDED = 0,
    MIENXTxWS_REFRESH_RECOMMENDED = 1,
    MIENXTxWS_REFRESH_NOT_RECOMMENDED = 2,
} MIENXTxWS_refresh_recommendation_enum;

typedef struct
{
    MIENXTxWS_signal_calibr_status_enum status;
    int error_code;
} MIENXTxWS_signal_calibr_status_struct;

typedef MIENXTxWS_signal_calibr_status_struct MIENXTxWS_signal_calibr_axis_status_struct_axis[0x9];

typedef struct
{
    MIENXTxWS_signal_calibr_axis_status_struct_axis axis;
} MIENXTxWS_signal_calibr_axis_status_struct;

typedef struct
{
    MIENXTxWS_pass_trajectory_enum pass_id;
    MIENXTxWS_info_enum info;
    int quality;
} MIENXTxWS_ref_mark_data_struct;

typedef struct
{
    bool enabled;
    double gain;
    double zero_freq;
    double zero_damp;
    double pole_freq;
    double pole_damp;
} MIENXTxWS_2nd_order_filter_params_struct;

typedef MIENXTxWS_2nd_order_filter_params_struct MIENXTxWS_position_filter_mc_struct_position_filter[0x9][0x2];

typedef struct
{
    MIENXTxWS_position_filter_mc_struct_position_filter position_filter;
} MIENXTxWS_position_filter_mc_struct;

typedef char MIENXTxWS_hf_map_context_struct_version[0x80];

typedef char MIENXTxWS_hf_map_context_struct_comment[0x80];

typedef struct
{
    MIENXTxWS_hf_map_context_struct_version version;
    MIENXTxWS_hf_map_context_struct_comment comment;
    timestamp creation_time;
    bool active;
} MIENXTxWS_hf_map_context_struct;

typedef char MIENXTxWS_plate_context_struct_plate_version[0x80];

typedef struct
{
    MIENXTxWS_plate_context_struct_plate_version plate_version;
    int jh_plate_id;
} MIENXTxWS_plate_context_struct;

typedef char MIENXTxWS__write_parameter_block_filename[0x80];

typedef char MIENXTxWS__read_parameter_block_filename[0x80];

typedef char MIENXTxWS__create_diagnostics_file_filename[0x80];

typedef char MIENXTxWS__download_hf_map_filename[0x80];

typedef char MIENXTxWS__get_hf_map_serial_no_serial_no[0x80];



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int MIENXTxWS_start_signal_calibration(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWS_calibr_type_enum *calibr_type);
int MIENXTxWS_finish_signal_calibration(const WPxCHUCK_chuck_id_enum *chuck_id,
	MIENXTxWS_signal_calibr_axis_status_struct *calibr_status_p);
int MIENXTxWS_get_filter_params(const WPxCHUCK_chuck_id_enum *chuck_id,
	MIENXTxWS_position_filter_mc_struct *filter_params);
int MIENXTxWS_set_filter_params(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWS_position_filter_mc_struct *filter_params);
int MIENXTxWS_write_parameter_block(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWS__write_parameter_block_filename *filename);
int MIENXTxWS_read_parameter_block(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWS__read_parameter_block_filename *filename);
int MIENXTxWS_create_diagnostics_file(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWS_diagnostics_enum *type,
	const MIENXTxWS__create_diagnostics_file_filename *filename);
int MIENXTxWS_download_hf_map(const MIENXTxWS__download_hf_map_filename *filename,
	const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWS_grid_plate_enum *grid_plate,
	const MIENXTxWS_hf_map_context_struct *hfmap_context,
	const MIENXTxWS_plate_context_struct *plate_context);
int MIENXTxWS_get_hf_map_serial_no(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWS_grid_plate_enum *grid_plate,
	MIENXTxWS__get_hf_map_serial_no_serial_no *serial_no);
int MIENXTxWS_set_hf_map_active(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWS_grid_plate_enum *grid_plate,
	const bool *new_state);
int MIENXTxWS_get_hf_map_context(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWS_grid_plate_enum *grid_plate,
	MIENXTxWS_hf_map_context_struct *context);
int MIENXTxWS_get_plate_context(const MIENXTxWS_grid_plate_enum *grid_plate,
	MIENXTxWS_plate_context_struct *context);
int MIENXTxWS_set_plate_context(const MIENXTxWS_grid_plate_enum *grid_plate,
	const MIENXTxWS_plate_context_struct *context);
int MIENXTxWS_finish_hf_map_download(const WPxCHUCK_chuck_id_enum *chuck_id);
int MIENXTxWS_start_reference_mark_search(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWS_grid_plate_enum *grid_plate,
	const MIENXTxWS_pass_trajectory_enum *pass_id);
int MIENXTxWS_get_next_start_position(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWS_grid_plate_enum *grid_plate,
	const MIENXTxWS_pass_trajectory_enum *pass_id,
	xyzvect *next_start_position_ptr);
int MIENXTxWS_get_reference_mark_data(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWS_grid_plate_enum *grid_plate,
	MIENXTxWS_ref_mark_data_struct *rm_data);
int MIENXTxWS_get_reference_mark_position(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWS_grid_plate_enum *grid_plate,
	xyzvect *rm_position_ptr);
int MIENXTxWS_get_default_hfmap_reference_mark_position(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWS_grid_plate_enum *grid_plate,
	const MIENXTxWS_ref_mark_enum *ref_mark,
	xyzvect *rm_position_ptr);
int MIENXTxWS_get_hfmap_reference_mark_position(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWS_grid_plate_enum *grid_plate,
	const MIENXTxWS_ref_mark_enum *ref_mark,
	xyzvect *rm_position_ptr);
int MIENXTxWS_set_hpdb_output(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWS_raw_axis_id_enum *axis_id,
	const MIENXTxWS_channel_enum *channel_id,
	const MIENXTxWS_datatype_enum *datatype,
	const bool *enable,
	const int *value);
int MIENXTxWS_switch_laser(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWS_laser_state_enum *laser_state);
int MIENXTxWS_get_hfmap_type(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWS_grid_plate_enum *grid_plate,
	MIENXTxWS_hfmap_type_enum *hfmap_type);
int MIENXTxWS_get_supported_hfmap_version(const WPxCHUCK_chuck_id_enum *chuck_id,
	bool *supports_hfmaps,
	int *supported_hfmap_version);
int MIENXTxWS_get_refresh_gerb_flash_info(const WPxCHUCK_chuck_id_enum *chuck_id,
	MIENXTxWS_refresh_recommendation_enum *refresh_recommendation,
	bool *time_valid,
	timestamp *time_of_last_refresh);
int MIENXTxWS_refresh_gerb_flash(const bool *refresh_chuck1,
	const bool *refresh_chuck2);



#endif // _MIENXTxWS_TC_H_
