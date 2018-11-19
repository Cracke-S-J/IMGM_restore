/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMGMxDC
* 文件名称 : IMGMxDC_tc.h
* 概要描述 :
*	IM组件IMGMxDC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMGMxDC_TC_H_
#define _IMGMxDC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <base.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef xyvect IMGMxDC_plate_layout_p[0x6];

typedef struct
{
    IMGMxDC_plate_layout_p p;
} IMGMxDC_plate_layout;

typedef IMGMxDC_plate_layout IMGMxDC_plates_layout_plates[0x8];

typedef struct
{
    IMGMxDC_plates_layout_plates plates;
} IMGMxDC_plates_layout;

typedef xyvect IMGMxDC_htre_layout_p[0x4];

typedef struct
{
    IMGMxDC_htre_layout_p p;
} IMGMxDC_htre_layout;

typedef IMGMxDC_htre_layout IMGMxDC_htres_layout_htres[0x20];

typedef struct
{
    IMGMxDC_htres_layout_htres htres;
} IMGMxDC_htres_layout;

typedef struct
{
    double max_speed;
    double max_accel;
    double max_jerk;
    double settle_time;
    bool scan_up_first;
    bool scan_pitch_plus;
} IMGMxDC_move_struct;

typedef struct
{
    bool allow_parallel_move;
    double aa_filter;
    int freq_divider;
    bool override_move_params;
    IMGMxDC_move_struct move_x;
    IMGMxDC_move_struct move_y;
    double const_z;
    double const_rx;
    double const_ry;
    double const_rz;
    int max_line_retries;
    bool abort_on_error;
    bool do_inline_processing;
    bool use_lbw_cog_controller;
    double htre_weld_x;
    double htre_weld_y;
    double htre_xf8_x_yn;
    double htre_xf8_x_yp;
    double htre_xf8_y_xn;
    double htre_xf8_y_xp;
    int hfmap_version;
    IMGMxDC_plates_layout plates_layout;
    IMGMxDC_htres_layout htres_layout;
} IMGMxDC_dc_struct;



#endif // _IMGMxDC_TC_H_
