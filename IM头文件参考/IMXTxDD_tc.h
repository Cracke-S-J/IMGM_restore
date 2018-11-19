/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMXTxDD
* 文件名称 : IMXTxDD_tc.h
* 概要描述 :
*	IM组件IMXTxDD数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMXTxDD_TC_H_
#define _IMXTxDD_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef char IMXTxDD_machine_info_t_time_stamp[0x34];

typedef struct
{
    IMXTxDD_machine_info_t_time_stamp time_stamp;
    int machine_nr;
} IMXTxDD_machine_info_t;



#endif // _IMXTxDD_TC_H_
