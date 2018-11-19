/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMZD_GEN
* 文件名称 : IMZD_GEN_tc.h
* 概要描述 :
*	IM组件IMZD_GEN数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMZD_GEN_TC_H_
#define _IMZD_GEN_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <WPPDxZEROADV_tc.h> 
#include <WPxCHUCK_tc.h> 
#include <AMXAxSTAB_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    IMZD_GEN_RESULT_OK = 0,
    IMZD_GEN_RESULT_NOK = 1,
    IMZD_GEN_RESULT_NA = 2,
    IMZD_GEN_RESULT_SKIPPED = 3,
} IMZD_GEN_result_id;

typedef enum
{
    IMZD_GEN_STATE_OK = 0,
    IMZD_GEN_STATE_NOK = 1,
} IMZD_GEN_state_id;

typedef enum
{
    IMZD_GEN_SHUTTER_CLOSED = 0,
    IMZD_GEN_SHUTTER_OPEN = 1,
} IMZD_GEN_shutter_id;

typedef enum
{
    IMZD_GEN_X = 0,
    IMZD_GEN_Y = 1,
    IMZD_GEN_Z = 2,
    IMZD_GEN_RX = 3,
    IMZD_GEN_RY = 4,
    IMZD_GEN_RZ = 5,
} IMZD_GEN_axis_id;

typedef enum
{
    IMZD_GEN_ZS1 = 0,
    IMZD_GEN_ZS2 = 1,
    IMZD_GEN_ZS3 = 2,
} IMZD_GEN_zs_id;

typedef enum
{
    IMZD_GEN_CHK1_ZS1 = 0,
    IMZD_GEN_CHK1_ZS2 = 1,
    IMZD_GEN_CHK1_ZS3 = 2,
    IMZD_GEN_CHK2_ZS1 = 3,
    IMZD_GEN_CHK2_ZS2 = 4,
    IMZD_GEN_CHK2_ZS3 = 5,
} IMZD_GEN_image_id;

typedef enum
{
    IMZD_GEN_ZS_NOK = 0,
    IMZD_GEN_ZS_OK = 1,
    IMZD_GEN_ZS_INC = 2,
} IMZD_GEN_zs_detected_id;

typedef enum
{
    IMZD_GEN_ZS1_U = 0,
    IMZD_GEN_ZS1_V = 1,
    IMZD_GEN_ZS2_U = 2,
    IMZD_GEN_ZS2_V = 3,
    IMZD_GEN_ZS3_U = 4,
    IMZD_GEN_ZS3_V = 5,
} IMZD_GEN_zs_volt_id;

typedef enum
{
    IMZD_GEN_X_POS = 0,
    IMZD_GEN_Y_POS = 1,
} IMZD_GEN_zs_pos_id;

typedef enum
{
    IMZD_GEN_BASIC_SENS = 0,
    IMZD_GEN_FIBER_CONS = 1,
    IMZD_GEN_GAIN_MATRIX = 2,
    IMZD_GEN_ZS_AT_ZEROPOS = 3,
} IMZD_GEN_measure_type_one;

typedef enum
{
    IMZD_GEN_ZS_AROUND_ZEROPOS = 0,
    IMZD_GEN_ZS_VS_ENC_AT_ZEROPOS = 1,
    IMZD_GEN_PHASE_CHG_DETECT = 2,
    IMZD_GEN_ZS_INTENSITY = 3,
    IMZD_GEN_REPRO_BF = 4,
} IMZD_GEN_measure_type_two;

typedef enum
{
    IMZD_GEN_NO_ZS_CHECK_PERFORMED = 0,
    IMZD_GEN_ZS_NOT_FOUND = 1,
    IMZD_GEN_NO_VALID_ZS_POS_FOUND = 2,
    IMZD_GEN_STEPS_TO_CENTER_DIVERGE = 3,
    IMZD_GEN_STEPS_TO_CENTER_DO_NOT_CONVERGE = 4,
    IMZD_GEN_ZS_FOUND = 5,
} IMZD_GEN_status_id;

typedef enum
{
    IMZD_GEN_U1 = 0,
    IMZD_GEN_U2 = 1,
    IMZD_GEN_V1 = 2,
    IMZD_GEN_V2 = 3,
    IMZD_GEN_U_AVG_SFT = 4,
    IMZD_GEN_V_AVG_SFT = 5,
    IMZD_GEN_U_AVG_HRD = 6,
    IMZD_GEN_V_AVG_HRD = 7,
    IMZD_GEN_DIFF_UVAVG = 8,
} IMZD_GEN_report_volt_id;

typedef enum
{
    IMZD_GEN_PSD_PE_X = 0,
    IMZD_GEN_PSD_PE_Y = 1,
    IMZD_GEN_PSD_PE_Z = 2,
    IMZD_GEN_PSD_PE_RX = 3,
    IMZD_GEN_PSD_PE_RY = 4,
    IMZD_GEN_PSD_PE_RZ = 5,
} IMZD_GEN_psd_pe_id;

typedef enum
{
    IMZD_GEN_ENC2HOR = 0,
    IMZD_GEN_ENC2VER = 1,
    IMZD_GEN_ENC3HOR = 2,
    IMZD_GEN_ENC3VER = 3,
    IMZD_GEN_ENC4HOR = 4,
    IMZD_GEN_ENC4VER = 5,
} IMZD_GEN_enc_hor_ver_id;

typedef enum
{
    IMZD_GEN_PSD_U1 = 0,
    IMZD_GEN_PSD_U2 = 1,
    IMZD_GEN_PSD_V1 = 2,
    IMZD_GEN_PSD_V2 = 3,
} IMZD_GEN_volt_id;

typedef enum
{
    IMZD_GEN_SPM = 0,
    IMZD_GEN_PARTIAL = 1,
    IMZD_GEN_BF = 2,
} IMZD_GEN_control_mode_id;

typedef struct
{
    bool chuck1;
    bool chuck2;
    bool spm_control;
} IMZD_GEN_general_input_struct;

typedef struct
{
    bool selected;
    bool spm_enabled;
    bool check_airmounts;
} IMZD_GEN_zs_basic_check_input_struct;

typedef struct
{
    bool selected;
} IMZD_GEN_zs_fiber_consistency_check_input_struct;

typedef struct
{
    bool selected;
} IMZD_GEN_zs_gain_matrix_check_input_struct;

typedef struct
{
    bool selected;
    int cycles_without_spm_update;
    int cycles_with_spm_update;
} IMZD_GEN_zs_check_at_zero_position_input_struct;

typedef struct
{
    bool selected;
    int cycles;
    double x_range;
    double y_range;
    double z_range;
    double rx_range;
    double ry_range;
    double rz_range;
} IMZD_GEN_zs_check_around_zero_position_input_struct;

typedef struct
{
    bool selected;
    int cycles;
} IMZD_GEN_zs_versus_encoder_check_input_struct;

typedef struct
{
    bool selected;
    int cycles;
} IMZD_GEN_phase_change_detection_input_struct;

typedef char IMZD_GEN_zs_intensity_check_input_struct_tracking_file[0x400];

typedef struct
{
    bool selected;
    double scan_area_x;
    double scan_area_y;
    double stepsize;
    IMZD_GEN_zs_intensity_check_input_struct_tracking_file tracking_file;
    bool track_temp;
    bool track_i_op_act;
} IMZD_GEN_zs_intensity_check_input_struct;

typedef struct
{
    bool selected;
    int cycles;
} IMZD_GEN_repro_zeroing_to_baseframe_input_struct;

typedef struct
{
    IMZD_GEN_general_input_struct general;
    IMZD_GEN_zs_basic_check_input_struct zs_basic_check;
    IMZD_GEN_zs_fiber_consistency_check_input_struct zs_fiber_consistency_check;
    IMZD_GEN_zs_gain_matrix_check_input_struct zs_gain_matrix_check;
    IMZD_GEN_zs_check_at_zero_position_input_struct zs_check_at_zero_position;
    IMZD_GEN_zs_check_around_zero_position_input_struct zs_check_around_zero_position;
    IMZD_GEN_zs_versus_encoder_check_input_struct zs_versus_encoder_check;
    IMZD_GEN_phase_change_detection_input_struct phase_change_detection;
    IMZD_GEN_zs_intensity_check_input_struct zs_intensity_check;
    IMZD_GEN_repro_zeroing_to_baseframe_input_struct repro_zeroing_to_baseframe;
} IMZD_GEN_input_struct;

typedef struct
{
    double max_value;
    double value;
    IMZD_GEN_result_id result;
} IMZD_GEN_result_record;

typedef struct
{
    double value;
    IMZD_GEN_result_id result;
} IMZD_GEN_volt_result_record;

typedef struct
{
    double lower;
    double upper;
} IMZD_GEN_volt_limits_record;

typedef struct
{
    IMZD_GEN_result_id result;
} IMZD_GEN_total_result_record;

typedef struct
{
    double min_value;
    double max_value;
    double value;
    IMZD_GEN_result_id result;
} IMZD_GEN_mm_result_record;

typedef struct
{
    double min;
    double max;
    double peakpeak;
    double avg;
    double threesigma;
} IMZD_GEN_detailed_result_record;

typedef struct
{
    double min;
    double max;
    double peakpeak;
    double avg;
    double limit_peakpeak;
    IMZD_GEN_result_id result;
} IMZD_GEN_max_peakpeak_detailed_result_record;

typedef struct
{
    double min;
    double max;
    double peakpeak;
    double avg;
    double limit_peakpeak;
    IMZD_GEN_result_id result;
} IMZD_GEN_max_peakpeak_meter_result_record;

typedef struct
{
    double min;
    double max;
    double peakpeak;
    double avg;
    double threesigma;
    double limit_threesigma;
    IMZD_GEN_result_id result;
} IMZD_GEN_max_threesigma_detailed_result_record;

typedef char IMZD_GEN_max_max_detailed_result_record_limit[0x14];

typedef struct
{
    double min;
    double max;
    double peakpeak;
    double avg;
    double threesigma;
    IMZD_GEN_max_max_detailed_result_record_limit limit;
    IMZD_GEN_result_id result;
} IMZD_GEN_max_max_detailed_result_record;

typedef struct
{
    double min;
    double max;
    double peakpeak;
    double avg;
    double threesigma;
    double limit_threesigma;
    IMZD_GEN_result_id result;
} IMZD_GEN_max_threesigma_temperature_result_record;

typedef char IMZD_GEN_laserbox_status_serial_number[0x14];

typedef char IMZD_GEN_laserbox_status_error_status[0x28];

typedef char IMZD_GEN_laserbox_status_skipped_info[0x34];

typedef struct
{
    IMZD_GEN_laserbox_status_serial_number serial_number;
    double elapsed_time_counter;
    double temperature;
    IMZD_GEN_state_id connected_state;
    IMZD_GEN_state_id initialized_state;
    IMZD_GEN_state_id signup_complete;
    IMZD_GEN_laserbox_status_error_status error_status;
    IMZD_GEN_shutter_id sh_state;
    IMZD_GEN_laserbox_status_skipped_info skipped_info;
} IMZD_GEN_laserbox_status;

typedef struct
{
    double iop_920;
    double iop_act;
    double iop_power;
    double iop_920_limit;
    IMZD_GEN_result_id result;
} IMZD_GEN_laserbox_channel_info;

typedef struct
{
    IMZD_GEN_volt_result_record dark1;
    IMZD_GEN_volt_result_record dark2;
    IMZD_GEN_volt_result_record dark3;
    IMZD_GEN_volt_limits_record limits;
    IMZD_GEN_total_result_record dark_total;
} IMZD_GEN_dark_current_voltages;

typedef struct
{
    IMZD_GEN_volt_result_record volt1;
    IMZD_GEN_volt_result_record volt2;
    IMZD_GEN_volt_result_record volt3;
    IMZD_GEN_volt_limits_record limits;
} IMZD_GEN_zs_voltage_results;

typedef IMZD_GEN_zs_voltage_results IMZD_GEN_zs_voltages_results[0x9];

typedef struct
{
    IMZD_GEN_zs_voltages_results results;
} IMZD_GEN_zs_voltages;

typedef struct
{
    IMZD_GEN_status_id status_zs1;
    IMZD_GEN_status_id status_zs2;
    IMZD_GEN_status_id status_zs3;
} IMZD_GEN_zs_status;

typedef IMZD_GEN_zs_voltage_results IMZD_GEN_chuck_info_results[0x9];

typedef IMZD_GEN_zs_status IMZD_GEN_chuck_info_status[0x1];

typedef double IMZD_GEN_chuck_info_positions[0x3][0x2];

typedef struct
{
    IMZD_GEN_chuck_info_results results;
    IMZD_GEN_chuck_info_status status;
    IMZD_GEN_chuck_info_positions positions;
} IMZD_GEN_chuck_info;

typedef IMZD_GEN_laserbox_channel_info IMZD_GEN_zs_basic_check_struct_channel_info[0x3];

typedef IMZD_GEN_dark_current_voltages IMZD_GEN_zs_basic_check_struct_dark_voltages[0x1];

typedef IMZD_GEN_chuck_info IMZD_GEN_zs_basic_check_struct_info[0x2];

typedef struct
{
    AMXAxSTAB_perf_struct_array air_results;
    IMZD_GEN_laserbox_status lb_status;
    IMZD_GEN_zs_basic_check_struct_channel_info channel_info;
    IMZD_GEN_zs_basic_check_struct_dark_voltages dark_voltages;
    IMZD_GEN_zs_basic_check_struct_info info;
} IMZD_GEN_zs_basic_check_struct;

typedef struct
{
    double zs1;
    double zs2;
    double zs3;
    IMZD_GEN_zs_id zs_expect;
    IMZD_GEN_zs_detected_id zs_detect;
} IMZD_GEN_zs_fiber_consistency_results;

typedef IMZD_GEN_zs_fiber_consistency_results IMZD_GEN_zs_fiber_consistency_check_struct_results[0x3];

typedef char IMZD_GEN_zs_fiber_consistency_check_struct_skipped_info[0x34];

typedef struct
{
    IMZD_GEN_zs_fiber_consistency_check_struct_results results;
    IMZD_GEN_zs_fiber_consistency_check_struct_skipped_info skipped_info;
} IMZD_GEN_zs_fiber_consistency_check_struct;

typedef struct
{
    double x;
    double y;
    double z;
    double rx;
    double ry;
    double rz;
    IMZD_GEN_result_id voltages_result;
} IMZD_GEN_gm_result;

typedef double IMZD_GEN_zs_voltages_results_voltages_default_mc[0x6][0x6];

typedef double IMZD_GEN_zs_voltages_results_voltages_mc[0x6][0x6];

typedef double IMZD_GEN_zs_voltages_results_voltages_measured[0x6][0x6];

typedef IMZD_GEN_gm_result IMZD_GEN_zs_voltages_results_voltages_default_mc_measured[0x6];

typedef IMZD_GEN_gm_result IMZD_GEN_zs_voltages_results_voltages_mc_measured[0x6];

typedef struct
{
    IMZD_GEN_zs_voltages_results_voltages_default_mc voltages_default_mc;
    IMZD_GEN_zs_voltages_results_voltages_mc voltages_mc;
    IMZD_GEN_zs_voltages_results_voltages_measured voltages_measured;
    IMZD_GEN_zs_voltages_results_voltages_default_mc_measured voltages_default_mc_measured;
    IMZD_GEN_zs_voltages_results_voltages_mc_measured voltages_mc_measured;
} IMZD_GEN_zs_voltages_results;

typedef IMZD_GEN_zs_voltages_results IMZD_GEN_zs_gain_matrix_check_struct_volt_result[0x2];

typedef struct
{
    IMZD_GEN_zs_gain_matrix_check_struct_volt_result volt_result;
} IMZD_GEN_zs_gain_matrix_check_struct;

typedef IMZD_GEN_max_peakpeak_detailed_result_record IMZD_GEN_zs_check_at_zero_position_struct_zss_zero_pos_without_spm[0x2][0x6];

typedef IMZD_GEN_max_peakpeak_detailed_result_record IMZD_GEN_zs_check_at_zero_position_struct_zss_zero_pos_with_spm[0x2][0x6];

typedef IMZD_GEN_max_threesigma_temperature_result_record IMZD_GEN_zs_check_at_zero_position_struct_mf_temp[0x1];

typedef struct
{
    IMZD_GEN_zs_check_at_zero_position_struct_zss_zero_pos_without_spm zss_zero_pos_without_spm;
    IMZD_GEN_zs_check_at_zero_position_struct_zss_zero_pos_with_spm zss_zero_pos_with_spm;
    IMZD_GEN_zs_check_at_zero_position_struct_mf_temp mf_temp;
} IMZD_GEN_zs_check_at_zero_position_struct;

typedef IMZD_GEN_max_peakpeak_detailed_result_record IMZD_GEN_zs_check_around_zero_position_struct_random_around_zero_pos[0x2][0x6];

typedef IMZD_GEN_max_threesigma_temperature_result_record IMZD_GEN_zs_check_around_zero_position_struct_mf_temp[0x1];

typedef struct
{
    IMZD_GEN_zs_check_around_zero_position_struct_random_around_zero_pos random_around_zero_pos;
    IMZD_GEN_zs_check_around_zero_position_struct_mf_temp mf_temp;
} IMZD_GEN_zs_check_around_zero_position_struct;

typedef struct
{
    double min;
    double max;
} IMZD_GEN_zs_vs_enc_min_max_result_record;

typedef IMZD_GEN_zs_vs_enc_min_max_result_record IMZD_GEN_zs_versus_encoder_check_struct_min_max[0x2][0x6];

typedef IMZD_GEN_detailed_result_record IMZD_GEN_zs_versus_encoder_check_struct_psd[0x2][0x6];

typedef IMZD_GEN_detailed_result_record IMZD_GEN_zs_versus_encoder_check_struct_enc[0x2][0x6];

typedef IMZD_GEN_max_threesigma_detailed_result_record IMZD_GEN_zs_versus_encoder_check_struct_psd_enc[0x2][0x6];

typedef IMZD_GEN_max_threesigma_temperature_result_record IMZD_GEN_zs_versus_encoder_check_struct_mf_temp[0x1];

typedef struct
{
    IMZD_GEN_zs_versus_encoder_check_struct_min_max min_max;
    IMZD_GEN_zs_versus_encoder_check_struct_psd psd;
    IMZD_GEN_zs_versus_encoder_check_struct_enc enc;
    IMZD_GEN_zs_versus_encoder_check_struct_psd_enc psd_enc;
    IMZD_GEN_zs_versus_encoder_check_struct_mf_temp mf_temp;
} IMZD_GEN_zs_versus_encoder_check_struct;

typedef struct
{
    int changes;
    int limit_changes;
    IMZD_GEN_result_id result;
} IMZD_GEN_phase_change_detection_changes_result_record;

typedef IMZD_GEN_max_peakpeak_meter_result_record IMZD_GEN_phase_change_detection_struct_fine_zeroing[0x2][0x6];

typedef IMZD_GEN_phase_change_detection_changes_result_record IMZD_GEN_phase_change_detection_struct_fine_result[0x2][0x6];

typedef IMZD_GEN_max_peakpeak_meter_result_record IMZD_GEN_phase_change_detection_struct_phase_capture[0x2][0x6];

typedef IMZD_GEN_phase_change_detection_changes_result_record IMZD_GEN_phase_change_detection_struct_phase_result[0x2][0x6];

typedef IMZD_GEN_max_threesigma_temperature_result_record IMZD_GEN_phase_change_detection_struct_mf_temp[0x1];

typedef struct
{
    IMZD_GEN_phase_change_detection_struct_fine_zeroing fine_zeroing;
    IMZD_GEN_phase_change_detection_struct_fine_result fine_result;
    IMZD_GEN_phase_change_detection_struct_phase_capture phase_capture;
    IMZD_GEN_phase_change_detection_struct_phase_result phase_result;
    IMZD_GEN_phase_change_detection_struct_mf_temp mf_temp;
} IMZD_GEN_phase_change_detection_struct;

typedef struct
{
    double x_pos;
    double y_pos;
    double result;
} IMZD_GEN_intensity_center_pos_result;

typedef IMZD_GEN_intensity_center_pos_result IMZD_GEN_zs_intensity_check_struct_center_pos[0x2][0x3];

typedef char IMZD_GEN_zs_intensity_check_struct_skipped_info[0x34];

typedef struct
{
    IMZD_GEN_zs_intensity_check_struct_center_pos center_pos;
    IMZD_GEN_zs_intensity_check_struct_skipped_info skipped_info;
} IMZD_GEN_zs_intensity_check_struct;

typedef struct
{
    int len;
    int max_len;
    double* array;
} IMZD_GEN_zs_intensity_row;

typedef struct
{
    int len;
    int max_len;
    IMZD_GEN_zs_intensity_row* array;
} IMZD_GEN_zs_intensity_matrix;

typedef struct
{
    double v_min;
    double v_max;
    IMZD_GEN_zs_intensity_matrix matrix;
} IMZD_GEN_zs_intensity_plot_struct;

typedef struct
{
    int min;
    int max;
    double avg;
    int limit_max;
    IMZD_GEN_result_id result;
} IMZD_GEN_repro_init_result;

typedef IMZD_GEN_max_threesigma_detailed_result_record IMZD_GEN_repro_zeroing_to_baseframe_struct_c2f[0x2][0x6];

typedef IMZD_GEN_repro_init_result IMZD_GEN_repro_zeroing_to_baseframe_struct_attempts[0x2];

typedef struct
{
    IMZD_GEN_repro_zeroing_to_baseframe_struct_c2f c2f;
    IMZD_GEN_repro_zeroing_to_baseframe_struct_attempts attempts;
} IMZD_GEN_repro_zeroing_to_baseframe_struct;

typedef char IMZD_GEN_result_struct_progress_one[0x2][0x4][0xC];

typedef char IMZD_GEN_result_struct_progress_two[0x2][0x5][0xC];

typedef char IMZD_GEN_result_struct_last_known_substep[0x100];

typedef struct
{
    IMZD_GEN_result_struct_progress_one progress_one;
    IMZD_GEN_result_struct_progress_two progress_two;
    IMZD_GEN_zs_basic_check_struct basic;
    IMZD_GEN_zs_fiber_consistency_check_struct fiber;
    IMZD_GEN_zs_gain_matrix_check_struct matrix;
    IMZD_GEN_zs_check_at_zero_position_struct at_zero;
    IMZD_GEN_zs_check_around_zero_position_struct random;
    IMZD_GEN_zs_versus_encoder_check_struct zs_vs_enc;
    IMZD_GEN_phase_change_detection_struct phase_change;
    IMZD_GEN_zs_intensity_check_struct intensity;
    IMZD_GEN_repro_zeroing_to_baseframe_struct repro;
    IMZD_GEN_result_struct_last_known_substep last_known_substep;
} IMZD_GEN_result_struct;

typedef IMZD_GEN_zs_intensity_plot_struct IMZD_GEN_intermediate_struct_intensity_plot[0x6];

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_on_measure;
    WPPDxZEROADV_zero_state_enum chuck_m_zeroing_state;
    WPPDxZEROADV_zero_state_enum chuck_e_zeroing_state;
    bool laserbox_connection_ok;
    IMZD_GEN_intermediate_struct_intensity_plot intensity_plot;
} IMZD_GEN_intermediate_struct;

typedef struct
{
    IMZD_GEN_input_struct input;
    IMZD_GEN_result_struct result;
    IMZD_GEN_intermediate_struct intermediate;
} IMZD_GEN_data_struct;



#endif // _IMZD_GEN_TC_H_
