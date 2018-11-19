/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMRD_DC
* 文件名称 : IMRD_DC_tc.h
* 概要描述 :
*	IM组件IMRD_DC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMRD_DC_TC_H_
#define _IMRD_DC_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    double measure_current;
    double delta_time;
    double max_coil_resistance;
    double max_cable_resistance;
} IMRD_DC_raca_struct;

typedef struct
{
    double offset_current;
    double min_move;
} IMRD_DC_ara_connectivity_struct;

typedef struct
{
    double min_move_x;
    double min_move_y;
    double min_move_z;
} IMRD_DC_lra_connectivity_struct;

typedef struct
{
    double min_temperature;
    double max_temperature;
} IMRD_DC_laser_struct;

typedef struct
{
    double min_noise_level;
    double typ_noise_level;
    double max_noise_level;
} IMRD_DC_noise_struct;

typedef struct
{
    double lissa_radius_mean;
    double lissa_radius_mean_range;
    double lissa_radius_range;
    double lissa_radius_stdev;
} IMRD_DC_noise_lissa_struct;

typedef struct
{
    double max_range_diff;
} IMRD_DC_matrix_check_struct;

typedef struct
{
    double delta_frequency;
    double delta_amplitude;
    double delta_offset;
    double delta_f_time;
    double delta_a_time;
    double delta_o_time;
    int trace_duration;
    int prescaler;
} IMRD_DC_ramp_struct;

typedef struct
{
    double frequency;
    double amplitude;
    double ramp_up_time;
    double fade_out_time;
} IMRD_DC_degauss_struct;

typedef struct
{
    double max_delta_temp;
} IMRD_DC_temp_struct;

typedef double IMRD_DC_ra_conversion_struct_ara_matrix[0x2][0x2];

typedef double IMRD_DC_ra_conversion_struct_lra_matrix[0x3][0x3];

typedef struct
{
    IMRD_DC_ra_conversion_struct_ara_matrix ara_matrix;
    IMRD_DC_ra_conversion_struct_lra_matrix lra_matrix;
} IMRD_DC_ra_conversion_struct;

typedef struct
{
    IMRD_DC_raca_struct raca;
    IMRD_DC_ara_connectivity_struct ara_connect;
    IMRD_DC_lra_connectivity_struct lra_connect;
    IMRD_DC_laser_struct laser_temperature;
    IMRD_DC_noise_struct noise;
    IMRD_DC_noise_lissa_struct lissa_noise;
    IMRD_DC_matrix_check_struct matrix_check;
    IMRD_DC_ramp_struct ramp;
    IMRD_DC_degauss_struct degauss;
    IMRD_DC_temp_struct temperature;
    IMRD_DC_ra_conversion_struct conversion;
} IMRD_DC_dc_struct;



#endif // _IMRD_DC_TC_H_
