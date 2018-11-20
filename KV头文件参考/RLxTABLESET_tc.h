/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : RL
* 模块名称 : RLxTABLESET
* 文件名称 : RLxTABLESET_tc.h
* 概要描述 :
*	RL组件RLxTABLESET数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _RLxTABLESET_TC_H_
#define _RLxTABLESET_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <LEXAxDEF_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    LEXAxDEF_measgrid_table_t measgrid_table;
    LEXAxDEF_meas_spot_valid_table_t meas_spot_valid_table;
    LEXAxDEF_servo_spot_valid_table_t scan_servo_spot_valid_table;
} RLxTABLESET_table_set_t;

typedef struct
{
    LEXAxDEF_measgrid_table_t measgrid_table;
    LEXAxDEF_meas_spot_valid_table_t meas_spot_valid_table;
} RLxTABLESET_AG_table_set_t;

typedef struct
{
    LEXAxDEF_measgrid_table_t measgrid_table;
    LEXAxDEF_meas_spot_valid_table_t meas_spot_valid_table;
    LEXAxDEF_servo_spot_valid_table_t scan_servo_spot_valid_table;
    LEXAxDEF_servo_spot_valid_table_t sosi_immediate_spot_valid_table;
    LEXAxDEF_servo_spot_valid_table_t sosi_storage_spot_valid_table;
    LEXAxDEF_meas_spot_valid_table_t esm_spot_valid_table;
} RLxTABLESET_sosi_table_set_t;



#endif // _RLxTABLESET_TC_H_
