
#include <TMXA.h>






int TMXA_phase_req(TMXA_phase *phase_ptr)
{
	return 0;
}
int TMXA_get_test_name(TMXA_get_test_name_test_name test_name)
{
	return 0;
}
int TMXA_get_test_path(TMXA_test_path *test_path_ptr)
{
	return 0;
}
int TMXA_report_test_run_start(void)
{
	return 0;
}
int TMXA_report_execution_of_test_steps_has_finished(void)
{
	return 0;
}
int TMXA_report_test_run_result(const TMXA_test_run_result_struct *test_run_result_ptr)
{
	return 0;
}
int TMXA_determine_test_run_result(const TMXA_test_run_result_struct *detailed_result_ptr,
	TMXA_test_run_result_enum *test_run_result_ptr,
	int *numeric_test_run_result_ptr)
{
	return 0;
}
int TMXA_determine_test_run_result_gui_string(const TMXA_test_run_result_struct *detailed_result_ptr,
	TMXA_test_run_result_string *test_run_result_gui_string)
{
	return 0;
}
int TMXA_converge_mechanism_backup_mc(const TMXA_backup_mc_array *files_to_backup)
{
	return 0;
}
int TMXA_converge_mechanism_request_to_repeat(bool *repeat_allowed_ptr) 
{
	return 0;
}



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
	int(*normal_func)(void))
{
	return;
}



/*--------------------------------------------------------------------
* Parameters	:
* 	-input      :
* 	-input/output	:
* 	-output	   :
* Returns	:
OK - success (error_code = 0)
* Purpose	:
--------------------------------------------------------------------*/
extern int TMXA_new_test_log(char **pptr)
{
	return 0;
}

/*--------------------------------------------------------------------
* Parameters	:
* 	-input      :
* 	-input/output	:
* 	-output	   :
* Returns	:
OK - success (error_code = 0)
* Purpose	:
--------------------------------------------------------------------*/
extern int TMXA_enable_stop_test_req(void)
{
	return 0;
}

/*--------------------------------------------------------------------
* Parameters	:
* 	-input      :
* 	-input/output	:
* 	-output	   :
* Returns	:
OK - success (error_code = 0)
* Purpose	:
--------------------------------------------------------------------*/
extern int TMXA_disable_stop_test_req(void)
{
	return 0;
}

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
	int *childreturn)
{
	return 0;
}

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
	int *childreturn)
{
	return 0;
}

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
	int *childreturn)
{
	return 0;
}

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
	char **logspec)
{
	return 0;
}

/*--------------------------------------------------------------------
* Parameters	:
* 	-input      :
* 	-input/output	:
* 	-output	   :
* Returns	:
OK - success (error_code = 0)
* Purpose	:
--------------------------------------------------------------------*/
extern int TMXA_stop_test_req(bool *stopreply)
{
	return 0;
}




