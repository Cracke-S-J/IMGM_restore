/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 产品号 : 
* 所属组件 : TM
* 模块名称 : TMXA
* 文件名称 : TMXA.h
* 概要描述 :
*	TM组件TMXA对外接口声明
* 历史记录 :
* 版本    日期    作者    内容
* 1.0
*****************************************************************************/
#ifndef _TMXA_H_ 
#define _TMXA_H_

/*-------------------- 头文件 --------------------*/
#include <base.h>



/*-------------------- 宏定义 --------------------*/








/*----------------------- 枚举定义 -----------------------*/







/*------------------------ 结构体 ------------------------*/

typedef enum
{
	TMXA_INPUT_PHASE = 0,
	TMXA_EXEC_PHASE = 1,
	TMXA_NORMAL_PHASE = 2,
	TMXA_NO_PHASE = 3,
	TMXA_GET_VERSION_PHASE = 4,
} TMXA_phase;

typedef enum
{
	TMXA_TEST_STATUS_UNDEFINED = 0,
	TMXA_TEST_STATUS_INVALID_INPUT = 1,
	TMXA_TEST_STATUS_ABORTED = 2,
	TMXA_TEST_STATUS_FAILED = 3,
	TMXA_TEST_STATUS_FINISHED = 4,
} TMXA_test_status_enum;

typedef enum
{
	TMXA_MEASUREMENT_QUALITY_UNDEFINED = 0,
	TMXA_MEASUREMENT_QUALITY_NA = 1,
	TMXA_MEASUREMENT_QUALITY_NOT_CALCULATED = 2,
	TMXA_MEASUREMENT_QUALITY_NOK = 3,
	TMXA_MEASUREMENT_QUALITY_OK = 4,
} TMXA_measurement_quality_enum;

typedef enum
{
	TMXA_TEST_RESULT_UNDEFINED = 0,
	TMXA_TEST_RESULT_NA = 1,
	TMXA_TEST_RESULT_NOT_CALCULATED = 2,
	TMXA_TEST_RESULT_OUT_OF_LIMITS = 3,
	TMXA_TEST_RESULT_IN_LIMITS = 4,
} TMXA_test_result_enum;

typedef enum
{
	TMXA_MC_STATUS_UNDEFINED = 0,
	TMXA_MC_STATUS_NA = 1,
	TMXA_MC_STATUS_NOT_CALCULATED = 2,
	TMXA_MC_STATUS_NOT_SAVED = 3,
	TMXA_MC_STATUS_SAVE_FAILED = 4,
	TMXA_MC_STATUS_SAVED = 5,
	TMXA_MC_STATUS_PARTIALLY_SAVED = 6,
} TMXA_mc_status_enum;

typedef enum
{
	TMXA_TEST_RUN_RESULT_UNDEFINED = 0,
	TMXA_TEST_RUN_RESULT_CLEAR = 1,
	TMXA_TEST_RUN_RESULT_NOK = 2,
	TMXA_TEST_RUN_RESULT_FINISHED = 3,
	TMXA_TEST_RUN_RESULT_OK = 4,
} TMXA_test_run_result_enum;

typedef struct
{
	int error_code;
	TMXA_test_status_enum test_status;
	TMXA_measurement_quality_enum measurement_quality;
	TMXA_test_result_enum test_result;
	TMXA_mc_status_enum mc_status;
} TMXA_test_run_result_struct;

typedef char TMXA_path_component[0x3E];

typedef TMXA_path_component TMXA_test_path_component[0x14];

typedef struct
{
	int nr_components;
	TMXA_test_path_component component;
} TMXA_test_path;

typedef char TMXA_test_run_result_string[0x27];

typedef char TMXA_backup_mc_struct_mc_filename[0xFF];

typedef char TMXA_backup_mc_struct_mc_dd_type[0xFF];

typedef struct
{
	TMXA_backup_mc_struct_mc_filename mc_filename;
	TMXA_backup_mc_struct_mc_dd_type mc_dd_type;
} TMXA_backup_mc_struct;

typedef TMXA_backup_mc_struct TMXA_backup_mc_array[0x4B];

typedef char TMXA_get_test_name_test_name[0x40];


/*-------------------- 对外全局变量声明 --------------------*/









/*----------------------- 对外接口声明 -----------------------*/


//TBD函数返回值类型、参数传值or指针不确定-_-
int TMXA_phase_req(TMXA_phase *phase_ptr);
int TMXA_get_test_name(TMXA_get_test_name_test_name test_name);
int TMXA_get_test_path(TMXA_test_path *test_path_ptr);
int TMXA_report_test_run_start(void);
int TMXA_report_execution_of_test_steps_has_finished(void);
int TMXA_report_test_run_result(const TMXA_test_run_result_struct *test_run_result_ptr);
int TMXA_determine_test_run_result(const TMXA_test_run_result_struct *detailed_result_ptr,
	TMXA_test_run_result_enum *test_run_result_ptr,
	int *numeric_test_run_result_ptr);
int TMXA_determine_test_run_result_gui_string(const TMXA_test_run_result_struct *detailed_result_ptr,
	TMXA_test_run_result_string *test_run_result_gui_string);
int TMXA_converge_mechanism_backup_mc(const TMXA_backup_mc_array *files_to_backup);
int TMXA_converge_mechanism_request_to_repeat(bool *repeat_allowed_ptr);
//int TMXA_get_test_id(varstring *test_id_ptr);
//int TMXA_set_test_id(const varstring *test_id_ptr);



/*--------------------------------------------------------------------
* Parameters	:
* 	-input      :
test_param_version_number -version number of test input parameters
input_func -pointer to input function of test, or NULL
exec_func -pointer to exec function of test, or NULL
normal_func -pointer to normal function of test, or NULL
* 	-input/output	: <none>
* 	-output	   : <none>
* Returns	:
OK - success (error_code = 0)
* Purpose	: Interface function between tests and TM.
After a test is loaded a message is sent to TM to indicate the
executable is ready to execute input/exec/normal functions.
From then on this function waits for a message from TM that
indicates which function must be executed and acts accordingly.
The result of each function execution is sent to TM.
--------------------------------------------------------------------*/
extern void TMXA_exec_test(int test_param_version_number,
	int(*input_func)(bool parms_available,
		void* parms_in_ptr,
		void **parms_out_ptr_ptr,
		int *nbytes),
	int(*exec_func)(void *parms_in_ptr),
	int(*normal_func)(void));



/*--------------------------------------------------------------------
* Parameters	:
* 	-input      :
* 	-input/output	:
* 	-output	   :
* Returns	:
OK - success (error_code = 0)
* Purpose	:
--------------------------------------------------------------------*/
extern int TMXA_new_test_log(char **);

/*--------------------------------------------------------------------
* Parameters	:
* 	-input      :
* 	-input/output	:
* 	-output	   :
* Returns	:
OK - success (error_code = 0)
* Purpose	:
--------------------------------------------------------------------*/
extern int TMXA_enable_stop_test_req(void);

/*--------------------------------------------------------------------
* Parameters	:
* 	-input      :
* 	-input/output	:
* 	-output	   :
* Returns	:
OK - success (error_code = 0)
* Purpose	:
--------------------------------------------------------------------*/
extern int TMXA_disable_stop_test_req(void);

/*--------------------------------------------------------------------
* Parameters	:
* 	-input      :
* 	-input/output	:
* 	-output	   :
* Returns	:
OK - success (error_code = 0)
* Purpose	:
--------------------------------------------------------------------*/
extern int TMXA_start_child_test_exec_phase(int test_param_version_nr,
	void **test_params,
	int params_size,
	char test_id[],
	int *childreturn);

/*--------------------------------------------------------------------
* Parameters	:
* 	-input      :
* 	-input/output	:
* 	-output	   :
* Returns	:
OK - success (error_code = 0)
* Purpose	:
--------------------------------------------------------------------*/
extern int TMXA_start_child_test_input_phase(int test_param_version_nr,
	bool params_available,
	void **test_params,
	int *params_size,
	char test_id[],
	int *childreturn);

/*--------------------------------------------------------------------
* Parameters	:
* 	-input      :
* 	-input/output	:
* 	-output	   :
* Returns	:
OK - success (error_code = 0)
* Purpose	:
--------------------------------------------------------------------*/
extern int TMXA_start_child_test(char test_id[4 + 1],
	int *childreturn);

/*--------------------------------------------------------------------
* Parameters	:
* 	-input      :
* 	-input/output	:
* 	-output	   :
* Returns	:
OK - success (error_code = 0)
* Purpose	:
--------------------------------------------------------------------*/
extern int TMXA_get_child_log(char *test_id,
	int versionnr,
	char **logspec);

/*--------------------------------------------------------------------
* Parameters	:
* 	-input      :
* 	-input/output	:
* 	-output	   :
* Returns	:
OK - success (error_code = 0)
* Purpose	:
--------------------------------------------------------------------*/
extern int TMXA_stop_test_req(bool *stopreply);







#endif // _TMXA_H_

