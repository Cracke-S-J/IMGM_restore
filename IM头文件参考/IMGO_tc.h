/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMGO
* 文件名称 : IMGO_tc.h
* 概要描述 :
*	IM组件IMGO数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMGO_TC_H_
#define _IMGO_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <base.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    IMGO_CHUCK_1 = 0,
    IMGO_CHUCK_2 = 1,
    IMGO_CHUCK_BOTH = 2,
} IMGO_chuck_enum;

typedef enum
{
    IMGO_DIRECTION_X = 0,
    IMGO_DIRECTION_Y = 1,
    IMGO_DIRECTION_BOTH = 2,
} IMGO_direction_enum;

typedef struct
{
    bool P1;
    bool P2;
    bool P3;
    bool P4;
    IMGO_chuck_enum chuck_id;
    IMGO_direction_enum direction;
} IMGO_side_config;

typedef char IMGO_input_struct_log_name[0x100];

typedef struct
{
    IMGO_input_struct_log_name log_name;
    bool interactive_update_map;
    bool process_only;
    double X1;
    double X2;
    double Y1;
    double Y2;
    double pitch;
    int nr_repetitions;
    IMGO_side_config M;
    IMGO_side_config E;
    int used_sample_divider;
} IMGO_input_struct;

typedef struct
{
    int dummy;
} IMGO_verification_struct;

typedef enum
{
    IMGO_RESULT_OK = 0,
    IMGO_RESULT_NOK = 1,
    IMGO_RESULT_NONE = 2,
} IMGO_result_enum;

typedef struct
{
    int nr_defects;
    int nr_oos_defects;
    int spec;
    bool valid;
} IMGO_result_summary_defect_sensor_area;

typedef struct
{
    int nr_defects;
    int nr_oos_defects;
    bool valid;
} IMGO_result_summary_defect_nospec_sensor_area;

typedef struct
{
    IMGO_result_summary_defect_sensor_area total;
    IMGO_result_summary_defect_nospec_sensor_area ha;
    IMGO_result_summary_defect_nospec_sensor_area nha;
} IMGO_result_summary_defect_sensor;

typedef IMGO_result_summary_defect_sensor IMGO_result_summary_defect_chuck_func_sensor[0x4];

typedef struct
{
    IMGO_result_summary_defect_chuck_func_sensor sensor;
} IMGO_result_summary_defect_chuck_func;

typedef IMGO_result_summary_defect_chuck_func IMGO_result_summary_defect_func_array[0x2];

typedef IMGO_result_summary_defect_func_array IMGO_result_summary_defect_array[0x2];

typedef struct
{
    double max_pos_error;
    double spec;
    bool valid;
} IMGO_result_validation_summary_sensor_area;

typedef struct
{
    IMGO_result_validation_summary_sensor_area ha;
    IMGO_result_validation_summary_sensor_area nha;
} IMGO_result_validation_summary_sensor;

typedef IMGO_result_validation_summary_sensor IMGO_result_validation_summary_chuck_func_sensor[0x4];

typedef struct
{
    IMGO_result_validation_summary_chuck_func_sensor sensor;
} IMGO_result_validation_summary_chuck_func;

typedef IMGO_result_validation_summary_chuck_func IMGO_result_validation_summary_func_array[0x2];

typedef IMGO_result_validation_summary_func_array IMGO_result_validation_summary_array[0x2];

typedef struct
{
    double worst_line_quality;
    double spec;
    bool valid;
} IMGO_measurement_quality_summary_chuck_func;

typedef IMGO_measurement_quality_summary_chuck_func IMGO_measurement_quality_summary_func_array[0x2];

typedef IMGO_measurement_quality_summary_func_array IMGO_measurement_quality_summary_array[0x2];

typedef struct
{
    int defect_nr;
    double max_pos_error;
    xyvect start_pos;
    xyvect size;
} IMGO_compact_result_defect_sensor;

typedef struct
{
    int len;
    int max_len;
    IMGO_compact_result_defect_sensor* array;
} IMGO_compact_result_defect_sensor_array;

typedef struct
{
    IMGO_compact_result_defect_sensor_array ha_oos;
    IMGO_compact_result_defect_sensor_array ha_is;
    IMGO_compact_result_defect_sensor_array la_oos;
    IMGO_compact_result_defect_sensor_array la_is;
} IMGO_compact_result_defect_sensor_all;

typedef IMGO_compact_result_defect_sensor_all IMGO_compact_result_defect_chuck_func_sensor[0x4];

typedef struct
{
    IMGO_compact_result_defect_chuck_func_sensor sensor;
} IMGO_compact_result_defect_chuck_func;

typedef IMGO_compact_result_defect_chuck_func IMGO_compact_result_defect_func_array[0x2];

typedef IMGO_compact_result_defect_func_array IMGO_compact_result_defect_array[0x2];

typedef struct
{
    double maximum;
    double mean;
    double variance;
    double rms;
    xyvect center_of_mass;
} IMGO_result_defect_statistics;

typedef enum
{
    IMGO_DEFECT_DETECTED = 0,
    IMGO_DEFECT_UNDETECTED = 1,
} IMGO_defect_type_enum;

typedef struct
{
    int defect_nr;
    IMGO_defect_type_enum defect_type;
    bool perform_correction;
    bool accepted_correction;
    bool high_accuracy_area;
    double max_pos_error;
    xyvect start_pos;
    xyvect phys_pos;
    xyvect size;
    xyvect phys_size;
} IMGO_result_defect_sensor;

typedef struct
{
    IMGO_result_defect_statistics hss_rx_a;
    IMGO_result_defect_statistics hss_rx_b;
    IMGO_result_defect_statistics hss_ry_a;
    IMGO_result_defect_statistics hss_ry_b;
} IMGO_result_defect_spot_sensor;

typedef struct
{
    int len;
    int max_len;
    IMGO_result_defect_sensor* array;
} IMGO_result_defect_sensor_array;

typedef struct
{
    int len;
    int max_len;
    IMGO_result_defect_spot_sensor* array;
} IMGO_result_defect_spot_sensor_array;

typedef IMGO_result_defect_sensor_array IMGO_result_defect_chuck_func_array_sensor[0x4];

typedef IMGO_result_defect_spot_sensor_array IMGO_result_defect_chuck_func_array_spot_sensor[0x4];

typedef struct
{
    double ha_remaining_position_error;
    double nha_remaining_position_error;
    double worst_line_quality;
    bool too_many_defects;
    IMGO_result_enum result;
    IMGO_result_defect_chuck_func_array_sensor sensor;
    IMGO_result_defect_chuck_func_array_spot_sensor spot_sensor;
} IMGO_result_defect_chuck_func_array;

typedef IMGO_result_defect_chuck_func_array IMGO_result_defect_func_array[0x2];

typedef IMGO_result_defect_func_array IMGO_result_defect_array[0x2];

typedef struct
{
    double ha_remaining_position_error;
    double nha_remaining_position_error;
    double worst_line_quality;
    int nr_defects;
} IMGO_result_side_summary;

typedef char IMGO_chuck_plate_graph_name[0x100];

typedef IMGO_chuck_plate_graph_name IMGO_chuck_graph_name[0x8];

typedef char IMGO_filenames_struct_logfile_name[0x100];

typedef char IMGO_filenames_struct_detailreport_name[0x100];

typedef char IMGO_filenames_struct_sshot_name[0x100];

typedef IMGO_chuck_graph_name IMGO_filenames_struct_chuck_graph_files[0x2];

typedef struct
{
    IMGO_filenames_struct_logfile_name logfile_name;
    IMGO_filenames_struct_detailreport_name detailreport_name;
    IMGO_filenames_struct_sshot_name sshot_name;
    IMGO_filenames_struct_chuck_graph_files chuck_graph_files;
} IMGO_filenames_struct;

typedef IMGO_result_enum IMGO_result_struct_acquisition_result[0x2][0x2];

typedef bool IMGO_result_struct_user_interaction_required[0x3];

typedef struct
{
    IMGO_filenames_struct filenames;
    IMGO_result_side_summary spec;
    IMGO_result_side_summary expose;
    IMGO_result_side_summary measure;
    bool too_many_defects;
    IMGO_result_enum result;
    IMGO_result_struct_acquisition_result acquisition_result;
    IMGO_result_validation_summary_array result_validation_summary;
    IMGO_measurement_quality_summary_array measurement_quality_summary;
    IMGO_result_summary_defect_array defects_summary;
    IMGO_compact_result_defect_array compact_results;
    IMGO_result_defect_array result_defect_array;
    IMGO_result_struct_user_interaction_required user_interaction_required;
} IMGO_result_struct;

typedef struct
{
    IMGO_input_struct input;
    IMGO_result_struct result;
    IMGO_verification_struct verification;
} IMGO_total_struct;



#endif // _IMGO_TC_H_
