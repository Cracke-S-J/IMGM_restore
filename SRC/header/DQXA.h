/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : DQ
* 模块名称 : DQXA
* 文件名称 : DQXA_tc.h
* 概要描述 :
*	DQ组件DQXA数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _DQXA_TC_H_
#define _DQXA_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <base.h> 


/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    DQXA_ACCESS_NONE = 0,
    DQXA_ACCESS_READ = 1,
    DQXA_ACCESS_RESTRICTED = 2,
    DQXA_ACCESS_WRITE = 3,
} DQXA_ACCESS;

typedef struct
{
    bool value;
    bool deflt;
    DQXA_ACCESS access;
} DQXA_bool;

typedef struct
{
    char value;
    char deflt;
    char min;
    char max;
    DQXA_ACCESS access;
} DQXA_char;

typedef struct
{
    short value;
    short deflt;
    short min;
    short max;
    DQXA_ACCESS access;
} DQXA_short;

typedef struct
{
    int value;
    int deflt;
    int min;
    int max;
    DQXA_ACCESS access;
} DQXA_int;

typedef struct
{
    float value;
    float deflt;
    float min;
    float max;
    DQXA_ACCESS access;
} DQXA_float;

typedef struct
{
    double value;
    double deflt;
    double min;
    double max;
    DQXA_ACCESS access;
} DQXA_double;

typedef struct
{
    varstring value;
    varstring deflt;
    DQXA_ACCESS access;
} DQXA_varstring;

typedef struct
{
    int value;
    int deflt;
    DQXA_ACCESS access;
} DQXA_enum;

typedef struct
{
    varstring name;
    varstring type;
} DQXA_entry_t;

typedef struct
{
    int len;
    int max_len;
    DQXA_entry_t* array;
} DQXA_index_t;

typedef struct
{
    varstring server_name;
    varstring datapool_name;
    DQXA_index_t index;
} DQXA_handle_t;



int DQXA_check_values(void *handle, const char *element_name, bool *valid_ptr, char **dq_error_string);

int DQXA_set_int_attrs(DQXA_handle_t *dq_handle, const char *dq_item_string,  int *int_property, int mask);



#endif // _DQXA_TC_H_
