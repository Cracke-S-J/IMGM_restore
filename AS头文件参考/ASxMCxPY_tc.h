/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : ASxMCxPY
* 文件名称 : ASxMCxPY_tc.h
* 概要描述 :
*	AS组件ASxMCxPY数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ASxMCxPY_TC_H_
#define _ASxMCxPY_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <ASXAxMC_tc.h> 



/*-------------------------------- Defines -------------------------------*/
#define ASxMCxPY_TIMEOUT 	 0xB4 



/*-------------------------- Enums and Structs ---------------------------*/



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int ASxMCxPY_mc_set_mp_tpt_improve(const ASXAxMC_mp_tpt_improve_struct *mp_tpt_improve);



#endif // _ASxMCxPY_TC_H_
