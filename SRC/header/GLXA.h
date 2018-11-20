/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 产品号 : 
* 所属组件 : GL
* 模块名称 : GLXA
* 文件名称 : GLXA.h
* 概要描述 :
*	GL组件GLXA对外接口声明
* 历史记录 :
* 版本    日期    作者    内容
* 1.0
*****************************************************************************/
#ifndef _GLXA_H_ 
#define _GLXA_H_

/*-------------------- 头文件 --------------------*/
#include <base.h>



/*-------------------------------- Defines -------------------------------*/
#define GLXA_MAX_STR_LEN 	 0x3FF 
#define GLXA_MAX_STR_SIZE 	 0x400 



/*-------------------------- Enums and Structs ---------------------------*/

typedef char GLXA_str[0x3FF];

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


/*-------------------- 对外全局变量声明 --------------------*/








/*----------------------- 对外接口声明 -----------------------*/








#endif // _GLXA_H_

