/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMCC
* 文件名称 : IMCC_tc.h
* 概要描述 :
*	IM组件IMCC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMCC_TC_H_
#define _IMCC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <base.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    IMCC_STEP_INITIALIZE_TEST = 1,
    IMCC_STEP_INITIALIZE_RETICLE_STAGE = 2,
    IMCC_STEP_DETERMINE_NEW_GAIN_AND_OFFSET = 3,
    IMCC_STEP_CHECK_NEW_GAIN_AND_OFFSET = 4,
    IMCC_STEP_TERMINATE = 5,
} IMCC_step_enum;

typedef enum
{
    IMCC_NO_RESULTS = 1,
    IMCC_BACKUP_MCS_RESULTS = 2,
    IMCC_RANGE_CHECK_RESULTS = 3,
    IMCC_CALIBRATION_RESULTS = 4,
    IMCC_CHECK_GAIN_RESULTS = 5,
} IMCC_result_reached;

typedef enum
{
    IMCC_IDLE = 0,
    IMCC_SKIPPED = 1,
    IMCC_STARTED = 2,
    IMCC_STOPPED = 3,
    IMCC_READY = 4,
    IMCC_FAILED = 5,
} IMCC_state_enum;

typedef enum
{
    IMCC_OK = 0,
    IMCC_NOK = 1,
} IMCC_result_enum;

typedef struct
{
    int input_value;
} IMCC_input_struct;

typedef struct
{
    double lower_limit;
    double upper_limit;
} IMCC_limits;

typedef struct
{
    double converted;
    int raw;
    bool valid;
} IMCC_z_diff_sns_parms_struct;

typedef struct
{
    double raw_gain;
    double raw_offset;
    int bits;
    int sens_val;
    double converted_val;
} IMCC_z_cap_sns_parms_struct;

typedef struct
{
    double pos_before;
    double pos_after;
    double moved;
    IMCC_result_enum within_spec;
} IMCC_check_z_cap_struct;

typedef struct
{
    double wl;
    double wq;
    double wr;
} IMCC_linear_quad_wedges_struct;

typedef IMCC_z_cap_sns_parms_struct IMCC_result_struct_z_cap_val_old[0x4];

typedef IMCC_z_cap_sns_parms_struct IMCC_result_struct_z_cap_val_new[0x4];

typedef IMCC_check_z_cap_struct IMCC_result_struct_z_cap_check[0x4];

typedef struct
{
    bool within_spec;
    bool mcs_backuped;
    IMCC_result_struct_z_cap_val_old z_cap_val_old;
    IMCC_result_struct_z_cap_val_new z_cap_val_new;
    zrxryvect metro_old;
    IMCC_linear_quad_wedges_struct metro_wedges_old;
    zrxryvect metro_new;
    IMCC_linear_quad_wedges_struct metro_wedges_new;
    IMCC_result_struct_z_cap_check z_cap_check;
    bool preconditions_ok;
    bool mcs_saved;
    IMCC_limits limits_before;
    IMCC_limits limits_moved;
} IMCC_result_struct;



#endif // _IMCC_TC_H_
