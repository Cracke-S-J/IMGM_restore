/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : TT
* 模块名称 : TTXAxAP
* 文件名称 : TTXAxAP.h
* 概要描述 :
*	TT组件TTXAxAP数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _TTXAxAP_H_
#define _TTXAxAP_H_

/*------------------------------- Includes -------------------------------*/
#include <DQXA.h> 
#include <TTXA.h> 





/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef unsigned int TTXAxAP_logfile_id;

typedef char TTXAxAP_datapool_struct_input_dq_name[0x50];

typedef char TTXAxAP_datapool_struct_result_dq_name[0x50];

typedef char TTXAxAP_datapool_struct_testconst_dq_name[0x50];

typedef char TTXAxAP_datapool_struct_verification_dq_name[0x50];

typedef char TTXAxAP_datapool_struct_measure_dq_name[0x50];

typedef char TTXAxAP_datapool_struct_calculate_dq_name[0x50];

typedef struct
{
    TTXAxAP_datapool_struct_input_dq_name input_dq_name;
    TTXAxAP_datapool_struct_result_dq_name result_dq_name;
    TTXAxAP_datapool_struct_testconst_dq_name testconst_dq_name;
    TTXAxAP_datapool_struct_verification_dq_name verification_dq_name;
    TTXAxAP_datapool_struct_measure_dq_name measure_dq_name;
    TTXAxAP_datapool_struct_calculate_dq_name calculate_dq_name;
} TTXAxAP_datapool_struct;

typedef enum
{
    TTXAxAP_STATE_UNDEFINED = 0,
    TTXAxAP_STATE_INPUT = 1,
    TTXAxAP_STATE_RECALCULATE = 2,
    TTXAxAP_STATE_USER_ACTION = 3,
    TTXAxAP_STATE_FINISHED = 4,
} TTXAxAP_state_enum;

typedef enum
{
    TTXAxAP_RESULT_VALIDATION_UNDEFINED = 0,
    TTXAxAP_RESULT_VALIDATION_OUT_OF_LIMITS = 1,
    TTXAxAP_RESULT_VALIDATION_WITHIN_LIMITS = 2,
    TTXAxAP_RESULT_VALIDATION_NOT_CALCULATED = 3,
} TTXAxAP_result_validation_enum;

typedef enum
{
    TTXAxAP_MEASUREMENT_QUALITY_UNDEFINED = 0,
    TTXAxAP_MEASUREMENT_QUALITY_OK = 1,
    TTXAxAP_MEASUREMENT_QUALITY_NOK = 2,
    TTXAxAP_MEASUREMENT_QUALITY_NOT_CALCULATED = 3,
} TTXAxAP_measurement_quality_enum;

typedef enum
{
    TTXAxAP_TEST_TYPE_UNDEFINED = 0,
    TTXAxAP_TEST_TYPE_CALIBRATION = 1,
    TTXAxAP_TEST_TYPE_DIAGNOSTIC = 2,
    TTXAxAP_TEST_TYPE_PERFORMANCE = 3,
    TTXAxAP_TEST_TYPE_LUTM = 4,
} TTXAxAP_test_type_enum;

typedef enum
{
    TTXAxAP_SAVE_MC_TYPE_UNDEFINED = 0,
    TTXAxAP_SAVE_MC_TYPE_PARTIAL = 1,
    TTXAxAP_SAVE_MC_TYPE_FULL = 2,
} TTXAxAP_save_mc_type_enum;

typedef char TTXAxAP_user_action_dlg_struct_user_text[0x50];

typedef struct
{
    TTXAxAP_user_action_dlg_struct_user_text user_text;
    int time_in_sec;
} TTXAxAP_user_action_dlg_struct;

typedef struct
{
    bool generate_xml;
    int nr_of_xml_reports;
} TTXAxAP_xml_struct;

typedef char TTXAxAP_scenario_struct_input_dd_type[0x50];

typedef char TTXAxAP_scenario_struct_verification_dd_type[0x50];

typedef char TTXAxAP_scenario_struct_testconstants_dd_type[0x50];

typedef struct
{
    bool use_scenarios;
    TTXAxAP_scenario_struct_input_dd_type input_dd_type;
    TTXAxAP_scenario_struct_verification_dd_type verification_dd_type;
    TTXAxAP_scenario_struct_testconstants_dd_type testconstants_dd_type;
} TTXAxAP_scenario_struct;

typedef struct
{
    TTXAxAP_result_validation_enum result_validation;
    TTXAxAP_measurement_quality_enum measurement_quality;
} TTXAxAP_result_check_struct;

typedef struct
{
    bool show_invisible_items;
    bool show_empty_vararray;
    bool transpose_table;
    bool hide_vararray_index_col;
    int width;
    TTXAxAP_xml_struct xml_config;
} TTXAxAP_report_struct;

typedef char TTXAxAP_graphics_struct_data_filename[0x100];

typedef char TTXAxAP_graphics_struct_data_dirname[0x100];

typedef char TTXAxAP_graphics_struct_dir_mask[0x100];

typedef struct
{
    bool present;
    TTXAxAP_graphics_struct_data_filename data_filename;
    bool show_file_selector;
    TTXAxAP_graphics_struct_data_dirname data_dirname;
    TTXAxAP_graphics_struct_dir_mask dir_mask;
} TTXAxAP_graphics_struct;

typedef struct
{
    int minimum;
    int maximum;
} TTXAxAP_step_time_limits_struct;

typedef char TTXAxAP_application_info_struct_application_name[0x50];

typedef char TTXAxAP_application_info_struct_application_abbr[0x50];

typedef char TTXAxAP_application_info_struct_subsystem_name[0x50];

typedef char TTXAxAP_application_info_struct_subsystem_abbr[0x50];

typedef struct
{
    TTXAxAP_application_info_struct_application_name application_name;
    TTXAxAP_application_info_struct_application_abbr application_abbr;
    TTXAxAP_application_info_struct_subsystem_name subsystem_name;
    TTXAxAP_application_info_struct_subsystem_abbr subsystem_abbr;
} TTXAxAP_application_info_struct;

typedef struct
{
    int len;
    int max_len;
    int* array;
} TTXAxAP_rerun_var_array;

typedef struct
{
    int len;
    int max_len;
    bool* array;
} TTXAxAP_rerun_enabled_var_array;

typedef struct
{
    TTXA_step_type_enum step_type;
    bool step_skip_allowed;
    bool auto_continue;
    bool jumping_back_allowed;
    TTXAxAP_rerun_var_array rerun_from_step;
    TTXAxAP_rerun_enabled_var_array rerun_from_step_enabled;
    bool skip_button_sensitive;
    bool continue_button_sensitive;
    bool rerun_button_sensitive;
} TTXAxAP_interactive_step_config_struct;

typedef struct
{
    int len;
    int max_len;
    TTXAxAP_interactive_step_config_struct* array;
} TTXAxAP_interactive_steps;

typedef char TTXAxAP_config_struct_ui_process_name[0x100];

typedef struct
{
    TTXAxAP_test_type_enum test_type;
    TTXA_test_mode_enum test_mode;
    DQXA_handle_t dq_handle;
    TTXAxAP_config_struct_ui_process_name ui_process_name;
    TTXAxAP_graphics_struct graphics;
    TTXAxAP_report_struct report_config;
    int number_of_steps;
    TTXAxAP_application_info_struct application_info;
    TTXAxAP_datapool_struct datapool;
    bool pm_report;
    TTXAxAP_scenario_struct scenario_struct;
    int save_mc_duration;
    TTXAxAP_interactive_steps step_config;
} TTXAxAP_config_struct;

typedef char TTXAxAP_mc_result_check_struct_mc_set_name[0x50];

typedef struct
{
    TTXAxAP_mc_result_check_struct_mc_set_name mc_set_name;
    TTXAxAP_result_check_struct mc_result_check;
} TTXAxAP_mc_result_check_struct;

typedef struct
{
    int len;
    int max_len;
    TTXAxAP_mc_result_check_struct* array;
} TTXAxAP_mc_result_check_vararray;

typedef struct
{
    bool save_mc_set;
    TTXAxAP_mc_result_check_struct result_of_mc_set;
} TTXAxAP_mc_set_to_save_struct;

typedef struct
{
    int len;
    int max_len;
    TTXAxAP_mc_set_to_save_struct* array;
} TTXAxAP_mc_set_to_save_vararray;

typedef struct
{
    TTXAxAP_save_mc_type_enum save_mc_type;
    TTXAxAP_mc_set_to_save_vararray mc_set_to_save;
} TTXAxAP_save_mc_request_struct;

typedef char TTXAxAP_set_substep_label_label[0x50];

typedef char TTXAxAP_get_logfile_id_filename_mid_fix[0x100];



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int TTXAxAP_add_custom_service(TTXAxAP_state_enum state,
	int command);
int TTXAxAP_add_custom_service_for_step(TTXAxAP_state_enum state,
	int command,
	TTXA_step_id step_id);
int TTXAxAP_enter_mainloop(void *);
//int TTXAxAP_test_stopped(bool *test_stopped_ptr);
int TTXAxAP_test_stopped(int i0, bool *test_stopped_ptr);
int TTXAxAP_continue_pressed(bool *continue_pressed_ptr);
int TTXAxAP_check_custom_triggers(void);
int TTXAxAP_create_default_interactive_step_array(int num_steps);
//int TTXAxAP_set_substep_label(const TTXAxAP_set_substep_label_label *label);
int TTXAxAP_set_substep_label(int step, const char *label);
int TTXAxAP_get_logfile_id(TTXAxAP_get_logfile_id_filename_mid_fix filename_mid_fix,
	TTXAxAP_logfile_id *logfile_id_ptr);
int TTXAxAP_get_report_number(int *report_number);
int TTXAxAP_show_user_action_dlg(const TTXAxAP_user_action_dlg_struct *user_action_dlg_data_ptr);
int TTXAxAP_hide_user_action_dlg(void);
int TTXAxAP_savemcs_selected_in_queuemode(bool *savemcs_selected_ptr);

int TTXAxAP_construct(void *cb_func);

bool TTXAxAP_continue_with_interval(int *piErrorCode);


extern bool TTXAxAP_stop_pressed;



#endif // _TTXAxAP_TC_H_
