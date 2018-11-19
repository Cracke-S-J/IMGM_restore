/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : ASXAxSBO
* 文件名称 : ASXAxSBO_tc.h
* 概要描述 :
*	AS组件ASXAxSBO数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ASXAxSBO_TC_H_
#define _ASXAxSBO_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <WPxCHUCK_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef double ASXAxSBO_sbo_period_struct_sbo[0x4][0x7];

typedef struct
{
    ASXAxSBO_sbo_period_struct_sbo sbo;
} ASXAxSBO_sbo_period_struct;

typedef ASXAxSBO_sbo_period_struct ASXAxSBO_sbo_direction_struct_segment[0x4];

typedef struct
{
    ASXAxSBO_sbo_direction_struct_segment segment;
} ASXAxSBO_sbo_direction_struct;

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef double ASXAxSBO_reference_time_t;

typedef ASXAxSBO_sbo_direction_struct ASXAxSBO_sbo_chuck_struct_direction[0x2];

typedef struct
{
    ASXAxSBO_reference_time_t reference_time;
    ASXAxSBO_sbo_chuck_struct_direction direction;
} ASXAxSBO_sbo_chuck_struct;

typedef ASXAxSBO_sbo_chuck_struct ASXAxSBO_sbo_struct_chuck[0x2];

typedef struct
{
    ASXAxSBO_sbo_struct_chuck chuck;
} ASXAxSBO_sbo_struct;

typedef struct
{
    bool sbo_drift_update_enabled;
} ASXAxSBO_sbo_ctl_struct;

typedef struct
{
    int number_of_scans;
} ASXAxSBO_sbo_ilc_settings_struct;

typedef struct
{
    ASXAxSBO_sbo_ilc_settings_struct settings;
} ASXAxSBO_sbo_ilc_struct;

typedef double ASXAxSBO_sbo_spec_period_struct_sbo[0x4][0x7];

typedef struct
{
    ASXAxSBO_sbo_spec_period_struct_sbo sbo;
} ASXAxSBO_sbo_spec_period_struct;

typedef ASXAxSBO_sbo_spec_period_struct ASXAxSBO_sbo_spec_dir_struct_segment[0x2];

typedef struct
{
    ASXAxSBO_sbo_spec_dir_struct_segment segment;
} ASXAxSBO_sbo_spec_dir_struct;

typedef ASXAxSBO_sbo_spec_dir_struct ASXAxSBO_sbo_spec_struct_direction[0x2];

typedef struct
{
    ASXAxSBO_sbo_spec_struct_direction direction;
} ASXAxSBO_sbo_spec_struct;

typedef struct
{
    int number_of_scans;
    int allowed_latency;
} ASXAxSBO_sbo_olc_settings_struct;

typedef struct
{
    bool upgraded;
    ASXAxSBO_sbo_olc_settings_struct settings;
    ASXAxSBO_sbo_spec_struct specs_3sd;
} ASXAxSBO_sbo_olc_struct;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int ASXAxSBO_get_sbo(const WPxCHUCK_chuck_id_enum *chuck_id,
	ASXAxSBO_sbo_chuck_struct *sbo);
int ASXAxSBO_set_sbo(const WPxCHUCK_chuck_id_enum *chuck_id,
	const ASXAxSBO_sbo_chuck_struct *sbo);
int ASXAxSBO_get_sbo_drift(const WPxCHUCK_chuck_id_enum *chuck_id,
	ASXAxSBO_sbo_chuck_struct *sbo_drift);
int ASXAxSBO_clear_sbo_drift(const WPxCHUCK_chuck_id_enum *chuck_id);
int ASXAxSBO_get_sbo_drift_update_enable_flag(bool *enabled);
int ASXAxSBO_get_sbo_online_calibration_params(ASXAxSBO_sbo_olc_struct *params);



#endif // _ASXAxSBO_TC_H_
