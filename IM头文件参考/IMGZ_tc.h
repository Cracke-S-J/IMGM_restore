/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMGZ
* 文件名称 : IMGZ_tc.h
* 概要描述 :
*	IM组件IMGZ数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMGZ_TC_H_
#define _IMGZ_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <base.h> 
#include <MIENXTxWS_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef char IMGZ_log_str[0x50];

typedef enum
{
    IMGZ_STEP_INITIALIZE = 1,
    IMGZ_STEP_FIRST_CYCLE = 2,
    IMGZ_STEP_SECOND_CYCLE = 3,
    IMGZ_STEP_WRAPUP = 4,
} IMGZ_step_enum;

typedef enum
{
    IMGZ_REF_MARK_OK = 0,
    IMGZ_REF_MARK_NOK = 1,
    IMGZ_REF_MARK_NONE = 2,
} IMGZ_ref_mark_status_enum;

typedef enum
{
    IMGZ_CALIBR_OK = 0,
    IMGZ_CALIBR_NOK = 1,
    IMGZ_CALIBR_RUNNING = 2,
    IMGZ_CALIBR_SKIPPED = 3,
    IMGZ_CALIBR_UNREACHABLE = 4,
    IMGZ_CALIBR_MC_ERROR = 5,
    IMGZ_CALIBR_NONE = 6,
    IMGZ_CALIBR_IDLE = 7,
} IMGZ_calibration_status_enum;

typedef enum
{
    IMGZ_GRIDPLATE_1 = 0,
    IMGZ_GRIDPLATE_2 = 1,
    IMGZ_GRIDPLATE_3 = 2,
    IMGZ_GRIDPLATE_4 = 3,
} IMGZ_gridplate_enum;

typedef struct
{
    bool do_chuck_1;
    bool do_chuck_2;
    bool do_m_side;
    bool do_e_side;
    bool use_default_refmark_pos;
} IMGZ_input_struct;

typedef struct
{
    MIENXTxWS_pass_trajectory_enum pass;
    xyzvect startJH;
    xyzvect endJH;
    horvervect startWS;
    horvervect endWS;
    xyzvect next_start_pos;
    int Quality;
} IMGZ_rm_pass_struct;

typedef IMGZ_rm_pass_struct IMGZ_rm_pass_array[0x8];

typedef IMGZ_rm_pass_array IMGZ_rm_search_struct_pass[0x4];

typedef struct
{
    IMGZ_rm_search_struct_pass pass;
} IMGZ_rm_search_struct;

typedef struct
{
    IMGZ_calibration_status_enum status;
    horvervect offset;
    double NO;
} IMGZ_rm_result_struct;

typedef struct
{
    horvervect offset;
    double NO;
} IMGZ_rm_status_struct;

typedef struct
{
    IMGZ_ref_mark_status_enum status;
    int Quality;
    horvervect pos_q;
    horvervect pos_pe;
} IMGZ_rm_pos_quality;

typedef IMGZ_rm_result_struct IMGZ_gridplate_result_struct_rm_result[0x8];

typedef IMGZ_rm_status_struct IMGZ_gridplate_result_struct_rm_old[0x8];

typedef IMGZ_rm_status_struct IMGZ_gridplate_result_struct_rm_new_old[0x8];

typedef IMGZ_rm_status_struct IMGZ_gridplate_result_struct_rm_default[0x8];

typedef IMGZ_rm_status_struct IMGZ_gridplate_result_struct_rm_new_default[0x8];

typedef xyzvect IMGZ_gridplate_result_struct_RM_JH_tool[0x8][0x2];

typedef xyzvect IMGZ_gridplate_result_struct_RM_JH_measured[0x8][0x2];

typedef IMGZ_rm_pos_quality IMGZ_gridplate_result_struct_RM1_new[0x8];

typedef horvervect IMGZ_gridplate_result_struct_RM1_old[0x8];

typedef horvervect IMGZ_gridplate_result_struct_RM1_default[0x8];

typedef horvervect IMGZ_gridplate_result_struct_RM1_new_old[0x8];

typedef horvervect IMGZ_gridplate_result_struct_RM1_new_default[0x8];

typedef IMGZ_rm_pos_quality IMGZ_gridplate_result_struct_RM2_new[0x8];

typedef horvervect IMGZ_gridplate_result_struct_RM2_old[0x8];

typedef horvervect IMGZ_gridplate_result_struct_RM2_default[0x8];

typedef horvervect IMGZ_gridplate_result_struct_RM2_new_old[0x8];

typedef horvervect IMGZ_gridplate_result_struct_RM2_new_default[0x8];

typedef struct
{
    IMGZ_gridplate_result_struct_rm_result rm_result;
    IMGZ_gridplate_result_struct_rm_old rm_old;
    IMGZ_gridplate_result_struct_rm_new_old rm_new_old;
    IMGZ_gridplate_result_struct_rm_default rm_default;
    IMGZ_gridplate_result_struct_rm_new_default rm_new_default;
    IMGZ_gridplate_result_struct_RM_JH_tool RM_JH_tool;
    IMGZ_gridplate_result_struct_RM_JH_measured RM_JH_measured;
    IMGZ_gridplate_result_struct_RM1_new RM1_new;
    IMGZ_gridplate_result_struct_RM1_old RM1_old;
    IMGZ_gridplate_result_struct_RM1_default RM1_default;
    IMGZ_gridplate_result_struct_RM1_new_old RM1_new_old;
    IMGZ_gridplate_result_struct_RM1_new_default RM1_new_default;
    IMGZ_gridplate_result_struct_RM2_new RM2_new;
    IMGZ_gridplate_result_struct_RM2_old RM2_old;
    IMGZ_gridplate_result_struct_RM2_default RM2_default;
    IMGZ_gridplate_result_struct_RM2_new_old RM2_new_old;
    IMGZ_gridplate_result_struct_RM2_new_default RM2_new_default;
} IMGZ_gridplate_result_struct;

typedef IMGZ_gridplate_result_struct IMGZ_chuck_result_array[0x2];

typedef struct
{
    IMGZ_chuck_result_array chuck;
} IMGZ_result_struct;



#endif // _IMGZ_TC_H_
