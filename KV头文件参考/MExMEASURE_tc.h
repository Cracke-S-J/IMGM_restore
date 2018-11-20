/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : ME
* 模块名称 : MExMEASURE
* 文件名称 : MExMEASURE_tc.h
* 概要描述 :
*	ME组件MExMEASURE数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _MExMEASURE_TC_H_
#define _MExMEASURE_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <MEXA_tc.h> 
#include <base.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    xyvect le_spot_xy;
    xyvect capture_xy;
    xyvect centre_xy;
    double start_angle;
    double end_angle;
} MExMEASURE_GLC_params_KV_KD;

typedef struct
{
    xyvect centre_xy;
    double start_angle;
    double end_angle;
    xyvect capture_xy;
    double ws_rz;
} MExMEASURE_GLC_params_KD_KV;

typedef struct
{
    double x;
    double servo_scan_y_start;
    double servo_scan_y_end;
    double calib_scan_y_start;
    double calib_scan_y_end;
    xyvect le_spot_xy;
} MExMEASURE_PDGC_measurement_params_KV_KD;

typedef struct
{
    xyvect servo_scan_start_xy;
    xyvect servo_scan_end_xy;
    xyvect calib_scan_start_xy;
    xyvect calib_scan_end_xy;
    double ws_rz;
} MExMEASURE_PDGC_measurement_params_KD_KV;

typedef struct
{
    double x;
    double y_start;
    double y_end;
    xyvect le_spot_xy;
} MExMEASURE_WM_params_KV_KD;

typedef struct
{
    xyvect start_xy;
    xyvect end_xy;
    double ws_rz;
} MExMEASURE_WM_params_KD_KV;

typedef struct
{
    xyvect plate_level_xy;
    xyvect le_spot_xy;
} MExMEASURE_SA_level_params_KV_KD;

typedef struct
{
    xyvect plate_align_xy;
} MExMEASURE_SA_align_params_KD_KV;

typedef struct
{
    double x;
    double y_start;
    double y_end;
    xyvect le_spot_xy;
} MExMEASURE_PDOC_LS_params_KV_KD;

typedef struct
{
    xyvect start_xy;
    xyvect end_xy;
    double ws_rz;
} MExMEASURE_PDOC_LS_params_KD_KV;

typedef struct
{
    double x;
    double y_start;
    double y_end;
    xyvect le_spot_xy;
} MExMEASURE_PDOC_AG_params_KV_KD;

typedef struct
{
    xyvect start_xy;
    xyvect end_xy;
    double ws_rz;
} MExMEASURE_PDOC_AG_params_KD_KV;

typedef struct
{
    xyvect plate_level_xy;
    xyvect le_spot_xy;
} MExMEASURE_PDOC_AG_height_params_KV_KD;

typedef struct
{
    double x;
    double y;
    double a;
} MExMEASURE_PDOC_AG_height_params_KD_KV;

typedef struct
{
    xyvect plate_level_xy;
    xyvect le_spot_xy;
} MExMEASURE_PDOC_LS_height_params_KV_KD;

typedef struct
{
    double x;
    double y;
    double a;
} MExMEASURE_PDOC_LS_height_params_KD_KV;

typedef struct
{
    xyvect wafer_mark_xy;
    xyavect ws_exp_pos_xyrz;
} MExMEASURE_COWA_params_KD_KV;

typedef struct
{
    xyvect wafer_mark_xy;
    xyavect ws_exp_pos_xyrz;
} MExMEASURE_FIWA_params_KD_KV;

typedef bool MExMEASURE_tis_lane_usage[0x3];

typedef xyvect MExMEASURE_iVSA_nom_level_pos_lane[0x3];

typedef bool MExMEASURE_iVSA_nom_level_pos_lane_usage[0x3];

typedef struct
{
    MExMEASURE_iVSA_nom_level_pos_lane lane;
    MExMEASURE_iVSA_nom_level_pos_lane_usage lane_usage;
    xyvect le_spot;
    xyvect level_ref_pos;
} MExMEASURE_iVSA_nom_level_pos;

typedef xyavect MExMEASURE_iVSA_ws_hor_pos_lane[0x3];

typedef bool MExMEASURE_iVSA_ws_hor_pos_lane_usage[0x3];

typedef struct
{
    MExMEASURE_iVSA_ws_hor_pos_lane lane;
    MExMEASURE_iVSA_ws_hor_pos_lane_usage lane_usage;
    xyavect level_ref_pos;
} MExMEASURE_iVSA_ws_hor_pos;

typedef struct
{
    xyvect le_capture_xy;
} MExMEASURE_wc_params_KV_KD;



#endif // _MExMEASURE_TC_H_
