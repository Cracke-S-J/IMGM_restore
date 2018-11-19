/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMDQxTC
* 文件名称 : IMDQxTC_tc.h
* 概要描述 :
*	IM组件IMDQxTC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMDQxTC_TC_H_
#define _IMDQxTC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <IMDQ_tc.h> 
#include <AMXAxSTAB_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    double palm_check_period;
    AMXAxSTAB_test_const_struct am_limits;
    int am_nr_retries;
} IMDQxTC_step_preconditions_stuct;

typedef struct
{
    double f_start;
    double f_end;
    double f_step;
    double amplitude;
} IMDQxTC_sweep_struct;

typedef struct
{
    IMDQxTC_sweep_struct sweep_m;
    IMDQxTC_sweep_struct sweep_e;
} IMDQxTC_step_sweep_struct;

typedef struct
{
    bool used;
    IMDQ_side_enum sweep_side;
    IMDQ_criterium_type_enum type;
    IMDQ_normalization_enum normalization;
    IMDQ_encoder_enum norm_encoder;
    double f_start;
    double f_end;
    double spec;
} IMDQxTC_criterium_struct;

typedef IMDQxTC_criterium_struct IMDQxTC_criteria_array[0x5];

typedef struct
{
    IMDQxTC_criteria_array M2;
    IMDQxTC_criteria_array M3;
    IMDQxTC_criteria_array E1;
    IMDQxTC_criteria_array E2;
    IMDQxTC_criteria_array E3;
} IMDQxTC_scenario_criteria_struct;

typedef struct
{
    IMDQxTC_scenario_criteria_struct machine_z_rods;
    IMDQxTC_scenario_criteria_struct machine_dampers;
    IMDQxTC_scenario_criteria_struct aomf_z_rods;
    IMDQxTC_scenario_criteria_struct aomf_dampers;
} IMDQxTC_step_test_criteria_struct;

typedef struct
{
    IMDQxTC_step_preconditions_stuct step_preconditions;
    IMDQxTC_step_sweep_struct step_sweep;
    IMDQxTC_step_test_criteria_struct step_test;
} IMDQxTC_dc_struct;

typedef struct
{
    IMDQxTC_dc_struct dc_struct;
} IMDQxTC_tc_struct;



#endif // _IMDQxTC_TC_H_
