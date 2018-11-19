/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMGOxSCAN
* 文件名称 : IMGOxSCAN_tc.h
* 概要描述 :
*	IM组件IMGOxSCAN数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMGOxSCAN_TC_H_
#define _IMGOxSCAN_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <WPxSCANxDEF_tc.h> 
#include <base.h> 
#include <WPxCHUCK_tc.h> 



/*-------------------------------- Defines -------------------------------*/
#define IMGOxSCAN_DEFAULT_TIMEOUT 	 0x12C 



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    double v_max;
    double a_max;
    double j_max;
} IMGOxSCAN_motion_struct;

typedef struct
{
    double x;
    double y;
    double rz;
    double z;
    double rx;
    double ry;
} IMGOxSCAN_setpoint_struct;

typedef struct
{
    int len;
    int max_len;
    IMGOxSCAN_setpoint_struct* array;
} IMGOxSCAN_setpoint_vararray;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int IMGOxSCAN_get_scan_motion_defaults(const WPxCHUCK_chuck_func_enum *chuck_func,
	IMGOxSCAN_motion_struct *vaj_x,
	IMGOxSCAN_motion_struct *vaj_y);
int IMGOxSCAN_get_move_motion_defaults(const WPxCHUCK_chuck_func_enum *chuck_func,
	IMGOxSCAN_motion_struct *vaj_x,
	IMGOxSCAN_motion_struct *vaj_y);
int IMGOxSCAN_get_line_scan_time(const horvervect *start_pos,
	const horvervect *end_pos,
	const IMGOxSCAN_motion_struct *vaj_x,
	const IMGOxSCAN_motion_struct *vaj_y,
	const bool *overrule_max_speed_perf,
	const bool *overrule_max_speed_prof,
	double *scan_time);
int IMGOxSCAN_update_scan_params(const horvervect *start_pos,
	const horvervect *end_pos,
	const IMGOxSCAN_motion_struct *vaj_x,
	const IMGOxSCAN_motion_struct *vaj_y,
	const bool *overrule_max_speed_perf,
	const bool *overrule_max_speed_prof,
	WPxSCANxDEF_6dof_scan_params_with_properties_struct **wp_params);
int IMGOxSCAN_get_scan_params(const horvervect *start_pos,
	const horvervect *end_pos,
	const WPxCHUCK_chuck_func_enum *chuck_func,
	const int *divider,
	const IMGOxSCAN_motion_struct *vaj_x,
	const IMGOxSCAN_motion_struct *vaj_y,
	const bool *overrule_max_speed_perf,
	const bool *overrule_max_speed_prof,
	WPxSCANxDEF_6dof_scan_params_with_properties_struct **wp_params);
int IMGOxSCAN_update_move_params(const horvervect *start_pos,
	const horvervect *end_pos,
	const IMGOxSCAN_motion_struct *vaj_x,
	const IMGOxSCAN_motion_struct *vaj_y,
	const bool *overrule_max_speed_perf,
	const bool *overrule_max_speed_prof,
	WPxSCANxDEF_6dof_scan_params_with_properties_struct **wp_params);
int IMGOxSCAN_get_move_params(const horvervect *start_pos,
	const horvervect *end_pos,
	const WPxCHUCK_chuck_func_enum *chuck_func,
	const IMGOxSCAN_motion_struct *vaj_x,
	const IMGOxSCAN_motion_struct *vaj_y,
	const bool *overrule_max_speed_perf,
	const bool *overrule_max_speed_prof,
	WPxSCANxDEF_6dof_scan_params_with_properties_struct **wp_params);
int IMGOxSCAN_get_scan_setpoints(const horvervect *start_pos,
	const horvervect *end_pos,
	const double *data_delay,
	const int *divider,
	const IMGOxSCAN_motion_struct *vaj_x,
	const IMGOxSCAN_motion_struct *vaj_y,
	const bool *overrule_max_speed_perf,
	const bool *overrule_max_speed_prof,
	const bool *overrule_scan_time,
	const int *overruled_scantime,
	IMGOxSCAN_setpoint_vararray **sp);



#endif // _IMGOxSCAN_TC_H_
