/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : SF
* 模块名称 : SFXA
* 文件名称 : SFXA_tc.h
* 概要描述 :
*	SF组件SFXA数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _SFXA_TC_H_
#define _SFXA_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <GLXAxLOG_tc.h> 
#include <SBXA.h> 
#include <SMXA.h> 
#include <MDXA_tc.h> 
#include <base.h> 
#include <DTXA.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    SFXA_DIRECTION_X = 0,
    SFXA_DIRECTION_Y = 1,
} SFXA_direction_enum;

typedef enum
{
    SFXA_COLOR_RED = 0,
    SFXA_COLOR_GREEN = 1,
    SFXA_COLOR_NIR = 2,
    SFXA_COLOR_FIR = 3,
} SFXA_color_enum;

typedef enum
{
    SFXA_ORDER_01 = 0,
    SFXA_ORDER_02 = 1,
    SFXA_ORDER_03 = 2,
    SFXA_ORDER_04 = 3,
    SFXA_ORDER_05 = 4,
    SFXA_ORDER_06 = 5,
    SFXA_ORDER_07 = 6,
} SFXA_order_enum;

typedef enum
{
    SFXA_PERIOD_FIT_TYPE_SINE = 0,
    SFXA_PERIOD_FIT_TYPE_NL_1 = 1,
    SFXA_PERIOD_FIT_TYPE_NL_2 = 2,
} SFXA_period_fit_type_enum;

typedef enum
{
    SFXA_TEMPLATE_FIT_TYPE_SMFT1 = 0,
    SFXA_TEMPLATE_FIT_TYPE_SMCT1 = 1,
} SFXA_template_fit_type_enum;

typedef enum
{
    SFXA_ZIGZAG_FIT_TYPE_SINGLE_SCAN_X_OR_Y = 0,
} SFXA_zigzag_fit_type_enum;

typedef enum
{
    SFXA_DUAL_PERIODIC_FIT_DP1 = 0,
} SFXA_dual_periodic_fit_type_enum;

typedef enum
{
    SFXA_FIT_STATUS_OK = 0,
    SFXA_FIT_STATUS_NO_DATA = 1,
    SFXA_FIT_STATUS_NON_ORTHOGONAL_DATA = 2,
    SFXA_FIT_STATUS_MCC_FAILED = 3,
    SFXA_FIT_STATUS_ZERO_SIGNAL = 4,
    SFXA_FIT_STATUS_NO_CONVERGENCE = 5,
    SFXA_FIT_STATUS_PERIODIC_HALF_ORDER_FAILED = 6,
    SFXA_FIT_STATUS_PERIODIC_ORDER_ALIASING = 7,
    SFXA_FIT_STATUS_LUP_FAILED = 8,
    SFXA_FIT_STATUS_TEMPLATE_NO_PEAKS = 9,
    SFXA_FIT_STATUS_TEMPLATE_MULTIPLE_PEAKS = 10,
    SFXA_FIT_STATUS_TEMPLATE_NO_AGC_LOCK = 11,
    SFXA_FIT_STATUS_ZIGZAG_HOF_FAILED = 12,
    SFXA_FIT_STATUS_ZIGZAG_MOF_NO_COVARIANCE_MATRIX = 13,
    SFXA_FIT_STATUS_ZIGZAG_MOF_REMOVED_BY_MCC_THRESHOLD = 14,
    SFXA_FIT_STATUS_ZIGZAG_MOF_REMOVED_BY_WQ_THRESHOLD = 15,
    SFXA_FIT_STATUS_ZIGZAG_MOF_REMOVED_BY_BEST_FIT_SELECTION = 16,
    SFXA_FIT_STATUS_ZIGZAG_ALL_MOF_FAILED = 17,
    SFXA_FIT_STATUS_SGR_FAILED = 18,
    SFXA_FIT_STATUS_POSITION_FILTER_FAILED = 19,
    SFXA_FIT_STATUS_POSITION_INTERPOLATION_FAILED = 20,
    SFXA_FIT_STATUS_LNN_FAILED = 21,
    SFXA_FIT_STATUS_HILBERT_FAILED = 22,
    SFXA_FIT_STATUS_HILBERT_NO_CANDIDATES = 23,
    SFXA_FIT_STATUS_ARA_POSITION_FILTER_FAILED = 24,
    SFXA_FIT_STATUS_HOEZO_FAILED = 25,
    SFXA_FIT_STATUS_FFT_FAILED = 26,
    SFXA_FIT_STATUS_BGRM_FAILED = 27,
    SFXA_FIT_STATUS_FFTSINE_FAILED = 28,
} SFXA_fit_status_enum;

typedef enum
{
    SFXA_PEAK_STATUS_OK = 0,
    SFXA_PEAK_STATUS_ENV_SCALING_REJECT = 1,
    SFXA_PEAK_STATUS_PEAK_SCALING_REJECT = 2,
    SFXA_PEAK_STATUS_PARABOLIC_CURV_REJECT = 3,
    SFXA_PEAK_STATUS_PARABOLIC_FIT_MCC_REJECT = 4,
    SFXA_PEAK_STATUS_NEG_WQ_REJECT = 5,
    SFXA_PEAK_STATUS_MCC_PROFILE_THRESHOLD_REJECT = 6,
} SFXA_peak_status_enum;

typedef enum
{
    SFXA_ST_DRIVER_TERMINATED = 0,
    SFXA_ST_EMPTY = 1,
    SFXA_ST_PARTLY_FULL = 2,
    SFXA_ST_FULL = 3,
    SFXA_ST_SS_EMPTY = 4,
    SFXA_ST_SS_FULL = 5,
} SFXA_status_enum;

typedef enum
{
    SFXA_SCAN_PERIOD_FIT = 0,
    SFXA_SCAN_TEMPLATE_FIT = 1,
    SFXA_SCAN_ZIG_ZAG_FIT = 2,
    SFXA_SCAN_AGC_LOCK = 3,
    SFXA_SCAN_CLOSE_LBS = 4,
    SFXA_SCAN_SST = 5,
    SFXA_SCAN_OBLIQUE_FIT = 6,
    SFXA_SCAN_DUAL_PERIODIC_FIT = 7,
    SFXA_SCAN_LINEAR = 8,
} SFXA_scan_type_enum;

typedef enum
{
    SFXA_SSA_CLOSE_LBS = 0,
} SFXA_ssa_enum;

typedef enum
{
    SFXA_AGC_MODE_LOCK_BEFORE_SCAN = 0,
    SFXA_AGC_MODE_LOCK_AFTER_SCAN = 1,
    SFXA_AGC_MODE_NO_CHANGE = 2,
} SFXA_AGC_mode_enum;

typedef enum
{
    SFXA_ACTION_TYPE_SCAN = 0,
    SFXA_ACTION_TYPE_SSA = 1,
} SFXA_action_type_enum;

typedef enum
{
    SFXA_PEAK_REJECT_NONE = 0,
    SFXA_PEAK_REJECT_STATIC = 1,
    SFXA_PEAK_REJECT_DYNAMIC = 2,
} SFXA_PEAK_REJECT_REASON_ENUM;

typedef enum
{
    SFXA_ZC_STATUS_OK = 0,
    SFXA_ZC_MCC_CALC_FAILED = 1,
    SFXA_ZC_REJECTED_BY_MCC_THRESHOLD = 2,
    SFXA_ZC_REJECTED_BY_BEST_WQ_SELECTION = 3,
    SFXA_ZC_REJECTED_BY_FINGERPRINT = 4,
    SFXA_ZC_REJECTED_BY_RELATIVE_WQ = 5,
} SFXA_ZC_STATUS_ENUM;

typedef struct
{
    int log_id;
    int phy_id;
} SFXA_SCAN_ID_STRUCT;

typedef bool SFXA_fit_common_input_struct_recipe_used_colors[0x4];

typedef struct
{
    DTXA_variant_id_string variant_id;
    SFXA_SCAN_ID_STRUCT scan_id;
    double scan_time;
    int trigger_pitch;
    int nr_of_samples;
    int oversample_factor;
    double expected_sample_distance;
    SFXA_AGC_mode_enum AGC_mode;
    double AGC_mode_lock_before_scan_time;
    SFXA_fit_common_input_struct_recipe_used_colors recipe_used_colors;
} SFXA_fit_common_input_struct;

typedef bool SFXA_color_struct_order_array[0x7];

typedef struct
{
    bool enable;
    SFXA_color_struct_order_array order_array;
} SFXA_color_struct;

typedef SFXA_color_struct SFXA_period_scan_input_struct_color_array[0x4];

typedef struct
{
    SFXA_fit_common_input_struct fit_common;
    xyvect expected_pos;
    SFXA_direction_enum direction;
    SFXA_period_fit_type_enum fit_type;
    SFXA_period_scan_input_struct_color_array color_array;
    double base_period;
} SFXA_period_scan_input_struct;

typedef char SFXA_template_threshold_id_string[0x50];

typedef struct
{
    bool enable;
    double wq_nf;
} SFXA_template_color_struct;

typedef SFXA_template_color_struct SFXA_template_scan_input_struct_color_array[0x4];

typedef char SFXA_template_scan_input_struct_mark_type[0x8];

typedef struct
{
    SFXA_fit_common_input_struct fit_common;
    xyvect expected_pos;
    SFXA_direction_enum direction;
    SFXA_template_fit_type_enum fit_name;
    SFXA_template_scan_input_struct_color_array color_array;
    SFXA_template_scan_input_struct_mark_type mark_type;
    MDXA_alignment_step_enum alignment_step;
    SFXA_template_threshold_id_string threshold_name;
} SFXA_template_scan_input_struct;

typedef char SFXA_zigzag_threshold_id_string[0x50];

typedef struct
{
    bool enable;
    double exp_WQ_raw;
    double exp_shift;
} SFXA_zigzag_order_struct;

typedef SFXA_zigzag_order_struct SFXA_zigzag_color_struct_order_array[0x7];

typedef struct
{
    bool enable;
    SFXA_zigzag_color_struct_order_array order_array;
    double wq_nf;
} SFXA_zigzag_color_struct;

typedef SFXA_zigzag_color_struct SFXA_zigzag_scan_input_struct_color_array[0x4];

typedef struct
{
    SFXA_fit_common_input_struct fit_common;
    xyvect expected_pos;
    SFXA_direction_enum direction;
    SFXA_zigzag_fit_type_enum zz_fit_type;
    SFXA_zigzag_scan_input_struct_color_array color_array;
    double base_period;
    SFXA_zigzag_threshold_id_string threshold_name;
} SFXA_zigzag_scan_input_struct;

typedef struct
{
    SFXA_SCAN_ID_STRUCT scan_id;
    double base_period;
    int start_sample_index;
    int sample_section_length;
    double angle;
} SFXA_sub_segment_data_input_struct;

typedef SFXA_color_struct SFXA_oblique_scan_input_struct_color_array[0x4];

typedef SFXA_sub_segment_data_input_struct SFXA_oblique_scan_input_struct_sub_seg_array[0x2];

typedef struct
{
    SFXA_fit_common_input_struct fit_common;
    xyvect expected_pos;
    SFXA_direction_enum direction;
    SFXA_period_fit_type_enum fit_type;
    SFXA_oblique_scan_input_struct_color_array color_array;
    double mark_rotation_angle;
    SFXA_oblique_scan_input_struct_sub_seg_array sub_seg_array;
} SFXA_oblique_scan_input_struct;

typedef struct
{
    SFXA_order_enum order;
    double shift;
} SFXA_dual_periodic_order_struct;

typedef struct
{
    bool enabled;
    double MCC_threshold;
    SFXA_dual_periodic_order_struct inner_order;
    SFXA_dual_periodic_order_struct outer_order;
} SFXA_dual_periodic_color_struct;

typedef SFXA_dual_periodic_color_struct SFXA_dual_periodic_scan_input_struct_color_array[0x4];

typedef struct
{
    SFXA_fit_common_input_struct fit_common;
    xyvect expected_pos;
    SFXA_direction_enum direction;
    SFXA_dual_periodic_fit_type_enum fit_type;
    SFXA_dual_periodic_scan_input_struct_color_array color_array;
    double base_period;
    double order2order_threshold;
    double hilbert_bandwidth;
} SFXA_dual_periodic_scan_input_struct;

typedef bool SFXA_AGC_lock_scan_input_struct_color_array[0x4];

typedef struct
{
    SFXA_fit_common_input_struct fit_common;
    SFXA_AGC_lock_scan_input_struct_color_array color_array;
    SFXA_scan_type_enum following_scan_type;
} SFXA_AGC_lock_scan_input_struct;

typedef struct
{
    int dummy;
} SFXA_close_LBS_scan_input_struct;

typedef struct
{
    SFXA_fit_common_input_struct fit_common;
} SFXA_sst_input_struct;

typedef struct
{
    SFXA_fit_common_input_struct fit_common;
} SFXA_linear_scan_input_struct;

typedef struct
{
    SFXA_scan_type_enum element;
    int filler0;
    union
    {
        SFXA_period_scan_input_struct period_fit;
        SFXA_template_scan_input_struct template_fit;
        SFXA_zigzag_scan_input_struct zigzag_fit;
        SFXA_oblique_scan_input_struct oblique_fit;
        SFXA_AGC_lock_scan_input_struct AGC_lock;
        SFXA_close_LBS_scan_input_struct close_LBS;
        SFXA_dual_periodic_scan_input_struct dual_periodic_fit;
        SFXA_sst_input_struct sst;
        SFXA_linear_scan_input_struct linear_scan;
    } spec;
} SFXA_scan_and_fit_input_struct;

typedef struct
{
    bool enabled;
    SFXA_fit_status_enum status;
    double dc_value;
    double amplitude;
    double position;
    double MCC;
    double raw_WQ;
} SFXA_fit_order_result_struct;

typedef SFXA_fit_order_result_struct SFXA_period_fit_color_result_struct_order_array[0x7];

typedef struct
{
    bool enabled;
    SFXA_period_fit_color_result_struct_order_array order_array;
} SFXA_period_fit_color_result_struct;

typedef SFXA_period_fit_color_result_struct SFXA_period_fit_scan_result_struct_color_array[0x4];

typedef struct
{
    SFXA_direction_enum direction;
    SFXA_period_fit_scan_result_struct_color_array color_array;
} SFXA_period_fit_scan_result_struct;

typedef struct
{
    SFXA_PEAK_REJECT_REASON_ENUM reject_reason;
    double aligned_position;
    double WQ;
    double peak_curv;
    double peak_mcc;
    double mcc_parabolic_fit;
    double peak_scaling;
    double amplitude_scaling;
} SFXA_peak_data;

typedef SFXA_peak_data SFXA_peak_data_col_struct_peak_data[0xF];

typedef struct
{
    int nr_of_peaks;
    SFXA_peak_data_col_struct_peak_data peak_data;
} SFXA_peak_data_col_struct;

typedef struct
{
    bool enabled;
    SFXA_fit_status_enum status;
    double dc_value;
    double amplitude;
    double position;
    double MCC;
    double WQ;
} SFXA_template_fit_color_result_struct;

typedef SFXA_peak_data_col_struct SFXA_peak_data_struct_col_array[0x4];

typedef struct
{
    SFXA_peak_data_struct_col_array col_array;
} SFXA_peak_data_struct;

typedef SFXA_template_fit_color_result_struct SFXA_template_fit_scan_result_struct_color_array[0x4];

typedef struct
{
    SFXA_direction_enum direction;
    SFXA_template_fit_scan_result_struct_color_array color_array;
    SFXA_peak_data_struct peak_data;
} SFXA_template_fit_scan_result_struct;

typedef struct
{
    bool enabled;
    SFXA_fit_status_enum status;
    int selected_subscan_idx;
    double amplitude;
    double dc_value;
    double position;
    double MCC;
    double raw_WQ;
} SFXA_zigzag_fit_color_result_struct;

typedef SFXA_zigzag_fit_color_result_struct SFXA_zigzag_fit_scan_result_struct_color_array[0x4];

typedef struct
{
    SFXA_direction_enum direction;
    SFXA_zigzag_fit_scan_result_struct_color_array color_array;
} SFXA_zigzag_fit_scan_result_struct;

typedef SFXA_period_fit_scan_result_struct SFXA_oblique_fit_scan_result_struct_sub_seg_array[0x2];

typedef struct
{
    SFXA_oblique_fit_scan_result_struct_sub_seg_array sub_seg_array;
} SFXA_oblique_fit_scan_result_struct;

typedef struct
{
    SFXA_order_enum order;
    double position;
    double raw_WQ;
} SFXA_dual_periodic_zc_order_diag_struct;

typedef struct
{
    SFXA_ZC_STATUS_ENUM status;
    double MCC;
    double raw_WQ_combi;
    double relative_WQ;
    double order2order_distance;
    SFXA_dual_periodic_zc_order_diag_struct inner_order;
    SFXA_dual_periodic_zc_order_diag_struct outer_order;
} SFXA_dual_periodic_zc_list_diag_struct;

typedef SFXA_dual_periodic_zc_list_diag_struct SFXA_dual_periodic_zc_color_diag_struct_zero_crossing_list[0xA];

typedef struct
{
    bool enabled;
    int nr_of_zero_crossings;
    double rel_WQ_min;
    double rel_WQ_max;
    double used_MCC_threshold;
    double used_o2o_threshold;
    SFXA_dual_periodic_zc_color_diag_struct_zero_crossing_list zero_crossing_list;
} SFXA_dual_periodic_zc_color_diag_struct;

typedef struct
{
    SFXA_order_enum order;
    SFXA_fit_status_enum status;
    double position;
    double MCC;
    double raw_WQ;
} SFXA_dual_periodic_order_result_struct;

typedef struct
{
    bool enabled;
    double raw_WQ_combi;
    SFXA_dual_periodic_order_result_struct inner_order;
    SFXA_dual_periodic_order_result_struct outer_order;
} SFXA_dual_periodic_color_result_struct;

typedef SFXA_dual_periodic_color_result_struct SFXA_dual_periodic_fit_scan_result_struct_color_array[0x4];

typedef SFXA_dual_periodic_zc_color_diag_struct SFXA_dual_periodic_fit_scan_result_struct_zc_color_array[0x4];

typedef struct
{
    SFXA_direction_enum direction;
    SFXA_dual_periodic_fit_scan_result_struct_color_array color_array;
    SFXA_dual_periodic_fit_scan_result_struct_zc_color_array zc_color_array;
} SFXA_dual_periodic_fit_scan_result_struct;

typedef struct
{
    int result;
    bool use_lbs;
} SFXA_close_lbs_scan_result_struct;

typedef struct
{
    int result;
    int nr_of_samples;
    double scan_time;
} SFXA_static_fit_result_struct;

typedef struct
{
    int result;
} SFXA_linear_scan_result_struct;

typedef struct
{
    SFXA_scan_type_enum element;
    int filler0;
    union
    {
        SFXA_period_fit_scan_result_struct period_fit;
        SFXA_template_fit_scan_result_struct template_fit;
        SFXA_zigzag_fit_scan_result_struct zigzag_fit;
        SFXA_oblique_fit_scan_result_struct oblique_fit;
        SFXA_close_lbs_scan_result_struct close_lbs;
        int dummy_agc_lock;
        SFXA_dual_periodic_fit_scan_result_struct dual_periodic_fit;
        SFXA_static_fit_result_struct sst_fit;
        SFXA_linear_scan_result_struct linear_scan;
    } spec;
} SFXA_scan_result_struct;

typedef struct
{
    int dummy;
} SFXA_ssa_close_lbs_param_struct;

typedef struct
{
    SFXA_ssa_enum element;
    int filler0;
    union
    {
        SFXA_ssa_close_lbs_param_struct close_LBS;
    } spec;
} SFXA_ssa_input_struct;

typedef struct
{
    int result;
    bool use_lbs;
} SFXA_ssa_close_lbs_result_struct;

typedef struct
{
    SFXA_ssa_enum element;
    int filler0;
    union
    {
        SFXA_ssa_close_lbs_result_struct close_LBS;
    } spec;
} SFXA_ssa_result_struct;

typedef struct
{
    SMXA_driverState driver_state;
    SBXA_queue_state_enum queue_state;
} SFXA_generic_cc_properties;

typedef struct
{
    SFXA_action_type_enum element;
    int filler0;
    union
    {
        SFXA_scan_and_fit_input_struct scan_inpt;
        SFXA_ssa_input_struct ssa_inpt;
    } spec;
} SFXA_action_inpt_struct;

typedef struct
{
    SFXA_action_type_enum element;
    int filler0;
    union
    {
        SFXA_scan_result_struct scan_res;
        SFXA_ssa_result_struct ssa_res;
    } spec;
} SFXA_action_result_struct;

typedef struct
{
    int action_id;
    bool concatenated;
    double prep_time;
    double scan_time;
    SBXA_sync_state_enum start_sync_state;
    SBXA_sync_state_enum scan_sync_state;
    SFXA_action_inpt_struct action_input;
    SFXA_action_result_struct action_result;
    bool empty;
} SFXA_scan_queue_record;

typedef SFXA_scan_queue_record SFXA_scan_queue_struct_queue[0x10];

typedef struct
{
    SFXA_scan_queue_struct_queue queue;
} SFXA_scan_queue_struct;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int SFXA_set_context(const GLXAxLOG_context_list *context_p);
int SFXA_log_raw_data(void);



#endif // _SFXA_TC_H_
