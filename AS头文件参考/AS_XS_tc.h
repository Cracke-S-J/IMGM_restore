/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : AS_XS
* 文件名称 : AS_XS_tc.h
* 概要描述 :
*	AS组件AS_XS数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _AS_XS_TC_H_
#define _AS_XS_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <ASDP_tc.h> 
#include <ASOB_tc.h> 
#include <ASZD_tc.h> 
#include <ASTD_tc.h> 
#include <ASPD_tc.h> 
#include <ASDT_tc.h> 
#include <SFXA_tc.h> 
#include <ASXT_tc.h> 
#include <base.h> 
#include <WPxCHUCK_tc.h> 
#include <SMXA.h> 
#include <ASXA_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    ASXA_align_scan_base_struct align_scan_base_data_p;
    ASXA_periodic_scan_struct periodic_scan_p;
    ASXA_periodic_recipe_struct periodic_recipe_p;
    SMXA_driverState xs_state;
} AS_XS_PL_asxa_align_periodic_struct;

typedef struct
{
    ASXA_align_scan_base_struct align_scan_base_data_p;
    ASXA_periodic_scan_struct periodic_scan_p;
    ASXA_periodic_recipe_struct periodic_recipe_p;
    SMXA_driverState xs_state;
} AS_XS_PL_asxaxlbs_align_periodic_no_lbs_struct;

typedef struct
{
    int logical_action_id;
    ASXA_align_result_base_struct align_result_base_p;
    ASXA_periodic_recipe_result_struct periodic_recipe_result_p;
    ASXA_periodic_align_result_struct periodic_align_result_p;
    ASXA_periodic_diag_result_struct periodic_diag_result_p;
} AS_XS_CL_asxa_align_periodic_struct;

typedef struct
{
    int logical_action_id;
    ASXA_align_result_base_struct align_result_base_p;
    ASXA_periodic_recipe_result_struct periodic_recipe_result_p;
    ASXA_periodic_align_result_struct periodic_align_result_p;
    ASXA_periodic_diag_result_struct periodic_diag_result_p;
} AS_XS_CL_asxaxlbs_align_periodic_no_lbs_struct;

typedef struct
{
    ASXA_align_scan_base_struct align_data_p;
    ASXA_template_scan_struct template_scan_p;
    ASXA_template_recipe_struct template_recipe_p;
    SMXA_driverState xs_state;
} AS_XS_PL_asxa_align_template_struct;

typedef struct
{
    int logical_action_id;
    ASXA_align_result_base_struct align_data_p;
    ASXA_template_recipe_result_struct template_recipe_p;
    ASXA_template_peak_params_array template_peak_p;
} AS_XS_CL_asxa_align_template_struct;

typedef struct
{
    ASXA_align_scan_base_struct align_data_p;
    ASXA_zigzag_scan_struct zigzag_scan_p;
    ASXA_zigzag_recipe_struct zigzag_recipe_p;
    SMXA_driverState xs_state;
} AS_XS_PL_asxa_align_zigzag_struct;

typedef struct
{
    int logical_action_id;
    ASXA_align_result_base_struct align_data_p;
    ASXA_align_result_base_struct lateral_align_data_p;
    ASXA_zigzag_recipe_result_struct recipe_result_p;
    ASXA_zigzag_align_result_struct zigzag_align_result_p;
} AS_XS_CL_asxa_align_zigzag_struct;

typedef struct
{
    ASXA_align_scan_base_struct align_scan_base_data_p;
    ASXA_multi_per_scan_struct multi_per_scan_p;
    ASXA_multi_per_recipe_struct multi_per_recipe_p;
    SMXA_driverState xs_state;
} AS_XS_PL_asxa_align_multi_per_struct;

typedef struct
{
    int logical_action_id;
    ASXA_align_result_base_struct align_result_base_p;
    ASXA_align_result_base_struct lateral_align_result_p;
    ASXA_multi_per_recipe_result_struct multi_per_recipe_result_p;
    ASXA_multi_per_align_result_struct multi_per_align_result_p;
    ASXA_multi_per_recipe_result_array_struct multi_per_recipe_result_array_p;
} AS_XS_CL_asxa_align_multi_per_struct;

typedef struct
{
    ASXA_align_scan_base_struct align_scan_base_data_p;
    ASXA_periodic_scan_struct periodic_scan_p;
    ASXA_periodic_recipe_struct periodic_recipe_p;
    SMXA_driverState xs_state;
} AS_XS_PL_asxaxfp_align_periodic_struct;

typedef struct
{
    int logical_action_id;
    ASXA_align_result_base_struct align_result_base_p;
    ASXA_periodic_recipe_result_struct periodic_recipe_result_p;
    ASXA_periodic_align_result_struct periodic_align_result_p;
} AS_XS_CL_asxaxfp_align_periodic_struct;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    horvervect WS_scan_pos;
    double meas_duration;
    double z_range;
} AS_XS_PL_asxaxsst_static_scan_struct;

typedef struct
{
    int logical_action_id;
    int nr_samples;
    double real_scan_time;
} AS_XS_CL_asxaxsst_static_scan_struct;

typedef struct
{
    ASXA_align_scan_base_struct align_base;
    ASXA_oblique_scan_struct oblique_scan;
    ASXA_oblique_recipe_struct oblique_recipe;
} AS_XS_PL_asxa_align_oblique_struct;

typedef struct
{
    ASXA_align_scan_base_struct align_base;
    ASXA_oblique_scan_struct oblique_scan;
    ASXA_oblique_recipe_struct oblique_recipe;
} AS_XS_PL_asxt_align_oblique_struct;

typedef struct
{
    ASXA_align_scan_base_struct align_base;
    ASXA_oblique_scan_struct oblique_scan;
    ASXA_oblique_recipe_struct oblique_recipe;
} AS_XS_PL_asxaxlbs_align_oblique_no_lbs_struct;

typedef struct
{
    int logical_action_id;
    ASXA_align_result_base_struct align_base_result;
    ASXA_oblique_recipe_result_struct recipe_result;
    ASXA_oblique_align_result_struct align_result;
    ASXT_oblique_diag_result_struct diagnose_result;
} AS_XS_CL_asxa_align_oblique_struct;

typedef struct
{
    int logical_action_id;
    ASXA_align_result_base_struct align_base_result;
    ASXA_oblique_recipe_result_struct recipe_result;
    ASXA_oblique_align_result_struct align_result;
    ASXT_oblique_diag_result_struct diagnose_result;
} AS_XS_CL_asxt_align_oblique_struct;

typedef struct
{
    int logical_action_id;
    ASXA_align_result_base_struct align_base_result;
    ASXA_oblique_recipe_result_struct recipe_result;
    ASXA_oblique_align_result_struct align_result;
    ASXT_oblique_diag_result_struct diagnose_result;
} AS_XS_CL_asxaxlbs_align_oblique_no_lbs_struct;

typedef struct
{
    ASXA_align_scan_base_struct align_base;
    ASXA_dual_periodic_scan_struct dual_per_scan;
    ASXA_dual_periodic_recipe_struct dual_per_recipe;
} AS_XS_PL_asxa_align_dual_periodic_struct;

typedef struct
{
    int logical_action_id;
    ASXA_align_result_base_struct align_result_base;
    ASXA_dual_periodic_recipe_result_struct recipe_result;
    ASXA_dual_periodic_align_result_struct align_result;
    ASXA_dual_periodic_diag_struct diag_result;
} AS_XS_CL_asxa_align_dual_periodic_struct;

typedef struct
{
    ASXA_align_scan_base_struct align_scan_base_data_p;
    ASXA_periodic_scan_struct periodic_scan_p;
    ASXA_periodic_recipe_struct periodic_recipe_p;
    SMXA_driverState xs_state;
} AS_XS_PL_asxaxhp_align_periodic_struct;

typedef struct
{
    int logical_action_id;
    ASXA_align_result_base_struct align_result_base_p;
    ASXA_periodic_recipe_result_struct periodic_recipe_result_p;
    ASXA_periodic_align_result_struct periodic_align_result_p;
} AS_XS_CL_asxaxhp_align_periodic_struct;

typedef struct
{
    horvervect start_position;
    horvervect end_position;
    int oversample_factor;
    double scan_duration;
    SFXA_AGC_mode_enum AGC_mode;
    WPxCHUCK_chuck_id_enum chuck_id;
} AS_XS_PL_asxt_linear_scan_struct;

typedef struct
{
    int logical_action_id;
} AS_XS_CL_asxt_linear_scan_struct;

typedef struct
{
    ASDT_action_data_struct action_data;
    ASXA_align_scan_base_struct align_base;
    ASXA_periodic_recipe_struct periodic_recipe;
    ASXA_periodic_scan_struct periodic_scan;
    ASPD_periodic_mc_data_struct mc_data;
    ASPD_logical_mark_segment_struct mark_matrix;
    ASPD_periodic_ic_data_struct ic_data;
    SMXA_driverState xs_state;
} AS_XS_PL2CL_asxa_align_periodic_struct;

typedef struct
{
    ASDT_action_data_struct action_data;
    ASXA_align_scan_base_struct align_base;
    ASXA_periodic_recipe_struct periodic_recipe;
    ASXA_periodic_scan_struct periodic_scan;
    ASPD_periodic_mc_data_struct mc_data;
    ASPD_logical_mark_segment_struct mark_matrix;
    ASPD_periodic_ic_data_struct ic_data;
    SMXA_driverState xs_state;
} AS_XS_PL2CL_asxaxfp_align_periodic_struct;

typedef struct
{
    ASDT_action_data_struct action_data;
    ASXA_align_scan_base_struct align_base;
    ASXA_periodic_recipe_struct periodic_recipe;
    ASXA_periodic_scan_struct periodic_scan;
    ASPD_periodic_mc_data_struct mc_data;
    ASPD_logical_mark_segment_struct mark_matrix;
    ASPD_periodic_ic_data_struct ic_data;
    SMXA_driverState xs_state;
} AS_XS_PL2CL_asxaxlbs_align_periodic_no_lbs_struct;

typedef struct
{
    ASDT_action_data_struct action_data;
    ASXA_align_scan_base_struct align_base;
    ASXA_periodic_recipe_struct periodic_recipe;
    ASXA_periodic_scan_struct periodic_scan;
    ASPD_periodic_mc_data_struct mc_data;
    ASPD_logical_mark_segment_struct mark_matrix;
    ASPD_periodic_ic_data_struct ic_data;
    SMXA_driverState xs_state;
} AS_XS_PL2CL_asxaxhp_align_periodic_struct;

typedef struct
{
    ASDT_action_data_struct action_data;
    ASXA_align_scan_base_struct align_base;
    ASXA_template_recipe_struct template_recipe;
    ASXA_template_scan_struct template_scan;
    ASTD_template_mc_data_struct mc_data;
    ASTD_logical_mark_segment_struct mark_matrix;
} AS_XS_PL2CL_asxa_align_template_struct;

typedef struct
{
    ASDT_action_data_struct action_data;
    ASXA_align_scan_base_struct align_base;
    ASXA_zigzag_recipe_struct zigzag_recipe;
    ASXA_zigzag_scan_struct zigzag_scan;
    ASZD_zigzag_mc_data_struct mc_data;
    ASZD_logical_mark_segment_struct mark_matrix;
} AS_XS_PL2CL_asxa_align_zigzag_struct;

typedef int AS_XS_PL2CL_asxa_align_multi_per_struct_nr_of_lateral_scans[0x2];

typedef double AS_XS_PL2CL_asxa_align_multi_per_struct_lateral_distance[0x2];

typedef struct
{
    AS_XS_PL2CL_asxa_align_periodic_struct periodic_action;
    AS_XS_PL2CL_asxa_align_multi_per_struct_nr_of_lateral_scans nr_of_lateral_scans;
    AS_XS_PL2CL_asxa_align_multi_per_struct_lateral_distance lateral_distance;
    ASXA_DIR_ENUM used_direction;
} AS_XS_PL2CL_asxa_align_multi_per_struct;

typedef struct
{
    ASDT_action_data_struct action_data;
    AS_XS_PL_asxaxsst_static_scan_struct static_scan;
} AS_XS_PL2CL_asxaxsst_static_scan_struct;

typedef struct
{
    ASDT_action_data_struct action_data;
    ASXA_align_scan_base_struct align_base;
    ASXA_oblique_scan_struct oblique_scan;
    ASXA_oblique_recipe_struct oblique_recipe;
    ASOB_PL2CL_mc_data_struct mc_data;
    ASOB_PL2CL_mark_info_struct mark_data;
} AS_XS_PL2CL_asxa_align_oblique_struct;

typedef struct
{
    ASDT_action_data_struct action_data;
    ASXA_align_scan_base_struct align_base;
    ASXA_oblique_scan_struct oblique_scan;
    ASXA_oblique_recipe_struct oblique_recipe;
    ASOB_PL2CL_mc_data_struct mc_data;
    ASOB_PL2CL_mark_info_struct mark_data;
} AS_XS_PL2CL_asxt_align_oblique_struct;

typedef struct
{
    ASDT_action_data_struct action_data;
    ASXA_align_scan_base_struct align_base;
    ASXA_oblique_scan_struct oblique_scan;
    ASXA_oblique_recipe_struct oblique_recipe;
    ASOB_PL2CL_mc_data_struct mc_data;
    ASOB_PL2CL_mark_info_struct mark_data;
} AS_XS_PL2CL_asxaxlbs_align_oblique_no_lbs_struct;

typedef double AS_XS_PL2CL_asxa_align_dual_periodic_struct_lateral_scan_offset[0x5];

typedef struct
{
    horvervect expected_pos;
    double capture_range_scandir;
    AS_XS_PL2CL_asxa_align_dual_periodic_struct_lateral_scan_offset lateral_scan_offset;
    ASXA_dual_periodic_recipe_struct dual_per_recipe;
    int logical_action_id;
} AS_XS_PL2CL_asxa_align_dual_periodic_struct;

typedef struct
{
    ASDT_action_data_struct action_data;
} AS_XS_PL2CL_asxt_linear_scan_struct;

typedef struct
{
    ASDT_action_data_struct action_data;
    ASXA_align_scan_base_struct align_base;
    ASXA_periodic_scan_struct periodic_scan;
    ASPD_physical_mark_segment_struct segment_data;
    ASPD_periodic_mc_data_struct mc_data;
    ASPD_physical_data_struct physical_data;
    ASPD_periodic_ic_data_struct ic_data;
} AS_XS_PP_periodic_scan_struct;

typedef struct
{
    int align_id;
    ASXA_threshold_id_string threshold_name;
    ASDT_action_data_struct action_data;
    ASXA_align_scan_base_struct align_base;
    ASXA_template_scan_struct template_scan;
    ASTD_physical_mark_segment_struct segment_data;
    ASTD_template_mc_data_struct mc_data;
    ASTD_physical_data_struct physical_data;
} AS_XS_PP_template_scan_struct;

typedef struct
{
    int align_id;
    ASDT_action_data_struct action_data;
    ASXA_threshold_id_string threshold_name;
    ASXA_align_scan_base_struct align_base;
    ASXA_zigzag_scan_struct zigzag_scan;
    ASZD_physical_mark_segment_struct segment_data;
    ASZD_zigzag_mc_data_struct mc_data;
    ASZD_physical_data_struct physical_data;
} AS_XS_PP_zigzag_scan_struct;

typedef bool AS_XS_PP_multi_per_scan_struct_recipe_colors_enabled[0x4];

typedef struct
{
    AS_XS_PP_periodic_scan_struct periodic_scan;
    bool use_feedback_result;
    bool start_best_scan_selection;
    bool update_best_scan_selection;
    AS_XS_PP_multi_per_scan_struct_recipe_colors_enabled recipe_colors_enabled;
    xyvect lateral_scan_offset;
} AS_XS_PP_multi_per_scan_struct;

typedef bool AS_XS_PP_static_scan_struct_recipe_used_colors[0x4];

typedef struct
{
    ASDT_action_data_struct action_data;
    AS_XS_PL_asxaxsst_static_scan_struct static_scan;
    AS_XS_PP_static_scan_struct_recipe_used_colors recipe_used_colors;
} AS_XS_PP_static_scan_struct;

typedef struct
{
    int align_id;
    ASDT_action_data_struct action_data;
    ASXA_align_scan_base_struct align_base;
    ASXA_oblique_scan_struct oblique_scan;
    ASOB_MD_mark_info_struct mark_data;
    ASOB_PL2PP_mc_data_struct mc_data;
    ASOB_PL2PP_physical_data_struct physical_data;
} AS_XS_PP_oblique_scan_struct;

typedef struct
{
    ASXA_align_scan_base_struct align_base;
    ASDT_physical_segment_info_struct segment_info;
    ASDP_dual_periodic_mc_data_struct mc_data;
    ASDT_action_data_struct action_data;
    double lateral_offset;
    ASDP_dual_period_fit_input_struct fit_spec;
    ASDP_physical_data_struct physical_data;
} AS_XS_PP_dual_periodic_scan_struct;

typedef bool AS_XS_PP_agc_lock_scan_struct_color_array[0x4];

typedef struct
{
    ASXA_align_scan_base_struct align_base;
    ASDT_physical_segment_info_struct segment_info;
    ASDP_dual_periodic_mc_data_struct mc_data;
    ASDT_action_data_struct action_data;
    AS_XS_PP_agc_lock_scan_struct_color_array color_array;
    double lateral_offset;
    SFXA_scan_type_enum following_scan_type;
    ASDP_physical_data_struct physical_data;
} AS_XS_PP_agc_lock_scan_struct;

typedef struct
{
    horvervect expected_pos;
    WPxCHUCK_chuck_id_enum chuck_id;
} AS_XS_PP_move_ws_scan_struct;

typedef struct
{
    horvervect expected_pos;
    WPxCHUCK_chuck_id_enum chuck_id;
} AS_XS_PP_close_lbs_scan_struct;

typedef struct
{
    ASDT_action_data_struct action_data;
    AS_XS_PL_asxt_linear_scan_struct linear_scan;
} AS_XS_PP_linear_scan_struct;

typedef struct
{
    int nr_physical_actions;
    int physical_align_id;
    ASDT_action_data_struct action_data;
    ASXA_periodic_scan_struct periodic_scan;
    ASXA_align_scan_base_struct align_base;
    ASPD_periodic_mc_data_struct mc_data;
    ASPD_physical_mark_segment_struct segment_data;
    ASPD_periodic_fit_spec_struct fit_spec;
    ASPD_periodic_ic_data_struct ic_data;
} AS_XS_PP2CP_periodic_scan_struct;

typedef struct
{
    int nr_physical_actions;
    int physical_align_id;
    ASDT_action_data_struct action_data;
    ASXA_align_scan_base_struct align_base;
    ASXA_template_scan_struct template_scan;
    ASTD_template_mc_data_struct mc_data;
    ASTD_physical_mark_segment_struct segment_data;
    ASTD_template_fit_spec_struct fit_spec;
} AS_XS_PP2CP_template_scan_struct;

typedef struct
{
    int nr_physical_actions;
    int physical_align_id;
    ASDT_action_data_struct action_data;
    ASXA_align_scan_base_struct align_base;
    ASXA_zigzag_scan_struct zigzag_scan;
    ASZD_zigzag_mc_data_struct mc_data;
    ASZD_physical_mark_segment_struct segment_data;
    ASZD_zigzag_fit_spec_struct fit_spec;
} AS_XS_PP2CP_zigzag_scan_struct;

typedef bool AS_XS_PP2CP_multi_per_scan_struct_recipe_colors_enabled[0x4];

typedef struct
{
    AS_XS_PP2CP_periodic_scan_struct periodic_action;
    bool start_best_scan_selection;
    bool update_best_scan_selection;
    AS_XS_PP2CP_multi_per_scan_struct_recipe_colors_enabled recipe_colors_enabled;
    xyvect lateral_scan_offset;
} AS_XS_PP2CP_multi_per_scan_struct;

typedef struct
{
    int nr_physical_actions;
    int physical_align_id;
    ASDT_action_data_struct action_data;
    ASDT_physical_data_struct physical_data;
    AS_XS_PL_asxaxsst_static_scan_struct static_scan;
} AS_XS_PP2CP_static_scan_struct;

typedef struct
{
    int physical_align_id;
    ASDT_action_data_struct action_data;
    ASOB_PP2CP_mc_data_struct mc_data;
} AS_XS_PP2CP_oblique_scan_struct;

typedef struct
{
    ASDP_dual_periodic_wq_ord_struct wq;
    double mark_rotation;
    xyvect scan_offset;
    ASDP_dual_period_fit_input_struct fit_spec;
} AS_XS_PP2CP_dual_periodic_scan_struct;

typedef struct
{
    int nr_physical_actions;
} AS_XS_PP2CP_agc_lock_scan_struct;

typedef struct
{
    horvervect expected_pos;
} AS_XS_PP2CP_move_ws_scan_struct;

typedef struct
{
    horvervect expected_pos;
} AS_XS_PP2CP_close_lbs_scan_struct;

typedef struct
{
    int physical_align_id;
} AS_XS_PP2CP_linear_scan_struct;

typedef struct
{
    int nr_physical_actions;
    int physical_align_id;
    ASPD_periodic_fit_spec_struct fit_spec;
    ASPD_period_fit_result_struct fit_result;
} AS_XS_CP_periodic_scan_struct;

typedef struct
{
    ASTD_template_fit_spec_struct fit_spec;
    ASTD_template_fit_result_struct fit_result;
    xyvect sco;
    int phy_id;
} AS_XS_CP_template_scan_struct;

typedef struct
{
    int nr_physical_actions;
    int physical_align_id;
    ASZD_zigzag_fit_spec_struct fit_spec;
    ASZD_zigzag_fit_result_struct fit_result;
} AS_XS_CP_zigzag_scan_struct;

typedef struct
{
    AS_XS_CP_periodic_scan_struct periodic_scan;
    int best_scan_index;
    xyvect best_scan_offset;
    ASXA_COLOR_ENUM best_scan_color;
} AS_XS_CP_multi_per_scan_struct;

typedef struct
{
    int nr_physical_actions;
    int physical_align_id;
    int nr_samples;
    double real_scan_time;
} AS_XS_CP_static_scan_struct;

typedef ASOB_oblique_fit_result_struct AS_XS_CP_oblique_scan_struct_fit_result[0x2];

typedef struct
{
    int physical_align_id;
    AS_XS_CP_oblique_scan_struct_fit_result fit_result;
} AS_XS_CP_oblique_scan_struct;

typedef struct
{
    ASDP_fit_result_struct fit_result;
    ASDP_dual_period_fit_input_struct fit_spec;
    ASDP_zc_diag_struct diag_result;
} AS_XS_CP_dual_periodic_scan_struct;

typedef struct
{
    int result;
} AS_XS_CP_agc_lock_scan_struct;

typedef struct
{
    int result;
} AS_XS_CP_move_ws_scan_struct;

typedef struct
{
    int result;
} AS_XS_CP_close_lbs_scan_struct;

typedef struct
{
    int physical_align_id;
} AS_XS_CP_linear_scan_struct;



#endif // _AS_XS_TC_H_
