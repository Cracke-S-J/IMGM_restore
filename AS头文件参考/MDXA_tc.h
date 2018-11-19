/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : MD
* 模块名称 : MDXA
* 文件名称 : MDXA_tc.h
* 概要描述 :
*	MD组件MDXA数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _MDXA_TC_H_
#define _MDXA_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <base.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    MDXA_ALIGNMENT_STEP_COARSE = 0,
    MDXA_ALIGNMENT_STEP_FINE = 1,
    MDXA_ALIGNMENT_STEP_EXT_FINE = 2,
} MDXA_alignment_step_enum;

typedef enum
{
    MDXA_SCAN_TYPE_PERIODIC = 0,
    MDXA_SCAN_TYPE_TEMPLATE = 1,
    MDXA_SCAN_TYPE_ZIGZAG = 2,
    MDXA_SCAN_TYPE_MULTIPER = 3,
    MDXA_SCAN_TYPE_OBLIQUE = 4,
    MDXA_SCAN_TYPE_DUAL_PERIODIC = 5,
} MDXA_scan_type_enum;

typedef enum
{
    MDXA_MARK_USAGE_COWA = 0,
    MDXA_MARK_USAGE_FIWA = 1,
    MDXA_MARK_USAGE_COMBINED = 2,
} MDXA_mark_usage_enum;

typedef enum
{
    MDXA_DIRECTION_X = 0,
    MDXA_DIRECTION_Y = 1,
    MDXA_DIRECTION_XY = 2,
} MDXA_direction_enum;

typedef char MDXA_mark_type_string[0xC];

typedef char MDXA_variant_id_string[0x14];

typedef char MDXA_cluster_id_string[0x24];

typedef MDXA_mark_type_string MDXA_mark_type_list_items[0x2BC];

typedef struct
{
    int nr_of_items;
    MDXA_mark_type_list_items items;
} MDXA_mark_type_list;

typedef MDXA_variant_id_string MDXA_variant_id_list_items[0x8];

typedef struct
{
    int nr_of_items;
    MDXA_variant_id_list_items items;
} MDXA_variant_id_list;

typedef MDXA_mark_type_string MDXA_peer_mark_type_list_items[0xA];

typedef struct
{
    int nr_of_items;
    MDXA_peer_mark_type_list_items items;
} MDXA_peer_mark_type_list;

typedef struct
{
    xyvect offset;
    xyvect size;
} MDXA_geometry_struct;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int MDXA_get_mark_types(MDXA_mark_type_list *mark_type_list_p);
int MDXA_mark_available(const MDXA_mark_type_string *mark_type,
	bool *available_p);
int MDXA_get_mark_cluster(const MDXA_mark_type_string *mark_type,
	const MDXA_mark_usage_enum *mark_usage,
	MDXA_cluster_id_string *cluster_id_p);
int MDXA_get_peer_mark_types(const MDXA_mark_type_string *mark_type,
	MDXA_peer_mark_type_list *mark_type_list_p);
int MDXA_get_variant_ids(const MDXA_mark_type_string *mark_type,
	MDXA_variant_id_list *variant_id_list_p);
int MDXA_get_scan_type(const MDXA_mark_type_string *mark_type,
	const MDXA_alignment_step_enum *alignment_step,
	MDXA_scan_type_enum *scan_type_p);
int MDXA_check_mark_usage(const MDXA_mark_type_string *mark_type,
	const MDXA_mark_usage_enum *mark_usage,
	bool *is_useable_p);
int MDXA_check_mark_suitable_for_step(const MDXA_mark_type_string *mark_type,
	const MDXA_alignment_step_enum *alignment_step,
	bool *is_suitable_p);
int MDXA_check_pre_align_mark(const MDXA_mark_type_string *mark_type,
	bool *is_pre_align_mark_p);
int MDXA_check_scribelane_mark(const MDXA_mark_type_string *mark_type,
	bool *is_scribelane_mark_p);
int MDXA_get_direction(const MDXA_mark_type_string *mark_type,
	MDXA_direction_enum *direction_p);
int MDXA_check_80_88_layout(const MDXA_mark_type_string *mark_type,
	bool *is_80_88_layout_p);
int MDXA_get_mark_geometry(const MDXA_mark_type_string *mark_type,
	MDXA_geometry_struct *geometry_p);



#endif // _MDXA_TC_H_
