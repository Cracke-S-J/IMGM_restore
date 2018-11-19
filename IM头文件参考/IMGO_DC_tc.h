/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMGO_DC
* 文件名称 : IMGO_DC_tc.h
* 概要描述 :
*	IM组件IMGO_DC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMGO_DC_TC_H_
#define _IMGO_DC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <base.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    xyvect left_bottom;
    xyvect right_top;
} IMGO_DC_area;

typedef xyvect IMGO_DC_dc_struct_scan_convex_area[0xC];

typedef IMGO_DC_area IMGO_DC_dc_struct_invalid_area[0x8];

typedef struct
{
    double HalfKernelWidth;
    int sample_divider;
    double diag_data_delay;
    double scan_z;
    double scan_rx;
    double scan_ry;
    double scan_rz;
    IMGO_DC_dc_struct_scan_convex_area scan_convex_area;
    double l_d;
    double c_d;
    double r;
    double rx_nom;
    double s_i;
    double th_c_y;
    double th_c_z;
    double r_acc;
    double cd;
    double c_2d;
    double th_ts2ss;
    double r_x_spec;
    double r_y_spec;
    double th_q;
    double th_re_ha;
    double th_re_nha;
    double c_acc;
    double min_x_window;
    double min_y_window;
    IMGO_DC_dc_struct_invalid_area invalid_area;
    int n_butter;
    double l_butter;
    int max_nr_detected_defects;
    int max_nr_old_defects;
    int gd2_divider;
    int min_defect_points;
    double lissajous_range;
    horvervect lissajous_start;
    horvervect lissajous_end;
    bool tracing_off_multithread;
    bool simulate_pe_traces;
    bool write_sim_traces;
    bool dump_kernel;
    bool read_input_file;
    bool display_intermediates;
    bool set_position_move;
    bool simulate_radius_traces;
    bool overrule_max_speed_perf;
    bool overrule_max_speed_prof;
    bool bottom_view_result_page;
    bool check_nr_samples;
} IMGO_DC_dc_struct;



#endif // _IMGO_DC_TC_H_
