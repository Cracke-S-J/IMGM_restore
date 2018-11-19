/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : ASXTxMC
* 文件名称 : ASXTxMC_tc.h
* 概要描述 :
*	AS组件ASXTxMC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ASXTxMC_TC_H_
#define _ASXTxMC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <ASXAxMCxPWQ_tc.h> 
#include <ASXAxMC_tc.h> 
#include <WPxCHUCK_tc.h> 
#include <MDXA_tc.h> 
#include <base.h> 



/*-------------------------------- Defines -------------------------------*/
#define ASXTxMC_ID_MAX 	 0x100 



/*-------------------------- Enums and Structs ---------------------------*/

typedef char ASXTxMC__mc_save_id[0x100];



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int ASXTxMC_mc_save(const ASXTxMC__mc_save_id *id);
int ASXTxMC_mc_set_sensor_position(const horvervect *sensor_position);
int ASXTxMC_mc_set_periodic_mto(const MDXA_mark_type_string *mark_name,
	const MDXA_alignment_step_enum *alignment_step,
	const WPxCHUCK_chuck_id_enum *chuck_id,
	const ASXAxMC_mto_chuck_struct *mto);
int ASXTxMC_mc_set_template_mtc(const MDXA_mark_type_string *mark_name,
	const MDXA_alignment_step_enum *alignment_step,
	const WPxCHUCK_chuck_id_enum *chuck_id,
	const ASXAxMC_mtc_chuck_struct *mtc);
int ASXTxMC_mc_set_periodic_wq_nf(const ASXAxMCxPWQ_periodic_wq_struct *pwq);
int ASXTxMC_mc_set_periodic_MTWQ(const MDXA_mark_type_string *mark_name,
	const MDXA_alignment_step_enum *alignment_step,
	const ASXAxMC_mark_mtwq_struct *mtwq);
int ASXTxMC_mc_set_zigzag_wq_nf(const ASXAxMC_zigzag_wq_struct *zwq);
int ASXTxMC_mc_set_template_sbc(const WPxCHUCK_chuck_id_enum *chuck_id,
	const ASXAxMC_sbc_chuck_struct *sbc);
int ASXTxMC_mc_set_scan_data(const ASXAxMC_scan_data_struct *scan_data);
int ASXTxMC_mc_set_fp_scan_data(const ASXAxMC_scan_data_struct *scan_data);
int ASXTxMC_mc_set_template_scan_data(const ASXAxMC_scan_data_struct *scan_data);
int ASXTxMC_mc_set_zigzag_scan_data(const ASXAxMC_scan_data_struct *scan_data);
int ASXTxMC_mc_set_multiper_scan_data(const ASXAxMC_scan_data_struct *scan_data);
int ASXTxMC_mc_set_oblique_scan_data(const ASXAxMC_scan_data_struct *scan_data);
int ASXTxMC_mc_set_dual_periodic_scan_data(const ASXAxMC_dual_periodic_scan_data_struct *scan_data_p);
int ASXTxMC_mc_create_marktype_element(const MDXA_mark_type_string *mark_name,
	const MDXA_alignment_step_enum *alignment_step,
	const MDXA_scan_type_enum *scan_type);
int ASXTxMC_mc_delete_marktype_element(const MDXA_mark_type_string *mark_name,
	const MDXA_alignment_step_enum *alignment_step,
	const MDXA_scan_type_enum *scan_type);



#endif // _ASXTxMC_TC_H_
