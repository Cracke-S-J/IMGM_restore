/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : ASxAWE
* 文件名称 : ASxAWE_tc.h
* 概要描述 :
*	AS组件ASxAWE数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ASxAWE_TC_H_
#define _ASxAWE_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <ASXA_tc.h> 



/*-------------------------------- Defines -------------------------------*/
#define ASxAWE_TIMEOUT 	 0x5 
#define ASxAWE_STRING_LENGTH 	 0x28 



/*-------------------------- Enums and Structs ---------------------------*/

typedef char ASxAWE_status_string[0x28];



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int ASxAWE_get_status_string(const ASXA_ZC_STATUS_ENUM *status,
	ASxAWE_status_string *status_string);



#endif // _ASxAWE_TC_H_
