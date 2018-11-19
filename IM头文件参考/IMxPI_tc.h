/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMxPI
* 文件名称 : IMxPI_tc.h
* 概要描述 :
*	IM组件IMxPI数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMxPI_TC_H_
#define _IMxPI_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <COPI_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    int len;
    int max_len;
    COPI_ParameterType* array;
} IMxPI_param_list_type;



#endif // _IMxPI_TC_H_
