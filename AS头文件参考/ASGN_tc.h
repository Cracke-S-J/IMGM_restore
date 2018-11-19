/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : ASGN
* 文件名称 : ASGN_tc.h
* 概要描述 :
*	AS组件ASGN数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ASGN_TC_H_
#define _ASGN_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <MDXA_tc.h> 
#include <MDXAxAS_tc.h> 
#include <ASXAxMDL_tc.h> 
#include <SNXA_tc.h> 
#include <WPxSCANxDEF_tc.h> 
#include <SFXA_tc.h> 
#include <ASXAxMC_tc.h> 
#include <WPxCHUCK_tc.h> 
#include <ASDT_tc.h> 
#include <ASXA_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int ASGN_determine_SbO_order(const double *reference_base_period,
	const double *target_period,
	int *sbo_order_p);
int ASGN_set_segment_base_data(const ASXA_DIR_ENUM *scan_direction,
	const double *mc_scan_speed,
	const ASDT_PL2PP_physical_scan_data *scan_data_p,
	ASDT_physical_segment_info_struct *segment_base);
int ASGN_determine_start_and_end_positions(const double *z_range,
	const ASXA_align_scan_base_struct *align_base_p,
	const ASDT_physical_segment_info_struct *segment_base,
	ASDT_scan_spec_struct *scan_spec_p);
int ASGN_calculate_required_scan_time(const double *scan_speed,
	const double *scan_length,
	ASDT_scan_spec_struct *scan_spec_p,
	ASDT_physical_data_struct *physical_data_p);
int ASGN_set_and_pack_subsystem_parameter(const WPxCHUCK_chuck_id_enum *chuck_id,
	const ASXAxMC_scan_data_struct *scan_data_p,
	const ASDT_physical_data_struct *physical_base_data_p,
	const SFXA_scan_and_fit_input_struct *SF_params,
	const WPxSCANxDEF_6dof_scan_params_struct *WS_params,
	SNXA_multiple_actions_varray *envelope_p);
int ASGN_round(const double *x);
int ASGN_get_lateral_scan_offset(const int *lateral_scan_idx,
	const double *lateral_distance,
	const int *nr_of_lateral_scans,
	double *lateral_scan_offset_p);
int ASGN_calc_actual_scan_time_and_speed(const double *scan_length,
	const double *requested_scan_speed,
	double *actual_scan_time_p,
	double *actual_scan_speed_p);
int ASGN_convert_ws2as_chuck_id(const WPxCHUCK_chuck_id_enum *ws_chuck_id,
	ASXA_CHUCK_ENUM *as_chuck_id);
int ASGN_calculate_oversample_factor(const double *scan_speed,
	int *oversample_factor_p);
int ASGN_log_scan_base_struct(const ASXA_align_scan_base_struct *scan_base_struct_p,
	const int *logical_action_id,
	const ASXAxMDL_scan_type_enum *scan_type);
int ASGN_determine_linear_ws_parameters(const ASDT_scan_spec_struct *scan_base_spec_ptr,
	const bool *settle_ws_enabled,
	WPxSCANxDEF_6dof_scan_params_struct *WS_params_ptr);
int ASGN_calculate_capture_range(const MDXAxAS_dual_periodic_segment_struct *mark_segment_p,
	const MDXA_geometry_struct *mark_geometry_p,
	const double *edge_clearance_distance,
	double *capture_range_p);
int ASGN_calculate_number_of_samples(const double *scan_time,
	const int *oversample_factor,
	int *nr_of_samples_p);
int ASGN_get_fit_common_data(const SFXA_scan_and_fit_input_struct *SF_params_p,
	SFXA_fit_common_input_struct *fit_common_p);
int ASGN_calculate_AGC_settle_time(const double *scan_speed,
	const double *base_period,
	const ASXAxMC_AGC_settle_time_struct *AGC_settle_time_p,
	SFXA_scan_and_fit_input_struct *SF_params_p);



#endif // _ASGN_TC_H_
