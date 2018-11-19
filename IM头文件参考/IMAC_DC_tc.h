/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMAC_DC
* 文件名称 : IMAC_DC_tc.h
* 概要描述 :
*	IM组件IMAC_DC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMAC_DC_TC_H_
#define _IMAC_DC_TC_H_

/*------------------------------- Includes -------------------------------*/
//extern MIENxEVPxWSxENC_HFMAP_TYPE  DETRENDED  //36, 38



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    IMAC_DC_PRODUCER_JH = 0,
    IMAC_DC_PRODUCER_ASML = 1,
} IMAC_DC_producer_enum;

typedef char IMAC_DC_dc_struct_filter_version[0xC];

typedef char IMAC_DC_dc_struct_manf_directory[0x100];

typedef struct
{
    IMAC_DC_producer_enum file_producer;
    IMAC_DC_dc_struct_filter_version filter_version;
    double min_free_space;
    bool allow_any_hf_map_selection;
    IMAC_DC_dc_struct_manf_directory manf_directory;
} IMAC_DC_dc_struct;



#endif // _IMAC_DC_TC_H_
