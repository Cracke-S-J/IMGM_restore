/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : MI
* 模块名称 : MIXAxRSxZR
* 文件名称 : MIXAxRSxZR_tc.h
* 概要描述 :
*	MI组件MIXAxRSxZR数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _MIXAxRSxZR_TC_H_
#define _MIXAxRSxZR_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <base.h> 



/*-------------------------------- Defines -------------------------------*/
#define MIXAxRSxZR_AXES_MIN 	 0x0 
#define MIXAxRSxZR_AXES_MAX 	 0x3 



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    MIXAxRSxZR_X_AXIS = 0,
    MIXAxRSxZR_ALL_AXES = 1,
    MIXAxRSxZR_NO_AXES = 2,
} MIXAxRSxZR_axes_enum;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int MIXAxRSxZR_set_initial_value(const MIXAxRSxZR_axes_enum *axes_id,
	const horvervect *position_ptr);
int MIXAxRSxZR_set_coarse_offset(const MIXAxRSxZR_axes_enum *axes_id,
	const horvervect *position_ptr);
int MIXAxRSxZR_start_zeroing(void);
int MIXAxRSxZR_finished_zeroing(const MIXAxRSxZR_axes_enum *axis_id,
	bool *succeeded_ptr,
	horvervect *coarse_to_fine_offset_ptr);
int MIXAxRSxZR_abort_zeroing(void);
int MIXAxRSxZR_get_status(bool *zeroing_busy_ptr);
int MIXAxRSxZR_set_bf_repro(const double *x_bf_repro,
	const double *y_bf_repro);
int MIXAxRSxZR_get_zero_position(horvervect *zero_position_ptr);



#endif // _MIXAxRSxZR_TC_H_
