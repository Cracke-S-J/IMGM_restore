/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : ASXAxRPxSA
* 文件名称 : ASXAxRPxSA_tc.h
* 概要描述 :
*	AS组件ASXAxRPxSA数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ASXAxRPxSA_TC_H_
#define _ASXAxRPxSA_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <ASXA_tc.h> 
#include <GNAL_tc.h> 



/*-------------------------------- Defines -------------------------------*/
#define ASXAxRPxSA_TIMEOUT 	 0x5 



/*-------------------------- Enums and Structs ---------------------------*/



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int ASXAxRPxSA_SA_convert_periodic_recipe(const GNAL_ALIGNMENT_RECIPE_STRUCT *recipe_in,
	ASXA_periodic_recipe_struct *recipe_spec_p);
int ASXAxRPxSA_plate_convert_periodic_recipe(const GNAL_ALIGNMENT_RECIPE_STRUCT *recipe_in,
	ASXA_periodic_recipe_struct *recipe_spec_p);



#endif // _ASXAxRPxSA_TC_H_
