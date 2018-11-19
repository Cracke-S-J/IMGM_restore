/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AV
* 模块名称 : AVXA
* 文件名称 : AVXA_tc.h
* 概要描述 :
*	AV组件AVXA数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _AVXA_TC_H_
#define _AVXA_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/
#define AVXA_MAX_CALL_ASML_TIME_LEN 	 0xFF 
#define AVXA_MAX_CALL_ASML_TIME_SIZE 	 0x100 
#define AVXA_MAX_ERROR_TIME_LEN 	 0xFF 
#define AVXA_MAX_ERROR_TIME_SIZE 	 0x100 
#define AVXA_MAX_USERNAME_STRING_LEN 	 0x18 
#define AVXA_MAX_USERNAME_STRING_SIZE 	 0x19 
#define AVXA_MAX_PASSWORD_STRING_LEN 	 0x18 
#define AVXA_MAX_PASSWORD_STRING_SIZE 	 0x19 
#define AVXA_MAX_TRANSITION_DATA_LEN 	 0xEF 
#define AVXA_MAX_TRANSITION_DATA_SIZE 	 0xF0 
#define AVXA_MAX_TRANSITION_KEY_LEN 	 0x50 
#define AVXA_MAX_TRANSITION_KEY_SIZE 	 0x51 
#define AVXA_FUNC_NAME_LEN 	 0x4A 
#define AVXA_FUNC_NAME_SIZE 	 0x4B 
#define AVXA_DP_ROOT_ERROR_STORE 	 "intern.AV.event.root_error " 
#define AVXA_DP_CALL_ASML_STORE 	 "intern.AV.event.call_asml " 
#define AVXA_DP_INSIGHT_ROOT_ERROR_STORE 	 "intern.AV.event.insight_root_error " 
#define AVXA_DP_TRANSITION_INFO_STORE 	 "intern.AV.event.transition_info " 



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    AVXA_maintenance_session_idle = 0,
    AVXA_maintenance_session_active = 1,
    AVXA_maintenance_session_undefined = 2,
} AVXA_maintenance_session_state;

typedef char AVXA_call_asml_timestamp_t[0x100];

typedef char AVXA_username_t[0x18];

typedef char AVXA_transition_data_value_t[0xF0];

typedef char AVXA_password_t[0x18];

typedef char AVXA_transition_key_t[0x50];

typedef struct
{
    AVXA_call_asml_timestamp_t call_asml_timestamp;
} AVXA_call_asml_info_t;

typedef char AVXA_error_timestamp_t[0x100];

typedef struct
{
    AVXA_transition_data_value_t error_code;
    AVXA_transition_data_value_t error_text;
    AVXA_transition_data_value_t error_time;
} AVXA_root_error_info_t;

typedef struct
{
    AVXA_transition_key_t transition_key;
} AVXA_transition_info_t;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
void AVXA_start_application(void);
int AVXA_request_remove_data_files(int *logical_id_p);
int AVXA_get_result_remove_data_files(const int *logical_id);
int AVXA_get_session_status(bool *session_state);
int AVXA_store_session_status(const bool *session_state);
int AVXA_get_latest_root_error_info(AVXA_root_error_info_t *root_error_info,
	AVXA_root_error_info_t *insight_root_error_info);
int AVXA_get_latest_call_asml_info(AVXA_call_asml_info_t *call_asml_info);
int AVXA_get_latest_transition_info(AVXA_transition_info_t *transition_info);
int AVXA_verify_password(const AVXA_username_t *username,
	const AVXA_password_t *password,
	bool *password_ok);
int AVXA_clear_session_data(void);



#endif // _AVXA_TC_H_
