/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 产品号 : 
* 所属组件 : FS
* 模块名称 : FSXA
* 文件名称 : FSXA.h
* 概要描述 :
*	FS组件FSXA对外接口声明
* 历史记录 :
* 版本    日期    作者    内容
* 1.0
*****************************************************************************/
#ifndef _FSXA_H_ 
#define _FSXA_H_

/*-------------------- 头文件 --------------------*/
#include <base.h>



/*-------------------------------- Defines -------------------------------*/
#define FSXA_MAX_TRANSITIONS 	 0xA 
#define FSXA_MAX_ACTIVE_STATES 	 0xA 
#define FSXA_MAX_COMP_NAME_LEN 	 0xE 
#define FSXA_MAX_COMP_NAME_SIZE 	 0xF 
#define FSXA_MAX_DESC_NAME_LEN 	 0x3F 
#define FSXA_MAX_DESC_NAME_SIZE 	 0x40 
#define FSXA_MAX_EVENT_DESC_LEN 	 0x53 
#define FSXA_MAX_EVENT_DESC_SIZE 	 0x54 
#define FSXA_MAX_STATE_DESC_LEN 	 0x7F 
#define FSXA_MAX_STATE_DESC_SIZE 	 0x80 
#define FSXA_MIN_FSM_NAME_LEN 	 0x3 
#define FSXA_MAX_FSM_NAME_LEN 	 0x2F 
#define FSXA_MAX_FSM_NAME_SIZE 	 0x30 
#define FSXA_MAX_NAME_LEN 	 0x3F 
#define FSXA_MAX_NAME_SIZE 	 0x40 
#define FSXA_FSM_UNLOCKED_ID 	 0xAE 
#define FSXA_MAGIC_NUMBER 	 0xACBE 
#define FSXA_FSM_ROOT_STATE_ID 	 0x-1 
#define FSXA_SEM_TIMEOUT 	 0x3E8 
#define FSXA_NO_EVENT 	 0x-1 
#define FSXA_CONTROL_SERVER_NAME_PREFIX 	 "FS_CONTROL_ " 
#define FSXA_EXTERNAL_ERROR_BASE 	 0x46530000 
#define FSXA_SYS_ERROR 	 0x46530000 
#define FSXA_USAGE_ERROR 	 0x46530001 
#define FSXA_INVALID_TRANS_DATA_ERROR 	 0x46530003 
#define FSXA_FIRST_STATE_ENUM 	 0x0 
#define FSXA_LAST_STATE_ENUM 	 0x3 



/*-------------------------- Enums and Structs ---------------------------*/

typedef char FSXA_fsm_name_string[0x2F];

typedef char FSXA_name_string[0x3F];

typedef struct
{
	int len;
	int max_len;
	FSXA_name_string* array;
} FSXA_state_array;

typedef struct
{
	int len;
	int max_len;
	int* array;
} FSXA_event_varray;

typedef enum
{
	FSXA_STATE_NOT_RUNNING = 0,
	FSXA_STATE_NOT_LOCKED = 1,
	FSXA_STATE_LOCKED = 2,
	FSXA_STATE_RUNNING = 3,
} FSXA_state_enum;

typedef struct
{
	int nr_of_regions;
	int nr_of_vertices;
	int nr_of_events;
	int nr_of_transitions;
	FSXA_fsm_name_string fsm_name;
	bool publish_updates;
} FSXA_allocate_struct;

typedef struct
{
	int from_state;
	int to_state;
	bool fire_transition;
} FSXA_enabled_transitions_struct;

typedef FSXA_enabled_transitions_struct FSXA_transition_info_struct_enabled_transition[0xA];

typedef char FSXA_transition_info_struct_last_event_description[0x53];

typedef char FSXA_transition_info_struct_current_state_description[0x7F];

typedef struct
{
	int magic_number;
	int FSM_lock_id;
	int nr_transitions_allowed;
	FSXA_transition_info_struct_enabled_transition enabled_transition;
	FSXA_transition_info_struct_last_event_description last_event_description;
	FSXA_transition_info_struct_current_state_description current_state_description;
} FSXA_transition_info_struct;

typedef char FSXA_fsm_status_struct_fsm_name[0x3F];

typedef char FSXA_fsm_status_struct_event_description[0x53];

typedef char FSXA_fsm_status_struct_current_state_description[0x7F];

typedef struct
{
	FSXA_fsm_status_struct_fsm_name fsm_name;
	FSXA_fsm_status_struct_event_description event_description;
	FSXA_fsm_status_struct_current_state_description current_state_description;
	FSXA_state_enum state;
} FSXA_fsm_status_struct;

typedef struct
{
	FSXA_transition_info_struct transition;
} FSXA_ddgen_info_struct;


/*-------------------- 对外全局变量声明 --------------------*/








/*----------------------- 对外接口声明 -----------------------*/








#endif // _FSXA_H_

