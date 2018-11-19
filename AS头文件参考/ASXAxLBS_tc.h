/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : ASXAxLBS
* 文件名称 : ASXAxLBS_tc.h
* 概要描述 :
*	AS组件ASXAxLBS数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ASXAxLBS_TC_H_
#define _ASXAxLBS_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <ASXA_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int ASXAxLBS_request_align_periodic_no_lbs(const ASXA_align_scan_base_struct *align_scan_base_data_p,
	const ASXA_periodic_scan_struct *periodic_scan_p,
	const ASXA_periodic_recipe_struct *periodic_recipe_p,
	int *align_id);
int ASXAxLBS_get_result_align_periodic_no_lbs(const int *align_id,
	int *logical_action_id,
	ASXA_align_result_base_struct *align_result_base_p,
	ASXA_periodic_recipe_result_struct *periodic_recipe_result_p,
	ASXA_periodic_align_result_struct *periodic_align_result_p,
	ASXA_periodic_diag_result_struct *periodic_diag_result_p);
int ASXAxLBS_request_align_oblique_no_lbs(const ASXA_align_scan_base_struct *align_scan_base_data_p,
	const ASXA_oblique_scan_struct *scan_data_p,
	const ASXA_oblique_recipe_struct *recipe_data_p,
	int *align_id_p);
int ASXAxLBS_get_result_align_oblique_no_lbs(const int *align_id,
	int *logical_action_id_p,
	ASXA_align_result_base_struct *align_result_base_p,
	ASXA_oblique_recipe_result_struct *recipe_result_p,
	ASXA_oblique_align_result_struct *align_result_p);
int ASXAxLBS_get_no_lbs_used(const int *align_id,
	bool *no_lbs_used);



#endif // _ASXAxLBS_TC_H_
