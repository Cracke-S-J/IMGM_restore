/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 产品号 : 
* 所属组件 : CM
* 模块名称 : CMXA
* 文件名称 : CMXA.h
* 概要描述 :
*	CM组件CMXA对外接口声明
* 历史记录 :
* 版本    日期    作者    内容
* 1.0
*****************************************************************************/
#ifndef _CMXA_H_ 
#define _CMXA_H_

#include <base.h>








/*-------------------- 对外全局变量声明 --------------------*/








/*----------------------- 对外接口声明 -----------------------*/

int CMXA_machineId(int *pParam1); 
int CMXA_getConfigurationItem(int iParam1, int *piParam2);





#endif // _CMXA_H_

