/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVXAxPDOC
* 文件名称 : KVXAxPDOC_tc.h
* 概要描述 :
*	KV组件KVXAxPDOC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVXAxPDOC_TC_H_
#define _KVXAxPDOC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <LEXAxSPOT_tc.h> 
#include <WPxSCANxDEF_tc.h> 
#include <MEXAxWAFxPLATE_tc.h> 
#include <RLXA_tc.h> 
#include <base.h> 
#include <RLxTABLESET_tc.h> 
#include <MExMEASURE_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int KVXAxPDOC_get_PDOC_LS_nr_strokes(int *nr_of_strokes_p);
int KVXAxPDOC_get_PDOC_LS_stroke_params(const int *LS_seq_nr,
	MExMEASURE_PDOC_LS_params_KV_KD *pdoc_LS_stroke_params,
	RLxTABLESET_table_set_t *pdoc_LS_table_set);
int KVXAxPDOC_det_PDOC_LS_stroke_params(const int *LS_seq_nr,
	const MExMEASURE_PDOC_LS_params_KD_KV *pdoc_LS_stroke_params,
	zrxryvect *pdoc_LS_start_zrxry,
	zrxryvect *pdoc_LS_end_zrxry);
int KVXAxPDOC_put_PDOC_LS_stroke_results(const int *LS_seq_nr,
	const RLXA_get_result_zmap_t *pdoc_LS_stroke_results);
int KVXAxPDOC_get_PDOC_height_nr_measurements(int *nr_of_meas);
int KVXAxPDOC_get_PDOC_AG_height_params(MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	MExMEASURE_PDOC_AG_height_params_KV_KD *height_params,
	double *accuracy,
	bool *capture_needed,
	bool *gain_calibration_needed);
int KVXAxPDOC_det_PDOC_AG_height_params(const MExMEASURE_PDOC_AG_height_params_KD_KV *AG_height_params,
	zrxryvect *ws_exp_pos_zrxry);
int KVXAxPDOC_set_PDOC_AG_height_results(const int *seq_nr,
	const RLXA_AG_get_result_height_t *pdoc_AG_height_results);
int KVXAxPDOC_model_PDOC_AG_height(void);
int KVXAxPDOC_get_PDOC_AG_nr_strokes(const int *LS_seq_nr,
	int *nr_of_AG_strokes);
int KVXAxPDOC_get_PDOC_AG_stroke_params(const int *LS_seq_nr,
	const int *AG_seq_nr,
	MExMEASURE_PDOC_AG_params_KV_KD *pdoc_AG_stroke_params,
	RLxTABLESET_AG_table_set_t *pdoc_AG_table_set,
	bool *scan_preceeded_by_travel);
int KVXAxPDOC_det_PDOC_AG_stroke_params(const int *LS_seq_nr,
	const int *AG_seq_nr,
	const MExMEASURE_PDOC_AG_params_KD_KV *pdoc_AG_stroke_params,
	WPxSCANxDEF_polynomial_scan_params_struct *pdoc_AG_z_profile,
	zrxryvect *start_pos,
	zrxryvect *end_pos,
	double *scan_duration);
int KVXAxPDOC_put_PDOC_AG_stroke_results(const int *LS_seq_nr,
	const int *AG_seq_nr,
	const RLXA_AG_get_result_zmap_t *pdoc_AG_stroke_results);
int KVXAxPDOC_model_PDOC(void);
int KVXAxPDOC_destroy_PDOC_LS_scan_results(void);
void KVXAxPDOC_ready_for_second_LS_WM_meas(void);
int KVXAxPDOC_get_PDOC_LS_height_params(MExMEASURE_PDOC_LS_height_params_KV_KD *height_params,
	LEXAxSPOT_spot_selection_t *le_spot_selection,
	double *accuracy,
	bool *capture_needed,
	RLXA_capture_def_t *capture_def);
int KVXAxPDOC_det_PDOC_LS_height_params(const MExMEASURE_PDOC_LS_height_params_KD_KV *height_params,
	zrxryvect *ws_exp_pos_zrxry);
int KVXAxPDOC_set_PDOC_LS_height_results(const int *seq_nr,
	const RLXA_get_result_ags_height_t *LS_ref_results);
int KVXAxPDOC_model_PDOC_LS_height(void);
int KVXAxPDOC_get_PDOC_wfr_ref_height_nr_measurements(int *nr_of_meas);
int KVXAxPDOC_get_AG_wfr_ref_meas_params(MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	MExMEASURE_PDOC_LS_height_params_KV_KD *Waf_Ref_Loc,
	double *accuracy,
	bool *capture_needed,
	bool *gain_calibration_needed);
int KVXAxPDOC_det_AG_wfr_ref_meas_params(const MExMEASURE_PDOC_AG_height_params_KD_KV *Waf_Ref_Loc,
	zrxryvect *ws_exp_pos_zrxry);
int KVXAxPDOC_set_AG_wfr_ref_meas_results(const int *seq_nr,
	const RLXA_AG_get_result_height_t *Waf_Ref_AGZ);
int KVXAxPDOC_get_LS_wfr_ref_meas_params(MExMEASURE_PDOC_LS_height_params_KV_KD *Waf_Ref_Loc,
	LEXAxSPOT_spot_selection_t *spot_selection,
	double *accuracy,
	bool *capture_needed,
	RLXA_capture_def_t *capture_def);
int KVXAxPDOC_det_LS_wfr_ref_meas_params(const MExMEASURE_PDOC_LS_height_params_KD_KV *Waf_Ref_Loc,
	zrxryvect *ws_exp_pos_zrxry);
int KVXAxPDOC_set_LS_wfr_ref_meas_results(const int *seq_nr,
	const RLXA_get_result_ags_height_t *Waf_Ref_LSZ);



#endif // _KVXAxPDOC_TC_H_
