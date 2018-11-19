/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : ASXAxODP
* 文件名称 : ASXAxODP_tc.h
* 概要描述 :
*	AS组件ASXAxODP数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ASXAxODP_TC_H_
#define _ASXAxODP_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <GNAFxODP_tc.h> 
#include <ASXA_tc.h> 



/*-------------------------------- Defines -------------------------------*/
#define ASXAxODP_GENERIC_TIMEOUT 	 0x3C 



/*-------------------------- Enums and Structs ---------------------------*/



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int ASXAxODP_list_periodic_mark_errors(const ASXA_align_result_base_struct *align_result,
	const double *delta_shift_threshold,
	const ASXA_periodic_align_result_struct *periodic_align_result,
	const ASXA_periodic_recipe_struct *periodic_recipe,
	const ASXA_periodic_recipe_result_struct *periodic_recipe_result,
	GNAFxODP_mark_error_varray **mark_error_varray_ptr);
int ASXAxODP_list_template_mark_errors(const ASXA_align_result_base_struct *align_result,
	const ASXA_template_recipe_result_struct *template_recipe_struct,
	GNAFxODP_mark_error_varray **mark_error_varray_ptr);
int ASXAxODP_list_multi_per_mark_errors(const ASXA_align_result_base_struct *align_result,
	const double *delta_shift_threshold,
	const ASXA_multi_per_align_result_struct *multi_per_align_result,
	const ASXA_multi_per_recipe_struct *multi_per_recipe,
	const ASXA_multi_per_recipe_result_struct *multi_per_recipe_result,
	GNAFxODP_mark_error_varray **mark_error_varray_ptr);



#endif // _ASXAxODP_TC_H_
