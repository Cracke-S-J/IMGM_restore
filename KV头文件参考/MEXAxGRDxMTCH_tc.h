/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : ME
* 模块名称 : MEXAxGRDxMTCH
* 文件名称 : MEXAxGRDxMTCH_tc.h
* 概要描述 :
*	ME组件MEXAxGRDxMTCH数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _MEXAxGRDxMTCH_TC_H_
#define _MEXAxGRDxMTCH_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <WPxCHUCK_tc.h> 
#include <base.h> 
//extern WLxVPxMTxSIZE_WAFER_SIZE  300_MM  //105, 100
//extern WLxVPxMTxSIZE_WAFER_SIZE  200_MM  //105, 104



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef double MEXAxGRDxMTCH_on_wafer_length;

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef double MEXAxGRDxMTCH_on_wafer_coordinate;

typedef struct
{
    MEXAxGRDxMTCH_on_wafer_coordinate x;
    MEXAxGRDxMTCH_on_wafer_coordinate y;
} MEXAxGRDxMTCH_on_wafer_xyvect;

typedef struct
{
    int len;
    int max_len;
    MEXAxGRDxMTCH_on_wafer_xyvect* array;
} MEXAxGRDxMTCH_matrix_rows;

typedef struct
{
    int len;
    int max_len;
    MEXAxGRDxMTCH_matrix_rows* array;
} MEXAxGRDxMTCH_matrix_cols;

typedef struct
{
    double x;
    double y;
} MEXAxGRDxMTCH_meas_pos;

typedef enum
{
    MEXAxGRDxMTCH_SAFETY_CHECK_VERSION_1 = 0,
    MEXAxGRDxMTCH_SAFETY_CHECK_VERSION_2 = 1,
} MEXAxGRDxMTCH_safety_check_version;

typedef struct
{
    double min_height;
    MEXAxGRDxMTCH_meas_pos min_height_pos;
    double max_height;
    MEXAxGRDxMTCH_meas_pos max_height_pos;
    zrxryvect cld_wedge;
    MEXAxGRDxMTCH_meas_pos cld_center_pos;
    bool cld_measured;
    bool in_spec;
    double min_max_spec;
    double min_max_exposure_spec;
    MEXAxGRDxMTCH_safety_check_version safety_check_version;
    double wafer_height_safety_threshold;
    double cover_plate_height;
} MEXAxGRDxMTCH_mirror_block_params;

typedef struct
{
    bool model_R1R2_first;
    bool no_mag_update_after_ratio_scan;
} MEXAxGRDxMTCH_reticle_align_params;

typedef struct
{
    bool meander_routing_enabled;
    double limit_horver_ws_move;
} MEXAxGRDxMTCH_readout_routing_params;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int MEXAxGRDxMTCH_get_mirror_block_params(const WPxCHUCK_chuck_id_enum *chuck_id,
	MEXAxGRDxMTCH_mirror_block_params *mirror_block_params);



#endif // _MEXAxGRDxMTCH_TC_H_
