/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : MB
* 模块名称 : MBXA
* 文件名称 : MBXA_tc.h
* 概要描述 :
*	MB组件MBXA数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _MBXA_TC_H_
#define _MBXA_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef char MBXA_identification_attr_struct_component[0x8];

typedef char MBXA_identification_attr_struct_id[0x28];

typedef struct
{
    MBXA_identification_attr_struct_component component;
    MBXA_identification_attr_struct_id id;
} MBXA_identification_attr_struct;

typedef enum
{
    MBXA_type_unknown = 0,
    MBXA_type_replenishment = 1,
    MBXA_type_calibration = 2,
} MBXA_type_enum;

typedef struct
{
    MBXA_type_enum action_type;
} MBXA_type_attr_struct;

typedef char MBXA_configuration_attr_struct_expression[0x50];

typedef struct
{
    MBXA_configuration_attr_struct_expression expression;
} MBXA_configuration_attr_struct;

typedef enum
{
    MBXA_unit_unknown = 0,
    MBXA_unit_minutes = 1,
    MBXA_unit_hours = 2,
    MBXA_unit_days = 3,
    MBXA_unit_weeks = 4,
    MBXA_unit_months = 5,
    MBXA_unit_lots = 6,
    MBXA_unit_wafers = 7,
    MBXA_unit_reticles = 8,
    MBXA_unit_images = 9,
    MBXA_unit_sundays = 10,
    MBXA_unit_mondays = 11,
    MBXA_unit_tuesdays = 12,
    MBXA_unit_wednesdays = 13,
    MBXA_unit_thursdays = 14,
    MBXA_unit_fridays = 15,
    MBXA_unit_saturdays = 16,
} MBXA_unit_enum;

typedef enum
{
    MBXA_period_all = 0,
    MBXA_period_idle = 1,
    MBXA_period_non_idle = 2,
} MBXA_period_type_enum;

typedef struct
{
    MBXA_unit_enum unit;
    int typical;
    int maximum;
} MBXA_period_struct;

typedef char MBXA_initiation_attr_struct_library[0x10];

typedef char MBXA_initiation_attr_struct_request_function[0x34];

typedef char MBXA_initiation_attr_struct_get_result_function[0x34];

typedef struct
{
    MBXA_initiation_attr_struct_library library;
    MBXA_initiation_attr_struct_request_function request_function;
    MBXA_initiation_attr_struct_get_result_function get_result_function;
} MBXA_initiation_attr_struct;

typedef char MBXA_get_period_struct_library[0x10];

typedef char MBXA_get_period_struct_get_period_function[0x34];

typedef struct
{
    MBXA_get_period_struct_library library;
    MBXA_get_period_struct_get_period_function get_period_function;
} MBXA_get_period_struct;

typedef char MBXA_get_duration_struct_library[0x10];

typedef char MBXA_get_duration_struct_get_duration_function[0x34];

typedef struct
{
    MBXA_get_duration_struct_library library;
    MBXA_get_duration_struct_get_duration_function get_duration_function;
} MBXA_get_duration_struct;

typedef struct
{
    bool enabled;
    bool use_persistent_data;
} MBXA_control_attr_struct;

typedef struct
{
    MBXA_period_type_enum period_type;
    MBXA_period_struct fixed_period;
    MBXA_get_period_struct config_fixed_period;
    MBXA_get_period_struct get_period;
} MBXA_period_attr_struct;

typedef char MBXA_dependencies_attr_struct_execute_before[0xFC];

typedef char MBXA_dependencies_attr_struct_execute_after[0xFC];

typedef char MBXA_dependencies_attr_struct_triggers[0xFC];

typedef char MBXA_dependencies_attr_struct_is_triggered_by[0xFC];

typedef struct
{
    MBXA_dependencies_attr_struct_execute_before execute_before;
    MBXA_dependencies_attr_struct_execute_after execute_after;
    MBXA_dependencies_attr_struct_triggers triggers;
    MBXA_dependencies_attr_struct_is_triggered_by is_triggered_by;
} MBXA_dependencies_attr_struct;

typedef struct
{
    MBXA_get_duration_struct get_duration;
    double duration;
} MBXA_resource_attr_struct;

typedef struct
{
    MBXA_identification_attr_struct identification;
    MBXA_configuration_attr_struct configuration;
    MBXA_dependencies_attr_struct dependencies;
    MBXA_control_attr_struct control;
    MBXA_type_attr_struct type;
    MBXA_period_attr_struct period;
    MBXA_initiation_attr_struct initiation;
    MBXA_resource_attr_struct resources;
} MBXA_maction_struct;



#endif // _MBXA_TC_H_
