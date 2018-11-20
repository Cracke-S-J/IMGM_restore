/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KW
* 模块名称 : KWXAxDDxLOG
* 文件名称 : KWXAxDDxLOG_tc.h
* 概要描述 :
*	KW组件KWXAxDDxLOG数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KWXAxDDxLOG_TC_H_
#define _KWXAxDDxLOG_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <WPxCHUCK_tc.h> 
#include <base.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    int len;
    int max_len;
    float* array;
} KWXAxDDxLOG_x_gridline_offset_array;

typedef struct
{
    int len;
    int max_len;
    float* array;
} KWXAxDDxLOG_y_gridline_offset_array;

typedef struct
{
    int len;
    int max_len;
    float* array;
} KWXAxDDxLOG_z_value_column_array;

typedef struct
{
    KWXAxDDxLOG_z_value_column_array columns;
} KWXAxDDxLOG_z_value_row;

typedef struct
{
    int len;
    int max_len;
    KWXAxDDxLOG_z_value_row* array;
} KWXAxDDxLOG_z_value_row_array;

typedef struct
{
    int len;
    int max_len;
    bool* array;
} KWXAxDDxLOG_valid_flag_column_array;

typedef struct
{
    KWXAxDDxLOG_valid_flag_column_array columns;
} KWXAxDDxLOG_valid_flag_row;

typedef struct
{
    int len;
    int max_len;
    KWXAxDDxLOG_valid_flag_row* array;
} KWXAxDDxLOG_valid_flag_row_array;

typedef struct
{
    int id;
    xyvect centre_xy;
    float x_gridlines_shift;
    int nr_of_x_gridlines;
    int nr_of_y_gridlines;
    KWXAxDDxLOG_x_gridline_offset_array x_gridline_offsets;
    KWXAxDDxLOG_y_gridline_offset_array y_gridline_offsets;
    KWXAxDDxLOG_z_value_row_array z_values;
    KWXAxDDxLOG_valid_flag_row_array valid_flags;
} KWXAxDDxLOG_wafer_area_measurement;

typedef struct
{
    int len;
    int max_len;
    KWXAxDDxLOG_wafer_area_measurement* array;
} KWXAxDDxLOG_wam_array;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    int max_nr_of_x_gridlines;
    int max_nr_of_wams;
    int nr_of_wams;
    KWXAxDDxLOG_x_gridline_offset_array x_gridline_offsets;
    KWXAxDDxLOG_wam_array wams;
} KWXAxDDxLOG_wafer_map;



#endif // _KWXAxDDxLOG_TC_H_
