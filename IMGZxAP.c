#include <stdio.h>
#include <setjmp.h>
#include <memory.h>
#include <IMGZxAP.h>
#include <IMGZxAP_extern.h>
#include <base.h>
#include <IMGZ_tc.h>
#include <TTXAxAP.h>
#include <DQXA.h>
#include <PLXA.h>
#include <ERXA.h>
#include <THXA.h>
#include "DDXA.h"
#include <TTXA.h>
#include <IMGZxTC_tc.h>
#include <CMXA.h>
#include <SMXA.h>
#include <AMXAxSTAB_tc.h>
#include <IHCLxIMM_tc.h>

//jmp_buf ERXA_current_env;
DQXA_handle_t *IMGZxAP_functions_dq_handle_ptr = NULL;
int do_chuck[2];
IMGZxAP_do_combination do_combination[8];
IMGZxAP_imm_startup_state_struct IMGZxAP_imm_startup_state;
int imgzxap_input[6];        //imgzxap_input应该是IMGZ_input_struct类型的，但IMGZ_input_struct里面少了一个bool
IMGZxTC_tc_struct imgzxap_tc;//0xC8

//sub_1347C

int IMGZxAP_functions_get_callbacks_cb(IMGZxAP_i0 *i0, IMGZxAP_func_ptr *cb_ptr)
{
	char *psErrorText;
	int *var_4;
	int returnValue;
	if (i0 == NULL)
	{
		THXAtrace("IMGZ",1, "IMGZxAP_functions_get_callbacks_cb", "> (cb_ptr=%p)", cb_ptr);
	}
	else
	{
		//ld    [%i0+0xC], %o0
		THXAtrace(i0->unc0xC, 1, "IMGZxAP_functions_get_callbacks_cb", "> (cb_ptr=%p)", cb_ptr);
	}
	var_4 = NULL;
	if (cb_ptr == NULL)
	{
		psErrorText = ERXAmakeContext("Verification by %s failed: '%s' not TRUE", "IMGZxAP_functions_get_callbacks_cb", "(cb_ptr != NULL)");
		ERXAlogExceptionSingleLink_id(0x494D5C00, 0, 0, "IMGZxAP_functions.c", 0xBF, 0, psErrorText);
		returnValue = *var_4;
		if (returnValue != 0)
		{
			//loc_136C4
			if (i0 == NULL)
			{
				THXAtrace("IMGZ", 1, "IMGZxAP_functions_get_callbacks_cb", "< (*cb_ptr=<?>), returnValue=%R", returnValue);
			}
			else
			{
				//ld  [%i0+0xC], %o0
				THXAtrace(i0->unc0xC, 1, "IMGZxAP_functions_get_callbacks_cb", "< (*cb_ptr=<?>), returnValue=%R", returnValue);
			}
			return returnValue;
		}
		//else  loc_1353C
	}
	//else  loc_1353C
	//loc_1353C
	//i1[] 赋值
	cb_ptr->clear_result_parameters = imgzxap_functions_clear_result_parameters_cb;
	cb_ptr->execute_step_and_update_results = imgzxap_functions_execute_step_and_update_results_cb;
	cb_ptr->get_time_limits_for_step = imgzxap_functions_get_time_limits_for_step_cb;
	cb_ptr->should_step_be_executed = imgzxap_functions_should_step_be_executed_cb;
	cb_ptr->save_and_activate_mc = imgzxap_functions_save_and_activate_mc_cb;
	cb_ptr->validate_input_parameters = imgzxap_functions_validate_input_parameters_cb;
	cb_ptr->install_custom_services = imgzxap_functions_install_custom_services_cb;
	cb_ptr->create_data_structure = imgzxap_functions_create_data_structure_cb;
	cb_ptr->setup_data_structure = imgzxap_functions_setup_data_structure_cb;
	cb_ptr->destroy_data_structure = imgzxap_functions_destroy_data_structure_cb;
	cb_ptr->clean_up_machine = imgzxap_functions_clean_up_machine_cb;
	cb_ptr->get_config = imgzxap_functions_get_config_cb;
	cb_ptr->execute_service = imgzxap_functions_execute_service_cb;
	cb_ptr->get_result_check = imgzxap_functions_get_result_check_cb;
	cb_ptr->recovery_on_error = imgzxap_functions_recovery_on_error_cb;
	cb_ptr->recovery_on_stop = imgzxap_functions_recovery_on_stop_cb;
	returnValue = *var_4;
	if (returnValue != 0)
	{
		//loc_136C4
		if (i0 == NULL)
		{
			THXAtrace("IMGZ", 1, "IMGZxAP_functions_get_callbacks_cb", "< (*cb_ptr=<?>), returnValue=%R", returnValue);
		}
		else
		{
			//ld  [%i0+0xC], %o0
			THXAtrace(i0->unc0xC, 1, "IMGZxAP_functions_get_callbacks_cb", "< (*cb_ptr=<?>), returnValue=%R", returnValue);
		}
		return returnValue;
	}
	if (i0 == NULL)
	{
		if (cb_ptr == NULL)
		{//o4 = 0
			THXAtrace("IMGZ",1, "IMGZxAP_functions_get_callbacks_cb", "< ((*cb_ptr).clear_result_parameters=%V%p (*cb_ptr).execute_service=%V%p (*cb_ptr).execute_step_and_update_results=%V%p (*cb_ptr).get_time_limits_for_step=%V%p ...), returnValue=%R",0,0,0,0,0,0,0,0, returnValue);
		}
		else
		{//o4 = 1
			//  i1 的值 
			THXAtrace("IMGZ", 1, "IMGZxAP_functions_get_callbacks_cb", "< ((*cb_ptr).clear_result_parameters=%V%p (*cb_ptr).execute_service=%V%p (*cb_ptr).execute_step_and_update_results=%V%p (*cb_ptr).get_time_limits_for_step=%V%p ...), returnValue=%R", 1, (*cb_ptr).clear_result_parameters, 1, (*cb_ptr).execute_service, 1, (*cb_ptr).execute_step_and_update_results, 1, (*cb_ptr).get_time_limits_for_step, returnValue);
		}
	}
	else
	{
		//ld  [%i0+0xC], %o0
		if (cb_ptr == NULL)
		{
			THXAtrace(i0->unc0xC, 1, "IMGZxAP_functions_get_callbacks_cb", "< ((*cb_ptr).clear_result_parameters=%V%p (*cb_ptr).execute_service=%V%p (*cb_ptr).execute_step_and_update_results=%V%p (*cb_ptr).get_time_limits_for_step=%V%p ...), returnValue=%R", 0, 0, 0, 0, 0, 0, 0, 0, returnValue);
		}
		else
		{
			//  i1 的值 
			THXAtrace(i0->unc0xC, 1, "IMGZxAP_functions_get_callbacks_cb", "< ((*cb_ptr).clear_result_parameters=%V%p (*cb_ptr).execute_service=%V%p (*cb_ptr).execute_step_and_update_results=%V%p (*cb_ptr).get_time_limits_for_step=%V%p ...), returnValue=%R", 1, (*cb_ptr).clear_result_parameters, 1, (*cb_ptr).execute_service, 1, (*cb_ptr).execute_step_and_update_results, 1, (*cb_ptr).get_time_limits_for_step, returnValue);
		}
	}
	return returnValue;
}

int imgzxap_functions_get_config_cb(IMGZxAP_i0 *i0, TTXAxAP_config_struct *config_ptr)
{
	char *psErrorText;
	int *var_4;
	int returnValue;
	int flag_o5 = 0;
	int flag_sp = 0;
	if (i0 == NULL)
	{
		THXAtrace("IMGZ", 1, "imgzxap_functions_get_config_cb", "> (config_ptr=%p)", config_ptr);
	}
	else
	{
		//ld    [%i0+0xC], %o0
		THXAtrace(i0->unc0xC, 1, "imgzxap_functions_get_config_cb", "> (config_ptr=%p)", config_ptr);
	}
	*var_4 = 0;
	if (config_ptr == NULL)
	{
		psErrorText = ERXAmakeContext("Verification by %s failed: '%s' not TRUE", "imgzxap_functions_get_config_cb", "(config_ptr != NULL)");
		ERXAlogExceptionSingleLink_id(0x494D5C00, 0, var_4, "IMGZxAP_functions.c", 0xFC, 0, psErrorText);
		returnValue = *var_4;
		if (*var_4 != 0)
		{
			//loc_13E64
			if (i0 == NULL)
			{
				THXAtrace("IMGZ", 1, "imgzxap_functions_get_config_cb", "< (IMGZxAP_functions_dq_handle_ptr=<?>, *IMGZxAP_functions_dq_handle_ptr=<?>, *config_ptr=<?>), returnValue=%R", returnValue);
			}
			else
			{
				//ld  [%i0+0xC], %o0
				THXAtrace(i0->unc0xC, 1, "imgzxap_functions_get_config_cb", "< (IMGZxAP_functions_dq_handle_ptr=<?>, *IMGZxAP_functions_dq_handle_ptr=<?>, *config_ptr=<?>), returnValue=%R", returnValue);
			}
			return returnValue;
		}
		//else  loc_137D8
	}
	//else  loc_137D8
	//loc_137D8
	/* i1的部分 */
	config_ptr->test_type = 1;
	config_ptr->number_of_steps = 4;
	config_ptr->save_mc_duration = 0x168;
	*IMGZxAP_functions_dq_handle_ptr = config_ptr->dq_handle;
	returnValue = *var_4;
	if (*var_4 != 0)
	{
		//loc_13E64
		if (i0 == NULL)
		{
			THXAtrace("IMGZ", 1, "imgzxap_functions_get_config_cb", "< (IMGZxAP_functions_dq_handle_ptr=<?>, *IMGZxAP_functions_dq_handle_ptr=<?>, *config_ptr=<?>), returnValue=%R", returnValue);
		}
		else
		{
			//ld  [%i0+0xC], %o0
			THXAtrace(i0->unc0xC, 1, "imgzxap_functions_get_config_cb", "< (IMGZxAP_functions_dq_handle_ptr=<?>, *IMGZxAP_functions_dq_handle_ptr=<?>, *config_ptr=<?>), returnValue=%R", returnValue);
		}
		return returnValue;
	}
	*var_4 = PLXAstr_strlcpy(config_ptr->ui_process_name,"IMGZUI", 0x108);
	if (*var_4 != 0)
	{
		psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "PLXAstr_strlcpy( config_ptr->ui_process_name, IMGZ_FUNCTIONS_UI_TASK_NAME, sizeof(config_ptr->ui_process_name))");
		ERXAlogExceptionSingleLink_id(0x45520072,*var_4,var_4, "IMGZxAP_functions.c", 0x10C,0,psErrorText);
		returnValue = *var_4;
		if (*var_4 != 0)
		{
			//loc_13E64
			if (i0 == NULL)
			{
				THXAtrace("IMGZ", 1, "imgzxap_functions_get_config_cb", "< (IMGZxAP_functions_dq_handle_ptr=<?>, *IMGZxAP_functions_dq_handle_ptr=<?>, *config_ptr=<?>), returnValue=%R", returnValue);
			}
			else
			{
				//ld  [%i0+0xC], %o0
				THXAtrace(i0->unc0xC, 1, "imgzxap_functions_get_config_cb", "< (IMGZxAP_functions_dq_handle_ptr=<?>, *IMGZxAP_functions_dq_handle_ptr=<?>, *config_ptr=<?>), returnValue=%R", returnValue);
			}
			return returnValue;
		}
		//else loc_13890
	}
	//else loc_13890
	//loc_13890
	*var_4 = PLXAstr_strlcpy(config_ptr->application_info.subsystem_name, "SPM", 0x58);
	if (*var_4 != 0)
	{
		psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "PLXAstr_strlcpy( config_ptr->application_info.subsystem_name, IMGZ_SUBSYSTEM_NAME_STR, sizeof(config_ptr->application_info.subsystem_name))");
		ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x116, 0, psErrorText);
		returnValue = *var_4;
		if (*var_4 != 0)
		{
			//loc_13E64
			if (i0 == NULL)
			{
				THXAtrace("IMGZ", 1, "imgzxap_functions_get_config_cb", "< (IMGZxAP_functions_dq_handle_ptr=<?>, *IMGZxAP_functions_dq_handle_ptr=<?>, *config_ptr=<?>), returnValue=%R", returnValue);
			}
			else
			{
				//ld  [%i0+0xC], %o0
				THXAtrace(i0->unc0xC, 1, "imgzxap_functions_get_config_cb", "< (IMGZxAP_functions_dq_handle_ptr=<?>, *IMGZxAP_functions_dq_handle_ptr=<?>, *config_ptr=<?>), returnValue=%R", returnValue);
			}
			return returnValue;
		}
		//else loc_1390C
	}
	//else loc_1390C
	//loc_1390C
	*var_4 = PLXAstr_strlcpy(config_ptr->application_info.subsystem_abbr, "IM", 0x58);
	if (*var_4 != 0)
	{
		psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "PLXAstr_strlcpy( config_ptr->application_info.subsystem_abbr, IMGZ_SUBSYSTEM_ABBR_STR, sizeof(config_ptr->application_info.subsystem_abbr))");
		ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x11F, 0, psErrorText);
		returnValue = *var_4;
		if (*var_4 != 0)
		{
			//loc_13E64
			if (i0 == NULL)
			{
				THXAtrace("IMGZ", 1, "imgzxap_functions_get_config_cb", "< (IMGZxAP_functions_dq_handle_ptr=<?>, *IMGZxAP_functions_dq_handle_ptr=<?>, *config_ptr=<?>), returnValue=%R", returnValue);
			}
			else
			{
				//ld  [%i0+0xC], %o0
				THXAtrace(i0->unc0xC, 1, "imgzxap_functions_get_config_cb", "< (IMGZxAP_functions_dq_handle_ptr=<?>, *IMGZxAP_functions_dq_handle_ptr=<?>, *config_ptr=<?>), returnValue=%R", returnValue);
			}
			return returnValue;
		}
		//else loc_13988
	}
	//else loc_13988
	//loc_13988
	*var_4 = PLXAstr_strlcpy(config_ptr->application_info.application_name, "IMGZ Grid Plate Reference Mark Calibration", 0x58);
	if (*var_4 != 0)
	{
		psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "PLXAstr_strlcpy( config_ptr->application_info.application_name, IMGZ_APPLICATION_NAME_STR, sizeof(config_ptr->application_info.application_name))");
		ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x128, 0, psErrorText);
		returnValue = *var_4;
		if (*var_4 != 0)
		{
			//loc_13E64
			if (i0 == NULL)
			{
				THXAtrace("IMGZ", 1, "imgzxap_functions_get_config_cb", "< (IMGZxAP_functions_dq_handle_ptr=<?>, *IMGZxAP_functions_dq_handle_ptr=<?>, *config_ptr=<?>), returnValue=%R", returnValue);
			}
			else
			{
				//ld  [%i0+0xC], %o0
				THXAtrace(i0->unc0xC, 1, "imgzxap_functions_get_config_cb", "< (IMGZxAP_functions_dq_handle_ptr=<?>, *IMGZxAP_functions_dq_handle_ptr=<?>, *config_ptr=<?>), returnValue=%R", returnValue);
			}
			return returnValue;
		}
		//else loc_13A04
	}
	//else loc_13A04
	//loc_13A04
	*var_4 = PLXAstr_strlcpy(config_ptr->application_info.application_abbr, "IMGZ", 0x58);
	if (*var_4 != 0)
	{
		psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "PLXAstr_strlcpy( config_ptr->application_info.application_abbr, IMGZ_APPLICATION_ABBR_STR, sizeof(config_ptr->application_info.application_abbr))");
		ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x131, 0, psErrorText);
		returnValue = *var_4;
		if (*var_4 != 0)
		{
			//loc_13E64
			if (i0 == NULL)
			{
				THXAtrace("IMGZ", 1, "imgzxap_functions_get_config_cb", "< (IMGZxAP_functions_dq_handle_ptr=<?>, *IMGZxAP_functions_dq_handle_ptr=<?>, *config_ptr=<?>), returnValue=%R", returnValue);
			}
			else
			{
				//ld  [%i0+0xC], %o0
				THXAtrace(i0->unc0xC, 1, "imgzxap_functions_get_config_cb", "< (IMGZxAP_functions_dq_handle_ptr=<?>, *IMGZxAP_functions_dq_handle_ptr=<?>, *config_ptr=<?>), returnValue=%R", returnValue);
			}
			return returnValue;
		}
		//else loc_13A80
	}
	//else loc_13A80
	//loc_13A80
	*var_4 = DQXA_init("IMGZ Grid Plate Reference Mark Calibration_server", "IMGZ Grid Plate Reference Mark Calibration", IMGZxAP_functions_dq_handle_ptr);
	if (*var_4 != 0)
	{
		psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_init( IMGZxAP_FUNCTIONS_DQ_SERVER, IMGZxAP_FUNCTIONS_DQ_APLLICATION, IMGZxAP_functions_dq_handle_ptr)");
		ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x13A, 0, psErrorText);
		returnValue = *var_4;
		if (*var_4 != 0)
		{
			//loc_13E64
			if (i0 == NULL)
			{
				THXAtrace("IMGZ", 1, "imgzxap_functions_get_config_cb", "< (IMGZxAP_functions_dq_handle_ptr=<?>, *IMGZxAP_functions_dq_handle_ptr=<?>, *config_ptr=<?>), returnValue=%R", returnValue);
			}
			else
			{
				//ld  [%i0+0xC], %o0
				THXAtrace(i0->unc0xC, 1, "imgzxap_functions_get_config_cb", "< (IMGZxAP_functions_dq_handle_ptr=<?>, *IMGZxAP_functions_dq_handle_ptr=<?>, *config_ptr=<?>), returnValue=%R", returnValue);
			}
			return returnValue;
		}
		//else loc_13B10
	}
	//else loc_13B10
	//loc_13B10
	config_ptr->graphics.present = 1;
	config_ptr->graphics.show_file_selector = 1;
	*var_4 = PLXAstr_strlcpy(config_ptr->graphics.data_dirname, "service_data/IM/IMGZ/", 0x108);
	if (*var_4 != 0)
	{
		psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "PLXAstr_strlcpy( config_ptr->graphics.data_dirname, IMGZ_GRAPHICS_PATH, sizeof(config_ptr->graphics.data_dirname))");
		ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x145, 0, psErrorText);
		returnValue = *var_4;
		if (*var_4 != 0)
		{
			//loc_13E64
			if (i0 == NULL)
			{
				THXAtrace("IMGZ", 1, "imgzxap_functions_get_config_cb", "< (IMGZxAP_functions_dq_handle_ptr=<?>, *IMGZxAP_functions_dq_handle_ptr=<?>, *config_ptr=<?>), returnValue=%R", returnValue);
			}
			else
			{
				//ld  [%i0+0xC], %o0
				THXAtrace(i0->unc0xC, 1, "imgzxap_functions_get_config_cb", "< (IMGZxAP_functions_dq_handle_ptr=<?>, *IMGZxAP_functions_dq_handle_ptr=<?>, *config_ptr=<?>), returnValue=%R", returnValue);
			}
			return returnValue;
		}
		//else loc_13B98
	}
	//else loc_13B98
	//loc_13B98
	*var_4 = PLXAstr_strlcpy(config_ptr->graphics.dir_mask, "*.gd2.gz", 0x108);
	if (*var_4 != 0)
	{
		psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "PLXAstr_strlcpy( config_ptr->graphics.dir_mask, IMGZ_GRAPHICS_DIR_MASK, sizeof(config_ptr->graphics.dir_mask))");
		ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x14D, 0, psErrorText);
		returnValue = *var_4;
		if (*var_4 != 0)
		{
			//loc_13E64
			if (i0 == NULL)
			{
				THXAtrace("IMGZ", 1, "imgzxap_functions_get_config_cb", "< (IMGZxAP_functions_dq_handle_ptr=<?>, *IMGZxAP_functions_dq_handle_ptr=<?>, *config_ptr=<?>), returnValue=%R", returnValue);
			}
			else
			{
				//ld  [%i0+0xC], %o0
				THXAtrace(i0->unc0xC, 1, "imgzxap_functions_get_config_cb", "< (IMGZxAP_functions_dq_handle_ptr=<?>, *IMGZxAP_functions_dq_handle_ptr=<?>, *config_ptr=<?>), returnValue=%R", returnValue);
			}
			return returnValue;
		}
		//else loc_13C14
	}
	//else loc_13C14
	//loc_13C14
	*var_4 = PLXAstr_strlcpy(config_ptr->datapool.input_dq_name, "input_values", 0x58);
	if (*var_4 != 0)
	{
		psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "PLXAstr_strlcpy( config_ptr->datapool.input_dq_name, IMGZ_INPUT_STRUCT_DQ_NAME, sizeof(config_ptr->datapool.input_dq_name))");
		ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x156, 0, psErrorText);	
		if (*var_4 != 0)
		{
			returnValue = *var_4;
			//loc_13E64
			if (i0 == NULL)
			{
				THXAtrace("IMGZ", 1, "imgzxap_functions_get_config_cb", "< (IMGZxAP_functions_dq_handle_ptr=<?>, *IMGZxAP_functions_dq_handle_ptr=<?>, *config_ptr=<?>), returnValue=%R", returnValue);
			}
			else
			{
				//ld  [%i0+0xC], %o0
				THXAtrace(i0->unc0xC, 1, "imgzxap_functions_get_config_cb", "< (IMGZxAP_functions_dq_handle_ptr=<?>, *IMGZxAP_functions_dq_handle_ptr=<?>, *config_ptr=<?>), returnValue=%R", returnValue);
			}
			return returnValue;
		}
		//else loc_13C90
	}
	//else loc_13C90
	//loc_13C90
	*var_4 = PLXAstr_strlcpy(config_ptr->datapool.result_dq_name, "result_values", 0x58);
	if (*var_4 != 0)
	{
		psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "PLXAstr_strlcpy( config_ptr->datapool.result_dq_name, IMGZ_RESULT_STRUCT_DQ_NAME, sizeof(config_ptr->datapool.result_dq_name))");
		ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x15E, 0, psErrorText);
		if (*var_4 != 0)
		{
			returnValue = *var_4;
			//loc_13E64
			if (i0 == NULL)
			{
				THXAtrace("IMGZ", 1, "imgzxap_functions_get_config_cb", "< (IMGZxAP_functions_dq_handle_ptr=<?>, *IMGZxAP_functions_dq_handle_ptr=<?>, *config_ptr=<?>), returnValue=%R", returnValue);
			}
			else
			{
				//ld  [%i0+0xC], %o0
				THXAtrace(i0->unc0xC, 1, "imgzxap_functions_get_config_cb", "< (IMGZxAP_functions_dq_handle_ptr=<?>, *IMGZxAP_functions_dq_handle_ptr=<?>, *config_ptr=<?>), returnValue=%R", returnValue);
			}
			return returnValue;
		}
		//else loc_13D0C
	}
	//else loc_13D0C
	//loc_13D0C
	*var_4 = PLXAstr_strlcpy(config_ptr->datapool.testconst_dq_name, "tc_values", 0x58);
	if (*var_4 != 0)
	{
		psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "PLXAstr_strlcpy( config_ptr->datapool.testconst_dq_name, IMGZ_TC_STRUCT_DQ_NAME, sizeof(config_ptr->datapool.testconst_dq_name))");
		ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x167, 0, psErrorText);
		returnValue = *var_4;
		if (*var_4 != 0)
		{
			//loc_13E64
			if (i0 == NULL)
			{
				THXAtrace("IMGZ", 1, "imgzxap_functions_get_config_cb", "< (IMGZxAP_functions_dq_handle_ptr=<?>, *IMGZxAP_functions_dq_handle_ptr=<?>, *config_ptr=<?>), returnValue=%R", returnValue);
			}
			else
			{
				//ld  [%i0+0xC], %o0
				THXAtrace(i0->unc0xC, 1, "imgzxap_functions_get_config_cb", "< (IMGZxAP_functions_dq_handle_ptr=<?>, *IMGZxAP_functions_dq_handle_ptr=<?>, *config_ptr=<?>), returnValue=%R", returnValue);
			}
			return returnValue;
		}
		//else loc_13D88
	}
	//else loc_13D88
	//loc_13D88
	config_ptr->report_config.width = 0x50;
	config_ptr->report_config.show_invisible_items = 0;
	config_ptr->report_config.transpose_table = 0;
	config_ptr->report_config.hide_vararray_index_col = 1;
	config_ptr->report_config.show_empty_vararray = 0;
	returnValue = *var_4;
	if (returnValue != 0)
	{
		//loc_13E64
		if (i0 == NULL)
		{
			THXAtrace("IMGZ", 1, "imgzxap_functions_get_config_cb", "< (IMGZxAP_functions_dq_handle_ptr=<?>, *IMGZxAP_functions_dq_handle_ptr=<?>, *config_ptr=<?>), returnValue=%R", returnValue);
		}
		else
		{
			//ld  [%i0+0xC], %o0
			THXAtrace(i0->unc0xC, 1, "imgzxap_functions_get_config_cb", "< (IMGZxAP_functions_dq_handle_ptr=<?>, *IMGZxAP_functions_dq_handle_ptr=<?>, *config_ptr=<?>), returnValue=%R", returnValue);
		}
		return returnValue;
	}
	//else loc_13DC8
	if (IMGZxAP_functions_dq_handle_ptr != NULL)
	{
		flag_o5 = 1;
	}
	if (config_ptr != NULL)
	{
		flag_sp = 1;
	}
	if (i0 == NULL)
	{

		THXAtrace("IMGZ", 1, "imgzxap_functions_get_config_cb","< (IMGZxAP_functions_dq_handle_ptr=%p, %V%D, %V%D), returnValue=%R", IMGZxAP_functions_dq_handle_ptr,flag_o5, "*IMGZxAP_functions_dq_handle_ptr", "DQXA:handle_t", IMGZxAP_functions_dq_handle_ptr,flag_sp, "*config_ptr", "TTXAxAP:config_struct",config_ptr,0);
	}
	else
	{
		//ld  [%i0+0xC], %o0
		THXAtrace(i0->unc0xC, 1, "imgzxap_functions_get_config_cb","< (IMGZxAP_functions_dq_handle_ptr=%p, %V%D, %V%D), returnValue=%R" , IMGZxAP_functions_dq_handle_ptr,flag_o5, "*IMGZxAP_functions_dq_handle_ptr", "DQXA:handle_t", IMGZxAP_functions_dq_handle_ptr, flag_sp, "*config_ptr", "TTXAxAP:config_struct", config_ptr, 0);
	}
	return 0;
}

int imgzxap_functions_create_data_structure_cb(IMGZxAP_i0 *i0)
{
	char *psErrorText;
	int returnValue;
	int *var_4;
	int *var_18;
	int flag_l1;
	int flag_o4 = 0;
	IMGZ_input_struct *input_struct_ptr = NULL;//var_8
	IMGZ_result_struct *result_struct_ptr = NULL;//var_C
	IMGZxTC_tc_struct *tc_struct_ptr = NULL;//var_10
	if (i0 == NULL)
	{
		THXAtrace("IMGZ", 1, "imgzxap_functions_create_data_structure_cb", "> (IMGZxAP_functions_dq_handle_ptr=%p)", IMGZxAP_functions_dq_handle_ptr);
	}
	else
	{
		//ld    [%i0+0xC], %o0
		THXAtrace(i0->unc0xC, 1, "imgzxap_functions_create_data_structure_cb", "> (IMGZxAP_functions_dq_handle_ptr=%p)", IMGZxAP_functions_dq_handle_ptr);
	}
	*var_4 = DDXAxOBJECT_full_create("IMGZ:input_struct", (void**)&input_struct_ptr);
	if (*var_4 != 0)
	{
		psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DDXAxOBJECT_full_create( IMGZ_INPUT_STRUCT_STR, (void**)&input_struct_ptr)");
		ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x19B, 0, psErrorText);
		if (*var_4 == 0)
		{
			//loc_13F98
			*var_4 = DDXAxOBJECT_full_create("IMGZ:result_struct", (void**)&result_struct_ptr);
			if (*var_4 != 0)
			{
				psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DDXAxOBJECT_full_create( IMGZ_RESULT_STRUCT_STR, (void**)&result_struct_ptr)");
				ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1A3, 0, psErrorText);
				if (*var_4 == 0)
				{
					//loc_14010
					*var_4 = DDXAxOBJECT_full_create("IMGZxTC:tc_struct", (void**)&tc_struct_ptr);
					if (*var_4 != 0)
					{
						psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DDXAxOBJECT_full_create( IMGZxTC_TC_STRUCT_STR, (void**)&tc_struct_ptr)");
						ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1AB, 0, psErrorText);
						if (*var_4 == 0)
						{
							//loc_14088
							*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZ:input_struct", "input_values", (void *)input_struct_ptr);
							if (*var_4 != 0)
							{
								psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZ_INPUT_STRUCT_STR, IMGZ_INPUT_STRUCT_DQ_NAME, (void *)input_struct_ptr)");
								ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1B5, 0, psErrorText);
								if (*var_4 == 0)
								{
									//loc_1411C
									*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZ:result_struct", "result_values", (void *)result_struct_ptr);
									if (*var_4 != 0)
									{
										psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZ_RESULT_STRUCT_STR, IMGZ_RESULT_STRUCT_DQ_NAME, (void *)result_struct_ptr)");
										ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1BE, 0, psErrorText);
										if (*var_4 == 0)
										{
											//loc_141B0
											*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
											if (*var_4 != 0)
											{
												psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
												ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
												//loc_14234  loc_14238  ld   [%fp+var_8], %g1
											}
											//else loc_14234 loc_14238  ld   [%fp+var_8], %g1

										}
										//else loc_14238  ld   [%fp+var_8], %g1
									}
									else
									{
										//loc_141B0
										*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
										if (*var_4 != 0)
										{
											psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
											ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
											//loc_14234  loc_14238  ld   [%fp+var_8], %g1
										}
										//else loc_14234 loc_14238  ld   [%fp+var_8], %g1
									}	
								}
								//else loc_14238  ld   [%fp+var_8], %g1
							}
							else
							{
								//loc_1411C
								*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZ:result_struct", "result_values", (void *)result_struct_ptr);
								if (*var_4 != 0)
								{
									psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZ_RESULT_STRUCT_STR, IMGZ_RESULT_STRUCT_DQ_NAME, (void *)result_struct_ptr)");
									ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1BE, 0, psErrorText);
									if (*var_4 == 0)
									{
										//loc_141B0
										*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
										if (*var_4 != 0)
										{
											psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
											ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
											//loc_14234  loc_14238  ld   [%fp+var_8], %g1
										}
										//else loc_14234 loc_14238  ld   [%fp+var_8], %g1

									}
									//else loc_14238  ld   [%fp+var_8], %g1
								}
								else
								{
									//loc_141B0
									*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
									if (*var_4 != 0)
									{
										psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
										ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
										//loc_14234  loc_14238  ld   [%fp+var_8], %g1
									}
									//else loc_14234 loc_14238  ld   [%fp+var_8], %g1
								}
							}
						}
						//else loc_14238  ld   [%fp+var_8], %g1
					}
					else
					{
						//loc_14088
						*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZ:input_struct", "input_values", (void *)input_struct_ptr);
						if (*var_4 != 0)
						{
							psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZ_INPUT_STRUCT_STR, IMGZ_INPUT_STRUCT_DQ_NAME, (void *)input_struct_ptr)");
							ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1B5, 0, psErrorText);
							if (*var_4 == 0)
							{
								//loc_1411C
								*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZ:result_struct", "result_values", (void *)result_struct_ptr);
								if (*var_4 != 0)
								{
									psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZ_RESULT_STRUCT_STR, IMGZ_RESULT_STRUCT_DQ_NAME, (void *)result_struct_ptr)");
									ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1BE, 0, psErrorText);
									if (*var_4 == 0)
									{
										//loc_141B0
										*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
										if (*var_4 != 0)
										{
											psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
											ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
											//loc_14234  loc_14238  ld   [%fp+var_8], %g1
										}
										//else loc_14234 loc_14238  ld   [%fp+var_8], %g1

									}
									//else loc_14238  ld   [%fp+var_8], %g1
								}
								else
								{
									//loc_141B0
									*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
									if (*var_4 != 0)
									{
										psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
										ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
										//loc_14234  loc_14238  ld   [%fp+var_8], %g1
									}
									//else loc_14234 loc_14238  ld   [%fp+var_8], %g1
								}
							}
							//else loc_14238  ld   [%fp+var_8], %g1
						}
						else
						{
							//loc_1411C
							*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZ:result_struct", "result_values", (void *)result_struct_ptr);
							if (*var_4 != 0)
							{
								psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZ_RESULT_STRUCT_STR, IMGZ_RESULT_STRUCT_DQ_NAME, (void *)result_struct_ptr)");
								ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1BE, 0, psErrorText);
								if (*var_4 == 0)
								{
									//loc_141B0
									*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
									if (*var_4 != 0)
									{
										psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
										ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
										//loc_14234  loc_14238  ld   [%fp+var_8], %g1
									}
									//else loc_14234 loc_14238  ld   [%fp+var_8], %g1

								}
								//else loc_14238  ld   [%fp+var_8], %g1
							}
							else
							{
								//loc_141B0
								*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
								if (*var_4 != 0)
								{
									psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
									ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
									//loc_14234  loc_14238  ld   [%fp+var_8], %g1
								}
								//else loc_14234 loc_14238  ld   [%fp+var_8], %g1
							}
						}
					}
				}
				//else loc_14238  ld   [%fp+var_8], %g1
			}
			else
			{
				//loc_14010
				*var_4 = DDXAxOBJECT_full_create("IMGZxTC:tc_struct", (void**)&tc_struct_ptr);
				if (*var_4 != 0)
				{
					psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DDXAxOBJECT_full_create( IMGZxTC_TC_STRUCT_STR, (void**)&tc_struct_ptr)");
					ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1AB, 0, psErrorText);
					if (*var_4 == 0)
					{
						//loc_14088
						*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZ:input_struct", "input_values", (void *)input_struct_ptr);
						if (*var_4 != 0)
						{
							psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZ_INPUT_STRUCT_STR, IMGZ_INPUT_STRUCT_DQ_NAME, (void *)input_struct_ptr)");
							ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1B5, 0, psErrorText);
							if (*var_4 == 0)
							{
								//loc_1411C
								*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZ:result_struct", "result_values", (void *)result_struct_ptr);
								if (*var_4 != 0)
								{
									psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZ_RESULT_STRUCT_STR, IMGZ_RESULT_STRUCT_DQ_NAME, (void *)result_struct_ptr)");
									ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1BE, 0, psErrorText);
									if (*var_4 == 0)
									{
										//loc_141B0
										*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
										if (*var_4 != 0)
										{
											psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
											ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
											//loc_14234  loc_14238  ld   [%fp+var_8], %g1
										}
										//else loc_14234 loc_14238  ld   [%fp+var_8], %g1

									}
									//else loc_14238  ld   [%fp+var_8], %g1
								}
								else
								{
									//loc_141B0
									*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
									if (*var_4 != 0)
									{
										psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
										ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
										//loc_14234  loc_14238  ld   [%fp+var_8], %g1
									}
									//else loc_14234 loc_14238  ld   [%fp+var_8], %g1
								}
							}
							//else loc_14238  ld   [%fp+var_8], %g1
						}
						else
						{
							//loc_1411C
							*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZ:result_struct", "result_values", (void *)result_struct_ptr);
							if (*var_4 != 0)
							{
								psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZ_RESULT_STRUCT_STR, IMGZ_RESULT_STRUCT_DQ_NAME, (void *)result_struct_ptr)");
								ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1BE, 0, psErrorText);
								if (*var_4 == 0)
								{
									//loc_141B0
									*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
									if (*var_4 != 0)
									{
										psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
										ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
										//loc_14234  loc_14238  ld   [%fp+var_8], %g1
									}
									//else loc_14234 loc_14238  ld   [%fp+var_8], %g1

								}
								//else loc_14238  ld   [%fp+var_8], %g1
							}
							else
							{
								//loc_141B0
								*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
								if (*var_4 != 0)
								{
									psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
									ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
									//loc_14234  loc_14238  ld   [%fp+var_8], %g1
								}
								//else loc_14234 loc_14238  ld   [%fp+var_8], %g1
							}
						}
					}
					//else loc_14238  ld   [%fp+var_8], %g1
				}
				else
				{
					//loc_14088
					*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZ:input_struct", "input_values", (void *)input_struct_ptr);
					if (*var_4 != 0)
					{
						psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZ_INPUT_STRUCT_STR, IMGZ_INPUT_STRUCT_DQ_NAME, (void *)input_struct_ptr)");
						ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1B5, 0, psErrorText);
						if (*var_4 == 0)
						{
							//loc_1411C
							*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZ:result_struct", "result_values", (void *)result_struct_ptr);
							if (*var_4 != 0)
							{
								psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZ_RESULT_STRUCT_STR, IMGZ_RESULT_STRUCT_DQ_NAME, (void *)result_struct_ptr)");
								ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1BE, 0, psErrorText);
								if (*var_4 == 0)
								{
									//loc_141B0
									*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
									if (*var_4 != 0)
									{
										psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
										ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
										//loc_14234  loc_14238  ld   [%fp+var_8], %g1
									}
									//else loc_14234 loc_14238  ld   [%fp+var_8], %g1

								}
								//else loc_14238  ld   [%fp+var_8], %g1
							}
							else
							{
								//loc_141B0
								*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
								if (*var_4 != 0)
								{
									psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
									ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
									//loc_14234  loc_14238  ld   [%fp+var_8], %g1
								}
								//else loc_14234 loc_14238  ld   [%fp+var_8], %g1
							}
						}
						//else loc_14238  ld   [%fp+var_8], %g1
					}
					else
					{
						//loc_1411C
						*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZ:result_struct", "result_values", (void *)result_struct_ptr);
						if (*var_4 != 0)
						{
							psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZ_RESULT_STRUCT_STR, IMGZ_RESULT_STRUCT_DQ_NAME, (void *)result_struct_ptr)");
							ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1BE, 0, psErrorText);
							if (*var_4 == 0)
							{
								//loc_141B0
								*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
								if (*var_4 != 0)
								{
									psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
									ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
									//loc_14234  loc_14238  ld   [%fp+var_8], %g1
								}
								//else loc_14234 loc_14238  ld   [%fp+var_8], %g1

							}
							//else loc_14238  ld   [%fp+var_8], %g1
						}
						else
						{
							//loc_141B0
							*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
							if (*var_4 != 0)
							{
								psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
								ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
								//loc_14234  loc_14238  ld   [%fp+var_8], %g1
							}
							//else loc_14234 loc_14238  ld   [%fp+var_8], %g1
						}
					}
				}
			}
		}
		//else loc_14238  ld   [%fp+var_8], %g1
	}
	else
	{
		//loc_13F98
		*var_4 = DDXAxOBJECT_full_create("IMGZ:result_struct", (void**)&result_struct_ptr);
		if (*var_4 != 0)
		{
			psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DDXAxOBJECT_full_create( IMGZ_RESULT_STRUCT_STR, (void**)&result_struct_ptr)");
			ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1A3, 0, psErrorText);
			if (*var_4 == 0)
			{
				//loc_14010
				*var_4 = DDXAxOBJECT_full_create("IMGZxTC:tc_struct", (void**)&tc_struct_ptr);
				if (*var_4 != 0)
				{
					psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DDXAxOBJECT_full_create( IMGZxTC_TC_STRUCT_STR, (void**)&tc_struct_ptr)");
					ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1AB, 0, psErrorText);
					if (*var_4 == 0)
					{
						//loc_14088
						*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZ:input_struct", "input_values", (void *)input_struct_ptr);
						if (*var_4 != 0)
						{
							psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZ_INPUT_STRUCT_STR, IMGZ_INPUT_STRUCT_DQ_NAME, (void *)input_struct_ptr)");
							ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1B5, 0, psErrorText);
							if (*var_4 == 0)
							{
								//loc_1411C
								*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZ:result_struct", "result_values", (void *)result_struct_ptr);
								if (*var_4 != 0)
								{
									psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZ_RESULT_STRUCT_STR, IMGZ_RESULT_STRUCT_DQ_NAME, (void *)result_struct_ptr)");
									ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1BE, 0, psErrorText);
									if (*var_4 == 0)
									{
										//loc_141B0
										*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
										if (*var_4 != 0)
										{
											psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
											ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
											//loc_14234  loc_14238  ld   [%fp+var_8], %g1
										}
										//else loc_14234 loc_14238  ld   [%fp+var_8], %g1

									}
									//else loc_14238  ld   [%fp+var_8], %g1
								}
								else
								{
									//loc_141B0
									*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
									if (*var_4 != 0)
									{
										psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
										ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
										//loc_14234  loc_14238  ld   [%fp+var_8], %g1
									}
									//else loc_14234 loc_14238  ld   [%fp+var_8], %g1
								}
							}
							//else loc_14238  ld   [%fp+var_8], %g1
						}
						else
						{
							//loc_1411C
							*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZ:result_struct", "result_values", (void *)result_struct_ptr);
							if (*var_4 != 0)
							{
								psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZ_RESULT_STRUCT_STR, IMGZ_RESULT_STRUCT_DQ_NAME, (void *)result_struct_ptr)");
								ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1BE, 0, psErrorText);
								if (*var_4 == 0)
								{
									//loc_141B0
									*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
									if (*var_4 != 0)
									{
										psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
										ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
										//loc_14234  loc_14238  ld   [%fp+var_8], %g1
									}
									//else loc_14234 loc_14238  ld   [%fp+var_8], %g1

								}
								//else loc_14238  ld   [%fp+var_8], %g1
							}
							else
							{
								//loc_141B0
								*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
								if (*var_4 != 0)
								{
									psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
									ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
									//loc_14234  loc_14238  ld   [%fp+var_8], %g1
								}
								//else loc_14234 loc_14238  ld   [%fp+var_8], %g1
							}
						}
					}
					//else loc_14238  ld   [%fp+var_8], %g1
				}
				else
				{
					//loc_14088
					*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZ:input_struct", "input_values", (void *)input_struct_ptr);
					if (*var_4 != 0)
					{
						psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZ_INPUT_STRUCT_STR, IMGZ_INPUT_STRUCT_DQ_NAME, (void *)input_struct_ptr)");
						ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1B5, 0, psErrorText);
						if (*var_4 == 0)
						{
							//loc_1411C
							*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZ:result_struct", "result_values", (void *)result_struct_ptr);
							if (*var_4 != 0)
							{
								psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZ_RESULT_STRUCT_STR, IMGZ_RESULT_STRUCT_DQ_NAME, (void *)result_struct_ptr)");
								ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1BE, 0, psErrorText);
								if (*var_4 == 0)
								{
									//loc_141B0
									*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
									if (*var_4 != 0)
									{
										psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
										ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
										//loc_14234  loc_14238  ld   [%fp+var_8], %g1
									}
									//else loc_14234 loc_14238  ld   [%fp+var_8], %g1

								}
								//else loc_14238  ld   [%fp+var_8], %g1
							}
							else
							{
								//loc_141B0
								*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
								if (*var_4 != 0)
								{
									psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
									ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
									//loc_14234  loc_14238  ld   [%fp+var_8], %g1
								}
								//else loc_14234 loc_14238  ld   [%fp+var_8], %g1
							}
						}
						//else loc_14238  ld   [%fp+var_8], %g1
					}
					else
					{
						//loc_1411C
						*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZ:result_struct", "result_values", (void *)result_struct_ptr);
						if (*var_4 != 0)
						{
							psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZ_RESULT_STRUCT_STR, IMGZ_RESULT_STRUCT_DQ_NAME, (void *)result_struct_ptr)");
							ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1BE, 0, psErrorText);
							if (*var_4 == 0)
							{
								//loc_141B0
								*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
								if (*var_4 != 0)
								{
									psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
									ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
									//loc_14234  loc_14238  ld   [%fp+var_8], %g1
								}
								//else loc_14234 loc_14238  ld   [%fp+var_8], %g1

							}
							//else loc_14238  ld   [%fp+var_8], %g1
						}
						else
						{
							//loc_141B0
							*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
							if (*var_4 != 0)
							{
								psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
								ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
								//loc_14234  loc_14238  ld   [%fp+var_8], %g1
							}
							//else loc_14234 loc_14238  ld   [%fp+var_8], %g1
						}
					}
				}
			}
			//else loc_14238  ld   [%fp+var_8], %g1
		}
		else
		{
			//loc_14010
			*var_4 = DDXAxOBJECT_full_create("IMGZxTC:tc_struct", (void**)&tc_struct_ptr);
			if (*var_4 != 0)
			{
				psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DDXAxOBJECT_full_create( IMGZxTC_TC_STRUCT_STR, (void**)&tc_struct_ptr)");
				ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1AB, 0, psErrorText);
				if (*var_4 == 0)
				{
					//loc_14088
					*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZ:input_struct", "input_values", (void *)input_struct_ptr);
					if (*var_4 != 0)
					{
						psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZ_INPUT_STRUCT_STR, IMGZ_INPUT_STRUCT_DQ_NAME, (void *)input_struct_ptr)");
						ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1B5, 0, psErrorText);
						if (*var_4 == 0)
						{
							//loc_1411C
							*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZ:result_struct", "result_values", (void *)result_struct_ptr);
							if (*var_4 != 0)
							{
								psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZ_RESULT_STRUCT_STR, IMGZ_RESULT_STRUCT_DQ_NAME, (void *)result_struct_ptr)");
								ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1BE, 0, psErrorText);
								if (*var_4 == 0)
								{
									//loc_141B0
									*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
									if (*var_4 != 0)
									{
										psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
										ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
										//loc_14234  loc_14238  ld   [%fp+var_8], %g1
									}
									//else loc_14234 loc_14238  ld   [%fp+var_8], %g1

								}
								//else loc_14238  ld   [%fp+var_8], %g1
							}
							else
							{
								//loc_141B0
								*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
								if (*var_4 != 0)
								{
									psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
									ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
									//loc_14234  loc_14238  ld   [%fp+var_8], %g1
								}
								//else loc_14234 loc_14238  ld   [%fp+var_8], %g1
							}
						}
						//else loc_14238  ld   [%fp+var_8], %g1
					}
					else
					{
						//loc_1411C
						*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZ:result_struct", "result_values", (void *)result_struct_ptr);
						if (*var_4 != 0)
						{
							psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZ_RESULT_STRUCT_STR, IMGZ_RESULT_STRUCT_DQ_NAME, (void *)result_struct_ptr)");
							ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1BE, 0, psErrorText);
							if (*var_4 == 0)
							{
								//loc_141B0
								*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
								if (*var_4 != 0)
								{
									psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
									ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
									//loc_14234  loc_14238  ld   [%fp+var_8], %g1
								}
								//else loc_14234 loc_14238  ld   [%fp+var_8], %g1

							}
							//else loc_14238  ld   [%fp+var_8], %g1
						}
						else
						{
							//loc_141B0
							*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
							if (*var_4 != 0)
							{
								psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
								ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
								//loc_14234  loc_14238  ld   [%fp+var_8], %g1
							}
							//else loc_14234 loc_14238  ld   [%fp+var_8], %g1
						}
					}
				}
				//else loc_14238  ld   [%fp+var_8], %g1
			}
			else
			{
				//loc_14088
				*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZ:input_struct", "input_values", (void *)input_struct_ptr);
				if (*var_4 != 0)
				{
					psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZ_INPUT_STRUCT_STR, IMGZ_INPUT_STRUCT_DQ_NAME, (void *)input_struct_ptr)");
					ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1B5, 0, psErrorText);
					if (*var_4 == 0)
					{
						//loc_1411C
						*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZ:result_struct", "result_values", (void *)result_struct_ptr);
						if (*var_4 != 0)
						{
							psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZ_RESULT_STRUCT_STR, IMGZ_RESULT_STRUCT_DQ_NAME, (void *)result_struct_ptr)");
							ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1BE, 0, psErrorText);
							if (*var_4 == 0)
							{
								//loc_141B0
								*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
								if (*var_4 != 0)
								{
									psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
									ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
									//loc_14234  loc_14238  ld   [%fp+var_8], %g1
								}
								//else loc_14234 loc_14238  ld   [%fp+var_8], %g1

							}
							//else loc_14238  ld   [%fp+var_8], %g1
						}
						else
						{
							//loc_141B0
							*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
							if (*var_4 != 0)
							{
								psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
								ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
								//loc_14234  loc_14238  ld   [%fp+var_8], %g1
							}
							//else loc_14234 loc_14238  ld   [%fp+var_8], %g1
						}
					}
					//else loc_14238  ld   [%fp+var_8], %g1
				}
				else
				{
					//loc_1411C
					*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZ:result_struct", "result_values", (void *)result_struct_ptr);
					if (*var_4 != 0)
					{
						psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZ_RESULT_STRUCT_STR, IMGZ_RESULT_STRUCT_DQ_NAME, (void *)result_struct_ptr)");
						ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1BE, 0, psErrorText);
						if (*var_4 == 0)
						{
							//loc_141B0
							*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
							if (*var_4 != 0)
							{
								psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
								ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
								//loc_14234  loc_14238  ld   [%fp+var_8], %g1
							}
							//else loc_14234 loc_14238  ld   [%fp+var_8], %g1

						}
						//else loc_14238  ld   [%fp+var_8], %g1
					}
					else
					{
						//loc_141B0
						*var_4 = DQXA_create(IMGZxAP_functions_dq_handle_ptr, "IMGZxTC:tc_struct", "tc_values", (void *)tc_struct_ptr);
						if (*var_4 != 0)
						{
							psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_create( IMGZxAP_functions_dq_handle_ptr, IMGZxTC_TC_STRUCT_STR, IMGZ_TC_STRUCT_DQ_NAME, (void *)tc_struct_ptr)");
							ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x1C7, 0, psErrorText);
							//loc_14234  loc_14238  ld   [%fp+var_8], %g1
						}
						//else loc_14234 loc_14238  ld   [%fp+var_8], %g1
					}
				}
			}
		}
	}
	//loc_14238  ld   [%fp+var_8], %g1
	if (input_struct_ptr != NULL)
	{
		flag_l1 = DDXAxOBJECT_full_destroy("IMGZ:input_struct", (void**)&input_struct_ptr);
		if (flag_l1 != 0)
		{
			psErrorText = ERXAmakeContext("[%s:%s]", "imgzxap_functions_create_data_structure_cb", "(((1229806592) + 0x001A))");
			ERXAlogExceptionSingleLink(0x494D5C1A, flag_l1, "IMGZxAP_functions.c", 0x1CF,0,psErrorText);
			flag_l1 = 0x494D5C1A;
			//loc_142B4
		}
		//else loc_142B4
		//loc_142B4
		if (*var_4 == 0)
		{
			*var_4 = flag_l1;
			//loc_14328  ld  [%fp+var_C], %g1
		}
		else
		{
			if (flag_l1 != 0)
			{
				*var_18 = flag_l1;
				psErrorText = ERXAmakeContext("%s:Error ignored. Result set to OK", "imgzxap_functions_create_data_structure_cb");
				ERXAlogExceptionEx(0x45520FFF,var_18, "IMGZxAP_functions.c", 0x1CF,0,psErrorText);
				//loc_14328  ld  [%fp+var_C], %g1
			}
			//else loc_14328  ld  [%fp+var_C], %g1
		}
	}
	//else loc_14324  loc_14328  ld  [%fp+var_C], %g1
	//loc_14328
	if (result_struct_ptr != NULL)
	{
		flag_l1 = DDXAxOBJECT_full_destroy("IMGZ:result_struct", (void**)&result_struct_ptr);
		if (flag_l1 != 0)
		{
			psErrorText = ERXAmakeContext("[%s:%s]", "imgzxap_functions_create_data_structure_cb", "(((1229806592) + 0x001A))");
			ERXAlogExceptionSingleLink(0x494D5C1A, flag_l1, "IMGZxAP_functions.c", 0x1D5, 0, psErrorText);
			flag_l1 = 0x494D5C1A;
			//loc_143A4
		}
		//else loc_143A4
		//loc_143A4
		if (*var_4 == 0)
		{
			*var_4 = flag_l1;
			//loc_14418  ld  [%fp+var_10], %g1
		}
		else
		{
			if (flag_l1 != 0)
			{
				*var_18 = flag_l1;
				psErrorText = ERXAmakeContext("%s:Error ignored. Result set to OK", "imgzxap_functions_create_data_structure_cb");
				ERXAlogExceptionEx(0x45520FFF, var_18, "IMGZxAP_functions.c", 0x1D5, 0, psErrorText);
				//loc_14418  ld  [%fp+var_10], %g1
			}
			//else loc_14418  ld  [%fp+var_10], %g1
		}
	}
	//else loc_14414  loc_14418  ld  [%fp+var_10], %g1
	//loc_14418
	if (tc_struct_ptr != NULL)
	{
		flag_l1 = DDXAxOBJECT_full_destroy("IMGZxTC:tc_struct", (void**)&tc_struct_ptr);
		if (flag_l1 != 0)
		{
			psErrorText = ERXAmakeContext("[%s:%s]", "imgzxap_functions_create_data_structure_cb", "(((1229806592) + 0x001A))");
			ERXAlogExceptionSingleLink(0x494D5C1A, flag_l1, "IMGZxAP_functions.c", 0x1DB, 0, psErrorText);
			flag_l1 = 0x494D5C1A;
			//loc_14494
		}
		//else loc_14494
		//loc_14494
		returnValue = *var_4;
		if (returnValue == 0)
		{
			*var_4 = flag_l1;
			//loc_14508   ld  [%fp+var_4], %i0
		}
		else
		{
			if (flag_l1 != 0)
			{
				*var_18 = flag_l1;
				psErrorText = ERXAmakeContext("%s:Error ignored. Result set to OK", "imgzxap_functions_create_data_structure_cb");
				ERXAlogExceptionEx(0x45520FFF, var_18, "IMGZxAP_functions.c", 0x1DB, 0, psErrorText);
				//loc_14508  ld  [%fp+var_4], %i0
				returnValue = *var_4;
				if (returnValue == 0)
				{
					if (IMGZxAP_functions_dq_handle_ptr != NULL)
					{
						flag_o4 = 1;
					}
					if (i0 == NULL)
					{
						THXAtrace("IMGZ", 1, "imgzxap_functions_create_data_structure_cb", "< (%V%D), returnValue=%R",flag_o4,"*IMGZxAP_functions_dq_handle_ptr","DQXA:handle_t", IMGZxAP_functions_dq_handle_ptr,0);
					}
					else
					{
						//ld    [%i0+0xC], %o0
						THXAtrace(i0->unc0xC, 1, "imgzxap_functions_create_data_structure_cb", "< (%V%D), returnValue=%R",flag_o4,"*IMGZxAP_functions_dq_handle_ptr","DQXA:handle_t", IMGZxAP_functions_dq_handle_ptr,0);
					}
					return 0;
				}
				//else loc_1458C  cmp  %l0, 0
			}
			//else loc_1458C  cmp  %l0, 0
			//loc_1458C
			if (i0 == NULL)
			{
				THXAtrace("IMGZ", 1, "imgzxap_functions_create_data_structure_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
			}
			else
			{
				//ld    [%i0+0xC], %o0
				THXAtrace(i0->unc0xC, 1, "imgzxap_functions_create_data_structure_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
			}
			return returnValue;
		}
	}
	//else loc_14504  loc_14508  ld  [%fp+var_4], %i0
	//loc_14508
	returnValue = *var_4;
	if (returnValue == 0)
	{
		if (IMGZxAP_functions_dq_handle_ptr != NULL)
		{
			flag_o4 = 1;
		}
		if (i0 == NULL)
		{
			THXAtrace("IMGZ", 1, "imgzxap_functions_create_data_structure_cb", "< (%V%D), returnValue=%R", flag_o4, "*IMGZxAP_functions_dq_handle_ptr", "DQXA:handle_t", IMGZxAP_functions_dq_handle_ptr, 0);
		}
		else
		{
			//ld    [%i0+0xC], %o0
			THXAtrace(i0->unc0xC, 1, "imgzxap_functions_create_data_structure_cb", "< (%V%D), returnValue=%R", flag_o4, "*IMGZxAP_functions_dq_handle_ptr", "DQXA:handle_t", IMGZxAP_functions_dq_handle_ptr, 0);
		}
		return 0;
	}
	if (i0 == NULL)
	{
		THXAtrace("IMGZ", 1, "imgzxap_functions_create_data_structure_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
	}
	else
	{
		//ld    [%i0+0xC], %o0
		THXAtrace(i0->unc0xC, 1, "imgzxap_functions_create_data_structure_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
	}
	return returnValue;
}

int imgzxap_functions_setup_data_structure_cb(IMGZxAP_i0 *i0)
{
	if (i0 == NULL)
	{
		THXAtrace("IMGZ", 1, "imgzxap_functions_setup_data_structure_cb", "> ()");
		THXAtrace("IMGZ", 1, "imgzxap_functions_setup_data_structure_cb", "< (), returnValue=%R",0);
		return 0;
	}
	//ld    [%i0+0xC], %o0
	THXAtrace(i0->unc0xC, 1, "imgzxap_functions_setup_data_structure_cb", "> ()");
	THXAtrace(i0->unc0xC, 1, "imgzxap_functions_setup_data_structure_cb", "< (), returnValue=%R",0);
	return 0;
}

int imgzxap_functions_install_custom_services_cb(IMGZxAP_i0 *i0)
{
	if (i0 == NULL)
	{
		THXAtrace("IMGZ", 1, "imgzxap_functions_install_custom_services_cb", "> ()");
		THXAtrace("IMGZ", 1, "imgzxap_functions_install_custom_services_cb", "< (), returnValue=%R", 0);
		return 0;
	}
	//ld    [%i0+0xC], %o0
	THXAtrace(i0->unc0xC, 1, "imgzxap_functions_install_custom_services_cb", "> ()");
	THXAtrace(i0->unc0xC, 1, "imgzxap_functions_install_custom_services_cb", "< (), returnValue=%R", 0);
	return 0;
}

int imgzxap_functions_execute_service_cb(IMGZxAP_i0 *i0)
{
	if (i0 == NULL)
	{
		THXAtrace("IMGZ", 1, "imgzxap_functions_execute_service_cb", "> ()");
		THXAtrace("IMGZ", 1, "imgzxap_functions_execute_service_cb", "< (), returnValue=%R", 0);
		return 0;
	}
	//ld    [%i0+0xC], %o0
	THXAtrace(i0->unc0xC, 1, "imgzxap_functions_execute_service_cb", "> ()");
	THXAtrace(i0->unc0xC, 1, "imgzxap_functions_execute_service_cb", "< (), returnValue=%R", 0);
	return 0;
}

int imgzxap_functions_validate_input_parameters_cb(IMGZxAP_i0 *i0,bool *valid_ptr, IMGZ_error_message *error_message)
{
	char *psErrorText;
	int *var_4;
	int returnValue;
	int flag_o4;
	char *flag_o5;
	int flag_g2;
	int flag_g3;
	int flag_g4;
	int flag_sp;
	IMGZ_input_struct input_parms;//var_1C
	IMGZxTC_tc_struct tc_struct;//var_E8
	if (i0 == NULL)
	{
		THXAtrace("IMGZ", 1, "imgzxap_functions_validate_input_parameters_cb", "> (IMGZxAP_functions_dq_handle_ptr=%p, valid_ptr=%p, error_message=%p)", IMGZxAP_functions_dq_handle_ptr, valid_ptr, error_message);
	}
	else
	{
		//ld    [%i0+0xC], %o0
		THXAtrace(i0->unc0xC, 1, "imgzxap_functions_validate_input_parameters_cb", "> (IMGZxAP_functions_dq_handle_ptr=%p, valid_ptr=%p, error_message=%p)", IMGZxAP_functions_dq_handle_ptr, valid_ptr, error_message);
	}
	*var_4 = 0;
	if (valid_ptr == NULL)
	{
		psErrorText = ERXAmakeContext("Verification by %s failed: '%s' not TRUE", "imgzxap_functions_validate_input_parameters_cb", "(valid_ptr != NULL)");
		ERXAlogExceptionSingleLink_id(0x494D5C00,0,var_4, "IMGZxAP_functions.c", 0x26C,0,psErrorText);
		//loc_14868
	}
	//else loc_14868
	if (*var_4 == 0 && error_message == NULL)
	{
		psErrorText = ERXAmakeContext("Verification by %s failed: '%s' not TRUE", "imgzxap_functions_validate_input_parameters_cb", "(error_message != NULL)");
		ERXAlogExceptionSingleLink_id(0x494D5C00, 0, var_4, "IMGZxAP_functions.c", 0x26D, 0, psErrorText);
		//loc_148DC   ld  [%fp+var_4], %g1
	}
	//else loc_148DC  ld  [%fp+var_4], %g1
	//loc_148DC
	returnValue = *var_4;
	if (*var_4 == 0)
	{
		*var_4 = DQXA_get_values(IMGZxAP_functions_dq_handle_ptr, "input_values", (void *)&input_parms);
		if (*var_4 == 0)
		{
			*var_4 = DQXA_get_values(IMGZxAP_functions_dq_handle_ptr, "tc_values", (void *)&tc_struct);
			if (*var_4 == 0)
			{
				*valid_ptr = 1;
				if (input_parms.do_chuck_1 == 0)
				{
					if (input_parms.do_chuck_2 == 0)
					{
						*valid_ptr = 0;
						*var_4 = DDXA_var_string_alloc(error_message, "At least one chuck has to be selected.\n");
						if (*var_4 != 0)
						{
							psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DDXA_var_string_alloc( error_message, IMGZxAP_FUNCTIONS_SELECT_CHUCK_STR)");
							ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x287, 0, psErrorText);
							//loc_149DC
						}
						//else  loc_149DC
						//loc_149DC
						returnValue = *var_4;
						if (*valid_ptr == 1)
						{
							//loc_149F0   ld  [%fp+var_14], %g1
							if (input_parms.do_m_side == 0)
							{
								if (input_parms.do_e_side == 0)
								{
									*valid_ptr = 0;
									*var_4 = DDXA_var_string_alloc(error_message, "At least one side has to be selected.\n");
									if (*var_4 != 0)
									{
										psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DDXA_var_string_alloc( error_message, IMGZxAP_FUNCTIONS_SELECT_SIDE_STR)");
										ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x292, 0, psErrorText);
										//loc_14A78
									}
									//else  loc_14A78
									//loc_14A78
									returnValue = *var_4;
									if (*valid_ptr == 1)
									{
										//loc_14A8C  ld  [%fp+var_60], %g1
										if (tc_struct.doGridPlate[0] == 0)
										{
											if (tc_struct.doGridPlate[1] == 0)
											{
												if (tc_struct.doGridPlate[2] == 0)
												{
													if (tc_struct.doGridPlate[3] == 0)
													{
														*valid_ptr = 0;
														*var_4 = DDXA_var_string_alloc(error_message, "At least one grid plate has to be selected. (See Test Constants).\n");
														if (*var_4 != 0)
														{
															psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DDXA_var_string_alloc( error_message, IMGZxAP_FUNCTIONS_SELECT_GP_STR)");
															ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x2A1, 0, psErrorText);
															//loc_14B34
														}
														//else  loc_14B34
														//loc_14B34
														if (*valid_ptr == 1)
														{
															//loc_14B44  ld  [%fp+var_50], %g1
															returnValue = *var_4;
															if (tc_struct.doRefMark[0] == 0)
															{
																if (tc_struct.doRefMark[1] == 0)
																{
																	*valid_ptr = 0;
																	*var_4 = DDXA_var_string_alloc(error_message, "At least one reference mark has to be selected. (See Test Constants).\n");
																	returnValue = 0;
																	if (*var_4 != 0)
																	{
																		psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DDXA_var_string_alloc( error_message, IMGZxAP_FUNCTIONS_SELECT_RM_STR)");
																		ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x2AB, 0, psErrorText);
																		//loc_14BD0
																		returnValue = *var_4;
																		//loc_14BD4  loc_14BD8
																	}
																	//else loc_14BE0
																}
																//else  loc_14BD8  cmp  %l0, 0
															}
															//else  loc_14BD4  loc_14BD8  cmp  %l0, 0
														}
														else
														{
															//loc_14BD0 
															returnValue = *var_4;
															//loc_14BD4  loc_14BD8  cmp  %l0, 0
														}
														//loc_14BD8  cmp  %l0, 0
														if (returnValue != 0)
														{
															if (i0 == NULL)
															{
																THXAtrace("IMGZ", 1, "imgzxap_functions_validate_input_parameters_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>, *valid_ptr=<?>, *error_message=<?>), returnValue=%R", returnValue);
															}
															else
															{
																//ld    [%i0+0xC], %o0
																THXAtrace(i0->unc0xC, 1, "imgzxap_functions_validate_input_parameters_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>, *valid_ptr=<?>, *error_message=<?>), returnValue=%R", returnValue);
															}
															return returnValue;
														}
														//loc_14BE0
														if (valid_ptr != NULL)
														{
															flag_g4 = *valid_ptr;
															flag_g2 = 1;
														}
														else
														{
															flag_g4 = 0;
															flag_g2 = 0;
														}
														if (error_message == NULL)
														{
															//loc_14CF4
															flag_g3 = 0;
															flag_sp = 0;
															flag_o5 = 0;
														}
														else
														{
															flag_g3 = 1;
															flag_sp = error_message->max_len;
															flag_o5 = error_message->buf;
														}
														if (IMGZxAP_functions_dq_handle_ptr == NULL)
														{
															flag_o4 = 0;
														}
														else
														{
															flag_o4 = 1;
														}
														if (i0 == NULL)
														{
															THXAtrace("IMGZ", 1, "imgzxap_functions_validate_input_parameters_cb", "< (%V%D, *valid_ptr=%V%i, (*error_message).max_len=%V%u (*error_message).buf=%V%p), returnValue=%R", flag_o4, "*IMGZxAP_functions_dq_handle_ptr", "DQXA:handle_t", IMGZxAP_functions_dq_handle_ptr, flag_g2, flag_g4, flag_g3, flag_sp, flag_g3, flag_o5, returnValue);
														}
														else
														{
															//ld    [%i0+0xC], %o0
															THXAtrace(i0->unc0xC, 1, "imgzxap_functions_validate_input_parameters_cb", "< (%V%D, *valid_ptr=%V%i, (*error_message).max_len=%V%u (*error_message).buf=%V%p), returnValue=%R", flag_o4, "*IMGZxAP_functions_dq_handle_ptr", "DQXA:handle_t", IMGZxAP_functions_dq_handle_ptr, flag_g2, flag_g4, flag_g3, flag_sp, flag_g3, flag_o5, returnValue);
														}
														return returnValue;
													}
													//else  loc_14B44  ld  [%fp+var_50], %g1
												}
												//else  loc_14B44  ld  [%fp+var_50], %g1
											}
											//else  loc_14B44  ld  [%fp+var_50], %g1
										}
										//else  loc_14B44  ld  [%fp+var_50], %g1
										//loc_14B44  ld  [%fp+var_50], %g1
										returnValue = *var_4;
										if (tc_struct.doRefMark[0] == 0)
										{
											if (tc_struct.doRefMark[1] == 0)
											{
												*valid_ptr = 0;
												*var_4 = DDXA_var_string_alloc(error_message, "At least one reference mark has to be selected. (See Test Constants).\n");
												returnValue = 0;
												if (*var_4 != 0)
												{
													psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DDXA_var_string_alloc( error_message, IMGZxAP_FUNCTIONS_SELECT_RM_STR)");
													ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x2AB, 0, psErrorText);
													//loc_14BD0
													returnValue = *var_4;
													//loc_14BD4  loc_14BD8
												}
												//else loc_14BE0
											}
											//else  loc_14BD8  cmp  %l0, 0
										}
										//else  loc_14BD4  loc_14BD8  cmp  %l0, 0
									}
									//else  loc_14BD4  loc_14BD8  cmp  %l0, 0
									//loc_14BD8  cmp  %l0, 0
									if (returnValue != 0)
									{
										if (i0 == NULL)
										{
											THXAtrace("IMGZ", 1, "imgzxap_functions_validate_input_parameters_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>, *valid_ptr=<?>, *error_message=<?>), returnValue=%R", returnValue);
										}
										else
										{
											//ld    [%i0+0xC], %o0
											THXAtrace(i0->unc0xC, 1, "imgzxap_functions_validate_input_parameters_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>, *valid_ptr=<?>, *error_message=<?>), returnValue=%R", returnValue);
										}
										return returnValue;
									}
									//loc_14BE0
									if (valid_ptr != NULL)
									{
										flag_g4 = *valid_ptr;
										flag_g2 = 1;
									}
									else
									{
										flag_g4 = 0;
										flag_g2 = 0;
									}
									if (error_message == NULL)
									{
										//loc_14CF4
										flag_g3 = 0;
										flag_sp = 0;
										flag_o5 = 0;
									}
									else
									{
										flag_g3 = 1;
										flag_sp = error_message->max_len;
										flag_o5 = error_message->buf;
									}
									if (IMGZxAP_functions_dq_handle_ptr == NULL)
									{
										flag_o4 = 0;
									}
									else
									{
										flag_o4 = 1;
									}
									if (i0 == NULL)
									{
										THXAtrace("IMGZ", 1, "imgzxap_functions_validate_input_parameters_cb", "< (%V%D, *valid_ptr=%V%i, (*error_message).max_len=%V%u (*error_message).buf=%V%p), returnValue=%R", flag_o4, "*IMGZxAP_functions_dq_handle_ptr", "DQXA:handle_t", IMGZxAP_functions_dq_handle_ptr, flag_g2, flag_g4, flag_g3, flag_sp, flag_g3, flag_o5, returnValue);
									}
									else
									{
										//ld    [%i0+0xC], %o0
										THXAtrace(i0->unc0xC, 1, "imgzxap_functions_validate_input_parameters_cb", "< (%V%D, *valid_ptr=%V%i, (*error_message).max_len=%V%u (*error_message).buf=%V%p), returnValue=%R", flag_o4, "*IMGZxAP_functions_dq_handle_ptr", "DQXA:handle_t", IMGZxAP_functions_dq_handle_ptr, flag_g2, flag_g4, flag_g3, flag_sp, flag_g3, flag_o5, returnValue);
									}
									return returnValue;
								}
								//else loc_14A8C  ld  [%fp+var_60], %g1
							}
							//else loc_14A8C  ld  [%fp+var_60], %g1
							//loc_14A8C  ld  [%fp+var_60], %g1
							if (tc_struct.doGridPlate[0] == 0)
							{
								if (tc_struct.doGridPlate[1] == 0)
								{
									if (tc_struct.doGridPlate[2] == 0)
									{
										if (tc_struct.doGridPlate[3] == 0)
										{
											*valid_ptr = 0;
											*var_4 = DDXA_var_string_alloc(error_message, "At least one grid plate has to be selected. (See Test Constants).\n");
											if (*var_4 != 0)
											{
												psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DDXA_var_string_alloc( error_message, IMGZxAP_FUNCTIONS_SELECT_GP_STR)");
												ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x2A1, 0, psErrorText);
												//loc_14B34
											}
											//else  loc_14B34
											//loc_14B34
											if (*valid_ptr == 1)
											{
												//loc_14B44  ld  [%fp+var_50], %g1
												returnValue = *var_4;
												if (tc_struct.doRefMark[0] == 0)
												{
													if (tc_struct.doRefMark[1] == 0)
													{
														*valid_ptr = 0;
														*var_4 = DDXA_var_string_alloc(error_message, "At least one reference mark has to be selected. (See Test Constants).\n");
														returnValue = 0;
														if (*var_4 != 0)
														{
															psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DDXA_var_string_alloc( error_message, IMGZxAP_FUNCTIONS_SELECT_RM_STR)");
															ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x2AB, 0, psErrorText);
															//loc_14BD0
															returnValue = *var_4;
															//loc_14BD4  loc_14BD8
														}
														//else loc_14BE0
													}
													//else  loc_14BD8  cmp  %l0, 0
												}
												//else  loc_14BD4  loc_14BD8  cmp  %l0, 0
											}
											else
											{
												//loc_14BD0 
												returnValue = *var_4;
												//loc_14BD4  loc_14BD8  cmp  %l0, 0
											}
											//loc_14BD8  cmp  %l0, 0
											if (returnValue != 0)
											{
												if (i0 == NULL)
												{
													THXAtrace("IMGZ", 1, "imgzxap_functions_validate_input_parameters_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>, *valid_ptr=<?>, *error_message=<?>), returnValue=%R", returnValue);
												}
												else
												{
													//ld    [%i0+0xC], %o0
													THXAtrace(i0->unc0xC, 1, "imgzxap_functions_validate_input_parameters_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>, *valid_ptr=<?>, *error_message=<?>), returnValue=%R", returnValue);
												}
												return returnValue;
											}
											//loc_14BE0
											if (valid_ptr != NULL)
											{
												flag_g4 = *valid_ptr;
												flag_g2 = 1;
											}
											else
											{
												flag_g4 = 0;
												flag_g2 = 0;
											}
											if (error_message == NULL)
											{
												//loc_14CF4
												flag_g3 = 0;
												flag_sp = 0;
												flag_o5 = 0;
											}
											else
											{
												flag_g3 = 1;
												flag_sp = error_message->max_len;
												flag_o5 = error_message->buf;
											}
											if (IMGZxAP_functions_dq_handle_ptr == NULL)
											{
												flag_o4 = 0;
											}
											else
											{
												flag_o4 = 1;
											}
											if (i0 == NULL)
											{
												THXAtrace("IMGZ", 1, "imgzxap_functions_validate_input_parameters_cb", "< (%V%D, *valid_ptr=%V%i, (*error_message).max_len=%V%u (*error_message).buf=%V%p), returnValue=%R", flag_o4, "*IMGZxAP_functions_dq_handle_ptr", "DQXA:handle_t", IMGZxAP_functions_dq_handle_ptr, flag_g2, flag_g4, flag_g3, flag_sp, flag_g3, flag_o5, returnValue);
											}
											else
											{
												//ld    [%i0+0xC], %o0
												THXAtrace(i0->unc0xC, 1, "imgzxap_functions_validate_input_parameters_cb", "< (%V%D, *valid_ptr=%V%i, (*error_message).max_len=%V%u (*error_message).buf=%V%p), returnValue=%R", flag_o4, "*IMGZxAP_functions_dq_handle_ptr", "DQXA:handle_t", IMGZxAP_functions_dq_handle_ptr, flag_g2, flag_g4, flag_g3, flag_sp, flag_g3, flag_o5, returnValue);
											}
											return returnValue;
										}
										//else  loc_14B44  ld  [%fp+var_50], %g1
									}
									//else  loc_14B44  ld  [%fp+var_50], %g1
								}
								//else  loc_14B44  ld  [%fp+var_50], %g1
							}
							//else  loc_14B44  ld  [%fp+var_50], %g1
							//loc_14B44  ld  [%fp+var_50], %g1
							returnValue = *var_4;
							if (tc_struct.doRefMark[0] == 0)
							{
								if (tc_struct.doRefMark[1] == 0)
								{
									*valid_ptr = 0;
									*var_4 = DDXA_var_string_alloc(error_message, "At least one reference mark has to be selected. (See Test Constants).\n");
									returnValue = 0;
									if (*var_4 != 0)
									{
										psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DDXA_var_string_alloc( error_message, IMGZxAP_FUNCTIONS_SELECT_RM_STR)");
										ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x2AB, 0, psErrorText);
										//loc_14BD0
										returnValue = *var_4;
										//loc_14BD4  loc_14BD8
									}
									//else loc_14BE0
								}
								//else  loc_14BD8  cmp  %l0, 0
							}
							//else  loc_14BD4  loc_14BD8  cmp  %l0, 0
						}
						//else  loc_14BD4  loc_14BD8  cmp  %l0, 0
						//loc_14BD4  loc_14BD8  cmp  %l0, 0
						if (returnValue != 0)
						{
							if (i0 == NULL)
							{
								THXAtrace("IMGZ", 1, "imgzxap_functions_validate_input_parameters_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>, *valid_ptr=<?>, *error_message=<?>), returnValue=%R", returnValue);
							}
							else
							{
								//ld    [%i0+0xC], %o0
								THXAtrace(i0->unc0xC, 1, "imgzxap_functions_validate_input_parameters_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>, *valid_ptr=<?>, *error_message=<?>), returnValue=%R", returnValue);
							}
							return returnValue;
						}
						//loc_14BE0
						if (valid_ptr != NULL)
						{
							flag_g4 = *valid_ptr;
							flag_g2 = 1;
						}
						else
						{
							flag_g4 = 0;
							flag_g2 = 0;
						}
						if (error_message == NULL)
						{
							//loc_14CF4
							flag_g3 = 0;
							flag_sp = 0;
							flag_o5 = 0;
						}
						else
						{
							flag_g3 = 1;
							flag_sp = error_message->max_len;
							flag_o5 = error_message->buf;
						}
						if (IMGZxAP_functions_dq_handle_ptr == NULL)
						{
							flag_o4 = 0;
						}
						else
						{
							flag_o4 = 1;
						}
						if (i0 == NULL)
						{
							THXAtrace("IMGZ", 1, "imgzxap_functions_validate_input_parameters_cb", "< (%V%D, *valid_ptr=%V%i, (*error_message).max_len=%V%u (*error_message).buf=%V%p), returnValue=%R", flag_o4, "*IMGZxAP_functions_dq_handle_ptr", "DQXA:handle_t", IMGZxAP_functions_dq_handle_ptr, flag_g2, flag_g4, flag_g3, flag_sp, flag_g3, flag_o5, returnValue);
						}
						else
						{
							//ld    [%i0+0xC], %o0
							THXAtrace(i0->unc0xC, 1, "imgzxap_functions_validate_input_parameters_cb", "< (%V%D, *valid_ptr=%V%i, (*error_message).max_len=%V%u (*error_message).buf=%V%p), returnValue=%R", flag_o4, "*IMGZxAP_functions_dq_handle_ptr", "DQXA:handle_t", IMGZxAP_functions_dq_handle_ptr, flag_g2, flag_g4, flag_g3, flag_sp, flag_g3, flag_o5, returnValue);
						}
						return returnValue;
					}
					//else  loc_149F0   ld  [%fp+var_14], %g1
				}
				//else  loc_149F0   ld  [%fp+var_14], %g1
				//loc_149F0   ld  [%fp+var_14], %g1
				if (input_parms.do_m_side == 0)
				{
					if (input_parms.do_e_side == 0)
					{
						*valid_ptr = 0;
						*var_4 = DDXA_var_string_alloc(error_message, "At least one side has to be selected.\n");
						if (*var_4 != 0)
						{
							psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DDXA_var_string_alloc( error_message, IMGZxAP_FUNCTIONS_SELECT_SIDE_STR)");
							ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x292, 0, psErrorText);
							//loc_14A78
						}
						//else  loc_14A78
						//loc_14A78
						returnValue = *var_4;
						if (*valid_ptr == 1)
						{
							//loc_14A8C  ld  [%fp+var_60], %g1
							if (tc_struct.doGridPlate[0] == 0)
							{
								if (tc_struct.doGridPlate[1] == 0)
								{
									if (tc_struct.doGridPlate[2] == 0)
									{
										if (tc_struct.doGridPlate[3] == 0)
										{
											*valid_ptr = 0;
											*var_4 = DDXA_var_string_alloc(error_message, "At least one grid plate has to be selected. (See Test Constants).\n");
											if (*var_4 != 0)
											{
												psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DDXA_var_string_alloc( error_message, IMGZxAP_FUNCTIONS_SELECT_GP_STR)");
												ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x2A1, 0, psErrorText);
												//loc_14B34
											}
											//else  loc_14B34
											//loc_14B34
											if (*valid_ptr == 1)
											{
												//loc_14B44  ld  [%fp+var_50], %g1
												returnValue = *var_4;
												if (tc_struct.doRefMark[0] == 0)
												{
													if (tc_struct.doRefMark[1] == 0)
													{
														*valid_ptr = 0;
														*var_4 = DDXA_var_string_alloc(error_message, "At least one reference mark has to be selected. (See Test Constants).\n");
														returnValue = 0;
														if (*var_4 != 0)
														{
															psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DDXA_var_string_alloc( error_message, IMGZxAP_FUNCTIONS_SELECT_RM_STR)");
															ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x2AB, 0, psErrorText);
															//loc_14BD0
															returnValue = *var_4;
															//loc_14BD4  loc_14BD8
														}
														//else loc_14BE0
													}
													//else  loc_14BD8  cmp  %l0, 0
												}
												//else  loc_14BD4  loc_14BD8  cmp  %l0, 0
											}
											else
											{
												//loc_14BD0 
												returnValue = *var_4;
												//loc_14BD4  loc_14BD8  cmp  %l0, 0
											}
											//loc_14BD8  cmp  %l0, 0
											if (returnValue != 0)
											{
												if (i0 == NULL)
												{
													THXAtrace("IMGZ", 1, "imgzxap_functions_validate_input_parameters_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>, *valid_ptr=<?>, *error_message=<?>), returnValue=%R", returnValue);
												}
												else
												{
													//ld    [%i0+0xC], %o0
													THXAtrace(i0->unc0xC, 1, "imgzxap_functions_validate_input_parameters_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>, *valid_ptr=<?>, *error_message=<?>), returnValue=%R", returnValue);
												}
												return returnValue;
											}
											//loc_14BE0
											if (valid_ptr != NULL)
											{
												flag_g4 = *valid_ptr;
												flag_g2 = 1;
											}
											else
											{
												flag_g4 = 0;
												flag_g2 = 0;
											}
											if (error_message == NULL)
											{
												//loc_14CF4
												flag_g3 = 0;
												flag_sp = 0;
												flag_o5 = 0;
											}
											else
											{
												flag_g3 = 1;
												flag_sp = error_message->max_len;
												flag_o5 = error_message->buf;
											}
											if (IMGZxAP_functions_dq_handle_ptr == NULL)
											{
												flag_o4 = 0;
											}
											else
											{
												flag_o4 = 1;
											}
											if (i0 == NULL)
											{
												THXAtrace("IMGZ", 1, "imgzxap_functions_validate_input_parameters_cb", "< (%V%D, *valid_ptr=%V%i, (*error_message).max_len=%V%u (*error_message).buf=%V%p), returnValue=%R", flag_o4, "*IMGZxAP_functions_dq_handle_ptr", "DQXA:handle_t", IMGZxAP_functions_dq_handle_ptr, flag_g2, flag_g4, flag_g3, flag_sp, flag_g3, flag_o5, returnValue);
											}
											else
											{
												//ld    [%i0+0xC], %o0
												THXAtrace(i0->unc0xC, 1, "imgzxap_functions_validate_input_parameters_cb", "< (%V%D, *valid_ptr=%V%i, (*error_message).max_len=%V%u (*error_message).buf=%V%p), returnValue=%R", flag_o4, "*IMGZxAP_functions_dq_handle_ptr", "DQXA:handle_t", IMGZxAP_functions_dq_handle_ptr, flag_g2, flag_g4, flag_g3, flag_sp, flag_g3, flag_o5, returnValue);
											}
											return returnValue;
										}
										//else  loc_14B44  ld  [%fp+var_50], %g1
									}
									//else  loc_14B44  ld  [%fp+var_50], %g1
								}
								//else  loc_14B44  ld  [%fp+var_50], %g1
							}
							//else  loc_14B44  ld  [%fp+var_50], %g1
							//loc_14B44  ld  [%fp+var_50], %g1
							returnValue = *var_4;
							if (tc_struct.doRefMark[0] == 0)
							{
								if (tc_struct.doRefMark[1] == 0)
								{
									*valid_ptr = 0;
									*var_4 = DDXA_var_string_alloc(error_message, "At least one reference mark has to be selected. (See Test Constants).\n");
									returnValue = 0;
									if (*var_4 != 0)
									{
										psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DDXA_var_string_alloc( error_message, IMGZxAP_FUNCTIONS_SELECT_RM_STR)");
										ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x2AB, 0, psErrorText);
										//loc_14BD0
										returnValue = *var_4;
										//loc_14BD4  loc_14BD8
									}
									//else loc_14BE0
								}
								//else  loc_14BD8  cmp  %l0, 0
							}
							//else  loc_14BD4  loc_14BD8  cmp  %l0, 0
						}
						//else  loc_14BD4  loc_14BD8  cmp  %l0, 0
						//loc_14BD8  cmp  %l0, 0
						if (returnValue != 0)
						{
							if (i0 == NULL)
							{
								THXAtrace("IMGZ", 1, "imgzxap_functions_validate_input_parameters_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>, *valid_ptr=<?>, *error_message=<?>), returnValue=%R", returnValue);
							}
							else
							{
								//ld    [%i0+0xC], %o0
								THXAtrace(i0->unc0xC, 1, "imgzxap_functions_validate_input_parameters_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>, *valid_ptr=<?>, *error_message=<?>), returnValue=%R", returnValue);
							}
							return returnValue;
						}
						//loc_14BE0
						if (valid_ptr != NULL)
						{
							flag_g4 = *valid_ptr;
							flag_g2 = 1;
						}
						else
						{
							flag_g4 = 0;
							flag_g2 = 0;
						}
						if (error_message == NULL)
						{
							//loc_14CF4
							flag_g3 = 0;
							flag_sp = 0;
							flag_o5 = 0;
						}
						else
						{
							flag_g3 = 1;
							flag_sp = error_message->max_len;
							flag_o5 = error_message->buf;
						}
						if (IMGZxAP_functions_dq_handle_ptr == NULL)
						{
							flag_o4 = 0;
						}
						else
						{
							flag_o4 = 1;
						}
						if (i0 == NULL)
						{
							THXAtrace("IMGZ", 1, "imgzxap_functions_validate_input_parameters_cb", "< (%V%D, *valid_ptr=%V%i, (*error_message).max_len=%V%u (*error_message).buf=%V%p), returnValue=%R", flag_o4, "*IMGZxAP_functions_dq_handle_ptr", "DQXA:handle_t", IMGZxAP_functions_dq_handle_ptr, flag_g2, flag_g4, flag_g3, flag_sp, flag_g3, flag_o5, returnValue);
						}
						else
						{
							//ld    [%i0+0xC], %o0
							THXAtrace(i0->unc0xC, 1, "imgzxap_functions_validate_input_parameters_cb", "< (%V%D, *valid_ptr=%V%i, (*error_message).max_len=%V%u (*error_message).buf=%V%p), returnValue=%R", flag_o4, "*IMGZxAP_functions_dq_handle_ptr", "DQXA:handle_t", IMGZxAP_functions_dq_handle_ptr, flag_g2, flag_g4, flag_g3, flag_sp, flag_g3, flag_o5, returnValue);
						}
						return returnValue;
					}
					//else loc_14A8C  ld  [%fp+var_60], %g1
				}
				//else loc_14A8C  ld  [%fp+var_60], %g1
				//loc_14A8C  ld  [%fp+var_60], %g1
				if (tc_struct.doGridPlate[0] == 0)
				{
					if (tc_struct.doGridPlate[1] == 0)
					{
						if (tc_struct.doGridPlate[2] == 0)
						{
							if (tc_struct.doGridPlate[3] == 0)
							{
								*valid_ptr = 0;
								*var_4 = DDXA_var_string_alloc(error_message, "At least one grid plate has to be selected. (See Test Constants).\n");
								if (*var_4 != 0)
								{
									psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DDXA_var_string_alloc( error_message, IMGZxAP_FUNCTIONS_SELECT_GP_STR)");
									ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x2A1, 0, psErrorText);
									//loc_14B34
								}
								//else  loc_14B34
								//loc_14B34
								if (*valid_ptr == 1)
								{
									//loc_14B44  ld  [%fp+var_50], %g1
									returnValue = *var_4;
									if (tc_struct.doRefMark[0] == 0)
									{
										if (tc_struct.doRefMark[1] == 0)
										{
											*valid_ptr = 0;
											*var_4 = DDXA_var_string_alloc(error_message, "At least one reference mark has to be selected. (See Test Constants).\n");
											returnValue = 0;
											if (*var_4 != 0)
											{
												psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DDXA_var_string_alloc( error_message, IMGZxAP_FUNCTIONS_SELECT_RM_STR)");
												ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x2AB, 0, psErrorText);
												//loc_14BD0
												returnValue = *var_4;
												//loc_14BD4  loc_14BD8
											}
											//else loc_14BE0
										}
										//else  loc_14BD8  cmp  %l0, 0
									}
									//else  loc_14BD4  loc_14BD8  cmp  %l0, 0
								}
								else
								{
									//loc_14BD0 
									returnValue = *var_4;
									//loc_14BD4  loc_14BD8  cmp  %l0, 0
								}
								//loc_14BD8  cmp  %l0, 0
								if (returnValue != 0)
								{
									if (i0 == NULL)
									{
										THXAtrace("IMGZ", 1, "imgzxap_functions_validate_input_parameters_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>, *valid_ptr=<?>, *error_message=<?>), returnValue=%R", returnValue);
									}
									else
									{
										//ld    [%i0+0xC], %o0
										THXAtrace(i0->unc0xC, 1, "imgzxap_functions_validate_input_parameters_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>, *valid_ptr=<?>, *error_message=<?>), returnValue=%R", returnValue);
									}
									return returnValue;
								}
								//loc_14BE0
								if (valid_ptr != NULL)
								{
									flag_g4 = *valid_ptr;
									flag_g2 = 1;
								}
								else
								{
									flag_g4 = 0;
									flag_g2 = 0;
								}
								if (error_message == NULL)
								{
									//loc_14CF4
									flag_g3 = 0;
									flag_sp = 0;
									flag_o5 = 0;
								}
								else
								{
									flag_g3 = 1;
									flag_sp = error_message->max_len;
									flag_o5 = error_message->buf;
								}
								if (IMGZxAP_functions_dq_handle_ptr == NULL)
								{
									flag_o4 = 0;
								}
								else
								{
									flag_o4 = 1;
								}
								if (i0 == NULL)
								{
									THXAtrace("IMGZ", 1, "imgzxap_functions_validate_input_parameters_cb", "< (%V%D, *valid_ptr=%V%i, (*error_message).max_len=%V%u (*error_message).buf=%V%p), returnValue=%R", flag_o4, "*IMGZxAP_functions_dq_handle_ptr", "DQXA:handle_t", IMGZxAP_functions_dq_handle_ptr, flag_g2, flag_g4, flag_g3, flag_sp, flag_g3, flag_o5, returnValue);
								}
								else
								{
									//ld    [%i0+0xC], %o0
									THXAtrace(i0->unc0xC, 1, "imgzxap_functions_validate_input_parameters_cb", "< (%V%D, *valid_ptr=%V%i, (*error_message).max_len=%V%u (*error_message).buf=%V%p), returnValue=%R", flag_o4, "*IMGZxAP_functions_dq_handle_ptr", "DQXA:handle_t", IMGZxAP_functions_dq_handle_ptr, flag_g2, flag_g4, flag_g3, flag_sp, flag_g3, flag_o5, returnValue);
								}
								return returnValue;
							}
							//else  loc_14B44  ld  [%fp+var_50], %g1
						}
						//else  loc_14B44  ld  [%fp+var_50], %g1
					}
					//else  loc_14B44  ld  [%fp+var_50], %g1
				}
				//else  loc_14B44  ld  [%fp+var_50], %g1
				//loc_14B44  ld  [%fp+var_50], %g1
				returnValue = *var_4;
				if (tc_struct.doRefMark[0] == 0)
				{
					if (tc_struct.doRefMark[1] == 0)
					{
						*valid_ptr = 0;
						*var_4 = DDXA_var_string_alloc(error_message, "At least one reference mark has to be selected. (See Test Constants).\n");
						returnValue = 0;
						if (*var_4 != 0)
						{
							psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DDXA_var_string_alloc( error_message, IMGZxAP_FUNCTIONS_SELECT_RM_STR)");
							ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x2AB, 0, psErrorText);
							//loc_14BD0
							returnValue = *var_4;
							//loc_14BD4  loc_14BD8
						}
						//else loc_14BE0
					}
					//else  loc_14BD8  cmp  %l0, 0
				}
				//else  loc_14BD4  loc_14BD8  cmp  %l0, 0
				if (returnValue == 0)
				{
					//loc_14BE0
					if (valid_ptr != NULL)
					{

						flag_g4 = *valid_ptr;
						flag_g2 = 1;
					}
					else
					{
						flag_g4 = 0;
						flag_g2 = 0;
					}
					if (error_message == NULL)
					{
						//loc_14CF4
						flag_g3 = 0;
						flag_sp = 0;
						flag_o5 = 0;
					}
					else
					{
						flag_g3 = 1;
						flag_sp = error_message->max_len;
						flag_o5 = error_message->buf;
					}
					if (IMGZxAP_functions_dq_handle_ptr == NULL)
					{
						flag_o4 = 0;
					}
					else
					{
						flag_o4 = 1;
					}
					if (i0 == NULL)
					{
						THXAtrace("IMGZ", 1, "imgzxap_functions_validate_input_parameters_cb", "< (%V%D, *valid_ptr=%V%i, (*error_message).max_len=%V%u (*error_message).buf=%V%p), returnValue=%R", flag_o4, "*IMGZxAP_functions_dq_handle_ptr", "DQXA:handle_t", IMGZxAP_functions_dq_handle_ptr, flag_g2, flag_g4, flag_g3, flag_sp, flag_g3, flag_o5, returnValue);
					}
					else
					{
						//ld    [%i0+0xC], %o0
						THXAtrace(i0->unc0xC, 1, "imgzxap_functions_validate_input_parameters_cb", "< (%V%D, *valid_ptr=%V%i, (*error_message).max_len=%V%u (*error_message).buf=%V%p), returnValue=%R", flag_o4, "*IMGZxAP_functions_dq_handle_ptr", "DQXA:handle_t", IMGZxAP_functions_dq_handle_ptr, flag_g2, flag_g4, flag_g3, flag_sp, flag_g3, flag_o5, returnValue);
					}
					return returnValue;
				}
				//else loc_14CA8
			}
			else
			{
				//loc_14CEC
				returnValue = *var_4;
				//loc_14CA8
			}
		}
		else
		{
			//loc_14CEC
			returnValue = *var_4;
			//loc_14CA8
		}
	}
	//else loc_14CA4   loc_14CA8
	//loc_14CA8
	if (i0 == NULL)
	{
		THXAtrace("IMGZ", 1, "imgzxap_functions_validate_input_parameters_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>, *valid_ptr=<?>, *error_message=<?>), returnValue=%R", returnValue);
	}
	else
	{
		//ld    [%i0+0xC], %o0
		THXAtrace(i0->unc0xC, 1, "imgzxap_functions_validate_input_parameters_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>, *valid_ptr=<?>, *error_message=<?>), returnValue=%R", returnValue);
	}
	return returnValue;
}

int imgzxap_functions_get_time_limits_for_step_cb(IMGZxAP_i0 *i0, TTXA_step_id step_id, TTXAxAP_step_time_limits_struct *step_limits_ptr)
{
	char *psErrorText;
	int *var_4 = NULL;
	int returnValue;
	int flag_o4;
	if (i0 == NULL)
	{
		THXAtrace("IMGZ", 1, "imgzxap_functions_get_time_limits_for_step_cb", "> (%D, step_limits_ptr=%p)", "step_id", "TTXA:step_id", step_id, step_limits_ptr);
	}
	else
	{
		THXAtrace(i0->unc0xC, 1, "imgzxap_functions_get_time_limits_for_step_cb", "> (%D, step_limits_ptr=%p)", "step_id", "TTXA:step_id", step_id, step_limits_ptr);
	}
	if (step_limits_ptr == NULL)
	{
		psErrorText = ERXAmakeContext("Verification by %s failed: '%s' not TRUE", "imgzxap_functions_get_time_limits_for_step_cb", "(step_limits_ptr != NULL)");
		ERXAlogExceptionSingleLink_id(0x494D5C00, 0, var_4, "IMGZxAP_functions.c", 0x2D6, 0, psErrorText);
		returnValue = *var_4;
		if (returnValue != 0)
		{
			//loc_14EC0  cmp     %i0, 0
			if (i0 == NULL)
			{
				THXAtrace("IMGZ", 1, "imgzxap_functions_get_time_limits_for_step_cb", "< (*step_limits_ptr=<?>), returnValue=%R", returnValue);
			}
			else
			{
				THXAtrace(i0->unc0xC, 1, "imgzxap_functions_get_time_limits_for_step_cb", "< (*step_limits_ptr=<?>), returnValue=%R", returnValue);
			}
			return returnValue;
		}
		//else loc_14DE4
	}
	//else loc_14DE4
	//loc_14DE4
	if (step_id != 2)
	{
		if (step_id > 2)
		{
			//loc_14E10
			if (step_id != 3)
			{
				if (step_id == 4)
				{
					//loc_14E44
					step_limits_ptr->maximum = 0xA;
					//loc_14E48
				}
			}
			else
			{
				//loc_14E38
				step_limits_ptr->maximum = 0x258;
				//loc_14E48
			}
		}
		else
		{
			if (step_id == 1)
			{
				//loc_14E28
				step_limits_ptr->maximum = 0x1A4;
				//loc_14E48
			}
			//else  loc_14E4C  ld[%fp+var_4], %l0
		}
	}
	else
	{
		//loc_14E30  mov  0x258, %g1
		step_limits_ptr->maximum = 0x258;
		//loc_14E48
	}
	returnValue = *var_4;
	if (returnValue != 0)
	{
		//loc_14EC0
		if (i0 == NULL)
		{
			THXAtrace("IMGZ", 1, "imgzxap_functions_get_time_limits_for_step_cb", "< (*step_limits_ptr=<?>), returnValue=%R", returnValue);
		}
		else
		{
			THXAtrace(i0->unc0xC, 1, "imgzxap_functions_get_time_limits_for_step_cb", "< (*step_limits_ptr=<?>), returnValue=%R", returnValue);
		}
		return returnValue;
	}
	if (step_limits_ptr == NULL)
	{
		flag_o4 = 0;
	}
	else
	{
		flag_o4 = 1;
	}
	if (i0 == NULL)
	{
		THXAtrace("IMGZ", 1, "imgzxap_functions_get_time_limits_for_step_cb", "< (%V%D), returnValue=%R",flag_o4,"*step_limits_ptr","TTXAxAP:step_time_limits_struct",*step_limits_ptr, returnValue);
	}
	else
	{
		THXAtrace(i0->unc0xC, 1, "imgzxap_functions_get_time_limits_for_step_cb", "< (%V%D), returnValue=%R", flag_o4, "*step_limits_ptr", "TTXAxAP:step_time_limits_struct", *step_limits_ptr, returnValue);
	}
	return returnValue;
}

int imgzxap_functions_should_step_be_executed_cb(IMGZxAP_i0 *i0, TTXA_step_id step_id,int *answer_ptr)
{
	char *psErrorText;
	int *var_4;
	int returnValue;
	int flag_o4;
	int flag_g2;
	int flag_g3;
	IMGZ_input_struct input_parms;//var_1C
	if (i0 == NULL)
	{
		THXAtrace("IMGZ", 1, "imgzxap_functions_should_step_be_executed_cb", "> (IMGZxAP_functions_dq_handle_ptr=%p, %D, answer_ptr=%p)", IMGZxAP_functions_dq_handle_ptr, "step_id", "TTXA:step_id", step_id, answer_ptr);
	}
	else
	{
		THXAtrace(i0->unc0xC, 1, "imgzxap_functions_should_step_be_executed_cb", "> (IMGZxAP_functions_dq_handle_ptr=%p, %D, answer_ptr=%p)", IMGZxAP_functions_dq_handle_ptr, "step_id", "TTXA:step_id", step_id, answer_ptr);
	}
	*var_4 = 0;
	if (answer_ptr == NULL)
	{
		psErrorText = ERXAmakeContext("Verification by %s failed: '%s' not TRUE", "imgzxap_functions_should_step_be_executed_cb", "(answer_ptr != NULL)");
		ERXAlogExceptionSingleLink_id(0x494D5C00, 0, var_4, "IMGZxAP_functions.c", 0x312, 0, psErrorText);
		returnValue = *var_4;
		if (*var_4 != 0)
		{
			//loc_1518C 
			if (i0 == NULL)
			{
				THXAtrace("IMGZ", 1, "imgzxap_functions_should_step_be_executed_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>, *answer_ptr=<?>), returnValue=%R", returnValue);
			}
			else
			{
				THXAtrace(i0->unc0xC, 1, "imgzxap_functions_should_step_be_executed_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>, *answer_ptr=<?>), returnValue=%R", returnValue);
			}
			return returnValue;
		}
		//else loc_14FF8
	}
	//else loc_14FF8
	//loc_14FF8
	*var_4 = DQXA_get_values(IMGZxAP_functions_dq_handle_ptr, "input_values", (void *)&input_parms);
	if (*var_4 != 0)
	{
		psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_get_values( IMGZxAP_functions_dq_handle_ptr, IMGZ_INPUT_STRUCT_DQ_NAME, (void *)&inp)");
		ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x319, 0, psErrorText);
		returnValue = *var_4;
		if (*var_4 != 0)
		{
			//loc_1518C 
			if (i0 == NULL)
			{
				THXAtrace("IMGZ", 1, "imgzxap_functions_should_step_be_executed_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>, *answer_ptr=<?>), returnValue=%R", returnValue);
			}
			else
			{
				THXAtrace(i0->unc0xC, 1, "imgzxap_functions_should_step_be_executed_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>, *answer_ptr=<?>), returnValue=%R", returnValue);
			}
			return returnValue;
		}
		//else loc_15080
	}
	//else loc_15080
	//loc_15080
	switch (step_id)
	{
		case 1: *answer_ptr = 1; break;
		case 2: *answer_ptr = 1; break;
		case 3: *answer_ptr = 1; break;
		case 4: *answer_ptr = 1; break;
	}
	returnValue = *var_4;
	if (returnValue != 0)
	{
		//loc_1518C 
		if (i0 == NULL)
		{
			THXAtrace("IMGZ", 1, "imgzxap_functions_should_step_be_executed_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>, *answer_ptr=<?>), returnValue=%R", returnValue);
		}
		else
		{
			THXAtrace(i0->unc0xC, 1, "imgzxap_functions_should_step_be_executed_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>, *answer_ptr=<?>), returnValue=%R", returnValue);
		}
		return returnValue;
	}
	if (IMGZxAP_functions_dq_handle_ptr == NULL)
	{
		flag_o4 = 0;
	}
	else
	{
		flag_o4 = 1;
	}
	if (answer_ptr == NULL)
	{
		flag_g2 = 0;
		flag_g3 = 0;
	}
	else
	{
		flag_g2 = 1;
		flag_g3 = *answer_ptr;
	}
	if (i0 == NULL)
	{
		THXAtrace("IMGZ", 1, "imgzxap_functions_should_step_be_executed_cb", "< (%V%D, *answer_ptr=%V%i), returnValue=%R",flag_o4,"*IMGZxAP_functions_dq_handle_ptr","DQXA:handle_t", *IMGZxAP_functions_dq_handle_ptr,flag_g2,flag_g3,returnValue);
	}
	else
	{
		THXAtrace(i0->unc0xC, 1, "imgzxap_functions_should_step_be_executed_cb", "< (%V%D, *answer_ptr=%V%i), returnValue=%R", flag_o4, "*IMGZxAP_functions_dq_handle_ptr", "DQXA:handle_t", *IMGZxAP_functions_dq_handle_ptr, flag_g2, flag_g3,returnValue);
	}
	return returnValue;
}

int imgzxap_functions_execute_step_and_update_results_cb(IMGZxAP_i0 *i0, TTXA_step_id step_id)
{
	char *psErrorText;
	int *var_4 = 0;
	int returnValue;
	int flag_o4;
	int input_parms[6];//var_1C  input_parms应该是IMGZ_input_struct类型，大小是0x18，但IMGZ_input_struct大小为0x14，少了一个bool项
	IMGZ_result_struct results;  //var_3DE8   大小应该是0x7A * 0x40 * 2 = 3D00，但IMGZ_result_struct大小为3F00
	IMGZxTC_tc_struct tc_struct;//var_E8   大小应该是0xCC，但IMGZxTC_tc_struct大小为0xC8
	if (i0 == NULL)
	{
		THXAtrace("IMGZ", 1, "imgzxap_functions_execute_step_and_update_results_cb", "> (IMGZxAP_functions_dq_handle_ptr=%p, %D)", IMGZxAP_functions_dq_handle_ptr, "step_id", "TTXA:step_id", step_id);
	}
	else
	{
		THXAtrace(i0->unc0xC, 1, "imgzxap_functions_execute_step_and_update_results_cb", "> (IMGZxAP_functions_dq_handle_ptr=%p, %D)", IMGZxAP_functions_dq_handle_ptr, "step_id", "TTXA:step_id", step_id);
	}
	*var_4 = DQXA_get_values(IMGZxAP_functions_dq_handle_ptr, "input_values", (void *)&input_parms);
	if (*var_4 == 0)
	{
		*var_4 = DQXA_get_values(IMGZxAP_functions_dq_handle_ptr, "result_values", (void *)&results);
		if (*var_4 == 0)
		{
			*var_4 = DQXA_get_values(IMGZxAP_functions_dq_handle_ptr, "tc_values", (void *)&tc_struct);
			if (*var_4 == 0)
			{
				switch (step_id)
				{
					case 1: 
						*var_4 = IMGZxAP_sp_create_logfile();
						if (*var_4 != 0)
						{
							psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "IMGZxAP_sp_create_logfile()");
							ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x375, 0, psErrorText);
							returnValue = *var_4;
							if (*var_4 != 0)
							{
								//loc_1569C  ld  [%fp+var_4], %i0
								if (i0 == NULL)
								{
									THXAtrace("IMGZ", 1, "imgzxap_functions_execute_step_and_update_results_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R",returnValue);
								}
								else
								{
									THXAtrace(i0->unc0xC, 1, "imgzxap_functions_execute_step_and_update_results_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R",returnValue);
								}
								return returnValue;
							}
							//else  loc_153A4
						}
						//else  loc_153A4
						//loc_153A4
						*var_4 = IMGZxAP_initialize(&input_parms, &tc_struct);
						if (*var_4 != 0)
						{
							psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "IMGZxAP_initialize( &input_parms, &tc_struct )");
							ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x379, 0, psErrorText);
							returnValue = *var_4;
							if (*var_4 != 0)
							{
								//loc_1569C  ld  [%fp+var_4], %i0
								if (i0 == NULL)
								{
									THXAtrace("IMGZ", 1, "imgzxap_functions_execute_step_and_update_results_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
								}
								else
								{
									THXAtrace(i0->unc0xC, 1, "imgzxap_functions_execute_step_and_update_results_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
								}
								return returnValue;
							}
							//else  loc_15414
						}
						//else loc_15414
						//loc_15414
						*var_4 = IMGZxAP_calibrate_initialize(&input_parms, &results, &tc_struct);
						if (*var_4 != 0)
						{
							psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "IMGZxAP_calibrate_initialize( &input_parms, &results, &tc_struct )");
							ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x37F, 0, psErrorText);
							//loc_155D8  ld  [%fp+var_4], %g1
							returnValue = *var_4;
							if (*var_4 != 0)
							{
								//loc_1569C  ld  [%fp+var_4], %i0
								if (i0 == NULL)
								{
									THXAtrace("IMGZ", 1, "imgzxap_functions_execute_step_and_update_results_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
								}
								else
								{
									THXAtrace(i0->unc0xC, 1, "imgzxap_functions_execute_step_and_update_results_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
								}
								return returnValue;
							}
							//else loc_155E4
						}
						//else loc_155E4
						//loc_155E4
						 break;
					case 2:
						*var_4 = IMGZxAP_calibrate_phase1(&input_parms, &results, &tc_struct);
						if (*var_4 != 0)
						{
							psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "IMGZxAP_calibrate_phase1( &input_parms, &results, &tc_struct )");
							ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x387, 0, psErrorText);
							//loc_155D8    ld  [%fp+var_4], %g1
							returnValue = *var_4;
							if (*var_4 != 0)
							{
								//loc_1569C  ld  [%fp+var_4], %i0
								if (i0 == NULL)
								{
									THXAtrace("IMGZ", 1, "imgzxap_functions_execute_step_and_update_results_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
								}
								else
								{
									THXAtrace(i0->unc0xC, 1, "imgzxap_functions_execute_step_and_update_results_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
								}
								return returnValue;
							}
							//else loc_155E4
						}
						//else loc_155E4
						break;
					case 3: 
						*var_4 = IMGZxAP_calibrate_phase2(&input_parms, &results, &tc_struct);
						if (*var_4 != 0)
						{
							psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "IMGZxAP_calibrate_phase2( &input_parms, &results, &tc_struct )");
							ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x38E, 0, psErrorText);
							//loc_155D8    ld  [%fp+var_4], %g1
							returnValue = *var_4;
							if (*var_4 != 0)
							{
								//loc_1569C  ld  [%fp+var_4], %i0
								if (i0 == NULL)
								{
									THXAtrace("IMGZ", 1, "imgzxap_functions_execute_step_and_update_results_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
								}
								else
								{
									THXAtrace(i0->unc0xC, 1, "imgzxap_functions_execute_step_and_update_results_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
								}
								return returnValue;
							}
							//else loc_155E4
						}
						//else loc_155E4
						break;
					case 4: 
						*var_4 = IMGZxAP_calibrate_wrapup(&input_parms, &results, &tc_struct);
						if (*var_4 != 0)
						{
							psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "IMGZxAP_calibrate_wrapup( &input_parms, &results, &tc_struct )");
							ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x395, 0, psErrorText);
							//loc_155D8    ld  [%fp+var_4], %g1
							returnValue = *var_4;
							if (*var_4 != 0)
							{
								//loc_1569C  ld  [%fp+var_4], %i0
								if (i0 == NULL)
								{
									THXAtrace("IMGZ", 1, "imgzxap_functions_execute_step_and_update_results_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
								}
								else
								{
									THXAtrace(i0->unc0xC, 1, "imgzxap_functions_execute_step_and_update_results_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
								}
								return returnValue;
							}
							//else loc_155E4
						}
						//else loc_155E4
						break;
				}
				//loc_155E4
				returnValue = DQXA_set_values(IMGZxAP_functions_dq_handle_ptr, "result_values", &results);
				*var_4 = returnValue;
				if (returnValue == 0)
				{
					if (IMGZxAP_functions_dq_handle_ptr == NULL)
					{
						flag_o4 = 0;
					}
					else
					{
						flag_o4 = 1;
					}
					if (i0 == NULL)
					{
						THXAtrace("IMGZ", 1, "imgzxap_functions_execute_step_and_update_results_cb", "< (%V%D), returnValue=%R",flag_o4,"*IMGZxAP_functions_dq_handle_ptr","DQXA:handle_t", *IMGZxAP_functions_dq_handle_ptr, 0);
					}
					else
					{
						THXAtrace(i0->unc0xC, 1, "imgzxap_functions_execute_step_and_update_results_cb", "< (%V%D), returnValue=%R", flag_o4, "*IMGZxAP_functions_dq_handle_ptr", "DQXA:handle_t", *IMGZxAP_functions_dq_handle_ptr, 0);
					}
					return 0;
				}
				//else loc_1569C
			}
			else
			{
				//loc_156E0
				returnValue = *var_4;
				//loc_1569C
			}
		}
		else
		{
			//loc_156E0
			returnValue = *var_4;
			//loc_1569C
		}
	}
	else
	{
		//loc_156E0
		returnValue = *var_4;
		//loc_1569C
	}
	//loc_1569C
	if (i0 == NULL)
	{
		THXAtrace("IMGZ", 1, "imgzxap_functions_execute_step_and_update_results_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
	}
	else
	{
		THXAtrace(i0->unc0xC, 1, "imgzxap_functions_execute_step_and_update_results_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
	}
	return returnValue;
}

int imgzxap_functions_get_result_check_cb(IMGZxAP_i0 *i0, TTXAxAP_result_check_struct *result_check_ptr)
{
	char *psErrorText;
	int *var_4 = 0;
	int returnValue;
	int flag_o4 = 2;
	int flag_o5 = 1;
	int flag_g2;
	int flag_g3;
	int flag_g4;
	int i,j;
	IMGZ_result_struct results;  //-0x3D08
	if (i0 == NULL)
	{
		THXAtrace("IMGZ", 1, "imgzxap_functions_get_result_check_cb", "> (IMGZxAP_functions_dq_handle_ptr=%p, result_check_ptr=%p)", IMGZxAP_functions_dq_handle_ptr, result_check_ptr);
	}
	else
	{
		THXAtrace(i0->unc0xC, 1, "imgzxap_functions_get_result_check_cb", "> (IMGZxAP_functions_dq_handle_ptr=%p, result_check_ptr=%p)", IMGZxAP_functions_dq_handle_ptr, result_check_ptr);
	}
	if (result_check_ptr == NULL)
	{
		psErrorText = ERXAmakeContext("Verification by %s failed: '%s' not TRUE", "imgzxap_functions_get_result_check_cb", "(result_check_ptr != NULL)");
		ERXAlogExceptionSingleLink_id(0x494D5C00, 0, var_4, "IMGZxAP_functions.c", 0x3C6, 0, psErrorText);
		returnValue = *var_4;
		if (*var_4 != 0)
		{
			//loc_15930 
			if (i0 == NULL)
			{
				THXAtrace("IMGZ", 1, "imgzxap_functions_get_result_check_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>, *result_check_ptr=<?>), returnValue=%R", returnValue);
			}
			else
			{
				THXAtrace(i0->unc0xC, 1, "imgzxap_functions_get_result_check_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>, *result_check_ptr=<?>), returnValue=%R", returnValue);
			}
			return returnValue;
		}
		//else loc_157B8
	}
	//else loc_157B8
	//loc_157B8
	*var_4 = DQXA_get_values(IMGZxAP_functions_dq_handle_ptr, "result_values", &results);
	if (*var_4 != 0)
	{
		//loc_15978
		returnValue = *var_4;
		//loc_15930 
		if (i0 == NULL)
		{
			THXAtrace("IMGZ", 1, "imgzxap_functions_get_result_check_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>, *result_check_ptr=<?>), returnValue=%R", returnValue);
		}
		else
		{
			THXAtrace(i0->unc0xC, 1, "imgzxap_functions_get_result_check_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>, *result_check_ptr=<?>), returnValue=%R", returnValue);
		}
		return returnValue;
	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if ((results.chuck[i].rm_result[j].status ^ 1) == 0)
			{
				flag_g4 = 1;
			}
			else
			{
				flag_g4 = 0;
			}
			if ((results.chuck[i].rm_result[j].status ^ 5) == 0)
			{
				flag_g3 = 1;
			}
			else
			{
				flag_g3 = 0;
			}
			if ((flag_g4 | flag_g3) != flag_g3)
			{
				flag_o5 = 2;
			}
			if (results.chuck[i].rm_result[j].status != 0)
			{
				flag_o4 = 1;
			}
		}
	}
	result_check_ptr->result_validation = flag_o4;
	result_check_ptr->measurement_quality = flag_o5;
	returnValue = *var_4;
	if (returnValue != 0)
	{
		//loc_15930
		if (i0 == NULL)
		{
			THXAtrace("IMGZ", 1, "imgzxap_functions_get_result_check_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>, *result_check_ptr=<?>), returnValue=%R", returnValue);
		}
		else
		{
			THXAtrace(i0->unc0xC, 1, "imgzxap_functions_get_result_check_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>, *result_check_ptr=<?>), returnValue=%R", returnValue);
		}
		return returnValue;
	}
	if (IMGZxAP_functions_dq_handle_ptr == NULL)
	{
		flag_o4 = 0;
	}
	else
	{
		flag_o4 = 1;
	}
	if (result_check_ptr == NULL)
	{
		flag_g2 = 0;
	}
	else
	{
		flag_g2 = 1;
	}
	if (i0 == NULL)
	{
		THXAtrace("IMGZ", 1, "imgzxap_functions_get_result_check_cb", "< (%V%D, %V%D), returnValue=%R",flag_o4,"*IMGZxAP_functions_dq_handle_ptr","DQXA:handle_t",*IMGZxAP_functions_dq_handle_ptr,flag_g2,"*result_check_ptr","TTXAxAP:result_check_struct", *result_check_ptr, 0);
	}
	else
	{
		THXAtrace(i0->unc0xC, 1, "imgzxap_functions_get_result_check_cb", "< (%V%D, %V%D), returnValue=%R", flag_o4, "*IMGZxAP_functions_dq_handle_ptr", "DQXA:handle_t", *IMGZxAP_functions_dq_handle_ptr, flag_g2, "*result_check_ptr", "TTXAxAP:result_check_struct", *result_check_ptr, 0);
	}
	return 0;
}

int imgzxap_functions_save_and_activate_mc_cb(IMGZxAP_i0 *i0)
{
	int returnValue;
	if (i0 == NULL)
	{
		THXAtrace("IMGZ", 1, "imgzxap_functions_save_and_activate_mc_cb", "> ()");
	}
	else
	{
		THXAtrace(i0->unc0xC, 1, "imgzxap_functions_save_and_activate_mc_cb", "> ()");
	}
	returnValue = IMGZxAP_mcs_save();
	if (returnValue != 0)
	{
		//loc_15A28
		if (i0 == NULL)
		{
			THXAtrace("IMGZ", 1, "imgzxap_functions_save_and_activate_mc_cb", "< (), returnValue=%R",returnValue);
		}
		else
		{
			THXAtrace(i0->unc0xC, 1, "imgzxap_functions_save_and_activate_mc_cb", "< (), returnValue=%R",returnValue);
		}
		return returnValue;
	}
	if (i0 == NULL)
	{
		THXAtrace("IMGZ", 1, "imgzxap_functions_save_and_activate_mc_cb", "< (), returnValue=%R", 0);
	}
	else
	{
		THXAtrace(i0->unc0xC, 1, "imgzxap_functions_save_and_activate_mc_cb", "< (), returnValue=%R", 0);
	}
	return 0;
}

int imgzxap_functions_clear_result_parameters_cb(IMGZxAP_i0 *i0)
{
	int *var_4 = 0;
	int *var_10;
	IMGZ_result_struct *result_struct_ptr = 0;//var_8
	char *psErrorText;
	int returnValue;
	int flag_l1;
	int flag_o4;
	if (i0 == NULL)
	{
		THXAtrace("IMGZ", 1, "imgzxap_functions_clear_result_parameters_cb", "> (IMGZxAP_functions_dq_handle_ptr=%p)", IMGZxAP_functions_dq_handle_ptr);
	}
	else
	{
		THXAtrace(i0->unc0xC, 1, "imgzxap_functions_clear_result_parameters_cb", "> (IMGZxAP_functions_dq_handle_ptr=%p)", IMGZxAP_functions_dq_handle_ptr);
	}
	*var_4 = DDXAxOBJECT_full_create("IMGZ:result_struct", &result_struct_ptr);
	if (*var_4 != 0)
	{
		psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DDXAxOBJECT_full_create( IMGZ_RESULT_STRUCT_STR, (void**)&result_struct_ptr)");
		ERXAlogExceptionSingleLink_id(0x45520072,*var_4,var_4, "IMGZxAP_functions.c", 0x42E,0, psErrorText);
		if (*var_4 != 0)
		{
			returnValue = *var_4;
			//loc_15D54
			if (i0 == NULL)
			{
				THXAtrace("IMGZ", 1, "imgzxap_functions_clear_result_parameters_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
			}
			else
			{
				THXAtrace(i0->unc0xC, 1, "imgzxap_functions_clear_result_parameters_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
			}
			return returnValue;
		}
		//else loc_15B50
	}
	//else loc_15B50
	//loc_15B50
	*var_4 = DQXA_set_values(IMGZxAP_functions_dq_handle_ptr, "result_values", result_struct_ptr);
	if (*var_4 != 0)
	{
		psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_set_values( IMGZxAP_functions_dq_handle_ptr, IMGZ_RESULT_STRUCT_DQ_NAME, (void *)result_struct_ptr)");
		ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x437, 0, psErrorText);
		if (*var_4 != 0)
		{
			returnValue = *var_4;
			//loc_15D54
			if (i0 == NULL)
			{
				THXAtrace("IMGZ", 1, "imgzxap_functions_clear_result_parameters_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
			}
			else
			{
				THXAtrace(i0->unc0xC, 1, "imgzxap_functions_clear_result_parameters_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
			}
			return returnValue;
		}
		//else loc_15BD8
	}
	//else loc_15BD8
	//loc_15BD8
	if (result_struct_ptr != NULL)
	{
		flag_l1= DDXAxOBJECT_full_destroy("IMGZ:result_struct", &result_struct_ptr);
		if (flag_l1 != 0)
		{
			psErrorText = ERXAmakeContext("[%s:%s]", "imgzxap_functions_clear_result_parameters_cb", "(((1229806592) + 0x0019))");
			ERXAlogExceptionSingleLink(0x494D5C19,flag_l1, "IMGZxAP_functions.c", 0x441,0,psErrorText);
			flag_l1 = 0x494D5C19;
			//loc_15C58
		}
		//else loc_15C58
		//loc_15C58
		if (*var_4 != 0)
		{
			if (flag_l1 == 0)
			{
				returnValue = *var_4;
				//loc_15D54
				if (i0 == NULL)
				{
					THXAtrace("IMGZ", 1, "imgzxap_functions_clear_result_parameters_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
				}
				else
				{
					THXAtrace(i0->unc0xC, 1, "imgzxap_functions_clear_result_parameters_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
				}
				return returnValue;
			}
			*var_10 = flag_l1;
			psErrorText = ERXAmakeContext("%s:Error ignored. Result set to OK", "imgzxap_functions_clear_result_parameters_cb");
			ERXAlogExceptionEx(0x45520FFF,var_10, "IMGZxAP_functions.c", 0x441,0,psErrorText);
			returnValue = *var_4;
			//loc_15CCC
		}
		else
		{

			*var_4 = flag_l1;
			//loc_15CC8
			returnValue = *var_4;
			//loc_15CCC
		}
		//loc_15CCC
		if (returnValue != 0)
		{
			//loc_15D58
			if (i0 == NULL)
			{
				THXAtrace("IMGZ", 1, "imgzxap_functions_clear_result_parameters_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
			}
			else
			{
				THXAtrace(i0->unc0xC, 1, "imgzxap_functions_clear_result_parameters_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
			}
			return returnValue;
		}
		//loc_15CD8
	}
	else
	{
		//loc_15D98
		returnValue = *var_4;
		//loc_15CD8
	}
	//loc_15CD8
	if (IMGZxAP_functions_dq_handle_ptr == NULL)
	{
		flag_o4 = 0;
	}
	else
	{
		flag_o4 = 1;
	}
	if (i0 == NULL)
	{
		THXAtrace("IMGZ", 1, "imgzxap_functions_clear_result_parameters_cb", "< (%V%D), returnValue=%R",flag_o4,"*IMGZxAP_functions_dq_handle_ptr","DQXA:handle_t", *IMGZxAP_functions_dq_handle_ptr, 0);
	}
	else
	{
		THXAtrace(i0->unc0xC, 1, "imgzxap_functions_clear_result_parameters_cb", "< (%V%D), returnValue=%R",flag_o4,"*IMGZxAP_functions_dq_handle_ptr","DQXA:handle_t",*IMGZxAP_functions_dq_handle_ptr, 0);
	}
	return 0;
}

int imgzxap_functions_recovery_on_error_cb(IMGZxAP_i0 *i0)
{
	if (i0 == NULL)
	{
		THXAtrace("IMGZ", 1, "imgzxap_functions_recovery_on_error_cb", "> ()");
	}
	else
	{
		THXAtrace(i0->unc0xC, 1, "imgzxap_functions_recovery_on_error_cb", "> ()");
	}
	IMGZxAP_calibrate_cleanup_and_restore();
	if (i0 == NULL)
	{
		THXAtrace("IMGZ", 1, "imgzxap_functions_recovery_on_error_cb", "< (), returnValue=%R",0);
	}
	else
	{
		THXAtrace(i0->unc0xC, 1, "imgzxap_functions_recovery_on_error_cb", "< (), returnValue=%R",0);
	}
}

int imgzxap_functions_recovery_on_stop_cb(IMGZxAP_i0 *i0)
{
	if (i0 == NULL)
	{
		THXAtrace("IMGZ", 1, "imgzxap_functions_recovery_on_stop_cb", "> ()");
	}
	else
	{
		THXAtrace(i0->unc0xC, 1, "imgzxap_functions_recovery_on_stop_cb", "> ()");
	}
	IMGZxAP_calibrate_cleanup_and_restore();
	if (i0 == NULL)
	{
		THXAtrace("IMGZ", 1, "imgzxap_functions_recovery_on_stop_cb", "< (), returnValue=%R", 0);
	}
	else
	{
		THXAtrace(i0->unc0xC, 1, "imgzxap_functions_recovery_on_stop_cb", "< (), returnValue=%R", 0);
	}
}

int imgzxap_functions_clean_up_machine_cb(IMGZxAP_i0 *i0)
{
	if (i0 == NULL)
	{
		THXAtrace("IMGZ", 1, "imgzxap_functions_clean_up_machine_cb", "> ()");
	}
	else
	{
		THXAtrace(i0->unc0xC, 1, "imgzxap_functions_clean_up_machine_cb", "> ()");
	}
	if (i0 == NULL)
	{
		THXAtrace("IMGZ", 1, "imgzxap_functions_clean_up_machine_cb", "< (), returnValue=%R", 0);
	}
	else
	{
		THXAtrace(i0->unc0xC, 1, "imgzxap_functions_clean_up_machine_cb", "< (), returnValue=%R", 0);
	}
}

int imgzxap_functions_destroy_data_structure_cb(IMGZxAP_i0 *i0)
{
	int *var_4 = 0;
	char *psErrorText;
	int returnValue;
	int flag_o4;
	if (i0 == NULL)
	{
		THXAtrace("IMGZ", 1, "imgzxap_functions_destroy_data_structure_cb", "> (IMGZxAP_functions_dq_handle_ptr=%p)", IMGZxAP_functions_dq_handle_ptr);
	}
	else
	{
		THXAtrace(i0->unc0xC, 1, "imgzxap_functions_destroy_data_structure_cb", "> (IMGZxAP_functions_dq_handle_ptr=%p)", IMGZxAP_functions_dq_handle_ptr);
	}
	*var_4 = DQXA_destroy(IMGZxAP_functions_dq_handle_ptr, "input_values");
	if (*var_4 != 0)
	{
		psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_destroy( IMGZxAP_functions_dq_handle_ptr, IMGZ_INPUT_STRUCT_DQ_NAME)");
		ERXAlogExceptionSingleLink_id(0x45520072,*var_4,var_4, "IMGZxAP_functions.c", 0x4CA,0,psErrorText);
		if (*var_4 != 0)
		{
			returnValue = *var_4;
			//loc_16204
			if (i0 == NULL)
			{
				THXAtrace("IMGZ", 1, "imgzxap_functions_destroy_data_structure_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
			}
			else
			{
				THXAtrace(i0->unc0xC, 1, "imgzxap_functions_destroy_data_structure_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
			}
			return returnValue;
		}
		//else loc_1607C
	}
	//else loc_1607C
	//loc_1607C
	*var_4 = DQXA_destroy(IMGZxAP_functions_dq_handle_ptr, "result_values");
	if (*var_4 != 0)
	{
		psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_destroy( IMGZxAP_functions_dq_handle_ptr, IMGZ_RESULT_STRUCT_DQ_NAME)");
		ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x4D1, 0, psErrorText);
		if (*var_4 != 0)
		{
			returnValue = *var_4;
			//loc_16204
			if (i0 == NULL)
			{
				THXAtrace("IMGZ", 1, "imgzxap_functions_destroy_data_structure_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
			}
			else
			{
				THXAtrace(i0->unc0xC, 1, "imgzxap_functions_destroy_data_structure_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
			}
			return returnValue;
		}
		//else loc_16100
	}
	//else loc_16100
	//loc_16100
	*var_4 = DQXA_destroy(IMGZxAP_functions_dq_handle_ptr, "tc_values");
	returnValue = 0;
	if (*var_4 != 0)
	{
		psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "DQXA_destroy( IMGZxAP_functions_dq_handle_ptr, IMGZ_TC_STRUCT_DQ_NAME)");
		ERXAlogExceptionSingleLink_id(0x45520072, *var_4, var_4, "IMGZxAP_functions.c", 0x4D8, 0, psErrorText);
		returnValue = *var_4;
		if (returnValue != 0)
		{
			//loc_16208
			if (i0 == NULL)
			{
				THXAtrace("IMGZ", 1, "imgzxap_functions_destroy_data_structure_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
			}
			else
			{
				THXAtrace(i0->unc0xC, 1, "imgzxap_functions_destroy_data_structure_cb", "< (*IMGZxAP_functions_dq_handle_ptr=<?>), returnValue=%R", returnValue);
			}
			return returnValue;
		}
		//else loc_16188
	}
	//else loc_16188
	//loc_16188
	if (IMGZxAP_functions_dq_handle_ptr == NULL)
	{
		flag_o4 = 0;
	}
	else
	{
		flag_o4 = 1;
	}
	if (i0 == NULL)
	{
		THXAtrace("IMGZ", 1, "imgzxap_functions_destroy_data_structure_cb", "< (%V%D), returnValue=%R",flag_o4,"*IMGZxAP_functions_dq_handle_ptr", "DQXA:handle_t",*IMGZxAP_functions_dq_handle_ptr,0);
	}
	else
	{
		THXAtrace(i0->unc0xC, 1, "imgzxap_functions_destroy_data_structure_cb", "< (%V%D), returnValue=%R",flag_o4,"*IMGZxAP_functions_dq_handle_ptr","DQXA:handle_t",*IMGZxAP_functions_dq_handle_ptr, 0);
	}
	return 0;
}

//sub_16248

int IMGZxAP_initialize(int *input_ptr, IMGZxTC_tc_struct *tc_struct_ptr)
{
	int i,j;
	int *piErrorCode = 0;
	int *var_8 = 0;
	int *var_C;
	int *var_10;
	int *var_28;
	int *var_24;
	char *psErrorText;
	int returnValue;
	int flag_o0;
	int flag_o3;
	int flag_l0;
	int flag_l1;
	THXAtrace("IMGZ",1, "IMGZxAP_initialize", "> (TTXAxAP_stop_pressed=%i)", TTXAxAP_stop_pressed);
	if (input_ptr == NULL)
	{
		psErrorText = ERXAmakeContext("Verification by %s failed: '%s' not TRUE","IMGZxAP_initialize","(input_ptr != NULL)");
		ERXAlogExceptionSingleLink_id(0x494D5C00, 0, piErrorCode, "IMGZxAP_initialize.c", 0x8E, 0, psErrorText);
		returnValue = *piErrorCode;
		if (*piErrorCode != 0)
		{
			//loc_17034
			THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
			return returnValue;
		}
		//else loc_16310
	}
	//else loc_16310
	//loc_16310
	if (TTXAxAP_stop_pressed == 0)
	{
		flag_o0 = TTXAxAP_continue_with_interval(piErrorCode);
		if (flag_o0 != 0)
		{
			IMGZxAP_sp_prepare_input_combinations();
			//loc_1634C
		}
		//else loc_1634C
		//loc_1634C
		returnValue = *piErrorCode;
		if (*piErrorCode != 0)
		{
			//loc_17034
			THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
			return returnValue;
		}
		if (TTXAxAP_stop_pressed == 0)
		{
			flag_o0 = TTXAxAP_continue_with_interval(piErrorCode);
			if (flag_o0 != 0)
			{
				THXAtrace("IMGZ",1, "imgzxap_initialize_report", "> ()");
				if (input_ptr == NULL)
				{
					psErrorText = ERXAmakeContext("Verification by %s failed: '%s' not TRUE", "imgzxap_initialize_report", "(input_ptr != NULL)");
					ERXAlogExceptionSingleLink_id(0x494D5C00, 0, var_8, "IMGZxAP_initialize.c", 0x19E, 0, psErrorText);
					//loc_16410
				}
				//else loc_16410
				//loc_16410  
				flag_l0 = 0;
				flag_l1 = 0;
				for (i = 0; i < 2; i++)//循环条件var_2C
				{
					if (do_chuck[flag_l1] == 0)
					{
						imgzxap_initialize_set_field_access(0,flag_l1,flag_l0,0);
					}
					else
					{
						imgzxap_initialize_set_field_access(0, flag_l1, flag_l0, 3);
					}
					*var_24 = 0;
					*var_28 = 0;
					flag_l0 = 0;
					for (j = 0; j < 8; j++)//l3
					{
						flag_o3 = 3;
						if (do_combination[flag_l0].i0 == 0)
						{
							if (do_combination[flag_l0].i0x4 == 0)
								flag_o3 = 0;
							//loc_16520
						}
						//else loc_16520
						//loc_16520
						imgzxap_initialize_set_field_access(".rm_result[%d]",flag_l1,flag_l0,flag_o3);
						flag_o3 = 3;
						if (do_combination[flag_l0].i0 == 0)
						{
							if (do_combination[flag_l0].i0x4 == 0)
								flag_o3 = 0;
							//loc_16568
						}
						//else loc_16568
						//loc_16568
						imgzxap_initialize_set_field_access(".rm_old[%d]", flag_l1, flag_l0, flag_o3);
						flag_o3 = 3;
						if (do_combination[flag_l0].i0 == 0)
						{
							if (do_combination[flag_l0].i0x4 == 0)
								flag_o3 = 0;
							//loc_165B4
						}
						//else loc_165B4
						//loc_165B4
						imgzxap_initialize_set_field_access(".rm_default[%d]", flag_l1, flag_l0, flag_o3);
						imgzxap_initialize_set_field_access(".rm_result[%d].offset", flag_l1, flag_l0, 0);
						imgzxap_initialize_set_field_access(".rm_result[%d].NO", flag_l1, flag_l0, 0);
						imgzxap_initialize_set_field_access(".rm_new_old[%d]", flag_l1, flag_l0, 0);
						imgzxap_initialize_set_field_access(".rm_new_default[%d]", flag_l1, flag_l0, flag_o3);
						if (do_combination[flag_l0].i0 == 0)
						{
							//loc_1706C
							imgzxap_initialize_set_field_access(".RM1_old[%d]", flag_l1, flag_l0,0);
							imgzxap_initialize_set_field_access(".RM1_default[%d]", flag_l1, flag_l0, 0);
							imgzxap_initialize_set_field_access(".RM1_new_old[%d]", flag_l1, flag_l0, 0);
							imgzxap_initialize_set_field_access(".RM1_new_default[%d]", flag_l1, flag_l0, 0);
							imgzxap_initialize_set_field_access(".RM1_new[%d]", flag_l1, flag_l0, 0);
							imgzxap_initialize_set_field_access(".RM1_new[%d].pos_q", flag_l1, flag_l0, 0);
						}
						else
						{
							imgzxap_initialize_set_field_access(".RM1_old[%d]", flag_l1, flag_l0, 3);
							imgzxap_initialize_set_field_access(".RM1_default[%d]", flag_l1, flag_l0, 3);
							imgzxap_initialize_set_field_access(".RM1_new_old[%d]", flag_l1, flag_l0, 0);
							imgzxap_initialize_set_field_access(".RM1_new_default[%d]", flag_l1, flag_l0, 0);
							imgzxap_initialize_set_field_access(".RM1_new[%d]", flag_l1, flag_l0, 3);
							imgzxap_initialize_set_field_access(".RM1_new[%d].pos_q", flag_l1, flag_l0, 0);
							*var_28 = 1;
						}
						//loc_166C0  ld   [%l7+%l2], %g2
						if (do_combination[flag_l0].i0x4 == 0)
						{
							//loc_170F0
							imgzxap_initialize_set_field_access(".RM2_old[%d]", flag_l1, flag_l0, 0);
							imgzxap_initialize_set_field_access(".RM2_default[%d]", flag_l1, flag_l0, 0);
							imgzxap_initialize_set_field_access(".RM2_new_old[%d]", flag_l1, flag_l0, 0);
							imgzxap_initialize_set_field_access(".RM2_new_default[%d]", flag_l1, flag_l0, 0);
							imgzxap_initialize_set_field_access(".RM2_new[%d]", flag_l1, flag_l0, 0);
							imgzxap_initialize_set_field_access(".RM2_new[%d].pos_q", flag_l1, flag_l0, 0);
						}
						else
						{
							imgzxap_initialize_set_field_access(".RM2_old[%d]", flag_l1, flag_l0, 3);
							imgzxap_initialize_set_field_access(".RM2_default[%d]", flag_l1, flag_l0, 3);
							imgzxap_initialize_set_field_access(".RM2_new_old[%d]", flag_l1, flag_l0, 0);
							imgzxap_initialize_set_field_access(".RM2_new_default[%d]", flag_l1, flag_l0, 0);
							imgzxap_initialize_set_field_access(".RM2_new[%d]", flag_l1, flag_l0, 3);
							imgzxap_initialize_set_field_access(".RM2_new[%d].pos_q", flag_l1, flag_l0, 0);
							*var_24 = 1;
						}
						flag_l0++;
					}
					if (*var_28 == 0)
					{
						flag_o3 = 0;
					}
					else
					{
						flag_o3 = 3;
					}
					imgzxap_initialize_set_field_access(".RM1_old", flag_l1, flag_l0, flag_o3);
					imgzxap_initialize_set_field_access(".RM1_default", flag_l1, flag_l0, flag_o3);
					imgzxap_initialize_set_field_access(".RM1_new", flag_l1, flag_l0, flag_o3);
					imgzxap_initialize_set_field_access(".RM1_new_old", flag_l1, flag_l0, flag_o3);
					imgzxap_initialize_set_field_access(".RM1_new_default", flag_l1, flag_l0, flag_o3);
					if (*var_24 == 0)
					{
						flag_o3 = 0;
					}
					else
					{
						flag_o3 = 3;
					}
					imgzxap_initialize_set_field_access(".RM2_old", flag_l1, flag_l0, flag_o3);
					imgzxap_initialize_set_field_access(".RM2_default", flag_l1, flag_l0, flag_o3);
					imgzxap_initialize_set_field_access(".RM2_new", flag_l1, flag_l0, flag_o3);
					imgzxap_initialize_set_field_access(".RM2_new_old", flag_l1, flag_l0, flag_o3);
					imgzxap_initialize_set_field_access(".RM2_new_default", flag_l1, flag_l0, flag_o3);
					flag_l1++;
				}
				*var_8 = 0;
				THXAtrace("IMGZ",1, "imgzxap_initialize_report", "< (), returnValue=%R",0);
				//loc_16938
			}
			else
			{
				//loc_16928  ld  [%fp+var_4], %g1
				returnValue = *piErrorCode;
				if (*piErrorCode != 0)
				{
					//loc_17034
					THXAtrace("IMGZ",1, "IMGZxAP_initialize", "< (), returnValue=%R",returnValue);
					return returnValue;
				}
				//loc_16938
			}
		}
		//else loc_16938
	}
	//else loc_16938
	//loc_16938
	if (TTXAxAP_stop_pressed == 0)
	{
		flag_o0 = TTXAxAP_continue_with_interval(piErrorCode);
		if (flag_o0 != 0)
		{
			*piErrorCode = imgzxap_initialize_drivers(tc_struct_ptr);
			if (*piErrorCode != 0)
			{
				psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_drivers(tc_struct_ptr)");
				ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0x9E, 0, psErrorText);
				returnValue = *piErrorCode;
				if (*piErrorCode != 0)
				{
					//loc_17034
					THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
					return returnValue;
				}
				//loc_169D0
			}
			//else loc_169D0
		}
		else
		{
			//loc_169C4  ld  [%fp+var_4], %g1
			returnValue = *piErrorCode;
			if (*piErrorCode != 0)
			{
				//loc_17034
				THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
				return returnValue;
			}
			//loc_169D0
		}
	}
	//else loc_169D4
	//loc_169D4
	if (TTXAxAP_stop_pressed == 0)
	{
		flag_o0 = TTXAxAP_continue_with_interval(piErrorCode);
		if (flag_o0 != 0)
		{
			THXAtrace("IMGZ",1, "imgzxap_initialize_check_preconditions", "> (TTXAxAP_stop_pressed=%i)", TTXAxAP_stop_pressed);
			*var_8 = 0;
			if (TTXAxAP_stop_pressed == 0)
			{
				flag_o0 = TTXAxAP_continue_with_interval(var_8);
				if (flag_o0 != 0)
				{
					IMGZxAP_sp_set_substep_label("%s", "Checking preconditions");
					THXAtrace("IMGZ",1, "imgzxap_initialize_put_ws_in_dry_mode", "> (TTXAxAP_stop_pressed=%i)", TTXAxAP_stop_pressed);
					*var_C = 0;
					*var_10 = 0x1375;
					if (TTXAxAP_stop_pressed == 0)
					{
						flag_o0 = TTXAxAP_continue_with_interval(var_C);
						if (flag_o0 != 0)
						{
							*var_C = CMXA_getConfigurationItem(0x1374,var_10);
							//loc_16B08
						}
						//else loc_16B08
					}
					//else loc_16B08
					//loc_16B08
					flag_l0 = *var_C;
					if (*var_C == 0)
					{
						if (TTXAxAP_stop_pressed == 0)
						{
							flag_o0 = TTXAxAP_continue_with_interval(var_C);
							if (flag_o0 != 0)
							{
								if ((0x1376 ^ *var_10) == 0)
									IMGZxAP_imm_startup_state.imm_present = 1;
								else
									IMGZxAP_imm_startup_state.imm_present = 0;
								//loc_16B70
							}
							//else loc_16B70
							//loc_16B70
							if (*var_C == 0)
							{
								if (TTXAxAP_stop_pressed == 0)
								{
									flag_o0 = TTXAxAP_continue_with_interval(var_C);
									if (flag_o0 != 0)
									{
										if (IMGZxAP_imm_startup_state.imm_present != 0)
										{
											*var_C = IHCLxIMM_set_dry_mode(IMGZxAP_imm_startup_state.imm_op_mode, IMGZxAP_imm_startup_state.imm_state, IMGZxAP_imm_startup_state.imm_hood_fluid_state);
											IMGZxAP_sp_log_var("%s", "============================================================");
											if (*var_C == 0)
											{
												IMGZxAP_sp_log_var("Setting WS on DRY mode:    %s", "PASSED");
											}
											else
											{
												IMGZxAP_sp_log_var("Setting WS on DRY mode:    %s", "FAILED");
											}
											flag_l0 = *var_C;
											if (*var_C != 0)
											{
												psErrorText = ERXAmakeContext("%s", "IMGZ: Unable to prepare WS.");
												ERXAlogExceptionSingleLink_id(0x494D5C0B,*var_C,var_C, "IMGZxAP_initialize.c", 0x13A,0,psErrorText);
												flag_l0 = *var_C;
												//loc_16C94
												if (flag_l0 != 0)
												{
													//loc_16D60
													THXAtrace("IMGZ",1, "imgzxap_initialize_put_ws_in_dry_mode", "< (IMGZxAP_imm_startup_state=<?>), returnValue=%R",flag_l0);
													*var_8 = flag_l0;
													psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_put_ws_in_dry_mode()");
													ERXAlogExceptionSingleLink_id(0x45520072,*var_8,var_8, "IMGZxAP_initialize.c", 0x10D,0,psErrorText);
													flag_l0 = *var_8;
													//loc_16DDC
													if (flag_l0 == 0)
													{
														//loc_16DE8  loc_16DEC
														if (TTXAxAP_stop_pressed == 0)
														{
															flag_o0 = TTXAxAP_continue_with_interval(var_8);
															flag_l0 = *var_8;
															if (flag_o0 != 0)
															{
																IMGZxAP_sp_set_substep_label("%s", "Airmounts stability...");
																*var_8 = imgzxap_initialize_check_am_stability();
																if (*var_8 != 0)
																{
																	psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_am_stability()");
																	ERXAlogExceptionSingleLink_id(0x45520072,*var_8,var_8, "IMGZxAP_initialize.c", 0x114,0,psErrorText);
																	flag_l0 = *var_8;
																	//loc_16E94
																	if (flag_l0 != 0)
																	{
																		//loc_16ED8
																		THXAtrace("IMGZ",1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R",flag_l0);
																		piErrorCode = flag_l0;
																		psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
																		ERXAlogExceptionSingleLink_id(0x45520072,*piErrorCode,piErrorCode, "IMGZxAP_initialize.c", 0xA4,0,psErrorText);
																		//loc_16F54
																		returnValue = *piErrorCode;
																		if (*piErrorCode != 0)
																		{
																			//loc_17034
																			THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
																			return returnValue;
																		}
																		//loc_16F60
																	}
																	else
																	{
																		//loc_16EA0
																		THXAtrace("IMGZ",1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R",0);
																		*piErrorCode = flag_l0;
																		//loc_16F60
																	}
																}
																else
																{
																	//loc_171A4
																	flag_l0 = *var_8;
																	//loc_16EA0
																	THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
																	*piErrorCode = flag_l0;
																	//loc_16F60
																}
															}
															else
															{
																//loc_16E94
																if (flag_l0 != 0)
																{
																	//loc_16ED8
																	THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
																	*piErrorCode = flag_l0;
																	psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
																	ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
																	//loc_16F54
																	returnValue = *piErrorCode;
																	if (*piErrorCode != 0)
																	{
																		//loc_17034
																		THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
																		return returnValue;
																	}
																	//loc_16F60
																}
																else
																{
																	//loc_16EA0
																	THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
																	*piErrorCode = flag_l0;
																	//loc_16F60
																}
															}
														}
														else
														{
															flag_l0 = *var_8;
															//loc_16EA0
															THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
															*piErrorCode = flag_l0;
															//loc_16F60
														}
													}
													else
													{
														//loc_16ED8
														THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
														*piErrorCode = flag_l0;
														psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
														ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
														//loc_16F54
														returnValue = *piErrorCode;
														if (*piErrorCode != 0)
														{
															//loc_17034
															THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
															return returnValue;
														}
														//loc_16F60
													}
												}
												else
												{
													//loc_16CA0
													THXAtrace("IMGZ",1, "imgzxap_initialize_put_ws_in_dry_mode", "< (IMGZxAP_imm_startup_state.imm_present=%i IMGZxAP_imm_startup_state.imm_op_mode=%D IMGZxAP_imm_startup_state.imm_state=%D IMGZxAP_imm_startup_state.imm_hood_fluid_state=%D ...), returnValue=%R", IMGZxAP_imm_startup_state.imm_present, "IMGZxAP_imm_startup_state.imm_op_mode", "IHCLxIMM:immersion_opmode_enum", IMGZxAP_imm_startup_state.imm_op_mode, "IMGZxAP_imm_startup_state.imm_state", "IHCLxIMM:immersion_state_enum", IMGZxAP_imm_startup_state.imm_state, "IMGZxAP_imm_startup_state.imm_hood_fluid_state", "IHCLxIMM:immersion_fluid_state_enum", IMGZxAP_imm_startup_state.imm_hood_fluid_state,0);
													//loc_16DE8  loc_16DEC
													if (TTXAxAP_stop_pressed == 0)
													{
														flag_o0 = TTXAxAP_continue_with_interval(var_8);
														flag_l0 = *var_8;
														if (flag_o0 != 0)
														{
															IMGZxAP_sp_set_substep_label("%s", "Airmounts stability...");
															*var_8 = imgzxap_initialize_check_am_stability();
															if (*var_8 != 0)
															{
																psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_am_stability()");
																ERXAlogExceptionSingleLink_id(0x45520072, *var_8, var_8, "IMGZxAP_initialize.c", 0x114, 0, psErrorText);
																flag_l0 = *var_8;
																//loc_16E94
																if (flag_l0 != 0)
																{
																	//loc_16ED8
																	THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
																	*piErrorCode = flag_l0;
																	psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
																	ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
																	//loc_16F54
																	returnValue = *piErrorCode;
																	if (*piErrorCode != 0)
																	{
																		//loc_17034
																		THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
																		return returnValue;
																	}
																	//loc_16F60
																}
																else
																{
																	//loc_16EA0
																	THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
																	*piErrorCode = flag_l0;
																	//loc_16F60
																}
															}
															else
															{
																//loc_171A4
																flag_l0 = *var_8;
																//loc_16EA0
																THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
																*piErrorCode = flag_l0;
																//loc_16F60
															}
														}
														else
														{
															//loc_16E94
															if (flag_l0 != 0)
															{
																//loc_16ED8
																THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
																*piErrorCode = flag_l0;
																psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
																ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
																//loc_16F54
																returnValue = *piErrorCode;
																if (*piErrorCode != 0)
																{
																	//loc_17034
																	THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
																	return returnValue;
																}
																//loc_16F60
															}
															else
															{
																//loc_16EA0
																THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
																*piErrorCode = flag_l0;
																//loc_16F60
															}
														}
													}
													else
													{
														flag_l0 = *var_8;
														//loc_16EA0
														THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
														*piErrorCode = flag_l0;
														//loc_16F60
													}
												}
											}
											else
											{
												//loc_16CA0
												THXAtrace("IMGZ", 1, "imgzxap_initialize_put_ws_in_dry_mode", "< (IMGZxAP_imm_startup_state.imm_present=%i IMGZxAP_imm_startup_state.imm_op_mode=%D IMGZxAP_imm_startup_state.imm_state=%D IMGZxAP_imm_startup_state.imm_hood_fluid_state=%D ...), returnValue=%R", IMGZxAP_imm_startup_state.imm_present, "IMGZxAP_imm_startup_state.imm_op_mode", "IHCLxIMM:immersion_opmode_enum", IMGZxAP_imm_startup_state.imm_op_mode, "IMGZxAP_imm_startup_state.imm_state", "IHCLxIMM:immersion_state_enum", IMGZxAP_imm_startup_state.imm_state, "IMGZxAP_imm_startup_state.imm_hood_fluid_state", "IHCLxIMM:immersion_fluid_state_enum", IMGZxAP_imm_startup_state.imm_hood_fluid_state, 0);
												//loc_16DE8  loc_16DEC
												if (TTXAxAP_stop_pressed == 0)
												{
													flag_o0 = TTXAxAP_continue_with_interval(var_8);
													flag_l0 = *var_8;
													if (flag_o0 != 0)
													{
														IMGZxAP_sp_set_substep_label("%s", "Airmounts stability...");
														*var_8 = imgzxap_initialize_check_am_stability();
														if (*var_8 != 0)
														{
															psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_am_stability()");
															ERXAlogExceptionSingleLink_id(0x45520072, *var_8, var_8, "IMGZxAP_initialize.c", 0x114, 0, psErrorText);
															flag_l0 = *var_8;
															//loc_16E94
															if (flag_l0 != 0)
															{
																//loc_16ED8
																THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
																*piErrorCode = flag_l0;
																psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
																ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
																//loc_16F54
																returnValue = *piErrorCode;
																if (*piErrorCode != 0)
																{
																	//loc_17034
																	THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
																	return returnValue;
																}
																//loc_16F60
															}
															else
															{
																//loc_16EA0
																THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
																*piErrorCode = flag_l0;
																//loc_16F60
															}
														}
														else
														{
															//loc_171A4
															flag_l0 = *var_8;
															//loc_16EA0
															THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
															*piErrorCode = flag_l0;
															//loc_16F60
														}
													}
													else
													{
														//loc_16E94
														if (flag_l0 != 0)
														{
															//loc_16ED8
															THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
															*piErrorCode = flag_l0;
															psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
															ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
															//loc_16F54
															returnValue = *piErrorCode;
															if (*piErrorCode != 0)
															{
																//loc_17034
																THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
																return returnValue;
															}
															//loc_16F60
														}
														else
														{
															//loc_16EA0
															THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
															*piErrorCode = flag_l0;
															//loc_16F60
														}
													}
												}
												else
												{
													flag_l0 = *var_8;
													//loc_16EA0
													THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
													*piErrorCode = flag_l0;
													//loc_16F60
												}
											}
										}
										else
										{
											flag_l0 = *var_C;
											//loc_16C94
											if (flag_l0 != 0)
											{
												//loc_16D60
												THXAtrace("IMGZ", 1, "imgzxap_initialize_put_ws_in_dry_mode", "< (IMGZxAP_imm_startup_state=<?>), returnValue=%R", flag_l0);
												*var_8 = flag_l0;
												psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_put_ws_in_dry_mode()");
												ERXAlogExceptionSingleLink_id(0x45520072, *var_8, var_8, "IMGZxAP_initialize.c", 0x10D, 0, psErrorText);
												flag_l0 = *var_8;
												//loc_16DDC
												if (flag_l0 == 0)
												{
													//loc_16DE8  loc_16DEC
													if (TTXAxAP_stop_pressed == 0)
													{
														flag_o0 = TTXAxAP_continue_with_interval(var_8);
														flag_l0 = *var_8;
														if (flag_o0 != 0)
														{
															IMGZxAP_sp_set_substep_label("%s", "Airmounts stability...");
															*var_8 = imgzxap_initialize_check_am_stability();
															if (*var_8 != 0)
															{
																psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_am_stability()");
																ERXAlogExceptionSingleLink_id(0x45520072, *var_8, var_8, "IMGZxAP_initialize.c", 0x114, 0, psErrorText);
																flag_l0 = *var_8;
																//loc_16E94
																if (flag_l0 != 0)
																{
																	//loc_16ED8
																	THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
																	*piErrorCode = flag_l0;
																	psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
																	ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
																	//loc_16F54
																	returnValue = *piErrorCode;
																	if (*piErrorCode != 0)
																	{
																		//loc_17034
																		THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
																		return returnValue;
																	}
																	//loc_16F60
																}
																else
																{
																	//loc_16EA0
																	THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
																	*piErrorCode = flag_l0;
																	//loc_16F60
																}
															}
															else
															{
																//loc_171A4
																flag_l0 = *var_8;
																//loc_16EA0
																THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
																*piErrorCode = flag_l0;
																//loc_16F60
															}
														}
														else
														{
															//loc_16E94
															if (flag_l0 != 0)
															{
																//loc_16ED8
																THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
																*piErrorCode = flag_l0;
																psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
																ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
																//loc_16F54
																returnValue = *piErrorCode;
																if (*piErrorCode != 0)
																{
																	//loc_17034
																	THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
																	return returnValue;
																}
																//loc_16F60
															}
															else
															{
																//loc_16EA0
																THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
																*piErrorCode = flag_l0;
																//loc_16F60
															}
														}
													}
													else
													{
														flag_l0 = *var_8;
														//loc_16EA0
														THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
														*piErrorCode = flag_l0;
														//loc_16F60
													}
												}
												else
												{
													//loc_16ED8
													THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
													*piErrorCode = flag_l0;
													psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
													ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
													//loc_16F54
													returnValue = *piErrorCode;
													if (*piErrorCode != 0)
													{
														//loc_17034
														THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
														return returnValue;
													}
													//loc_16F60
												}
											}
											else
											{
												//loc_16CA0
												THXAtrace("IMGZ", 1, "imgzxap_initialize_put_ws_in_dry_mode", "< (IMGZxAP_imm_startup_state.imm_present=%i IMGZxAP_imm_startup_state.imm_op_mode=%D IMGZxAP_imm_startup_state.imm_state=%D IMGZxAP_imm_startup_state.imm_hood_fluid_state=%D ...), returnValue=%R", IMGZxAP_imm_startup_state.imm_present, "IMGZxAP_imm_startup_state.imm_op_mode", "IHCLxIMM:immersion_opmode_enum", IMGZxAP_imm_startup_state.imm_op_mode, "IMGZxAP_imm_startup_state.imm_state", "IHCLxIMM:immersion_state_enum", IMGZxAP_imm_startup_state.imm_state, "IMGZxAP_imm_startup_state.imm_hood_fluid_state", "IHCLxIMM:immersion_fluid_state_enum", IMGZxAP_imm_startup_state.imm_hood_fluid_state, 0);
												//loc_16DE8  loc_16DEC
												if (TTXAxAP_stop_pressed == 0)
												{
													flag_o0 = TTXAxAP_continue_with_interval(var_8);
													flag_l0 = *var_8;
													if (flag_o0 != 0)
													{
														IMGZxAP_sp_set_substep_label("%s", "Airmounts stability...");
														*var_8 = imgzxap_initialize_check_am_stability();
														if (*var_8 != 0)
														{
															psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_am_stability()");
															ERXAlogExceptionSingleLink_id(0x45520072, *var_8, var_8, "IMGZxAP_initialize.c", 0x114, 0, psErrorText);
															flag_l0 = *var_8;
															//loc_16E94
															if (flag_l0 != 0)
															{
																//loc_16ED8
																THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
																*piErrorCode = flag_l0;
																psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
																ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
																//loc_16F54
																returnValue = *piErrorCode;
																if (*piErrorCode != 0)
																{
																	//loc_17034
																	THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
																	return returnValue;
																}
																//loc_16F60
															}
															else
															{
																//loc_16EA0
																THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
																*piErrorCode = flag_l0;
																//loc_16F60
															}
														}
														else
														{
															//loc_171A4
															flag_l0 = *var_8;
															//loc_16EA0
															THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
															*piErrorCode = flag_l0;
															//loc_16F60
														}
													}
													else
													{
														//loc_16E94
														if (flag_l0 != 0)
														{
															//loc_16ED8
															THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
															*piErrorCode = flag_l0;
															psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
															ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
															//loc_16F54
															returnValue = *piErrorCode;
															if (*piErrorCode != 0)
															{
																//loc_17034
																THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
																return returnValue;
															}
															//loc_16F60
														}
														else
														{
															//loc_16EA0
															THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
															*piErrorCode = flag_l0;
															//loc_16F60
														}
													}
												}
												else
												{
													flag_l0 = *var_8;
													//loc_16EA0
													THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
													*piErrorCode = flag_l0;
													//loc_16F60
												}
											}
										}
									}
									else
									{
										flag_l0 = *var_C;
										//loc_16C94
										if (flag_l0 != 0)
										{
											//loc_16D60
											THXAtrace("IMGZ", 1, "imgzxap_initialize_put_ws_in_dry_mode", "< (IMGZxAP_imm_startup_state=<?>), returnValue=%R", flag_l0);
											*var_8 = flag_l0;
											psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_put_ws_in_dry_mode()");
											ERXAlogExceptionSingleLink_id(0x45520072, *var_8, var_8, "IMGZxAP_initialize.c", 0x10D, 0, psErrorText);
											flag_l0 = *var_8;
											//loc_16DDC
											if (flag_l0 == 0)
											{
												//loc_16DE8  loc_16DEC
												if (TTXAxAP_stop_pressed == 0)
												{
													flag_o0 = TTXAxAP_continue_with_interval(var_8);
													flag_l0 = *var_8;
													if (flag_o0 != 0)
													{
														IMGZxAP_sp_set_substep_label("%s", "Airmounts stability...");
														*var_8 = imgzxap_initialize_check_am_stability();
														if (*var_8 != 0)
														{
															psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_am_stability()");
															ERXAlogExceptionSingleLink_id(0x45520072, *var_8, var_8, "IMGZxAP_initialize.c", 0x114, 0, psErrorText);
															flag_l0 = *var_8;
															//loc_16E94
															if (flag_l0 != 0)
															{
																//loc_16ED8
																THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
																*piErrorCode = flag_l0;
																psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
																ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
																//loc_16F54
																returnValue = *piErrorCode;
																if (*piErrorCode != 0)
																{
																	//loc_17034
																	THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
																	return returnValue;
																}
																//loc_16F60
															}
															else
															{
																//loc_16EA0
																THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
																*piErrorCode = flag_l0;
																//loc_16F60
															}
														}
														else
														{
															//loc_171A4
															flag_l0 = *var_8;
															//loc_16EA0
															THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
															*piErrorCode = flag_l0;
															//loc_16F60
														}
													}
													else
													{
														//loc_16E94
														if (flag_l0 != 0)
														{
															//loc_16ED8
															THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
															*piErrorCode = flag_l0;
															psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
															ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
															//loc_16F54
															returnValue = *piErrorCode;
															if (*piErrorCode != 0)
															{
																//loc_17034
																THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
																return returnValue;
															}
															//loc_16F60
														}
														else
														{
															//loc_16EA0
															THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
															*piErrorCode = flag_l0;
															//loc_16F60
														}
													}
												}
												else
												{
													flag_l0 = *var_8;
													//loc_16EA0
													THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
													*piErrorCode = flag_l0;
													//loc_16F60
												}
											}
											else
											{
												//loc_16ED8
												THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
												*piErrorCode = flag_l0;
												psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
												ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
												//loc_16F54
												returnValue = *piErrorCode;
												if (*piErrorCode != 0)
												{
													//loc_17034
													THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
													return returnValue;
												}
												//loc_16F60
											}
										}
										else
										{
											//loc_16CA0
											THXAtrace("IMGZ", 1, "imgzxap_initialize_put_ws_in_dry_mode", "< (IMGZxAP_imm_startup_state.imm_present=%i IMGZxAP_imm_startup_state.imm_op_mode=%D IMGZxAP_imm_startup_state.imm_state=%D IMGZxAP_imm_startup_state.imm_hood_fluid_state=%D ...), returnValue=%R", IMGZxAP_imm_startup_state.imm_present, "IMGZxAP_imm_startup_state.imm_op_mode", "IHCLxIMM:immersion_opmode_enum", IMGZxAP_imm_startup_state.imm_op_mode, "IMGZxAP_imm_startup_state.imm_state", "IHCLxIMM:immersion_state_enum", IMGZxAP_imm_startup_state.imm_state, "IMGZxAP_imm_startup_state.imm_hood_fluid_state", "IHCLxIMM:immersion_fluid_state_enum", IMGZxAP_imm_startup_state.imm_hood_fluid_state, 0);
											//loc_16DE8  loc_16DEC
											if (TTXAxAP_stop_pressed == 0)
											{
												flag_o0 = TTXAxAP_continue_with_interval(var_8);
												flag_l0 = *var_8;
												if (flag_o0 != 0)
												{
													IMGZxAP_sp_set_substep_label("%s", "Airmounts stability...");
													*var_8 = imgzxap_initialize_check_am_stability();
													if (*var_8 != 0)
													{
														psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_am_stability()");
														ERXAlogExceptionSingleLink_id(0x45520072, *var_8, var_8, "IMGZxAP_initialize.c", 0x114, 0, psErrorText);
														flag_l0 = *var_8;
														//loc_16E94
														if (flag_l0 != 0)
														{
															//loc_16ED8
															THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
															*piErrorCode = flag_l0;
															psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
															ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
															//loc_16F54
															returnValue = *piErrorCode;
															if (*piErrorCode != 0)
															{
																//loc_17034
																THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
																return returnValue;
															}
															//loc_16F60
														}
														else
														{
															//loc_16EA0
															THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
															*piErrorCode = flag_l0;
															//loc_16F60
														}
													}
													else
													{
														//loc_171A4
														flag_l0 = *var_8;
														//loc_16EA0
														THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
														*piErrorCode = flag_l0;
														//loc_16F60
													}
												}
												else
												{
													//loc_16E94
													if (flag_l0 != 0)
													{
														//loc_16ED8
														THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
														*piErrorCode = flag_l0;
														psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
														ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
														//loc_16F54
														returnValue = *piErrorCode;
														if (*piErrorCode != 0)
														{
															//loc_17034
															THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
															return returnValue;
														}
														//loc_16F60
													}
													else
													{
														//loc_16EA0
														THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
														*piErrorCode = flag_l0;
														//loc_16F60
													}
												}
											}
											else
											{
												flag_l0 = *var_8;
												//loc_16EA0
												THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
												*piErrorCode = flag_l0;
												//loc_16F60
											}
										}
									}
								}
								else
								{
									flag_l0 = *var_C;
									//loc_16CA0  loc_16CA4
									THXAtrace("IMGZ", 1, "imgzxap_initialize_put_ws_in_dry_mode", "< (IMGZxAP_imm_startup_state.imm_present=%i IMGZxAP_imm_startup_state.imm_op_mode=%D IMGZxAP_imm_startup_state.imm_state=%D IMGZxAP_imm_startup_state.imm_hood_fluid_state=%D ...), returnValue=%R", IMGZxAP_imm_startup_state.imm_present, "IMGZxAP_imm_startup_state.imm_op_mode", "IHCLxIMM:immersion_opmode_enum", IMGZxAP_imm_startup_state.imm_op_mode, "IMGZxAP_imm_startup_state.imm_state", "IHCLxIMM:immersion_state_enum", IMGZxAP_imm_startup_state.imm_state, "IMGZxAP_imm_startup_state.imm_hood_fluid_state", "IHCLxIMM:immersion_fluid_state_enum", IMGZxAP_imm_startup_state.imm_hood_fluid_state, 0);
									//loc_16DE8  loc_16DEC
									if (TTXAxAP_stop_pressed == 0)
									{
										flag_o0 = TTXAxAP_continue_with_interval(var_8);
										flag_l0 = *var_8;
										if (flag_o0 != 0)
										{
											IMGZxAP_sp_set_substep_label("%s", "Airmounts stability...");
											*var_8 = imgzxap_initialize_check_am_stability();
											if (*var_8 != 0)
											{
												psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_am_stability()");
												ERXAlogExceptionSingleLink_id(0x45520072, *var_8, var_8, "IMGZxAP_initialize.c", 0x114, 0, psErrorText);
												flag_l0 = *var_8;
												//loc_16E94
												if (flag_l0 != 0)
												{
													//loc_16ED8
													THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
													*piErrorCode = flag_l0;
													psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
													ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
													//loc_16F54
													returnValue = *piErrorCode;
													if (*piErrorCode != 0)
													{
														//loc_17034
														THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
														return returnValue;
													}
													//loc_16F60
												}
												else
												{
													//loc_16EA0
													THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
													*piErrorCode = flag_l0;
													//loc_16F60
												}
											}
											else
											{
												//loc_171A4
												flag_l0 = *var_8;
												//loc_16EA0
												THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
												*piErrorCode = flag_l0;
												//loc_16F60
											}
										}
										else
										{
											//loc_16E94
											if (flag_l0 != 0)
											{
												//loc_16ED8
												THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
												*piErrorCode = flag_l0;
												psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
												ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
												//loc_16F54
												returnValue = *piErrorCode;
												if (*piErrorCode != 0)
												{
													//loc_17034
													THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
													return returnValue;
												}
												//loc_16F60
											}
											else
											{
												//loc_16EA0
												THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
												*piErrorCode = flag_l0;
												//loc_16F60
											}
										}
									}
									else
									{
										flag_l0 = *var_8;
										//loc_16EA0
										THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
										*piErrorCode = flag_l0;
										//loc_16F60
									}
								}
							}
							else
							{
								//loc_1719C
								flag_l0 = *piErrorCode;
								//loc_16D60
								THXAtrace("IMGZ", 1, "imgzxap_initialize_put_ws_in_dry_mode", "< (IMGZxAP_imm_startup_state=<?>), returnValue=%R", flag_l0);
								*var_8 = flag_l0;
								psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_put_ws_in_dry_mode()");
								ERXAlogExceptionSingleLink_id(0x45520072, *var_8, var_8, "IMGZxAP_initialize.c", 0x10D, 0, psErrorText);
								flag_l0 = *var_8;
								//loc_16DDC
								if (flag_l0 == 0)
								{
									//loc_16DE8  loc_16DEC
									if (TTXAxAP_stop_pressed == 0)
									{
										flag_o0 = TTXAxAP_continue_with_interval(var_8);
										flag_l0 = *var_8;
										if (flag_o0 != 0)
										{
											IMGZxAP_sp_set_substep_label("%s", "Airmounts stability...");
											*var_8 = imgzxap_initialize_check_am_stability();
											if (*var_8 != 0)
											{
												psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_am_stability()");
												ERXAlogExceptionSingleLink_id(0x45520072, *var_8, var_8, "IMGZxAP_initialize.c", 0x114, 0, psErrorText);
												flag_l0 = *var_8;
												//loc_16E94
												if (flag_l0 != 0)
												{
													//loc_16ED8
													THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
													*piErrorCode = flag_l0;
													psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
													ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
													//loc_16F54
													returnValue = *piErrorCode;
													if (*piErrorCode != 0)
													{
														//loc_17034
														THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
														return returnValue;
													}
													//loc_16F60
												}
												else
												{
													//loc_16EA0
													THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
													*piErrorCode = flag_l0;
													//loc_16F60
												}
											}
											else
											{
												//loc_171A4
												flag_l0 = *var_8;
												//loc_16EA0
												THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
												*piErrorCode = flag_l0;
												//loc_16F60
											}
										}
										else
										{
											//loc_16E94
											if (flag_l0 != 0)
											{
												//loc_16ED8
												THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
												*piErrorCode = flag_l0;
												psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
												ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
												//loc_16F54
												returnValue = *piErrorCode;
												if (*piErrorCode != 0)
												{
													//loc_17034
													THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
													return returnValue;
												}
												//loc_16F60
											}
											else
											{
												//loc_16EA0
												THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
												*piErrorCode = flag_l0;
												//loc_16F60
											}
										}
									}
									else
									{
										flag_l0 = *var_8;
										//loc_16EA0
										THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
										*piErrorCode = flag_l0;
										//loc_16F60
									}
								}
								else
								{
									//loc_16ED8
									THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
									*piErrorCode = flag_l0;
									psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
									ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
									//loc_16F54
									returnValue = *piErrorCode;
									if (*piErrorCode != 0)
									{
										//loc_17034
										THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
										return returnValue;
									}
									//loc_16F60
								}
							}
						}
						else
						{
							//loc_16CA4
							THXAtrace("IMGZ", 1, "imgzxap_initialize_put_ws_in_dry_mode", "< (IMGZxAP_imm_startup_state.imm_present=%i IMGZxAP_imm_startup_state.imm_op_mode=%D IMGZxAP_imm_startup_state.imm_state=%D IMGZxAP_imm_startup_state.imm_hood_fluid_state=%D ...), returnValue=%R", IMGZxAP_imm_startup_state.imm_present, "IMGZxAP_imm_startup_state.imm_op_mode", "IHCLxIMM:immersion_opmode_enum", IMGZxAP_imm_startup_state.imm_op_mode, "IMGZxAP_imm_startup_state.imm_state", "IHCLxIMM:immersion_state_enum", IMGZxAP_imm_startup_state.imm_state, "IMGZxAP_imm_startup_state.imm_hood_fluid_state", "IHCLxIMM:immersion_fluid_state_enum", IMGZxAP_imm_startup_state.imm_hood_fluid_state, 0);
							//loc_16DE8  loc_16DEC
							if (TTXAxAP_stop_pressed == 0)
							{
								flag_o0 = TTXAxAP_continue_with_interval(var_8);
								flag_l0 = *var_8;
								if (flag_o0 != 0)
								{
									IMGZxAP_sp_set_substep_label("%s", "Airmounts stability...");
									*var_8 = imgzxap_initialize_check_am_stability();
									if (*var_8 != 0)
									{
										psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_am_stability()");
										ERXAlogExceptionSingleLink_id(0x45520072, *var_8, var_8, "IMGZxAP_initialize.c", 0x114, 0, psErrorText);
										flag_l0 = *var_8;
										//loc_16E94
										if (flag_l0 != 0)
										{
											//loc_16ED8
											THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
											*piErrorCode = flag_l0;
											psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
											ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
											//loc_16F54
											returnValue = *piErrorCode;
											if (*piErrorCode != 0)
											{
												//loc_17034
												THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
												return returnValue;
											}
											//loc_16F60
										}
										else
										{
											//loc_16EA0
											THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
											*piErrorCode = flag_l0;
											//loc_16F60
										}
									}
									else
									{
										//loc_171A4
										flag_l0 = *var_8;
										//loc_16EA0
										THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
										*piErrorCode = flag_l0;
										//loc_16F60
									}
								}
								else
								{
									//loc_16E94
									if (flag_l0 != 0)
									{
										//loc_16ED8
										THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
										*piErrorCode = flag_l0;
										psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
										ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
										//loc_16F54
										returnValue = *piErrorCode;
										if (*piErrorCode != 0)
										{
											//loc_17034
											THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
											return returnValue;
										}
										//loc_16F60
									}
									else
									{
										//loc_16EA0
										THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
										*piErrorCode = flag_l0;
										//loc_16F60
									}
								}
							}
							else
							{
								flag_l0 = *var_8;
								//loc_16EA0
								THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
								*piErrorCode = flag_l0;
								//loc_16F60
							}
						}
					}
					else
					{
						//loc_16D5C   loc_16D60
						THXAtrace("IMGZ", 1, "imgzxap_initialize_put_ws_in_dry_mode", "< (IMGZxAP_imm_startup_state=<?>), returnValue=%R", flag_l0);
						*var_8 = flag_l0;
						psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_put_ws_in_dry_mode()");
						ERXAlogExceptionSingleLink_id(0x45520072, *var_8, var_8, "IMGZxAP_initialize.c", 0x10D, 0, psErrorText);
						flag_l0 = *var_8;
						//loc_16DDC
						if (flag_l0 == 0)
						{
							//loc_16DE8  loc_16DEC
							if (TTXAxAP_stop_pressed == 0)
							{
								flag_o0 = TTXAxAP_continue_with_interval(var_8);
								flag_l0 = *var_8;
								if (flag_o0 != 0)
								{
									IMGZxAP_sp_set_substep_label("%s", "Airmounts stability...");
									*var_8 = imgzxap_initialize_check_am_stability();
									if (*var_8 != 0)
									{
										psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_am_stability()");
										ERXAlogExceptionSingleLink_id(0x45520072, *var_8, var_8, "IMGZxAP_initialize.c", 0x114, 0, psErrorText);
										flag_l0 = *var_8;
										//loc_16E94
										if (flag_l0 != 0)
										{
											//loc_16ED8
											THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
											*piErrorCode = flag_l0;
											psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
											ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
											//loc_16F54
											returnValue = *piErrorCode;
											if (*piErrorCode != 0)
											{
												//loc_17034
												THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
												return returnValue;
											}
											//loc_16F60
										}
										else
										{
											//loc_16EA0
											THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
											*piErrorCode = flag_l0;
											//loc_16F60
										}
									}
									else
									{
										//loc_171A4
										flag_l0 = *var_8;
										//loc_16EA0
										THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
										*piErrorCode = flag_l0;
										//loc_16F60
									}
								}
								else
								{
									//loc_16E94
									if (flag_l0 != 0)
									{
										//loc_16ED8
										THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
										*piErrorCode = flag_l0;
										psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
										ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
										//loc_16F54
										returnValue = *piErrorCode;
										if (*piErrorCode != 0)
										{
											//loc_17034
											THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
											return returnValue;
										}
										//loc_16F60
									}
									else
									{
										//loc_16EA0
										THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
										*piErrorCode = flag_l0;
										//loc_16F60
									}
								}
							}
							else
							{
								flag_l0 = *var_8;
								//loc_16EA0
								THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
								*piErrorCode = flag_l0;
								//loc_16F60
							}
						}
						else
						{
							//loc_16ED8
							THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
							*piErrorCode = flag_l0;
							psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
							ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
							//loc_16F54
							returnValue = *piErrorCode;
							if (*piErrorCode != 0)
							{
								//loc_17034
								THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
								return returnValue;
							}
							//loc_16F60
						}
					}
				}
				else
				{
					//loc_16DDC  ld  [%fp+var_8], %l0
					if (flag_l0 == 0)
					{
						//loc_16DE8  loc_16DEC
						if (TTXAxAP_stop_pressed == 0)
						{
							flag_o0 = TTXAxAP_continue_with_interval(var_8);
							flag_l0 = *var_8;
							if (flag_o0 != 0)
							{
								IMGZxAP_sp_set_substep_label("%s", "Airmounts stability...");
								*var_8 = imgzxap_initialize_check_am_stability();
								if (*var_8 != 0)
								{
									psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_am_stability()");
									ERXAlogExceptionSingleLink_id(0x45520072, *var_8, var_8, "IMGZxAP_initialize.c", 0x114, 0, psErrorText);
									flag_l0 = *var_8;
									//loc_16E94
									if (flag_l0 != 0)
									{
										//loc_16ED8
										THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
										*piErrorCode = flag_l0;
										psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
										ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
										//loc_16F54
										returnValue = *piErrorCode;
										if (*piErrorCode != 0)
										{
											//loc_17034
											THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
											return returnValue;
										}
										//loc_16F60
									}
									else
									{
										//loc_16EA0
										THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
										*piErrorCode = flag_l0;
										//loc_16F60
									}
								}
								else
								{
									//loc_171A4
									flag_l0 = *var_8;
									//loc_16EA0
									THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
									*piErrorCode = flag_l0;
									//loc_16F60
								}
							}
							else
							{
								//loc_16E94
								if (flag_l0 != 0)
								{
									//loc_16ED8
									THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
									*piErrorCode = flag_l0;
									psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
									ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
									//loc_16F54
									returnValue = *piErrorCode;
									if (*piErrorCode != 0)
									{
										//loc_17034
										THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
										return returnValue;
									}
									//loc_16F60
								}
								else
								{
									//loc_16EA0
									THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
									*piErrorCode = flag_l0;
									//loc_16F60
								}
							}
						}
						else
						{
							flag_l0 = *var_8;
							//loc_16EA0
							THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
							*piErrorCode = flag_l0;
							//loc_16F60
						}
					}
					else
					{
						//loc_16ED8
						THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
						*piErrorCode = flag_l0;
						psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
						ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
						//loc_16F54
						returnValue = *piErrorCode;
						if (*piErrorCode != 0)
						{
							//loc_17034
							THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
							return returnValue;
						}
						//loc_16F60
					}
				}
			}
			else
			{
				//loc_16DEC
				if (TTXAxAP_stop_pressed == 0)
				{
					flag_o0 = TTXAxAP_continue_with_interval(var_8);
					flag_l0 = *var_8;
					if (flag_o0 != 0)
					{
						IMGZxAP_sp_set_substep_label("%s", "Airmounts stability...");
						*var_8 = imgzxap_initialize_check_am_stability();
						if (*var_8 != 0)
						{
							psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_am_stability()");
							ERXAlogExceptionSingleLink_id(0x45520072, *var_8, var_8, "IMGZxAP_initialize.c", 0x114, 0, psErrorText);
							flag_l0 = *var_8;
							//loc_16E94
							if (flag_l0 != 0)
							{
								//loc_16ED8
								THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
								*piErrorCode = flag_l0;
								psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
								ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
								//loc_16F54
								returnValue = *piErrorCode;
								if (*piErrorCode != 0)
								{
									//loc_17034
									THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
									return returnValue;
								}
								//loc_16F60
							}
							else
							{
								//loc_16EA0
								THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
								*piErrorCode = flag_l0;
								//loc_16F60
							}
						}
						else
						{
							//loc_171A4
							flag_l0 = *var_8;
							//loc_16EA0
							THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
							*piErrorCode = flag_l0;
							//loc_16F60
						}
					}
					else
					{
						//loc_16E94
						if (flag_l0 != 0)
						{
							//loc_16ED8
							THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", flag_l0);
							*piErrorCode = flag_l0;
							psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "imgzxap_initialize_check_preconditions()");
							ERXAlogExceptionSingleLink_id(0x45520072, *piErrorCode, piErrorCode, "IMGZxAP_initialize.c", 0xA4, 0, psErrorText);
							//loc_16F54
							returnValue = *piErrorCode;
							if (*piErrorCode != 0)
							{
								//loc_17034
								THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
								return returnValue;
							}
							//loc_16F60
						}
						else
						{
							//loc_16EA0
							THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
							*piErrorCode = flag_l0;
							//loc_16F60
						}
					}
				}
				else
				{
					flag_l0 = *var_8;
					//loc_16EA0
					THXAtrace("IMGZ", 1, "imgzxap_initialize_check_preconditions", "< (), returnValue=%R", 0);
					*piErrorCode = flag_l0;
					//loc_16F60
				}
			}
		}
		else
		{
			//loc_16F54  ld  [%fp+var_4], %g1
			if (*piErrorCode != 0)
			{
				//loc_17034
				THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
				return returnValue;
			}
			//loc_16F60
		}
	}
	//else loc_16F64
	//loc_16F64
	returnValue = *piErrorCode;
	if (TTXAxAP_stop_pressed == 0)
	{
		flag_o0 = TTXAxAP_continue_with_interval(piErrorCode);
		returnValue = *piErrorCode;
		if (flag_o0 != 0)
		{
			*piErrorCode = IMGZxAP_trace_setup_tracing(tc_struct_ptr);
			if (*piErrorCode != 0)
			{
				psErrorText = ERXAmakeContext("Calling %s resulted in an error.", "IMGZxAP_trace_setup_tracing(tc_struct_ptr)");
				ERXAlogExceptionSingleLink_id(0x45520072,*piErrorCode,piErrorCode, "IMGZxAP_initialize.c", 0xAA,0,psErrorText);
				returnValue = *piErrorCode;
				//loc_16FF0
				if (returnValue != 0)
				{
					//loc_17038
					THXAtrace("IMGZ",1, "IMGZxAP_initialize", "< (), returnValue=%R",returnValue);
					return returnValue;
				}
				//loc_16FFC
			}
			else
			{
				//loc_171AC
				returnValue = *piErrorCode;
				//loc_16FFC
			}
		}
		else
		{
			//loc_16FF0
			if (returnValue != 0)
			{
				//loc_17038
				THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", returnValue);
				return returnValue;
			}
			//loc_16FFC
		}
	}
	//else loc_16FFC
	//loc_16FFC
	THXAtrace("IMGZ", 1, "IMGZxAP_initialize", "< (), returnValue=%R", 0);
	return 0;
}

int imgzxap_initialize_drivers(IMGZxTC_tc_struct *tc_struct_ptr)
{
	int *piErrorCode = 0;
	char *psErrorText;
	int returnValue;
	int flag_o0;
	int *var_8;
	int epc_flags[2];
	int dirver_list[0x384];//var_E20
	SMXA_init_option_str options_str_list[SMXA_MAX_DRIVERS];//-0x20E0
	THXAtrace("IMGZ",1, "imgzxap_initialize_drivers", "> (TTXAxAP_stop_pressed=%i)", TTXAxAP_stop_pressed);
	memset(options_str_list,0, 0x12C0);
	memset(dirver_list, 0, 0xE10);
	dirver_list[0] = 0x4D490000;
	dirver_list[6] = 0x5750434C;
	dirver_list[12] = 0x4B530000;
	dirver_list[18] = 0x414D0000;
	epc_flags[0] = 1;
	epc_flags[1] = 1;
	*var_8 = 0x1375;
	if (TTXAxAP_stop_pressed != 0)
	{
		returnValue = *piErrorCode;
		//loc_17430
		THXAtrace("IMGZ",1, "imgzxap_initialize_drivers", "< (), returnValue=%R",0);
		return 0;
	}
	flag_o0 = TTXAxAP_continue_with_interval(piErrorCode);
	if (flag_o0 != 0)
	{
		*piErrorCode = CMXA_getConfigurationItem(0x1374,var_8);
		//loc_172BC
	}
	//else loc_172BC  ld  [%fp+var_4], %g1
	//loc_172BC
	if (*piErrorCode == 0)
	{
		if (TTXAxAP_stop_pressed != 0)
		{
			returnValue = *piErrorCode;
			//loc_17430
			THXAtrace("IMGZ", 1, "imgzxap_initialize_drivers", "< (), returnValue=%R", 0);
			return 0;
		}
		flag_o0 = TTXAxAP_continue_with_interval(piErrorCode);
		if (flag_o0 != 0)
		{
			if (*var_8 == 0x1376)
			{
				PLXAstr_strlcpy(dirver_list[24], "IHAL_DC_APP", 0x18);
				//loc_1732C
			}
			//else loc_1732C
		}
		//else loc_1732C  ld  [%fp+var_4], %g1
		//loc_1732C
		if (*piErrorCode == 0)
		{
			if (TTXAxAP_stop_pressed == 0)
			{
				flag_o0 = TTXAxAP_continue_with_interval(piErrorCode);
				if (flag_o0 != 0)
				{
					if (tc_struct_ptr->initDrivers == 1)
					{
						if (tc_struct_ptr->doAMstabilityCheck == 0)
						{
							dirver_list[18] = 0;
						}
						//loc_17388
						IMGZxAP_sp_set_substep_label("%s", "Initializing drivers");
						*piErrorCode = SMXAxITS_initialize(dirver_list, options_str_list,1,2, epc_flags);
						//loc_173CC
					}
					//else loc_173CC
				}
				//else loc_173CC  ld  [%fp+var_4], %g1
				//loc_173CC
				returnValue = *piErrorCode;
				if (*piErrorCode == 0)
				{
					//loc_17430
					THXAtrace("IMGZ", 1, "imgzxap_initialize_drivers", "< (), returnValue=%R", 0);
					return 0;
				}
				//else loc_173DC
			}
			else
			{
				// loc_17430  ld  [%fp+var_4], %i0
				returnValue = *piErrorCode;
				THXAtrace("IMGZ", 1, "imgzxap_initialize_drivers", "< (), returnValue=%R", 0);
				return 0;
			}
		}
		//else loc_173DC
	}
	//else loc_173DC
	//loc_173DC
	psErrorText = ERXAmakeContext("%s", "IMGZ: One of the drivers failed to initialize.");
	ERXAlogExceptionSingleLink_id(0x494D5C08,*piErrorCode,piErrorCode, "IMGZxAP_initialize.c", 0xEE,0,psErrorText);
	returnValue = *piErrorCode;
	if (returnValue == 0)
	{
		THXAtrace("IMGZ", 1, "imgzxap_initialize_drivers", "< (), returnValue=%R", 0);
		return 0;
	}
	//else loc_17468
	THXAtrace("IMGZ", 1, "imgzxap_initialize_drivers", "< (), returnValue=%R", returnValue);
	return returnValue;
}

int imgzxap_initialize_check_am_stability()
{
	int i;
	int *piErrorCode = 0;
	char *psErrorText;
	int returnValue;
	int *var_18C;
	int flag_o0;
	int *var_118;
	int *var_114;
	double var_110[6];
	char *flag_o1;
	int *nr_of_retries;//var_108
	AMXAxSTAB_result_enum *result_ok_ptr;//int *var_8;
	IMGZxTC_tc_struct *tc_struct;//var_1C8
	AMXAxSTAB_test_const_struct tc_str;//var_40
	AMXAxSTAB_performance_struct performance_str;//var_100
	THXAtrace("IMGZ",1, "imgzxap_initialize_check_am_stability", "> (TTXAxAP_stop_pressed=%i)", TTXAxAP_stop_pressed);
	memset(&performance_str,0,0xC0);
	*result_ok_ptr = 1;
	returnValue = *piErrorCode;
	if (TTXAxAP_stop_pressed != 0)
	{
		//loc_17848
		THXAtrace("IMGZ",1, "imgzxap_initialize_check_am_stability", "< (), returnValue=%R",0);
		return 0;
	}
	flag_o0 = TTXAxAP_continue_with_interval(piErrorCode);
	if (flag_o0 != 0)
	{
		*piErrorCode = DQXA_get_values(IMGZxAP_functions_dq_handle_ptr, "tc_values", tc_struct);
		//loc_17554
	}
	//else loc_17554 ld  [%fp+var_4], %g1
	returnValue = *piErrorCode;
	if (*piErrorCode != 0)
	{
		//loc_17880
		THXAtrace("IMGZ", 1, "imgzxap_initialize_check_am_stability", "< (), returnValue=%R", returnValue);
		return returnValue;
	}
	if (TTXAxAP_stop_pressed != 0)
	{
		//loc_1784C
		THXAtrace("IMGZ", 1, "imgzxap_initialize_check_am_stability", "< (), returnValue=%R", 0);
		return 0;
	}
	flag_o0 = TTXAxAP_continue_with_interval(piErrorCode);
	if (flag_o0 != 0)
	{
		tc_str.delay_before_measurement = *var_118;
		tc_str.measure_time = *var_114;
		for (i = 0; i < 6; i++)
		{
			tc_str.limits[i] = var_110[i];
		}
		if (*var_18C == 1)
		{
			*piErrorCode = AMXAxSTAB_stability(&tc_str, nr_of_retries,&performance_str,result_ok_ptr);
			//loc_175E8
		}
		//else loc_175E8  ld   [%fp+var_4], %g1
		//loc_175E8
		if (*piErrorCode == 0 && *result_ok_ptr == 1)
		{
			IMGZxAP_sp_log_var("Airmounts Stability Check: %s", "PASSED");
		}
		else
		{
			IMGZxAP_sp_log_var("Airmounts Stability Check: %s", "FAILED");
		}
		if (*result_ok_ptr != 1)
		{
			psErrorText = ERXAmakeContext("%s", "IMGZ: Airmounts stability NOK.");
			ERXAlogExceptionSingleLink_id(0x494D5C09,*piErrorCode,piErrorCode, "IMGZxAP_initialize.c", 0x16D,0,psErrorText);
			//loc_17680
		}
		//else loc_17680
		//loc_17680  loc_17684
	}
	//else  loc_17684  ld   [%fp+var_4], %g1
	//loc_17684
	returnValue = *piErrorCode;
	if (*piErrorCode != 0)
	{
		//loc_17880
		THXAtrace("IMGZ", 1, "imgzxap_initialize_check_am_stability", "< (), returnValue=%R", returnValue);
		return returnValue;
	}
	if (TTXAxAP_stop_pressed != 0)
	{
		//loc_1784C
		THXAtrace("IMGZ", 1, "imgzxap_initialize_check_am_stability", "< (), returnValue=%R", 0);
		return 0;
	}
	flag_o0 = TTXAxAP_continue_with_interval(piErrorCode);
	if (flag_o0 == 0)
	{
		returnValue = *piErrorCode;
		//loc_1783C
		if (returnValue != 0)
		{
			//loc_17884
			THXAtrace("IMGZ", 1, "imgzxap_initialize_check_am_stability", "< (), returnValue=%R", returnValue);
			return returnValue;
		}
		else
		{
			//loc_17848
			THXAtrace("IMGZ", 1, "imgzxap_initialize_check_am_stability", "< (), returnValue=%R", 0);
			return 0;
		}
	}
	IMGZxAP_sp_log_var("%21s%13s%10s%10s", "setpoint", "max_value", "limit", "result");
	i = 0;
	flag_o1 = "Axis Hor 1";
	while(i != 6)
	{
		if (performance_str.perf[i].result == 0)
		{
			IMGZxAP_sp_log_var("%s: %10.7f  %10.7f  %10.7f  %4s",flag_o1, performance_str.perf[i].setpoint, "limit", performance_str.perf[i].max_value,0, performance_str.perf[i].limit, "NA");
		}
		else
		{
			if (performance_str.perf[i].result == 1)
			{
				IMGZxAP_sp_log_var("%s: %10.7f  %10.7f  %10.7f  %4s", flag_o1, performance_str.perf[i].setpoint, "limit", performance_str.perf[i].max_value, 0, performance_str.perf[i].limit, "OK");
			}
			else
			{
				IMGZxAP_sp_log_var("%s: %10.7f  %10.7f  %10.7f  %4s", flag_o1, performance_str.perf[i].setpoint, "limit", performance_str.perf[i].max_value, 0, performance_str.perf[i].limit, "AMXAxSTAB_RESULT_NOK");
			}
		}
		i++;
		switch (i)
		{
			case 0: flag_o1 = "Axis Hor 1"; break;
			case 1: flag_o1 = "Axis Hor 2"; break;
			case 2: flag_o1 = "Axis Hor 3"; break;
			case 3: flag_o1 = "Axis Ver 1"; break;
			case 4: flag_o1 = "Axis Ver 2"; break;
			default:
				flag_o1 = "Axis Ver 3";
				break;
		}
	}
	returnValue = *piErrorCode;
	//loc_1783C
	if (returnValue != 0)
	{
		//loc_17884
		THXAtrace("IMGZ", 1, "imgzxap_initialize_check_am_stability", "< (), returnValue=%R", returnValue);
		return returnValue;
	}
	//loc_17848
	THXAtrace("IMGZ", 1, "imgzxap_initialize_check_am_stability", "< (), returnValue=%R", 0);
	return 0;
}

int imgzxap_initialize_set_field_access(char *pParam,int i1,int i2,int i3)
{
	char *pParam1 = NULL;//var_B0
	char *pParam2 = NULL;//var_108
	char *pParam3 = NULL;//var_58
	int flag_o0;
	flag_o0 = PLXAstr_snprintf(pParam1, 0x50, "%s.chuck[%d]", "result_values",i1);
	if (flag_o0 == 0 && pParam != NULL)
	{
		flag_o0 = PLXAstr_snprintf(pParam2, 0x50, pParam,i2);
		//loc_179A8
	}
	//else loc_179A8  cmp  %o0, 0
	//loc_179A8
	if (flag_o0 == 0)
	{
		flag_o0 = PLXAstr_snprintf(pParam3, 0x50, "%s%s", pParam1, pParam2);
		if (flag_o0 == 0)
		{
			DQXA_set_access(IMGZxAP_functions_dq_handle_ptr, pParam3,i3);
			//locret_179F0
		}
		//else locret_179F0
	}
	//else locret_179F0
	//locret_179F0
	return flag_o0;
}

//sub_179F8

int IMGZxAP_calibrate_initialize(int input_parms[6], IMGZ_result_struct *results_p, IMGZxTC_tc_struct *tc_struct_ptr)
{
	int i,j;
	int flag_l0;
	int flag_o0;
	int flag_g1;
	int *var_4;
	int returnValue;
	WPxCHUCK_chuck_id_enum *mid;//var_8
	WPxCHUCK_chuck_id_enum *eid;//var_C
	int chuck_is_zeroed;//var_10
	THXAtrace("IMGZ",1, "IMGZxAP_calibrate_initialize", "> (TTXAxAP_stop_pressed=%i)", TTXAxAP_stop_pressed);
	*var_4 = 0;
	memcpy(&imgzxap_tc, tc_struct_ptr, 0xC8);
	for (i = 0; i < 6; i++)
	{
		imgzxap_input[i] = input_parms[i];
	}
	if (TTXAxAP_stop_pressed == 0)
	{
		flag_o0 = TTXAxAP_continue_with_interval(var_4);
		if (flag_o0 != 0)
		{
			*var_4 = IMGZxAP_model_init_model_parameters(results_p, input_parms, tc_struct_ptr);
		}
		//else loc_17AF0
		//loc_17AF0
		if (*var_4 != 0)
		{
			returnValue = *var_4;
			//loc_17EC0
			THXAtrace("IMGZ",1, "IMGZxAP_calibrate_initialize", "< (), returnValue=%R",returnValue);
			return returnValue;
		}
		//loc_17BA8
	}
	//else loc_17BA8
	flag_l0 = 0;
	//loc_17BA8
	i = 0;//o7
	while (flag_l0 < 2)
	{
		j = 0;//g1
		if (*var_4 == 0)
		{
			//loc_17B04  循环
			for (j = 0; j < 7; j++)
			{
				if (do_chuck[i] != 0)
				{
					if (do_combination[j].i0 == 0)
					{
						if (do_combination[j].i0x4 == 0)
						{
							//loc_17B60
							results_p->chuck[i].rm_result[j].status = 3;
						}
						else
						{
							//loc_17B54
							results_p->chuck[i].rm_result[j].status = 7;
						}
					}
					else
					{
						//loc_17B54
						results_p->chuck[i].rm_result[j].status = 7;
					}
				}
				else
				{
					//loc_17B60
					results_p->chuck[i].rm_result[j].status = 3;
				}
				//loc_17B68
				if (*var_4 != 0)
				{
					break;
				}
			}
			//loc_17B88
		}
		//else loc_17B88   cmp  %l0, 1
		//loc_17B88
		i++;
		if (flag_l0 == 1)
		{
			break;
			//loc_17BE4
		}
		flag_l0++;
		if (*var_4 != 0)
		{
			returnValue = *var_4;
			THXAtrace("IMGZ",1, "IMGZxAP_calibrate_initialize", "< (), returnValue=%R",returnValue);
			return returnValue;
		}
	}
	//loc_17BE4
	if (*var_4 != 0)
	{
		//loc_17EF8
		returnValue = *var_4;
		THXAtrace("IMGZ", 1, "IMGZxAP_calibrate_initialize", "< (), returnValue=%R", returnValue);
		return returnValue;
	}
	if (TTXAxAP_stop_pressed == 0)
	{
		flag_o0 = TTXAxAP_continue_with_interval(var_4);
		if (flag_o0 != 0)
		{
			*var_4 = IMGZxAP_sp_get_chuck_ids(mid,eid);
			//loc_17C34
		}
		//else loc_17C34
		//loc_17C34
		if (*var_4 != 0)
		{
			//loc_17EF8
			returnValue = *var_4;
			THXAtrace("IMGZ", 1, "IMGZxAP_calibrate_initialize", "< (), returnValue=%R", returnValue);
			return returnValue;
		}
		//loc_17C40
	}
	//else loc_17C40
	//loc_17C40
	if (TTXAxAP_stop_pressed != 0)
	{
		//loc_17E88
		returnValue = *var_4;
		THXAtrace("IMGZ", 1, __FUNCTION__, "< (), returnValue=%R", 0);
		return 0;
	}
	flag_o0 = TTXAxAP_continue_with_interval(var_4);
	if (flag_o0 != 0)
	{
		if (*mid == 0)
		{
			//loc_17C78
			if (input_parms[0] == 0)
				flag_g1 = 0;
			else
				flag_g1 = 1;
		}
		else
		{
			//loc_17C8C
			if (input_parms[1] == 0)
				flag_g1 = 0;
			else
				flag_g1 = 1;
		}
		//loc_17C94
		if (flag_g1 != 0)
		{
			*var_4 = IMGZxAP_sp_zero_chuck();
			//loc_17CB0
		}
		//else loc_17CB0
	}
	//else loc_17CB0
	//loc_17CB0
	if (*var_4 != 0)
	{
		//loc_17EF8
		returnValue = *var_4;
		THXAtrace("IMGZ", 1, "IMGZxAP_calibrate_initialize", "< (), returnValue=%R", returnValue);
		return returnValue;
	}
	if (TTXAxAP_stop_pressed != 0)
	{
		//loc_17E88
		returnValue = *var_4;
		THXAtrace("IMGZ", 1, __FUNCTION__, "< (), returnValue=%R", 0);
		return 0;
	}
	flag_o0 = TTXAxAP_continue_with_interval(var_4);
	if (flag_o0 != 0)
	{
		*var_4 = IMGZxAP_sp_get_zero_status(*eid,0,chuck_is_zeroed);
		//loc_17D00
	}
	//else loc_17D00
	//loc_17D00
	if (*var_4 != 0)
	{
		//loc_17EF8
		returnValue = *var_4;
		THXAtrace("IMGZ", 1, "IMGZxAP_calibrate_initialize", "< (), returnValue=%R", returnValue);
		return returnValue;
	}
	if (TTXAxAP_stop_pressed != 0)
	{
		//loc_17E88
		returnValue = *var_4;
		THXAtrace("IMGZ", 1, __FUNCTION__, "< (), returnValue=%R", 0);
		return 0;
	}
	flag_o0 = TTXAxAP_continue_with_interval(var_4);
	if (flag_o0 != 0)
	{
		if (*mid != 0)
		{
			//loc_17D60
			if (input_parms[1] == 0)
			{
				//loc_17D70
				if (input_parms[2] != 0)
				{
					if (input_parms[3] != 0)
					{
						if (input_parms[2] != 0)
						{
							//loc_17DAC
							if (input_parms[0] == 0)
							{
								if (input_parms[2] == 0)
								{
									if (input_parms[3] == 0)
									{
										//loc_17DD8
										if (input_parms[2] != 0)
										{
											//loc_17DF8
											if (input_parms[0] != 0)
											{
												if (input_parms[3] != 0)
												{
													if (input_parms[4] == 0)
													{
														*var_4 = IMGZxAP_sp_swap_chucks();
														//loc_17E34  ld [%fp+var_4], %g1
													}
													//else loc_17E34  ld [%fp+var_4], %g1
												}
												//else loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34   ld [%fp+var_4], %g1
										}
										else
										{
											if (input_parms[1] != 0)
											{
												//loc_17E08
												if (input_parms[3] != 0)
												{
													if (input_parms[4] == 0)
													{
														*var_4 = IMGZxAP_sp_swap_chucks();
														//loc_17E34  ld [%fp+var_4], %g1
													}
													//else loc_17E34  ld [%fp+var_4], %g1
												}
												//else loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34   ld [%fp+var_4], %g1
										}
									}
									else
									{
										//loc_17E24
										*var_4 = IMGZxAP_sp_swap_chucks();
										//loc_17E34  ld [%fp+var_4], %g1
									}
								}
								else
								{
									//loc_17DD8
									if (input_parms[2] != 0)
									{
										//loc_17DF8
										if (input_parms[0] != 0)
										{
											if (input_parms[3] != 0)
											{
												if (input_parms[4] == 0)
												{
													*var_4 = IMGZxAP_sp_swap_chucks();
													//loc_17E34  ld [%fp+var_4], %g1
												}
												//else loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34  ld [%fp+var_4], %g1
										}
										//else loc_17E34   ld [%fp+var_4], %g1
									}
									else
									{
										if (input_parms[1] != 0)
										{
											//loc_17E08
											if (input_parms[3] != 0)
											{
												if (input_parms[4] == 0)
												{
													*var_4 = IMGZxAP_sp_swap_chucks();
													//loc_17E34  ld [%fp+var_4], %g1
												}
												//else loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34  ld [%fp+var_4], %g1
										}
										//else loc_17E34   ld [%fp+var_4], %g1
									}
								}
							}
							else
							{
								//loc_17E08  ld   [%i0+0xC], %g1
								if (input_parms[3] != 0)
								{
									if (input_parms[4] == 0)
									{
										*var_4 = IMGZxAP_sp_swap_chucks();
										//loc_17E34  ld [%fp+var_4], %g1
									}
									//else loc_17E34   ld  [%fp+var_4], %g1
								}
								//else loc_17E34   ld  [%fp+var_4], %g1
							}
						}
						else
						{
							if (input_parms[1] == 0)
							{
								//loc_17DBC
								if (input_parms[2] == 0)
								{
									if (input_parms[3] == 0)
									{
										//loc_17DD8
										if (input_parms[2] != 0)
										{
											//loc_17DF8
											if (input_parms[0] != 0)
											{
												if (input_parms[3] != 0)
												{
													if (input_parms[4] == 0)
													{
														*var_4 = IMGZxAP_sp_swap_chucks();
														//loc_17E34  ld [%fp+var_4], %g1
													}
													//else loc_17E34  ld [%fp+var_4], %g1
												}
												//else loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34   ld [%fp+var_4], %g1
										}
										else
										{
											if (input_parms[1] != 0)
											{
												//loc_17E08
												if (input_parms[3] != 0)
												{
													if (input_parms[4] == 0)
													{
														*var_4 = IMGZxAP_sp_swap_chucks();
														//loc_17E34  ld [%fp+var_4], %g1
													}
													//else loc_17E34  ld [%fp+var_4], %g1
												}
												//else loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34   ld [%fp+var_4], %g1
										}
									}
									else
									{
										//loc_17E24
										*var_4 = IMGZxAP_sp_swap_chucks();
										//loc_17E34  ld [%fp+var_4], %g1
									}
								}
								else
								{
									//loc_17DD8
									if (input_parms[2] != 0)
									{
										//loc_17DF8
										if (input_parms[0] != 0)
										{
											if (input_parms[3] != 0)
											{
												if (input_parms[4] == 0)
												{
													*var_4 = IMGZxAP_sp_swap_chucks();
													//loc_17E34  ld [%fp+var_4], %g1
												}
												//else loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34  ld [%fp+var_4], %g1
										}
										//else loc_17E34   ld [%fp+var_4], %g1
									}
									else
									{
										if (input_parms[1] != 0)
										{
											//loc_17E08
											if (input_parms[3] != 0)
											{
												if (input_parms[4] == 0)
												{
													*var_4 = IMGZxAP_sp_swap_chucks();
													//loc_17E34  ld [%fp+var_4], %g1
												}
												//else loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34  ld [%fp+var_4], %g1
										}
										//else loc_17E34   ld [%fp+var_4], %g1
									}
								}
							}
							else
							{
								if (input_parms[3] != 0)
								{
									if (input_parms[4] == 0)
									{
										*var_4 = IMGZxAP_sp_swap_chucks();
										//loc_17E34  ld [%fp+var_4], %g1
									}
									//else loc_17E34  ld [%fp+var_4], %g1
								}
								//else loc_17E34  ld [%fp+var_4], %g1
							}
                        }
					}
					else
					{
						//loc_17E24
						*var_4 = IMGZxAP_sp_swap_chucks();
						//loc_17E34  ld [%fp+var_4], %g1
					}
				}
				else
				{
					//loc_17D8C
					if (input_parms[2] != 0)
					{
						//loc_17DAC
						if (input_parms[0] == 0)
						{
							if (input_parms[2] == 0)
							{
								if (input_parms[3] == 0)
								{
									//loc_17DD8
									if (input_parms[2] != 0)
									{
										//loc_17DF8
										if (input_parms[0] != 0)
										{
											if (input_parms[3] != 0)
											{
												if (input_parms[4] == 0)
												{
													*var_4 = IMGZxAP_sp_swap_chucks();
													//loc_17E34  ld [%fp+var_4], %g1
												}
												//else loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34  ld [%fp+var_4], %g1
										}
										//else loc_17E34   ld [%fp+var_4], %g1
									}
									else
									{
										if (input_parms[1] != 0)
										{
											//loc_17E08
											if (input_parms[3] != 0)
											{
												if (input_parms[4] == 0)
												{
													*var_4 = IMGZxAP_sp_swap_chucks();
													//loc_17E34  ld [%fp+var_4], %g1
												}
												//else loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34  ld [%fp+var_4], %g1
										}
										//else loc_17E34   ld [%fp+var_4], %g1
									}
								}
								else
								{
									//loc_17E24
									*var_4 = IMGZxAP_sp_swap_chucks();
									//loc_17E34  ld [%fp+var_4], %g1
								}
							}
							else
							{
								//loc_17DD8
								if (input_parms[2] != 0)
								{
									//loc_17DF8
									if (input_parms[0] != 0)
									{
										if (input_parms[3] != 0)
										{
											if (input_parms[4] == 0)
											{
												*var_4 = IMGZxAP_sp_swap_chucks();
												//loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34  ld [%fp+var_4], %g1
										}
										//else loc_17E34  ld [%fp+var_4], %g1
									}
									//else loc_17E34   ld [%fp+var_4], %g1
								}
								else
								{
									if (input_parms[1] != 0)
									{
										//loc_17E08
										if (input_parms[3] != 0)
										{
											if (input_parms[4] == 0)
											{
												*var_4 = IMGZxAP_sp_swap_chucks();
												//loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34  ld [%fp+var_4], %g1
										}
										//else loc_17E34  ld [%fp+var_4], %g1
									}
									//else loc_17E34   ld [%fp+var_4], %g1
								}
							}
						}
						else
						{
							//loc_17E08  ld   [%i0+0xC], %g1
							if (input_parms[3] != 0)
							{
								if (input_parms[4] == 0)
								{
									*var_4 = IMGZxAP_sp_swap_chucks();
									//loc_17E34  ld [%fp+var_4], %g1
								}
								//else loc_17E34   ld  [%fp+var_4], %g1
							}
							//else loc_17E34   ld  [%fp+var_4], %g1
						}
					}
					else
					{
						if (input_parms[1] == 0)
						{
							//loc_17DBC
							if (input_parms[2] == 0)
							{
								if (input_parms[3] == 0)
								{
									//loc_17DD8
									if (input_parms[2] != 0)
									{
										//loc_17DF8
										if (input_parms[0] != 0)
										{
											if (input_parms[3] != 0)
											{
												if (input_parms[4] == 0)
												{
													*var_4 = IMGZxAP_sp_swap_chucks();
													//loc_17E34  ld [%fp+var_4], %g1
												}
												//else loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34  ld [%fp+var_4], %g1
										}
										//else loc_17E34   ld [%fp+var_4], %g1
									}
									else
									{
										if (input_parms[1] != 0)
										{
											//loc_17E08
											if (input_parms[3] != 0)
											{
												if (input_parms[4] == 0)
												{
													*var_4 = IMGZxAP_sp_swap_chucks();
													//loc_17E34  ld [%fp+var_4], %g1
												}
												//else loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34  ld [%fp+var_4], %g1
										}
										//else loc_17E34   ld [%fp+var_4], %g1
									}
								}
								else
								{
									//loc_17E24
									*var_4 = IMGZxAP_sp_swap_chucks();
									//loc_17E34  ld [%fp+var_4], %g1
								}
							}
							else
							{
								//loc_17DD8
								if (input_parms[2] != 0)
								{
									//loc_17DF8
									if (input_parms[0] != 0)
									{
										if (input_parms[3] != 0)
										{
											if (input_parms[4] == 0)
											{
												*var_4 = IMGZxAP_sp_swap_chucks();
												//loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34  ld [%fp+var_4], %g1
										}
										//else loc_17E34  ld [%fp+var_4], %g1
									}
									//else loc_17E34   ld [%fp+var_4], %g1
								}
								else
								{
									if (input_parms[1] != 0)
									{
										//loc_17E08
										if (input_parms[3] != 0)
										{
											if (input_parms[4] == 0)
											{
												*var_4 = IMGZxAP_sp_swap_chucks();
												//loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34  ld [%fp+var_4], %g1
										}
										//else loc_17E34  ld [%fp+var_4], %g1
									}
									//else loc_17E34   ld [%fp+var_4], %g1
								}
							}
						}
						else
						{
							if (input_parms[3] != 0)
							{
								if (input_parms[4] == 0)
								{
									*var_4 = IMGZxAP_sp_swap_chucks();
									//loc_17E34  ld [%fp+var_4], %g1
								}
								//else loc_17E34  ld [%fp+var_4], %g1
							}
							//else loc_17E34  ld [%fp+var_4], %g1
						}
					}
				}
			}
			else
			{
				//loc_17DAC   ld  [%i0], %g2
				if (input_parms[0] == 0)
				{
					if (input_parms[2] == 0)
					{
						if (input_parms[3] == 0)
						{
							//loc_17DD8
							if (input_parms[2] != 0)
							{
								//loc_17DF8
								if (input_parms[0] != 0)
								{
									if (input_parms[3] != 0)
									{
										if (input_parms[4] == 0)
										{
											*var_4 = IMGZxAP_sp_swap_chucks();
											//loc_17E34  ld [%fp+var_4], %g1
										}
										//else loc_17E34  ld [%fp+var_4], %g1
									}
									//else loc_17E34  ld [%fp+var_4], %g1
								}
								//else loc_17E34   ld [%fp+var_4], %g1
							}
							else
							{
								if (input_parms[1] != 0)
								{
									//loc_17E08
									if (input_parms[3] != 0)
									{
										if (input_parms[4] == 0)
										{
											*var_4 = IMGZxAP_sp_swap_chucks();
											//loc_17E34  ld [%fp+var_4], %g1
										}
										//else loc_17E34  ld [%fp+var_4], %g1
									}
									//else loc_17E34  ld [%fp+var_4], %g1
								}
								//else loc_17E34   ld [%fp+var_4], %g1
							}
						}
						else
						{
							//loc_17E24
							*var_4 = IMGZxAP_sp_swap_chucks();
							//loc_17E34  ld [%fp+var_4], %g1
						}
					}
					else
					{
						//loc_17DD8
						if (input_parms[2] != 0)
						{
							//loc_17DF8
							if (input_parms[0] != 0)
							{
								if (input_parms[3] != 0)
								{
									if (input_parms[4] == 0)
									{
										*var_4 = IMGZxAP_sp_swap_chucks();
										//loc_17E34  ld [%fp+var_4], %g1
									}
									//else loc_17E34  ld [%fp+var_4], %g1
								}
								//else loc_17E34  ld [%fp+var_4], %g1
							}
							//else loc_17E34   ld [%fp+var_4], %g1
						}
						else
						{
							if (input_parms[1] != 0)
							{
								//loc_17E08
								if (input_parms[3] != 0)
								{
									if (input_parms[4] == 0)
									{
										*var_4 = IMGZxAP_sp_swap_chucks();
										//loc_17E34  ld [%fp+var_4], %g1
									}
									//else loc_17E34  ld [%fp+var_4], %g1
								}
								//else loc_17E34  ld [%fp+var_4], %g1
							}
							//else loc_17E34   ld [%fp+var_4], %g1
						}
					}
				}
				else
				{
					//loc_17E08  ld   [%i0+0xC], %g1
					if (input_parms[3] != 0)
					{
						if (input_parms[4] == 0)
						{
							*var_4 = IMGZxAP_sp_swap_chucks();
							//loc_17E34  ld [%fp+var_4], %g1
						}
						//else loc_17E34   ld  [%fp+var_4], %g1
					}
					//else loc_17E34   ld  [%fp+var_4], %g1
				}
			}
		}
		else
		{
			if (input_parms[0] == 0)
			{
				//loc_17D70
				if (input_parms[2] != 0)
				{
					if (input_parms[3] != 0)
					{
						if (input_parms[2] != 0)
						{
							//loc_17DAC
							if (input_parms[0] == 0)
							{
								if (input_parms[2] == 0)
								{
									if (input_parms[3] == 0)
									{
										//loc_17DD8
										if (input_parms[2] != 0)
										{
											//loc_17DF8
											if (input_parms[0] != 0)
											{
												if (input_parms[3] != 0)
												{
													if (input_parms[4] == 0)
													{
														*var_4 = IMGZxAP_sp_swap_chucks();
														//loc_17E34  ld [%fp+var_4], %g1
													}
													//else loc_17E34  ld [%fp+var_4], %g1
												}
												//else loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34   ld [%fp+var_4], %g1
										}
										else
										{
											if (input_parms[1] != 0)
											{
												//loc_17E08
												if (input_parms[3] != 0)
												{
													if (input_parms[4] == 0)
													{
														*var_4 = IMGZxAP_sp_swap_chucks();
														//loc_17E34  ld [%fp+var_4], %g1
													}
													//else loc_17E34  ld [%fp+var_4], %g1
												}
												//else loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34   ld [%fp+var_4], %g1
										}
									}
									else
									{
										//loc_17E24
										*var_4 = IMGZxAP_sp_swap_chucks();
										//loc_17E34  ld [%fp+var_4], %g1
									}
								}
								else
								{
									//loc_17DD8
									if (input_parms[2] != 0)
									{
										//loc_17DF8
										if (input_parms[0] != 0)
										{
											if (input_parms[3] != 0)
											{
												if (input_parms[4] == 0)
												{
													*var_4 = IMGZxAP_sp_swap_chucks();
													//loc_17E34  ld [%fp+var_4], %g1
												}
												//else loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34  ld [%fp+var_4], %g1
										}
										//else loc_17E34   ld [%fp+var_4], %g1
									}
									else
									{
										if (input_parms[1] != 0)
										{
											//loc_17E08
											if (input_parms[3] != 0)
											{
												if (input_parms[4] == 0)
												{
													*var_4 = IMGZxAP_sp_swap_chucks();
													//loc_17E34  ld [%fp+var_4], %g1
												}
												//else loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34  ld [%fp+var_4], %g1
										}
										//else loc_17E34   ld [%fp+var_4], %g1
									}
								}
							}
							else
							{
								//loc_17E08  ld   [%i0+0xC], %g1
								if (input_parms[3] != 0)
								{
									if (input_parms[4] == 0)
									{
										*var_4 = IMGZxAP_sp_swap_chucks();
										//loc_17E34  ld [%fp+var_4], %g1
									}
									//else loc_17E34   ld  [%fp+var_4], %g1
								}
								//else loc_17E34   ld  [%fp+var_4], %g1
							}
						}
						else
						{
							if (input_parms[1] == 0)
							{
								//loc_17DBC
								if (input_parms[2] == 0)
								{
									if (input_parms[3] == 0)
									{
										//loc_17DD8
										if (input_parms[2] != 0)
										{
											//loc_17DF8
											if (input_parms[0] != 0)
											{
												if (input_parms[3] != 0)
												{
													if (input_parms[4] == 0)
													{
														*var_4 = IMGZxAP_sp_swap_chucks();
														//loc_17E34  ld [%fp+var_4], %g1
													}
													//else loc_17E34  ld [%fp+var_4], %g1
												}
												//else loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34   ld [%fp+var_4], %g1
										}
										else
										{
											if (input_parms[1] != 0)
											{
												//loc_17E08
												if (input_parms[3] != 0)
												{
													if (input_parms[4] == 0)
													{
														*var_4 = IMGZxAP_sp_swap_chucks();
														//loc_17E34  ld [%fp+var_4], %g1
													}
													//else loc_17E34  ld [%fp+var_4], %g1
												}
												//else loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34   ld [%fp+var_4], %g1
										}
									}
									else
									{
										//loc_17E24
										*var_4 = IMGZxAP_sp_swap_chucks();
										//loc_17E34  ld [%fp+var_4], %g1
									}
								}
								else
								{
									//loc_17DD8
									if (input_parms[2] != 0)
									{
										//loc_17DF8
										if (input_parms[0] != 0)
										{
											if (input_parms[3] != 0)
											{
												if (input_parms[4] == 0)
												{
													*var_4 = IMGZxAP_sp_swap_chucks();
													//loc_17E34  ld [%fp+var_4], %g1
												}
												//else loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34  ld [%fp+var_4], %g1
										}
										//else loc_17E34   ld [%fp+var_4], %g1
									}
									else
									{
										if (input_parms[1] != 0)
										{
											//loc_17E08
											if (input_parms[3] != 0)
											{
												if (input_parms[4] == 0)
												{
													*var_4 = IMGZxAP_sp_swap_chucks();
													//loc_17E34  ld [%fp+var_4], %g1
												}
												//else loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34  ld [%fp+var_4], %g1
										}
										//else loc_17E34   ld [%fp+var_4], %g1
									}
								}
							}
							else
							{
								if (input_parms[3] != 0)
								{
									if (input_parms[4] == 0)
									{
										*var_4 = IMGZxAP_sp_swap_chucks();
										//loc_17E34  ld [%fp+var_4], %g1
									}
									//else loc_17E34  ld [%fp+var_4], %g1
								}
								//else loc_17E34  ld [%fp+var_4], %g1
							}
						}
					}
					else
					{
						//loc_17E24
						*var_4 = IMGZxAP_sp_swap_chucks();
						//loc_17E34  ld [%fp+var_4], %g1
					}
				}
				else
				{
					//loc_17D8C
					if (input_parms[2] != 0)
					{
						//loc_17DAC
						if (input_parms[0] == 0)
						{
							if (input_parms[2] == 0)
							{
								if (input_parms[3] == 0)
								{
									//loc_17DD8
									if (input_parms[2] != 0)
									{
										//loc_17DF8
										if (input_parms[0] != 0)
										{
											if (input_parms[3] != 0)
											{
												if (input_parms[4] == 0)
												{
													*var_4 = IMGZxAP_sp_swap_chucks();
													//loc_17E34  ld [%fp+var_4], %g1
												}
												//else loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34  ld [%fp+var_4], %g1
										}
										//else loc_17E34   ld [%fp+var_4], %g1
									}
									else
									{
										if (input_parms[1] != 0)
										{
											//loc_17E08
											if (input_parms[3] != 0)
											{
												if (input_parms[4] == 0)
												{
													*var_4 = IMGZxAP_sp_swap_chucks();
													//loc_17E34  ld [%fp+var_4], %g1
												}
												//else loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34  ld [%fp+var_4], %g1
										}
										//else loc_17E34   ld [%fp+var_4], %g1
									}
								}
								else
								{
									//loc_17E24
									*var_4 = IMGZxAP_sp_swap_chucks();
									//loc_17E34  ld [%fp+var_4], %g1
								}
							}
							else
							{
								//loc_17DD8
								if (input_parms[2] != 0)
								{
									//loc_17DF8
									if (input_parms[0] != 0)
									{
										if (input_parms[3] != 0)
										{
											if (input_parms[4] == 0)
											{
												*var_4 = IMGZxAP_sp_swap_chucks();
												//loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34  ld [%fp+var_4], %g1
										}
										//else loc_17E34  ld [%fp+var_4], %g1
									}
									//else loc_17E34   ld [%fp+var_4], %g1
								}
								else
								{
									if (input_parms[1] != 0)
									{
										//loc_17E08
										if (input_parms[3] != 0)
										{
											if (input_parms[4] == 0)
											{
												*var_4 = IMGZxAP_sp_swap_chucks();
												//loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34  ld [%fp+var_4], %g1
										}
										//else loc_17E34  ld [%fp+var_4], %g1
									}
									//else loc_17E34   ld [%fp+var_4], %g1
								}
							}
						}
						else
						{
							//loc_17E08  ld   [%i0+0xC], %g1
							if (input_parms[3] != 0)
							{
								if (input_parms[4] == 0)
								{
									*var_4 = IMGZxAP_sp_swap_chucks();
									//loc_17E34  ld [%fp+var_4], %g1
								}
								//else loc_17E34   ld  [%fp+var_4], %g1
							}
							//else loc_17E34   ld  [%fp+var_4], %g1
						}
					}
					else
					{
						if (input_parms[1] == 0)
						{
							//loc_17DBC
							if (input_parms[2] == 0)
							{
								if (input_parms[3] == 0)
								{
									//loc_17DD8
									if (input_parms[2] != 0)
									{
										//loc_17DF8
										if (input_parms[0] != 0)
										{
											if (input_parms[3] != 0)
											{
												if (input_parms[4] == 0)
												{
													*var_4 = IMGZxAP_sp_swap_chucks();
													//loc_17E34  ld [%fp+var_4], %g1
												}
												//else loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34  ld [%fp+var_4], %g1
										}
										//else loc_17E34   ld [%fp+var_4], %g1
									}
									else
									{
										if (input_parms[1] != 0)
										{
											//loc_17E08
											if (input_parms[3] != 0)
											{
												if (input_parms[4] == 0)
												{
													*var_4 = IMGZxAP_sp_swap_chucks();
													//loc_17E34  ld [%fp+var_4], %g1
												}
												//else loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34  ld [%fp+var_4], %g1
										}
										//else loc_17E34   ld [%fp+var_4], %g1
									}
								}
								else
								{
									//loc_17E24
									*var_4 = IMGZxAP_sp_swap_chucks();
									//loc_17E34  ld [%fp+var_4], %g1
								}
							}
							else
							{
								//loc_17DD8
								if (input_parms[2] != 0)
								{
									//loc_17DF8
									if (input_parms[0] != 0)
									{
										if (input_parms[3] != 0)
										{
											if (input_parms[4] == 0)
											{
												*var_4 = IMGZxAP_sp_swap_chucks();
												//loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34  ld [%fp+var_4], %g1
										}
										//else loc_17E34  ld [%fp+var_4], %g1
									}
									//else loc_17E34   ld [%fp+var_4], %g1
								}
								else
								{
									if (input_parms[1] != 0)
									{
										//loc_17E08
										if (input_parms[3] != 0)
										{
											if (input_parms[4] == 0)
											{
												*var_4 = IMGZxAP_sp_swap_chucks();
												//loc_17E34  ld [%fp+var_4], %g1
											}
											//else loc_17E34  ld [%fp+var_4], %g1
										}
										//else loc_17E34  ld [%fp+var_4], %g1
									}
									//else loc_17E34   ld [%fp+var_4], %g1
								}
							}
						}
						else
						{
							if (input_parms[3] != 0)
							{
								if (input_parms[4] == 0)
								{
									*var_4 = IMGZxAP_sp_swap_chucks();
									//loc_17E34  ld [%fp+var_4], %g1
								}
								//else loc_17E34  ld [%fp+var_4], %g1
							}
							//else loc_17E34  ld [%fp+var_4], %g1
						}
					}
				}
			}
			else
			{
				if (input_parms[1] == 0)
				{
					//loc_17DBC
					if (input_parms[2] == 0)
					{
						if (input_parms[3] == 0)
						{
							//loc_17DD8
							if (input_parms[2] != 0)
							{
								//loc_17DF8
								if (input_parms[0] != 0)
								{
									if (input_parms[3] != 0)
									{
										if (input_parms[4] == 0)
										{
											*var_4 = IMGZxAP_sp_swap_chucks();
											//loc_17E34  ld [%fp+var_4], %g1
										}
										//else loc_17E34  ld [%fp+var_4], %g1
									}
									//else loc_17E34  ld [%fp+var_4], %g1
								}
								//else loc_17E34   ld [%fp+var_4], %g1
							}
							else
							{
								if (input_parms[1] != 0)
								{
									//loc_17E08
									if (input_parms[3] != 0)
									{
										if (input_parms[4] == 0)
										{
											*var_4 = IMGZxAP_sp_swap_chucks();
											//loc_17E34  ld [%fp+var_4], %g1
										}
										//else loc_17E34  ld [%fp+var_4], %g1
									}
									//else loc_17E34  ld [%fp+var_4], %g1
								}
								//else loc_17E34   ld [%fp+var_4], %g1
							}
						}
						else
						{
							//loc_17E24
							*var_4 = IMGZxAP_sp_swap_chucks();
							//loc_17E34  ld [%fp+var_4], %g1
						}
					}
					else
					{
						//loc_17DD8
						if (input_parms[2] != 0)
						{
							//loc_17DF8
							if (input_parms[0] != 0)
							{
								if (input_parms[3] != 0)
								{
									if (input_parms[4] == 0)
									{
										*var_4 = IMGZxAP_sp_swap_chucks();
										//loc_17E34  ld [%fp+var_4], %g1
									}
									//else loc_17E34  ld [%fp+var_4], %g1
								}
								//else loc_17E34  ld [%fp+var_4], %g1
							}
							//else loc_17E34   ld [%fp+var_4], %g1
						}
						else
						{
							if (input_parms[1] != 0)
							{
								//loc_17E08
								if (input_parms[3] != 0)
								{
									if (input_parms[4] == 0)
									{
										*var_4 = IMGZxAP_sp_swap_chucks();
										//loc_17E34  ld [%fp+var_4], %g1
									}
									//else loc_17E34  ld [%fp+var_4], %g1
								}
								//else loc_17E34  ld [%fp+var_4], %g1
							}
							//else loc_17E34   ld [%fp+var_4], %g1
						}
					}
				}
				else
				{
					if (input_parms[3] != 0)
					{
						if (input_parms[4] == 0)
						{
							*var_4 = IMGZxAP_sp_swap_chucks();
							//loc_17E34  ld [%fp+var_4], %g1
						}
						//else loc_17E34  ld [%fp+var_4], %g1
					}
					//else loc_17E34  ld [%fp+var_4], %g1
				}
			}
		}
	}
	//else loc_17E34
	//loc_17E34
	if (*var_4 != 0)
	{
		//loc_17EF8
		returnValue = *var_4;
		THXAtrace("IMGZ", 1, "IMGZxAP_calibrate_initialize", "< (), returnValue=%R", returnValue);
		return returnValue;
	}
	returnValue = *var_4;
	if (TTXAxAP_stop_pressed != 0)
	{
		//loc_17E88
		THXAtrace("IMGZ", 1, "IMGZxAP_calibrate_initialize", "< (), returnValue=%R", 0);
		return 0;
	}
	flag_o0 = TTXAxAP_continue_with_interval(var_4);
	returnValue = *var_4;
	if (flag_o0 != 0)
	{
		*var_4 = IMGZxAP_sp_set_hf_map_state(0);
		returnValue = *var_4;
		//loc_17E7C
	}
	//else loc_17E7C
	//loc_17E7C
	if (returnValue != 0)
	{
		THXAtrace("IMGZ", 1, "IMGZxAP_calibrate_initialize", "< (), returnValue=%R", returnValue);
		return returnValue;
	}
	THXAtrace("IMGZ", 1, "IMGZxAP_calibrate_initialize", "< (), returnValue=%R", 0);
	return 0;
}



int main()
{
	int flag_l0;
	PLXAmem_malloc(0x30, ERXA_current_env);
	if (ERXA_current_env == NULL)
	{
		__assert("ERXA_current_env!=NULL", "IMGZxAP_startupshutdown.c", 0x63);
	}
	//else  loc_131EC
	//loc_131EC
	flag_l0 = setjmp(ERXA_current_env);
	ERXAsignalInstall();
	if (flag_l0 != -1)
	{
		//loc_13224

	}
	else
	{

	}
	
	return 0;
}
