/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : ASXT
* 文件名称 : ASXT_tc.h
* 概要描述 :
*	AS组件ASXT数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ASXT_TC_H_
#define _ASXT_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <WPxCHUCK_tc.h> 
#include <SFXA_tc.h> 
#include <base.h> 
#include <ASXA_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    ASXA_PPOS_STATUS_ENUM pos_status;
    double opos;
    double MCC;
    double WQ;
} ASXT_oblique_diag_subsegment_result_struct;

typedef ASXT_oblique_diag_subsegment_result_struct ASXT_oblique_diag_order_result_struct_sub_segment_array[0x2];

typedef struct
{
    bool enabled;
    ASXT_oblique_diag_order_result_struct_sub_segment_array sub_segment_array;
} ASXT_oblique_diag_order_result_struct;

typedef ASXT_oblique_diag_order_result_struct ASXT_oblique_diag_color_result_struct_ord_array[0x7];

typedef struct
{
    bool enabled;
    ASXT_oblique_diag_color_result_struct_ord_array ord_array;
} ASXT_oblique_diag_color_result_struct;

typedef ASXT_oblique_diag_color_result_struct ASXT_oblique_diag_dir_result_struct_col_array[0x4];

typedef struct
{
    bool enabled;
    ASXT_oblique_diag_dir_result_struct_col_array col_array;
} ASXT_oblique_diag_dir_result_struct;

typedef ASXT_oblique_diag_dir_result_struct ASXT_oblique_diag_result_struct_dir_array[0x2];

typedef struct
{
    ASXT_oblique_diag_result_struct_dir_array dir_array;
} ASXT_oblique_diag_result_struct;

typedef struct
{
    horvervect start_position;
    horvervect end_position;
    int oversample_factor;
    double scan_duration;
    SFXA_AGC_mode_enum AGC_mode;
    WPxCHUCK_chuck_id_enum chuck_id;
} ASXT_linear_scan_struct;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int ASXT_request_align_oblique(const ASXA_align_scan_base_struct *align_scan_base_data_p,
	const ASXA_oblique_scan_struct *scan_p,
	const ASXA_oblique_recipe_struct *recipe_p,
	int *align_id);
int ASXT_get_result_align_oblique(const int *align_id,
	int *logical_action_id,
	ASXA_align_result_base_struct *align_result_base_p,
	ASXA_oblique_recipe_result_struct *recipe_result_p,
	ASXA_oblique_align_result_struct *align_result_p,
	ASXT_oblique_diag_result_struct *diag_result_p);
int ASXT_request_linear_scan(const ASXT_linear_scan_struct *scan_p,
	int *align_id);
int ASXT_get_result_linear_scan(const int *align_id,
	int *logical_action_id);



#endif // _ASXT_TC_H_
