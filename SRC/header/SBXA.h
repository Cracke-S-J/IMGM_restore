/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 产品号 : 
* 所属组件 : SB
* 模块名称 : SBXA
* 文件名称 : SBXA.h
* 概要描述 :
*	SB组件SMXA数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
* 1.0
*****************************************************************************/
#ifndef _SBXA_H_ 
#define _SBXA_H_

/*-------------------- 头文件 --------------------*/
#include <base.h>



/*-------------------------------- Defines -------------------------------*/
#define SBXA_SYNC_STATE_MIN 	 0x0 
#define SBXA_SYNC_STATE_MAX 	 0x10 
#define SBXA_QUEUE_STATE_MIN 	 0x0 
#define SBXA_QUEUE_STATE_MAX 	 0x5 
#define SBXA_MAX_ENVELOPE_DEF_NAME_LEN 	 0x1F 
#define SBXA_ACTION_PARAMS_ENVELOPE_SIZE 	 0x15F90 
#define SBXA_RESULTS_ENVELOPE_SIZE 	 0x2EE0 
#define SBXA_SIM1_MIN_SCAN_TIME 	 0.000000000000000 
#define SBXA_SIM1_MIN_PREP_TIME 	 0.005000000000000 
#define SBXA_MAX_DURATION 	 0x12C 
#define SBXA_MAX_NR_DURATION_INTERVALS 	 0x10 
#define SBXA_ROUNDING_DIRECTION_MIN 	 0x0 
#define SBXA_ROUNDING_DIRECTION_MAX 	 0x3 
#define SBXA_CALCULATING_SS_TIMEOUT 	 0x1E 
#define SBXA_SCAN_FCN_TIMEOUT 	 0x3C 



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
	SBXA_SYNC_STATE_IDLE = 0,
	SBXA_SYNC_STATE_EXP_START = 1,
	SBXA_SYNC_STATE_EXP_SCAN = 2,
	SBXA_SYNC_STATE_AL_START = 3,
	SBXA_SYNC_STATE_AL_SCAN = 4,
	SBXA_SYNC_STATE_IS_START = 5,
	SBXA_SYNC_STATE_IS_SCAN = 6,
	SBXA_SYNC_STATE_LS_START = 7,
	SBXA_SYNC_STATE_LS_SCAN = 8,
	SBXA_SYNC_STATE_SPARE_1 = 9,
	SBXA_SYNC_STATE_SPARE_2 = 10,
	SBXA_SYNC_STATE_ZD_START = 11,
	SBXA_SYNC_STATE_ZD_SCAN = 12,
	SBXA_SYNC_STATE_DIAGN_TRIG = 13,
	SBXA_SYNC_STATE_STOP = 14,
	SBXA_SYNC_STATE_ERROR = 15,
} SBXA_sync_state_enum;

typedef enum
{
	SBXA_IDLE = 0,
	SBXA_QUEUE_EMPTY = 1,
	SBXA_QUEUE_PARTLY_FILLED = 2,
	SBXA_QUEUE_FULL = 3,
	SBXA_UNKNOWN = 4,
} SBXA_queue_state_enum;

typedef char SBXA_action_params_struct_definition_name[0x1F];

typedef char SBXA_action_params_struct_envelope[0x15F90];

typedef struct
{
	SBXA_action_params_struct_definition_name definition_name;
	int envelope_size;
	SBXA_action_params_struct_envelope envelope;
} SBXA_action_params_struct;

typedef char SBXA_action_results_struct_definition_name[0x1F];

typedef char SBXA_action_results_struct_result[0x2EE0];

typedef struct
{
	SBXA_action_results_struct_definition_name definition_name;
	int result_size;
	SBXA_action_results_struct_result result;
} SBXA_action_results_struct;

typedef struct
{
	double min_duration;
	double max_duration;
} SBXA_timing_interval_struct;

typedef SBXA_timing_interval_struct SBXA_timing_negotiation_struct_interval[0x10];

typedef struct
{
	int nr_of_intervals;
	SBXA_timing_negotiation_struct_interval interval;
} SBXA_timing_negotiation_struct;

typedef enum
{
	SBXA_ROUND_UP = 0,
	SBXA_ROUND_DOWN = 1,
	SBXA_ROUND_CLOSEST = 2,
} SBXA_rounding_direction_enum;

typedef enum
{
	SBXA_SYNC_BUS_EXPOSE = 0,
	SBXA_SYNC_BUS_MEASURE = 1,
} SBXA_sync_bus_enum;

typedef enum
{
	SBXA_SYNC_BUS_EVENT = 0,
	SBXA_SUBSYSTEM_EVENT = 1,
} SBXA_scan_type_enum;



#endif // _SBXA_H_
