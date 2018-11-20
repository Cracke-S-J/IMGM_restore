/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 产品号 : 
* 所属组件 : BASE
* 模块名称 : BASE
* 文件名称 : base.h
* 概要描述 :
*	基本数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
* 1.0    
*****************************************************************************/
#ifndef _BASE_H_
#define _BASE_H_

/*------------------------------- Includes -------------------------------*/
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>

/*-------------------------------- Defines -------------------------------*/

#define IN
#define OUT
#define INOUT

#define FALSE 	 0x0 
#define TRUE 	 0x1 
#define M_E 	 2.718281828459045 
#define M_PI 	 3.141592653589793 
#define M_PI_2 	 1.570796326794897 
#define M_1_PI 	 0.318309886183791 
#define M_SQRT2  1.414213562373095 


#define _VOID_PTR_  void *  //未确定指针定义。
#define _SHM_PTR_   void *  //指向共享内存的指针。

typedef int bool;

/*-------------------------- Enums and Structs ---------------------------*/


typedef struct
{
    double x;
    double y;
} xyvect;

typedef struct
{
    double x;
    double y;
    double z;
} xyzvect;

typedef struct
{
    double x;
    double y;
    double a;
} xyavect;

typedef struct
{
    double z;
    double rx;
    double ry;
} zrxryvect;

typedef struct
{
    double x;
    double y;
    double rz;
    double z;
    double rx;
    double ry;
} horvervect;

typedef struct
{
    double re;
    double im;
} complex;

//typedef struct
//{
//	int iSecond;      // 1s
//	int iMicrosecond; // 1/1000000 s
//} TIME_STAMP; 

typedef struct
{
	int iSecond;      // 1s
	int iMicrosecond; // 1/1000000 s
} timestamp;


typedef struct
{
	int len;
	int max_len;
	char *array;
} varstring;



#endif // _BASE_H_
