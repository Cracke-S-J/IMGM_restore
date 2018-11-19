/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMENXTxWSxML
* 文件名称 : IMENXTxWSxML_tc.h
* 概要描述 :
*	IM组件IMENXTxWSxML数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMENXTxWSxML_TC_H_
#define _IMENXTxWSxML_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <base.h> 
#include <MIENXTxWSxMLd_tc.h> 
#include <MIENXTxWS_tc.h> 
#include <WPxCHUCK_tc.h> 



/*-------------------------------- Defines -------------------------------*/
#define IMENXTxWSxML_TIMEOUT 	 0x41 
#define IMENXTxWSxML_LONG_TIMEOUT 	 0x7D 
#define IMENXTxWSxML_EXTRA_LONG_TIMEOUT 	 0x12C 



/*-------------------------- Enums and Structs ---------------------------*/



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int IMENXTxWSxML_zero_sensor_count(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWS_sensor_enum *sensor_id);
int IMENXTxWSxML_switch_pe_model(const WPxCHUCK_chuck_id_enum *chuck_id,
	const bool *pe_on,
	const MIENXTxWSxMLd_pe_model_enum *pe_model_id);
int IMENXTxWSxML_get_averaged_h(const WPxCHUCK_chuck_id_enum *chuck_id,
	const int *nbr_of_samples,
	MIENXTxWSxMLd_avg_h_data *avg_h);
int IMENXTxWSxML_get_averaged_h2q_h(const WPxCHUCK_chuck_id_enum *chuck_id,
	const int *nbr_of_samples,
	MIENXTxWSxMLd_avg_h_data *avg_h);
int IMENXTxWSxML_get_averaged_h2q_h_pe(const WPxCHUCK_chuck_id_enum *chuck_id,
	const int *nbr_of_samples,
	MIENXTxWSxMLd_avg_h_pe_data *avg_h_pe);
int IMENXTxWSxML_get_averaged_h_for_takeover(const WPxCHUCK_chuck_id_enum *chuck_id,
	const int *nbr_of_samples,
	MIENXTxWSxMLd_avg_h_data *avg_h);
int IMENXTxWSxML_switch_reference_axis(const WPxCHUCK_chuck_func_enum *chuck_function,
	const bool *enabled);
int IMENXTxWSxML_get_AB2h_params(const WPxCHUCK_chuck_id_enum *chuck_id,
	MIENXTxWSxMLd_AB2h_mc_struct *AB2h_params);
int IMENXTxWSxML_set_AB2h_params(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWSxMLd_AB2h_mc_struct *AB2h_params);
int IMENXTxWSxML_get_plate_map_params(const WPxCHUCK_chuck_id_enum *chuck_id,
	MIENXTxWSxMLd_plate_map_mc_struct *plate_map_params);
int IMENXTxWSxML_set_plate_map_params(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWSxMLd_plate_map_mc_struct *plate_map_params);
int IMENXTxWSxML_get_passage_map_params(const WPxCHUCK_chuck_id_enum *chuck_id,
	MIENXTxWSxMLd_passage_map_mc_struct *passage_map_params);
int IMENXTxWSxML_set_passage_map_params(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWSxMLd_passage_map_mc_struct *passage_map_params);
int IMENXTxWSxML_get_default_h2q_params(const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *side,
	MIENXTxWSxMLd_h2q_mc_struct *h2q_params);
int IMENXTxWSxML_get_h2q_params(const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *chuck_func,
	MIENXTxWSxMLd_h2q_mc_struct *h2q_params);
int IMENXTxWSxML_set_h2q_params(const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *chuck_func,
	const MIENXTxWSxMLd_h2q_mc_struct *h2q_params);
int IMENXTxWSxML_get_grid_map_params(const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *chuck_func,
	MIENXTxWSxMLd_grid_map_mc_struct *grid_map_params);
int IMENXTxWSxML_set_grid_map_params(const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *chuck_func,
	const MIENXTxWSxMLd_grid_map_mc_struct *grid_map_params);
int IMENXTxWSxML_get_takeover_area_array(const WPxCHUCK_chuck_id_enum *chuck_id,
	MIENXTxWSxMLd_to_area_array *to_areas);
int IMENXTxWSxML_set_takeover_area_array(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWSxMLd_to_area_array *to_areas);
int IMENXTxWSxML_get_pe_areas(const WPxCHUCK_chuck_id_enum *chuck_id,
	MIENXTxWSxMLd_pe_area_array *pe_areas);
int IMENXTxWSxML_get_fading_params(const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *chuck_func,
	MIENXTxWSxMLd_area_fading_params_struct *fading_params);
int IMENXTxWSxML_get_ef_params(const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *chuck_func,
	MIENXTxWSxMLd_EF_data_struct *EF_data_params);
int IMENXTxWSxML_get_averaged_pe(const WPxCHUCK_chuck_id_enum *chuck_id,
	const int *nbr_of_samples,
	horvervect *averaged_pe);
int IMENXTxWSxML_measure_traversal_takeover_drift(const WPxCHUCK_chuck_id_enum *chuck_id,
	const int *sensor_id,
	const MIENXTxWSxMLd_takeover_type_enum *takeover_type,
	MIENXTxWSxMLd_encoder_drift_struct *drift);
int IMENXTxWSxML_update_traversal_takeover_drift(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWSxMLd_traversal_drift_struct *drift);
int IMENXTxWSxML_save_traversal_takeover_drift(void);
int IMENXTxWSxML_zero_traversal_takeover_drift(const WPxCHUCK_chuck_id_enum *chuck_id);
int IMENXTxWSxML_get_inconsistency_params(const WPxCHUCK_chuck_id_enum *chuck_id,
	MIENXTxWSxMLd_inconsistency_parameters *inconsistency_params);
int IMENXTxWSxML_get_sensor_data_delay_params(const WPxCHUCK_chuck_id_enum *chuck_id,
	MIENXTxWSxMLd_sensor_data_delay_struct *sensor_data_delay_params);
int IMENXTxWSxML_set_sensor_data_delay_params(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWSxMLd_sensor_data_delay_struct *sensor_data_delay_params);
int IMENXTxWSxML_get_acceleration_feedforward_params(const WPxCHUCK_chuck_id_enum *chuck_id,
	MIENXTxWSxMLd_acceleration_feedforward_struct *acceleration_feedforward_params);
int IMENXTxWSxML_set_acceleration_feedforward_params(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWSxMLd_acceleration_feedforward_struct *acceleration_feedforward_params);
int IMENXTxWSxML_get_compliance_compensation(const WPxCHUCK_chuck_id_enum *chuck_id,
	MIENXTxWSxMLd_context_compliance_comp_struct *compliance_compensation);
int IMENXTxWSxML_set_compliance_compensation(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWSxMLd_context_compliance_comp_struct *compliance_compensation);
int IMENXTxWSxML_get_motion_dependency_compensation(const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *chuck_func,
	MIENXTxWSxMLd_context_motion_dep_struct *motion_dependency_compensation);
int IMENXTxWSxML_set_motion_dependency_compensation(const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *chuck_func,
	const MIENXTxWSxMLd_context_motion_dep_struct *motion_dependency_compensation);
int IMENXTxWSxML_get_torsion_filter_parameters(const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *chuck_func,
	MIENXTxWSxMLd_torsion_filters_struct *torsion_filter_params);
int IMENXTxWSxML_set_torsion_filter_parameters(const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *chuck_func,
	const MIENXTxWSxMLd_torsion_filters_struct *torsion_filter_params);
int IMENXTxWSxML_get_default_torsion_filter_parameters(const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *chuck_func,
	MIENXTxWSxMLd_torsion_filters_struct *torsion_filter_params);
int IMENXTxWSxML_get_defect_compensation_array(const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *chuck_func,
	MIENXTxWSxMLd_defect_array *defect_array);
int IMENXTxWSxML_set_defect_compensation_array(const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *chuck_func,
	const MIENXTxWSxMLd_defect_array *defect_array);
int IMENXTxWSxML_validate_defect_compensation_array(const MIENXTxWSxMLd_defect_array *defect_array,
	bool *valid);
int IMENXTxWSxML_get_hfmap_enc_pos(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWSxMLd_sensor_enum *sensor,
	horvervect *position);
int IMENXTxWSxML_set_hfmap_enc_pos(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWSxMLd_sensor_enum *sensor,
	const horvervect *position);
int IMENXTxWSxML_get_defect_spot_pos(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWSxMLd_sensor_enum *sensor,
	const MIENXTxWSxMLd_spot_enum *spot,
	xyvect *position);
int IMENXTxWSxML_set_defect_spot_pos(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWSxMLd_sensor_enum *sensor,
	const MIENXTxWSxMLd_spot_enum *spot,
	const xyvect *position);
int IMENXTxWSxML_get_defect_spot_tilt(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWSxMLd_sensor_enum *sensor,
	const MIENXTxWSxMLd_spot_enum *spot,
	xyvect *tilt);
int IMENXTxWSxML_set_defect_spot_tilt(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWSxMLd_sensor_enum *sensor,
	const MIENXTxWSxMLd_spot_enum *spot,
	const xyvect *tilt);
int IMENXTxWSxML_get_defect_model_params(const WPxCHUCK_chuck_id_enum *chuck_id,
	MIENXTxWSxMLd_defect_model_params_struct *params);
int IMENXTxWSxML_set_defect_model_params(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWSxMLd_defect_model_params_struct *params);
int IMENXTxWSxML_get_ra_notch_filter_parameters(const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *chuck_func,
	MIENXTxWSxMLd_ra_notch_filter_struct *ra_notch_filter_params);
int IMENXTxWSxML_set_ra_notch_filter_parameters(const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *chuck_func,
	const MIENXTxWSxMLd_ra_notch_filter_struct *ra_notch_filter_params);
int IMENXTxWSxML_get_global_grid_frame_parameters(const WPxCHUCK_chuck_id_enum *chuck_id,
	MIENXTxWSxMLd_global_grid_frame_struct *global_grid_frame_params);
int IMENXTxWSxML_set_global_grid_frame_parameters(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWSxMLd_global_grid_frame_struct *global_grid_frame_params);



#endif // _IMENXTxWSxML_TC_H_
