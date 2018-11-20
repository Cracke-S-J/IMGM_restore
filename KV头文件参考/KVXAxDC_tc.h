/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVXAxDC
* 文件名称 : KVXAxDC_tc.h
* 概要描述 :
*	KV组件KVXAxDC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVXAxDC_TC_H_
#define _KVXAxDC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <THXA.h> 
#include <SMXA.h> 



/*-------------------------------- Defines -------------------------------*/
#define KVXAxDC_DEFAULT_TIMEOUT 	 0x41 
#define KVXAxDC_INITIALIZE_TIMEOUT 	 0x41 
#define KVXAxDC_TERMINATE_TIMEOUT 	 0x41 



/*-------------------------- Enums and Structs ---------------------------*/



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int KVXAxDC_initialise(void);
int KVXAxDC_terminate(void);
int KVXAxDC_get_status(SMXA_driverState *driver_state);
void KVXAxDC_rd_imp_data(void);
int KVXAxDC_rd_imp_data_blocking(void);
void KVXAxDC_mc_changed(void);
int KVXAxDC_set_sim_mode(const THXA_SIM_MODE *sim_mode,
	const THXA_TRACE_MODE *trace_mode,
	const THXA_REQ_MODE *request_mode);
int KVXAxDC_get_sim_mode(THXA_SIM_MODE *sim_mode,
	THXA_TRACE_MODE *trace_mode,
	THXA_REQ_MODE *request_mode);



#endif // _KVXAxDC_TC_H_
