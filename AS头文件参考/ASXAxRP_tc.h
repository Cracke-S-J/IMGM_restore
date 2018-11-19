/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : ASXAxRP
* 文件名称 : ASXAxRP_tc.h
* 概要描述 :
*	AS组件ASXAxRP数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ASXAxRP_TC_H_
#define _ASXAxRP_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <MDXA_tc.h> 
#include <ASXA_tc.h> 
#include <GNAL_tc.h> 



/*-------------------------------- Defines -------------------------------*/
#define ASXAxRP_TIMEOUT 	 0x5 



/*-------------------------- Enums and Structs ---------------------------*/



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int ASXAxRP_convert_periodic_recipe(const GNAL_ALIGNMENT_RECIPE_STRUCT *recipe_in,
	ASXA_periodic_recipe_struct *periodic_recipe_out);
int ASXAxRP_apply_periodic_recipe(const ASXA_periodic_recipe_struct *periodic_recipe_in,
	const ASXA_periodic_recipe_result_struct *recipe_result_in,
	ASXA_align_result_base_struct *align_result_base_out,
	ASXA_periodic_recipe_result_struct *recipe_result_out);
int ASXAxRP_convert_zigzag_recipe(const GNAL_ALIGNMENT_RECIPE_STRUCT *recipe_in,
	ASXA_zigzag_recipe_struct *zigzag_recipe_out);
int ASXAxRP_convert_template_recipe(const GNAL_ALIGNMENT_RECIPE_STRUCT *recipe_in,
	ASXA_template_recipe_struct *template_recipe_out);
int ASXAxRP_convert_multi_per_recipe(const GNAL_ALIGNMENT_RECIPE_STRUCT *recipe_in,
	ASXA_multi_per_recipe_struct *recipe_out_p);
int ASXAxRP_convert_oblique_recipe(const GNAL_ALIGNMENT_RECIPE_STRUCT *recipe_in,
	ASXA_oblique_recipe_struct *recipe_out_p);
int ASXAxRP_convert_dual_periodic_recipe(const MDXA_mark_type_string *mark_type,
	const MDXA_alignment_step_enum *alignment_step,
	const GNAL_ALIGNMENT_RECIPE_STRUCT *recipe_in,
	ASXA_dual_periodic_recipe_struct *recipe_out_p);



#endif // _ASXAxRP_TC_H_
