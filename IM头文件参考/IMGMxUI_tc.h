/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMGMxUI
* 文件名称 : IMGMxUI_tc.h
* 概要描述 :
*	IM组件IMGMxUI数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMGMxUI_TC_H_
#define _IMGMxUI_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <IMGM_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    IMGMxUI_WIDGETS_ALL = 0,
    IMGMxUI_WIDGETS_ALL_EXCEPT_USE_WAFERS = 1,
} IMGMxUI_widgets_enable_enum;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int IMGMxUI_load_input(const IMGM_input_struct *inp);
int IMGMxUI_save_input(IMGM_input_struct *inp);
int IMGMxUI_enable_overrule(const IMGMxUI_widgets_enable_enum *mode);
int IMGMxUI_disable_overrule(void);
void IMGMxUI_progress_start(const IMGM_prog_config_list *config,
	const IMGM_prog_phase_enum *phase);
void IMGMxUI_progress_result_update(const bool *status,
	const IMGM_prog_phase_enum *phase);
void IMGMxUI_progress_event_update(const IMGM_prog_task_event *event,
	const IMGM_prog_phase_enum *phase);
void IMGMxUI_progress_finish(const IMGM_result_struct *results);
void IMGMxUI_drivers_initialized(void);



#endif // _IMGMxUI_TC_H_
