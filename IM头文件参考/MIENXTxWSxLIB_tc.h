/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : MI
* 模块名称 : MIENXTxWSxLIB
* 文件名称 : MIENXTxWSxLIB_tc.h
* 概要描述 :
*	MI组件MIENXTxWSxLIB数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _MIENXTxWSxLIB_TC_H_
#define _MIENXTxWSxLIB_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <WPxCHUCK_tc.h> 
#include <MIENXTxWS_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    MIENXTxWSxLIB_VALID_OK = 0,
    MIENXTxWSxLIB_VALID_SERIAL_NO = 1,
    MIENXTxWSxLIB_VALID_CRC = 2,
    MIENXTxWSxLIB_VALID_UNSUPPORTED = 3,
    MIENXTxWSxLIB_VALID_UNSUPPORTED_HFMAP_VERSION = 4,
} MIENXTxWSxLIB_valid_enum;

typedef char MIENXTxWSxLIB_single_hf_map_info_filename[0x80];

typedef char MIENXTxWSxLIB_single_hf_map_info_map_version[0x80];

typedef char MIENXTxWSxLIB_single_hf_map_info_plate_serial[0x80];

typedef char MIENXTxWSxLIB_single_hf_map_info_comment[0x80];

typedef struct
{
    MIENXTxWS_grid_plate_enum plate_id;
    MIENXTxWSxLIB_single_hf_map_info_filename filename;
    MIENXTxWSxLIB_single_hf_map_info_map_version map_version;
    MIENXTxWSxLIB_single_hf_map_info_plate_serial plate_serial;
    MIENXTxWSxLIB_single_hf_map_info_comment comment;
    timestamp creation_date;
    int hfmap_version;
    int extra_version;
    int dummy_version;
    int crc32;
} MIENXTxWSxLIB_single_hf_map_info;

typedef MIENXTxWSxLIB_single_hf_map_info MIENXTxWSxLIB_info_struct_all_maps[0x8];

typedef struct
{
    MIENXTxWSxLIB_info_struct_all_maps all_maps;
    int header_version;
    int extra_version;
    int dummy_version;
} MIENXTxWSxLIB_info_struct;

typedef char MIENXTxWSxLIB__unpack_hf_file_filename[0x80];



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int MIENXTxWSxLIB_unpack_hf_file(const MIENXTxWSxLIB__unpack_hf_file_filename *filename,
	MIENXTxWSxLIB_info_struct *hf_maps);
int MIENXTxWSxLIB_validate_hf_file(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MIENXTxWSxLIB_single_hf_map_info *map,
	MIENXTxWSxLIB_valid_enum *valid);
int MIENXTxWSxLIB_remove_unpacked_files(void);
int MIENXTxWSxLIB_remove_all_unpacked_files(void);



#endif // _MIENXTxWSxLIB_TC_H_
