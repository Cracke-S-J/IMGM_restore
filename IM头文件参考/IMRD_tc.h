/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMRD
* 文件名称 : IMRD_tc.h
* 概要描述 :
*	IM组件IMRD数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMRD_TC_H_
#define _IMRD_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <MIENXTxRA_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    IMRD_MEAS_SYSTEM_LRA = 0,
    IMRD_MEAS_SYSTEM_ARA = 1,
} IMRD_meas_system_enum;

typedef enum
{
    IMRD_RAIB_AXIS_E1 = 0,
    IMRD_RAIB_AXIS_E2 = 1,
    IMRD_RAIB_AXIS_E3 = 2,
    IMRD_RAIB_AXIS_M2 = 3,
    IMRD_RAIB_AXIS_M3 = 4,
    IMRD_RAIB_AXIS_ch6 = 5,
} IMRD_raib_axis_enum;

typedef enum
{
    IMRD_RAIB_SENSOR_E1 = 0,
    IMRD_RAIB_SENSOR_E2 = 1,
    IMRD_RAIB_SENSOR_E3 = 2,
    IMRD_RAIB_SENSOR_M2 = 3,
    IMRD_RAIB_SENSOR_M3 = 4,
} IMRD_raib_sensor_enum;

typedef enum
{
    IMRD_AXIS_LRA_X = 0,
    IMRD_AXIS_LRA_Y = 1,
    IMRD_AXIS_LRA_Z = 2,
    IMRD_AXIS_ARA_X = 3,
    IMRD_AXIS_ARA_Y = 4,
} IMRD_xyz_axis_enum;

typedef enum
{
    IMRD_TEST_NOISE_RAIB = 0,
    IMRD_TEST_NOISE_MI = 1,
    IMRD_TEST_SWEEP = 2,
    IMRD_TEST_OFFSET_RAIB = 3,
    IMRD_TEST_OFFSET_MI = 4,
    IMRD_TEST_RAMP = 5,
} IMRD_subtest_enum;

typedef struct
{
    IMRD_subtest_enum subtest;
    MIENXTxRA_race_axis_enum axis;
} IMRD_param_struct;

typedef enum
{
    IMRD_BASIC_TEST = 0,
    IMRD_ADVANCED_TEST = 1,
} IMRD_test_level_enum;

typedef char IMRD_test_flags_empty_line[0xC];

typedef struct
{
    bool precondition_check;
    bool reset_calibration;
    bool fade_raca_ara_lra;
    bool noise_level_check;
    bool act_chk_gap_raca_ara;
    bool act_chk_gap_raca_lra;
    bool act_connectivity_test_ara;
    bool act_connectivity_test_lra;
    bool act_conductivity_test_ara;
    bool act_conductivity_test_lra;
    bool trace_noise_liss_raib;
    bool trace_pos_mi;
    bool act_sweep_raca_ara;
    bool act_sweep_raca_lra;
    bool act_offset_raca_ara_trace_raib;
    bool act_offset_raca_lra_trace_raib;
    bool act_offset_raca_ara_trace_mi;
    bool act_offset_raca_lra_trace_mi;
    bool act_ramp_raca_ara;
    bool act_ramp_raca_lra;
    IMRD_test_flags_empty_line empty_line;
} IMRD_test_flags;

typedef struct
{
    bool lra_e1;
    bool lra_e2;
    bool lra_e3;
    bool ara_m2;
    bool ara_m3;
} IMRD_raib_axis_select_s;

typedef struct
{
    bool quick;
    bool script;
} IMRD_graph_options_s;

typedef struct
{
    int delta_freq_gap_ara;
    int delta_time_freq_gap_ara;
    double delta_curr_gap_ara;
    int delta_time_curr_gap_ara;
    double time_trace_gap_ara;
    int delta_freq_gap_lra;
    int delta_time_freq_gap_lra;
    double delta_curr_gap_lra;
    int delta_time_curr_gap_lra;
    double time_trace_gap_lra;
    double start_freq_sweep_ara;
    double stop_freq_sweep_ara;
    int delta_time_freq_sweep_ara;
    double delta_curr_sweep_ara;
    int delta_time_curr_sweep_ara;
    double start_freq_sweep_lra;
    double stop_freq_sweep_lra;
    int delta_time_freq_sweep_lra;
    double delta_curr_sweep_lra;
    int delta_time_curr_sweep_lra;
    double offset_raib_ara;
    double offset_raib_lra;
    double offset_mi_ara;
    double offset_mi_lra;
    IMRD_raib_axis_select_s reset_axes;
    IMRD_graph_options_s graph_options;
} IMRD_input_parameters;

typedef char IMRD_input_struct_empty_line[0xC];

typedef struct
{
    IMRD_test_level_enum test_level;
    IMRD_input_struct_empty_line empty_line;
    IMRD_test_flags selected_tests;
    IMRD_input_parameters parameters;
} IMRD_input_struct;

typedef char IMRD_states_s_empty_line[0xC];

typedef struct
{
    bool sim_flags_raib;
    bool sim_flags_race;
    bool sim_flag_ara_lra;
    bool spm_on_off;
    bool gsb_on;
    bool lasers_rabx_lra_ok;
    bool lasers_rabx_ara_ok;
    bool race_24v_power_on;
    bool raca_lra_detected;
    bool raca_ara_detected;
    bool race_status_info;
    bool raib_rabx_status_info;
    bool lcwc_temp_stable;
    bool airmounts_active;
    bool palm_actuator_on;
    bool all_preconditions_ok;
    IMRD_states_s_empty_line empty_line;
} IMRD_states_s;

typedef struct
{
    MIENXTxRA_race_axis_mode_enum axis_mode;
    bool frequency_moving;
    bool amplitude_moving;
    bool offset_moving;
    MIENXTxRA_race_axis_mode_enum output_state;
    bool actuator_detected;
    bool temperature_error_active;
    bool overloaded;
    bool axis_output_shorted;
    bool axis_output_enabled;
    int load_compensation;
} IMRD_RACE_axis_status_t;

typedef IMRD_RACE_axis_status_t IMRD_race_axis_stat_tbl[0x4];

typedef char IMRD_RACA_resistance_s_coil_result[0xC];

typedef char IMRD_RACA_resistance_s_cable_result[0xC];

typedef char IMRD_RACA_resistance_s_total_result[0xC];

typedef struct
{
    double board_sense_current;
    double board_sense_voltage_p;
    double board_sense_voltage_n;
    double coil_sense_voltage;
    float coil;
    float cable;
    float total;
    IMRD_RACA_resistance_s_coil_result coil_result;
    IMRD_RACA_resistance_s_cable_result cable_result;
    IMRD_RACA_resistance_s_total_result total_result;
} IMRD_RACA_resistance_s;

typedef IMRD_RACA_resistance_s IMRD_RACA_resistance_tbl[0x2];

typedef char IMRD_LRA_connectivity_s_x_move_expected_sign[0x4];

typedef char IMRD_LRA_connectivity_s_y_move_expected_sign[0x4];

typedef char IMRD_LRA_connectivity_s_z_move_expected_sign[0x4];

typedef struct
{
    IMRD_LRA_connectivity_s_x_move_expected_sign x_move_expected_sign;
    double x_move_actual;
    IMRD_LRA_connectivity_s_y_move_expected_sign y_move_expected_sign;
    double y_move_actual;
    IMRD_LRA_connectivity_s_z_move_expected_sign z_move_expected_sign;
    double z_move_actual;
    bool move_OK;
} IMRD_LRA_connectivity_s;

typedef IMRD_LRA_connectivity_s IMRD_LRA_connect_tbl[0x5];

typedef char IMRD_ARA_connectivity_s_expected_sign[0x4];

typedef struct
{
    double detected_move;
    double expected_move;
    IMRD_ARA_connectivity_s_expected_sign expected_sign;
    bool move_OK;
} IMRD_ARA_connectivity_s;

typedef IMRD_ARA_connectivity_s IMRD_ARA_connect_tbl[0x5];

typedef char IMRD_RACA_result_s_race_rc_state[0x14];

typedef char IMRD_RACA_result_s_output_state_ch1[0x18];

typedef char IMRD_RACA_result_s_output_state_ch2[0x18];

typedef char IMRD_RACA_result_s_connectivity_ARA[0x28];

typedef char IMRD_RACA_result_s_connectivity_LRA[0x28];

typedef struct
{
    int bist_race;
    IMRD_RACA_result_s_race_rc_state race_rc_state;
    IMRD_RACA_result_s_output_state_ch1 output_state_ch1;
    IMRD_RACA_result_s_output_state_ch2 output_state_ch2;
    IMRD_race_axis_stat_tbl axis_status;
    IMRD_RACA_resistance_tbl RACA_resistance;
    IMRD_RACA_result_s_connectivity_ARA connectivity_ARA;
    IMRD_ARA_connect_tbl ARA_moves;
    IMRD_RACA_result_s_connectivity_LRA connectivity_LRA;
    IMRD_LRA_connect_tbl LRA_moves;
    int load_compensation_mc;
} IMRD_RACA_result_s;

typedef char IMRD_gap_validation_s_ara_vdiff_str[0x50];

typedef char IMRD_gap_validation_s_ara_gap_str[0x50];

typedef char IMRD_gap_validation_s_lra_vdiff_str[0x50];

typedef char IMRD_gap_validation_s_lra_gap_str[0x50];

typedef struct
{
    double ara_vdiff;
    double ara_vdiff_lower_limit;
    double ara_vdiff_upper_limit;
    IMRD_gap_validation_s_ara_vdiff_str ara_vdiff_str;
    double ara_gap;
    double ara_gap_lower_limit;
    double ara_gap_upper_limit;
    IMRD_gap_validation_s_ara_gap_str ara_gap_str;
    double lra_vdiff;
    double lra_vdiff_lower_limit;
    double lra_vdiff_upper_limit;
    IMRD_gap_validation_s_lra_vdiff_str lra_vdiff_str;
    double lra_gap;
    double lra_gap_lower_limit;
    double lra_gap_upper_limit;
    IMRD_gap_validation_s_lra_gap_str lra_gap_str;
} IMRD_gap_validation_s;

typedef char IMRD_laser_state_s_laser_on[0x14];

typedef char IMRD_laser_state_s_laser_current[0x14];

typedef struct
{
    IMRD_laser_state_s_laser_on laser_on;
    IMRD_laser_state_s_laser_current laser_current;
    float monitor_current;
    float laser_temperature;
    bool laser_ok;
} IMRD_laser_state_s;

typedef IMRD_laser_state_s IMRD_laser_state_tbl[0x6];

typedef struct
{
    bool sensor_connected;
    bool counter_valid;
    bool laser_on;
    bool life_warning;
    bool powered;
    bool power_in_range;
    bool test_mode;
} IMRD_axis_state_s;

typedef IMRD_axis_state_s IMRD_axis_state_tbl[0x6];

typedef char IMRD_infotxt[0x50];

typedef IMRD_infotxt IMRD_ra_error_tbl[0x6];

typedef char IMRD_RAIB_errors_s_board_state[0x20];

typedef bool IMRD_RAIB_errors_s_axis_state_transposed[0x7][0x7];

typedef char IMRD_RAIB_errors_s_ra_status[0x20];

typedef struct
{
    IMRD_RAIB_errors_s_board_state board_state;
    bool bist_failed;
    bool hpdb_clock_present;
    bool hpdb_sync_present;
    bool psu_1_switched_on;
    bool psu_2_switched_on;
    bool raib_power_check_failed;
    bool rabx_1_power_check_failed;
    bool rabx_2_power_check_failed;
    bool laser_warning_active;
    IMRD_axis_state_tbl axis_state;
    IMRD_RAIB_errors_s_axis_state_transposed axis_state_transposed;
    IMRD_RAIB_errors_s_ra_status ra_status;
    IMRD_ra_error_tbl ra_error_state;
} IMRD_RAIB_errors_s;

typedef struct
{
    double min_noise_level;
    double typ_noise_level;
    double max_noise_level;
} IMRD_RAIB_noise_ch_s;

typedef char IMRD_RAIB_signal_ch_s_lissa_radius_min_max_str[0x28];

typedef char IMRD_RAIB_signal_ch_s_lissa_radius_mean_min_max_str[0x28];

typedef struct
{
    float lissa_radius_min_check;
    float lissa_radius_max_check;
    IMRD_RAIB_signal_ch_s_lissa_radius_min_max_str lissa_radius_min_max_str;
    float lissa_radius_range_check;
    float lissa_radius_mean_min_check;
    float lissa_radius_mean_max_check;
    IMRD_RAIB_signal_ch_s_lissa_radius_mean_min_max_str lissa_radius_mean_min_max_str;
    float lissa_radius_stdev_check;
} IMRD_RAIB_signal_ch_s;

typedef char IMRD_stat_values_result[0x14];

typedef struct
{
    double mean_val;
    double min_val;
    double max_val;
    double stdev_val;
    double range_val;
    IMRD_stat_values_result result;
} IMRD_stat_values;

typedef char IMRD_stat_bits_result[0xC];

typedef struct
{
    float mean_val;
    float min_val;
    float max_val;
    float stdev_val;
    float range_val;
    IMRD_stat_bits_result result;
    bool min_ok;
    bool max_ok;
    bool mean_ok;
    bool range_ok;
    bool stdev_ok;
} IMRD_stat_bits;

typedef IMRD_stat_values IMRD_RAIB_noise_s[0x5];

typedef IMRD_stat_bits IMRD_RAIB_signal_s[0x5];

typedef IMRD_stat_values IMRD_xyz_noise_s[0x5];

typedef char IMRD_RAIB_reset_s_executed[0xC];

typedef struct
{
    int correction_value;
    IMRD_RAIB_reset_s_executed executed;
} IMRD_RAIB_reset_s;

typedef IMRD_RAIB_reset_s IMRD_RAIB_reset_tbl[0x5];

typedef struct
{
    double sin_gain;
    double cos_gain;
    double sin_offset;
    double cos_offset;
    double phase;
} IMRD_RAIB_correct_s;

typedef IMRD_RAIB_correct_s IMRD_RAIB_correct_tbl[0x6];

typedef char IMRD_logfile_info_s_logfile_name[0x50];

typedef char IMRD_logfile_info_s_logdir_name[0x50];

typedef char IMRD_logfile_info_s_empty_line[0xC];

typedef struct
{
    int logfile_id;
    IMRD_logfile_info_s_logfile_name logfile_name;
    IMRD_logfile_info_s_logdir_name logdir_name;
    IMRD_logfile_info_s_empty_line empty_line;
} IMRD_logfile_info_s;

typedef struct
{
    double actual_temp;
    double average_temp;
    double min_temp;
    double max_temp;
    double stdev_temp;
    double delta_check;
    int nr_samples;
} IMRD_temp_stability;

typedef struct
{
    bool lissajous_sweep_ara;
    bool lissajous_sweep_lra;
} IMRD_plot_queue_s;

typedef char IMRD_system_ids_s_hsi_nr[0x100];

typedef char IMRD_system_ids_s_line_1[0x100];

typedef char IMRD_system_ids_s_line_2[0x100];

typedef char IMRD_system_ids_s_line_3[0x100];

typedef char IMRD_system_ids_s_line_4[0x100];

typedef char IMRD_system_ids_s_line_5[0x100];

typedef struct
{
    IMRD_system_ids_s_hsi_nr hsi_nr;
    IMRD_system_ids_s_line_1 line_1;
    IMRD_system_ids_s_line_2 line_2;
    IMRD_system_ids_s_line_3 line_3;
    IMRD_system_ids_s_line_4 line_4;
    IMRD_system_ids_s_line_5 line_5;
} IMRD_system_ids_s;

typedef char IMRD_board_versions_s_raib_hw_12nc[0x10];

typedef char IMRD_board_versions_s_raib_sw_12nc[0x10];

typedef char IMRD_board_versions_s_rabx1_sw_12nc[0x10];

typedef char IMRD_board_versions_s_rabx2_sw_12nc[0x10];

typedef struct
{
    int raib_sn;
    IMRD_board_versions_s_raib_hw_12nc raib_hw_12nc;
    IMRD_board_versions_s_raib_sw_12nc raib_sw_12nc;
    IMRD_board_versions_s_rabx1_sw_12nc rabx1_sw_12nc;
    IMRD_board_versions_s_rabx2_sw_12nc rabx2_sw_12nc;
} IMRD_board_versions_s;

typedef char IMRD_board_ids_s_empty_line[0xC];

typedef struct
{
    IMRD_system_ids_s race_system_ids;
    IMRD_system_ids_s raib_system_ids;
    IMRD_board_versions_s raib_board_versions;
    IMRD_board_ids_s_empty_line empty_line;
} IMRD_board_ids_s;

typedef char IMRD_mach_info_s_vp_encoder_suspension[0x18];

typedef char IMRD_mach_info_s_empty_line[0xC];

typedef struct
{
    IMRD_mach_info_s_vp_encoder_suspension vp_encoder_suspension;
    IMRD_mach_info_s_empty_line empty_line;
} IMRD_mach_info_s;

typedef char IMRD_result_struct_subtest_info[0x50];

typedef char IMRD_result_struct_action_info[0x50];

typedef char IMRD_result_struct_progress_info[0x50];

typedef struct
{
    IMRD_mach_info_s machine_info;
    IMRD_board_ids_s board_ids;
    IMRD_logfile_info_s logfile_info;
    IMRD_test_flags tests_executed;
    IMRD_states_s preconditions;
    IMRD_RACA_result_s RACA_result;
    IMRD_gap_validation_s gap_validation;
    IMRD_laser_state_tbl laser_state;
    IMRD_RAIB_errors_s RAIB_errors;
    IMRD_result_struct_subtest_info subtest_info;
    IMRD_result_struct_action_info action_info;
    IMRD_result_struct_progress_info progress_info;
    int tests_selected;
    int active_tests_selected;
    int nr_tests_executed;
    IMRD_RAIB_noise_ch_s RAIB_noise_check;
    IMRD_RAIB_noise_s RAIB_noise;
    IMRD_RAIB_signal_ch_s RAIB_signal_range_check;
    IMRD_RAIB_signal_s RAIB_signal_range;
    IMRD_xyz_noise_s diff_noise;
    IMRD_RAIB_correct_tbl correction;
    IMRD_RAIB_reset_tbl RAIB_reset_state;
    IMRD_temp_stability LCWC_temperature;
    IMRD_plot_queue_s plot_queue;
} IMRD_result_struct;

typedef double IMRD_lissa_values_struct_cos_sin[0xA];

typedef struct
{
    IMRD_lissa_values_struct_cos_sin cos_sin;
} IMRD_lissa_values_struct;

typedef struct
{
    int len;
    int max_len;
    IMRD_lissa_values_struct* array;
} IMRD_lissa_array_struct;

typedef char IMRD_trace_struct_title[0x50];

typedef struct
{
    IMRD_lissa_array_struct lissa_values;
    IMRD_trace_struct_title title;
} IMRD_trace_struct;

typedef struct
{
    IMRD_input_struct input;
    IMRD_result_struct result;
    IMRD_trace_struct traces;
} IMRD_data_struct;



#endif // _IMRD_TC_H_
