/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMDP
* 文件名称 : IMDP_tc.h
* 概要描述 :
*	IM组件IMDP数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMDP_TC_H_
#define _IMDP_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    IMDP_STEP_PREPARE = 1,
    IMDP_STEP_MEASURE = 2,
    IMDP_STEP_CALCULATE = 3,
    IMDP_STEP_WRAP_UP = 4,
} IMDP_step_enum;

typedef enum
{
    IMDP_WS_CHUCK_1 = 0,
    IMDP_WS_CHUCK_2 = 1,
    IMDP_WS_CHUCK_UNKNOWN = 2,
} IMDP_WS_chuck_enum;

typedef enum
{
    IMDP_SENSOR_COUNT_4 = 0,
    IMDP_SENSOR_COUNT_6 = 1,
} IMDP_SENSOR_COUNT_ENUM;

typedef enum
{
    IMDP_SCENARIO_CALIBRATE = 0,
    IMDP_SCENARIO_M_ACTION = 1,
    IMDP_SCENARIO_ATPOP = 2,
} IMDP_scenario_enum;



#endif // _IMDP_TC_H_
