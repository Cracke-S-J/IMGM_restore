
#include <TTXA.h> 
#include <TTXAxAP.h> 







int TTXAxAP_add_custom_service(TTXAxAP_state_enum state,
	int command)
{
	return 0;
}
int TTXAxAP_add_custom_service_for_step(TTXAxAP_state_enum state,
	int command,
	TTXA_step_id step_id)
{
	return 0;
}
int TTXAxAP_enter_mainloop(void *ptr)
{
	return 0;
}
//int TTXAxAP_test_stopped(bool *test_stopped_ptr);
int TTXAxAP_test_stopped(int i0, bool *test_stopped_ptr)
{
	return 0;
}
int TTXAxAP_continue_pressed(bool *continue_pressed_ptr)
{
	return 0;
}
int TTXAxAP_check_custom_triggers(void)
{
	return 0;
}
int TTXAxAP_create_default_interactive_step_array(int num_steps)
{
	return 0;
}
//int TTXAxAP_set_substep_label(const TTXAxAP_set_substep_label_label *label);
int TTXAxAP_set_substep_label(int step, const char *label)
{
	return 0;
}
int TTXAxAP_get_logfile_id(TTXAxAP_get_logfile_id_filename_mid_fix filename_mid_fix,
	TTXAxAP_logfile_id *logfile_id_ptr)
{
	return 0;
}
int TTXAxAP_get_report_number(int *report_number)
{
	return 0;
}
int TTXAxAP_show_user_action_dlg(const TTXAxAP_user_action_dlg_struct *user_action_dlg_data_ptr)
{
	return 0;
}
int TTXAxAP_hide_user_action_dlg(void)
{
	return 0;
}
int TTXAxAP_savemcs_selected_in_queuemode(bool *savemcs_selected_ptr)
{
	return 0;
}

int TTXAxAP_construct(void *cb_func)
{
	return 0;
}

bool TTXAxAP_continue_with_interval(int *piErrorCode)
{
	return 0;
}


bool TTXAxAP_stop_pressed = 0;
