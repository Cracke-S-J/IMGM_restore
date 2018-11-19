/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMGD
* 文件名称 : IMGD_tc.h
* 概要描述 :
*	IM组件IMGD数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMGD_TC_H_
#define _IMGD_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <base.h> 
#include <MIENXTxWS_tc.h> 
#include <MIENXDxWS_tc.h> 
#include <AMXAxSTAB_tc.h> 
#include <IHCLxIMM_tc.h> 
#include <SMXA.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    IMGD_SYSTEM_STATE = 0,
    IMGD_ELECTRONICS = 1,
    IMGD_CONNECTIVITY = 2,
    IMGD_SIGNAL_QUALITY = 3,
    IMGD_ENCODER_ALIGNMENT = 4,
    IMGD_PERFORMANCE = 5,
    IMGD_MEMORY_DUMP = 6,
    IMGD_CHECK_SPM = 7,
} IMGD_subtest_enum;

typedef enum
{
    IMGD_BOTH = 0,
    IMGD_CHUCK1 = 1,
    IMGD_CHUCK2 = 2,
} IMGD_chuck_selection_enum;

typedef enum
{
    IMGD_BASEFRAME_CONTROL = 0,
    IMGD_SPM_CONTROL = 1,
} IMGD_control_mode_enum;

typedef enum
{
    IMGD_RESULT_UNDEFINED = 0,
    IMGD_RESULT_NOK = 1,
    IMGD_RESULT_OK = 2,
} IMGD_result_enum;

typedef enum
{
    IMGD_FALSE = 0,
    IMGD_TRUE = 1,
} IMGD_true_false;

typedef enum
{
    IMGD_ENCODER_1 = 0,
    IMGD_ENCODER_2 = 1,
    IMGD_ENCODER_3 = 2,
    IMGD_ENCODER_4 = 3,
} IMGD_encoder_enum;

typedef enum
{
    IMGD_AXIS_1A = 0,
    IMGD_AXIS_1B = 1,
    IMGD_AXIS_2A = 2,
    IMGD_AXIS_2B = 3,
    IMGD_AXIS_3A = 4,
    IMGD_AXIS_3B = 5,
    IMGD_AXIS_4A = 6,
    IMGD_AXIS_4B = 7,
} IMGD_axis_enum;

typedef enum
{
    IMGD_SIGNAL_I90 = 0,
    IMGD_SIGNAL_I210 = 1,
    IMGD_SIGNAL_I330 = 2,
} IMGD_signal_enum;

typedef char IMGD_filename[0x1F4];

typedef struct
{
    bool is_selected;
    IMGD_chuck_selection_enum chuck_selection;
} IMGD_subtest_input_struct;

typedef struct
{
    IMGD_control_mode_enum connectivity;
    IMGD_control_mode_enum signal_quality;
} IMGD_control_modes_struct;

typedef enum
{
    IMGD_IMMERSION_UNCHANGED = 0,
    IMGD_IMMERSION_MAKE_DRY = 1,
} IMGD_immersion_setting_enum;

typedef enum
{
    IMGD_COMPLETE_AND_CUSTOMER = 0,
    IMGD_SHORT_AND_CUSTOMER = 1,
} IMGD_memory_dump_type;

typedef struct
{
    IMGD_memory_dump_type type;
} IMGD_memory_dump_input_struct;

typedef struct
{
    IMGD_immersion_setting_enum setting;
    bool restore_original;
} IMGD_immersion_settings;

typedef enum
{
    IMGD_AREA_M = 0,
    IMGD_AREA_M2E = 1,
    IMGD_AREA_E = 2,
    IMGD_AREA_ROP = 3,
} IMGD_area_enum;

typedef bool IMGD_signal_quality_areas[0x4];

typedef enum
{
    IMGD_CHUCK_FUNC_EXPOSE = 0,
    IMGD_CHUCK_FUNC_MEASURE = 1,
} IMGD_chuck_func_enum;

typedef struct
{
    bool skip_hf_map_diagnosis;
    bool wait_for_laser_quality_calculation;
} IMGD_electronics_input_struct;

typedef struct
{
    IMGD_chuck_func_enum chuck_func;
    IMGD_control_mode_enum control_mode;
    double x;
    double y;
} IMGD_check_spm_input;

typedef IMGD_subtest_input_struct IMGD_input_struct_steps[0x8];

typedef struct
{
    IMGD_immersion_settings immersion;
    bool skip_airmounts_stability;
    IMGD_input_struct_steps steps;
    IMGD_chuck_selection_enum dummy_optStep7;
    IMGD_chuck_selection_enum dummy_optChuckForAllTests;
    IMGD_electronics_input_struct electronics;
    IMGD_control_modes_struct control_mode;
    IMGD_signal_quality_areas signal_quality_areas;
    IMGD_check_spm_input check_spm;
    IMGD_memory_dump_input_struct memory_dump;
} IMGD_input_struct;

typedef enum
{
    IMGD_SIM3_FLAG_GOAB_BOARD_WS1 = 0,
    IMGD_SIM3_FLAG_GOAB_BOARD_WS2 = 1,
    IMGD_SIM3_FLAG_GOAB_SENSORS_WS1 = 2,
    IMGD_SIM3_FLAG_GOAB_SENSORS_WS2 = 3,
    IMGD_SIM3_FLAG_GOAB_HFMAPS_WS1 = 4,
    IMGD_SIM3_FLAG_GOAB_HFMAPS_WS2 = 5,
} IMGD_sim3_flag_enum;

typedef enum
{
    IMGD_DRIVER_MI = 0,
    IMGD_DRIVER_WS = 1,
    IMGD_DRIVER_IHSS = 2,
    IMGD_DRIVER_IHAL = 3,
    IMGD_DRIVER_IHAW = 4,
} IMGD_drivers_enum;

typedef enum
{
    IMGD_SIM_MODE_MI = 0,
    IMGD_SIM_MODE_WPCL = 1,
    IMGD_SIM_MODE_IHCL = 2,
} IMGD_sim_modes_enum;

typedef struct
{
    int value;
    IMGD_result_enum result;
} IMGD_sim_mode_result_struct;

typedef struct
{
    IMGD_true_false value;
    IMGD_result_enum result;
} IMGD_flag_result_struct;

typedef struct
{
    SMXA_driverState status;
    IMGD_result_enum result;
} IMGD_driver_state_result_struct;

typedef IMGD_sim_mode_result_struct IMGD_sim_modes_result_array[0x3];

typedef IMGD_flag_result_struct IMGD_sim3_flags_result_array[0x6];

typedef IMGD_driver_state_result_struct IMGD_drivers_result_array[0x5];

typedef struct
{
    IHCLxIMM_immersion_opmode_enum opmode;
    IHCLxIMM_immersion_state_enum state;
    IHCLxIMM_immersion_fluid_state_enum fluid_state;
} IMGD_immersion_state;

typedef struct
{
    AMXAxSTAB_perf_struct_array perf;
    AMXAxSTAB_result_enum result;
} IMGD_airmounts_result;

typedef char IMGD_system_state_result_struct_empty1[0x4];

typedef struct
{
    IMGD_drivers_result_array driver_state;
    IMGD_sim_modes_result_array sim_modes;
    IMGD_sim3_flags_result_array sim3_flags;
    IMGD_immersion_state immersion_state;
    IMGD_system_state_result_struct_empty1 empty1;
    IMGD_airmounts_result airmounts;
} IMGD_system_state_result_struct;

typedef char IMGD_ID_struct_jh[0x80];

typedef char IMGD_ID_struct_asml[0x80];

typedef char IMGD_ID_struct_remark[0x34];

typedef struct
{
    IMGD_ID_struct_jh jh;
    IMGD_ID_struct_asml asml;
    IMGD_ID_struct_remark remark;
} IMGD_ID_struct;

typedef IMGD_ID_struct IMGD_system_ids_array[0x8];

typedef char IMGD_HFMAP_GOAB_GERB_INFO_serial[0x80];

typedef char IMGD_HFMAP_GOAB_GERB_INFO_version[0x80];

typedef char IMGD_HFMAP_GOAB_GERB_INFO_active[0x80];

typedef char IMGD_HFMAP_GOAB_GERB_INFO_valid[0x80];

typedef struct
{
    IMGD_HFMAP_GOAB_GERB_INFO_serial serial;
    IMGD_HFMAP_GOAB_GERB_INFO_version version;
    timestamp datetime;
    IMGD_HFMAP_GOAB_GERB_INFO_active active;
    IMGD_HFMAP_GOAB_GERB_INFO_valid valid;
    IMGD_result_enum result;
} IMGD_HFMAP_GOAB_GERB_INFO;

typedef IMGD_HFMAP_GOAB_GERB_INFO IMGD_hfmap_goab_gerb_info_array[0xA];

typedef char IMGD_numbers_struct_remark_no_diagnosis[0x2C];

typedef char IMGD_numbers_struct_remark_timeout[0x18];

typedef struct
{
    int slot_nr;
    IMGD_system_ids_array system_id;
    IMGD_hfmap_goab_gerb_info_array hfmap_goab_gerb_info;
    IMGD_numbers_struct_remark_no_diagnosis remark_no_diagnosis;
    IMGD_numbers_struct_remark_timeout remark_timeout;
} IMGD_numbers_struct;

typedef struct
{
    MIENXDxWS_goab_state_enum system_state;
    MIENXDxWS_gerb_bist_struct gerb_bist;
    MIENXDxWS_goab_bist_struct goab_bist;
} IMGD_bist_struct;

typedef char IMGD_gerb_board_status_struct_laser_quality_message[0x34];

typedef char IMGD_gerb_board_status_struct_laser_quality_ok_string[0x80];

typedef struct
{
    bool available;
    MIENXDxWS_gerb_status_struct status;
    MIENXDxWS_gerb_clock_struct clock;
    MIENXDxWS_gerb_hardware_status_struct hardware;
    int laser_quality;
    IMGD_result_enum laser_quality_ok;
    IMGD_gerb_board_status_struct_laser_quality_message laser_quality_message;
    IMGD_gerb_board_status_struct_laser_quality_ok_string laser_quality_ok_string;
    int comm_quality;
    IMGD_result_enum comm_quality_ok;
    MIENXDxWS_gerb_firmware_status firmware;
} IMGD_gerb_board_status_struct;

typedef MIENXDxWS_signal_calibr_struct IMGD_signal_calibration_array[0x8];

typedef char IMGD_datetime_string[0x64];

typedef char IMGD_sigcal_file_struct_result_string[0x40];

typedef struct
{
    IMGD_filename filename;
    IMGD_filename date;
    int age_days;
    IMGD_sigcal_file_struct_result_string result_string;
} IMGD_sigcal_file_struct;

typedef struct
{
    IMGD_signal_calibration_array status;
    IMGD_sigcal_file_struct file;
} IMGD_signal_calibration_struct;

typedef char IMGD_electronics_result_struct_empty1[0x4];

typedef char IMGD_electronics_result_struct_empty2[0x4];

typedef char IMGD_electronics_result_struct_empty3[0x4];

typedef char IMGD_electronics_result_struct_empty4[0x4];

typedef struct
{
    int hfmap_diagnosis_timeout;
    int laser_quality_valid_timeout;
    IMGD_numbers_struct numbers;
    IMGD_electronics_result_struct_empty1 empty1;
    IMGD_bist_struct bist;
    IMGD_electronics_result_struct_empty2 empty2;
    MIENXDxWS_goab_board_status_struct goab;
    IMGD_electronics_result_struct_empty3 empty3;
    IMGD_gerb_board_status_struct gerb;
    IMGD_electronics_result_struct_empty4 empty4;
    IMGD_signal_calibration_struct signal_calibration;
} IMGD_electronics_result_struct;

typedef char IMGD_error_code_description_code[0x4];

typedef char IMGD_error_code_description_description[0x64];

typedef struct
{
    IMGD_error_code_description_code code;
    IMGD_error_code_description_description description;
} IMGD_error_code_description;

typedef struct
{
    int len;
    int max_len;
    IMGD_error_code_description* array;
} IMGD_error_code_description_array;

typedef char IMGD_signal_errors[0x14];

typedef struct
{
    int value;
    IMGD_result_enum result;
} IMGD_value_and_result;

typedef struct
{
    IMGD_signal_errors errors;
    IMGD_value_and_result amplitude;
    IMGD_value_and_result modulation;
    IMGD_value_and_result lissajous_radius;
    int real_lissajous_radius;
} IMGD_signal_quality;

typedef IMGD_signal_quality IMGD_signal_quality_array[0x8];

typedef struct
{
    int ampl_quality_min;
    int ampl_quality_max;
    int mod_quality_min;
    int mod_quality_max;
    int radius_min;
    int radius_max;
    int raw_amplitude_min;
    int raw_amplitude_max;
} IMGD_signal_quality_limits;

typedef struct
{
    IMGD_axis_enum axis_id;
    IMGD_signal_enum signal_id;
    double minimum;
    double maximum;
    double mean;
    double amplitude;
    IMGD_result_enum result;
} IMGD_raw_signals_struct;

typedef struct
{
    int len;
    int max_len;
    IMGD_raw_signals_struct* array;
} IMGD_raw_signals_array;

typedef char IMGD_signal_quality_area_result_signal_diagnosis_note[0x4C];

typedef char IMGD_signal_quality_area_result_empty1[0x4];

typedef struct
{
    IMGD_signal_quality_array signal_diagnosis;
    IMGD_signal_quality_area_result_signal_diagnosis_note signal_diagnosis_note;
    IMGD_raw_signals_array raw_signals;
    IMGD_filename filename_intensity;
    IMGD_filename filename_lissajous;
    IMGD_signal_quality_area_result_empty1 empty1;
} IMGD_signal_quality_area_result;

typedef IMGD_signal_quality_area_result IMGD_signal_quality_areas_result[0x4];

typedef struct
{
    IMGD_signal_quality_limits limits;
    IMGD_error_code_description_array legenda;
    IMGD_control_mode_enum control_mode;
    IMGD_signal_quality_areas_result area;
} IMGD_signal_quality_subtest_result;

typedef struct
{
    IMGD_axis_enum axis_id;
    IMGD_signal_enum signal_id;
    double mean;
    double std3;
    double mean_plus_std3;
    double limit;
    IMGD_result_enum result;
} IMGD_detector_noise_struct;

typedef struct
{
    int len;
    int max_len;
    IMGD_detector_noise_struct* array;
} IMGD_detector_noise_array;

typedef struct
{
    IMGD_chuck_func_enum chuck_func;
    IMGD_control_mode_enum control_mode;
    IMGD_detector_noise_array detector_noise;
} IMGD_detector_noise_result;

typedef MIENXDxWS_axis_status_struct IMGD_query_axis_array[0x8];

typedef struct
{
    IMGD_query_axis_array axis;
} IMGD_query_axis_result_struct;

typedef struct
{
    bool enabled;
    int timeslot;
    MIENXTxWS_datatype_enum datatype;
} IMGD_hpdb_axis_output_struct;

typedef IMGD_hpdb_axis_output_struct IMGD_hpdb_output_array[0x8];

typedef char IMGD_axis_monitor_struct_empty1[0x4];

typedef struct
{
    IMGD_hpdb_output_array hpdb_output_0;
    IMGD_chuck_func_enum chuck_func;
    IMGD_control_mode_enum control_mode;
    IMGD_query_axis_result_struct status;
    IMGD_filename filename;
    IMGD_axis_monitor_struct_empty1 empty1;
} IMGD_axis_monitor_struct;

typedef struct
{
    IMGD_signal_quality_subtest_result signal_quality;
    IMGD_axis_monitor_struct axis_monitor;
    IMGD_detector_noise_result detector_noise;
} IMGD_signal_quality_result_struct;

typedef enum
{
    IMGD_SENSORS_1234 = 0,
    IMGD_SENSORS_234 = 1,
    IMGD_SENSORS_134 = 2,
    IMGD_SENSORS_124 = 3,
    IMGD_SENSORS_123 = 4,
} IMGD_active_sensors_enum;

typedef char IMGD_valid_axes_string[0x4];

typedef struct
{
    IMGD_valid_axes_string head1;
    IMGD_valid_axes_string head2;
    IMGD_valid_axes_string head3;
    IMGD_valid_axes_string head4;
} IMGD_valid_axes_struct;

typedef char IMGD_connection_result_struct_remark[0x48];

typedef struct
{
    int test_position;
    IMGD_active_sensors_enum active_sensors;
    IMGD_valid_axes_struct valid_axes;
    IMGD_result_enum result;
    IMGD_connection_result_struct_remark remark;
} IMGD_connection_result_struct;

typedef struct
{
    int len;
    int max_len;
    IMGD_connection_result_struct* array;
} IMGD_connection_result_array;

typedef enum
{
    IMGD_H1Y = 0,
    IMGD_H1Z = 1,
    IMGD_H2Y = 2,
    IMGD_H2Z = 3,
    IMGD_H3Y = 4,
    IMGD_H3Z = 5,
    IMGD_H4Y = 6,
    IMGD_H4Z = 7,
} IMGD_h_values_enum;

typedef struct
{
    double expected_displacement;
    double actual_displacement;
    double difference_abs;
    IMGD_result_enum result;
} IMGD_fiber_direction_result_struct;

typedef IMGD_fiber_direction_result_struct IMGD_fiber_direction_result_array[0x8];

typedef char IMGD_connectivity_result_struct_legenda[0x64];

typedef struct
{
    IMGD_chuck_func_enum chuck_func;
    IMGD_control_mode_enum control_mode;
    IMGD_connection_result_array connection;
    IMGD_connectivity_result_struct_legenda legenda;
    IMGD_fiber_direction_result_array direction;
    double tolerance_y;
    double tolerance_z;
} IMGD_connectivity_result_struct;

typedef struct
{
    double a;
    double b;
    double mean;
    IMGD_result_enum result;
} IMGD_offset_struct;

typedef IMGD_offset_struct IMGD_offset_array[0x4];

typedef struct
{
    double at_lower_limit;
    double at_upper_limit;
    double max;
    IMGD_result_enum result;
} IMGD_lissajous_struct;

typedef IMGD_lissajous_struct IMGD_lissajous_array[0x8];

typedef struct
{
    double at_lower_limit;
    double at_upper_limit;
    double max;
} IMGD_lissajous_z_struct;

typedef IMGD_lissajous_z_struct IMGD_lissajous_z_array[0x8];

typedef struct
{
    IMGD_chuck_func_enum chuck_func;
    IMGD_control_mode_enum control_mode;
    IMGD_offset_array offset;
    double max_mean_offset;
    IMGD_lissajous_array lissajous_rx;
    IMGD_lissajous_z_array lissajous_z;
    double lissajous_range_min;
    double lissajous_range_max;
    double min_lissajous_optimum;
    IMGD_filename filename_rx;
    IMGD_filename filename_z;
} IMGD_encoder_alignment_result_struct;

typedef enum
{
    IMGD_CENTRAL = 0,
    IMGD_NORTH = 1,
    IMGD_EAST = 2,
    IMGD_SOUTH = 3,
    IMGD_WEST = 4,
} IMGD_region_enum;

typedef horvervect IMGD_hvv_array[0x5];

typedef struct
{
    double hz_1;
    double hz_10;
    double hz_100;
    double hz_1000;
    double hz_10000;
    double noise_low_up;
    IMGD_result_enum result;
} IMGD_frequency_row_struct;

typedef IMGD_frequency_row_struct IMGD_frequency_array[0x5];

typedef struct
{
    IMGD_chuck_func_enum chuck_func;
    IMGD_control_mode_enum control_mode;
    IMGD_hvv_array positions;
    int frequency_lower_limit;
    int frequency_upper_limit;
    IMGD_frequency_array emsi_y;
    double max_3sig_y;
    IMGD_filename filename_y;
    IMGD_frequency_array emsi_z;
    double max_3sig_z;
    IMGD_filename filename_z;
} IMGD_performance_result_struct;

typedef int IMGD_setpoints_int_array[0x25];

typedef double IMGD_setpoints_double_array[0x25];

typedef enum
{
    IMGD_x = 0,
    IMGD_y = 1,
    IMGD_rz = 2,
    IMGD_z = 3,
    IMGD_rx = 4,
    IMGD_ry = 5,
} IMGD_horvervect_enum;

typedef IMGD_setpoints_double_array IMGD_setpoints_array[0x6];

typedef IMGD_setpoints_int_array IMGD_lissajous_radius_array[0x8];

typedef IMGD_setpoints_int_array IMGD_axis_status_array[0x8];

typedef IMGD_result_enum IMGD_axis_result_array[0x8];

typedef char IMGD_check_spm_result_struct_legenda[0x64];

typedef struct
{
    IMGD_chuck_func_enum chuck_func;
    IMGD_control_mode_enum control_mode;
    double x;
    double y;
    IMGD_setpoints_array setpoints;
    IMGD_axis_status_array status;
    IMGD_check_spm_result_struct_legenda legenda;
    IMGD_axis_result_array result;
    IMGD_lissajous_radius_array radius;
} IMGD_check_spm_result_struct;

typedef struct
{
    IMGD_filename filename1;
    IMGD_filename filename2;
} IMGD_memory_dump_result_struct;

typedef struct
{
    IMGD_result_enum chuck1;
    IMGD_result_enum chuck2;
} IMGD_subtest_result;

typedef IMGD_subtest_result IMGD_subtest_result_array[0x8];

typedef char IMGD_chuck_result_struct_empty1[0x4];

typedef char IMGD_chuck_result_struct_empty2[0x4];

typedef char IMGD_chuck_result_struct_empty3[0x4];

typedef char IMGD_chuck_result_struct_empty4[0x4];

typedef char IMGD_chuck_result_struct_empty5[0x4];

typedef char IMGD_chuck_result_struct_empty6[0x4];

typedef struct
{
    int laser_quality;
    IMGD_result_enum laser_quality_ok;
    IMGD_chuck_result_struct_empty1 empty1;
    IMGD_electronics_result_struct electronics;
    IMGD_chuck_result_struct_empty2 empty2;
    IMGD_connectivity_result_struct connectivity;
    IMGD_chuck_result_struct_empty3 empty3;
    IMGD_signal_quality_result_struct signal_quality;
    IMGD_encoder_alignment_result_struct encoder_alignment;
    IMGD_chuck_result_struct_empty4 empty4;
    IMGD_performance_result_struct performance;
    IMGD_chuck_result_struct_empty5 empty5;
    IMGD_memory_dump_result_struct memory_dump;
    IMGD_chuck_result_struct_empty6 empty6;
    IMGD_check_spm_result_struct check_spm;
} IMGD_chuck_result_struct;

typedef char IMGD_result_table_row_chuck1[0xC];

typedef char IMGD_result_table_row_chuck2[0xC];

typedef struct
{
    IMGD_result_table_row_chuck1 chuck1;
    IMGD_result_table_row_chuck2 chuck2;
} IMGD_result_table_row;

typedef IMGD_result_table_row IMGD_subtest_result_table[0x8];

typedef IMGD_chuck_result_struct IMGD_result_struct_chuck[0x2];

typedef struct
{
    IMGD_filename directory;
    IMGD_subtest_result_array summary;
    IMGD_subtest_result_table table;
    IMGD_system_state_result_struct system_state;
    IMGD_result_struct_chuck chuck;
} IMGD_result_struct;

typedef struct
{
    IMGD_input_struct input;
    IMGD_result_struct result;
    bool all_tests_ok;
    IMGD_immersion_state old_immersion_state;
} IMGD_data_struct;



#endif // _IMGD_TC_H_
