/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : GL
* 模块名称 : GLXAxLOG
* 文件名称 : GLXAxLOG_tc.h
* 概要描述 :
*	GL组件GLXAxLOG数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _GLXAxLOG_TC_H_
#define _GLXAxLOG_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <GLXA_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    int len;
    int max_len;
    char* array;
} GLXAxLOG_var_string;

typedef struct
{
    int len;
    int max_len;
    char* array;
} GLXAxLOG_DD_object;

typedef int GLXAxLOG_context_list_list[0x5];

typedef struct
{
    int len;
    GLXAxLOG_context_list_list list;
} GLXAxLOG_context_list;

typedef struct
{
    int len;
    int max_len;
    int* array;
} GLXAxLOG_var_context_list;

typedef struct
{
    int release;
    int version;
    int level;
    char phase;
} GLXAxLOG_sw_info;

typedef char GLXAxLOG_op_mach_rel_data_username[0x10];

typedef struct
{
    GLXAxLOG_op_mach_rel_data_username username;
    int machine_id;
    GLXAxLOG_sw_info sw_info;
} GLXAxLOG_op_mach_rel_data;

typedef enum
{
    GLXAxLOG_FINISH_MODE_DEFAULT = 0,
    GLXAxLOG_FINISH_MODE_PENDING = 1,
} GLXAxLOG_finish_mode;

typedef char GLXAxLOG__determine_parent_context_MDL_name[0x40];

typedef char GLXAxLOG__start_log_MDL_name[0x40];

typedef char GLXAxLOG__finish_log_MDL_name[0x40];

typedef char GLXAxLOG__close_log_MDL_name[0x40];



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int GLXAxLOG_determine_parent_context(const GLXAxLOG__determine_parent_context_MDL_name *MDL_name,
	const int *wafer_nr,
	GLXAxLOG_context_list *context);
int GLXAxLOG_start_log(const GLXAxLOG__start_log_MDL_name *MDL_name);
int GLXAxLOG_finish_log(const GLXAxLOG__finish_log_MDL_name *MDL_name,
	const GLXAxLOG_finish_mode *finish_mode);
int GLXAxLOG_close_log(const GLXAxLOG__close_log_MDL_name *MDL_name);
int GLXAxLOG_copy_log_at_finish(const GLXAxLOG_context_list *context,
	const GLXA_str *destination_path);
int GLXAxLOG_postprocess_log_at_finish(const GLXAxLOG_context_list *context,
	const GLXA_str *postprocess_cmd);
int GLXAxLOG_get_new_seq_nr(const GLXAxLOG_context_list *context,
	int *seq_nr);
void GLXAxLOG_raw_log_object(const GLXAxLOG_context_list *context,
	const int *tag,
	const char *glxa_log_format,
	const GLXAxLOG_var_string *ddf_name,
	const GLXAxLOG_DD_object *dd_object);
int GLXAxLOG_raw_log_object_sync(const GLXAxLOG_context_list *context,
	const int *tag,
	const char *glxa_log_format,
	const GLXAxLOG_var_string *ddf_name,
	const GLXAxLOG_DD_object *dd_object);
void GLXAxLOG_raw_log_comment(const GLXAxLOG_context_list *context,
	const int *tag,
	const GLXAxLOG_var_string *comment);
void GLXAxLOG_raw_log_marker(const GLXAxLOG_context_list *context,
	const int *tag,
	const timestamp *time,
	const GLXAxLOG_var_string *line2,
	const GLXAxLOG_var_string *line3);



#endif // _GLXAxLOG_TC_H_
