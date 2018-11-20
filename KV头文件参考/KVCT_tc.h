/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVCT
* 文件名称 : KVCT_tc.h
* 概要描述 :
*	KV组件KVCT数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVCT_TC_H_
#define _KVCT_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <KVNL_tc.h> 
#include <LFXAxDEF_tc.h> 
#include <ADELpdocCorr_tc.h> 
#include <KVXAxLOTxRES_tc.h> 
#include <KWXA_tc.h> 
#include <KVXAxLOTxPAR_tc.h> 
#include <MExMEASURE_tc.h> 
#include <WPxCHUCK_tc.h> 
#include <KVCA_tc.h> 
#include <base.h> 
#include <LEXAxSPOT_tc.h> 



/*-------------------------------- Defines -------------------------------*/
#define KVCT_ERR_BASE 	 0x4B564000 



/*-------------------------- Enums and Structs ---------------------------*/

typedef char KVCT__get_CM_opt_possession_functionality_name[0xC];

typedef int KVCT__det_scanio_le_spots_wm_le_spots_scanin_p[0x9];

typedef int KVCT__det_scanio_le_spots_wm_le_spots_scanout_p[0x9];

typedef int KVCT__det_WM_scanio_GLC_candidate_areas_wm_le_spots_scan_p[0x9];

typedef int KVCT__det_local_wafer_planes_zrxry_wm_le_spots_scan_p[0x9];

typedef KVNL_solve_input_struct KVCT__det_wam_dev_check_params_lsq_data[0x1518];

typedef double KVCT__det_wam_dev_check_params_lsq_res[0x3];

typedef int KVCT__set_FP_internal_datastore_grid_template_id_list_stores[0x37];



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int KVCT_get_cpt_scan_id(int *scan_id_p);
int KVCT_get_CM_opt_possession(const KVCT__get_CM_opt_possession_functionality_name *functionality_name,
	bool *cm_possession);
int KVCT_set_le_spot_xyz(const LEXAxSPOT_spot_id_t *spot_id,
	const xyzvect *le_spot_xyz_p);
int KVCT_get_le_spot_xyz(const LEXAxSPOT_spot_id_t *spot_id,
	xyzvect *le_spot_xyz_p);
int KVCT_set_leveling_option_mc(const bool *apply_IFPC);
int KVCT_get_extended_table(const int *seq_nr,
	KVCA_spot_valid_table_extended *extended_table_p);
int KVCT_set_chuck_id(const WPxCHUCK_chuck_id_enum *chuck_id);
int KVCT_get_chuck_id(WPxCHUCK_chuck_id_enum *chuck_id_p);
int KVCT_set_ws_zeroing_error_zrxry(const zrxryvect *ws_zeroing_error_zrxry_p);
int KVCT_get_ws_zeroing_error_zrxry(zrxryvect *ws_zeroing_error_zrxry_p);
int KVCT_set_GLC_params_wscs(const int *seq_nr,
	const MExMEASURE_GLC_params_KD_KV *glc_params_p);
int KVCT_get_GLC_params_wscs(const int *seq_nr,
	MExMEASURE_GLC_params_KD_KV *glc_params_p);
int KVCT_set_le_GLC_scan_data(const KVCA_le_scan_data *le_glc_scan_data_p);
int KVCT_get_le_GLC_scan_data(KVCA_le_scan_data *le_glc_scan_data_p);
int KVCT_set_global_level_contour(const KVCA_scan_data *glc_data_p);
int KVCT_set_global_wafer_wedge(const zrxryvect *global_wafer_wedge_p,
	const bool *valid,
	const xyvect *ref_wscs_p);
int KVCT_set_GLC_meas_spot_valid_table_extended(const int *seq_nr,
	const KVCA_spot_valid_table_extended *glc_meas_spot_valid_table_extended_p);
int KVCT_get_GLC_meas_spot_valid_table_extended(const int *seq_nr,
	KVCA_spot_valid_table_extended *glc_meas_spot_valid_table_extended_p);
int KVCT_set_lot_GLC_params(const KVXAxLOTxPAR_GLC_lot_data *glc_lot_data_p);
int KVCT_get_lot_GLC_params(KVXAxLOTxPAR_GLC_lot_data *glc_lot_data_p);
int KVCT_set_WM_params_wscs(const int *seq_nr,
	const MExMEASURE_WM_params_KD_KV *wm_params_p,
	const xyvect *ref_wscs_p);
int KVCT_get_WM_params_wscs(const int *seq_nr,
	MExMEASURE_WM_params_KD_KV *wm_params_p);
int KVCT_set_le_WM_scan_data(const KVCA_le_scan_data *le_wm_scan_data_p);
int KVCT_get_le_WM_scan_data(KVCA_le_scan_data *le_wm_scan_data_p);
int KVCT_set_WM_stroke(const KVCA_scan_data *wm_stroke_data_p);
int KVCT_get_WM_stroke(KVCA_scan_data *wm_stroke_data_p);
int KVCT_set_WM_meas_spot_valid_table_extended(const int *seq_nr,
	const KVCA_spot_valid_table_extended *wm_meas_spot_valid_table_extended_p);
int KVCT_get_WM_meas_spot_valid_table_extended(const int *seq_nr,
	KVCA_spot_valid_table_extended *wm_meas_spot_valid_table_extended_p);
int KVCT_set_lot_WM_params(const KVCA_WM_lot_data_t *wm_lot_data_p);
int KVCT_get_lot_WM_params(KVCA_WM_lot_data_t *wm_lot_data_p);
int KVCT_get_valid_spot(const int *meas_point,
	const int *meas_spot,
	bool *valid_spot_p);
int KVCT_create_tst_wafer_map(const WPxCHUCK_chuck_id_enum *chuck_id,
	const int *max_nr_of_x_gridlines,
	const int *max_nr_of_wams,
	KWXA_wafer_map *wm_p);
int KVCT_create_wafer_map(void);
int KVCT_get_WM_results(KVXAxLOTxRES_WM_results *wm_results_p);
int KVCT_set_WM_results(const KVXAxLOTxRES_WM_results *wm_results_p);
int KVCT_get_WM_stroke_from_queue(const int *seq_nr,
	KVCA_WM_stroke_t *wm_stroke_data_p);
int KVCT_put_WM_stroke_in_queue(const int *seq_nr,
	const KVCA_WM_stroke_t *wm_stroke_data);
int KVCT_remove_WM_stroke_from_queue(const int *seq_nr);
int KVCT_correct_WM_SUSD_errors(const int *number_of_wm_strokes,
	const KVCA_WM_stroke_t *strokeProperties,
	KVCA_le_scan_data **scanData);
int KVCT_set_grid_templates(const KVXAxLOTxPAR_WM_grid_template_array *grid_templates);
int KVCT_get_grid_templates(KVXAxLOTxPAR_WM_grid_template_array *grid_templates);
int KVCT_init_leveling_options(const int *nr_of_wams);
int KVCT_get_leveling_options(KVCA_leveling_option_wams_data *leveling_option_wams_data_p);
int KVCT_set_leveling_options(const KVCA_leveling_option_wams_data *leveling_option_wams_data_p);
int KVCT_set_wafer_map(const WPxCHUCK_chuck_id_enum *chuck_id,
	const KWXA_wafer_map *wm_p);
int KVCT_set_current_chuck_id(const WPxCHUCK_chuck_id_enum *chuck_id);
int KVCT_set_average_PDOM_array_entry(const KVCA_PDOM_table *average_PDOM_table_p);
int KVCT_correct_stroke_for_PDO(const KVCA_WM_stroke_t *wm_stroke_data_p,
	KVCA_le_scan_data **le_scan_data_p);
int KVCT_correct_stroke_for_PDO_NULL_pointers(const bool *wm_stroke_data_is_null_pointer,
	const bool *le_scan_data_is_null_pointer);
int KVCT_sort_and_determine_average_PDOM(const ADELpdocCorr_PdocPointListType *input_pdoc_pointlist_p,
	KVCA_PDOM_table **output_pdoc_pointlist_p);
int KVCT_set_AG_params_wscs_array(const KVCA_PDOC_AG_strokes_params_KD_KV_array *ag_params_wscs_array_p);
int KVCT_set_LS_params_wscs_array(const KVCA_PDOC_params_KD_KV_array *ls_params_wscs_arr_p);
int KVCT_set_LS_ref_array(const double *h1,
	const double *h2);
int KVCT_get_model_PDOC_results(KVCA_PDOM_table_array *average_PDOM_array_p);
int KVCT_perform_wafer_safety_check(const int *seq_nr);
int KVCT_request_GLC_scan_results(const int *scan_id,
	LFXAxDEF_error_source_t *LE_error);
int KVCT_correct_GLC_for_zeroing_errors(const int *seq_nr);
int KVCT_repair_GLC(const int *seq_nr);
int KVCT_det_meas_positions_xy_wcs(const int *seq_nr);
int KVCT_det_global_wafer_wedge(const int *seq_nr,
	const LFXAxDEF_error_source_t *LE_error);
int KVCT_det_scanio_le_spots(const KVCA_WM_stroke_t *wm_stroke_data_p,
	const int *seq_nr,
	KVCT__det_scanio_le_spots_wm_le_spots_scanin_p *wm_le_spots_scanin_p,
	KVCT__det_scanio_le_spots_wm_le_spots_scanout_p *wm_le_spots_scanout_p,
	double *avg_scanin_x_p,
	double *avg_scanout_x_p);
int KVCT_det_WM_scanio_GLC_candidate_areas(const KVCT__det_WM_scanio_GLC_candidate_areas_wm_le_spots_scan_p *wm_le_spots_scan_p,
	const xyvect *lot_wm_stroke_xy_wcs_p,
	KVCA_scanio_selection_area *wm_scan_selection_area_p);
int KVCT_select_WM_scanio_GLC_points(const KVCA_scanio_selection_area *wm_scan_selection_area_p,
	KVCA_scanio_selected_glc_points *wm_scan_selected_glc_points_p);
int KVCT_det_WM_scanio_plane_areas(const KVCA_scanio_selected_glc_points *wm_scan_selected_glc_points_p,
	xyvect *wm_scan_plane_area_size_p);
int KVCT_calc_WM_scanio_local_wafer_planes_zrxry(const KVCA_scanio_selected_glc_points *wm_scan_selected_glc_points_p,
	const xyvect *wm_scan_plane_area_size_p,
	const xyvect *lot_wm_stroke_xy_wcs_p,
	zrxryvect *wm_scan_local_wafer_plane_zrxry_p);
int KVCT_det_local_wafer_planes_zrxry(const KVCT__det_local_wafer_planes_zrxry_wm_le_spots_scan_p *wm_le_spots_scan_p,
	const xyvect *lot_wm_stroke_xy_wcs_p,
	zrxryvect *wm_scan_local_wafer_plane_zrxry_p);
int KVCT_det_scanio_setpoints(const MExMEASURE_WM_params_KD_KV *wm_stroke_params_wscs_p,
	const zrxryvect *wm_scanin_local_wafer_plane_zrxry_p,
	const zrxryvect *wm_scanout_local_wafer_plane_zrxry_p,
	const double *avg_scanin_x_p,
	const double *avg_scanout_x_p,
	zrxryvect *start_zrxry_p,
	zrxryvect *end_zrxry_p);
int KVCT_request_WM_scan_results(const int *scan_id,
	LFXAxDEF_error_source_t *LF_error);
int KVCT_correct_WM_stroke_for_zeroing_errors(const int *seq_nr);
int KVCT_repair_WM_stroke(const KVCA_WM_stroke_t *wm_stroke_data_p,
	const int *seq_nr,
	const LFXAxDEF_error_source_t *LF_error);
int KVCT_store_WM_stroke(const KVCA_WM_stroke_t *wm_stroke_data_p,
	const int *seq_nr);
int KVCT_check_wafer_plane_deviation(const KVCA_WM_stroke_t *wm_stroke_data_p,
	const int *seq_nr,
	const bool *determine_wam_dev_check_params);
int KVCT_fill_WM_stroke(const KVCA_WM_stroke_t *wm_stroke_data_p,
	const int *seq_nr);
int KVCT_set_LS_data_check_results(const KVCA_LS_data_check_info *LS_data_check_info_p);
int KVCT_evaluate_LS_data_check_results(bool *ls_check_failed);
int KVCT_set_wam_deviation_check_info(const KVCA_wam_deviation_check_info *wam_deviation_check_info_p);
int KVCT_get_wam_deviation_check_info(KVCA_wam_deviation_check_info *wam_deviation_check_info_p);
int KVCT_init_wam_deviation_check_info(const KVCA_WM_lot_data_t *lot_data_p);
int KVCT_free_wam_deviation_check_info(void);
int KVCT_evaluate_wam_deviation_check_results(bool *wam_check_failed);
int KVCT_det_wam_dev_check_params(const bool *lsq_ok,
	const int *nr_valid_points,
	const KVCT__det_wam_dev_check_params_lsq_data *lsq_data,
	const KVCT__det_wam_dev_check_params_lsq_res *lsq_res,
	const int *wam_id);
int KVCT_remove_redundant_data_in_wafermap(void);
int KVCT_get_wam_info_list(KWXA_wam_info_list *wam_info_list_p);
int KVCT_do_leveling_options(const int *seq_nr,
	const bool *EDL_on,
	const bool *FWOL_on,
	const bool *FWOL_layer_on,
	const KVCA_WM_stroke_t *wm_stroke_data_p,
	KVCA_scan_data **scan_data_p);
int KVCT_correct_WM_for_zeroing_errors(void);
int KVCT_set_FP_internal_datastore(const WPxCHUCK_chuck_id_enum *chuck_id,
	const KVXAxLOTxPAR_WM_grid_template_array *grid_template_stores,
	const KVCA_WM_fingerprint_array_t *fingerprint_stores,
	const KVCT__set_FP_internal_datastore_grid_template_id_list_stores *grid_template_id_list_stores);
int KVCT_intrarow_fingerprint_correction(const KVCA_WM_lot_data_t *lot_data);
int KVCT_set_do_WM_recovery(const bool *do_WM_recovery);
int KVCT_sort_wafer_map(void);
int KVCT_log_stubs_get_last_error_log(int *exception_code_p,
	int *exception_link_p);



#endif // _KVCT_TC_H_
