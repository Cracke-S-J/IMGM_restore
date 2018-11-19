/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMGMxMATLAB
* 文件名称 : IMGMxMATLAB_tc.h
* 概要描述 :
*	IM组件IMGMxMATLAB数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMGMxMATLAB_TC_H_
#define _IMGMxMATLAB_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <IMGMxDATA_tc.h> 
#include <MIENXTxWSxMLd_tc.h> 
#include <base.h> 
#include <WPxCHUCK_tc.h> 
#include <IMGMxSCAN_tc.h> 
#include <IMGMxSCHED_tc.h> 
#include <IMGMxTC_tc.h> 
#include <IMGM_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    int len;
    int max_len;
    double* array;
} IMGMxMATLAB_setpoint_vararray;

typedef char IMGMxMATLAB_calibration_settings_t_TaskInstId[0x18];

typedef struct
{
    IMGMxMATLAB_calibration_settings_t_TaskInstId TaskInstId;
    IMGM_input_struct input;
    IMGMxTC_tc_struct test_const;
    timestamp start_time;
} IMGMxMATLAB_calibration_settings_t;

typedef struct
{
    IMGMxSCHED_MEAS_elem measurement_element;
    timestamp start_time;
    IMGMxSCAN_setpoint_vararray setpoints;
    IMGMxMATLAB_setpoint_vararray gridlines;
    IMGMxMATLAB_setpoint_vararray gridpoints;
} IMGMxMATLAB_area_settings_t;

typedef struct
{
    timestamp start_time;
    int counter;
} IMGMxMATLAB_line_settings_t;

typedef struct
{
    timestamp stop_time;
    bool valid;
    int nr_failed_lines;
    int nr_retries_performed;
} IMGMxMATLAB_area_results_t;

typedef struct
{
    timestamp stop_time;
    IMGM_result_struct result;
} IMGMxMATLAB_calibration_results_t;

typedef char IMGMxMATLAB_name_string[0x100];

typedef struct
{
    int len;
    int max_len;
    IMGMxMATLAB_name_string* array;
} IMGMxMATLAB_name_array;

typedef struct
{
    IMGMxMATLAB_name_string bulk;
    IMGMxMATLAB_name_string htre_p;
    IMGMxMATLAB_name_string htre_n;
} IMGMxMATLAB_filename_area_direction_struct;

typedef struct
{
    IMGMxMATLAB_filename_area_direction_struct x;
    IMGMxMATLAB_filename_area_direction_struct y;
} IMGMxMATLAB_filename_area_struct;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    WPxCHUCK_chuck_func_enum chuck_func;
    IMGMxSCHED_MEAS_direction direction;
    IMGMxSCHED_MEAS_type type;
    int nr_repetitions;
    IMGMxSCAN_setpoint_vararray setpoints;
    xyvect left_bottom;
    xyvect right_top;
    IMGMxMATLAB_name_string input_path;
    IMGMxMATLAB_name_array filenames;
    bool P1;
    bool P2;
    bool P3;
    bool P4;
    double pitch;
    bool scan_pitch_plus;
    bool scan_up_first;
} IMGMxMATLAB_area_descriptor_t;

typedef struct
{
    double htre_weld;
    double htre_xf8_n;
    double htre_xf8_p;
} IMGMxMATLAB_htre_weld_struct;

typedef timestamp IMGMxMATLAB_hfmap_timestamp_chuck_struct_gridplate[0x8];

typedef struct
{
    IMGMxMATLAB_hfmap_timestamp_chuck_struct_gridplate gridplate;
} IMGMxMATLAB_hfmap_timestamp_chuck_struct;

typedef IMGMxMATLAB_hfmap_timestamp_chuck_struct IMGMxMATLAB_hfmap_timestamp_struct_chuck[0x2];

typedef struct
{
    IMGMxMATLAB_hfmap_timestamp_struct_chuck chuck;
} IMGMxMATLAB_hfmap_timestamp_struct;

typedef IMGMxMATLAB_filename_area_struct IMGMxMATLAB_input_filename_chuck_struct_func[0x2];

typedef struct
{
    IMGMxMATLAB_input_filename_chuck_struct_func func;
} IMGMxMATLAB_input_filename_chuck_struct;

typedef IMGMxMATLAB_input_filename_chuck_struct IMGMxMATLAB_input_filename_struct_chuck[0x2];

typedef struct
{
    IMGMxMATLAB_input_filename_struct_chuck chuck;
} IMGMxMATLAB_input_filename_struct;

typedef MIENXTxWSxMLd_hfmap_params_struct IMGMxMATLAB_hfmap_params_chuck_struct_gridplate[0x8];

typedef struct
{
    IMGMxMATLAB_hfmap_params_chuck_struct_gridplate gridplate;
} IMGMxMATLAB_hfmap_params_chuck_struct;

typedef IMGMxMATLAB_hfmap_params_chuck_struct IMGMxMATLAB_hfmap_params_struct_chuck[0x2];

typedef struct
{
    IMGMxMATLAB_hfmap_params_struct_chuck chuck;
} IMGMxMATLAB_hfmap_params_struct;

typedef MIENXTxWSxMLd_h2q_mc_struct IMGMxMATLAB_h2q_mc_chuck_struct_func[0x2];

typedef struct
{
    IMGMxMATLAB_h2q_mc_chuck_struct_func func;
} IMGMxMATLAB_h2q_mc_chuck_struct;

typedef IMGMxMATLAB_h2q_mc_chuck_struct IMGMxMATLAB_h2q_mc_struct_chuck[0x2];

typedef struct
{
    IMGMxMATLAB_h2q_mc_struct_chuck chuck;
} IMGMxMATLAB_h2q_mc_struct;

typedef horvervect IMGMxMATLAB_enc_pos_chuck_struct_sensor[0x4];

typedef struct
{
    IMGMxMATLAB_enc_pos_chuck_struct_sensor sensor;
} IMGMxMATLAB_enc_pos_chuck_struct;

typedef IMGMxMATLAB_enc_pos_chuck_struct IMGMxMATLAB_enc_pos_struct_chuck[0x2];

typedef struct
{
    IMGMxMATLAB_enc_pos_struct_chuck chuck;
} IMGMxMATLAB_enc_pos_struct;

typedef horvervect IMGMxMATLAB_rm1_chuck_struct_gridplate[0x8];

typedef struct
{
    IMGMxMATLAB_rm1_chuck_struct_gridplate gridplate;
} IMGMxMATLAB_rm1_chuck_struct;

typedef IMGMxMATLAB_rm1_chuck_struct IMGMxMATLAB_rm1_struct_chuck[0x2];

typedef struct
{
    IMGMxMATLAB_rm1_struct_chuck chuck;
} IMGMxMATLAB_rm1_struct;

typedef MIENXTxWSxMLd_ref_model_params_struct IMGMxMATLAB_ref_model_params_chuck_struct_func[0x2];

typedef struct
{
    IMGMxMATLAB_ref_model_params_chuck_struct_func func;
} IMGMxMATLAB_ref_model_params_chuck_struct;

typedef IMGMxMATLAB_ref_model_params_chuck_struct IMGMxMATLAB_ref_model_params_struct_chuck[0x2];

typedef struct
{
    IMGMxMATLAB_ref_model_params_struct_chuck chuck;
} IMGMxMATLAB_ref_model_params_struct;

typedef struct
{
    xyvect RM1_A1;
    xyvect RM1_A2;
    xyvect RM1_B1;
    xyvect RM1_B2;
    xyvect RM2_A1;
    xyvect RM2_A2;
    xyvect RM2_B1;
    xyvect RM2_B2;
} IMGMxMATLAB_spot_offset_gridplate_chuck_struct;

typedef IMGMxMATLAB_spot_offset_gridplate_chuck_struct IMGMxMATLAB_spot_offset_chuck_struct_gridplate[0x8];

typedef struct
{
    IMGMxMATLAB_spot_offset_chuck_struct_gridplate gridplate;
} IMGMxMATLAB_spot_offset_chuck_struct;

typedef IMGMxMATLAB_spot_offset_chuck_struct IMGMxMATLAB_spot_offset_struct_chuck[0x2];

typedef struct
{
    IMGMxMATLAB_spot_offset_struct_chuck chuck;
} IMGMxMATLAB_spot_offset_struct;

typedef IMGMxMATLAB_name_string IMGMxMATLAB_calibration_descriptor_t_gpserialnr[0x8];

typedef int IMGMxMATLAB_calibration_descriptor_t_jh_plate_id[0x8];

typedef IMGMxMATLAB_name_string IMGMxMATLAB_calibration_descriptor_t_output_filenames[0x2];

typedef MIENXTxWSxMLd_AB2h_mc_struct IMGMxMATLAB_calibration_descriptor_t_ab2h[0x2];

typedef struct
{
    IMGMxMATLAB_calibration_descriptor_t_gpserialnr gpserialnr;
    IMGMxMATLAB_calibration_descriptor_t_jh_plate_id jh_plate_id;
    IMGMxMATLAB_hfmap_timestamp_struct UNIXdatetime;
    int hfmap_version;
    IMGMxMATLAB_name_string input_path;
    IMGMxMATLAB_input_filename_struct input_filenames;
    IMGMxMATLAB_name_string output_path;
    IMGMxMATLAB_calibration_descriptor_t_output_filenames output_filenames;
    IMGMxMATLAB_htre_weld_struct weld_x;
    IMGMxMATLAB_htre_weld_struct weld_y;
    IMGMxMATLAB_calibration_descriptor_t_ab2h ab2h;
    IMGMxMATLAB_hfmap_params_struct hfmap_params;
    IMGMxMATLAB_spot_offset_struct spot_offsets;
    IMGMxMATLAB_h2q_mc_struct h2q;
    IMGMxMATLAB_enc_pos_struct enc_pos;
    IMGMxMATLAB_rm1_struct refmark1_pos;
    IMGMxMATLAB_ref_model_params_struct ref_model_params;
} IMGMxMATLAB_calibration_descriptor_t;

typedef struct
{
    IMGMxMATLAB_name_array outputFilenames;
    IMGMxMATLAB_name_string status;
    IMGMxMATLAB_name_string stError;
} IMGMxMATLAB_result_struct;

typedef char IMGMxMATLAB__get_calibration_calibration_name[0x100];

typedef char IMGMxMATLAB__get_area_calibration_instance[0x18];

typedef char IMGMxMATLAB__get_area_area_instance[0x18];

typedef char IMGMxMATLAB__get_line_area_instance[0x18];

typedef char IMGMxMATLAB__delete_calibration_name[0x100];



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int IMGMxMATLAB_get_calibration(const IMGMxMATLAB__get_calibration_calibration_name *calibration_name,
	IMGMxMATLAB_calibration_settings_t *cal_settings,
	IMGMxMATLAB_calibration_results_t *cal_results,
	int *nr_areas);
int IMGMxMATLAB_get_area(const IMGMxMATLAB__get_area_calibration_instance *calibration_instance,
	const int *area_nr,
	IMGMxMATLAB_area_settings_t *area_settings,
	IMGMxMATLAB_area_results_t *area_results,
	int *nr_lines,
	IMGMxMATLAB__get_area_area_instance *area_instance);
int IMGMxMATLAB_get_line(const IMGMxMATLAB__get_line_area_instance *area_instance,
	const int *line_nr,
	IMGMxMATLAB_line_settings_t *line_settings,
	IMGMxDATA_line_results_t *line_results);
int IMGMxMATLAB_delete(const IMGMxMATLAB__delete_calibration_name *calibration_name);
int IMGMxMATLAB_write_calibration_file(const IMGMxSCHED_MEAS_config *config);



#endif // _IMGMxMATLAB_TC_H_
