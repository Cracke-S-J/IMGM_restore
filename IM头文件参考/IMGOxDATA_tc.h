/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMGOxDATA
* 文件名称 : IMGOxDATA_tc.h
* 概要描述 :
*	IM组件IMGOxDATA数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMGOxDATA_TC_H_
#define _IMGOxDATA_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <IMGOxSCAN_tc.h> 
#include <WPxCHUCK_tc.h> 
#include <base.h> 
#include <IMGO_DC_tc.h> 
#include <IMGO_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef unsigned short IMGOxDATA_grid_sample_struct;

typedef struct
{
    int len;
    int max_len;
    IMGOxDATA_grid_sample_struct* array;
} IMGOxDATA_grid_sample_array;

typedef struct
{
    int len;
    int max_len;
    IMGOxDATA_grid_sample_array* array;
} IMGOxDATA_grid_sample_matrix;

typedef struct
{
    double sum;
    double sqsum;
} IMGOxDATA_grid_sample_internal_struct;

typedef struct
{
    int len;
    int max_len;
    IMGOxDATA_grid_sample_internal_struct* array;
} IMGOxDATA_grid_sample_internal_array;

typedef struct
{
    instanceid TaskInstId;
    IMGO_input_struct input;
    IMGO_DC_dc_struct test_const;
    timestamp start_time;
} IMGOxDATA_calibration_settings_t;

typedef struct
{
    horvervect pe_to_q_offset;
    horvervect dxdpe;
    horvervect dydpe;
    horvervect dzdpe;
    horvervect drxdpe;
    horvervect drydpe;
    horvervect drzdpe;
    horvervect q_to_pe_offset;
    horvervect dpexdq;
    horvervect dpeydq;
    horvervect dpezdq;
    horvervect dperxdq;
    horvervect dperydq;
    horvervect dperzdq;
    int minpex;
    int minpey;
    int maxpex;
    int maxpey;
    double dblminpex;
    double dblminpey;
    double dblmaxpex;
    double dblmaxpey;
} IMGOxDATA_pe_to_q_conversion_t;

typedef struct
{
    horvervect origin;
    xyvect shift;
    int grid_x_min;
    int grid_x_max;
    int grid_y_min;
    int grid_y_max;
} IMGOxDATA_encoder_grid_t;

typedef struct
{
    IMGOxDATA_grid_sample_array data;
} IMGOxDATA_line_results_t;

typedef IMGOxDATA_encoder_grid_t IMGOxDATA_area_settings_t_encoder_grids[0x4];

typedef struct
{
    int start_time_seconds;
    timestamp start_time;
    WPxCHUCK_chuck_id_enum chuck_id;
    WPxCHUCK_chuck_func_enum side_id;
    IMGO_direction_enum direction;
    IMGOxSCAN_setpoint_vararray setpoints;
    IMGOxDATA_pe_to_q_conversion_t conversion;
    IMGOxDATA_area_settings_t_encoder_grids encoder_grids;
} IMGOxDATA_area_settings_t;

typedef double IMGOxDATA_line_results_InstId_t_line_quality[0x2];

typedef instanceid IMGOxDATA_line_results_InstId_t_LineResultsInstId[0x2];

typedef struct
{
    instanceid TaskInstId;
    instanceid AreaInstId;
    timestamp stop_time;
    horvervect start_pos_pe;
    horvervect end_pos_pe;
    horvervect start_pos_q;
    horvervect end_pos_q;
    int counter;
    int encoder_id;
    IMGOxDATA_line_results_InstId_t_line_quality line_quality;
    IMGOxDATA_line_results_InstId_t_LineResultsInstId LineResultsInstId;
} IMGOxDATA_line_results_InstId_t;

typedef struct
{
    int len;
    int max_len;
    IMGOxDATA_line_results_InstId_t* array;
} IMGOxDATA_line_results_InstId_array;



#endif // _IMGOxDATA_TC_H_
