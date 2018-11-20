/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 产品号 : 
* 所属组件 : DA
* 模块名称 : DAXA
* 文件名称 : DAXA.h
* 概要描述 :
*	DA组件DAXA对外接口声明
* 历史记录 :
* 版本    日期    作者    内容
* 1.0
*****************************************************************************/
#ifndef _DAXA_H_ 
#define _DAXA_H_

#include <base.h>



/*-------------------- 宏定义 --------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef char DAXA_CONFIG_STRUCT_data_category_abbrev[0x3];

typedef char DAXA_CONFIG_STRUCT_data_category_description[0x32];

typedef char DAXA_CONFIG_STRUCT_data_category_naming_conv[0x32];

typedef char DAXA_CONFIG_STRUCT_alternative_body_instance_name[0x14];

typedef struct
{
	DAXA_CONFIG_STRUCT_data_category_abbrev data_category_abbrev;
	DAXA_CONFIG_STRUCT_data_category_description data_category_description;
	DAXA_CONFIG_STRUCT_data_category_naming_conv data_category_naming_conv;
	bool use_machine_nr;
	bool use_DA_header_mechanism;
	bool use_DA_integrity_mechanism;
	bool use_DA_consistency_mechanism;
	DAXA_CONFIG_STRUCT_alternative_body_instance_name alternative_body_instance_name;
} DAXA_CONFIG_STRUCT;

typedef enum
{
	DAXA_KIND_INT = 0,
	DAXA_KIND_FLOAT = 1,
	DAXA_KIND_DOUBLE = 2,
	DAXA_KIND_VAR_STRING = 3,
	DAXA_KIND_TIMESTAMP = 4,
	DAXA_KIND_INSTANCEID = 5,
} DAXA_def_value_kind_t;

typedef struct
{
	DAXA_def_value_kind_t element;
	int filler0;
	union
	{
		int int_value;
		double double_value;
		varstring var_string_value;
		timestamp timestamp_value;
		//instanceid instanceid_value;
		int instanceid_value;
	} spec;
} DAXA_def_value_t;

typedef struct
{
	varstring item_name;
	DAXA_def_value_t default_value;
	DAXA_def_value_t item_value;
	timestamp time_stamp;
	varstring id;
	varstring reason;
} DAXA_nonconformance_t;

typedef struct
{
	int len;
	int max_len;
	DAXA_nonconformance_t* array;
} DAXA_nonconformance_varray_t;

typedef char DAXA_FILE_HEAD_modify_str[0x3C];

typedef char DAXA_FILE_HEAD_data_set_abbr[0xF];

typedef struct
{
	int machine_nr;
	int release_nr;
	int version_nr;
	int level_nr;
	DAXA_FILE_HEAD_modify_str modify_str;
	DAXA_FILE_HEAD_data_set_abbr data_set_abbr;
	bool header_initialized;
	DAXA_nonconformance_varray_t nonconformances;
} DAXA_FILE_HEAD;


/*-------------------- 对外全局变量声明 --------------------*/








/*----------------------- 对外接口声明 -----------------------*/








#endif // _DAXA_H_

