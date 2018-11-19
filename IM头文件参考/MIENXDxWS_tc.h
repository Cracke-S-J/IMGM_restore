/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : MI
* 模块名称 : MIENXDxWS
* 文件名称 : MIENXDxWS_tc.h
* 概要描述 :
*	MI组件MIENXDxWS数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _MIENXDxWS_TC_H_
#define _MIENXDxWS_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <WPxCHUCK_tc.h> 
#include <MIENXTxWS_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    MIENXDxWS_GOAB_STATE_UNKOWN = 0,
    MIENXDxWS_GOAB_STATE_BOOTING = 1,
    MIENXDxWS_GOAB_STATE_HALTED = 2,
    MIENXDxWS_GOAB_STATE_BISTPHASE1 = 3,
    MIENXDxWS_GOAB_STATE_WAITING = 4,
    MIENXDxWS_GOAB_STATE_APEWAITING = 5,
    MIENXDxWS_GOAB_STATE_BISTPHASE2 = 6,
    MIENXDxWS_GOAB_STATE_OPERATIONAL = 7,
    MIENXDxWS_GOAB_STATE_TERMINATED = 8,
} MIENXDxWS_goab_state_enum;

typedef enum
{
    MIENXDxWS_HIB398_CMD_INITIALIZE = 1,
    MIENXDxWS_HIB398_CMD_TERMINATE = 2,
    MIENXDxWS_HIB398_CMD_SWITCHLASER = 4,
    MIENXDxWS_HIB398_CMD_SWITCHAPEFIRMWARE = 8,
    MIENXDxWS_HIB398_CMD_DOWNLOADDATA = 9,
    MIENXDxWS_HIB398_CMD_SETUPHPDBOUTPUT = 4112,
    MIENXDxWS_HIB398_CMD_QUERYHPDBOUTPUT = 4129,
    MIENXDxWS_HIB398_CMD_SETUPHPDBINPUT = 4115,
    MIENXDxWS_HIB398_CMD_CONFIGPOSITIONFILTER = 4114,
    MIENXDxWS_HIB398_CMD_QUERYPOSITIONFILTER = 4133,
    MIENXDxWS_HIB398_CMD_READSYSTEMPARAMETER = 5,
    MIENXDxWS_HIB398_CMD_WRITESYSTEMPARAMETER = 6,
    MIENXDxWS_HIB398_CMD_SETINITIALVALUE = 4113,
    MIENXDxWS_HIB398_CMD_CALIBRATESIGNALS = 4160,
    MIENXDxWS_HIB398_CMD_QUERYCALIBRATION = 4131,
    MIENXDxWS_HIB398_CMD_QUERYSIGNAL = 4132,
    MIENXDxWS_HIB398_CMD_FINDGRIDPLATESN = 4162,
    MIENXDxWS_HIB398_CMD_QUERYGRIDPLATESN = 4134,
    MIENXDxWS_HIB398_CMD_FINDREFERENCEMARK = 4161,
    MIENXDxWS_HIB398_CMD_QUERYREFERENCEMARKDATA = 4135,
    MIENXDxWS_HIB398_CMD_READSYSTEMSTATE = 50,
    MIENXDxWS_HIB398_CMD_SETEVENTMASK = 48,
    MIENXDxWS_HIB398_CMD_READEVENTMASK = 49,
    MIENXDxWS_HIB398_CMD_QUERYPOSITION = 4128,
    MIENXDxWS_HIB398_CMD_READSYSTEMIDNUMBERS = 3,
    MIENXDxWS_HIB398_CMD_READSERIALNUMBERS = 7,
    MIENXDxWS_HIB398_CMD_DIAGNOSEMAP = 10,
    MIENXDxWS_HIB398_CMD_QUERYBIST = 32,
    MIENXDxWS_HIB398_CMD_CONTROLMEMORYDUMP = 256,
    MIENXDxWS_HIB398_CMD_READMEMORYDUMPPAGE = 257,
    MIENXDxWS_HIB398_CMD_QUERYHIB = 33,
    MIENXDxWS_HIB398_CMD_QUERYAPE = 34,
    MIENXDxWS_HIB398_CMD_QUERYAPETEMPERATURE = 35,
    MIENXDxWS_HIB398_CMD_QUERYAXIS = 4130,
    MIENXDxWS_HIB398_CMD_ENABLEHFMAP = 4164,
    MIENXDxWS_HIB398_CMD_QUERYHFMAP = 36,
    MIENXDxWS_HIB398_CMD_NEXTREFMARKSTARTPOSITION = 4163,
    MIENXDxWS_HIB398_CMD_QUERYHFMAPRM = 4137,
} MIENXDxWS_hib398_cmd_enum;

typedef enum
{
    MIENXDxWS_SYSTEM_ID_GOAB = 0,
    MIENXDxWS_SYSTEM_ID_BOARD = 1,
    MIENXDxWS_SYSTEM_ID_SYS_FPGA = 2,
    MIENXDxWS_SYSTEM_ID_XCV_FPGA = 3,
    MIENXDxWS_SYSTEM_ID_APE_INITIAL = 4,
    MIENXDxWS_SYSTEM_ID_APE_OPERATIONAL = 5,
    MIENXDxWS_SYSTEM_ID_APE_CURRENT = 6,
    MIENXDxWS_SYSTEM_ID_APE_HARDWARE = 7,
} MIENXDxWS_system_id_enum;

typedef enum
{
    MIENXDxWS_SERIAL_NUMBER_HF_MAP_M1 = 0,
    MIENXDxWS_SERIAL_NUMBER_HF_MAP_M2 = 1,
    MIENXDxWS_SERIAL_NUMBER_HF_MAP_M3 = 2,
    MIENXDxWS_SERIAL_NUMBER_HF_MAP_M4 = 3,
    MIENXDxWS_SERIAL_NUMBER_HF_MAP_E1 = 4,
    MIENXDxWS_SERIAL_NUMBER_HF_MAP_E2 = 5,
    MIENXDxWS_SERIAL_NUMBER_HF_MAP_E3 = 6,
    MIENXDxWS_SERIAL_NUMBER_HF_MAP_E4 = 7,
    MIENXDxWS_SERIAL_NUMBER_GOAB = 8,
    MIENXDxWS_SERIAL_NUMBER_GERB = 9,
} MIENXDxWS_serial_number_enum;

typedef struct
{
    bool goab1_board;
    bool goab2_board;
    bool goab1_sensors;
    bool goab2_sensors;
    bool goab1_hfmaps;
    bool goab2_hfmaps;
} MIENXDxWS_sim3_flags_struct;

typedef enum
{
    MIENXDxWS_HF_MAP_ALL = 0,
    MIENXDxWS_HF_MAP_M1 = 1,
    MIENXDxWS_HF_MAP_M2 = 2,
    MIENXDxWS_HF_MAP_M3 = 3,
    MIENXDxWS_HF_MAP_M4 = 4,
    MIENXDxWS_HF_MAP_E1 = 5,
    MIENXDxWS_HF_MAP_E2 = 6,
    MIENXDxWS_HF_MAP_E3 = 7,
    MIENXDxWS_HF_MAP_E4 = 8,
} MIENXDxWS_hfmap_id_enum;

typedef struct
{
    bool laser_on;
    bool interlock_active;
} MIENXDxWS_laser_status_struct;

typedef struct
{
    double laser_temperature;
    double board_temperature;
    int laser_quality;
} MIENXDxWS_laser_info_struct;

typedef struct
{
    bool enabled;
    int timeslot;
    MIENXTxWS_datatype_enum datatype;
} MIENXDxWS_hpdb_axis_output_struct;

typedef MIENXDxWS_hpdb_axis_output_struct MIENXDxWS_hpdb_output_struct_config[0x2][0x8];

typedef struct
{
    MIENXDxWS_hpdb_output_struct_config config;
} MIENXDxWS_hpdb_output_struct;

typedef struct
{
    bool clock_40mhz_error;
    bool frame_sync_40mhz_error;
    bool sync_40mhz_error;
    bool communication_error;
    bool laser_hardware_error;
    bool analog_input_path_error;
    bool diagnostic_adc_path_error;
} MIENXDxWS_gerb_bist_struct;

typedef struct
{
    bool clock_10mhz_error;
    bool clock_40mhz_error;
    bool frame_sync_10mhz_error;
    bool frame_sync_40mhz_error;
    bool hardware_error;
} MIENXDxWS_goab_bist_struct;

typedef char MIENXDxWS_string[0x80];

typedef MIENXDxWS_string MIENXDxWS_serial_numbers_array[0xA];

typedef MIENXDxWS_string MIENXDxWS_system_ids_array[0x8];

typedef struct
{
    bool acceleration_error;
    bool lissajous_radius_error;
    bool communication_error;
} MIENXDxWS_axis_errors_struct;

typedef struct
{
    MIENXDxWS_axis_errors_struct errors;
    int radius;
} MIENXDxWS_axis_status_struct;

typedef MIENXDxWS_axis_status_struct MIENXDxWS_axes_status_struct_axis[0x8];

typedef struct
{
    MIENXDxWS_axes_status_struct_axis axis;
} MIENXDxWS_axes_status_struct;

typedef struct
{
    bool clock_10mhz_error;
    bool clock_40mhz_error;
    bool frame_sync_10mhz_error;
    bool frame_sync_40mhz_error;
} MIENXDxWS_goab_clock_struct;

typedef struct
{
    bool not_loaded_since_last_startup;
    bool has_changed;
    bool checksum_error;
    bool versions_error;
} MIENXDxWS_goab_pb_struct;

typedef struct
{
    MIENXDxWS_goab_clock_struct clock;
    bool hardware_error;
    MIENXDxWS_goab_pb_struct parameter_block;
} MIENXDxWS_goab_board_status_struct;

typedef struct
{
    bool power_supply_disabled;
    bool ilock_signal_active;
    bool no_supply_current_detected;
    bool no_ape_communication;
    bool transmission_errors_exceed_limit;
    bool initial_firmware_active;
    bool operational_firmware_active;
    bool laser_on;
    bool laser_off;
    bool clock_error;
    bool hardware_error;
    bool laser_quality_calculation_possible;
    bool laser_switched_off_by_hardware;
} MIENXDxWS_gerb_status_struct;

typedef struct
{
    bool clock_40mhz_error;
    bool frame_sync_40mhz_error;
    bool sync_40mhz_error;
} MIENXDxWS_gerb_clock_struct;

typedef struct
{
    bool laser_power_supply_out_of_range;
    bool analog_power_supply_out_of_range;
    bool laser_temperature_out_of_range;
    bool pcb_temperature_out_of_range;
    bool laser_module_hardware_error;
} MIENXDxWS_gerb_hardware_status_struct;

typedef struct
{
    bool update_is_running;
    bool update_is_finished;
    bool download_eror;
    bool transfer_error;
} MIENXDxWS_gerb_firmware_status;

typedef struct
{
    bool gerb_available;
    MIENXDxWS_gerb_status_struct status;
    MIENXDxWS_gerb_clock_struct clock;
    MIENXDxWS_gerb_hardware_status_struct hardware;
    int laser_quality;
    int comm_quality;
    MIENXDxWS_gerb_firmware_status firmware;
} MIENXDxWS_gerb_board_status_struct;

typedef enum
{
    MIENXDxWS_SIGNAL_CALIBR_VALID = 0,
    MIENXDxWS_SIGNAL_CALIBR_FAILED = 1,
    MIENXDxWS_SIGNAL_CALIBR_RUNNING = 2,
    MIENXDxWS_SIGNAL_CALIBR_FACTORY = 3,
    MIENXDxWS_SIGNAL_CALIBR_NONE = 4,
} MIENXDxWS_signal_calibr_info_enum;

typedef enum
{
    MIENXDxWS_NO_ERROR = 0,
    MIENXDxWS_NO_SIGNALS = 1,
    MIENXDxWS_SIGNAL_CLIPPING = 2,
    MIENXDxWS_SIGNAL_I90_MISSING = 3,
    MIENXDxWS_SIGNAL_I210_MISSING = 4,
    MIENXDxWS_SIGNAL_I330_MISSING = 5,
    MIENXDxWS_STANDSTILL_DETECTED = 6,
    MIENXDxWS_SIGNAL_AMPLITUDES_VARY = 7,
    MIENXDxWS_VELOCITY_OUT_OF_RANGE = 8,
    MIENXDxWS_NUMERICAL_ANALYSIS = 9,
    MIENXDxWS_UNKNOWN_ERROR = 10,
} MIENXDxWS_signal_calibr_error_enum;

typedef struct
{
    MIENXDxWS_signal_calibr_info_enum status;
    int error_code;
    MIENXDxWS_signal_calibr_error_enum error_enum;
} MIENXDxWS_signal_calibr_struct;

typedef MIENXDxWS_signal_calibr_struct MIENXDxWS_signal_calibration_struct_axis[0x8];

typedef struct
{
    MIENXDxWS_signal_calibration_struct_axis axis;
} MIENXDxWS_signal_calibration_struct;

typedef struct
{
    bool signal_calibration_recommended;
    bool online_comp_params_limited;
    bool no_signal_diagnosis;
    bool signal_I90_clipping_detected;
    bool signal_I90_amplitude_too_low;
    bool signal_I210_clipping_detected;
    bool signal_I210_amplitude_too_low;
    bool signal_I330_clipping_detected;
    bool signal_I330_amplitude_too_low;
} MIENXDxWS_signal_quality_errors;

typedef struct
{
    int amplitude_quality;
    int modulation_quality;
    int real_lissajous_radius;
    MIENXDxWS_signal_quality_errors errors;
} MIENXDxWS_signal_quality_struct;

typedef MIENXDxWS_signal_quality_struct MIENXDxWS_signal_quality_array_axis[0x8];

typedef struct
{
    MIENXDxWS_signal_quality_array_axis axis;
} MIENXDxWS_signal_quality_array;

typedef struct
{
    MIENXTxWS_hfmap_type_enum type;
    int version;
    int timestamp;
    bool valid;
    bool diagnosis_done;
    bool diagnosis_active;
    bool enabled;
} MIENXDxWS_hfmap_diagnosis_struct;

typedef int MIENXDxWS__issue_direct_command_datain[0x8];

typedef int MIENXDxWS__issue_direct_command_dataout[0x8];

typedef char MIENXDxWS__query_status_err_txt[0x100];

typedef char MIENXDxWS__create_diagnostics_file_adv_filename[0x80];

typedef char MIENXDxWS__get_system_id_system_id[0x80];

typedef char MIENXDxWS__get_serial_number_serial_number[0x80];



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int MIENXDxWS_issue_direct_command(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXDxWS_hib398_cmd_enum *command,
	const MIENXDxWS__issue_direct_command_datain *datain,
	MIENXDxWS__issue_direct_command_dataout *dataout);
int MIENXDxWS_query_status(const WPxCHUCK_chuck_id_enum *chuck_id,
	MIENXDxWS__query_status_err_txt *err_txt);
int MIENXDxWS_get_laser_state(const WPxCHUCK_chuck_id_enum *chuck_id,
	MIENXDxWS_laser_status_struct *laser_status);
int MIENXDxWS_get_laser_info(const WPxCHUCK_chuck_id_enum *chuck_id,
	MIENXDxWS_laser_info_struct *laser_info);
int MIENXDxWS_create_diagnostics_file_adv(const WPxCHUCK_chuck_id_enum *chuck_id,
	const int *mode,
	const int *param1,
	const int *param2,
	const int *param3,
	const MIENXDxWS__create_diagnostics_file_adv_filename *filename);
int MIENXDxWS_get_system_id(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXDxWS_system_id_enum *identifier,
	MIENXDxWS__get_system_id_system_id *system_id);
int MIENXDxWS_get_serial_number(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXDxWS_serial_number_enum *sn_index,
	const bool *output_decimal,
	MIENXDxWS__get_serial_number_serial_number *serial_number);
int MIENXDxWS_get_vme_slot_number(const WPxCHUCK_chuck_id_enum *chuck_id,
	int *slot_nr);
int MIENXDxWS_get_bist_status(const WPxCHUCK_chuck_id_enum *chuck_id,
	MIENXDxWS_goab_state_enum *operation_state,
	MIENXDxWS_gerb_bist_struct *gerb_bist,
	MIENXDxWS_goab_bist_struct *goab_bist);
int MIENXDxWS_get_sim3_flags(MIENXDxWS_sim3_flags_struct *flags);
int MIENXDxWS_get_axes_status(const WPxCHUCK_chuck_id_enum *chuck_id,
	MIENXDxWS_axes_status_struct *axes_status);
int MIENXDxWS_get_goab_board_status(const WPxCHUCK_chuck_id_enum *chuck_id,
	MIENXDxWS_goab_board_status_struct *board_status);
int MIENXDxWS_get_gerb_board_status(const WPxCHUCK_chuck_id_enum *chuck_id,
	MIENXDxWS_gerb_board_status_struct *board_status);
int MIENXDxWS_get_signal_calibration_status(const WPxCHUCK_chuck_id_enum *chuck_id,
	MIENXDxWS_signal_calibration_struct *status);
int MIENXDxWS_get_signal_quality(const WPxCHUCK_chuck_id_enum *chuck_id,
	MIENXDxWS_signal_quality_array *signal_quality);
int MIENXDxWS_get_hpdb_output(const WPxCHUCK_chuck_id_enum *chuck_id,
	MIENXDxWS_hpdb_output_struct *output);
int MIENXDxWS_is_hfmap_diagnosis_done(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWS_grid_plate_enum *grid_plate,
	bool *diagnosis_done,
	bool *diagnosis_active);
int MIENXDxWS_get_hfmap_diagnosis_results(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWS_grid_plate_enum *grid_plate,
	MIENXDxWS_hfmap_diagnosis_struct *hfmap_diagnosis);
int MIENXDxWS_start_hfmap_diagnosis(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXDxWS_hfmap_id_enum *hfmap_id,
	bool *diagnosis_already_active);



#endif // _MIENXDxWS_TC_H_
