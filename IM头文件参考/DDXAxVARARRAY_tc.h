/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : DD
* 模块名称 : DDXAxVARARRAY
* 文件名称 : DDXAxVARARRAY_tc.h
* 概要描述 :
*	DD组件DDXAxVARARRAY数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _DDXAxVARARRAY_TC_H_
#define _DDXAxVARARRAY_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <base.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    int len;
    int max_len;
    bool* array;
} DDXAxVARARRAY_bool;

typedef struct
{
    int len;
    int max_len;
    char* array;
} DDXAxVARARRAY_char;

typedef struct
{
    int len;
    int max_len;
    short* array;
} DDXAxVARARRAY_short;

typedef struct
{
    int len;
    int max_len;
    int* array;
} DDXAxVARARRAY_int;

typedef struct
{
    int len;
    int max_len;
    float* array;
} DDXAxVARARRAY_float;

typedef struct
{
    int len;
    int max_len;
    double* array;
} DDXAxVARARRAY_double;

typedef struct
{
    int len;
    int max_len;
    timestamp* array;
} DDXAxVARARRAY_timestamp;

typedef struct
{
    int len;
    int max_len;
    ASML_complex* array;
} DDXAxVARARRAY_complex;

typedef struct
{
    int len;
    int max_len;
    varstring* array;
} DDXAxVARARRAY_varstring;



#endif // _DDXAxVARARRAY_TC_H_
