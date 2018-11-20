/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : PO
* 模块名称 : POxSVCxLIST
* 文件名称 : POxSVCxLIST_tc.h
* 概要描述 :
*	PO组件POxSVCxLIST数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _POxSVCxLIST_TC_H_
#define _POxSVCxLIST_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <base.h> 


/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    bool begin_set;
    bool end_set;
    bool value_set;
    varstring begin;
    varstring end;
    varstring value;
} POxSVCxLIST_ValueType;

typedef struct
{
    varstring key;
    POxSVCxLIST_ValueType value;
} POxSVCxLIST_ParameterType;

typedef struct
{
    int len;
    int max_len;
    POxSVCxLIST_ParameterType* array;
} POxSVCxLIST_ParameterListType;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int POxSVCxLIST_list(const varstring *document_type,
	const POxSVCxLIST_ParameterListType *parameter_list,
	virtual *list);



#endif // _POxSVCxLIST_TC_H_
