/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMXTxTR
* 文件名称 : IMXTxTR_tc.h
* 概要描述 :
*	IM组件IMXTxTR数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMXTxTR_TC_H_
#define _IMXTxTR_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/
#define IMXTxTR_MAX_TRACE_BUF_SIZE 	 0x800 
#define IMXTxTR_MAX_TRACE_NAME_SIZE 	 0x14 



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    int len;
    int max_len;
    double* array;
} IMXTxTR_double_array;

typedef char IMXTxTR_trace_buffer_t_name[0x14];

typedef struct
{
    IMXTxTR_trace_buffer_t_name name;
    double period;
    IMXTxTR_double_array sample;
    IMXTxTR_double_array time_stamp;
} IMXTxTR_trace_buffer_t;



#endif // _IMXTxTR_TC_H_
