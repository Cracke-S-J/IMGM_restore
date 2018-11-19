/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AM
* 模块名称 : AMEXXT
* 文件名称 : AMEXXT_tc.h
* 概要描述 :
*	AM组件AMEXXT数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _AMEXXT_TC_H_
#define _AMEXXT_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <AMEXXA_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    AMEXXT_AIRMOUNT_ID_1 = 0,
    AMEXXT_AIRMOUNT_ID_2 = 1,
    AMEXXT_AIRMOUNT_ID_3 = 2,
    AMEXXT_AIRMOUNT_ID_MAX = 3,
} AMEXXT_AIRMOUNT_ID_TYPE;

typedef enum
{
    AMEXXT_PROXIMITY = 0,
    AMEXXT_VELOCITY = 1,
    AMEXXT_TRANSFORMATION_TYPE_MAX = 2,
} AMEXXT_TRANSFORMATION_TYPE;

typedef enum
{
    AMEXXT_LOOP_TYPE_PNEUMATIC = 0,
    AMEXXT_LOOP_TYPE_INERTIAL = 1,
    AMEXXT_LOOP_TYPE_PROXIMITY = 2,
    AMEXXT_LOOP_TYPE_MAX = 3,
} AMEXXT_LOOP_TYPE_TYPE;

typedef enum
{
    AMEXXT_PROX_ID_VERT_AM1 = 0,
    AMEXXT_PROX_ID_VERT_AM2 = 1,
    AMEXXT_PROX_ID_VERT_AM3 = 2,
    AMEXXT_PROX_ID_HOR_AM1 = 3,
    AMEXXT_PROX_ID_HOR_AM2 = 4,
    AMEXXT_PROX_ID_HOR_AM3 = 5,
    AMEXXT_PROX_ID_MAX = 6,
} AMEXXT_PROX_ID_TYPE;

typedef enum
{
    AMEXXT_MOTOR_ID_VERT_AM1 = 0,
    AMEXXT_MOTOR_ID_VERT_AM2 = 1,
    AMEXXT_MOTOR_ID_VERT_AM3 = 2,
    AMEXXT_MOTOR_ID_HOR_AM1 = 3,
    AMEXXT_MOTOR_ID_HOR_AM2 = 4,
    AMEXXT_MOTOR_ID_HOR_AM3 = 5,
    AMEXXT_MOTOR_ID_MAX = 6,
} AMEXXT_MOTOR_ID_TYPE;

typedef enum
{
    AMEXXT_MF_GEO_ID_VERT_AM1 = 0,
    AMEXXT_MF_GEO_ID_VERT_AM2 = 1,
    AMEXXT_MF_GEO_ID_VERT_AM3 = 2,
    AMEXXT_MF_GEO_ID_HOR_AM1 = 3,
    AMEXXT_MF_GEO_ID_HOR_AM2 = 4,
    AMEXXT_MF_GEO_ID_HOR_AM3 = 5,
    AMEXXT_METROFRAME_GEO_ID_MAX = 6,
} AMEXXT_METROFRAME_GEO_ID_TYPE;

typedef enum
{
    AMEXXT_DAC_ID_MOTOR_VERT_AM1 = 0,
    AMEXXT_DAC_ID_MOTOR_VERT_AM2 = 1,
    AMEXXT_DAC_ID_MOTOR_VERT_AM3 = 2,
    AMEXXT_DAC_ID_MOTOR_HOR_AM1 = 3,
    AMEXXT_DAC_ID_MOTOR_HOR_AM2 = 4,
    AMEXXT_DAC_ID_MOTOR_HOR_AM3 = 5,
    AMEXXT_DAC_ID_VALVE_AM1 = 6,
    AMEXXT_DAC_ID_VALVE_AM2 = 7,
    AMEXXT_DAC_ID_VALVE_AM3 = 8,
    AMEXXT_DAC_ID_DIAG0 = 9,
    AMEXXT_DAC_ID_DIAG1 = 10,
    AMEXXT_DAC_ID_MAX = 11,
} AMEXXT_DAC_ID_TYPE;

typedef enum
{
    AMEXXT_OUTPUT_CHANNEL_0 = 0,
    AMEXXT_OUTPUT_CHANNEL_1 = 1,
    AMEXXT_OUTPUT_CHANNEL_MAX = 2,
} AMEXXT_OUTPUT_CHANNEL_TYPE;

typedef enum
{
    AMEXXT_NOISE_SOURCE_OFF = 0,
    AMEXXT_NOISE_SOURCE_SINE = 1,
    AMEXXT_NOISE_SOURCE_WHITE = 2,
    AMEXXT_NOISE_SOURCE_EXTERNAL = 3,
    AMEXXT_NOISE_SOURCE_PINK = 4,
    AMEXXT_NOISE_SOURCE_MAX = 5,
} AMEXXT_NOISE_SOURCE_TYPE;

typedef enum
{
    AMEXXT_MAXBUF_PROX_X1 = 0,
    AMEXXT_MAXBUF_PROX_X2 = 1,
    AMEXXT_MAXBUF_PROX_X3 = 2,
    AMEXXT_MAXBUF_PROX_Z1 = 3,
    AMEXXT_MAXBUF_PROX_Z2 = 4,
    AMEXXT_MAXBUF_PROX_Z3 = 5,
    AMEXXT_MAXBUF_VEL_X1 = 6,
    AMEXXT_MAXBUF_VEL_X2 = 7,
    AMEXXT_MAXBUF_VEL_X3 = 8,
    AMEXXT_MAXBUF_VEL_Z1 = 9,
    AMEXXT_MAXBUF_VEL_Z2 = 10,
    AMEXXT_MAXBUF_VEL_Z3 = 11,
    AMEXXT_MAXBUF_KIN_ENERGY = 12,
    AMEXXT_MAXBUF_AXIS_MAX = 13,
} AMEXXT_MAXBUF_AXES_TYPE;

typedef enum
{
    AMEXXT_MAXBUF_TIME_STAMP_WEEK = 0,
    AMEXXT_MAXBUF_TIME_STAMP_DAY = 1,
    AMEXXT_MAXBUF_TIME_STAMP_HOUR = 2,
    AMEXXT_MAXBUF_TIME_STAMP_MIN = 3,
    AMEXXT_MAXBUF_TIME_STAMP_SEC = 4,
    AMEXXT_MAXBUF_TIME_STAMP_SAMPLES = 5,
    AMEXXT_MAXBUF_TIME_STAMP_MAX = 6,
} AMEXXT_MAXBUF_TIME_STAMP_TYPE;

typedef enum
{
    AMEXXT_STABILITY_DETAIL_ID_1 = 0,
    AMEXXT_STABILITY_DETAIL_ID_2 = 1,
    AMEXXT_STABILITY_DETAIL_ID_3 = 2,
    AMEXXT_STABILITY_DETAIL_ID_4 = 3,
    AMEXXT_STABILITY_DETAIL_ID_5 = 4,
    AMEXXT_STABILITY_DETAIL_ID_MAX = 5,
} AMEXXT_STABILITY_DETAIL_ID_TYPE;

typedef enum
{
    AMEXXT_SANITY_CHECK_AND_LOG = 0,
    AMEXXT_SANITY_CHECK_NO_LOGGING = 1,
    AMEXXT_SANITY_CHECK_DO_NOTHING = 2,
    AMEXXT_SANITY_CHECK_MAX = 3,
} AMEXXT_SANITY_CHECK_MODE_TYPE;

typedef double AMEXXT_PROX_SENSOR_TYPE[0x6];

typedef double AMEXXT_DAC_OUTPUT_TYPE[0xB];

typedef double AMEXXT_DAC_OFFSET_TYPE[0x9];

typedef double AMEXXT_METROFRAME_GEO_TYPE[0x6];

typedef double AMEXXT_MS_VALUES_TYPE[0x6];

typedef double AMEXXT_MOTOR_TEMP_TYPE[0x6];

typedef int AMEXXT_MAXBUF_TYPE_time_stamp_max[0x6];

typedef int AMEXXT_MAXBUF_TYPE_time_stamp_min[0x6];

typedef struct
{
    double max_value;
    AMEXXT_MAXBUF_TYPE_time_stamp_max time_stamp_max;
    double min_value;
    AMEXXT_MAXBUF_TYPE_time_stamp_min time_stamp_min;
} AMEXXT_MAXBUF_TYPE;

typedef AMEXXT_MAXBUF_TYPE AMEXXT_STABILITY_DETAIL_TYPE_stability_detail[0xD];

typedef struct
{
    AMEXXT_STABILITY_DETAIL_TYPE_stability_detail stability_detail;
} AMEXXT_STABILITY_DETAIL_TYPE;

typedef struct
{
    double interval;
    int num_horz_not_ok;
    int num_vert_not_ok;
    int num_overheated;
    int num_overpowered;
    int num_vel_out_bounds;
    int filler;
} AMEXXT_SAFETY_STATISTICS_TYPE;

typedef struct
{
    double power_thresh_horz;
    double power_thresh_vert;
    double max_motor_temp;
    double reset_delay_time;
    double kin_energy_thresh;
    double horz_mode_tolerance;
    double vert_mode_tolerance;
} AMEXXT_FAILSAFE_PARAMETERS_TYPE;

typedef struct
{
    AMEXXT_PROX_SENSOR_TYPE prox_sens;
    double kin_energy;
    AMEXXT_SAFETY_STATISTICS_TYPE safety;
} AMEXXT_SET_SIM2_SENSORS;

typedef double AMEXXT__get_proximity_sensor_values_prox_vals_ptr[0x6];

typedef double AMEXXT__get_motor_temperatures_motor_temps_ptr[0x6];

typedef double AMEXXT__get_metroframe_geo_values_mf_geo_vals_ptr[0x6];

typedef double AMEXXT__get_DAC_output_values_dac_out_vals_ptr[0xB];

typedef double AMEXXT__set_actuator_offsets_offset_ptr[0x9];

typedef double AMEXXT__get_actuator_offsets_offset_ptr[0x9];

typedef double AMEXXT__set_setpoint_setpoint[0x6];

typedef double AMEXXT__get_setpoint_setpoint[0x6];



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int AMEXXT_set_loop_mode(const AMEXXT_LOOP_TYPE_TYPE *loop_type,
	const AMEXXA_LOOP_MODE_TYPE *mode_def);
int AMEXXT_get_loop_mode(const AMEXXT_LOOP_TYPE_TYPE *loop_type,
	AMEXXA_LOOP_MODE_TYPE *mode_def_ptr);
int AMEXXT_get_proximity_sensor_values(AMEXXT__get_proximity_sensor_values_prox_vals_ptr *prox_vals_ptr);
int AMEXXT_get_motor_temperatures(AMEXXT__get_motor_temperatures_motor_temps_ptr *motor_temps_ptr);
int AMEXXT_get_metroframe_geo_values(AMEXXT__get_metroframe_geo_values_mf_geo_vals_ptr *mf_geo_vals_ptr);
int AMEXXT_get_DAC_output_values(AMEXXT__get_DAC_output_values_dac_out_vals_ptr *dac_out_vals_ptr);
int AMEXXT_set_diag_out(const AMEXXT_OUTPUT_CHANNEL_TYPE *target,
	const AMEXXA_DIAGN_DATA_TYPE *source);
int AMEXXT_get_diag_out(const AMEXXT_OUTPUT_CHANNEL_TYPE *target,
	AMEXXA_DIAGN_DATA_TYPE *source);
int AMEXXT_set_noise_injection(const AMEXXA_DIAGN_DATA_TYPE *target,
	const AMEXXT_NOISE_SOURCE_TYPE *noise_type,
	const double *noise_gain,
	const double *noise_freq);
int AMEXXT_get_noise_injection(AMEXXA_DIAGN_DATA_TYPE *target,
	AMEXXT_NOISE_SOURCE_TYPE *noise_type,
	double *noise_gain,
	double *noise_freq);
int AMEXXT_set_output_scaling(const double *diag_gain_0,
	const double *diag_gain_1);
int AMEXXT_get_output_scaling(double *diag_gain_0,
	double *diag_gain_1);
int AMEXXT_set_actuator_offsets(const AMEXXT__set_actuator_offsets_offset_ptr *offset_ptr);
int AMEXXT_get_actuator_offsets(AMEXXT__get_actuator_offsets_offset_ptr *offset_ptr);
int AMEXXT_get_reset_stability_detail(const AMEXXT_STABILITY_DETAIL_ID_TYPE *stability_detail_id,
	AMEXXT_STABILITY_DETAIL_TYPE *stability_detail_ptr);
int AMEXXT_get_stability_detail_id(AMEXXT_STABILITY_DETAIL_ID_TYPE *stab_detail_id_ptr);
int AMEXXT_free_stability_detail_id(const AMEXXT_STABILITY_DETAIL_ID_TYPE *stab_detail_id);
int AMEXXT_get_safety_statistics(AMEXXT_SAFETY_STATISTICS_TYPE *safety_ptr);
int AMEXXT_reset_safety_statistics(void);
int AMEXXT_get_valve_dither_gain(double *gain_ptr);
int AMEXXT_set_setpoint(const AMEXXT__set_setpoint_setpoint *setpoint);
int AMEXXT_get_setpoint(AMEXXT__get_setpoint_setpoint *setpoint);
int AMEXXT_get_sample_and_dither_freq(double *sample_frq,
	double *dither_frq);
int AMEXXT_set_failsafe_parameters(const AMEXXT_FAILSAFE_PARAMETERS_TYPE *fs_params_ptr);
int AMEXXT_get_failsafe_parameters(AMEXXT_FAILSAFE_PARAMETERS_TYPE *fs_params_ptr);
int AMEXXT_set_overdriven_time_limit(const double *time_limit);
int AMEXXT_get_overdriven_time_limit(double *time_limit_ptr);
int AMEXXT_emergency_deflate(void);
int AMEXXT_reset_emergency(void);
int AMEXXT_set_sanity_check_mode(const AMEXXT_SANITY_CHECK_MODE_TYPE *sanity_check_mode);



#endif // _AMEXXT_TC_H_
