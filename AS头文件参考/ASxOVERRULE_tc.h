/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : ASxOVERRULE
* 文件名称 : ASxOVERRULE_tc.h
* 概要描述 :
*	AS组件ASxOVERRULE数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ASxOVERRULE_TC_H_
#define _ASxOVERRULE_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <ASXAxMC_tc.h> 
#include <ASXA_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    ASxOVERRULE_MD_TYPE_NONE = 0,
    ASxOVERRULE_MD_TYPE_DEDICATED_SA = 1,
} ASxOVERRULE_MD_TYPE_enum;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int ASxOVERRULE_MD_data(const ASXA_align_scan_base_struct *align_base_p,
	const ASXA_PERIOD_ENUM *period,
	ASXAxMC_overrule_marktype_data_struct *overrule_data_p,
	ASxOVERRULE_MD_TYPE_enum *overrule_status_p);



#endif // _ASxOVERRULE_TC_H_
