/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMENXTxWSxFF
* 文件名称 : IMENXTxWSxFF_tc.h
* 概要描述 :
*	IM组件IMENXTxWSxFF数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMENXTxWSxFF_TC_H_
#define _IMENXTxWSxFF_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <MIENXTxREFSET_tc.h> 
#include <MIENXTxWSxMLd_tc.h> 
#include <WPxCHUCK_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int IMENXTxWSxFF_set_h2q_params(const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *side,
	const MIENXTxWSxMLd_h2q_mc_struct *h2q_params,
	const MIENXTxREFSET_refset_ff_struct *new_refset);
int IMENXTxWSxFF_set_grid_map_params(const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *side,
	const MIENXTxWSxMLd_grid_map_mc_struct *grid_map_params,
	const MIENXTxREFSET_refset_ff_struct *new_refset);



#endif // _IMENXTxWSxFF_TC_H_
