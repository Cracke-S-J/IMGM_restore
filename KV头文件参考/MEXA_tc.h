/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : ME
* 模块名称 : MEXA
* 文件名称 : MEXA_tc.h
* 概要描述 :
*	ME组件MEXA数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _MEXA_TC_H_
#define _MEXA_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <MEXAxWAFxPLATE_tc.h> 
#include <base.h> 
#include <MEXAxTISxGRAT_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    MEXA_TIS_BRANCH_NEG = 0,
    MEXA_TIS_BRANCH_POS = 1,
} MEXA_TIS_BRANCH;

typedef enum
{
    MEXA_NORMALIZATION_SOURCE_TR = 0,
    MEXA_NORMALIZATION_SOURCE_TRP = 1,
    MEXA_NORMALIZATION_SOURCE_TRA1 = 2,
    MEXA_NORMALIZATION_SOURCE_TRA2 = 3,
    MEXA_NORMALIZATION_SOURCE_NONE = 4,
    MEXA_NORMALIZATION_SOURCE_ENERGY_SENSOR = 5,
} MEXA_normalization_source;

typedef enum
{
    MEXA_CLOSING_DISK_TYPE_TRANSPARENT = 0,
    MEXA_CLOSING_DISK_TYPE_COATED = 1,
} MEXA_closing_disk_type;

typedef enum
{
    MEXA_HOVERING_REFERENCE_CLD = 0,
    MEXA_HOVERING_REFERENCE_WAFER = 1,
} MEXA_hovering_reference;

typedef enum
{
    MEXA_RESET_TO_ZERO = 0,
    MEXA_RESET_TO_ANY = 1,
    MEXA_RESET_TO_INVALID = 2,
    MEXA_RESET_TO_DELTA = 3,
} MEXA_zeroing_error_ref_reset_option;

typedef struct
{
    double height;
    bool calibrated;
} MEXA_coverplate_params;

typedef struct
{
    double lens_mag_corr;
    double asym_lens_mag_corr;
    double D2x;
    double D2y;
    double D3;
} MEXA_lens_image_params;

typedef struct
{
    MEXA_TIS_BRANCH tis_branch;
    MEXAxTISxGRAT_TIS_MARK_GRATING tis_mark_grating;
} MEXA_image_grating_id;

typedef struct
{
    MEXA_image_grating_id id;
    xyvect position;
} MEXA_image_grating;

typedef MEXA_image_grating MEXA_image_gratings_grating[0x4];

typedef struct
{
    int nr_of_image_gratings;
    MEXA_image_gratings_grating grating;
} MEXA_image_gratings;

typedef struct
{
    MEXA_image_grating_id id;
    double corr;
} MEXA_bao_corr;

typedef struct
{
    MEXA_image_grating_id id;
    double corr;
} MEXA_bfo_corr;

typedef MEXA_bao_corr MEXA_bao_corrs_grating[0x4];

typedef struct
{
    int nr_of_image_gratings;
    MEXA_bao_corrs_grating grating;
} MEXA_bao_corrs;

typedef MEXA_bfo_corr MEXA_bfo_corrs_grating[0x4];

typedef struct
{
    int nr_of_image_gratings;
    MEXA_bfo_corrs_grating grating;
} MEXA_bfo_corrs;

typedef enum
{
    MEXA_sensor_type_none = 0,
    MEXA_sensor_type_TIS = 1,
    MEXA_sensor_type_ILIAS = 2,
} MEXA_sensor_type_enum;

typedef struct
{
    MEXA_sensor_type_enum element;
    int filler0;
    union
    {
        MEXA_bao_corrs tis_corrs;
        xyvect ILIAS_corrs;
        double empty;
    } spec;
} MEXA_bao_corrections;



#endif // _MEXA_TC_H_
