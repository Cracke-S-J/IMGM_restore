/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 产品号 : 
* 所属组件 : SM
* 模块名称 : SMXA
* 文件名称 : SMXA.h
* 概要描述 :
*	SM组件SMXA对外接口声明
* 历史记录 :
* 版本    日期    作者    内容
* 1.0
*****************************************************************************/
#ifndef _SMXA_H_ 
#define _SMXA_H_

/*-------------------- 头文件 --------------------*/
#include <base.h>



/*-------------------------------- Defines -------------------------------*/
#define SMXA_MAX_DRIVERS 	 0x96 
#define SMXA_ALL_DRIVERS_STR 	 "ALL " 
#define SMXA_JOB_NAME_LEN 	 0x23 
#define SMXA_JOB_NAME_SIZE 	 0x24 
#define SMXA_TASK_NAME_LEN 	 0x3F 
#define SMXA_TASK_NAME_SIZE 	 0x40 
#define SMXA_DRIVER_NAME_LEN 	 0x17 
#define SMXA_DRIVER_NAME_SIZE 	 0x18 
#define SMXA_DRIVER_PHASE_LEN 	 0x17 
#define SMXA_DRIVER_PHASE_SIZE 	 0x18 
#define SMXA_DATA_SET_ABBR_LEN 	 0xF 
#define SMXA_DATA_SET_ABBR_SIZE 	 0x10 
#define SMXA_SUN_STATION 	 0x0 
#define SMXA_WH_STATION 	 0x1 
#define SMXA_MI_STATION 	 0x2 
#define SMXA_WS_STATION 	 0x3 
#define SMXA_IC_STATION 	 0x4 
#define SMXA_CO_STATION 	 0x5 
#define SMXA_AA_STATION 	 0x6 
#define SMXA_HP_STATION 	 0x7 
#define SMXA_LF1_STATION 	 0x8 
#define SMXA_LF2_STATION 	 0x9 
#define SMXA_LF3_STATION 	 0xA 
#define SMXA_LF4_STATION 	 0xB 
#define SMXA_LF5_STATION 	 0xC 
#define SMXA_LF6_STATION 	 0xD 
#define SMXA_HT1_STATION 	 0xE 
#define SMXA_HT2_STATION 	 0xF 
#define SMXA_CT_STATION 	 0x10 
#define SMXA_ZK_STATION 	 0x11 
#define SMXA_LN_STATION 	 0x12 
#define SMXA_DC_STATION 	 0x13 
#define SMXA_WS2_STATION 	 0x14 
#define SMXA_ML1_STATION 	 0x7B 
#define SMXA_ML2_STATION 	 0x7C 
#define SMXA_LH_STATION 	 0x16 
#define SMXA_HA_STATION 	 0x18 
#define SMXA_IL_STATION 	 0x1B 
#define SMXA_WH2_STATION 	 0x1C 
#define SMXA_ST_STATION 	 0x22 
#define SMXA_FR_STATION 	 0x19 
#define SMXA_FR2_STATION 	 0x1D 
#define SMXA_FR3_STATION 	 0x1E 
#define SMXA_FR4_STATION 	 0x21 
#define SMXA_NUMBER_OF_HOSTS 	 0x80 
#define SMXA_HOST_NAME_LENGTH 	 0x50 
#define SMXA_GET_STATUS_TIMEOUT 	 0x708 
#define SMXA_INITIALIZE_TIMEOUT 	 0xE10 
#define SMXA_TERMINATE_TIMEOUT 	 0xE10 



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
	SMXA_STARTED = 0,
	SMXA_NOT_STARTED = 1,
} SMXA_jobStatus;

typedef enum
{
	SMXA_EXPLICIT = 0,
	SMXA_IF_NECESSARY = 1,
} SMXA_importance;





typedef enum
{
	SMXA_NOT_BOOTED = 0,
	SMXA_BUSY_BOOTING = 1,
	SMXA_BOOTED = 2,
} SMXA_bootStatus;

typedef enum
{
	SMXA_TERMINATED = 0,
	SMXA_INITIALIZED = 1,
	SMXA_EXIT_ERROR = 2,
	SMXA_EXIT = 3,
} SMXA_taskState;

typedef enum
{
	SMXA_DRIVER_TERMINATED = 0,
	SMXA_DRIVER_IDLE = 1,
	SMXA_DRIVER_BUSY = 2,
} SMXA_driverState;

typedef struct
{
	SMXA_bootStatus boot_status;
	bool host_present;
} SMXA_hostStatus;

typedef enum
{
	SMXA_ONLY_SPECIFIED_DRIVERS = 0,
	SMXA_ONLY_DEPENDENT_DRIVERS = 1,
	SMXA_BOTH_SPECIFIED_AND_DEPENDENT_DRIVERS = 2,
} SMXA_driverset_spec;

typedef char SMXA_init_option_str_driver[0x18];

typedef struct
{
	SMXA_init_option_str_driver driver;  //0x0
	int filer0;
	int init_option;  //0x1C
} SMXA_init_option_str; //0x20

typedef struct
{
	int driver;
	int init_option;
} SMXA_init_option;

typedef char SMXA_task_name[0x3F];

typedef struct
{
	int len;
	int max_len;
	SMXA_task_name* array;
} SMXA_task_name_array;

typedef enum
{
	SMXA_MAIN_HOST_DOWN = 0,
	SMXA_MAIN_HOST_UP = 1,
	SMXA_MAIN_HOST_PROCESSES_RUNNING = 2,
} SMXA_main_host_monitor_t;

typedef char SMXA_mc_changed_data_set_abbr[0xF];

typedef char SMXA_driver_str_info_driver[0x17];



/*-------------------- 对外全局变量声明 --------------------*/








/*----------------------- 对外接口声明 -----------------------*/

int SMXAreadImportedData(int iParam1);      //add by jiangshan

//TBD函数返回值类型、参数传值or指针不确定-_-
void SMXA_mc_changed(const SMXA_mc_changed_data_set_abbr *data_set_abbr);
void SMXA_read_imported_data(const bool *init_critical);
int SMXA_driver_str_info(const SMXA_driver_str_info_driver *driver,
	bool *driver_enabled);
int SMXA_get_number_of_enabled_drivers(int *enabled_driver_cnt);


int SMXAxITS_initialize(int dirver_list[0x384], SMXA_init_option_str options_str_list[SMXA_MAX_DRIVERS],
	SMXA_importance importance, SMXA_driverset_spec spec, int epc_flags[2]);



#endif // _SMXA_H_

