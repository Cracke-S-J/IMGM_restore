/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AM
* 模块名称 : AMXAxSTAB
* 文件名称 : AMXAxSTAB_tc.h
* 概要描述 :
*	AM组件AMXAxSTAB数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _AMXAxSTAB_TC_H_
#define _AMXAxSTAB_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    AMXAxSTAB_AXIS_HOR_1 = 0,
    AMXAxSTAB_AXIS_HOR_2 = 1,
    AMXAxSTAB_AXIS_HOR_3 = 2,
    AMXAxSTAB_AXIS_VER_1 = 3,
    AMXAxSTAB_AXIS_VER_2 = 4,
    AMXAxSTAB_AXIS_VER_3 = 5,
} AMXAxSTAB_axis_enum;

typedef enum
{
    AMXAxSTAB_RESULT_NA = 0,
    AMXAxSTAB_RESULT_OK = 1,
    AMXAxSTAB_RESULT_NOK = 2,
} AMXAxSTAB_result_enum;

typedef double AMXAxSTAB_limit_array[0x6];

typedef struct
{
    AMXAxSTAB_limit_array limits;
} AMXAxSTAB_performance_limits_struct;

typedef struct
{
    int delay_before_measurement;
    int measure_time;
    AMXAxSTAB_limit_array limits;
} AMXAxSTAB_test_const_struct;

typedef struct
{
    double setpoint;
    double max_value;
    double limit;
    AMXAxSTAB_result_enum result;
} AMXAxSTAB_perf_struct;

typedef AMXAxSTAB_perf_struct AMXAxSTAB_perf_struct_array[0x6];

typedef struct
{
    AMXAxSTAB_perf_struct_array perf;
} AMXAxSTAB_performance_struct;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int AMXAxSTAB_stability(const AMXAxSTAB_test_const_struct *tc_ptr,
	const int *nr_of_retries,
	AMXAxSTAB_performance_struct *performance_ptr,
	AMXAxSTAB_result_enum *result_ok_ptr);



#endif // _AMXAxSTAB_TC_H_
