/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : GL
* 模块名称 : GLXA
* 文件名称 : GLXA_tc.h
* 概要描述 :
*	GL组件GLXA数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _GLXA_TC_H_
#define _GLXA_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/
#define GLXA_MAX_STR_LEN 	 0x3FF 
#define GLXA_MAX_STR_SIZE 	 0x400 



/*-------------------------- Enums and Structs ---------------------------*/

typedef char GLXA_str[0x400];

typedef struct
{
    int s;
    int us;
} GLXA_timestamp;

typedef struct
{
    GLXA_timestamp time;
    GLXA_str line2;
    GLXA_str line3;
} GLXA_marker;

typedef struct
{
    GLXA_timestamp time;
    GLXA_str line2;
    GLXA_str line3;
} GLXA_event;



#endif // _GLXA_TC_H_
