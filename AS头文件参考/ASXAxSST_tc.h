/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : ASXAxSST
* 文件名称 : ASXAxSST_tc.h
* 概要描述 :
*	AS组件ASXAxSST数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ASXAxSST_TC_H_
#define _ASXAxSST_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <base.h> 
#include <WPxCHUCK_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    horvervect WS_scan_pos;
    double meas_duration;
    double z_range;
} ASXAxSST_static_scan_data_struct;

typedef struct
{
    int nr_samples;
    double real_scan_time;
} ASXAxSST_static_scan_results_struct;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int ASXAxSST_request_static_scan(const ASXAxSST_static_scan_data_struct *scan_data_p,
	int *align_id_p);
int ASXAxSST_get_result_static_scan(const int *align_id,
	int *logical_align_id_p,
	ASXAxSST_static_scan_results_struct *scan_result_p);



#endif // _ASXAxSST_TC_H_
