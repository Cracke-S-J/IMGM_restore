/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVXAxLOTxRES
* 文件名称 : KVXAxLOTxRES_tc.h
* 概要描述 :
*	KV组件KVXAxLOTxRES数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVXAxLOTxRES_TC_H_
#define _KVXAxLOTxRES_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <DTXA_tc.h> 
#include <base.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    zrxryvect ws_zeroing_error_zrxry;
} KVXAxLOTxRES_SA_results;

typedef struct
{
    zrxryvect global_wafer_wedge;
} KVXAxLOTxRES_GLC_results;

typedef struct
{
    int dummy;
} KVXAxLOTxRES_PDGC_results;

typedef struct
{
    xyvect position;
    int nr_wafers;
    double z;
} KVXAxLOTxRES_chuck_spot_t;

typedef struct
{
    xyvect position;
    double z;
    double radius;
} KVXAxLOTxRES_focus_spot_t;

typedef struct
{
    int len;
    int max_len;
    KVXAxLOTxRES_chuck_spot_t* array;
} KVXAxLOTxRES_chuck_spot_array_t;

typedef struct
{
    int len;
    int max_len;
    KVXAxLOTxRES_focus_spot_t* array;
} KVXAxLOTxRES_focus_spot_array_t;

typedef struct
{
    bool chuck_spots_detected;
    bool focus_spots_detected;
    KVXAxLOTxRES_chuck_spot_array_t chuck_spots;
    KVXAxLOTxRES_focus_spot_array_t focus_spots;
} KVXAxLOTxRES_FM_results;

typedef struct
{
    xyvect area_centre_xy;
    double plane_deviation;
    int area_id;
    bool area_measurement_ok;
    bool plane_deviation_check_done;
    bool plane_deviation_check_ok;
    bool FSM_check_ok;
    bool FSM_check_done;
} KVXAxLOTxRES_WM_area_results;

typedef KVXAxLOTxRES_WM_area_results KVXAxLOTxRES_WM_stroke_results_array[0x3C];

typedef struct
{
    int len;
    int max_len;
    DTXA_scan_direction scan_direction;
    double scan_duration;
    double y_start;
    double y_end;
    KVXAxLOTxRES_WM_stroke_results_array array;
} KVXAxLOTxRES_WM_stroke_results;

typedef KVXAxLOTxRES_WM_stroke_results KVXAxLOTxRES_WM_results_array[0x4B0];

typedef struct
{
    int len;
    int max_len;
    KVXAxLOTxRES_WM_results_array array;
} KVXAxLOTxRES_WM_results;

typedef struct
{
    int dummy;
} KVXAxLOTxRES_lot_report;



#endif // _KVXAxLOTxRES_TC_H_
