/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : ASXA
* 文件名称 : ASXA_tc.h
* 概要描述 :
*	AS组件ASXA数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ASXA_TC_H_
#define _ASXA_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <GLXAxLOG_tc.h> 
#include <WPxCHUCK_tc.h> 
#include <base.h> 
#include <DTXA.h> 
#include <MDXA_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    ASXA_ORDER_1 = 0,
    ASXA_ORDER_2 = 1,
    ASXA_ORDER_3 = 2,
    ASXA_ORDER_4 = 3,
    ASXA_ORDER_5 = 4,
    ASXA_ORDER_6 = 5,
    ASXA_ORDER_7 = 6,
} ASXA_ORDER_ENUM;

typedef enum
{
    ASXA_COLOR_RED = 0,
    ASXA_COLOR_GREEN = 1,
    ASXA_COLOR_NIR = 2,
    ASXA_COLOR_FIR = 3,
} ASXA_COLOR_ENUM;

typedef enum
{
    ASXA_SEGMENT_A = 0,
    ASXA_SEGMENT_B = 1,
    ASXA_SEGMENT_C = 2,
    ASXA_SEGMENT_D = 3,
} ASXA_SEGMENT_ENUM;

typedef enum
{
    ASXA_SUBSEGMENT_1 = 0,
    ASXA_SUBSEGMENT_2 = 1,
} ASXA_SUBSEGMENT_ENUM;

typedef enum
{
    ASXA_PERIOD_80 = 0,
    ASXA_PERIOD_88 = 1,
} ASXA_PERIOD_ENUM;

typedef enum
{
    ASXA_DIR_X = 0,
    ASXA_DIR_Y = 1,
} ASXA_DIR_ENUM;

typedef enum
{
    ASXA_FIT_SINE = 0,
    ASXA_FIT_NON_LINEAR_1 = 1,
    ASXA_FIT_NON_LINEAR_2 = 2,
    ASXA_FIT_TEMPLATE = 3,
    ASXA_FIT_TEMPLATE_W = 4,
} ASXA_FIT_TYPE_ENUM;

typedef enum
{
    ASXA_SCAN_SIGN_POSITIVE = 0,
    ASXA_SCAN_SIGN_NEGATIVE = 1,
} ASXA_SCAN_SIGN_ENUM;

typedef enum
{
    ASXA_WEIGHT_METHOD_STATIC = 0,
    ASXA_WEIGHT_METHOD_SMOOTH_COLOR_DYNAMIC = 1,
} ASXA_WEIGHT_METHOD_ENUM;

typedef enum
{
    ASXA_STATUS_OK = 0,
    ASXA_STATUS_FAILED = 1,
} ASXA_STATUS_ENUM;

typedef enum
{
    ASXA_CAPTURE_NONE = 0,
    ASXA_CAPTURE_FINE = 1,
    ASXA_CAPTURE_COARSE = 2,
} ASXA_CAPTURE_ENUM;

typedef enum
{
    ASXA_CAPTURE_REUSE_NONE = 0,
    ASXA_CAPTURE_REUSE_FINE = 1,
    ASXA_CAPTURE_REUSE_COARSE = 2,
} ASXA_CAPTURE_REUSE_ENUM;

typedef enum
{
    ASXA_CARRIER_TIS1 = 0,
    ASXA_CARRIER_TIS2 = 1,
    ASXA_CARRIER_ILIAS = 2,
    ASXA_CARRIER_WAFER = 3,
    ASXA_CARRIER_SS_SLS1 = 4,
    ASXA_CARRIER_SS_SLS2 = 5,
} ASXA_CARRIER_ENUM;

typedef enum
{
    ASXA_CHUCK_1 = 0,
    ASXA_CHUCK_2 = 1,
} ASXA_CHUCK_ENUM;

typedef enum
{
    ASXA_PEAK_REJECT_NONE = 0,
    ASXA_PEAK_REJECT_STATIC = 1,
    ASXA_PEAK_REJECT_PHYSICAL = 2,
    ASXA_PEAK_REJECT_DYNAMIC = 3,
    ASXA_PEAK_REJECT_COLOR = 4,
} ASXA_PEAK_REJECT_REASON_ENUM;

typedef enum
{
    ASXA_ZC_STATUS_OK = 0,
    ASXA_ZC_MCC_CALC_FAILED = 1,
    ASXA_ZC_REJECTED_BY_MCC_THRESHOLD = 2,
    ASXA_ZC_REJECTED_BY_BEST_WQ_SELECTION = 3,
    ASXA_ZC_REJECTED_BY_CAPT_RANGE_CHECK = 4,
    ASXA_ZC_REJECTED_BY_FINGERPRINT = 5,
    ASXA_ZC_REJECTED_BY_RELATIVE_WQ = 6,
} ASXA_ZC_STATUS_ENUM;

typedef char ASXA_recipe_descr_string[0x80];

typedef char ASXA_threshold_id_string[0x50];

typedef struct
{
    MDXA_mark_type_string mark_type;
    DTXA_variant_id_string variant_id;
    horvervect expected_pos;
    double dz_dx;
    double dz_dy;
    double mark_rotation;
    WPxCHUCK_chuck_id_enum chuck_id;
    ASXA_CARRIER_ENUM carrier_id;
    MDXA_alignment_step_enum alignment_step;
} ASXA_align_scan_base_struct;

typedef struct
{
    bool enabled;
    ASXA_STATUS_ENUM status;
    double position;
} ASXA_align_dir_result_struct;

typedef ASXA_align_dir_result_struct ASXA_align_result_base_struct_dir_array[0x2];

typedef struct
{
    ASXA_align_result_base_struct_dir_array dir_array;
} ASXA_align_result_base_struct;

typedef struct
{
    bool enabled;
    bool validation;
    double WQ_threshold;
    double MCC_threshold;
    double weight_factor;
} ASXA_periodic_recipe_ord_struct;

typedef ASXA_periodic_recipe_ord_struct ASXA_periodic_recipe_col_struct_order_array[0x7];

typedef struct
{
    bool enabled;
    ASXA_periodic_recipe_col_struct_order_array order_array;
} ASXA_periodic_recipe_col_struct;

typedef ASXA_periodic_recipe_col_struct ASXA_periodic_recipe_seg_struct_color_array[0x4];

typedef struct
{
    bool enabled;
    ASXA_periodic_recipe_seg_struct_color_array color_array;
} ASXA_periodic_recipe_seg_struct;

typedef ASXA_periodic_recipe_seg_struct ASXA_periodic_recipe_dir_struct_segment_array[0x2];

typedef struct
{
    bool enabled;
    ASXA_periodic_recipe_dir_struct_segment_array segment_array;
} ASXA_periodic_recipe_dir_struct;

typedef ASXA_periodic_recipe_dir_struct ASXA_periodic_recipe_struct_dir_array[0x2];

typedef bool ASXA_periodic_recipe_struct_GNAL_col_array[0x4];

typedef struct
{
    ASXA_recipe_descr_string recipe_description;
    bool WQ_threshold_process;
    bool MCC_threshold_process;
    bool color_dynamic_process;
    ASXA_WEIGHT_METHOD_ENUM weight_method;
    bool must_survive;
    double smoothing_factor;
    ASXA_periodic_recipe_struct_dir_array dir_array;
    ASXA_periodic_recipe_struct_GNAL_col_array GNAL_col_array;
} ASXA_periodic_recipe_struct;

typedef double ASXA_periodic_dir_scan_struct_shift_80_to_88_array[0x4];

typedef struct
{
    bool enabled;
    ASXA_CAPTURE_ENUM capture_method;
    ASXA_CAPTURE_REUSE_ENUM capture_reuse_method;
    ASXA_periodic_dir_scan_struct_shift_80_to_88_array shift_80_to_88_array;
    double delta_shift_threshold;
} ASXA_periodic_dir_scan_struct;

typedef ASXA_periodic_dir_scan_struct ASXA_periodic_scan_struct_dir_array[0x2];

typedef struct
{
    ASXA_SCAN_SIGN_ENUM scan_sign;
    ASXA_periodic_scan_struct_dir_array dir_array;
    bool rq_sbo_drift_update;
} ASXA_periodic_scan_struct;

typedef enum
{
    ASXA_CAPTURE_STATUS_OK = 0,
    ASXA_CAPTURE_STATUS_MCC_CHECK_FAILED = 1,
    ASXA_CAPTURE_STATUS_SIGNAL_CHECK_FAILED = 2,
    ASXA_CAPTURE_STATUS_REJECTED_BY_COLOR_DYNAMICS = 3,
    ASXA_CAPTURE_STATUS_FIT_FAILED = 4,
    ASXA_CAPTURE_STATUS_DELTA_SHIFT_CHECK_FAILED = 5,
} ASXA_CAPTURE_STATUS_ENUM;

typedef enum
{
    ASXA_PPOS_STATUS_OK = 0,
    ASXA_PPOS_CAPTURE_FAILED = 1,
    ASXA_PPOS_FIT_FAILED = 2,
} ASXA_PPOS_STATUS_ENUM;

typedef enum
{
    ASXA_PVAL_STATUS_OK = 0,
    ASXA_PVAL_STATUS_REJECTED_BY_POS_FAILED = 1,
    ASXA_PVAL_REJECTED_BY_WQ_THRESHOLDING = 2,
    ASXA_PVAL_REJECTED_BY_MCC_THRESHOLDING = 3,
    ASXA_PVAL_REJECTED_BY_COLOR_DYNAMIC_SELECTION = 4,
    ASXA_PVAL_REJECTED_BY_MUST_SURVIVE = 5,
} ASXA_PVAL_STATUS_ENUM;

typedef struct
{
    bool enabled;
    ASXA_PPOS_STATUS_ENUM pos_status;
    double MCC;
    double WQ;
    double position;
    bool validation;
    ASXA_PVAL_STATUS_ENUM val_status;
    double used_weight_factor;
} ASXA_periodic_recipe_ord_result_struct;

typedef ASXA_periodic_recipe_ord_result_struct ASXA_periodic_recipe_col_result_struct_order_array[0x7];

typedef struct
{
    bool enabled;
    ASXA_periodic_recipe_col_result_struct_order_array order_array;
} ASXA_periodic_recipe_col_result_struct;

typedef ASXA_periodic_recipe_col_result_struct ASXA_periodic_recipe_seg_result_struct_color_array[0x4];

typedef struct
{
    bool enabled;
    ASXA_periodic_recipe_seg_result_struct_color_array color_array;
} ASXA_periodic_recipe_seg_result_struct;

typedef ASXA_periodic_recipe_seg_result_struct ASXA_periodic_recipe_dir_result_struct_segment_array[0x2];

typedef struct
{
    bool enabled;
    ASXA_periodic_recipe_dir_result_struct_segment_array segment_array;
} ASXA_periodic_recipe_dir_result_struct;

typedef ASXA_periodic_recipe_dir_result_struct ASXA_periodic_recipe_result_struct_dir_array[0x2];

typedef struct
{
    ASXA_periodic_recipe_result_struct_dir_array dir_array;
} ASXA_periodic_recipe_result_struct;

typedef struct
{
    bool enabled;
    ASXA_CAPTURE_STATUS_ENUM status;
    double position;
    ASXA_CAPTURE_ENUM capture_method;
    ASXA_CAPTURE_REUSE_ENUM reused_capture_method;
    double delta_80_88_shift;
} ASXA_periodic_capture_result_struct;

typedef ASXA_periodic_capture_result_struct ASXA_periodic_dir_result_struct_capture_array[0x4];

typedef struct
{
    bool enabled;
    ASXA_periodic_dir_result_struct_capture_array capture_array;
} ASXA_periodic_dir_result_struct;

typedef ASXA_periodic_dir_result_struct ASXA_periodic_align_result_struct_dir_array[0x2];

typedef struct
{
    ASXA_periodic_align_result_struct_dir_array dir_array;
    bool sbo_drift_update_failed;
} ASXA_periodic_align_result_struct;

typedef struct
{
    bool enabled;
    ASXA_PPOS_STATUS_ENUM pos_status;
    double MCC;
    double WQ;
    double position;
} ASXA_periodic_diag_ord_result_struct;

typedef ASXA_periodic_diag_ord_result_struct ASXA_periodic_diag_col_result_struct_order_array[0x7];

typedef struct
{
    bool enabled;
    ASXA_periodic_diag_col_result_struct_order_array order_array;
} ASXA_periodic_diag_col_result_struct;

typedef ASXA_periodic_diag_col_result_struct ASXA_periodic_diag_seg_result_struct_color_array[0x4];

typedef struct
{
    bool enabled;
    ASXA_periodic_diag_seg_result_struct_color_array color_array;
} ASXA_periodic_diag_seg_result_struct;

typedef ASXA_periodic_diag_seg_result_struct ASXA_periodic_diag_dir_result_struct_segment_array[0x4];

typedef struct
{
    bool enabled;
    ASXA_periodic_diag_dir_result_struct_segment_array segment_array;
} ASXA_periodic_diag_dir_result_struct;

typedef ASXA_periodic_diag_dir_result_struct ASXA_periodic_diag_result_struct_dir_array[0x2];

typedef struct
{
    ASXA_periodic_diag_result_struct_dir_array dir_array;
} ASXA_periodic_diag_result_struct;

typedef struct
{
    bool enabled;
} ASXA_zigzag_recipe_col_struct;

typedef ASXA_zigzag_recipe_col_struct ASXA_zigzag_recipe_seg_struct_color_array[0x4];

typedef struct
{
    bool enabled;
    ASXA_zigzag_recipe_seg_struct_color_array color_array;
} ASXA_zigzag_recipe_seg_struct;

typedef ASXA_zigzag_recipe_seg_struct ASXA_zigzag_recipe_dir_struct_segment_array[0x2];

typedef struct
{
    bool enabled;
    ASXA_zigzag_recipe_dir_struct_segment_array segment_array;
} ASXA_zigzag_recipe_dir_struct;

typedef ASXA_zigzag_recipe_dir_struct ASXA_zigzag_recipe_struct_dir_array[0x2];

typedef bool ASXA_zigzag_recipe_struct_GNAL_col_array[0x4];

typedef struct
{
    ASXA_recipe_descr_string recipe_description;
    ASXA_zigzag_recipe_struct_dir_array dir_array;
    ASXA_threshold_id_string threshold_name;
    ASXA_zigzag_recipe_struct_GNAL_col_array GNAL_col_array;
} ASXA_zigzag_recipe_struct;

typedef double ASXA_zigzag_dir_scan_struct_shift_80_to_88_array[0x4];

typedef struct
{
    bool enabled;
    bool capture;
    ASXA_zigzag_dir_scan_struct_shift_80_to_88_array shift_80_to_88_array;
    double delta_shift_threshold;
} ASXA_zigzag_dir_scan_struct;

typedef ASXA_zigzag_dir_scan_struct ASXA_zigzag_scan_struct_dir_array[0x2];

typedef struct
{
    ASXA_zigzag_scan_struct_dir_array dir_array;
} ASXA_zigzag_scan_struct;

typedef enum
{
    ASXA_ZPOS_STATUS_OK = 0,
    ASXA_ZPOS_STATUS_NOK = 1,
} ASXA_ZPOS_STATUS_ENUM;

typedef enum
{
    ASXA_ZVAL_STATUS_OK = 0,
    ASXA_ZVAL_STATUS_REJECTED_BY_POS_FAILED = 1,
    ASXA_ZVAL_STATUS_REJECTED_BY_COLOR_DYNAMICS = 2,
    ASXA_ZVAL_STATUS_DELTA_SHIFT_CHECK_FAILED = 3,
} ASXA_ZVAL_STATUS_ENUM;

typedef struct
{
    bool enabled;
    int lateral_scan_index;
    ASXA_ZPOS_STATUS_ENUM pos_status;
    double MCC;
    double WQ;
    double position;
    bool validation;
    ASXA_ZVAL_STATUS_ENUM val_status;
} ASXA_zigzag_recipe_col_result_struct;

typedef ASXA_zigzag_recipe_col_result_struct ASXA_zigzag_recipe_seg_result_struct_color_array[0x4];

typedef struct
{
    bool enabled;
    ASXA_zigzag_recipe_seg_result_struct_color_array color_array;
} ASXA_zigzag_recipe_seg_result_struct;

typedef ASXA_zigzag_recipe_seg_result_struct ASXA_zigzag_recipe_dir_result_struct_segment_array[0x2];

typedef struct
{
    bool enabled;
    ASXA_zigzag_recipe_dir_result_struct_segment_array segment_array;
} ASXA_zigzag_recipe_dir_result_struct;

typedef ASXA_zigzag_recipe_dir_result_struct ASXA_zigzag_recipe_result_struct_dir_array[0x2];

typedef struct
{
    ASXA_zigzag_recipe_result_struct_dir_array dir_array;
} ASXA_zigzag_recipe_result_struct;

typedef struct
{
    bool enabled;
    ASXA_CAPTURE_STATUS_ENUM status;
    double position;
    bool capture;
    double delta_80_88_shift;
} ASXA_zigzag_capture_result_struct;

typedef ASXA_zigzag_capture_result_struct ASXA_zigzag_dir_result_struct_capture_array[0x4];

typedef struct
{
    bool enabled;
    ASXA_zigzag_dir_result_struct_capture_array capture_array;
} ASXA_zigzag_dir_result_struct;

typedef ASXA_zigzag_dir_result_struct ASXA_zigzag_align_result_struct_dir_array[0x2];

typedef struct
{
    ASXA_zigzag_align_result_struct_dir_array dir_array;
} ASXA_zigzag_align_result_struct;

typedef struct
{
    bool enabled;
} ASXA_template_recipe_col_struct;

typedef ASXA_template_recipe_col_struct ASXA_template_recipe_dir_struct_col_array[0x4];

typedef struct
{
    bool enabled;
    ASXA_template_recipe_dir_struct_col_array col_array;
} ASXA_template_recipe_dir_struct;

typedef ASXA_template_recipe_dir_struct ASXA_template_recipe_struct_dir_array[0x2];

typedef bool ASXA_template_recipe_struct_GNAL_col_array[0x4];

typedef struct
{
    ASXA_threshold_id_string threshold_name;
    ASXA_recipe_descr_string recipe_description;
    ASXA_template_recipe_struct_dir_array dir_array;
    ASXA_template_recipe_struct_GNAL_col_array GNAL_col_array;
} ASXA_template_recipe_struct;

typedef struct
{
    bool enabled;
} ASXA_template_dir_scan_struct;

typedef ASXA_template_dir_scan_struct ASXA_template_scan_struct_dir_array[0x2];

typedef struct
{
    ASXA_template_scan_struct_dir_array dir_array;
} ASXA_template_scan_struct;

typedef enum
{
    ASXA_TPOS_STATUS_OK = 0,
    ASXA_TPOS_STATUS_NO_PEAK_FOUND = 1,
    ASXA_TPOS_STATUS_MULTIPLE_PEAKS_FOUND = 2,
} ASXA_TPOS_STATUS_ENUM;

typedef enum
{
    ASXA_TVAL_STATUS_OK = 0,
    ASXA_TVAL_REJECTED_BY_POS_FAILED = 1,
    ASXA_TVAL_REJECTED_BY_COLOR_SELECTION = 2,
} ASXA_TVAL_STATUS_ENUM;

typedef struct
{
    ASXA_PEAK_REJECT_REASON_ENUM reject_reason;
    ASXA_COLOR_ENUM color;
    int phy_id;
    xyvect scan_offset;
    int peak_id;
    double meas_pos;
    double WQ;
    double peak_curv;
    double peak_mcc;
    double mcc_parabolic_fit;
    double peak_scaling;
    double amplitude_scaling;
} ASXA_template_peak_params_struct;

typedef struct
{
    int len;
    int max_len;
    ASXA_template_peak_params_struct* array;
} ASXA_template_dir_peak_params_array;

typedef ASXA_template_dir_peak_params_array ASXA_template_peak_params_array_dir_array[0x2];

typedef struct
{
    ASXA_template_peak_params_array_dir_array dir_array;
} ASXA_template_peak_params_array;

typedef struct
{
    bool enabled;
    ASXA_TPOS_STATUS_ENUM pos_status;
    double MCC;
    double WQ;
    double position;
    bool validation;
    ASXA_TVAL_STATUS_ENUM val_status;
    double used_weight_factor;
} ASXA_template_recipe_col_result_struct;

typedef ASXA_template_recipe_col_result_struct ASXA_template_recipe_dir_result_struct_col_array[0x4];

typedef struct
{
    bool enabled;
    ASXA_template_recipe_dir_result_struct_col_array col_array;
} ASXA_template_recipe_dir_result_struct;

typedef ASXA_template_recipe_dir_result_struct ASXA_template_recipe_result_struct_dir_array[0x2];

typedef struct
{
    ASXA_template_recipe_result_struct_dir_array dir_array;
} ASXA_template_recipe_result_struct;

typedef struct
{
    bool enabled;
    bool validation;
    double WQ_threshold;
    double MCC_threshold;
    double weight_factor;
} ASXA_multi_per_recipe_ord_struct;

typedef struct
{
    bool enabled;
    ASXA_periodic_recipe_col_struct_order_array order_array;
} ASXA_multi_per_recipe_col_struct;

typedef struct
{
    bool enabled;
    ASXA_periodic_recipe_seg_struct_color_array color_array;
} ASXA_multi_per_recipe_per_struct;

typedef struct
{
    bool enabled;
    ASXA_periodic_recipe_dir_struct_segment_array segment_array;
} ASXA_multi_per_recipe_dir_struct;

typedef struct
{
    ASXA_recipe_descr_string recipe_description;
    bool WQ_threshold_process;
    bool MCC_threshold_process;
    bool color_dynamic_process;
    ASXA_WEIGHT_METHOD_ENUM weight_method;
    bool must_survive;
    double smoothing_factor;
    ASXA_periodic_recipe_struct_dir_array dir_array;
    ASXA_periodic_recipe_struct_GNAL_col_array GNAL_col_array;
} ASXA_multi_per_recipe_struct;

typedef struct
{
    bool enabled;
    ASXA_CAPTURE_ENUM capture_method;
    ASXA_CAPTURE_REUSE_ENUM capture_reuse_method;
    ASXA_periodic_dir_scan_struct_shift_80_to_88_array shift_80_to_88_array;
    double delta_shift_threshold;
} ASXA_multi_per_scan_dir_struct;

typedef struct
{
    ASXA_SCAN_SIGN_ENUM scan_sign;
    ASXA_periodic_scan_struct_dir_array dir_array;
    bool rq_sbo_drift_update;
} ASXA_multi_per_scan_struct;

typedef struct
{
    bool enabled;
    ASXA_PPOS_STATUS_ENUM pos_status;
    double MCC;
    double WQ;
    double position;
    bool validation;
    ASXA_PVAL_STATUS_ENUM val_status;
    double used_weight_factor;
} ASXA_multi_per_recipe_ord_result_struct;

typedef struct
{
    bool enabled;
    ASXA_periodic_recipe_col_result_struct_order_array order_array;
} ASXA_multi_per_recipe_col_result_struct;

typedef struct
{
    bool enabled;
    ASXA_periodic_recipe_seg_result_struct_color_array color_array;
} ASXA_multi_per_recipe_period_result_struct;

typedef struct
{
    bool enabled;
    ASXA_periodic_recipe_dir_result_struct_segment_array segment_array;
} ASXA_multi_per_recipe_dir_result_struct;

typedef struct
{
    ASXA_periodic_recipe_result_struct_dir_array dir_array;
} ASXA_multi_per_recipe_result_struct;

typedef struct
{
    ASXA_periodic_align_result_struct periodic_align_result;
} ASXA_multi_per_align_result_struct;

typedef ASXA_multi_per_recipe_result_struct ASXA_multi_per_recipe_result_array_struct_multi_per_recipe_result_array[0x14];

typedef int ASXA_multi_per_recipe_result_array_struct_lateral_scan_index[0x2];

typedef double ASXA_multi_per_recipe_result_array_struct_lateral_scan_offset[0x2];

typedef struct
{
    int nr_of_scans;
    ASXA_multi_per_recipe_result_array_struct_multi_per_recipe_result_array multi_per_recipe_result_array;
    ASXA_multi_per_recipe_result_array_struct_lateral_scan_index lateral_scan_index;
    ASXA_multi_per_recipe_result_array_struct_lateral_scan_offset lateral_scan_offset;
} ASXA_multi_per_recipe_result_array_struct;

typedef struct
{
    ASXA_SCAN_SIGN_ENUM scan_sign;
    ASXA_CAPTURE_ENUM capture_method;
} ASXA_oblique_scan_struct;

typedef struct
{
    bool enabled;
    bool validation;
    double WQ_threshold;
    double MCC_threshold;
    double weight_factor;
} ASXA_oblique_recipe_ord_struct;

typedef struct
{
    bool enabled;
    ASXA_periodic_recipe_col_struct_order_array order_array;
} ASXA_oblique_recipe_col_struct;

typedef struct
{
    bool enabled;
    ASXA_periodic_recipe_seg_struct_color_array color_array;
} ASXA_oblique_recipe_per_struct;

typedef struct
{
    bool enabled;
    ASXA_periodic_recipe_dir_struct_segment_array segment_array;
} ASXA_oblique_recipe_dir_struct;

typedef struct
{
    ASXA_recipe_descr_string recipe_description;
    bool WQ_threshold_process;
    bool MCC_threshold_process;
    bool color_dynamic_process;
    ASXA_WEIGHT_METHOD_ENUM weight_method;
    bool must_survive;
    double smoothing_factor;
    ASXA_periodic_recipe_struct_dir_array dir_array;
    ASXA_periodic_recipe_struct_GNAL_col_array GNAL_col_array;
} ASXA_oblique_recipe_struct;

typedef struct
{
    bool enabled;
    ASXA_PPOS_STATUS_ENUM pos_status;
    double MCC;
    double WQ;
    double position;
    bool validation;
    ASXA_PVAL_STATUS_ENUM val_status;
    double used_weight_factor;
} ASXA_oblique_recipe_ord_result_struct;

typedef struct
{
    bool enabled;
    ASXA_periodic_recipe_col_result_struct_order_array order_array;
} ASXA_oblique_recipe_col_result_struct;

typedef struct
{
    bool enabled;
    ASXA_periodic_recipe_seg_result_struct_color_array color_array;
} ASXA_oblique_recipe_seg_result_struct;

typedef struct
{
    bool enabled;
    ASXA_periodic_recipe_dir_result_struct_segment_array segment_array;
} ASXA_oblique_recipe_dir_result_struct;

typedef struct
{
    ASXA_periodic_recipe_result_struct_dir_array dir_array;
} ASXA_oblique_recipe_result_struct;

typedef struct
{
    bool enabled;
    ASXA_CAPTURE_STATUS_ENUM status;
    double position;
    ASXA_CAPTURE_ENUM capture_method;
} ASXA_oblique_capture_result_struct;

typedef ASXA_oblique_capture_result_struct ASXA_oblique_dir_result_struct_capture_array[0x4];

typedef struct
{
    bool enabled;
    ASXA_oblique_dir_result_struct_capture_array capture_array;
} ASXA_oblique_dir_result_struct;

typedef ASXA_oblique_dir_result_struct ASXA_oblique_align_result_struct_dir_array[0x2];

typedef struct
{
    ASXA_oblique_align_result_struct_dir_array dir_array;
} ASXA_oblique_align_result_struct;

typedef struct
{
    bool enabled;
} ASXA_dual_periodic_dir_scan_struct;

typedef ASXA_dual_periodic_dir_scan_struct ASXA_dual_periodic_scan_struct_dir_array[0x2];

typedef struct
{
    ASXA_SCAN_SIGN_ENUM scan_sign;
    ASXA_dual_periodic_scan_struct_dir_array dir_array;
} ASXA_dual_periodic_scan_struct;

typedef struct
{
    ASXA_recipe_descr_string recipe_description;
    bool WQ_threshold_process;
    bool MCC_threshold_process;
    bool color_dynamic_process;
    ASXA_WEIGHT_METHOD_ENUM weight_method;
    bool must_survive;
    double smoothing_factor;
    ASXA_periodic_recipe_struct_dir_array dir_array;
    ASXA_periodic_recipe_struct_GNAL_col_array GNAL_col_array;
} ASXA_dual_periodic_recipe_struct;

typedef struct
{
    bool enabled;
} ASXA_dual_periodic_dir_result_struct;

typedef ASXA_dual_periodic_dir_result_struct ASXA_dual_periodic_align_result_struct_dir_array[0x2];

typedef struct
{
    ASXA_dual_periodic_align_result_struct_dir_array dir_array;
} ASXA_dual_periodic_align_result_struct;

typedef struct
{
    ASXA_periodic_recipe_result_struct_dir_array dir_array;
} ASXA_dual_periodic_recipe_result_struct;

typedef ASXA_periodic_recipe_col_result_struct ASXA_dual_periodic_recipe_diag_struct_color_array[0x4];

typedef struct
{
    ASXA_dual_periodic_recipe_diag_struct_color_array color_array;
} ASXA_dual_periodic_recipe_diag_struct;

typedef struct
{
    ASXA_ORDER_ENUM order;
    double pos;
    double WQ;
} ASXA_dual_periodic_zc_order_diag_struct;

typedef struct
{
    ASXA_ZC_STATUS_ENUM status;
    double MCC;
    double WQ_combi;
    double order2order_distance;
    ASXA_dual_periodic_zc_order_diag_struct inner_order;
    ASXA_dual_periodic_zc_order_diag_struct outer_order;
} ASXA_dual_periodic_zc_list_diag_struct;

typedef ASXA_dual_periodic_zc_list_diag_struct ASXA_dual_periodic_zc_color_diag_struct_zero_crossing_list[0xA];

typedef struct
{
    bool enabled;
    int nr_of_zero_crossings;
    double used_MCC_threshold;
    double used_o2o_threshold;
    ASXA_dual_periodic_zc_color_diag_struct_zero_crossing_list zero_crossing_list;
} ASXA_dual_periodic_zc_color_diag_struct;

typedef ASXA_dual_periodic_zc_color_diag_struct ASXA_dual_periodic_zc_diag_struct_color_array[0x4];

typedef struct
{
    ASXA_dual_periodic_zc_diag_struct_color_array color_array;
} ASXA_dual_periodic_zc_diag_struct;

typedef double ASXA_dual_periodic_diag_struct_lateral_scan_offset[0x5];

typedef ASXA_dual_periodic_recipe_diag_struct ASXA_dual_periodic_diag_struct_recipe_diag_array[0x5];

typedef ASXA_dual_periodic_zc_diag_struct ASXA_dual_periodic_diag_struct_zc_list_array[0x5];

typedef struct
{
    ASXA_DIR_ENUM direction;
    int nr_of_scans;
    int best_scan_index;
    ASXA_dual_periodic_diag_struct_lateral_scan_offset lateral_scan_offset;
    ASXA_dual_periodic_diag_struct_recipe_diag_array recipe_diag_array;
    ASXA_dual_periodic_diag_struct_zc_list_array zc_list_array;
} ASXA_dual_periodic_diag_struct;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int ASXA_request_align_periodic(const ASXA_align_scan_base_struct *align_scan_base_data_p,
	const ASXA_periodic_scan_struct *periodic_scan_p,
	const ASXA_periodic_recipe_struct *periodic_recipe_p,
	int *align_id);
int ASXA_get_result_align_periodic(const int *align_id,
	int *logical_action_id,
	ASXA_align_result_base_struct *align_result_base_p,
	ASXA_periodic_recipe_result_struct *periodic_recipe_result_p,
	ASXA_periodic_align_result_struct *periodic_align_result_p,
	ASXA_periodic_diag_result_struct *periodic_diag_result_p);
int ASXA_request_align_zigzag(const ASXA_align_scan_base_struct *align_data_p,
	const ASXA_zigzag_scan_struct *zigzag_scan_p,
	const ASXA_zigzag_recipe_struct *zigzag_recipe_p,
	int *align_id);
int ASXA_get_result_align_zigzag(const int *align_id,
	int *logical_action_id,
	ASXA_align_result_base_struct *align_data_p,
	ASXA_align_result_base_struct *lateral_align_data_p,
	ASXA_zigzag_align_result_struct *zigzag_align_result_p,
	ASXA_zigzag_recipe_result_struct *zigzag_recipe_result_p);
int ASXA_request_align_template(const ASXA_align_scan_base_struct *align_data_p,
	const ASXA_template_scan_struct *template_scan_p,
	const ASXA_template_recipe_struct *template_recipe_p,
	int *align_id);
int ASXA_get_result_align_template(const int *align_id,
	int *logical_action_id,
	ASXA_align_result_base_struct *align_data_p,
	ASXA_template_recipe_result_struct *template_recipe_p,
	ASXA_template_peak_params_array *template_peak_p);
int ASXA_request_align_multi_per(const ASXA_align_scan_base_struct *align_scan_base_data_p,
	const ASXA_multi_per_scan_struct *multi_per_scan_p,
	const ASXA_multi_per_recipe_struct *multi_per_recipe_p,
	int *align_id);
int ASXA_get_result_align_multi_per(const int *align_id,
	int *logical_action_id,
	ASXA_align_result_base_struct *align_result_base_p,
	ASXA_align_result_base_struct *lateral_align_result_p,
	ASXA_multi_per_recipe_result_struct *multi_per_recipe_result_p,
	ASXA_multi_per_align_result_struct *multi_per_align_result_p,
	ASXA_multi_per_recipe_result_array_struct *multi_per_recipe_result_array_p);
int ASXA_request_align_oblique(const ASXA_align_scan_base_struct *align_scan_base_data_p,
	const ASXA_oblique_scan_struct *scan_data_p,
	const ASXA_oblique_recipe_struct *recipe_data_p,
	int *align_id_p);
int ASXA_get_result_align_oblique(const int *align_id,
	int *logical_action_id_p,
	ASXA_align_result_base_struct *align_result_base_p,
	ASXA_oblique_recipe_result_struct *recipe_result_p,
	ASXA_oblique_align_result_struct *align_result_p);
int ASXA_request_align_dual_periodic(const ASXA_align_scan_base_struct *align_scan_base_data_p,
	const ASXA_dual_periodic_scan_struct *dual_per_scan_p,
	const ASXA_dual_periodic_recipe_struct *dual_per_recipe_p,
	int *align_id);
int ASXA_get_result_align_dual_periodic(const int *align_id,
	int *logical_action_id,
	ASXA_align_result_base_struct *align_result_base_p,
	ASXA_dual_periodic_recipe_result_struct *dual_per_recipe_result_p,
	ASXA_dual_periodic_align_result_struct *dual_per_align_result_p,
	ASXA_dual_periodic_diag_struct *dual_per_diag_result_p);
int ASXA_get_scan_type(const int *align_id,
	MDXA_scan_type_enum *scan_type_p);
int ASXA_set_context(const GLXAxLOG_context_list *context_p);
int ASXA_get_sbo_drift_calibration_enable(bool *isSboDriftCalibrationEnabled_p);
int ASXA_get_dual_periodic_capture_range(const MDXA_mark_type_string *mark_type,
	const MDXA_alignment_step_enum *align_step,
	double *capture_range_p);



#endif // _ASXA_TC_H_
