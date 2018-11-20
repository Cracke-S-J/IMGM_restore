/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : ME
* 模块名称 : MEXAxGL
* 文件名称 : MEXAxGL_tc.h
* 概要描述 :
*	ME组件MEXAxGL数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _MEXAxGL_TC_H_
#define _MEXAxGL_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    varstring tag;
    varstring category;
    varstring level;
    varstring format;
    varstring source_id;
} MEXAxGL_conf_el_t;

typedef struct
{
    int len;
    int max_len;
    MEXAxGL_conf_el_t* array;
} MEXAxGL_MDL_conf_t;

typedef enum
{
    MEXAxGL_LEVEL_OFF = 0,
    MEXAxGL_LEVEL_SEQUENCE = 1,
    MEXAxGL_LEVEL_SUMMARY = 2,
    MEXAxGL_LEVEL_DETAILED = 3,
    MEXAxGL_LEVEL_DEFAULT = 4,
    MEXAxGL_LEVEL_EXTENDED = 5,
} MEXAxGL_level;

typedef struct
{
    MEXAxGL_level mcs;
    MEXAxGL_level lot;
    MEXAxGL_level AA_scan;
    MEXAxGL_level LS_scan;
    MEXAxGL_level SA_model;
    MEXAxGL_level WA_model;
    MEXAxGL_level PA_model;
    MEXAxGL_level WM_model;
    MEXAxGL_level PDGC_model;
    MEXAxGL_level GLC_model;
    MEXAxGL_level PDOC_model;
} MEXAxGL_measure_state;

typedef struct
{
    MEXAxGL_level mcs;
    MEXAxGL_level lot;
    MEXAxGL_level wafer;
    MEXAxGL_level IS_scan;
    MEXAxGL_level CS_scan;
    MEXAxGL_level ZS_scan;
    MEXAxGL_level SS_scan;
    MEXAxGL_level US_scan;
    MEXAxGL_level EX_scan;
    MEXAxGL_level RA_model;
    MEXAxGL_level LOCO_model;
    MEXAxGL_level SYCO_model;
    MEXAxGL_level SFPM_model;
    MEXAxGL_level ZP_scan;
    MEXAxGL_level LH_scan;
    MEXAxGL_level SLM;
} MEXAxGL_expose_state;

typedef struct
{
    MEXAxGL_measure_state measure;
    MEXAxGL_expose_state expose;
} MEXAxGL_state;

typedef enum
{
    MEXAxGL_CAT_MEASURE_MCS_SEQUENCE = 0,
    MEXAxGL_CAT_MEASURE_MCS_SUMMARY = 1,
    MEXAxGL_CAT_MEASURE_MCS_DETAILED = 2,
    MEXAxGL_CAT_MEASURE_MCS_EXTENDED = 3,
    MEXAxGL_CAT_MEASURE_LOT_SEQUENCE = 4,
    MEXAxGL_CAT_MEASURE_LOT_SUMMARY = 5,
    MEXAxGL_CAT_MEASURE_LOT_DETAILED = 6,
    MEXAxGL_CAT_MEASURE_LOT_EXTENDED = 7,
    MEXAxGL_CAT_AA_SCAN_SEQUENCE = 8,
    MEXAxGL_CAT_AA_SCAN_SUMMARY = 9,
    MEXAxGL_CAT_AA_SCAN_DETAILED = 10,
    MEXAxGL_CAT_AA_SCAN_EXTENDED = 11,
    MEXAxGL_CAT_LS_SCAN_SEQUENCE = 12,
    MEXAxGL_CAT_LS_SCAN_SUMMARY = 13,
    MEXAxGL_CAT_LS_SCAN_DETAILED = 14,
    MEXAxGL_CAT_LS_SCAN_EXTENDED = 15,
    MEXAxGL_CAT_AG_SCAN_SUMMARY = 16,
    MEXAxGL_CAT_AG_SCAN_DETAILED = 17,
    MEXAxGL_CAT_AG_SCAN_EXTENDED = 18,
    MEXAxGL_CAT_SA_MODEL_SEQUENCE = 19,
    MEXAxGL_CAT_SA_MODEL_SUMMARY = 20,
    MEXAxGL_CAT_SA_MODEL_DETAILED = 21,
    MEXAxGL_CAT_SA_MODEL_EXTENDED = 22,
    MEXAxGL_CAT_WA_MODEL_SEQUENCE = 23,
    MEXAxGL_CAT_WA_MODEL_SUMMARY = 24,
    MEXAxGL_CAT_WA_MODEL_EXTENDED = 25,
    MEXAxGL_CAT_WA_MODEL_DETAILED = 26,
    MEXAxGL_CAT_PA_MODEL_SEQUENCE = 27,
    MEXAxGL_CAT_PA_MODEL_SUMMARY = 28,
    MEXAxGL_CAT_PA_MODEL_DETAILED = 29,
    MEXAxGL_CAT_PA_MODEL_EXTENDED = 30,
    MEXAxGL_CAT_WM_MODEL_SEQUENCE = 31,
    MEXAxGL_CAT_WM_MODEL_SUMMARY = 32,
    MEXAxGL_CAT_WM_MODEL_DETAILED = 33,
    MEXAxGL_CAT_WM_MODEL_EXTENDED = 34,
    MEXAxGL_CAT_PDGC_MODEL_SEQUENCE = 35,
    MEXAxGL_CAT_PDGC_MODEL_SUMMARY = 36,
    MEXAxGL_CAT_PDGC_MODEL_DETAILED = 37,
    MEXAxGL_CAT_PDGC_MODEL_EXTENDED = 38,
    MEXAxGL_CAT_GLC_MODEL_SEQUENCE = 39,
    MEXAxGL_CAT_GLC_MODEL_SUMMARY = 40,
    MEXAxGL_CAT_GLC_MODEL_DETAILED = 41,
    MEXAxGL_CAT_GLC_MODEL_EXTENDED = 42,
    MEXAxGL_CAT_EXPOSE_MCS_SEQUENCE = 43,
    MEXAxGL_CAT_EXPOSE_MCS_SUMMARY = 44,
    MEXAxGL_CAT_EXPOSE_MCS_DETAILED = 45,
    MEXAxGL_CAT_EXPOSE_MCS_EXTENDED = 46,
    MEXAxGL_CAT_EXPOSE_LOT_SEQUENCE = 47,
    MEXAxGL_CAT_EXPOSE_LOT_SUMMARY = 48,
    MEXAxGL_CAT_EXPOSE_LOT_DETAILED = 49,
    MEXAxGL_CAT_EXPOSE_LOT_EXTENDED = 50,
    MEXAxGL_CAT_EXPOSE_WAFER_SEQUENCE = 51,
    MEXAxGL_CAT_EXPOSE_WAFER_SUMMARY = 52,
    MEXAxGL_CAT_EXPOSE_WAFER_DETAILED = 53,
    MEXAxGL_CAT_EXPOSE_WAFER_EXTENDED = 54,
    MEXAxGL_CAT_IS_SCAN_SEQUENCE = 55,
    MEXAxGL_CAT_IS_SCAN_SUMMARY = 56,
    MEXAxGL_CAT_IS_SCAN_DETAILED = 57,
    MEXAxGL_CAT_IS_SCAN_EXTENDED = 58,
    MEXAxGL_CAT_CS_SCAN_SEQUENCE = 59,
    MEXAxGL_CAT_CS_SCAN_SUMMARY = 60,
    MEXAxGL_CAT_CS_SCAN_DETAILED = 61,
    MEXAxGL_CAT_CS_SCAN_EXTENDED = 62,
    MEXAxGL_CAT_US_SCAN_SEQUENCE = 63,
    MEXAxGL_CAT_US_SCAN_SUMMARY = 64,
    MEXAxGL_CAT_US_SCAN_DETAILED = 65,
    MEXAxGL_CAT_US_SCAN_EXTENDED = 66,
    MEXAxGL_CAT_EX_SCAN_SEQUENCE = 67,
    MEXAxGL_CAT_EX_SCAN_SUMMARY = 68,
    MEXAxGL_CAT_EX_SCAN_DETAILED = 69,
    MEXAxGL_CAT_EX_SCAN_EXTENDED = 70,
    MEXAxGL_CAT_ZS_SCAN_SEQUENCE = 71,
    MEXAxGL_CAT_ZS_SCAN_SUMMARY = 72,
    MEXAxGL_CAT_ZS_SCAN_DETAILED = 73,
    MEXAxGL_CAT_ZS_SCAN_EXTENDED = 74,
    MEXAxGL_CAT_SS_SCAN_SEQUENCE = 75,
    MEXAxGL_CAT_SS_SCAN_SUMMARY = 76,
    MEXAxGL_CAT_SS_SCAN_DETAILED = 77,
    MEXAxGL_CAT_SS_SCAN_EXTENDED = 78,
    MEXAxGL_CAT_RA_MODEL_SEQUENCE = 79,
    MEXAxGL_CAT_RA_MODEL_SUMMARY = 80,
    MEXAxGL_CAT_RA_MODEL_DETAILED = 81,
    MEXAxGL_CAT_RA_MODEL_EXTENDED = 82,
    MEXAxGL_CAT_LOCO_MODEL_SEQUENCE = 83,
    MEXAxGL_CAT_LOCO_MODEL_SUMMARY = 84,
    MEXAxGL_CAT_LOCO_MODEL_DETAILED = 85,
    MEXAxGL_CAT_LOCO_MODEL_EXTENDED = 86,
    MEXAxGL_CAT_SYCO_MODEL_SEQUENCE = 87,
    MEXAxGL_CAT_SYCO_MODEL_SUMMARY = 88,
    MEXAxGL_CAT_SYCO_MODEL_DETAILED = 89,
    MEXAxGL_CAT_SYCO_MODEL_EXTENDED = 90,
    MEXAxGL_CAT_PDOC_MODEL_SEQUENCE = 91,
    MEXAxGL_CAT_PDOC_MODEL_SUMMARY = 92,
    MEXAxGL_CAT_PDOC_MODEL_DETAILED = 93,
    MEXAxGL_CAT_PDOC_MODEL_EXTENDED = 94,
    MEXAxGL_CAT_SFPM_MODEL_SEQUENCE = 95,
    MEXAxGL_CAT_SFPM_MODEL_SUMMARY = 96,
    MEXAxGL_CAT_SFPM_MODEL_DETAILED = 97,
    MEXAxGL_CAT_SFPM_MODEL_EXTENDED = 98,
    MEXAxGL_CAT_ZP_SCAN_SEQUENCE = 99,
    MEXAxGL_CAT_ZP_SCAN_SUMMARY = 100,
    MEXAxGL_CAT_ZP_SCAN_DETAILED = 101,
    MEXAxGL_CAT_ZP_SCAN_EXTENDED = 102,
    MEXAxGL_CAT_LH_SCAN_SEQUENCE = 103,
    MEXAxGL_CAT_LH_SCAN_SUMMARY = 104,
    MEXAxGL_CAT_LH_SCAN_DETAILED = 105,
    MEXAxGL_CAT_LH_SCAN_EXTENDED = 106,
    MEXAxGL_CAT_SLM_SEQUENCE = 107,
    MEXAxGL_CAT_SLM_SUMMARY = 108,
    MEXAxGL_CAT_SLM_DETAILED = 109,
    MEXAxGL_CAT_SLM_EXTENDED = 110,
} MEXAxGL_cat;

typedef int MEXAxGL_context_list_list[0x5];

typedef struct
{
    int len;
    MEXAxGL_context_list_list list;
} MEXAxGL_context_list;

typedef enum
{
    MEXAxGL_TAG_USAGE_ACTIVE = 0,
    MEXAxGL_TAG_USAGE_DERIVED = 1,
    MEXAxGL_TAG_USAGE_FUTURE = 2,
    MEXAxGL_TAG_USAGE_OBSOLETE = 3,
} MEXAxGL_tag_usage;

typedef struct
{
    int tag;
    MEXAxGL_tag_usage usage;
} MEXAxGL_tag_info;

typedef struct
{
    int len;
    int max_len;
    MEXAxGL_tag_info* array;
} MEXAxGL_tag_info_array;

typedef char MEXAxGL__set_dp_data_context_source_id[0x51];

typedef char MEXAxGL__set_dp_data_context_source_type[0x51];

typedef char MEXAxGL__unset_dp_data_context_source_id[0x51];

typedef char MEXAxGL__unset_dp_data_context_source_type[0x51];



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int MEXAxGL_read_settings(MEXAxGL_state *state,
	bool *present);
int MEXAxGL_save_settings(const MEXAxGL_state *state);
int MEXAxGL_remove_settings(void);
int MEXAxGL_set_notification(const bool *notification_on);
int MEXAxGL_send_settings(const MEXAxGL_state *state);
int MEXAxGL_set_dp_data_context(const MEXAxGL__set_dp_data_context_source_id *source_id,
	const MEXAxGL__set_dp_data_context_source_type *source_type,
	const MEXAxGL_context_list *context);
int MEXAxGL_unset_dp_data_context(const MEXAxGL__unset_dp_data_context_source_id *source_id,
	const MEXAxGL__unset_dp_data_context_source_type *source_type);



#endif // _MEXAxGL_TC_H_
