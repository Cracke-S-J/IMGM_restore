/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMZQ
* 文件名称 : IMZQ_tc.h
* 概要描述 :
*	IM组件IMZQ数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMZQ_TC_H_
#define _IMZQ_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    IMZQ_STEP_INPUT = 1,
    IMZQ_STEP_INITIALIZE_AND_CHECK = 2,
    IMZQ_STEP_SHUTTER_AND_DARK_TEST = 3,
    IMZQ_STEP_INTENSITY_TEST = 4,
    IMZQ_STEP_ELECTRICAL_TEST = 5,
    IMZQ_STEP_STABILITY_TEST = 6,
    IMZQ_STEP_TERMINATE = 7,
} IMZQ_step_enum;

typedef enum
{
    IMZQ_NA = 0,
    IMZQ_OK = 1,
    IMZQ_NOK = 2,
} IMZQ_ok_nok_enum;

typedef enum
{
    IMZQ_CHUCK_1 = 0,
    IMZQ_CHUCK_2 = 1,
} IMZQ_chuck_enum;

typedef enum
{
    IMZQ_PSD_TYPE_9V35 = 0,
    IMZQ_PSD_TYPE_16V07 = 1,
} IMZQ_psd_type_enum;

typedef struct
{
    bool shutter;
    bool intensity;
    bool electrical;
    bool stability;
} IMZQ_input_tests_struct;

typedef struct
{
    bool e1;
    bool e2;
    bool e3;
    bool m1;
    bool m2;
    bool m3;
} IMZQ_zero_sensors_struct;

typedef char IMZQ_input_struct_operator[0x50];

typedef char IMZQ_input_struct_serial[0x50];

typedef struct
{
    bool interactive_mode;
    IMZQ_input_struct_operator operator;
    IMZQ_input_struct_serial serial;
    IMZQ_psd_type_enum psd_type;
    IMZQ_input_tests_struct test;
    IMZQ_zero_sensors_struct zero_sensor;
} IMZQ_input_struct;

typedef struct
{
    double u1;
    double u2;
    double v1;
    double v2;
    double min;
    double max;
    IMZQ_ok_nok_enum result;
} IMZQ_level_criterion_struct;

typedef IMZQ_level_criterion_struct IMZQ_shutter_dark_result_struct_dark[0x6];

typedef IMZQ_level_criterion_struct IMZQ_shutter_dark_result_struct_nondark[0x6];

typedef struct
{
    IMZQ_shutter_dark_result_struct_dark dark;
    IMZQ_shutter_dark_result_struct_nondark nondark;
    IMZQ_ok_nok_enum result;
} IMZQ_shutter_dark_result_struct;

typedef struct
{
    double val;
    double u_avg;
    double v_avg;
    double u_v;
    double u_v_max;
    double u1;
    double u2;
    double v1;
    double v2;
    double min;
    double max;
    IMZQ_ok_nok_enum result;
} IMZQ_intensity_criterion_struct;

typedef IMZQ_intensity_criterion_struct IMZQ_intensity_result_struct_zs[0x6];

typedef struct
{
    IMZQ_intensity_result_struct_zs zs;
    IMZQ_ok_nok_enum result;
} IMZQ_intensity_result_struct;

typedef char IMZQ_electrical_result_struct_instruction[0x50];

typedef IMZQ_ok_nok_enum IMZQ_electrical_result_struct_zs[0x6];

typedef struct
{
    IMZQ_electrical_result_struct_instruction instruction;
    IMZQ_electrical_result_struct_zs zs;
    IMZQ_ok_nok_enum result;
} IMZQ_electrical_result_struct;

typedef char IMZQ_stability_result_struct_filename[0x50];

typedef char IMZQ_stability_result_struct_status1[0x50];

typedef char IMZQ_stability_result_struct_status2[0x50];

typedef struct
{
    IMZQ_stability_result_struct_filename filename;
    IMZQ_stability_result_struct_status1 status1;
    IMZQ_stability_result_struct_status2 status2;
    IMZQ_ok_nok_enum result;
} IMZQ_stability_result_struct;

typedef struct
{
    bool zodiac_present;
    IMZQ_shutter_dark_result_struct shutter_dark;
    IMZQ_intensity_result_struct intensity;
    IMZQ_electrical_result_struct electrical;
    IMZQ_stability_result_struct stability;
} IMZQ_result_struct;



#endif // _IMZQ_TC_H_
