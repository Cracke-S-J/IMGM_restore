/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : ASxSIM2
* 文件名称 : ASxSIM2_tc.h
* 概要描述 :
*	AS组件ASxSIM2数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ASxSIM2_TC_H_
#define _ASxSIM2_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <SFXA_tc.h> 



/*-------------------------------- Defines -------------------------------*/
#define ASxSIM2_TIMEOUT 	 0x1E 



/*-------------------------- Enums and Structs ---------------------------*/



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int ASxSIM2_get_fit_results(const int *physical_id,
	const SFXA_scan_and_fit_input_struct *sfxa_params_p,
	SFXA_scan_result_struct *sfxa_results_p);



#endif // _ASxSIM2_TC_H_
