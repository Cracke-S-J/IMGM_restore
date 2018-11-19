/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : ASXAxDC
* 文件名称 : ASXAxDC_tc.h
* 概要描述 :
*	AS组件ASXAxDC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ASXAxDC_TC_H_
#define _ASXAxDC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <SMXA.h> 
#include <THXA.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int ASXAxDC_initialize(void);
int ASXAxDC_terminate(void);
void ASXAxDC_rd_imp_data(void);
int ASXAxDC_set_sim_mode(const THXA_SIM_MODE *sim_mode,
	const THXA_TRACE_MODE *trace_mode,
	const THXA_REQ_MODE *data_req_mode);
int ASXAxDC_get_sim_mode(THXA_SIM_MODE *sim_mode_ptr,
	THXA_TRACE_MODE *trace_mode_ptr,
	THXA_REQ_MODE *data_req_mode_ptr);
int ASXAxDC_get_status(SMXA_driverState *state_ptr);
void ASXAxDC_mc_changed(void);



#endif // _ASXAxDC_TC_H_
