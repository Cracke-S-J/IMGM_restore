/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMGOxUTIL
* 文件名称 : IMGOxUTIL_tc.h
* 概要描述 :
*	IM组件IMGOxUTIL数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMGOxUTIL_TC_H_
#define _IMGOxUTIL_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <DDXAxVARARRAY_tc.h> 
#include <IMGO_DC_tc.h> 
#include <MIENXTxWSxMLd_tc.h> 
#include <WPxPOSxDEF_tc.h> 
#include <WPxLAxZERO_tc.h> 
#include <WPxSCANxDEF_tc.h> 
#include <base.h> 
#include <WPxSCANxPF_tc.h> 
#include <IMGO_tc.h> 
#include <WPxCHUCK_tc.h> 
#include <IMGOxDATA_tc.h> 
#include <MILAXTxWSxENC_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef double IMGOxUTIL_interpol_elem_weight[0x4];

typedef struct
{
    int sample_nr;
    IMGOxUTIL_interpol_elem_weight weight;
} IMGOxUTIL_interpol_elem;

typedef struct
{
    int len;
    int max_len;
    IMGOxUTIL_interpol_elem* array;
} IMGOxUTIL_interpol_vararray;

typedef struct
{
    bool valid;
    int line_counter;
    int repetition_counter;
    bool up;
    MILAXTxWSxENC_diag_scan_reduced_results_struct result_data;
} IMGOxUTIL_line_data;

typedef IMGOxUTIL_line_data IMGOxUTIL_line_cache[0xA];

typedef struct
{
    int sensor_id;
    int defect_num;
    bool accurate_area;
    double rank;
    bool apply;
} IMGOxUTIL_defect_internal_elem;

typedef struct
{
    bool apply;
    double max_pos_error;
} IMGOxUTIL_defect_external_elem;

typedef struct
{
    int len;
    int max_len;
    IMGOxUTIL_defect_internal_elem* array;
} IMGOxUTIL_defect_internal_vararray;

typedef struct
{
    int len;
    int max_len;
    IMGOxUTIL_defect_external_elem* array;
} IMGOxUTIL_defect_external_vararray;

typedef char IMGOxUTIL__data_init_calibration_log_name[0x100];

typedef xyvect IMGOxUTIL__create_hss_shift[0x2];

typedef xyvect IMGOxUTIL__sum_hss_shift[0x4];

typedef xyvect IMGOxUTIL__get_spot_maps_spot_shifts[0x2];

typedef DDXAxVARARRAY_double IMGOxUTIL__get_spot_maps_spotmaps[0x2];

typedef xyvect IMGOxUTIL__create_mc_maps_spot_shifts_a[0x2];

typedef xyvect IMGOxUTIL__create_mc_maps_spot_shifts_b[0x2];

typedef int IMGOxUTIL__load_existing_defects_nr_defects[0x4];

typedef DDXAxVARARRAY_double IMGOxUTIL__get_existing_defect_spotmaps[0x8];

typedef xyvect IMGOxUTIL__validate_mc_maps_spot_shift[0x4][0x4];

typedef xyvect IMGOxUTIL__validate_mc_maps_gp_shift[0x4];

typedef IMGOxUTIL_defect_external_vararray IMGOxUTIL__validate_mc_maps_defect_valid[0x4];

typedef IMGOxUTIL_defect_external_vararray IMGOxUTIL__remove_mc_maps_keep_defect[0x4];

typedef xyvect IMGOxUTIL__create_htts_spot_shifts[0x2];

typedef char IMGOxUTIL__save_image_desc[0x100];

typedef char IMGOxUTIL__save_image_filename[0x100];

typedef DDXAxVARARRAY_double IMGOxUTIL__add_mc_defect_spotmaps[0x8];

typedef char IMGOxUTIL__fit_pe_to_q_left_file[0x100];

typedef char IMGOxUTIL__fit_pe_to_q_right_file[0x100];

typedef double IMGOxUTIL__fit_pe_to_q_xtx[0x7][0x7];

typedef double IMGOxUTIL__fit_pe_to_q_xty[0x7][0x6];

typedef xyvect IMGOxUTIL__get_max_pos_error_spot_shift[0x4];



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int IMGOxUTIL_init_calibration(const IMGOxDATA_calibration_settings_t *settings);
int IMGOxUTIL_init_area(const WPxCHUCK_chuck_id_enum *chuck,
	const WPxCHUCK_chuck_func_enum *func,
	const IMGO_direction_enum *direction,
	const IMGOxDATA_pe_to_q_conversion_t *conversion);
int IMGOxUTIL_receive_line(const WPxCHUCK_chuck_id_enum *chuck,
	const int *request_id);
int IMGOxUTIL_store_line(const WPxCHUCK_chuck_id_enum *chuck,
	const int *line_counter,
	const int *repetition_counter,
	const bool *up);
int IMGOxUTIL_exit_calibration(void);
int IMGOxUTIL_do_exchange(void);
int IMGOxUTIL_get_6dof_scan_performance_properties(const int *spfid,
	WPxSCANxPF_6dof_scan_performance_property_struct *spp);
int IMGOxUTIL_request_set_position(const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *chuck_func,
	const horvervect *position,
	int *logical_action_id_ptr);
int IMGOxUTIL_get_result_set_position(const int *logical_action_id);
int IMGOxUTIL_request_scan_move_adv(const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *chuck_func,
	const WPxSCANxDEF_request_scan_move_adv_struct *scan_move_params,
	int *logical_action_id_ptr);
int IMGOxUTIL_get_result_scan_move_adv(const int *logical_action_id);
int IMGOxUTIL_request_zero_status(const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *chuck_func,
	int *logical_action_id_ptr);
int IMGOxUTIL_get_result_zero_status(const int *logical_action_id,
	WPxLAxZERO_zero_status_enum *status_ptr);
int IMGOxUTIL_request_zero_chuck(const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *chuck_func,
	int *logical_action_id_ptr);
int IMGOxUTIL_get_result_zero_chuck(const int *logical_action_id);
int IMGOxUTIL_request_set_position_adv(const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *chuck_func,
	const horvervect *position,
	const WPxPOSxDEF_6DOF_profile_param_limits_struct *profile_param_limits,
	const bool *use_default_param_limits,
	int *logical_action_id_ptr);
int IMGOxUTIL_get_result_set_position_adv(const int *logical_action_id);
int IMGOxUTIL_data_init_calibration(const IMGOxUTIL__data_init_calibration_log_name *log_name,
	IMGOxDATA_calibration_settings_t *settings);
int IMGOxUTIL_data_init_area(const WPxCHUCK_chuck_id_enum *chuck,
	const WPxCHUCK_chuck_func_enum *func,
	const IMGO_direction_enum *direction,
	IMGOxDATA_area_settings_t *area_settings);
int IMGOxUTIL_data_get_line_results(const WPxCHUCK_chuck_id_enum *chuck,
	const int *encoder_id,
	const int *channel_id,
	const int *line_counter,
	IMGOxDATA_line_results_t *line_results);
int IMGOxUTIL_data_get_line_context(const WPxCHUCK_chuck_id_enum *chuck,
	const int *encoder_id,
	const int *line_counter,
	IMGOxDATA_line_results_InstId_t *line_context);
int IMGOxUTIL_data_get_multiple_line_results(const WPxCHUCK_chuck_id_enum *chuck,
	const int *encoder_id,
	const int *first_line_counter,
	const int *last_line_counter,
	IMGOxDATA_grid_sample_matrix *line_matrix_a,
	IMGOxDATA_grid_sample_matrix *line_matrix_b,
	double *line_quality_a_sum_sqrt,
	double *line_quality_b_sum_sqrt);
int IMGOxUTIL_data_get_multiple_line_contexts(const WPxCHUCK_chuck_id_enum *chuck,
	const int *encoder_id,
	const int *first_line_counter,
	const int *last_line_counter,
	IMGOxDATA_line_results_InstId_array *line_contexts);
int IMGOxUTIL_pe2gp(const MIENXTxWSxMLd_hfmap_params_struct *params,
	const MIENXTxWSxMLd_ref_model_params_struct *model,
	const MIENXTxWSxMLd_EF_data_struct *ef_model,
	const MIENXTxWSxMLd_pe_area_array *pe_area_array_ptr,
	const MIENXTxWSxMLd_sensor_enum *sensor,
	const horvervect *pe_pos,
	horvervect *gp_pos,
	bool *valid);
int IMGOxUTIL_gp2pe(const MIENXTxWSxMLd_hfmap_params_struct *params,
	const MIENXTxWSxMLd_ref_model_params_struct *model,
	const MIENXTxWSxMLd_EF_data_struct *ef_model,
	const MIENXTxWSxMLd_pe_area_array *pe_area_array_ptr,
	const MIENXTxWSxMLd_sensor_enum *sensor,
	const horvervect *gp_pos,
	horvervect *pe_pos,
	bool *valid);
int IMGOxUTIL_pe2jh(const MIENXTxWSxMLd_hfmap_params_struct *params,
	const MIENXTxWSxMLd_ref_model_params_struct *model,
	const MIENXTxWSxMLd_EF_data_struct *ef_model,
	const MIENXTxWSxMLd_pe_area_array *pe_area_array_ptr,
	const MIENXTxWSxMLd_sensor_enum *sensor,
	const horvervect *pe_pos,
	horvervect *jh_pos,
	bool *valid);
int IMGOxUTIL_jh2pe(const MIENXTxWSxMLd_hfmap_params_struct *params,
	const MIENXTxWSxMLd_ref_model_params_struct *model,
	const MIENXTxWSxMLd_EF_data_struct *ef_model,
	const MIENXTxWSxMLd_pe_area_array *pe_area_array_ptr,
	const MIENXTxWSxMLd_sensor_enum *sensor,
	const horvervect *gp_pos,
	horvervect *jh_pos,
	bool *valid);
int IMGOxUTIL_create_hss(const WPxCHUCK_chuck_id_enum *chuck_id,
	const bool *from_h,
	const IMGOxUTIL__create_hss_shift *shift,
	const double *damp_factor,
	const IMGO_DC_area *cutoff_area,
	const bool *do_a,
	const bool *do_rx,
	int *hss_nrow,
	int *hss_ncol,
	xyvect *hss_shift);
int IMGOxUTIL_get_hss(const WPxCHUCK_chuck_id_enum *chuck_id,
	const bool *do_a,
	const bool *do_rx,
	int *hss_nrow,
	int *hss_ncol,
	DDXAxVARARRAY_double *hss);
int IMGOxUTIL_set_hss(const WPxCHUCK_chuck_id_enum *chuck_id,
	const bool *do_a,
	const bool *do_rx,
	const int *hss_nrow,
	const int *hss_ncol,
	const DDXAxVARARRAY_double *hss);
int IMGOxUTIL_sum_hss(const DDXAxVARARRAY_double *hss,
	const int *nrow,
	const int *ncol,
	const IMGOxUTIL__sum_hss_shift *shift,
	DDXAxVARARRAY_double *hss_sum);
int IMGOxUTIL_get_spot_maps(const WPxCHUCK_chuck_id_enum *chuck_id,
	const bool *do_a,
	const bool *do_rx,
	const int *x_start,
	const int *y_start,
	const int *x_end,
	const int *y_end,
	const int *magnify,
	const xyvect *hss_shift,
	const IMGOxUTIL__get_spot_maps_spot_shifts *spot_shifts,
	const double *separation_threshold,
	IMGOxUTIL__get_spot_maps_spotmaps *spotmaps);
int IMGOxUTIL_create_mc_maps(const WPxCHUCK_chuck_id_enum *chuck,
	const WPxCHUCK_chuck_func_enum *func,
	const int *encoder_id,
	const int *rstart_a,
	const int *rend_a,
	const int *cstart_a,
	const int *cend_a,
	const int *rstart_b,
	const int *rend_b,
	const int *cstart_b,
	const int *cend_b,
	const int *magnify,
	const xyvect *hss_shift,
	const IMGOxUTIL__create_mc_maps_spot_shifts_a *spot_shifts_a,
	const IMGOxUTIL__create_mc_maps_spot_shifts_b *spot_shifts_b,
	const double *separation_threshold,
	const int *start_x,
	const int *start_y,
	const int *n_row,
	const int *n_col,
	const double *mc_scale);
int IMGOxUTIL_load_existing_defects(const WPxCHUCK_chuck_id_enum *chuck,
	const WPxCHUCK_chuck_func_enum *func,
	IMGOxUTIL__load_existing_defects_nr_defects *nr_defects);
int IMGOxUTIL_get_existing_defect(const WPxCHUCK_chuck_id_enum *chuck,
	const WPxCHUCK_chuck_func_enum *func,
	const int *encoder_id,
	const int *defect_id,
	const double *mc_scale,
	IMGOxUTIL__get_existing_defect_spotmaps *spotmaps,
	int *start_x,
	int *start_y,
	int *n_row,
	int *n_col);
int IMGOxUTIL_initialize_mc_maps(void);
int IMGOxUTIL_validate_mc_maps(const WPxCHUCK_chuck_id_enum *chuck,
	const WPxCHUCK_chuck_func_enum *func,
	const IMGOxUTIL__validate_mc_maps_spot_shift *spot_shift,
	const double *conv_factor_to_m,
	const IMGOxUTIL__validate_mc_maps_gp_shift *gp_shift,
	const int *max_nr_defects,
	IMGOxUTIL__validate_mc_maps_defect_valid *defect_valid);
int IMGOxUTIL_remove_mc_maps(const WPxCHUCK_chuck_id_enum *chuck,
	const WPxCHUCK_chuck_func_enum *func,
	const IMGOxUTIL__remove_mc_maps_keep_defect *keep_defect);
int IMGOxUTIL_download_mc_maps(const WPxCHUCK_chuck_id_enum *chuck,
	const WPxCHUCK_chuck_func_enum *func);
int IMGOxUTIL_create_htts(const WPxCHUCK_chuck_id_enum *chuck_id,
	const bool *do_a,
	const bool *do_rx,
	const int *border_x,
	const int *border_y,
	const double *damp,
	const double *threshold,
	const IMGOxUTIL__create_htts_spot_shifts *spot_shifts,
	const IMGO_DC_area *cutoff_area);
int IMGOxUTIL_get_htts(const WPxCHUCK_chuck_id_enum *chuck_id,
	const bool *do_a,
	const bool *do_rx,
	int *htts_nrow,
	int *htts_ncol,
	DDXAxVARARRAY_double *htts);
int IMGOxUTIL_set_htts(const WPxCHUCK_chuck_id_enum *chuck_id,
	const bool *do_a,
	const bool *do_rx,
	const int *htts_nrow,
	const int *htts_ncol,
	const DDXAxVARARRAY_double *htts);
int IMGOxUTIL_get_h(const WPxCHUCK_chuck_id_enum *chuck_id,
	const bool *do_a,
	const bool *do_rx,
	int *h_nrow,
	int *h_ncol,
	DDXAxVARARRAY_double *h);
int IMGOxUTIL_set_h(const WPxCHUCK_chuck_id_enum *chuck_id,
	const bool *do_a,
	const bool *do_rx,
	const int *h_nrow,
	const int *h_ncol,
	const DDXAxVARARRAY_double *h);
int IMGOxUTIL_get_scan_params(const horvervect *start_pos,
	const horvervect *end_pos,
	const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *chuck_func,
	const int *sample_divider);
int IMGOxUTIL_update_scan_params(const horvervect *start_pos,
	const horvervect *end_pos,
	const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *chuck_func);
int IMGOxUTIL_request_diag_scan(const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *chuck_func,
	int *action_id);
int IMGOxUTIL_convolve2d(const DDXAxVARARRAY_double *a,
	const int *a_row,
	const int *a_col,
	const DDXAxVARARRAY_double *b,
	const int *b_row,
	const int *b_col,
	DDXAxVARARRAY_double *out,
	int *out_row,
	int *out_col);
int IMGOxUTIL_fft2dr(const DDXAxVARARRAY_double *orig,
	const int *orig_row,
	const int *orig_col,
	DDXAxVARARRAY_complex *dest);
int IMGOxUTIL_ifft2dr(const DDXAxVARARRAY_complex *orig,
	const int *dest_row,
	const int *dest_col,
	DDXAxVARARRAY_double *dest);
int IMGOxUTIL_defect_statistics(const WPxCHUCK_chuck_id_enum *chuck_id,
	const bool *do_a,
	const bool *do_rx,
	const int *start_row,
	const int *start_col,
	const int *n_row,
	const int *n_col,
	IMGO_result_defect_statistics *stats);
int IMGOxUTIL_find_objects(DDXAxVARARRAY_int **defects,
	const int *defects_row,
	const int *defects_col,
	const int *min_row,
	const int *min_col,
	const int *max_nr_objects,
	DDXAxVARARRAY_int *row_start,
	DDXAxVARARRAY_int *row_stop,
	DDXAxVARARRAY_int *col_start,
	DDXAxVARARRAY_int *col_stop,
	DDXAxVARARRAY_int *nelem,
	int *nobjects,
	bool *too_many_defects);
int IMGOxUTIL_save_image(const WPxCHUCK_chuck_id_enum *chuck_id,
	const bool *matrix_transposed,
	const double *start_x,
	const double *start_y,
	const double *pitch_x,
	const double *pitch_y,
	const int *divider,
	const IMGOxUTIL__save_image_desc *desc,
	const IMGOxUTIL__save_image_filename *filename,
	const IMGO_DC_area *cutoff_area);
int IMGOxUTIL_detect_defects(const WPxCHUCK_chuck_id_enum *chuck_id,
	const double *rx_factor,
	const double *ry_factor,
	const int *border_x_a,
	const int *border_y_a,
	const int *border_x_b,
	const int *border_y_b,
	const double *threshold,
	int *defects_nrow,
	int *defects_ncol,
	int *defects_border_x,
	int *defects_border_y,
	DDXAxVARARRAY_int *defects);
int IMGOxUTIL_delete_hss(const WPxCHUCK_chuck_id_enum *chuck_id,
	const bool *do_a,
	const bool *do_rx);
int IMGOxUTIL_delete_htts(const WPxCHUCK_chuck_id_enum *chuck_id,
	const bool *do_a,
	const bool *do_rx);
int IMGOxUTIL_delete_h(const WPxCHUCK_chuck_id_enum *chuck_id,
	const bool *do_a,
	const bool *do_rx);
int IMGOxUTIL_detect_and_find_objects(const WPxCHUCK_chuck_id_enum *chuck_id,
	const double *rx_factor,
	const double *ry_factor,
	const int *border_x_a,
	const int *border_y_a,
	const int *border_x_b,
	const int *border_y_b,
	const double *threshold,
	const int *min_row,
	const int *min_col,
	const int *max_nr_objects,
	int *defects_border_x,
	int *defects_border_y,
	DDXAxVARARRAY_int *row_start,
	DDXAxVARARRAY_int *row_stop,
	DDXAxVARARRAY_int *col_start,
	DDXAxVARARRAY_int *col_stop,
	DDXAxVARARRAY_int *nelem,
	int *nobjects,
	bool *too_many_defects);
int IMGOxUTIL_set_kernel(const WPxCHUCK_chuck_id_enum *chuck_id,
	const bool *do_rx,
	const int *n_row,
	const int *n_col,
	const DDXAxVARARRAY_double *kernel);
int IMGOxUTIL_get_kernel(const WPxCHUCK_chuck_id_enum *chuck_id,
	const bool *do_rx,
	int *n_row,
	int *n_col,
	DDXAxVARARRAY_double *kernel);
int IMGOxUTIL_delete_kernel(const WPxCHUCK_chuck_id_enum *chuck_id,
	const bool *do_rx);
int IMGOxUTIL_set_intensity(const WPxCHUCK_chuck_id_enum *chuck_id,
	const bool *do_a,
	const int *n_row,
	const int *n_col,
	const DDXAxVARARRAY_double *intensity);
int IMGOxUTIL_get_intensity(const WPxCHUCK_chuck_id_enum *chuck_id,
	const bool *do_a,
	int *n_row,
	int *n_col,
	DDXAxVARARRAY_double *intensity);
int IMGOxUTIL_delete_intensity(const WPxCHUCK_chuck_id_enum *chuck_id,
	const bool *do_a);
int IMGOxUTIL_create_h(const WPxCHUCK_chuck_id_enum *chuck_id,
	const bool *do_a,
	const bool *do_rx,
	int *n_row,
	int *n_col);
int IMGOxUTIL_create_intensities(const WPxCHUCK_chuck_id_enum *chuck,
	const int *encoder_id,
	const int *first_line_counter,
	const int *last_line_counter,
	const int *nr_values_per_line,
	const bool *transform_matrix,
	const bool *merge_with_existing,
	double *line_quality_a_sum_sqrt,
	double *line_quality_b_sum_sqrt);
int IMGOxUTIL_add_mc_defect(const WPxCHUCK_chuck_id_enum *chuck,
	const WPxCHUCK_chuck_func_enum *func,
	const int *encoder_id,
	const double *mc_scale,
	const bool *perform_correction,
	const int *start_x,
	const int *start_y,
	const int *n_row,
	const int *n_col,
	const IMGOxUTIL__add_mc_defect_spotmaps *spotmaps);
int IMGOxUTIL_filter_intensity(const WPxCHUCK_chuck_id_enum *chuck,
	const bool *do_a,
	const int *first_line_nr,
	const int *first_value_nr,
	const bool *scan_in_x,
	const IMGO_DC_area *cutoff_area,
	const bool *second_order_butter,
	const double *pitch,
	const double *butter_length);
int IMGOxUTIL_get_move_params(const horvervect *start_pos,
	const horvervect *end_pos,
	const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *chuck_func);
int IMGOxUTIL_update_move_params(const horvervect *start_pos,
	const horvervect *end_pos,
	const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *chuck_func);
int IMGOxUTIL_request_move(const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *chuck_func,
	int *action_id);
int IMGOxUTIL_get_result_move(const WPxCHUCK_chuck_id_enum *chuck_id,
	const int *action_id);
int IMGOxUTIL_fit_pe_to_q(const IMGOxUTIL__fit_pe_to_q_left_file *left_file,
	const IMGOxUTIL__fit_pe_to_q_right_file *right_file,
	double *minx,
	double *maxx,
	double *miny,
	double *maxy,
	IMGOxUTIL__fit_pe_to_q_xtx *xtx,
	IMGOxUTIL__fit_pe_to_q_xty *xty);
int IMGOxUTIL_get_max_pos_error(const WPxCHUCK_chuck_id_enum *chuck_id,
	const WPxCHUCK_chuck_func_enum *chuck_func,
	const int *encoder_id,
	const int *defect_id,
	const IMGOxUTIL__get_max_pos_error_spot_shift *spot_shift,
	const double *conv_factor_to_m,
	double *max_pos_error);



#endif // _IMGOxUTIL_TC_H_
