/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : CO
* 模块名称 : COPI
* 文件名称 : COPI_tc.h
* 概要描述 :
*	CO组件COPI数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _COPI_TC_H_
#define _COPI_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef char COPI_NameType[0x50];

typedef char COPI_DescType[0x100];

typedef char COPI_UnitType[0x10];

typedef char COPI_StoreType[0x50];

typedef char COPI_CTypeType[0x8];

typedef struct
{
    COPI_NameType ExternalName;
    COPI_NameType InternalName;
    COPI_StoreType StorageName;
    COPI_CTypeType TypeName;
} COPI_ParameterType;

typedef struct
{
    int len;
    int max_len;
    COPI_ParameterType* array;
} COPI_param_list_type;



#endif // _COPI_TC_H_
