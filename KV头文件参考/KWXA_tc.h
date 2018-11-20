/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KW
* 模块名称 : KWXA
* 文件名称 : KWXA_tc.h
* 概要描述 :
*	KW组件KWXA数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KWXA_TC_H_
#define _KWXA_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <DTXAxIMAGE_tc.h> 
#include <base.h> 
#include <WPxCHUCK_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    KWXA_FILE_STORAGE_TYPE_ASCII = 0,
} KWXA_file_storage_type;

typedef double KWXA_wafer_map_wafer_map_data[0x100000];

typedef struct
{
    int size;
    WPxCHUCK_chuck_id_enum chuck_id;
    int max_nr_of_x_gridlines;
    int max_nr_of_wams;
    int nr_of_wams;
    int x_gridline_offset_list_bytenr;
    int wam_index_ref_list_bytenr;
    int wam_id_ref_list_bytenr;
    KWXA_wafer_map_wafer_map_data wafer_map_data;
} KWXA_wafer_map;

typedef double KWXA_small_wafer_map_wafer_map_data[0xC800];

typedef struct
{
    int size;
    WPxCHUCK_chuck_id_enum chuck_id;
    int max_nr_of_x_gridlines;
    int max_nr_of_wams;
    int nr_of_wams;
    int x_gridline_offset_list_bytenr;
    int wam_index_ref_list_bytenr;
    int wam_id_ref_list_bytenr;
    KWXA_small_wafer_map_wafer_map_data wafer_map_data;
} KWXA_small_wafer_map;

typedef double KWXA_wafer_area_measurement_wam_data[0x1];

typedef struct
{
    int size;
    int id;
    xyvect centre_xy;
    double x_gridlines_shift;
    int nr_of_x_gridlines;
    int nr_of_y_gridlines;
    int x_gridline_id_list_bytenr;
    int y_gridline_offset_list_bytenr;
    int z_value_list_bytenr;
    int valid_flag_list_bytenr;
    KWXA_wafer_area_measurement_wam_data wam_data;
} KWXA_wafer_area_measurement;

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef unsigned char KWXA_x_gridline_id;

typedef struct
{
    int wam_id;
    bool FWOL_requested;
} KWXA_wam_info;

typedef struct
{
    int len;
    int max_len;
    KWXA_wam_info* array;
} KWXA_wam_info_list;

typedef struct
{
    int len;
    int max_len;
    int* array;
} KWXA_weight_factors_overruled_wams;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    zrxryvect global_wafer_wedge;
    KWXA_weight_factors_overruled_wams weight_factors_overruled_wams;
    KWXA_wam_info_list wam_info_list;
} KWXA_wafer_map_info;

typedef struct
{
    DTXAxIMAGE_image_id_string image_id;
    int fingerprint_id;
} KWXA_fingerprint_mapping;

typedef struct
{
    int len;
    int max_len;
    KWXA_fingerprint_mapping* array;
} KWXA_fingerprint_mapping_list;

typedef double KWXA_binary_wafer_map_wafer_map_data[0x9C4];

typedef struct
{
    int size;
    WPxCHUCK_chuck_id_enum chuck_id;
    int max_nr_of_x_gridlines;
    int max_nr_of_wams;
    int nr_of_wams;
    int x_gridline_offset_list_bytenr;
    int wam_index_ref_list_bytenr;
    int wam_id_ref_list_bytenr;
    KWXA_binary_wafer_map_wafer_map_data wafer_map_data;
} KWXA_binary_wafer_map;

typedef double KWXA_binary_wafer_area_measurement_wam_data[0x1];

typedef struct
{
    int size;
    int id;
    xyvect centre_xy;
    double x_gridlines_shift;
    int nr_of_x_gridlines;
    int nr_of_y_gridlines;
    int x_gridline_id_list_bytenr;
    int y_gridline_offset_list_bytenr;
    int z_value_list_bytenr;
    int valid_flag_list_bytenr;
    KWXA_binary_wafer_area_measurement_wam_data wam_data;
} KWXA_binary_wafer_area_measurement;



#endif // _KWXA_TC_H_
