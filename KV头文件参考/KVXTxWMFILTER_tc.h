/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVXTxWMFILTER
* 文件名称 : KVXTxWMFILTER_tc.h
* 概要描述 :
*	KV组件KVXTxWMFILTER数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVXTxWMFILTER_TC_H_
#define _KVXTxWMFILTER_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <base.h> 
#include <KWXA_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    double pol_coef_0;
    double pol_coef_1;
    double pol_coef_2;
    double pol_coef_3;
    double pol_coef_4;
    double pol_coef_5;
    bool ero_applied;
} KVXTxWMFILTER_ero_results;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int KVXTxWMFILTER_remove_ERO(const double *r_zero,
	const double *wafer_size,
	KWXA_wafer_map **big_wm,
	KVXTxWMFILTER_ero_results *ero_res);
int KVXTxWMFILTER_perform_LLF(const xyvect *min_gridline_diff,
	const xyvect *filter_size,
	KWXA_wafer_map **big_wm);



#endif // _KVXTxWMFILTER_TC_H_
