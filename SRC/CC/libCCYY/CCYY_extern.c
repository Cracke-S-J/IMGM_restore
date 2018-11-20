/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 产品号 : 
* 所属组件 : CC
* 模块名称 : CCYY
* 文件名称 : CCYY_extern.c
* 概要描述 :
*	未在base中实现的libCCYY模块使用到的外部接口函数打桩实现
* 历史记录 :
* 版本    日期    作者    内容
* 1.0
*****************************************************************************/
#include "CCYY_extern.h"
#include <CNXA.h>
#include <THXA.h>
#include <ERXA.h>
#include <EHXA.h>


//未在base中实现的libCCYY模块使用到的外部接口函数打桩实现，
//使用到外部函数直接return即可。
int AABB_func()
{
	return 0;
}



