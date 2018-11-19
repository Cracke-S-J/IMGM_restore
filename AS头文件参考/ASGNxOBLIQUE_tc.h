/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : ASGNxOBLIQUE
* 文件名称 : ASGNxOBLIQUE_tc.h
* 概要描述 :
*	AS组件ASGNxOBLIQUE数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ASGNxOBLIQUE_TC_H_
#define _ASGNxOBLIQUE_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <MDXAxAS_tc.h> 
#include <ASXA_tc.h> 
#include <ASDT_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    int start_sample_index;
    int end_sample_index;
} ASGNxOBLIQUE_sub_segment_struct;

typedef ASGNxOBLIQUE_sub_segment_struct ASGNxOBLIQUE_calc_pp_parms_struct_sub_seg_array[0x2];

typedef struct
{
    ASDT_physical_data_struct ph_data;
    ASDT_scan_spec_struct ws_scan;
    ASGNxOBLIQUE_calc_pp_parms_struct_sub_seg_array sub_seg_array;
} ASGNxOBLIQUE_calc_pp_parms_struct;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int ASGNxOBLIQUE_calc_pp_params(const ASXA_align_scan_base_struct *align_base_p,
	const MDXAxAS_oblique_segment_struct *segment_p,
	const ASXA_SCAN_SIGN_ENUM *scan_sign,
	const double *mc_scan_speed,
	const double *mc_zRange,
	const double *base_freq,
	const double *stage_freq,
	ASGNxOBLIQUE_calc_pp_parms_struct *pp_parms_p);



#endif // _ASGNxOBLIQUE_TC_H_
