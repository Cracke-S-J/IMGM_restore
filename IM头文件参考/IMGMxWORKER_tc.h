/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMGMxWORKER
* 文件名称 : IMGMxWORKER_tc.h
* 概要描述 :
*	IM组件IMGMxWORKER数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMGMxWORKER_TC_H_
#define _IMGMxWORKER_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <IMGM_tc.h> 
#include <IMGMxSCHED_tc.h> 



/*-------------------------------- Defines -------------------------------*/
#define IMGMxWORKER_GENERIC_TIMEOUT 	 0xE10 



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    IMGMxWORKER_MEASURE_CHUCK = 0,
    IMGMxWORKER_PROCESS_DATA = 1,
} IMGMxWORKER_activity_enum;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int IMGMxWORKER_start_execute(const instanceid *instance,
	const IMGMxWORKER_activity_enum *action,
	const IMGMxSCHED_MEAS_elem *task);
void IMGMxWORKER_stop(void);
int IMGMxWORKER_get_status(bool *running);
int IMGMxWORKER_get_result(IMGM_result_struct **results);



#endif // _IMGMxWORKER_TC_H_
