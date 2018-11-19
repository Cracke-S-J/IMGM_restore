/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMEZ
* 文件名称 : IMEZ_tc.h
* 概要描述 :
*	IM组件IMEZ数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMEZ_TC_H_
#define _IMEZ_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <AMEXXT_tc.h> 
#include <TMXA.h> 
#include <AMXAxSTAB_tc.h> 
#include <MIRSXTxZR_tc.h> 
#include <RQRPxMCxRMZ_tc.h> 
#include <base.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    IMEZ_MEASUREMENT_TYPE_ENC_RZ = 0,
    IMEZ_MEASUREMENT_TYPE_LENSTOP_RZ = 1,
    IMEZ_MEASUREMENT_TYPE_COARSE_CAL = 2,
    IMEZ_MEASUREMENT_TYPE_FINE_CAL = 3,
} IMEZ_measurement_type_enum;

typedef enum
{
    IMEZ_ENC_RZ_SS2LOS = 0,
} IMEZ_encoder_rz_trace_signal_enum;

typedef enum
{
    IMEZ_LENSTOP_RZ_RAW_Y1 = 0,
    IMEZ_LENSTOP_RZ_RAW_Y2 = 1,
    IMEZ_LENSTOP_RZ_Y_POSITION = 2,
} IMEZ_lenstop_rz_trace_signal_enum;

typedef enum
{
    IMEZ_COARSE_CAL_SIGNAL_SET_A = 0,
    IMEZ_COARSE_CAL_SIGNAL_SET_B = 1,
    IMEZ_COARSE_CAL_SIGNAL_SET_C = 2,
} IMEZ_coarse_cal_trace_signal_enum;

typedef enum
{
    IMEZ_STEP_INITIALIZE = 1,
    IMEZ_STEP_DIFFERENCE_SENSOR_GAINS = 2,
    IMEZ_STEP_ENC_AND_LENSTOP_ROTATION = 3,
    IMEZ_STEP_COARSE_ZERO_POSITION = 4,
    IMEZ_STEP_FINE_ZERO_POSITION = 5,
    IMEZ_STEP_VALIDATE = 6,
    IMEZ_STEP_TERMINATE = 7,
} IMEZ_step_enum;

typedef enum
{
    IMEZ_COMPLETE_CAL = 0,
    IMEZ_FORCED_CAL = 1,
    IMEZ_UPDATE_BF_POS = 2,
} IMEZ_cal_type_enum;

typedef enum
{
    IMEZ_SET_A = 0,
    IMEZ_SET_B = 1,
    IMEZ_SET_C = 2,
    IMEZ_SET_NOT_DETERMINED = 3,
} IMEZ_marker_set_enum;

typedef enum
{
    IMEZ_NOT_DETERMINED = 0,
    IMEZ_OK = 1,
    IMEZ_NOK = 2,
    IMEZ_X_SHIFT_TO_LARGE = 3,
    IMEZ_THROUGHPUT_WARNING = 4,
    IMEZ_FAILED = 5,
    IMEZ_YES = 6,
    IMEZ_NO = 7,
    IMEZ_NA = 8,
} IMEZ_result_enum;

typedef enum
{
    IMEZ_SS_X = 0,
    IMEZ_SS_Y = 1,
    IMEZ_SS_RZ_X = 2,
    IMEZ_SS_RZ_Y = 3,
    IMEZ_SS_Z = 4,
    IMEZ_SS_RX = 5,
    IMEZ_SS_RY = 6,
} IMEZ_ss_axis_enum;

typedef enum
{
    IMEZ_SENSOR_X1 = 0,
    IMEZ_SENSOR_X2 = 1,
    IMEZ_SENSOR_Y1 = 2,
    IMEZ_SENSOR_Y2 = 3,
    IMEZ_SENSOR_Z1 = 4,
    IMEZ_SENSOR_Z2 = 5,
    IMEZ_SENSOR_Z3 = 6,
} IMEZ_sensor_enum;

typedef double IMEZ_axis_value_array[0x7];

typedef IMEZ_axis_value_array IMEZ_gain_matrix[0x7];

typedef IMEZ_axis_value_array IMEZ_correction_matrix[0x7];

typedef struct
{
    double min;
    double max;
} IMEZ_limits_struct;

typedef struct
{
    IMEZ_result_enum result;
    IMEZ_correction_matrix correction_matrix;
    IMEZ_limits_struct diag_elem_limits;
    IMEZ_limits_struct offdiag_elem_limits;
} IMEZ_corr_matrix_struct;

typedef struct
{
    IMEZ_gain_matrix gain_matrix_old;
    IMEZ_gain_matrix gain_matrix_new;
    IMEZ_corr_matrix_struct corr_matrix;
    bool diff_cal_done;
} IMEZ_rs_diff_sensor_mc_value_struct;

typedef struct
{
    double rz_offset;
    double rz_min;
    double rz_max;
    IMEZ_result_enum result;
} IMEZ_enc_rz_result_struct;

typedef struct
{
    double coarse_lenstop_offset;
    double max_lenstop_offset;
    double lenstop_offset;
    IMEZ_result_enum result;
    double y_coarse_offset;
} IMEZ_lenstop_rz_result_struct;

typedef struct
{
    IMEZ_result_enum succeeded;
    bool preferred_set;
    double ref_mark_pos_x;
    double ref_mark_pos_y;
    double ref_mark_pos_rz;
    double ref_mark_pos_z;
    double ref_mark_pos_rx;
    double ref_mark_pos_ry;
    double zero_position_x;
    double zero_position_y;
    double zero_position_rz;
    double pa_overscan_x1;
    IMEZ_result_enum pa_overscan_x1_result;
    double pa_overscan_y1;
    IMEZ_result_enum pa_overscan_y1_result;
    double pa_overscan_y2;
    IMEZ_result_enum pa_overscan_y2_result;
    double pb_overscan_x1;
    IMEZ_result_enum pb_overscan_x1_result;
    double pb_overscan_y1;
    IMEZ_result_enum pb_overscan_y1_result;
    double pb_overscan_y2;
    IMEZ_result_enum pb_overscan_y2_result;
    double peak_offset_ref_x1;
    double peak_offset_ref_y1;
    double peak_offset_ref_y2;
} IMEZ_marker_coarse_zero_struct;

typedef IMEZ_marker_coarse_zero_struct IMEZ_marker_coarse_zero_struct_array[0x4];

typedef struct
{
    IMEZ_marker_coarse_zero_struct_array marker_array;
    double max_pa_overscan;
    double max_pb_overscan;
    IMEZ_result_enum result;
    IMEZ_marker_set_enum preferred_marker_set;
} IMEZ_coarse_zero_struct;

typedef enum
{
    IMEZ_COARSE2FINE_MEASURED = 0,
    IMEZ_COARSE2FINE_WARNING = 1,
    IMEZ_COARSE2FINE_ERROR = 2,
} IMEZ_coarse2fine_enum;

typedef xyavect IMEZ_coarse2fine_offset_array[0x3];

typedef struct
{
    zrxryvect ver_vect;
    IMEZ_coarse2fine_offset_array offset_array;
    IMEZ_result_enum result;
} IMEZ_fine_zero_prefered_set_struct;

typedef enum
{
    IMEZ_MEAN = 0,
    IMEZ_MIN = 1,
    IMEZ_MAX = 2,
    IMEZ_STD = 3,
    IMEZ_PEAK = 4,
    IMEZ_PEAK_LIMIT = 5,
} IMEZ_average_value_enum;

typedef xyavect IMEZ_average_offset_value_array[0x6];

typedef struct
{
    IMEZ_average_offset_value_array average_offset_array;
    double max_x_shift;
    IMEZ_result_enum result_average_offset;
    IMEZ_coarse2fine_offset_array offset_array;
    IMEZ_result_enum result;
} IMEZ_fine_tune_zero_pos_struct;

typedef enum
{
    IMEZ_PA_OVERSCAN_X1 = 0,
    IMEZ_PA_OVERSCAN_Y1 = 1,
    IMEZ_PA_OVERSCAN_Y2 = 2,
    IMEZ_PB_OVERSCAN_X1 = 3,
    IMEZ_PB_OVERSCAN_Y1 = 4,
    IMEZ_PB_OVERSCAN_Y2 = 5,
    IMEZ_PEAK_OFFSET_REF_X1 = 6,
    IMEZ_PEAK_OFFSET_REF_Y1 = 7,
    IMEZ_PEAK_OFFSET_REF_Y2 = 8,
} IMEZ_fine_tune_marker_parms_enum;

typedef struct
{
    double pa_overscan_x1;
    double pa_overscan_y1;
    double pa_overscan_y2;
    double pb_overscan_x1;
    double pb_overscan_y1;
    double pb_overscan_y2;
    double peak_offset_ref_x1;
    double peak_offset_ref_y1;
    double peak_offset_ref_y2;
} IMEZ_fine_tune_marker_parms_struct;

typedef IMEZ_fine_tune_marker_parms_struct IMEZ_average_pa_pb_value_array[0x6];

typedef struct
{
    IMEZ_average_pa_pb_value_array pa_pb_array;
    IMEZ_result_enum result;
} IMEZ_fine_tune_marker_parms_result_struct;

typedef struct
{
    IMEZ_fine_zero_prefered_set_struct pref_set;
    IMEZ_fine_tune_zero_pos_struct pos;
    IMEZ_fine_tune_marker_parms_result_struct parms;
    IMEZ_result_enum result;
} IMEZ_fine_zero_struct;

typedef struct
{
    double encoder_rz_offset;
    double lens_top_offset;
    IMEZ_marker_set_enum marker_set;
    double ref_mark_pos_x_a;
    double ref_mark_pos_y_a;
    double ref_mark_pos_rz_a;
    double ref_mark_pos_z_a;
    double ref_mark_pos_rx_a;
    double ref_mark_pos_ry_a;
    double ref_mark_pos_x_b;
    double ref_mark_pos_y_b;
    double ref_mark_pos_rz_b;
    double ref_mark_pos_z_b;
    double ref_mark_pos_rx_b;
    double ref_mark_pos_ry_b;
    double ref_mark_pos_x_c;
    double ref_mark_pos_y_c;
    double ref_mark_pos_rz_c;
    double ref_mark_pos_z_c;
    double ref_mark_pos_rx_c;
    double ref_mark_pos_ry_c;
    double bf_repro_init_x;
    double bf_repro_init_y;
    double bf_repro_init_rz;
    double bf_repro_debug_x;
    double bf_repro_debug_y;
    double bf_repro_debug_rz;
    double bf_repro_x;
    double bf_repro_y;
    double bf_repro_rz;
    bool zero_cal_done;
} IMEZ_rs_mc_value_struct;

typedef struct
{
    double zero_position_x;
    double zero_position_y;
    double zero_position_rz;
    double pa_overscan_x1;
    double pa_overscan_y1;
    double pa_overscan_y2;
    double pb_overscan_x1;
    double pb_overscan_y1;
    double pb_overscan_y2;
    double peak_offset_ref_x1;
    double peak_offset_ref_y1;
    double peak_offset_ref_y2;
} IMEZ_mi_mc_value_struct;

typedef enum
{
    IMEZ_OLD = 0,
    IMEZ_NEW = 1,
} IMEZ_old_new_enum;

typedef IMEZ_mi_mc_value_struct IMEZ_mi_mc_value_struct_array[0x2];

typedef IMEZ_rs_mc_value_struct IMEZ_rs_mc_value_struct_array[0x2];

typedef double IMEZ_rs_mcs_struct_ss2los_rs_matrix[0x7][0x7];

typedef struct
{
    RQRPxMCxRMZ_refmark_zeroing_struct refmark_zeroing;
    IMEZ_rs_mcs_struct_ss2los_rs_matrix ss2los_rs_matrix;
    bool zero_sensor_calibration_done;
    bool diff_sensor_gain_matrix_calibration_done;
} IMEZ_rs_mcs_struct;

typedef struct
{
    xyavect zero_position;
    MIRSXTxZR_enc_parameters_struct zero_parms;
} IMEZ_mi_mcs_struct;

typedef struct
{
    AMXAxSTAB_performance_struct am_perf;
    IMEZ_result_enum result;
} IMEZ_measurement_quality_struct;

typedef struct
{
    bool zero_pos_calibrated;
    TMXA_phase tm_phase;
    bool am_started;
    AMEXXT_STABILITY_DETAIL_ID_TYPE am_id;
    AMEXXT_STABILITY_DETAIL_TYPE am_stability;
} IMEZ_interm_result_struct;

typedef struct
{
    IMEZ_cal_type_enum cal_type;
    IMEZ_marker_set_enum forced_marker_set;
} IMEZ_input_struct;

typedef struct
{
    IMEZ_rs_mc_value_struct_array rs_mcs;
    IMEZ_mi_mc_value_struct_array mi_mcs;
    IMEZ_rs_diff_sensor_mc_value_struct rs_diff_mcs;
    IMEZ_measurement_quality_struct quality;
    IMEZ_enc_rz_result_struct enc_rz;
    IMEZ_lenstop_rz_result_struct lenstop_rz;
    IMEZ_coarse_zero_struct coarse_zero;
    IMEZ_fine_zero_struct fine_zero;
    IMEZ_result_enum init_result;
} IMEZ_result_struct;

typedef struct
{
    bool ready;
    xyavect coarse_to_fine_offset;
    MIRSXTxZR_reference_mark_status_struct x1_status;
    MIRSXTxZR_reference_mark_status_struct y1_status;
    MIRSXTxZR_reference_mark_status_struct y2_status;
} IMEZ_coarse_cal_result_struct;

typedef char IMEZ_log_str[0x34];



#endif // _IMEZ_TC_H_
