/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : GN
* 模块名称 : GNLEXA
* 文件名称 : GNLEXA_tc.h
* 概要描述 :
*	GN组件GNLEXA数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _GNLEXA_TC_H_
#define _GNLEXA_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <WPxSCANxDEF_tc.h> 
#include <base.h> 



/*-------------------------------- Defines -------------------------------*/
#define GNLEXA_MIN_Z_VALUES_PER_Y4RY 	 0x2 
#define GNLEXA_MIN_Z_VALUES_PER_Y4Z 	 0x2 
#define GNLEXA_MIN_Z_VALUES_IN_Y 	     0x1 
#define GNLEXA_MIN_Y_SLIT_SIZE 	         0.0001 



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    int len;
    int max_len;
    double* array;
} GNLEXA_grid_points;

typedef struct
{
    GNLEXA_grid_points x;
    GNLEXA_grid_points y;
} GNLEXA_grid;

typedef struct
{
    bool valid;
    double z;
} GNLEXA_height_point;

typedef struct
{
    int len;
    int max_len;
    GNLEXA_height_point* array;
} GNLEXA_height_line;

typedef struct
{
    int len;
    int max_len;
    GNLEXA_height_line* array;
} GNLEXA_height_data;

typedef struct
{
    double value;
    bool valid;
} GNLEXA_axis_setpoint;

typedef struct
{
    double position;
    GNLEXA_axis_setpoint z;
    GNLEXA_axis_setpoint rx;
    GNLEXA_axis_setpoint ry;
} GNLEXA_one_setpoint;

typedef struct
{
    int len;
    int max_len;
    GNLEXA_one_setpoint* array;
} GNLEXA_setpoints;

typedef enum
{
    GNLEXA_BOUND_NO_CONDS = 0,
    GNLEXA_BOUND_ZERO_SPEED_ZERO_ACCELERATION = 1,
} GNLEXA_boundary_conditions;

typedef struct
{
    double x_scan_axis;
    double y_start;
    double y_end;
    zrxryvect y_filter_window;
    double default_interval_length;
    GNLEXA_boundary_conditions bound_condts;
    double limit_min_SV;
} GNLEXA_fit_params;

typedef struct
{
    double z;
    double Rx;
    double Ry;
} GNLEXA_target_plane;

typedef struct
{
    double min;
    double max;
} GNLEXA_extreme_values;

typedef struct
{
    GNLEXA_extreme_values position;
    GNLEXA_extreme_values first_derivative;
    GNLEXA_extreme_values second_derivative;
} GNLEXA_extreme_scan_params;

typedef struct
{
    WPxSCANxDEF_polynomial_scan_params_struct polynomial;
    GNLEXA_extreme_scan_params extreme_values;
} GNLEXA_axis_params;

typedef struct
{
    GNLEXA_axis_params z;
    GNLEXA_axis_params ry;
    GNLEXA_axis_params rx;
} GNLEXA_scan_params;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int GNLEXA_invert_scan_direction(const GNLEXA_scan_params *initial_polynomials,
	GNLEXA_scan_params *inverted_polynomials);
int GNLEXA_calculate_zmap_setpoints_profiles(const GNLEXA_grid *grid,
	const GNLEXA_height_data *height_data,
	const GNLEXA_fit_params *fit_params,
	const GNLEXA_target_plane *target_plane,
	GNLEXA_scan_params *setpoint_polynomials);



#endif // _GNLEXA_TC_H_
