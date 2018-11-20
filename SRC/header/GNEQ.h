/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 产品号 : 
* 所属组件 : GN
* 模块名称 : GNEQ
* 文件名称 : GNEQ.h
* 概要描述 :
*	GN组件GNEQ对外接口声明
* 历史记录 :
* 版本    日期    作者    内容
* 1.0
*****************************************************************************/
#ifndef _GNEQ_H_ 
#define _GNEQ_H_

#include <base.h>


/*-------------------- 对外全局变量声明 --------------------*/








/*----------------------- 对外接口声明 -----------------------*/


/*--------------------------------------------------------------------
* Parameters	:
* 	-input      :
* 	-input/output	:  <none>
* 	-output	   :
* Returns	:
OK - success (error_code = 0)
* Purpose	: -dRange < d1 - d2 < dRange 则返回TRUE, 其中dRange非负
--------------------------------------------------------------------*/
bool GNEQ_dbl_equal_absolute(double d1, double d2, double dRange);
bool GNEQ_dbl_equal(double d1, double d2);





#endif // _GNEQ_H_

