/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVxPI
* 文件名称 : KVxPI_tc.h
* 概要描述 :
*	KV组件KVxPI数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVxPI_TC_H_
#define _KVxPI_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <COPI_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    int len;
    int max_len;
    COPI_ParameterType* array;
} KVxPI_param_list_type;



#endif // _KVxPI_TC_H_
