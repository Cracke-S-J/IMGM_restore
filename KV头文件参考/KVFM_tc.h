/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVFM
* 文件名称 : KVFM_tc.h
* 概要描述 :
*	KV组件KVFM数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVFM_TC_H_
#define _KVFM_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <KVXAxLOTxRES_tc.h> 
#include <WPxCHUCK_tc.h> 
#include <KVXTxMC_tc.h> 
#include <MEXAxGL_tc.h> 
#include <SMXA.h> 
#include <KWXAxDD_tc.h> 
#include <base.h> 
#include <KVXAxLOTxPAR_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    KVXAxLOTxPAR_FSD_threshold_z_spec threshold_z_spec;
    double relative_threshold;
    double absolute_threshold;
} KVFM_threshold_t;

typedef struct
{
    double r_min;
    double r_max;
    KVFM_threshold_t threshold_settings;
    double threshold_value;
} KVFM_zone_params_t;

typedef struct
{
    int len;
    int max_len;
    KVFM_zone_params_t* array;
} KVFM_zone_params_array_t;

typedef struct
{
    int topology_id;
    int WM_grid_template_id;
    int wam_id;
    bool do_FSD;
} KVFM_WM_area_t;

typedef struct
{
    int len;
    int max_len;
    KVFM_WM_area_t* array;
} KVFM_WM_area_array_t;

typedef struct
{
    double x;
    double y_start;
    double y_end;
    KVFM_WM_area_array_t areas;
} KVFM_WM_stroke_t;

typedef struct
{
    int len;
    int max_len;
    KVFM_WM_stroke_t* array;
} KVFM_WM_stroke_array_t;

typedef struct
{
    int ix;
    int iy;
    xyvect position;
} KVFM_point;

typedef struct
{
    int len;
    int max_len;
    KVFM_point* array;
} KVFM_point_array;

typedef struct
{
    KVFM_point_array points;
} KVFM_spot;

typedef struct
{
    int len;
    int max_len;
    KVFM_spot* array;
} KVFM_spot_array;

typedef struct
{
    xyvect position;
} KVFM_coordinate;

typedef struct
{
    int len;
    int max_len;
    KVFM_coordinate* array;
} KVFM_coordinate_array;

typedef struct
{
    int matched_old_spot_id;
    bool match_found;
    xyvect position;
    double radius;
    double height;
    KVFM_point_array points;
} KVFM_report_focus_spot;

typedef struct
{
    int len;
    int max_len;
    KVFM_report_focus_spot* array;
} KVFM_report_focus_spot_array;

typedef struct
{
    int nr_of_wafers;
    bool match_found;
    int matched_id;
    xyvect position;
    double height;
    KVFM_point_array points;
} KVFM_report_chuck_spot;

typedef struct
{
    int len;
    int max_len;
    KVFM_report_chuck_spot* array;
} KVFM_report_chuck_spot_array;

typedef struct
{
    int len;
    int max_len;
    short* array;
} KVFM_Npts_column_array;

typedef struct
{
    KVFM_Npts_column_array columns;
} KVFM_Npts_row;

typedef struct
{
    int len;
    int max_len;
    KVFM_Npts_row* array;
} KVFM_Npts_row_array;

typedef struct
{
    int len;
    int max_len;
    int* array;
} KVFM_wam_id_array_t;

typedef struct
{
    int topology_id;
    KVFM_wam_id_array_t wam_id;
    int min_nr_exposures;
    bool remove_average;
    double x_gridlines_shift;
    int nr_of_x_gridlines;
    int nr_of_y_gridlines;
    KWXAxDD_x_gridline_offset_array x_gridline_offsets;
    KWXAxDD_y_gridline_offset_array y_gridline_offsets;
    KWXAxDD_z_value_row_array z_values;
    KVFM_Npts_row_array Npts;
} KVFM_av_topology_t;

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef double KVFM_height_std_dev_t;

typedef struct
{
    double r_min;
    double r_max;
    double mean;
    double rms;
    double threshold_value;
} KVFM_zone_rms_t;

typedef struct
{
    int len;
    int max_len;
    KVFM_zone_rms_t* array;
} KVFM_zone_rms_array_t;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int KVFM_initialise(void);
int KVFM_terminate(void);
int KVFM_get_status(SMXA_driverState *driver_state_p);
int KVFM_set_diagnostics(const MEXAxGL_state *state_p);
void KVFM_set_context(const MEXAxGL_context_list *context);
int KVFM_set_FSM_machine_const(const KVXTxMC_FSM_params *fsm_parameters);
int KVFM_get_FSM_machine_const(KVXTxMC_FSM_params *fsm_parameters_p);
int KVFM_retrieve_wafer_map(const WPxCHUCK_chuck_id_enum *chuck_id);
int KVFM_start_lot(const KVFM_WM_stroke_array_t *kvfm_stroke_array,
	const KVXAxLOTxPAR_FM_parameters *fm_parameters,
	const KVXAxLOTxPAR_WM_grid_template_array *grid_templates,
	const KVXAxLOTxPAR_FlexPack_parameters_t *flexpack_parameters);
int KVFM_finish_lot(void);
int KVFM_perform_FM(const WPxCHUCK_chuck_id_enum *chuck_id,
	KVXAxLOTxRES_FM_results *fm_results_p);
int KVFM_perform_spot_logging(const WPxCHUCK_chuck_id_enum *chuck_id,
	const KVFM_WM_stroke_array_t *kvfm_stroke_array,
	const KVXAxLOTxPAR_FM_parameters *fm_parameters,
	const KVXAxLOTxPAR_WM_grid_template_array *grid_templates,
	const KVXAxLOTxPAR_FlexPack_parameters_t *flexpack_parameters);



#endif // _KVFM_TC_H_
