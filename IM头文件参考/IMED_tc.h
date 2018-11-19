/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMED
* 文件名称 : IMED_tc.h
* 概要描述 :
*	IM组件IMED数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMED_TC_H_
#define _IMED_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <IMEDxTC_tc.h> 
#include <RQRPxMCxRMZ_tc.h> 
#include <AMXAxSTAB_tc.h> 
#include <QRRPxCRxSCAN_tc.h> 
#include <MIRSXAxENC_tc.h> 
#include <MIRSXTxENC_tc.h> 
#include <base.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    IMED_TRACE_SELECT_NONE = 0,
    IMED_TRACE_SELECT_FIBER = 1,
    IMED_TRACE_SELECT_FIBER_Y1 = 2,
    IMED_TRACE_SELECT_FIBER_Y2 = 3,
    IMED_TRACE_SELECT_FIBER_X1 = 4,
    IMED_TRACE_SELECT_HEAD_RX = 5,
    IMED_TRACE_SELECT_HEAD_RY = 6,
    IMED_TRACE_SELECT_HEAD_RZ = 7,
    IMED_TRACE_SELECT_RELIABILITY = 8,
    IMED_TRACE_SELECT_SIGNAL = 9,
    IMED_TRACE_SELECT_FULL = 10,
    IMED_TRACE_SELECT_COMP_MAP_RADIUS = 11,
} IMED_trace_select_enum;

typedef enum
{
    IMED_TRACE_DATA_POS_RAW_Y1 = 0,
    IMED_TRACE_DATA_POS_RAW_Y2 = 1,
    IMED_TRACE_DATA_POS_RAW_X1 = 2,
    IMED_TRACE_DATA_POS_Y_POS = 3,
} IMED_trace_data_pos_enum;

typedef enum
{
    IMED_VELOCITY_MACHINE_CONST = 1,
    IMED_VELOCITY_TEST_CONST = 2,
    IMED_VELOCITY_MAX = 3,
} IMED_velocity_enum;

typedef enum
{
    IMED_MOVE_PROFILE_MC_BFC = 0,
    IMED_MOVE_PROFILE_MC_SCAN = 1,
    IMED_MOVE_PROFILE_TEST_CONST = 2,
    IMED_MOVE_PROFILE_HEAD = 3,
} IMED_move_profile_enum;

typedef enum
{
    IMED_HEADSCALE_CM_BFC = 1,
    IMED_HEADSCALE_CM_SCAN = 2,
    IMED_HEADSCALE_CM = 3,
} IMED_headscale_cm_enum;

typedef enum
{
    IMED_LOW_LEVEL_TESTS = 0,
    IMED_ANALITYCAL_TESTS = 1,
} IMED_test_type_enum;

typedef enum
{
    IMED_NA = 0,
    IMED_NOK = 1,
    IMED_OK = 2,
    IMED_LOW = 3,
    IMED_UNEXP = 4,
    IMED_NC = 5,
    IMED_VALID = 6,
    IMED_INVALID = 7,
} IMED_result_enum;

typedef enum
{
    IMED_FIBER_Y1_M1 = 0,
    IMED_FIBER_Y1_M2 = 1,
    IMED_FIBER_Y1_M3 = 2,
    IMED_FIBER_Y2_M1 = 3,
    IMED_FIBER_Y2_M2 = 4,
    IMED_FIBER_Y2_M3 = 5,
    IMED_FIBER_X1_M1 = 6,
    IMED_FIBER_X1_M2 = 7,
    IMED_FIBER_X1_M3 = 8,
} IMED_fiber_enum;

typedef enum
{
    IMED_FIBER_ENC_Y1 = 0,
    IMED_FIBER_ENC_Y2 = 1,
    IMED_FIBER_ENC_X1 = 2,
} IMED_fiber_enc_enum;

typedef enum
{
    IMED_AXIS_Y1 = 0,
    IMED_AXIS_Y2 = 1,
    IMED_AXIS_X1 = 2,
} IMED_axis_enum;

typedef enum
{
    IMED_LASER_CMD_Y1 = 0,
    IMED_LASER_CMD_Y2 = 1,
    IMED_LASER_CMD_X1 = 2,
    IMED_LASER_CMD_ALL_ON = 3,
} IMED_laser_cmd_enum;

typedef enum
{
    IMED_AXIS_SIG_Y1 = 0,
    IMED_AXIS_SIG_Y2 = 1,
    IMED_AXIS_SIG_X1 = 2,
    IMED_AXIS_POSITION = 3,
} IMED_axis_pos_enum;

typedef enum
{
    IMED_DIR_AXIS_X = 0,
    IMED_DIR_AXIS_Y = 1,
    IMED_DIR_AXIS_RZ = 2,
    IMED_DIR_AXIS_MAX = 3,
} IMED_dir_axis_enum;

typedef enum
{
    IMED_DIR_POS_0 = 0,
    IMED_DIR_POS_1 = 1,
    IMED_DIR_POS_2 = 2,
    IMED_DIR_POS_3 = 3,
} IMED_dir_pos_enum;

typedef enum
{
    IMED_SIGNAL_1 = 0,
    IMED_SIGNAL_2 = 1,
    IMED_SIGNAL_3 = 2,
    IMED_SIGNAL_OFFSET = 3,
    IMED_SIGNAL_RADIUS = 4,
} IMED_signal_enum;

typedef enum
{
    IMED_FULL_X_MIDDLE = 0,
    IMED_FULL_X_MIN = 1,
    IMED_FULL_X_MAX = 2,
} IMED_full_enum;

typedef enum
{
    IMED_HEAD_RX = 0,
    IMED_HEAD_RY = 1,
    IMED_HEAD_RZ = 2,
} IMED_head_enum;

typedef enum
{
    IMED_FULL_RPT_X_MIDDLE_Y1_MIN = 0,
    IMED_FULL_RPT_X_MIDDLE_Y1_MAX = 1,
    IMED_FULL_RPT_X_MIN_Y1_MIN = 2,
    IMED_FULL_RPT_X_MIN_Y1_MAX = 3,
    IMED_FULL_RPT_X_MAX_Y1_MIN = 4,
    IMED_FULL_RPT_X_MAX_Y1_MAX = 5,
    IMED_FULL_RPT_X_MIDDLE_Y2_MIN = 6,
    IMED_FULL_RPT_X_MIDDLE_Y2_MAX = 7,
    IMED_FULL_RPT_X_MIN_Y2_MIN = 8,
    IMED_FULL_RPT_X_MIN_Y2_MAX = 9,
    IMED_FULL_RPT_X_MAX_Y2_MIN = 10,
    IMED_FULL_RPT_X_MAX_Y2_MAX = 11,
    IMED_FULL_RPT_MAX = 12,
} IMED_full_rpt_enum;

typedef struct
{
    IMED_result_enum valid;
    int value;
} IMED_counter_struct;

typedef enum
{
    IMED_CONTROL_STATE_NA = 0,
    IMED_CONTROL_STATE_NONE = 1,
    IMED_CONTROL_STATE_BFC = 2,
    IMED_CONTROL_STATE_CAL = 3,
    IMED_CONTROL_STATE_REFMARK = 4,
    IMED_CONTROL_STATE_ENC = 5,
    IMED_CONTROL_STATE_ENC_CM_BFC = 6,
    IMED_CONTROL_STATE_ERR = 7,
} IMED_control_state_enum;

typedef enum
{
    IMED_RQ_INIT_STATE_UNKNOWN = 0,
    IMED_RQ_INIT_STATE_TERMINATED = 1,
    IMED_RQ_INIT_STATE_IO = 2,
    IMED_RQ_INIT_STATE_LS_ON_DIFF = 3,
    IMED_RQ_INIT_STATE_SIGNAL_CALIB_DONE = 4,
    IMED_RQ_INIT_STATE_SS_ZERO_FOUND = 5,
    IMED_RQ_INIT_STATE_INITIALIZED = 6,
} IMED_rq_init_state_enum;

typedef enum
{
    IMED_INITIALISE_STEP = 1,
    IMED_FIBER_TEST_STEP = 2,
    IMED_CHECK_SIGNAL_CALIBRATION_STEP = 3,
    IMED_DIRECTION_TEST_STEP = 4,
    IMED_HEADSCALE_TESTS_STEP = 5,
    IMED_REFERENCE_TESTS_STEP = 6,
    IMED_RANGE_TESTS_STEP = 7,
    IMED_RELIAB_TEST_STEP = 8,
    IMED_MEMORY_DUMP_STEP = 9,
    IMED_COMPENSATION_MAP_STEP = 10,
    IMED_FINALIZE_TEST_STEP = 11,
} IMED_test_steps_enum;

typedef struct
{
    horvervect from;
    horvervect to;
} IMED_comp_map_move_struct;

typedef struct
{
    int len;
    int max_len;
    IMED_comp_map_move_struct* array;
} IMED_comp_map_trace_moves;

typedef enum
{
    IMED_COMP_MAP_POS_Y = 0,
    IMED_COMP_MAP_AXIS_X = 1,
    IMED_COMP_MAP_AXIS_Y1 = 2,
    IMED_COMP_MAP_AXIS_Y2 = 3,
} IMED_comp_map_radius_trace_enum;

typedef double IMED_comp_map_trace_quality_struct_quality[0x3];

typedef struct
{
    double position;
    IMED_comp_map_trace_quality_struct_quality quality;
} IMED_comp_map_trace_quality_struct;

typedef struct
{
    int len;
    int max_len;
    double* array;
} IMED_comp_map_trace_quality_array;

typedef enum
{
    IMED_COMP_MAP_ENABLED = 0,
    IMED_COMP_MAP_DISABLED = 1,
} IMED_comp_map_state_enum;

typedef double IMED_comp_map_radius_trace_struct_axis[0x4];

typedef struct
{
    IMED_comp_map_radius_trace_struct_axis axis;
} IMED_comp_map_radius_trace_struct;

typedef IMED_comp_map_radius_trace_struct IMED_comp_map_trace_radius_struct_trace[0x2];

typedef struct
{
    IMED_comp_map_trace_radius_struct_trace trace;
} IMED_comp_map_trace_radius_struct;

typedef struct
{
    int len;
    int max_len;
    IMED_comp_map_trace_radius_struct* array;
} IMED_comp_map_trace_radius_array;

typedef struct
{
    double start_x;
    double start_y;
    double start_rz;
} IMED_signal_input_struct;

typedef struct
{
    double from_x;
    double from_y;
    double from_rz;
    double from_z;
    double from_rx;
    double from_ry;
    double to_x;
    double to_y;
    double to_rz;
    double to_z;
    double to_rx;
    double to_ry;
    int number_of_reliab_cycles;
    IMED_velocity_enum velocity_select;
} IMED_reliab_input_struct;

typedef struct
{
    bool normal_dump;
    bool special_area_dump;
    bool reference_mark_dump;
} IMED_memory_dump_types;

typedef struct
{
    IMED_memory_dump_types type;
    double arround_y;
} IMED_memory_dump_input_struct;

typedef struct
{
    IMED_headscale_cm_enum headscale_select;
} IMED_headscale_input_struct;

typedef struct
{
    double from_y;
    double to_y;
    double interval;
} IMED_actual_check_comp_map_input_struct;

typedef struct
{
    double from_y;
    double to_y;
} IMED_check_comp_map_radius_trace_input_struct;

typedef struct
{
    IMED_actual_check_comp_map_input_struct check_comp_map;
    IMED_check_comp_map_radius_trace_input_struct radius_trace;
    bool comp_map_enabled;
} IMED_check_comp_map_input_struct;

typedef struct
{
    IMED_test_type_enum test_type;
    bool fiber_test;
    bool check_signal_calibration;
    bool direction_test;
    bool head_scale_tests;
    bool reference_test;
    bool range_tests;
    bool reliab_test;
    bool memory_dump_test;
    bool long_memory_dump_test;
    bool chk_comp_map_test;
    int number_of_range_cycles;
    bool fibers_with_default_power;
    IMED_signal_input_struct signal;
    IMED_reliab_input_struct reliab;
    IMED_headscale_input_struct headscale;
    IMED_memory_dump_input_struct memory_dump;
    IMED_check_comp_map_input_struct chk_comp_map;
} IMED_input_struct;

typedef struct
{
    IMED_result_enum Y1;
    IMED_result_enum Y2;
    IMED_result_enum X1;
    IMED_result_enum Spare;
} IMED_channel_status_struct;

typedef char IMED_dsp_version_struct_Y1[0x14];

typedef char IMED_dsp_version_struct_Y2[0x14];

typedef char IMED_dsp_version_struct_X1[0x14];

typedef char IMED_dsp_version_struct_Spare[0x14];

typedef struct
{
    IMED_dsp_version_struct_Y1 Y1;
    IMED_dsp_version_struct_Y2 Y2;
    IMED_dsp_version_struct_X1 X1;
    IMED_dsp_version_struct_Spare Spare;
} IMED_dsp_version_struct;

typedef char IMED_board_version_struct_board_0[0x14];

typedef char IMED_board_version_struct_board_1[0x14];

typedef struct
{
    IMED_board_version_struct_board_0 board_0;
    IMED_board_version_struct_board_1 board_1;
} IMED_board_version_struct;

typedef MIRSXTxENC_laser_status_struct IMED_herb_values_laser[0x2];

typedef struct
{
    IMED_herb_values_laser laser;
} IMED_herb_values;

typedef char IMED_board_status_struct_identification[0x10];

typedef char IMED_board_status_struct_pga_id[0xC];

typedef char IMED_board_status_struct_epld_id[0xC];

typedef char IMED_board_status_struct_vector[0x8];

typedef char IMED_board_status_struct_application_code[0x8];

typedef struct
{
    int slot;
    IMED_board_status_struct_identification identification;
    IMED_board_status_struct_pga_id pga_id;
    IMED_board_status_struct_epld_id epld_id;
    IMED_board_status_struct_vector vector;
    IMED_board_status_struct_application_code application_code;
} IMED_board_status_struct;

typedef char IMED_channel_data_dsp_version[0x14];

typedef char IMED_channel_data_dsp_status[0x10];

typedef struct
{
    IMED_channel_data_dsp_version dsp_version;
    IMED_channel_data_dsp_status dsp_status;
} IMED_channel_data;

typedef struct
{
    IMED_result_enum temperature;
    double ADC_temperature;
    double ADC_temp_limit;
    double hybrid_temperature;
    double hybrid_temp_limit;
    double laser_temperature;
    double laser_temp_limit;
} IMED_channel_temp_data;

typedef struct
{
    double value;
    double min;
    double max;
} IMED_channel_power_data_detail;

typedef struct
{
    IMED_result_enum power_supply_status;
    IMED_channel_power_data_detail pos_5V;
    IMED_channel_power_data_detail neg_5V;
} IMED_channel_power_data;

typedef char IMED_channel_normal_data_direction[0x4];

typedef char IMED_channel_normal_data_datatype[0xC];

typedef char IMED_channel_normal_data_inverted[0xC];

typedef struct
{
    IMED_channel_normal_data_direction direction;
    bool enabled;
    int timeslot;
    IMED_channel_normal_data_datatype datatype;
    IMED_channel_normal_data_inverted inverted;
    IMED_result_enum result;
    int position;
} IMED_channel_normal_data;

typedef char IMED_channel_diag_data_diag_datatype[0xC];

typedef char IMED_channel_diag_data_diag_inverted[0xC];

typedef struct
{
    bool diag_enabled;
    int diag_timeslot;
    IMED_channel_diag_data_diag_datatype diag_datatype;
    IMED_channel_diag_data_diag_inverted diag_inverted;
} IMED_channel_diag_data;

typedef char IMED_channel_signal_data_sig_status[0xC];

typedef char IMED_channel_signal_data_sig_quality[0xC];

typedef char IMED_channel_signal_data_sig_limit[0x8];

typedef struct
{
    IMED_channel_signal_data_sig_status sig_status;
    double sig_amplitude_mx1;
    double sig_amplitude_mx2;
    double sig_amplitude_mx3;
    double sig_mean_offset;
    IMED_channel_signal_data_sig_quality sig_quality;
    IMED_channel_signal_data_sig_limit sig_limit;
} IMED_channel_signal_data;

typedef char IMED_channel_delay_data_del_status[0xC];

typedef struct
{
    IMED_channel_delay_data_del_status del_status;
    int del_errorcode;
} IMED_channel_delay_data;

typedef char IMED_channel_laser_data_power_value[0xC];

typedef char IMED_channel_laser_data_power_min[0xC];

typedef char IMED_channel_laser_data_power_max[0xC];

typedef struct
{
    IMED_channel_laser_data_power_value value;
    IMED_channel_laser_data_power_min min;
    IMED_channel_laser_data_power_max max;
} IMED_channel_laser_data_power;

typedef char IMED_channel_laser_data_safety_status[0xC];

typedef char IMED_channel_laser_data_laser_status[0xC];

typedef char IMED_channel_laser_data_laser_on[0xC];

typedef char IMED_channel_laser_data_laser_sw_enabled[0xC];

typedef char IMED_channel_laser_data_laser_interlock[0xC];

typedef char IMED_channel_laser_data_laser_keyswitch[0xC];

typedef char IMED_channel_laser_data_laser_temp_status[0xC];

typedef char IMED_channel_laser_data_laser_aging[0x8];

typedef struct
{
    IMED_channel_laser_data_safety_status safety_status;
    IMED_channel_laser_data_laser_status laser_status;
    IMED_channel_laser_data_laser_on laser_on;
    IMED_channel_laser_data_laser_sw_enabled laser_sw_enabled;
    IMED_channel_laser_data_laser_interlock laser_interlock;
    IMED_channel_laser_data_laser_keyswitch laser_keyswitch;
    IMED_channel_laser_data_power power;
    IMED_channel_laser_data_laser_temp_status laser_temp_status;
    IMED_channel_laser_data_laser_aging laser_aging;
} IMED_channel_laser_data;

typedef IMED_board_status_struct IMED_herb_result_struct_board_data[0x2];

typedef IMED_channel_temp_data IMED_herb_result_struct_channel_temp_data[0x4];

typedef IMED_channel_power_data IMED_herb_result_struct_channel_power_data[0x4];

typedef IMED_channel_normal_data IMED_herb_result_struct_channel_normal_data[0x4];

typedef IMED_channel_diag_data IMED_herb_result_struct_channel_diag_data[0x4];

typedef IMED_channel_laser_data IMED_herb_result_struct_channel_laser_data[0x4];

typedef IMED_channel_data IMED_herb_result_struct_herb_data[0x4];

typedef char IMED_herb_result_struct_e2[0x50];

typedef char IMED_herb_result_struct_e3[0x4];

typedef char IMED_herb_result_struct_e4[0x4];

typedef struct
{
    IMED_herb_result_struct_board_data board_data;
    IMED_herb_result_struct_channel_temp_data channel_temp_data;
    IMED_herb_result_struct_channel_power_data channel_power_data;
    IMED_herb_result_struct_channel_normal_data channel_normal_data;
    IMED_herb_result_struct_channel_diag_data channel_diag_data;
    IMED_herb_result_struct_channel_laser_data channel_laser_data;
    IMED_herb_result_struct_herb_data herb_data;
    IMED_herb_result_struct_e2 e2;
    IMED_herb_result_struct_e3 e3;
    IMED_herb_result_struct_e4 e4;
} IMED_herb_result_struct;

typedef char IMED_valres_struct_limit[0x8];

typedef struct
{
    double value;
    IMED_valres_struct_limit limit;
    IMED_result_enum result;
} IMED_valres_struct;

typedef struct
{
    double value;
    double min;
    double max;
    IMED_result_enum result;
} IMED_val_min_max_res_struct;

typedef IMED_valres_struct IMED_laser_response_struct_valres[0x9];

typedef struct
{
    IMED_laser_response_struct_valres valres;
} IMED_laser_response_struct;

typedef char IMED_direction_values_encoder_axis[0x8];

typedef char IMED_direction_values_measured[0x10];

typedef char IMED_direction_values_min_max[0x18];

typedef struct
{
    IMED_direction_values_encoder_axis encoder_axis;
    IMED_direction_values_measured measured;
    IMED_direction_values_min_max min_max;
    IMED_result_enum result;
} IMED_direction_values;

typedef IMED_laser_response_struct IMED_fiber_result_struct_response[0x3];

typedef char IMED_fiber_result_struct_e2[0x50];

typedef char IMED_fiber_result_struct_e3[0x4];

typedef char IMED_fiber_result_struct_e4[0x4];

typedef struct
{
    IMED_fiber_result_struct_response response;
    IMED_fiber_result_struct_e2 e2;
    IMED_fiber_result_struct_e3 e3;
    IMED_fiber_result_struct_e4 e4;
} IMED_fiber_result_struct;

typedef enum
{
    IMED_DIR_RESULT_X = 0,
    IMED_DIR_RESULT_Y1 = 1,
    IMED_DIR_RESULT_Y2 = 2,
    IMED_DIR_RESULT_Y1R = 3,
    IMED_DIR_RESULT_Y2R = 4,
    IMED_DIR_RESULT_MAX = 5,
} IMED_dir_result_enum;

typedef IMED_direction_values IMED_direction_result_struct_dir_result[0x5];

typedef struct
{
    bool diff_cal_done;
    IMED_direction_result_struct_dir_result dir_result;
} IMED_direction_result_struct;

typedef struct
{
    IMED_result_enum Y1;
    IMED_result_enum Y2;
    IMED_result_enum X1;
} IMED_cal_status_struct;

typedef struct
{
    int Y1;
    int Y2;
    int X1;
} IMED_cal_errorcode_struct;

typedef IMED_valres_struct IMED_cal_signal_quality_struct_valres[0x3];

typedef struct
{
    IMED_cal_signal_quality_struct_valres valres;
} IMED_cal_signal_quality_struct;

typedef IMED_valres_struct IMED_cal_ampl_struct_valres[0x9];

typedef struct
{
    IMED_cal_ampl_struct_valres valres;
} IMED_cal_ampl_struct;

typedef IMED_valres_struct IMED_cal_radius_struct_valres[0x3];

typedef struct
{
    IMED_cal_radius_struct_valres valres;
} IMED_cal_radius_struct;

typedef IMED_val_min_max_res_struct IMED_cal_laser_power_struct_valres[0x3];

typedef struct
{
    IMED_cal_laser_power_struct_valres valres;
} IMED_cal_laser_power_struct;

typedef IMED_valres_struct IMED_cal_head_eff_struct_valres[0x3];

typedef struct
{
    IMED_cal_head_eff_struct_valres valres;
} IMED_cal_head_eff_struct;

typedef IMED_valres_struct IMED_calibration_quality_struct_valres[0x3];

typedef struct
{
    IMED_calibration_quality_struct_valres valres;
} IMED_calibration_quality_struct;

typedef IMED_channel_signal_data IMED_signal_result_struct_channel_signal_data[0x4];

typedef char IMED_signal_result_struct_e2[0x50];

typedef char IMED_signal_result_struct_e3[0x4];

typedef char IMED_signal_result_struct_e4[0x4];

typedef struct
{
    MIRSXAxENC_movement_params_struct cal_parameters;
    IMED_cal_status_struct cal_status;
    IMED_cal_errorcode_struct cal_errorcode;
    IMED_cal_ampl_struct cal_ampl;
    IMED_cal_radius_struct cal_radius;
    IMED_cal_laser_power_struct cal_laser_power;
    IMED_cal_head_eff_struct cal_head_eff;
    IMED_calibration_quality_struct cal_quality;
    IMED_signal_result_struct_channel_signal_data channel_signal_data;
    IMED_signal_result_struct_e2 e2;
    IMED_signal_result_struct_e3 e3;
    IMED_signal_result_struct_e4 e4;
} IMED_signal_result_struct;

typedef struct
{
    double value;
    double limit;
    IMED_result_enum result;
} IMED_val_res_struct;

typedef struct
{
    double x;
    double y;
    double limit;
    IMED_result_enum result;
} IMED_full_low_radius_range_struct;

typedef IMED_full_low_radius_range_struct IMED_full_low_radius_range_array_range[0xC];

typedef struct
{
    IMED_full_low_radius_range_array_range range;
} IMED_full_low_radius_range_array;

typedef struct
{
    double x;
    double y1;
    double radius_y1;
    double y2;
    double radius_y2;
    double limit;
    IMED_result_enum result;
} IMED_full_low_radius_pos_struct;

typedef IMED_full_low_radius_pos_struct IMED_full_low_radius_pos_array_pos[0x3];

typedef struct
{
    IMED_full_low_radius_pos_array_pos pos;
} IMED_full_low_radius_pos_array;

typedef char IMED_full_result_struct_e2[0x50];

typedef char IMED_full_result_struct_e3[0x4];

typedef char IMED_full_result_struct_e4[0x4];

typedef struct
{
    IMED_full_low_radius_range_array ra;
    IMED_full_low_radius_pos_array pa;
    IMED_full_result_struct_e2 e2;
    IMED_full_result_struct_e3 e3;
    IMED_full_result_struct_e4 e4;
} IMED_full_result_struct;

typedef char IMED_head_angle_result_struct_max_range[0x8];

typedef struct
{
    double max_value;
    double angle;
    IMED_head_angle_result_struct_max_range max_range;
    double radius_delta;
    double limit;
    IMED_result_enum result;
} IMED_head_angle_result_struct;

typedef struct
{
    IMED_head_angle_result_struct y1;
    IMED_head_angle_result_struct y2;
    IMED_head_angle_result_struct x1;
} IMED_head_scale_rot_axis_struct;

typedef IMED_head_scale_rot_axis_struct IMED_head_scale_angle_array_angle[0x3];

typedef struct
{
    IMED_head_scale_angle_array_angle angle;
} IMED_head_scale_angle_array;

typedef struct
{
    IMED_val_res_struct pos_rx;
    IMED_val_res_struct pos_ry;
    IMED_val_res_struct pos_rz;
} IMED_head_scale_pos_struct;

typedef char IMED_head_result_struct_e2[0x50];

typedef char IMED_head_result_struct_e3[0x4];

typedef char IMED_head_result_struct_e4[0x4];

typedef struct
{
    IMED_headscale_cm_enum control_mode;
    IMED_head_scale_angle_array angle;
    IMED_head_result_struct_e2 e2;
    IMED_head_result_struct_e3 e3;
    IMED_head_result_struct_e4 e4;
} IMED_head_result_struct;

typedef char IMED_range_check_result_summary_txt[0x20];

typedef char IMED_range_check_result_e2[0x50];

typedef char IMED_range_check_result_e3[0x4];

typedef char IMED_range_check_result_e4[0x4];

typedef struct
{
    IMED_range_check_result_summary_txt summary_txt;
    int cycle_number;
    QRRPxCRxSCAN_result_struct range_testresults;
    IMED_range_check_result_e2 e2;
    IMED_range_check_result_e3 e3;
    IMED_range_check_result_e4 e4;
} IMED_range_check_result;

typedef struct
{
    double vel_x;
    double acc_x;
    double jerk_x;
    double vel_y;
    double acc_y;
    double jerk_y;
} IMED_reliab_move_profile_struct;

typedef char IMED_reliab_result_struct_e2[0x50];

typedef char IMED_reliab_result_struct_e3[0x4];

typedef char IMED_reliab_result_struct_e4[0x4];

typedef struct
{
    int cycle_max;
    int cycle_number;
    IMED_reliab_move_profile_struct move_profile;
    IMED_reliab_result_struct_e2 e2;
    IMED_reliab_result_struct_e3 e3;
    IMED_reliab_result_struct_e4 e4;
} IMED_reliab_result_struct;

typedef struct
{
    AMXAxSTAB_performance_struct am;
} IMED_stabil_result_struct;

typedef char IMED_dump_filenames_file1[0x100];

typedef char IMED_dump_filenames_file2[0x100];

typedef char IMED_dump_filenames_file3[0x100];

typedef struct
{
    IMED_dump_filenames_file1 file1;
    IMED_dump_filenames_file2 file2;
    IMED_dump_filenames_file3 file3;
} IMED_dump_filenames;

typedef char IMED_memory_result_struct_e2[0x50];

typedef char IMED_memory_result_struct_e3[0x4];

typedef char IMED_memory_result_struct_e4[0x4];

typedef struct
{
    IMED_dump_filenames longdump;
    IMED_dump_filenames normal;
    IMED_dump_filenames special;
    IMED_dump_filenames refmark;
    IMED_memory_result_struct_e2 e2;
    IMED_memory_result_struct_e3 e3;
    IMED_memory_result_struct_e4 e4;
} IMED_memory_result_struct;

typedef struct
{
    horvervect start_pos;
    horvervect end_pos;
    double vel_x;
    double acc_x;
    double jerk_x;
    double vel_y;
    double acc_y;
    double jerk_y;
    double interval;
} IMED_comp_map_param_struct;

typedef char IMED_comp_map_global_param_struct_error_code[0x8];

typedef struct
{
    IMED_comp_map_param_struct comp_map;
    IMED_comp_map_param_struct radius;
    IMED_result_enum cal_status_Y1;
    IMED_result_enum cal_status_Y2;
    IMED_result_enum cal_status_X1;
    IMED_comp_map_global_param_struct_error_code error_code;
    bool comp_map_enabled;
} IMED_comp_map_global_param_struct;

typedef struct
{
    double value;
    double position;
    IMED_result_enum result;
} IMED_comp_map_radius_detail_struct;

typedef struct
{
    double value;
    double position;
    IMED_result_enum result;
} IMED_comp_map_quality_struct;

typedef IMED_comp_map_radius_detail_struct IMED_comp_map_radius_struct_min_radius[0x4];

typedef IMED_comp_map_quality_struct IMED_comp_map_radius_struct_min_quality[0x4];

typedef struct
{
    IMED_comp_map_radius_struct_min_radius min_radius;
    IMED_comp_map_radius_struct_min_quality min_quality;
} IMED_comp_map_radius_struct;

typedef char IMED_compensation_map_check_result_struct_e2[0x50];

typedef char IMED_compensation_map_check_result_struct_e3[0x4];

typedef char IMED_compensation_map_check_result_struct_e4[0x4];

typedef struct
{
    IMED_comp_map_global_param_struct params;
    IMED_comp_map_radius_struct radius_comp_map;
    IMED_comp_map_radius_struct radius_no_comp_map;
    IMED_compensation_map_check_result_struct_e2 e2;
    IMED_compensation_map_check_result_struct_e3 e3;
    IMED_compensation_map_check_result_struct_e4 e4;
} IMED_compensation_map_check_result_struct;

typedef enum
{
    IMED_RM_NOERROR = 0,
    IMED_RM_END_POSITION = 1,
    IMED_RM_SYNCHRONIZATION = 2,
    IMED_RM_VELOCITY = 3,
    IMED_RM_DATA_AMOUNT = 4,
    IMED_RM_ROUGH_PEAK = 5,
    IMED_RM_FINE_PEAK = 6,
    IMED_RM_ITERATION = 7,
    IMED_RM_AMPLITUDE = 8,
    IMED_RM_REF_POSITION_LOST = 9,
    IMED_RM_PEAK_OFFSET_DRIFT = 10,
    IMED_RM_BEAT_PHASE_INSTABLE = 11,
    IMED_RM_NO_VALID_POSITION = 12,
} IMED_reference_error_enum;

typedef enum
{
    IMED_RMA_AM_STABIL = 0,
    IMED_RMA_CHECK_VELOCITY = 1,
    IMED_RMA_CHECK_HERB_INV = 2,
    IMED_RMA_CHECK_HERB_DIR = 3,
    IMED_RMA_CHECK_DIR = 4,
    IMED_RMA_RETRY = 5,
    IMED_RMA_DO_IMEZ = 6,
    IMED_RMA_SIGNAL = 7,
    IMED_RMA_CHECK_HEADSCALE = 8,
    IMED_RMA_SWITCH_HERB = 9,
    IMED_RMA_SWITCH_HEAD = 10,
    IMED_RMA_IMEZ_COMPLETE = 11,
} IMED_reference_action_enum;

typedef char IMED_reference_channel_table_ref_status[0xC];

typedef char IMED_reference_channel_table_ref_quality[0xC];

typedef char IMED_reference_channel_table_quality_limit[0xC];

typedef char IMED_reference_channel_table_result[0xC];

typedef struct
{
    IMED_reference_channel_table_ref_status ref_status;
    int ref_position;
    int ref_errorcode;
    IMED_reference_channel_table_ref_quality ref_quality;
    IMED_reference_channel_table_quality_limit quality_limit;
    IMED_reference_channel_table_result result;
    int ref_pa_overscan;
    int ref_pb_overscan;
    int ref_peak_offset;
} IMED_reference_channel_table;

typedef char IMED_reference_error_table_error_name[0x48];

typedef char IMED_reference_error_table_error_description[0x48];

typedef char IMED_reference_error_table_action1[0x48];

typedef char IMED_reference_error_table_action2[0x48];

typedef char IMED_reference_error_table_action3[0x48];

typedef char IMED_reference_error_table_action4[0x48];

typedef struct
{
    int error_code;
    IMED_reference_error_table_error_name error_name;
    IMED_reference_error_table_error_description error_description;
    IMED_reference_error_table_action1 action1;
    IMED_reference_error_table_action2 action2;
    IMED_reference_error_table_action3 action3;
    IMED_reference_error_table_action4 action4;
} IMED_reference_error_table;

typedef IMED_reference_channel_table IMED_reference_result_struct_channel_data[0x4];

typedef struct
{
    IMED_reference_result_struct_channel_data channel_data;
    IMED_reference_error_table error_dataY1;
    IMED_reference_error_table error_dataY2;
    IMED_reference_error_table error_dataX1;
    RQRPxMCxRMZ_refmark_zeroing_struct r;
} IMED_reference_result_struct;

typedef char IMED_sum_result_struct_str1[0x50];

typedef char IMED_sum_result_struct_e1[0x4];

typedef char IMED_sum_result_struct_e2[0x50];

typedef char IMED_sum_result_struct_e3[0x4];

typedef char IMED_sum_result_struct_e4[0x4];

typedef struct
{
    IMED_sum_result_struct_str1 str1;
    IMED_sum_result_struct_e1 e1;
    IMED_result_enum herb;
    AMXAxSTAB_result_enum am_result;
    IMED_result_enum fiber;
    IMED_result_enum signal;
    IMED_result_enum direction;
    IMED_result_enum full;
    IMED_result_enum head;
    IMED_result_enum reference;
    IMED_result_enum range;
    IMED_result_enum reliab;
    IMED_result_enum memory;
    IMED_result_enum comp_map;
    IMED_sum_result_struct_e2 e2;
    IMED_sum_result_struct_e3 e3;
    IMED_sum_result_struct_e4 e4;
} IMED_sum_result_struct;

typedef struct
{
    IMED_sum_result_struct sum;
    IMED_stabil_result_struct stability;
    IMED_herb_result_struct herb;
    IMED_fiber_result_struct fiber;
    IMED_signal_result_struct signal;
    IMED_direction_result_struct direction;
    IMED_full_result_struct full;
    IMED_head_result_struct head;
    IMED_reference_result_struct reference;
    IMED_range_check_result bfc_range;
    IMED_range_check_result encoder_range;
    IMED_reliab_result_struct reliab;
    IMED_memory_result_struct memory;
    IMED_compensation_map_check_result_struct comp_map_check;
} IMED_result_struct;

typedef char IMED_view_struct_herb[0x14];

typedef char IMED_view_struct_fiber[0x14];

typedef char IMED_view_struct_signal[0x14];

typedef char IMED_view_struct_direction[0x14];

typedef char IMED_view_struct_full[0x14];

typedef char IMED_view_struct_head[0x14];

typedef char IMED_view_struct_reference[0x14];

typedef char IMED_view_struct_ranges[0x14];

typedef char IMED_view_struct_reliab[0x14];

typedef char IMED_view_struct_memory[0x14];

typedef char IMED_view_struct_memory_long[0x14];

typedef char IMED_view_struct_comp_map[0x14];

typedef struct
{
    IMED_view_struct_herb herb;
    IMED_view_struct_fiber fiber;
    IMED_view_struct_signal signal;
    IMED_view_struct_direction direction;
    IMED_view_struct_full full;
    IMED_view_struct_head head;
    IMED_view_struct_reference reference;
    IMED_view_struct_ranges ranges;
    IMED_view_struct_reliab reliab;
    IMED_view_struct_memory memory;
    IMED_view_struct_memory_long memory_long;
    IMED_view_struct_comp_map comp_map;
} IMED_view_struct;

typedef struct
{
    IMED_input_struct input;
    IMED_result_struct result;
    IMED_view_struct view;
    IMEDxTC_test_constants tc;
} IMED_DataStruct;



#endif // _IMED_TC_H_
