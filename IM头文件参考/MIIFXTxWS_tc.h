/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : MI
* 模块名称 : MIIFXTxWS
* 文件名称 : MIIFXTxWS_tc.h
* 概要描述 :
*	MI组件MIIFXTxWS数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _MIIFXTxWS_TC_H_
#define _MIIFXTxWS_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <base.h> 
#include <WPxCHUCK_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    MIIFXTxWS_AXIS_XR = 0,
    MIIFXTxWS_AXIS_X1 = 1,
    MIIFXTxWS_AXIS_X2 = 2,
    MIIFXTxWS_AXIS_X3 = 3,
    MIIFXTxWS_AXIS_X4 = 4,
    MIIFXTxWS_AXIS_YR = 5,
    MIIFXTxWS_AXIS_Y1 = 6,
    MIIFXTxWS_AXIS_Y2 = 7,
    MIIFXTxWS_AXIS_Y3 = 8,
    MIIFXTxWS_AXIS_Z1 = 9,
    MIIFXTxWS_AXIS_Z2 = 10,
} MIIFXTxWS_axis_enum;

typedef enum
{
    MIIFXTxWS_FILTER_AXIS_ID_WSEXR = 0,
    MIIFXTxWS_FILTER_AXIS_ID_WSEYR = 1,
    MIIFXTxWS_FILTER_AXIS_ID_WSMXR = 2,
    MIIFXTxWS_FILTER_AXIS_ID_WSMYR = 3,
} MIIFXTxWS_filter_axis_enum;

typedef enum
{
    MIIFXTxWS_FILTER_CONFIG_LOW_PASS = 0,
    MIIFXTxWS_FILTER_CONFIG_NOTCH = 1,
} MIIFXTxWS_filter_config_enum;

typedef enum
{
    MIIFXTxWS_FILTER_1 = 0,
    MIIFXTxWS_FILTER_2 = 1,
    MIIFXTxWS_FILTER_3 = 2,
    MIIFXTxWS_FILTER_4 = 3,
} MIIFXTxWS_filter_id_enum;

typedef struct
{
    int xr;
    bool xr_valid;
    int x1;
    bool x1_valid;
    int x2;
    bool x2_valid;
    int x3;
    bool x3_valid;
    int x4;
    bool x4_valid;
    int yr;
    bool yr_valid;
    int y1;
    bool y1_valid;
    int y2;
    bool y2_valid;
    int y3;
    bool y3_valid;
    int z1;
    bool z1_valid;
    int z2;
    bool z2_valid;
} MIIFXTxWS_laser_axes_data_struct;

typedef struct
{
    double xr;
    double x1;
    double x2;
    double x3;
    double x4;
    double yr;
    double y1;
    double y2;
    double y3;
    double z1;
    double z2;
} MIIFXTxWS_power_laser_axes_struct;

typedef struct
{
    bool double_pulse_error;
    bool loss_of_lock_error;
    bool glitch_error;
    bool overflow_error;
    bool interpolation_unlock_error;
    bool running;
    bool too_hot;
} MIIFXTxWS_status_axis_struct;

typedef struct
{
    MIIFXTxWS_status_axis_struct xr;
    MIIFXTxWS_status_axis_struct x1;
    MIIFXTxWS_status_axis_struct x2;
    MIIFXTxWS_status_axis_struct x3;
    MIIFXTxWS_status_axis_struct x4;
    MIIFXTxWS_status_axis_struct yr;
    MIIFXTxWS_status_axis_struct y1;
    MIIFXTxWS_status_axis_struct y2;
    MIIFXTxWS_status_axis_struct y3;
    MIIFXTxWS_status_axis_struct z1;
    MIIFXTxWS_status_axis_struct z2;
} MIIFXTxWS_status_laser_axes_struct;

typedef struct
{
    bool xr;
    bool x1;
    bool x2;
    bool x3;
    bool x4;
    bool yr;
    bool y1;
    bool y2;
    bool y3;
    bool z1;
    bool z2;
} MIIFXTxWS_check_laser_axes_struct;

typedef struct
{
    bool xr;
    bool x1;
    bool x2;
    bool x3;
    bool x4;
    bool yr;
    bool y1;
    bool y2;
    bool y3;
    bool z1;
    bool z2;
} MIIFXTxWS_select_laser_axes_struct;

typedef struct
{
    bool axis_configured;
    bool axis_running;
    double receiver_power;
    bool receiver_power_ok;
    int raw_value;
    bool double_pulse_error;
    bool loss_of_lock_error;
    bool glitch_error;
    bool overflow_error;
    bool interpolation_unlock_error;
} MIIFXTxWS_axis_result_struct;

typedef struct
{
    int raw_value;
    bool running;
} MIIFXTxWS_position_axis_struct;

typedef struct
{
    MIIFXTxWS_position_axis_struct xr;
    MIIFXTxWS_position_axis_struct x1;
    MIIFXTxWS_position_axis_struct x2;
    MIIFXTxWS_position_axis_struct x3;
    MIIFXTxWS_position_axis_struct x4;
    MIIFXTxWS_position_axis_struct yr;
    MIIFXTxWS_position_axis_struct y1;
    MIIFXTxWS_position_axis_struct y2;
    MIIFXTxWS_position_axis_struct y3;
    MIIFXTxWS_position_axis_struct z1;
    MIIFXTxWS_position_axis_struct z2;
} MIIFXTxWS_position_laser_axes_struct;

typedef struct
{
    bool IMFC_done;
} MIIFXTxWS_valid_flags_struct;

typedef struct
{
    bool used;
    MIIFXTxWS_filter_config_enum configuration;
    double zero_freq;
    double zero_damp;
    double pole_freq;
    double pole_damp;
} MIIFXTxWS_2nd_order_filter_parms_struct;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int MIIFXTxWS_get_receiver_dc_power(const WPxCHUCK_chuck_func_enum *chuck_function,
	MIIFXTxWS_power_laser_axes_struct *ws_power_laser_axes_ptr);
int MIIFXTxWS_get_receiver_power(const WPxCHUCK_chuck_func_enum *chuck_function,
	MIIFXTxWS_power_laser_axes_struct *ws_power_laser_axes_ptr);
int MIIFXTxWS_get_status_laser_axes(const WPxCHUCK_chuck_func_enum *chuck_function,
	MIIFXTxWS_status_laser_axes_struct *status_laser_axes_ptr);
int MIIFXTxWS_check_receiver_power(const WPxCHUCK_chuck_func_enum *chuck_function,
	MIIFXTxWS_check_laser_axes_struct *check_laser_axes_ptr);
int MIIFXTxWS_get_axis_result(const WPxCHUCK_chuck_func_enum *chuck_function,
	const MIIFXTxWS_axis_enum *axis,
	MIIFXTxWS_axis_result_struct *axis_result_ptr);
int MIIFXTxWS_get_position_laser_axes(const WPxCHUCK_chuck_func_enum *chuck_function,
	MIIFXTxWS_position_laser_axes_struct *position_laser_axes_ptr);
int MIIFXTxWS_get_raw_laser_axes_data(const WPxCHUCK_chuck_func_enum *chuck_function,
	MIIFXTxWS_laser_axes_data_struct *laser_axes_data_ptr);
int MIIFXTxWS_get_axis_filter_parameters(const MIIFXTxWS_filter_axis_enum *filter_axis_id,
	const MIIFXTxWS_filter_id_enum *filter_id,
	MIIFXTxWS_2nd_order_filter_parms_struct *filter_params_ptr);
int MIIFXTxWS_set_axis_filter_parameters(const MIIFXTxWS_filter_axis_enum *filter_axis_id,
	const MIIFXTxWS_filter_id_enum *filter_id,
	const MIIFXTxWS_2nd_order_filter_parms_struct *filter_params_ptr);
int MIIFXTxWS_set_initial_value(const WPxCHUCK_chuck_func_enum *chuck_function,
	const MIIFXTxWS_select_laser_axes_struct *select_laser_axes_ptr,
	const horvervect *position_ptr);
int MIIFXTxWS_get_imfc_calibration_flag(bool *is_calibrated_ptr);
int MIIFXTxWS_set_imfc_calibration_flag(const bool *is_calibrated);



#endif // _MIIFXTxWS_TC_H_
