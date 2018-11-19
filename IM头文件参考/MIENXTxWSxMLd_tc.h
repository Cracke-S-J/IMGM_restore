/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : MI
* 模块名称 : MIENXTxWSxMLd
* 文件名称 : MIENXTxWSxMLd_tc.h
* 概要描述 :
*	MI组件MIENXTxWSxMLd数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _MIENXTxWSxMLd_TC_H_
#define _MIENXTxWSxMLd_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <base.h> 



/*-------------------------------- Defines -------------------------------*/
#define MIENXTxWSxMLd_MAX_GRID_MAP_SIZE 	 0x191 
#define MIENXTxWSxMLd_MAX_PLATE_MAP_X_SIZE 	 0x191 
#define MIENXTxWSxMLd_MAX_PLATE_MAP_Y_SIZE 	 0x641 
#define MIENXTxWSxMLd_MAX_PASSAGE_MAP_X_SIZE 	 0x29 
#define MIENXTxWSxMLd_MAX_PASSAGE_MAP_Y_SIZE 	 0x641 
#define MIENXTxWSxMLd_MAX_TO_TABLE_SIZE 	 0x537 
#define MIENXTxWSxMLd_NR_OF_SENSORS 	 0x4 
#define MIENXTxWSxMLd_NR_OF_COMBINATIONS 	 0x5 
#define MIENXTxWSxMLd_NR_OF_SPOTS 	 0x4 
#define MIENXTxWSxMLd_AREA_MAX 	 0xF 
#define MIENXTxWSxMLd_EXT_FIRST 	 0x0 
#define MIENXTxWSxMLd_EXT_LAST 	 0x3 
#define MIENXTxWSxMLd_M2E_FIRST 	 0x5 
#define MIENXTxWSxMLd_M2E_LAST 	 0xD 
#define MIENXTxWSxMLd_H_AXIS_ID_MAX 	 0x8 
#define MIENXTxWSxMLd_Q_MAX 	 0x6 
#define MIENXTxWSxMLd_RQ_MAX 	 0x17 
#define MIENXTxWSxMLd_F_Z_MAX 	 0x2 



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    MIENXTxWSxMLd_EXT_ROE1E4E4 = 0,
    MIENXTxWSxMLd_EXT_E1E1E4E4 = 1,
    MIENXTxWSxMLd_EXT_E1E2E4E4 = 2,
    MIENXTxWSxMLd_EXT_E1E2E3E4 = 3,
    MIENXTxWSxMLd_EXPO_E1E2E3E4 = 4,
    MIENXTxWSxMLd_M2E_E1E2E3E4 = 5,
    MIENXTxWSxMLd_M2E_E1E2E3E3 = 6,
    MIENXTxWSxMLd_M2E_E2E2E3E3 = 7,
    MIENXTxWSxMLd_M2E_E2M1E3E3 = 8,
    MIENXTxWSxMLd_M2E_E2M1M4E3 = 9,
    MIENXTxWSxMLd_M2E_E2M1M4M4 = 10,
    MIENXTxWSxMLd_M2E_M1M1M4M4 = 11,
    MIENXTxWSxMLd_M2E_M1M2M4M4 = 12,
    MIENXTxWSxMLd_M2E_M1M2M3M4 = 13,
    MIENXTxWSxMLd_MEAS_M1M2M3M4 = 14,
} MIENXTxWSxMLd_area_enum;

typedef enum
{
    MIENXTxWSxMLd_1Y = 0,
    MIENXTxWSxMLd_1Z = 1,
    MIENXTxWSxMLd_2Y = 2,
    MIENXTxWSxMLd_2Z = 3,
    MIENXTxWSxMLd_3Y = 4,
    MIENXTxWSxMLd_3Z = 5,
    MIENXTxWSxMLd_4Y = 6,
    MIENXTxWSxMLd_4Z = 7,
} MIENXTxWSxMLd_h_axis_id_enum;

typedef enum
{
    MIENXTxWSxMLd_PE_MODEL_123 = 0,
    MIENXTxWSxMLd_PE_MODEL_234 = 1,
    MIENXTxWSxMLd_PE_MODEL_134 = 2,
    MIENXTxWSxMLd_PE_MODEL_124 = 3,
} MIENXTxWSxMLd_pe_model_enum;

typedef enum
{
    MIENXTxWSxMLd_X = 0,
    MIENXTxWSxMLd_Y = 1,
    MIENXTxWSxMLd_Z = 2,
    MIENXTxWSxMLd_RX = 3,
    MIENXTxWSxMLd_RY = 4,
    MIENXTxWSxMLd_RZ = 5,
} MIENXTxWSxMLd_q_enum;

typedef enum
{
    MIENXTxWSxMLd_XRXRY = 0,
    MIENXTxWSxMLd_XRYRY = 1,
    MIENXTxWSxMLd_XRYRZ = 2,
    MIENXTxWSxMLd_XRZRZ = 3,
    MIENXTxWSxMLd_YRXRX = 4,
    MIENXTxWSxMLd_YRXRY = 5,
    MIENXTxWSxMLd_YRXRZ = 6,
    MIENXTxWSxMLd_YRZRZ = 7,
    MIENXTxWSxMLd_XRX = 8,
    MIENXTxWSxMLd_XRY = 9,
    MIENXTxWSxMLd_XRZ = 10,
    MIENXTxWSxMLd_YRX = 11,
    MIENXTxWSxMLd_YRY = 12,
    MIENXTxWSxMLd_YRZ = 13,
    MIENXTxWSxMLd_ZRX = 14,
    MIENXTxWSxMLd_ZRY = 15,
    MIENXTxWSxMLd_ZRZ = 16,
    MIENXTxWSxMLd_RXRX = 17,
    MIENXTxWSxMLd_RXRY = 18,
    MIENXTxWSxMLd_RXRZ = 19,
    MIENXTxWSxMLd_RYRY = 20,
    MIENXTxWSxMLd_RYRZ = 21,
    MIENXTxWSxMLd_RZRZ = 22,
} MIENXTxWSxMLd_rq_enum;

typedef enum
{
    MIENXTxWSxMLd_F_ZRX = 0,
    MIENXTxWSxMLd_F_ZRY = 1,
} MIENXTxWSxMLd_f_z_enum;

typedef enum
{
    MIENXTxWSxMLd_PLATE_MAP_SENSOR_1 = 0,
    MIENXTxWSxMLd_PLATE_MAP_SENSOR_2 = 1,
    MIENXTxWSxMLd_PLATE_MAP_SENSOR_3 = 2,
    MIENXTxWSxMLd_PLATE_MAP_SENSOR_4 = 3,
} MIENXTxWSxMLd_plate_map_sensor_enum;

typedef enum
{
    MIENXTxWSxMLd_SENSOR_1 = 0,
    MIENXTxWSxMLd_SENSOR_2 = 1,
    MIENXTxWSxMLd_SENSOR_3 = 2,
    MIENXTxWSxMLd_SENSOR_4 = 3,
} MIENXTxWSxMLd_sensor_enum;

typedef enum
{
    MIENXTxWSxMLd_SPOT_A1 = 0,
    MIENXTxWSxMLd_SPOT_A2 = 1,
    MIENXTxWSxMLd_SPOT_B1 = 2,
    MIENXTxWSxMLd_SPOT_B2 = 3,
} MIENXTxWSxMLd_spot_enum;

typedef enum
{
    MIENXTxWSxMLd_AREA_TYPE_Y = 0,
    MIENXTxWSxMLd_AREA_TYPE_XY = 1,
    MIENXTxWSxMLd_AREA_TYPE_YXY = 2,
} MIENXTxWSxMLd_area_type_enum;

typedef enum
{
    MIENXTxWSxMLd_PLATE_M1 = 0,
    MIENXTxWSxMLd_PLATE_M2 = 1,
    MIENXTxWSxMLd_PLATE_M3 = 2,
    MIENXTxWSxMLd_PLATE_M4 = 3,
    MIENXTxWSxMLd_PLATE_E1 = 4,
    MIENXTxWSxMLd_PLATE_E2 = 5,
    MIENXTxWSxMLd_PLATE_E3 = 6,
    MIENXTxWSxMLd_PLATE_E4 = 7,
    MIENXTxWSxMLd_PLATE_RUN_OUT = 8,
    MIENXTxWSxMLd_PLATE_NOT_ACTIVE = 9,
} MIENXTxWSxMLd_plate_enum;

typedef enum
{
    MIENXTxWSxMLd_SENSOR_COMBI_1234 = 0,
    MIENXTxWSxMLd_SENSOR_COMBI_123 = 1,
    MIENXTxWSxMLd_SENSOR_COMBI_124 = 2,
    MIENXTxWSxMLd_SENSOR_COMBI_134 = 3,
    MIENXTxWSxMLd_SENSOR_COMBI_234 = 4,
} MIENXTxWSxMLd_sensor_combi_enum;

typedef enum
{
    MIENXTxWSxMLd_M2M = 0,
    MIENXTxWSxMLd_E2E = 1,
    MIENXTxWSxMLd_M2E = 2,
    MIENXTxWSxMLd_E2M = 3,
    MIENXTxWSxMLd_E2R = 4,
    MIENXTxWSxMLd_R2E = 5,
} MIENXTxWSxMLd_takeover_type_enum;

typedef struct
{
    int valid;
    double y_average;
    double z_average;
    double y_std;
    double z_std;
    int used;
} MIENXTxWSxMLd_avg_sensor_data;

typedef struct
{
    double average;
    double std;
} MIENXTxWSxMLd_avg_std_data;

typedef struct
{
    MIENXTxWSxMLd_avg_std_data x;
    MIENXTxWSxMLd_avg_std_data y;
    MIENXTxWSxMLd_avg_std_data z;
    MIENXTxWSxMLd_avg_std_data rx;
    MIENXTxWSxMLd_avg_std_data ry;
    MIENXTxWSxMLd_avg_std_data rz;
} MIENXTxWSxMLd_avg_pe_data;

typedef MIENXTxWSxMLd_avg_sensor_data MIENXTxWSxMLd_avg_h_data_sensor[0x4];

typedef struct
{
    MIENXTxWSxMLd_avg_h_data_sensor sensor;
} MIENXTxWSxMLd_avg_h_data;

typedef MIENXTxWSxMLd_avg_sensor_data MIENXTxWSxMLd_avg_h_pe_data_sensor[0x4];

typedef struct
{
    MIENXTxWSxMLd_avg_h_pe_data_sensor sensor;
    MIENXTxWSxMLd_avg_pe_data pe;
} MIENXTxWSxMLd_avg_h_pe_data;

typedef double MIENXTxWSxMLd_A_matrix_v[0x8][0x6];

typedef struct
{
    MIENXTxWSxMLd_A_matrix_v v;
} MIENXTxWSxMLd_A_matrix;

typedef double MIENXTxWSxMLd_C_matrix_v[0x8][0x17];

typedef struct
{
    MIENXTxWSxMLd_C_matrix_v v;
} MIENXTxWSxMLd_C_matrix;

typedef double MIENXTxWSxMLd_E_matrix_v[0x8][0x6];

typedef struct
{
    MIENXTxWSxMLd_E_matrix_v v;
} MIENXTxWSxMLd_E_matrix;

typedef double MIENXTxWSxMLd_F_matrix_v[0x8][0x2];

typedef struct
{
    MIENXTxWSxMLd_F_matrix_v v;
} MIENXTxWSxMLd_F_matrix;

typedef struct
{
    MIENXTxWSxMLd_E_matrix E;
    MIENXTxWSxMLd_F_matrix F;
} MIENXTxWSxMLd_EF_data_struct;

typedef double MIENXTxWSxMLd_y1z4_array[0x8];

typedef struct
{
    int period_bits;
    double signal_period_y;
    double signal_period_z;
    MIENXTxWSxMLd_y1z4_array h0;
} MIENXTxWSxMLd_AB2h_mc_struct;

typedef struct
{
    MIENXTxWSxMLd_A_matrix A;
    MIENXTxWSxMLd_C_matrix C;
    MIENXTxWSxMLd_y1z4_array h_offset;
} MIENXTxWSxMLd_h2q_mc_struct;

typedef double MIENXTxWSxMLd_plate_map_data_y[0x191][0x641];

typedef double MIENXTxWSxMLd_plate_map_data_z[0x191][0x641];

typedef struct
{
    MIENXTxWSxMLd_plate_map_data_y y;
    MIENXTxWSxMLd_plate_map_data_z z;
} MIENXTxWSxMLd_plate_map_data;

typedef struct
{
    double start_x;
    double interval_x;
    int table_len_x;
    double start_y;
    double interval_y;
    int table_len_y;
    MIENXTxWSxMLd_plate_map_sensor_enum sensor;
    MIENXTxWSxMLd_plate_map_data map_data;
} MIENXTxWSxMLd_plate_map_mc_struct;

typedef double MIENXTxWSxMLd_passage_map_data_y1[0x29][0x641];

typedef double MIENXTxWSxMLd_passage_map_data_z1[0x29][0x641];

typedef double MIENXTxWSxMLd_passage_map_data_y2[0x29][0x641];

typedef double MIENXTxWSxMLd_passage_map_data_z2[0x29][0x641];

typedef double MIENXTxWSxMLd_passage_map_data_y3[0x29][0x641];

typedef double MIENXTxWSxMLd_passage_map_data_z3[0x29][0x641];

typedef double MIENXTxWSxMLd_passage_map_data_y4[0x29][0x641];

typedef double MIENXTxWSxMLd_passage_map_data_z4[0x29][0x641];

typedef struct
{
    MIENXTxWSxMLd_passage_map_data_y1 y1;
    MIENXTxWSxMLd_passage_map_data_z1 z1;
    MIENXTxWSxMLd_passage_map_data_y2 y2;
    MIENXTxWSxMLd_passage_map_data_z2 z2;
    MIENXTxWSxMLd_passage_map_data_y3 y3;
    MIENXTxWSxMLd_passage_map_data_z3 z3;
    MIENXTxWSxMLd_passage_map_data_y4 y4;
    MIENXTxWSxMLd_passage_map_data_z4 z4;
} MIENXTxWSxMLd_passage_map_data;

typedef struct
{
    double start_x;
    double interval_x;
    int table_len_x;
    double start_y;
    double interval_y;
    int table_len_y;
    MIENXTxWSxMLd_passage_map_data map_data;
} MIENXTxWSxMLd_passage_map_mc_struct;

typedef double MIENXTxWSxMLd_grid_map_data_x[0x191][0x191];

typedef double MIENXTxWSxMLd_grid_map_data_y[0x191][0x191];

typedef double MIENXTxWSxMLd_grid_map_data_z[0x191][0x191];

typedef double MIENXTxWSxMLd_grid_map_data_rx[0x191][0x191];

typedef double MIENXTxWSxMLd_grid_map_data_ry[0x191][0x191];

typedef double MIENXTxWSxMLd_grid_map_data_rz[0x191][0x191];

typedef struct
{
    MIENXTxWSxMLd_grid_map_data_x x;
    MIENXTxWSxMLd_grid_map_data_y y;
    MIENXTxWSxMLd_grid_map_data_z z;
    MIENXTxWSxMLd_grid_map_data_rx rx;
    MIENXTxWSxMLd_grid_map_data_ry ry;
    MIENXTxWSxMLd_grid_map_data_rz rz;
} MIENXTxWSxMLd_grid_map_data;

typedef struct
{
    double start_x;
    double interval_x;
    int table_len_x;
    double start_y;
    double interval_y;
    int table_len_y;
    MIENXTxWSxMLd_grid_map_data map_data;
} MIENXTxWSxMLd_grid_map_mc_struct;

typedef double MIENXTxWSxMLd_to_table_struct_ref_y[0x537];

typedef double MIENXTxWSxMLd_to_table_struct_ref_z[0x537];

typedef struct
{
    double interval;
    double start;
    int table_len;
    MIENXTxWSxMLd_to_table_struct_ref_y ref_y;
    MIENXTxWSxMLd_to_table_struct_ref_z ref_z;
} MIENXTxWSxMLd_to_table_struct;

typedef struct
{
    double lower;
    double upper;
    double v;
    MIENXTxWSxMLd_to_table_struct table;
} MIENXTxWSxMLd_to_h_struct;

typedef struct
{
    double to_hy_x;
    double to_hy_y;
    double to_dhy_dx;
    double to_dhy_dy;
    double to_dhy_dz;
    double to_dhy_drx;
    double to_dhy_dry;
    double to_dhy_drz;
    double to_dhy_xdrx;
    double to_dhy_xdry;
    double to_dhy_xdrz;
    double to_dhy_ydrx;
    double to_dhy_ydry;
    double to_dhy_ydrz;
    double to_dhy_dzdrx;
    double to_dhy_dzdry;
    double to_dhy_drxdrx;
    double to_dhy_drydry;
    double to_dhy_drzdrz;
    double to_dhy_drxdry;
    double to_dhy_drxdrz;
    double to_dhy_drydrz;
    double to_dhz_dx;
    double to_dhz_dy;
    double to_dhz_dz;
    double to_dhz_drx;
    double to_dhz_dry;
    double to_dhz_drz;
    double to_dhz_xdrx;
    double to_dhz_xdry;
    double to_dhz_ydrx;
    double to_dhz_ydry;
    double to_dhz_drxdry;
    double to_dhz_dzdrx;
    double to_dhz_dzdry;
    double to_dhz_dzdrxdry;
} MIENXTxWSxMLd_to_estimate_struct;

typedef struct
{
    double dhy_dT;
    double dhz_dT;
} MIENXTxWSxMLd_to_temp_ff_struct;

typedef struct
{
    bool possible;
    MIENXTxWSxMLd_to_h_struct h_x;
    MIENXTxWSxMLd_to_h_struct h_y;
    MIENXTxWSxMLd_to_estimate_struct estimate;
    bool use_h_y;
    MIENXTxWSxMLd_to_temp_ff_struct temp_ff;
    MIENXTxWSxMLd_takeover_type_enum type;
} MIENXTxWSxMLd_to_area_struct;

typedef MIENXTxWSxMLd_to_area_struct MIENXTxWSxMLd_to_area_array[0xF][0x4];

typedef struct
{
    double width_x;
    double width_y;
    MIENXTxWSxMLd_sensor_combi_enum combi;
} MIENXTxWSxMLd_pe_area_xy_sub;

typedef MIENXTxWSxMLd_plate_enum MIENXTxWSxMLd_pe_area_struct_y_lt_names[0x4];

typedef MIENXTxWSxMLd_plate_enum MIENXTxWSxMLd_pe_area_struct_y_gt_names[0x4];

typedef struct
{
    MIENXTxWSxMLd_area_type_enum type;
    double y_lt;
    double y_gt;
    double y;
    MIENXTxWSxMLd_pe_area_struct_y_lt_names y_lt_names;
    MIENXTxWSxMLd_pe_area_struct_y_gt_names y_gt_names;
    double width_y;
    MIENXTxWSxMLd_sensor_combi_enum combi_lt;
    MIENXTxWSxMLd_sensor_combi_enum combi_gt;
    MIENXTxWSxMLd_pe_area_xy_sub y_lt_x_lt;
    MIENXTxWSxMLd_pe_area_xy_sub y_lt_x_gt;
    MIENXTxWSxMLd_pe_area_xy_sub y_gt_x_lt;
    MIENXTxWSxMLd_pe_area_xy_sub y_gt_x_gt;
    MIENXTxWSxMLd_pe_area_xy_sub x_lt;
    MIENXTxWSxMLd_pe_area_xy_sub x_gt;
    MIENXTxWSxMLd_sensor_combi_enum combi_y;
    double y_sign;
} MIENXTxWSxMLd_pe_area_struct;

typedef MIENXTxWSxMLd_pe_area_struct MIENXTxWSxMLd_pe_area_array[0xF];

typedef struct
{
    double y;
    MIENXTxWSxMLd_pe_area_xy_sub y_lt_x_lt;
    MIENXTxWSxMLd_pe_area_xy_sub y_lt_x_gt;
    MIENXTxWSxMLd_pe_area_xy_sub y_gt_x_lt;
    MIENXTxWSxMLd_pe_area_xy_sub y_gt_x_gt;
} MIENXTxWSxMLd_area_fading_params_struct;

typedef struct
{
    horvervect g_pe;
    double estimated_y;
    double estimated_z;
    double real_y;
    double real_z;
    double acc_x;
    double acc_y;
    double dT;
    int sensor;
    int area;
    timestamp time_stamp;
} MIENXTxWSxMLd_takeover_diag_struct;

typedef struct
{
    double nonortho;
    xyzvect origin;
} MIENXTxWSxMLd_hfmap_params_struct;

typedef double MIENXTxWSxMLd_V_matrix_v[0x4][0x4];

typedef struct
{
    MIENXTxWSxMLd_V_matrix_v v;
} MIENXTxWSxMLd_V_matrix;

typedef struct
{
    double gain;
    double z0;
} MIENXTxWSxMLd_hfmap_ref_2_struct;

typedef struct
{
    MIENXTxWSxMLd_hfmap_ref_2_struct x;
    MIENXTxWSxMLd_hfmap_ref_2_struct y;
} MIENXTxWSxMLd_hfmap_ref_etc_struct;

typedef double MIENXTxWSxMLd_ref_model_params_struct_hy_offset[0x4];

typedef MIENXTxWSxMLd_V_matrix MIENXTxWSxMLd_ref_model_params_struct_V[0x5];

typedef struct
{
    MIENXTxWSxMLd_ref_model_params_struct_hy_offset hy_offset;
    double Lz;
    MIENXTxWSxMLd_hfmap_ref_etc_struct enc_tilt_corr;
    MIENXTxWSxMLd_ref_model_params_struct_V V;
} MIENXTxWSxMLd_ref_model_params_struct;

typedef struct
{
    double y;
    double z;
} MIENXTxWSxMLd_encoder_drift_struct;

typedef MIENXTxWSxMLd_encoder_drift_struct MIENXTxWSxMLd_traversal_drift_struct_M2E_drift[0x4];

typedef MIENXTxWSxMLd_encoder_drift_struct MIENXTxWSxMLd_traversal_drift_struct_E2M_drift[0x4];

typedef struct
{
    MIENXTxWSxMLd_traversal_drift_struct_M2E_drift M2E_drift;
    MIENXTxWSxMLd_traversal_drift_struct_E2M_drift E2M_drift;
} MIENXTxWSxMLd_traversal_drift_struct;

typedef double MIENXTxWSxMLd_sensor_data_delay_struct_hy_vhy[0x4];

typedef struct
{
    MIENXTxWSxMLd_sensor_data_delay_struct_hy_vhy hy_vhy;
    double frequency;
} MIENXTxWSxMLd_sensor_data_delay_struct;

typedef struct
{
    double ddeltay_dpx_dot_dot;
    double ddeltaz_dpx_dot_dot;
    double ddeltay_dpy_dot_dot;
    double ddeltaz_dpy_dot_dot;
} MIENXTxWSxMLd_acceleration_feedforward_struct;

typedef struct
{
    double deltay;
    double deltaz;
} MIENXTxWSxMLd_inconsistency_struct;

typedef MIENXTxWSxMLd_inconsistency_struct MIENXTxWSxMLd_inconsistency_parameters_w[0x4];

typedef struct
{
    MIENXTxWSxMLd_inconsistency_parameters_w w;
} MIENXTxWSxMLd_inconsistency_parameters;

typedef struct
{
    double y;
    double z;
} MIENXTxWSxMLd_context_h_sensor_struct;

typedef MIENXTxWSxMLd_context_h_sensor_struct MIENXTxWSxMLd_context_h_struct_sensor[0x4];

typedef struct
{
    MIENXTxWSxMLd_context_h_struct_sensor sensor;
} MIENXTxWSxMLd_context_h_struct;

typedef struct
{
    MIENXTxWSxMLd_context_h_struct dh_dqx_dot_dot;
    MIENXTxWSxMLd_context_h_struct dh_dqy_dot_dot;
} MIENXTxWSxMLd_context_compliance_comp_struct;

typedef double MIENXTxWSxMLd_encoder_drift_correction_struct_y[0x4];

typedef double MIENXTxWSxMLd_encoder_drift_correction_struct_z[0x4];

typedef struct
{
    MIENXTxWSxMLd_encoder_drift_correction_struct_y y;
    MIENXTxWSxMLd_encoder_drift_correction_struct_z z;
} MIENXTxWSxMLd_encoder_drift_correction_struct;

typedef double MIENXTxWSxMLd_context_motion_dep_sensor_struct_Cyx[0x2];

typedef double MIENXTxWSxMLd_context_motion_dep_sensor_struct_Cyy[0x2];

typedef double MIENXTxWSxMLd_context_motion_dep_sensor_struct_Czx[0x2];

typedef double MIENXTxWSxMLd_context_motion_dep_sensor_struct_Czy[0x2];

typedef struct
{
    MIENXTxWSxMLd_context_motion_dep_sensor_struct_Cyx Cyx;
    MIENXTxWSxMLd_context_motion_dep_sensor_struct_Cyy Cyy;
    MIENXTxWSxMLd_context_motion_dep_sensor_struct_Czx Czx;
    MIENXTxWSxMLd_context_motion_dep_sensor_struct_Czy Czy;
} MIENXTxWSxMLd_context_motion_dep_sensor_struct;

typedef double MIENXTxWSxMLd_context_motion_dep_struct_vx[0x2];

typedef double MIENXTxWSxMLd_context_motion_dep_struct_vy[0x2];

typedef MIENXTxWSxMLd_context_motion_dep_sensor_struct MIENXTxWSxMLd_context_motion_dep_struct_sensor[0x4];

typedef struct
{
    MIENXTxWSxMLd_context_motion_dep_struct_vx vx;
    MIENXTxWSxMLd_context_motion_dep_struct_vy vy;
    MIENXTxWSxMLd_context_motion_dep_struct_sensor sensor;
} MIENXTxWSxMLd_context_motion_dep_struct;

typedef struct
{
    double gain;
    double zero_freq;
    double zero_damping;
    double pole_freq;
    double pole_damping;
} MIENXTxWSxMLd_filter_section_struct;

typedef struct
{
    bool enable;
    MIENXTxWSxMLd_filter_section_struct section1;
    MIENXTxWSxMLd_filter_section_struct section2;
} MIENXTxWSxMLd_filter_struct;

typedef struct
{
    MIENXTxWSxMLd_filter_struct z;
    MIENXTxWSxMLd_filter_struct rx;
    MIENXTxWSxMLd_filter_struct ry;
} MIENXTxWSxMLd_torsion_filters_struct;

typedef double MIENXTxWSxMLd_estimator_matrix_struct_v[0x4][0x4];

typedef struct
{
    MIENXTxWSxMLd_estimator_matrix_struct_v v;
} MIENXTxWSxMLd_estimator_matrix_struct;

typedef MIENXTxWSxMLd_estimator_matrix_struct MIENXTxWSxMLd_torsion_estimators_struct_T[0x5];

typedef struct
{
    MIENXTxWSxMLd_torsion_estimators_struct_T T;
} MIENXTxWSxMLd_torsion_estimators_struct;

typedef struct
{
    MIENXTxWSxMLd_torsion_estimators_struct estimator;
    MIENXTxWSxMLd_torsion_filters_struct filter;
} MIENXTxWSxMLd_torsion_struct;

typedef struct
{
    double b;
    double srx;
    double sry;
    double scale_corr;
} MIENXTxWSxMLd_defect_model_params_struct;

typedef short MIENXTxWSxMLd_defect_correction_struct_rx[0x4];

typedef short MIENXTxWSxMLd_defect_correction_struct_ry[0x4];

typedef struct
{
    MIENXTxWSxMLd_defect_correction_struct_rx rx;
    MIENXTxWSxMLd_defect_correction_struct_ry ry;
} MIENXTxWSxMLd_defect_correction_struct;

typedef struct
{
    int len;
    int max_len;
    MIENXTxWSxMLd_defect_correction_struct* array;
} MIENXTxWSxMLd_defect_correction_row;

typedef struct
{
    int len;
    int max_len;
    MIENXTxWSxMLd_defect_correction_row* array;
} MIENXTxWSxMLd_defect_correction_matrix;

typedef struct
{
    bool perform_correction;
    int n_rows;
    int n_cols;
    int start_x;
    int start_y;
    MIENXTxWSxMLd_defect_correction_matrix corrections;
} MIENXTxWSxMLd_defect_sensor_struct;

typedef struct
{
    int len;
    int max_len;
    MIENXTxWSxMLd_defect_sensor_struct* array;
} MIENXTxWSxMLd_defect_sensor_array;

typedef MIENXTxWSxMLd_defect_sensor_array MIENXTxWSxMLd_defect_array_sensor[0x4];

typedef struct
{
    MIENXTxWSxMLd_defect_array_sensor sensor;
} MIENXTxWSxMLd_defect_array;

typedef struct
{
    bool enable;
    MIENXTxWSxMLd_filter_section_struct x;
    MIENXTxWSxMLd_filter_section_struct y;
    MIENXTxWSxMLd_filter_section_struct z;
} MIENXTxWSxMLd_ra_notch_filters_struct;

typedef struct
{
    MIENXTxWSxMLd_ra_notch_filters_struct ara;
    MIENXTxWSxMLd_ra_notch_filters_struct lra;
} MIENXTxWSxMLd_ra_notch_filter_struct;

typedef struct
{
    double c0;
    double cx;
    double cxx;
    double cy;
    double cyy;
} MIENXTxWSxMLd_global_grid_frame_elem_struct;

typedef struct
{
    MIENXTxWSxMLd_global_grid_frame_elem_struct hor;
    MIENXTxWSxMLd_global_grid_frame_elem_struct ver;
} MIENXTxWSxMLd_global_grid_frame_side_struct;

typedef struct
{
    MIENXTxWSxMLd_global_grid_frame_side_struct expose;
    MIENXTxWSxMLd_global_grid_frame_side_struct measure;
} MIENXTxWSxMLd_global_grid_frame_struct;



#endif // _MIENXTxWSxMLd_TC_H_
