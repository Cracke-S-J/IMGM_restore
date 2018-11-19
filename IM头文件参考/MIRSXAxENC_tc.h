/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : MI
* 模块名称 : MIRSXAxENC
* 文件名称 : MIRSXAxENC_tc.h
* 概要描述 :
*	MI组件MIRSXAxENC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _MIRSXAxENC_TC_H_
#define _MIRSXAxENC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <base.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    MIRSXAxENC_LASER_OFF = 0,
    MIRSXAxENC_LASER_ON = 1,
} MIRSXAxENC_laser_status_enum;

typedef enum
{
    MIRSXAxENC_FILTER_1 = 0,
    MIRSXAxENC_FILTER_2 = 1,
} MIRSXAxENC_filter_enum;

typedef enum
{
    MIRSXAxENC_RSX1 = 0,
    MIRSXAxENC_RSY1 = 1,
    MIRSXAxENC_RSY2 = 2,
} MIRSXAxENC_axes_enum;

typedef enum
{
    MIRSXAxENC_PRE_ZEROING_CALIBRATION = 0,
    MIRSXAxENC_POST_ZEROING_CALIBRATION = 1,
} MIRSXAxENC_calibration_type_enum;

typedef struct
{
    bool enabled;
    double gain;
    double zero_frequency;
    double zero_damping;
    double pole_frequency;
    double pole_damping;
} MIRSXAxENC_position_filter_setting_struct;

typedef struct
{
    int no_moves;
    horvervect start_pos;
    double velocity_x;
    double acceleration_x;
    double jerk_x;
    double velocity_y;
    double acceleration_y;
    double jerk_y;
    double distance_x;
    double distance_y;
} MIRSXAxENC_movement_params_struct;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int MIRSXAxENC_enable_lasers(void);
int MIRSXAxENC_get_laser_status(MIRSXAxENC_laser_status_enum *laser_status_ptr);
int MIRSXAxENC_set_position_filter(const MIRSXAxENC_axes_enum *axis_id,
	const MIRSXAxENC_filter_enum *filter_id,
	const MIRSXAxENC_position_filter_setting_struct *filter_setting_ptr);
int MIRSXAxENC_is_calibrated(const MIRSXAxENC_calibration_type_enum *calibration_type,
	bool *calibrated_ptr);
int MIRSXAxENC_get_movement_params(const MIRSXAxENC_calibration_type_enum *calibration_type,
	MIRSXAxENC_movement_params_struct *movement_params_ptr);
int MIRSXAxENC_start_calibration(const MIRSXAxENC_calibration_type_enum *calibration_type);
int MIRSXAxENC_stop_calibration(const MIRSXAxENC_calibration_type_enum *calibration_type,
	bool *calibration_valid);
int MIRSXAxENC_uncalibrate(void);



#endif // _MIRSXAxENC_TC_H_
