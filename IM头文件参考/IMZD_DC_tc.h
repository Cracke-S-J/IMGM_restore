/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMZD_DC
* 文件名称 : IMZD_DC_tc.h
* 概要描述 :
*	IM组件IMZD_DC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMZD_DC_TC_H_
#define _IMZD_DC_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    double lb_iop_max_cur;
    double dark_current_low_limit;
    double dark_current_up_limit;
    double dark_cur_pos_x;
    double dark_cur_pos_y;
    double stepsize_coarse;
    double stepsize_fine;
    double valid_signal_low;
    double valid_signal_high;
    double max_rng_coarse_search;
    double max_rng_fine_search;
    double stop_cond_zero_move;
    int max_iterations_find_zero;
    double low_soft_lim_avg_zs_volt;
    double up_soft_lim_avg_zs_volt;
    double low_hard_lim_avg_zs_volt;
    double up_hard_lim_avg_zs_volt;
    double chk_lim_delta_avg_zs_volt;
} IMZD_DC_zs_basic_check;

typedef struct
{
    int power_stab_time;
    double decreased_power_level;
    double max_power;
    double nominal_q;
} IMZD_DC_zs_fiber_consistency_check;

typedef struct
{
    double range_dx_dy_dz;
    double range_drx_dry_drz;
    double step_dx_dy_dz;
    double step_drx_dry_drz;
    int samples_per_step;
    double max_delta_mc_xyz;
    double max_delta_mc_rxryrz;
    double max_delta_tgt_xyz;
    double max_delta_tgt_rxryrz;
} IMZD_DC_zs_gain_matrix_check;

typedef struct
{
    int cycles_no_spm;
    double target_max_x_y_no_spm;
    double target_max_z_no_spm;
    double target_max_rx_ry_no_spm;
    double target_max_rz_no_spm;
    int cycles_spm;
    double target_max_x_y_spm;
    double target_max_z_spm;
    double target_max_rx_ry_spm;
    double target_max_rz_spm;
    double metroframe_temp_3sigma;
} IMZD_DC_zs_check_at_zero_position;

typedef struct
{
    int cycles;
    double x_range;
    double y_range;
    double z_range;
    double rx_range;
    double ry_range;
    double rz_range;
    double target_max_x_y;
    double target_max_z;
    double target_max_rx_ry;
    double target_max_rz;
    double metroframe_temp_3sigma;
} IMZD_DC_zs_check_around_zero_position;

typedef struct
{
    int cycles;
    double move_away_position_x;
    double move_away_position_y;
    double move_away_time;
    double max_delta_u_zs_enc;
    double max_delta_v_zs_enc;
    double metroframe_temp_3sigma;
} IMZD_DC_zs_versus_encoder_check;

typedef struct
{
    int cycles;
    double wait_time;
    double position1_x;
    double position1_y;
    double position2_x;
    double position2_y;
    double position3_x;
    double position3_y;
    double position4_x;
    double position4_y;
    double h0xy_fine;
    double h0xz_fine;
    int h0_fine_max_changes;
    double h0xy_phase;
    double h0xz_phase;
    int h0_phase_max_changes;
    double phase_change_y;
    double phase_change_z;
    double metroframe_temp_3sigma;
} IMZD_DC_phase_change_detection;

typedef struct
{
    double stepsize;
    double x_range;
    double y_range;
    double low_color_plot_range;
    double high_color_plot_range;
} IMZD_DC_zs_intensity_check;

typedef struct
{
    int cycles;
    double target_max_x_y_c2f;
    double target_max_z_c2f;
    double target_max_rx_ry_c2f;
    double target_max_rz_c2f;
    int attempts;
} IMZD_DC_repro_zeroing_to_baseframe;

typedef struct
{
    IMZD_DC_zs_basic_check basic;
    IMZD_DC_zs_fiber_consistency_check fiber;
    IMZD_DC_zs_gain_matrix_check matrix;
    IMZD_DC_zs_check_at_zero_position zss_at_zero;
    IMZD_DC_zs_check_around_zero_position random;
    IMZD_DC_zs_versus_encoder_check zs_vs_enc;
    IMZD_DC_phase_change_detection phase_change;
    IMZD_DC_zs_intensity_check intensity;
    IMZD_DC_repro_zeroing_to_baseframe repro;
    double zs_maximum_on_time;
    double zs_stabilization_time;
} IMZD_DC_parameters;

typedef struct
{
    IMZD_DC_parameters parameters;
} IMZD_DC_dc_struct;



#endif // _IMZD_DC_TC_H_
