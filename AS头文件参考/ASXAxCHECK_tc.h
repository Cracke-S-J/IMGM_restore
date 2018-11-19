/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : ASXAxCHECK
* 文件名称 : ASXAxCHECK_tc.h
* 概要描述 :
*	AS组件ASXAxCHECK数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ASXAxCHECK_TC_H_
#define _ASXAxCHECK_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <ASXA_tc.h> 
#include <MDXA_tc.h> 



/*-------------------------------- Defines -------------------------------*/
#define ASXAxCHECK_TIMEOUT 	 0x5 



/*-------------------------- Enums and Structs ---------------------------*/



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int ASXAxCHECK_align_prepare(void);
int ASXAxCHECK_align_periodic(const MDXA_mark_type_string *mark_name,
	const MDXA_alignment_step_enum *alignment_step,
	const ASXA_periodic_recipe_struct *recipe);
int ASXAxCHECK_align_template(const MDXA_mark_type_string *mark_name,
	const MDXA_alignment_step_enum *alignment_step,
	const ASXA_template_recipe_struct *recipe);
int ASXAxCHECK_align_zigzag(const MDXA_mark_type_string *mark_name,
	const MDXA_alignment_step_enum *alignment_step,
	const ASXA_zigzag_recipe_struct *recipe);
int ASXAxCHECK_align_multi_per(const MDXA_mark_type_string *mark_name,
	const MDXA_alignment_step_enum *alignment_step,
	const ASXA_multi_per_recipe_struct *recipe_p);
int ASXAxCHECK_align_oblique(const MDXA_mark_type_string *mark_name,
	const MDXA_alignment_step_enum *alignment_step,
	const ASXA_oblique_recipe_struct *recipe_p);
int ASXAxCHECK_align_dual_periodic(const MDXA_mark_type_string *mark_name,
	const MDXA_alignment_step_enum *alignment_step,
	const ASXA_multi_per_recipe_struct *recipe_p);
int ASXAxCHECK_align_finish(void);



#endif // _ASXAxCHECK_TC_H_
