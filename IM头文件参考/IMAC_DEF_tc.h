/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMAC_DEF
* 文件名称 : IMAC_DEF_tc.h
* 概要描述 :
*	IM组件IMAC_DEF数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMAC_DEF_TC_H_
#define _IMAC_DEF_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <MIENXTxWSxLIB_tc.h> 
#include <MIENXTxWS_tc.h> 




/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    IMAC_DEF_PLATE_ALL = 0,
    IMAC_DEF_PLATE_ALL_AT_EXPOSE = 1,
    IMAC_DEF_PLATE_ALL_AT_MEASURE = 2,
    IMAC_DEF_PLATE_E1 = 3,
    IMAC_DEF_PLATE_E2 = 4,
    IMAC_DEF_PLATE_E3 = 5,
    IMAC_DEF_PLATE_E4 = 6,
    IMAC_DEF_PLATE_M1 = 7,
    IMAC_DEF_PLATE_M2 = 8,
    IMAC_DEF_PLATE_M3 = 9,
    IMAC_DEF_PLATE_M4 = 10,
} IMAC_DEF_plate_enum;

typedef enum
{
    IMAC_DEF_CHUCK_BOTH = 0,
    IMAC_DEF_CHUCK_1 = 1,
    IMAC_DEF_CHUCK_2 = 2,
} IMAC_DEF_chuck_enum;

typedef enum
{
    IMAC_DEF_NA = 0,
    IMAC_DEF_OK = 1,
    IMAC_DEF_NOK = 2,
} IMAC_DEF_result_enum;

typedef struct
{
    bool set_plate_sn;
    bool copy_hf_map;
    bool load_validate_new_hf_map;
    bool send_hf_map_to_goab;
    bool toggle_map_active;
    bool finalize;
} IMAC_DEF_detailed_actions_struct;

typedef char IMAC_DEF_map_info_struct_map_date[0x100];

typedef char IMAC_DEF_map_info_struct_map_time[0x100];

typedef char IMAC_DEF_map_info_struct_map_active[0x100];

typedef char IMAC_DEF_map_info_struct_map_comment[0x100];

typedef struct
{
    int plate_sn;
    int jh_plate_id;
    int map_sn;
    IMAC_DEF_map_info_struct_map_date map_date;
    IMAC_DEF_map_info_struct_map_time map_time;
    IMAC_DEF_map_info_struct_map_active map_active;
    IMAC_DEF_map_info_struct_map_comment map_comment;
} IMAC_DEF_map_info_struct;

typedef struct
{
    MIENXTxWS_plate_context_struct plate_context;
    MIENXTxWS_hf_map_context_struct hf_map_context;
} IMAC_DEF_mc_backup_struct;

typedef char IMAC_DEF_input_struct_hf_map_file[0x100];

typedef char IMAC_DEF_input_struct_hf_map_wildcard[0x100];

typedef int IMAC_DEF_input_struct_new_plate_sn[0x8];

typedef IMAC_DEF_map_info_struct IMAC_DEF_input_struct_goab_map[0x2][0x8];

typedef struct
{
    bool customer_location;
    bool current_map_info_trigger;
    IMAC_DEF_plate_enum grid_plate;
    IMAC_DEF_chuck_enum chuck;
    IMAC_DEF_input_struct_hf_map_file hf_map_file;
    bool auto_resolve_hf_map_file;
    IMAC_DEF_input_struct_hf_map_wildcard hf_map_wildcard;
    IMAC_DEF_detailed_actions_struct detailed_actions;
    IMAC_DEF_input_struct_new_plate_sn new_plate_sn;
    IMAC_DEF_input_struct_goab_map goab_map;
} IMAC_DEF_input_struct;

typedef MIENXTxWSxLIB_single_hf_map_info IMAC_DEF_result_struct_new_map[0x8];

typedef IMAC_DEF_map_info_struct IMAC_DEF_result_struct_new_goab_map[0x2][0x8];

typedef char IMAC_DEF_result_struct_fail_reason[0x100];

typedef struct
{
    IMAC_DEF_result_struct_new_map new_map;
    IMAC_DEF_result_struct_new_goab_map new_goab_map;
    IMAC_DEF_result_struct_fail_reason fail_reason;
    IMAC_DEF_result_enum goab_cross_check;
} IMAC_DEF_result_struct;

typedef struct
{
    IMAC_DEF_input_struct input;
    IMAC_DEF_result_struct result;
} IMAC_DEF_data_struct;



#endif // _IMAC_DEF_TC_H_
