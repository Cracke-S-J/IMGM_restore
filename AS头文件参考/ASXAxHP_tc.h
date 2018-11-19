/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : ASXAxHP
* 文件名称 : ASXAxHP_tc.h
* 概要描述 :
*	AS组件ASXAxHP数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ASXAxHP_TC_H_
#define _ASXAxHP_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <ASXA_tc.h> 



/*-------------------------------- Defines -------------------------------*/
#define ASXAxHP_GENERIC_TIMEOUT 	 0x3C 
#define ASXAxHP_THP_REQUEST_ALIGN_PERIODIC 	 0x415310A0 
#define ASXAxHP_THP_GET_RESULT_ALIGN_PERIODIC 	 0x415310B0 



/*-------------------------- Enums and Structs ---------------------------*/



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int ASXAxHP_request_align_periodic(const ASXA_align_scan_base_struct *align_scan_base_data_p,
	const ASXA_periodic_scan_struct *periodic_scan_p,
	const ASXA_periodic_recipe_struct *periodic_recipe_p,
	int *align_id);
int ASXAxHP_get_result_align_periodic(const int *align_id,
	int *logical_action_id,
	ASXA_align_result_base_struct *align_result_base_p,
	ASXA_periodic_recipe_result_struct *periodic_recipe_result_p,
	ASXA_periodic_align_result_struct *periodic_align_result_p);



#endif // _ASXAxHP_TC_H_
