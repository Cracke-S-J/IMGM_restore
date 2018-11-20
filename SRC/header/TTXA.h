/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : TT
* 模块名称 : TTXA
* 文件名称 : TTXA.h
* 概要描述 :
*	TT组件TTXA数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _TTXA_H_
#define _TTXA_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/
#define TTXA_MAX_NUMBER_OF_TESTSTEPS 	 0xB 
#define TTXA_MAX_LABEL_LEN 	 0x4F 
#define TTXA_MAX_LABEL_SIZE 	 0x50 
#define TTXA_MAX_DQ_NAME_LEN 	 0x4F 
#define TTXA_MAX_DQ_NAME_SIZE 	 0x50 
#define TTXA_MAX_TEST_NAME_LEN 	 0x4F 
#define TTXA_MAX_TEST_NAME_SIZE 	 0x50 
#define TTXA_MAX_COMMENT_LEN 	 0x4F 
#define TTXA_MAX_COMMENT_SIZE 	 0x50 
#define TTXA_BUTTON_COMMAND_MIN 	 0x64 
#define TTXA_BUTTON_COMMAND_MAX 	 0x69 
#define TTXA_MAX_NUMBER_OF_BACK_COMMANDS 	 0x64 
#define TTXA_BACK_COMMAND_MIN 	 0xC8 
#define TTXA_BACK_COMMAND_MAX 	 0x12C 
#define TTXA_FIRST_CUSTOM_COMMAND 	 0x3E8 



/*-------------------------- Enums and Structs ---------------------------*/

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef unsigned int TTXA_step_id;

typedef enum
{
    TTXA_BUTTON_COMMAND_ONE = 100,
    TTXA_BUTTON_COMMAND_TWO = 101,
    TTXA_BUTTON_COMMAND_THREE = 102,
    TTXA_BUTTON_COMMAND_FOUR = 103,
    TTXA_BUTTON_COMMAND_FIVE = 104,
} TTXA_button_command_enum;

typedef enum
{
    TTXA_STEP_TYPE_UNDEFINED = 0,
    TTXA_STEP_TYPE_USER_INPUT = 1,
    TTXA_STEP_TYPE_USER_ACTION = 2,
    TTXA_STEP_TYPE_MACHINE_ACTION = 3,
    TTXA_STEP_TYPE_RESULT_EVALUATION = 4,
} TTXA_step_type_enum;

typedef enum
{
    TTXA_TEST_MODE_UNDEFINED = 0,
    TTXA_TEST_MODE_NON_INTERACTIVE = 1,
    TTXA_TEST_MODE_INTERACTIVE = 2,
} TTXA_test_mode_enum;

typedef enum
{
    TTXA_IA_BUTTON_TYPE_UNDEFINED = 0,
    TTXA_IA_BUTTON_TYPE_RERUN = 1,
    TTXA_IA_BUTTON_TYPE_SKIP = 2,
    TTXA_IA_BUTTON_TYPE_CONTINUE = 3,
} TTXA_ia_button_type_enum;



#endif // _TTXA_TC_H_
