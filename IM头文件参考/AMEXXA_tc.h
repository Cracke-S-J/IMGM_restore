/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AM
* 模块名称 : AMEXXA
* 文件名称 : AMEXXA_tc.h
* 概要描述 :
*	AM组件AMEXXA数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _AMEXXA_TC_H_
#define _AMEXXA_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <THXA.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    AMEXXA_PNEU_STATE_DOWN = 0,
    AMEXXA_PNEU_STATE_GOING_UP_SOFT = 1,
    AMEXXA_PNEU_STATE_UP_SOFT = 2,
    AMEXXA_PNEU_STATE_GOING_UP = 3,
    AMEXXA_PNEU_STATE_VERT_NOT_OK = 4,
    AMEXXA_PNEU_STATE_VERT_OK = 5,
    AMEXXA_PNEU_STATE_GOING_DOWN = 6,
    AMEXXA_PNEU_STATE_MAX = 7,
} AMEXXA_PNEUMATIC_STATE_TYPE;

typedef enum
{
    AMEXXA_AIRMOUNTS_NOT_DOWN = 0,
    AMEXXA_AIRMOUNTS_DOWN = 1,
    AMEXXA_AIRMOUNTS_MAX = 2,
} AMEXXA_AIRMOUNTS_STATUS_TYPE;

typedef enum
{
    AMEXXA_LOOP_MODE_OPEN_LOOP = 0,
    AMEXXA_LOOP_MODE_CLOSED_LOOP = 1,
    AMEXXA_LOOP_MODE_MAX = 2,
} AMEXXA_LOOP_MODE_TYPE;

typedef enum
{
    AMEXXA_MOTOR_STATUS_OK = 0,
    AMEXXA_MOTOR_STATUS_VERT_NOT_OK = 1,
    AMEXXA_MOTOR_STATUS_OVERHEATED = 2,
    AMEXXA_MOTOR_STATUS_OVERPOWERED = 3,
    AMEXXA_MOTOR_STATUS_MAX = 4,
} AMEXXA_MOTOR_STATUS_TYPE;

typedef enum
{
    AMEXXA_CHECK_ALL = 0,
    AMEXXA_CHECK_ALL_MIN_COMM = 1,
    AMEXXA_CHECK_ALL_AVOID_COMM = 2,
    AMEXXA_DONT_CHECK_PROX = 3,
    AMEXXA_NO_PROX_AVOID_COMM = 4,
    AMEXXA_CHECK_STABILITY_MAX = 5,
} AMEXXA_CHECK_STABILITY_TYPE;

typedef enum
{
    AMEXXA_AIRMOUNTS_OK = 0,
    AMEXXA_AIRMOUNTS_NOK = 1,
    AMEXXA_AIRMOUNTS_STABILITY_MAX = 2,
} AMEXXA_AIRMOUNTS_STABILITY_TYPE;

typedef enum
{
    AMEXXA_VEL_X_AXIS = 0,
    AMEXXA_VEL_Y_AXIS = 1,
    AMEXXA_VEL_Z_AXIS = 2,
    AMEXXA_VEL_Rx_AXIS = 3,
    AMEXXA_VEL_Ry_AXIS = 4,
    AMEXXA_VEL_Rz_AXIS = 5,
    AMEXXA_PROX_X_AXIS = 6,
    AMEXXA_PROX_Y_AXIS = 7,
    AMEXXA_PROX_Z_AXIS = 8,
    AMEXXA_PROX_Rx_AXIS = 9,
    AMEXXA_PROX_Ry_AXIS = 10,
    AMEXXA_PROX_Rz_AXIS = 11,
    AMEXXA_PNEUM_AM1_AXIS = 12,
    AMEXXA_PNEUM_AM2_AXIS = 13,
    AMEXXA_PNEUM_AM3_AXIS = 14,
    AMEXXA_CONTROLLER_AXIS_ID_MAX = 15,
} AMEXXA_CONTROLLER_AXIS_ID_TYPE;

typedef enum
{
    AMEXXA_SENSOR = 0,
    AMEXXA_AXIS_ERROR = 1,
    AMEXXA_CTRL_IN = 2,
    AMEXXA_CTRL_OUT = 3,
    AMEXXA_AXIS_OUT = 4,
    AMEXXA_AXIS_VAR_MAX = 5,
} AMEXXA_AXIS_VAR_TYPE;

typedef enum
{
    AMEXXA_VEL_STEERED = 0,
    AMEXXA_POS_STEERED = 1,
    AMEXXA_ACTUATOR_SYSTEM_ID_MAX = 2,
} AMEXXA_ACTUATOR_SYSTEM_ID_TYPE;

typedef enum
{
    AMEXXA_FXT = 0,
    AMEXXA_FYT = 1,
    AMEXXA_FZT = 2,
    AMEXXA_FXR = 3,
    AMEXXA_FYR = 4,
    AMEXXA_FZR = 5,
    AMEXXA_ACTUATOR_SYSTEM_VAR_MAX = 6,
} AMEXXA_ACTUATOR_SYSTEM_VAR_TYPE;

typedef enum
{
    AMEXXA_MOTOR_HORZ_AM1 = 0,
    AMEXXA_MOTOR_VERT_AM1 = 1,
    AMEXXA_MOTOR_HORZ_AM2 = 2,
    AMEXXA_MOTOR_VERT_AM2 = 3,
    AMEXXA_MOTOR_HORZ_AM3 = 4,
    AMEXXA_MOTOR_VERT_AM3 = 5,
    AMEXXA_VALVE_AM1 = 6,
    AMEXXA_VALVE_AM2 = 7,
    AMEXXA_VALVE_AM3 = 8,
    AMEXXA_ACTUATOR_ID_MAX = 9,
} AMEXXA_ACTUATOR_ID_TYPE;

typedef enum
{
    AMEXXA_ACTUATOR_IN = 0,
    AMEXXA_VEL_LOOP_OUT = 1,
    AMEXXA_PROX_LOOP_OUT = 2,
    AMEXXA_PNEUM_LOOP_OUT = 3,
    AMEXXA_ACTUATOR_VAR_MAX = 4,
} AMEXXA_ACTUATOR_VAR_TYPE;

typedef enum
{
    AMEXXA_MS_SYSTEM_6_GEO = 0,
    AMEXXA_MS_SYSTEM_6_PROX = 1,
    AMEXXA_MEASUREMENT_SYSTEM_ID_MAX = 2,
} AMEXXA_MEASUREMENT_SYSTEM_ID_TYPE;

typedef enum
{
    AMEXXA_MS_XT = 0,
    AMEXXA_MS_YT = 1,
    AMEXXA_MS_ZT = 2,
    AMEXXA_MS_XR = 3,
    AMEXXA_MS_YR = 4,
    AMEXXA_MS_ZR = 5,
    AMEXXA_MEASUREMENT_SYSTEM_VAR_MAX = 6,
} AMEXXA_MEASUREMENT_SYSTEM_VAR_TYPE;

typedef enum
{
    AMEXXA_MF_GEO_HOR_AM1 = 0,
    AMEXXA_MF_GEO_VERT_AM1 = 1,
    AMEXXA_MF_GEO_HOR_AM2 = 2,
    AMEXXA_MF_GEO_VERT_AM2 = 3,
    AMEXXA_MF_GEO_HOR_AM3 = 4,
    AMEXXA_MF_GEO_VERT_AM3 = 5,
    AMEXXA_PROX_HOR_AM1 = 6,
    AMEXXA_PROX_HOR_AM2 = 7,
    AMEXXA_PROX_HOR_AM3 = 8,
    AMEXXA_PROX_VERT_AM1 = 9,
    AMEXXA_PROX_VERT_AM2 = 10,
    AMEXXA_PROX_VERT_AM3 = 11,
    AMEXXA_EXT_INPUT = 12,
    AMEXXA_EXT_1_FF = 13,
    AMEXXA_EXT_2_FF = 14,
    AMEXXA_EXT_3_FF = 15,
    AMEXXA_MTEMP_HOR_AM1 = 16,
    AMEXXA_MTEMP_VERT_AM1 = 17,
    AMEXXA_MTEMP_HOR_AM2 = 18,
    AMEXXA_MTEMP_VERT_AM2 = 19,
    AMEXXA_MTEMP_HOR_AM3 = 20,
    AMEXXA_MTEMP_VERT_AM3 = 21,
    AMEXXA_SENSOR_ID_MAX = 22,
} AMEXXA_SENSOR_ID_TYPE;

typedef enum
{
    AMEXXA_SENSOR_OUT = 0,
    AMEXXA_SENSOR_VAR_MAX = 1,
} AMEXXA_SENSOR_VAR_TYPE;

typedef enum
{
    AMEXXA_STAGE_POS_0 = 0,
    AMEXXA_STAGE_POS_1 = 1,
    AMEXXA_STAGE_POS_2 = 2,
    AMEXXA_STAGE_POS_3 = 3,
    AMEXXA_STAGE_POS_4 = 4,
    AMEXXA_STAGE_POS_MAX = 5,
} AMEXXA_STAGE_POS_TYPE;

typedef enum
{
    AMEXXA_OBJ_AXIS = 0,
    AMEXXA_OBJ_ACTUATOR_SYSTEM = 1,
    AMEXXA_OBJ_ACTUATOR = 2,
    AMEXXA_OBJ_MEASUREMENT_SYSTEM = 3,
    AMEXXA_OBJ_SENSOR = 4,
    AMEXXA_OBJ_FILTER_STAGE = 5,
    AMEXXA_MAX_OBJECT = 6,
} AMEXXA_OBJECT_TYPE;

typedef enum
{
    AMEXXA_NO_EVENT = 0,
    AMEXXA_SOFTWARE_EVENT = 1,
    AMEXXA_TRIGGER_EVENT_MAX = 2,
} AMEXXA_TRIGGER_EVENT_TYPE;

typedef enum
{
    AMEXXA_TRACE_STARTED = 0,
    AMEXXA_TRACE_TRIGGERED = 1,
    AMEXXA_TRACE_READY = 2,
    AMEXXA_TRACE_EVENT_MAX = 3,
} AMEXXA_TRACE_EVENT_TYPE;

typedef enum
{
    AMEXXA_TRACE_ID_ALL_TRACES = 0,
    AMEXXA_TRACE_ID_ALL_EVENT_TRACES = 1,
    AMEXXA_TRACE_ID_WAITING = 2,
    AMEXXA_TRACE_ID_1 = 3,
    AMEXXA_TRACE_ID_2 = 4,
    AMEXXA_TRACE_ID_3 = 5,
    AMEXXA_TRACE_ID_4 = 6,
    AMEXXA_TRACE_ID_5 = 7,
    AMEXXA_TRACE_ID_6 = 8,
    AMEXXA_TRACE_ID_7 = 9,
    AMEXXA_TRACE_ID_8 = 10,
    AMEXXA_TRACE_ID_9 = 11,
    AMEXXA_TRACE_ID_10 = 12,
    AMEXXA_TRACE_ID_11 = 13,
    AMEXXA_TRACE_ID_12 = 14,
    AMEXXA_TRACE_ID_13 = 15,
    AMEXXA_TRACE_ID_14 = 16,
    AMEXXA_TRACE_ID_15 = 17,
    AMEXXA_TRACE_ID_MAX = 18,
} AMEXXA_TRACE_ID_TYPE;

typedef enum
{
    AMEXXA_START_TRACE_READY = 0,
    AMEXXA_START_TRACE_DEFINED = 1,
    AMEXXA_START_TRACE_WAITING = 2,
    AMEXXA_START_TRACE_ID_1 = 3,
    AMEXXA_START_TRACE_ID_2 = 4,
    AMEXXA_START_TRACE_ID_3 = 5,
    AMEXXA_START_TRACE_ID_4 = 6,
    AMEXXA_START_TRACE_ID_5 = 7,
    AMEXXA_START_TRACE_ID_6 = 8,
    AMEXXA_START_TRACE_ID_7 = 9,
    AMEXXA_START_TRACE_ID_8 = 10,
    AMEXXA_START_TRACE_ID_9 = 11,
    AMEXXA_START_TRACE_ID_10 = 12,
    AMEXXA_START_TRACE_ID_11 = 13,
    AMEXXA_START_TRACE_ID_12 = 14,
    AMEXXA_START_TRACE_ID_13 = 15,
    AMEXXA_START_TRACE_ID_14 = 16,
    AMEXXA_START_TRACE_ID_15 = 17,
    AMEXXA_START_TRACE_MAX = 18,
} AMEXXA_START_TRACE_TYPE;

typedef enum
{
    AMEXXA_TRACE_STATE_UNDEFINED = 0,
    AMEXXA_TRACE_STATE_WAITING = 1,
    AMEXXA_TRACE_STATE_STARTED = 2,
    AMEXXA_TRACE_STATE_READY = 3,
    AMEXXA_TRACE_STATE_MAX = 4,
} AMEXXA_TRACE_STATE_TYPE;

typedef enum
{
    AMEXXA_TRACE_STATUS_ALL_WAITING = 0,
    AMEXXA_TRACE_STATUS_ID_1 = 1,
    AMEXXA_TRACE_STATUS_ID_2 = 2,
    AMEXXA_TRACE_STATUS_ID_3 = 3,
    AMEXXA_TRACE_STATUS_ID_4 = 4,
    AMEXXA_TRACE_STATUS_ID_5 = 5,
    AMEXXA_TRACE_STATUS_ID_6 = 6,
    AMEXXA_TRACE_STATUS_ID_7 = 7,
    AMEXXA_TRACE_STATUS_ID_8 = 8,
    AMEXXA_TRACE_STATUS_ID_9 = 9,
    AMEXXA_TRACE_STATUS_ID_10 = 10,
    AMEXXA_TRACE_STATUS_ID_11 = 11,
    AMEXXA_TRACE_STATUS_ID_12 = 12,
    AMEXXA_TRACE_STATUS_ID_13 = 13,
    AMEXXA_TRACE_STATUS_ID_14 = 14,
    AMEXXA_TRACE_STATUS_ID_15 = 15,
    AMEXXA_TRACE_STATUS_MAX = 16,
} AMEXXA_TRACE_STATUS_TYPE;

typedef enum
{
    AMEXXA_TRACE_TRIGGER_START = 0,
    AMEXXA_TRACE_TRIGGER_STOP = 1,
    AMEXXA_TRACE_TRIGGER_MAX = 2,
} AMEXXA_TRACE_TRIGGER_TYPE;

typedef enum
{
    AMEXXA_IEEE_FLOAT_ID = 0,
    AMEXXA_BITSTR_ID = 1,
} AMEXXA_ieee_float_id_enum;

typedef char AMEXXA_CTRL_STATE_TYPE_version[0x3C];

typedef struct
{
    AMEXXA_CTRL_STATE_TYPE_version version;
    AMEXXA_PNEUMATIC_STATE_TYPE pneumatic_status;
    AMEXXA_AIRMOUNTS_STATUS_TYPE airmounts_status;
    AMEXXA_LOOP_MODE_TYPE inertial_feedback_loop;
    AMEXXA_LOOP_MODE_TYPE pneumatic_loop;
    AMEXXA_LOOP_MODE_TYPE proximity_loop;
    AMEXXA_MOTOR_STATUS_TYPE motor_0_status;
    AMEXXA_MOTOR_STATUS_TYPE motor_1_status;
    AMEXXA_MOTOR_STATUS_TYPE motor_2_status;
    AMEXXA_MOTOR_STATUS_TYPE motor_3_status;
    AMEXXA_MOTOR_STATUS_TYPE motor_4_status;
    AMEXXA_MOTOR_STATUS_TYPE motor_5_status;
} AMEXXA_CTRL_STATE_TYPE;

typedef struct
{
    AMEXXA_CONTROLLER_AXIS_ID_TYPE axis_id;
    AMEXXA_AXIS_VAR_TYPE variable_id;
} AMEXXA_AXIS_DIAGN_DATA_TYPE;

typedef struct
{
    AMEXXA_ACTUATOR_SYSTEM_ID_TYPE actuator_system_id;
    AMEXXA_ACTUATOR_SYSTEM_VAR_TYPE variable_id;
} AMEXXA_ACT_SYST_DIAGN_DATA_TYPE;

typedef struct
{
    AMEXXA_ACTUATOR_ID_TYPE actuator_id;
    AMEXXA_ACTUATOR_VAR_TYPE variable_id;
} AMEXXA_ACTUATOR_DIAGN_DATA_TYPE;

typedef struct
{
    AMEXXA_MEASUREMENT_SYSTEM_ID_TYPE measurement_system_id;
    AMEXXA_MEASUREMENT_SYSTEM_VAR_TYPE variable_id;
} AMEXXA_MEAS_SYST_DIAGN_DATA_TYPE;

typedef struct
{
    AMEXXA_SENSOR_ID_TYPE sensor_id;
    AMEXXA_SENSOR_VAR_TYPE variable_id;
} AMEXXA_SENSOR_DIAGN_DATA_TYPE;

typedef struct
{
    AMEXXA_CONTROLLER_AXIS_ID_TYPE controller_id;
    AMEXXA_STAGE_POS_TYPE variable_id;
} AMEXXA_FILTER_STAGE_DIAGN_DATA_TYPE;

typedef struct
{
    AMEXXA_OBJECT_TYPE element;
    int filler0;
    union
    {
        AMEXXA_MEAS_SYST_DIAGN_DATA_TYPE meas_syst;
        AMEXXA_AXIS_DIAGN_DATA_TYPE axis;
        AMEXXA_ACT_SYST_DIAGN_DATA_TYPE act_syst;
        AMEXXA_ACTUATOR_DIAGN_DATA_TYPE actuator;
        AMEXXA_SENSOR_DIAGN_DATA_TYPE sensor;
        AMEXXA_FILTER_STAGE_DIAGN_DATA_TYPE filter_stage;
    } spec;
} AMEXXA_DIAGN_DATA_TYPE;

typedef struct
{
    AMEXXA_DIAGN_DATA_TYPE data_id;
    int update_rate;
    int num_samples;
    AMEXXA_TRIGGER_EVENT_TYPE stop_trigger;
} AMEXXA_TRACE_PARMS_TYPE;

typedef double AMEXXA_GET_TRACE_DATA_TYPE_trace_buffer[0x800];

typedef struct
{
    int nbr_trace_values;
    AMEXXA_TRACE_STATE_TYPE trace_state;
    int samples_to_trace;
    AMEXXA_TRACE_TRIGGER_TYPE stop_trigger_type;
    int trace_update_rate;
    AMEXXA_DIAGN_DATA_TYPE trace_data;
    double sample_period;
    int nr_valid_floats;
    AMEXXA_GET_TRACE_DATA_TYPE_trace_buffer trace_buffer;
} AMEXXA_GET_TRACE_DATA_TYPE;

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef float AMEXXA_IEEE_FLOAT;

typedef struct
{
    AMEXXA_ieee_float_id_enum element;
    int filler0;
    union
    {
        AMEXXA_IEEE_FLOAT flt;
        int bitstr;
    } spec;
} AMEXXA_IEEE_FLOAT_union_t;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int AMEXXA_get_controller_state(AMEXXA_CTRL_STATE_TYPE *ctrl_state_ptr);
int AMEXXA_get_stability_status(const AMEXXA_CHECK_STABILITY_TYPE *check,
	AMEXXA_AIRMOUNTS_STABILITY_TYPE *stability_ptr);
int AMEXXA_set_sim_mode(const THXA_SIM_MODE *sim_mode,
	const THXA_TRACE_MODE *trace_mode,
	const THXA_REQ_MODE *data_mode);
int AMEXXA_get_sim_mode(THXA_SIM_MODE *sim_mode,
	THXA_TRACE_MODE *trace_mode,
	THXA_REQ_MODE *data_mode);
int AMEXXA_define_trace(const AMEXXA_TRACE_PARMS_TYPE *trace_data_ptr,
	AMEXXA_TRACE_ID_TYPE *trace_id_ptr);
int AMEXXA_start_trace(const AMEXXA_START_TRACE_TYPE *trace_start_id);
int AMEXXA_stop_trace(const AMEXXA_TRACE_ID_TYPE *trace_id);
int AMEXXA_get_trace(const AMEXXA_TRACE_ID_TYPE *trace_id,
	AMEXXA_GET_TRACE_DATA_TYPE **trace_data_ptr);
int AMEXXA_deallocate_trace(const AMEXXA_TRACE_ID_TYPE *trace_id);
int AMEXXA_wait_for_trace_event(const AMEXXA_TRACE_ID_TYPE *trace_buffer_id,
	const AMEXXA_TRACE_EVENT_TYPE *event_id,
	const int *time_out,
	bool *event_occurred_ptr);



#endif // _AMEXXA_TC_H_
