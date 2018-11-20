/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : LE
* 模块名称 : LEXAxSPOT
* 文件名称 : LEXAxSPOT_tc.h
* 概要描述 :
*	LE组件LEXAxSPOT数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _LEXAxSPOT_TC_H_
#define _LEXAxSPOT_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/
#define LEXAxSPOT_NUM_CAPTURE_CHANNELS 	 0x3 
#define LEXAxSPOT_NUM_CAPTURE_SPOTS 	 0x1 
#define LEXAxSPOT_NUM_MEAS_CHANNELS 	 0x9 
#define LEXAxSPOT_NUM_MEAS_SPOTS 	 0x9 
#define LEXAxSPOT_NUM_CHANNELS 	 0xC 
#define LEXAxSPOT_NUM_SERVO_SPOTS 	 0x2 
#define LEXAxSPOT_NUM_AG_CHANNELS 	 0x1 
#define LEXAxSPOT_NUM_AG_SPOTS 	 0x1 
#define LEXAxSPOT_NUM_TOTAL_SPOTS 	 0xA 
#define LEXAxSPOT_SPOT_NR_LS_SPOT_1 	 0x0 
#define LEXAxSPOT_SPOT_NR_LS_SPOT_2 	 0x1 
#define LEXAxSPOT_SPOT_NR_LS_SPOT_3 	 0x2 
#define LEXAxSPOT_SPOT_NR_LS_SPOT_4 	 0x3 
#define LEXAxSPOT_SPOT_NR_LS_SPOT_5 	 0x4 
#define LEXAxSPOT_SPOT_NR_LS_SPOT_6 	 0x5 
#define LEXAxSPOT_SPOT_NR_LS_SPOT_7 	 0x6 
#define LEXAxSPOT_SPOT_NR_LS_SPOT_8 	 0x7 
#define LEXAxSPOT_SPOT_NR_LS_SPOT_9 	 0x8 
#define LEXAxSPOT_SPOT_NR_LS_CAPTURE 	 0x9 
#define LEXAxSPOT_SPOT_AG_MEAS_OFFSET 	 0x9 
#define LEXAxSPOT_SPOT_NR_AG_SPOT_1 	 0x0 
#define LEXAxSPOT_SPOT_ID_LS_NONE 	 0x0 
#define LEXAxSPOT_SPOT_ID_LS_CAPTURE 	 0x1 
#define LEXAxSPOT_SPOT_ID_LS_SPOT_1 	 0x2 
#define LEXAxSPOT_SPOT_ID_LS_SPOT_2 	 0x4 
#define LEXAxSPOT_SPOT_ID_LS_SPOT_3 	 0x8 
#define LEXAxSPOT_SPOT_ID_LS_SPOT_4 	 0x10 
#define LEXAxSPOT_SPOT_ID_LS_SPOT_5 	 0x20 
#define LEXAxSPOT_SPOT_ID_LS_SPOT_6 	 0x40 
#define LEXAxSPOT_SPOT_ID_LS_SPOT_7 	 0x80 
#define LEXAxSPOT_SPOT_ID_LS_SPOT_8 	 0x100 
#define LEXAxSPOT_SPOT_ID_LS_SPOT_9 	 0x200 
#define LEXAxSPOT_SPOT_ID_AG_SPOT_1 	 0x400 
#define LEXAxSPOT_SPOT_ID_LS_ALL 	 0x3FF 
#define LEXAxSPOT_SPOT_ID_AG_ALL 	 0x400 
#define LEXAxSPOT_SPOT_ID_LS_ALL_MEAS_SPOTS 	 0x3FE 
#define LEXAxSPOT_SPOT_ID_ALL_MEAS_SPOTS 	 0x7FE 
#define LEXAxSPOT_NUM_SPOT_ID 	 0xA 
#define LEXAxSPOT_SPOT_ID_NONE 	 0x0 
#define LEXAxSPOT_SPOT_ID_C 	 0x1 
#define LEXAxSPOT_SPOT_ID_M0 	 0x2 
#define LEXAxSPOT_SPOT_ID_M1 	 0x4 
#define LEXAxSPOT_SPOT_ID_M2 	 0x8 
#define LEXAxSPOT_SPOT_ID_M3 	 0x10 
#define LEXAxSPOT_SPOT_ID_M4 	 0x20 
#define LEXAxSPOT_SPOT_ID_M5 	 0x40 
#define LEXAxSPOT_SPOT_ID_M6 	 0x80 
#define LEXAxSPOT_SPOT_ID_M7 	 0x100 
#define LEXAxSPOT_SPOT_ID_M8 	 0x200 
#define LEXAxSPOT_SPOT_ID_AG0 	 0x400 
#define LEXAxSPOT_SPOT_ID_M_ALL 	 0x3FE 
#define LEXAxSPOT_SPOT_ID_M_OUTER 	 0x202 
#define LEXAxSPOT_SPOT_ID_M_CENTRE 	 0x20 



/*-------------------------- Enums and Structs ---------------------------*/

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef unsigned int LEXAxSPOT_spot_id_t;

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef unsigned int LEXAxSPOT_ag_spot_id_t;

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef unsigned int LEXAxSPOT_spot_selection_t;



#endif // _LEXAxSPOT_TC_H_
