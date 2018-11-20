/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : LF
* 模块名称 : LFXAxDEF
* 文件名称 : LFXAxDEF_tc.h
* 概要描述 :
*	LF组件LFXAxDEF数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _LFXAxDEF_TC_H_
#define _LFXAxDEF_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/
#define LFXAxDEF_MAXNUM_MEAS_POINTS 	 0x258 
#define LFXAxDEF_MAXNUM_SPOT_SWITCH_POINTS 	 0x258 
#define LFXAxDEF_MAXNUM_SERVO_SWITCH_POINTS 	 0x258 
#define LFXAxDEF_MEAS_SYS_ERROR_NONE 	 0x0 
#define LFXAxDEF_SPOT_MEAS_ERROR 	 0x7FF 
#define LFXAxDEF_SPOT_SYS_ERROR 	 -0x800 



/*-------------------------- Enums and Structs ---------------------------*/

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef unsigned int LFXAxDEF_error_source_t;

typedef struct
{
    double gridPositionFirst;
    double zFirst;
    double gridPositionMax;
    double zMax;
    double gridPositionFirstCheck;
    double zFirstCheck;
} LFXAxDEF_esm_spot_data_t;

typedef LFXAxDEF_esm_spot_data_t LFXAxDEF_esm_data_t[0x9];



#endif // _LFXAxDEF_TC_H_
