/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AD
* 模块名称 : ADELsr
* 文件名称 : ADELsr_tc.h
* 概要描述 :
*	AD组件ADELsr数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ADELsr_TC_H_
#define _ADELsr_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <ADELgen_tc.h> 




/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    ADELsr_LOT_ID = 0,
    ADELsr_EXPOSURE_RECIPE_NAME = 1,
    ADELsr_LAYER_ID = 2,
    ADELsr_WAFER_SEQ_NR = 3,
    ADELsr_RETICLE_ID = 4,
    ADELsr_IMAGE_ID = 5,
    ADELsr_FIELD = 6,
    ADELsr_CHUCK_ID = 7,
} ADELsr_APPLICATION_RANGE_FIELD_NAME_ENUM;

typedef enum
{
    ADELsr_LOT_ID2 = 0,
    ADELsr_EXPOSURE_RECIPE_NAME2 = 1,
    ADELsr_LAYER_ID2 = 2,
    ADELsr_WAFER_SEQ_NR2 = 3,
    ADELsr_RETICLE_ID2 = 4,
    ADELsr_IMAGE_ID2 = 5,
    ADELsr_FIELD2 = 6,
    ADELsr_CHUCK_ID2 = 7,
    ADELsr_MACHINE_TYPE = 8,
    ADELsr_ASML_MACHINE_ID = 9,
    ADELsr_ILLUMINATION_MODE = 10,
    ADELsr_DOE_ID = 11,
    ADELsr_NA = 12,
    ADELsr_SIGMA_INNER = 13,
    ADELsr_SIGMA_OUTER = 14,
    ADELsr_CUA_APERTURE = 15,
    ADELsr_PCE_ID = 16,
    ADELsr_PSE_ID = 17,
} ADELsr_APPLICATION_RANGE_FIELD_NAME_ENUM_2;

typedef enum
{
    ADELsr_LOT_ID3 = 0,
    ADELsr_EXPOSURE_RECIPE_NAME3 = 1,
    ADELsr_LAYER_ID3 = 2,
    ADELsr_WAFER_SEQ_NR3 = 3,
    ADELsr_RETICLE_ID3 = 4,
    ADELsr_IMAGE_ID3 = 5,
    ADELsr_FIELD3 = 6,
    ADELsr_CHUCK_ID3 = 7,
    ADELsr_MACHINE_TYPE3 = 8,
    ADELsr_ASML_MACHINE_ID3 = 9,
    ADELsr_ILLUMINATION_MODE3 = 10,
    ADELsr_DOE_ID3 = 11,
    ADELsr_NA3 = 12,
    ADELsr_SIGMA_INNER3 = 13,
    ADELsr_SIGMA_OUTER3 = 14,
    ADELsr_CUA_APERTURE3 = 15,
    ADELsr_PCE_ID3 = 16,
    ADELsr_PSE_ID3 = 17,
    ADELsr_SCAN_DIRECTION_ID = 18,
    ADELsr_CUST_MACHINE_ID = 19,
} ADELsr_APPLICATION_RANGE_FIELD_NAME_ENUM_3;

typedef char ADELsr_CorrectionSetNameType[0x50];

typedef char ADELsr_CorrectionSetTypeType[0x50];

typedef char ADELsr_UserContextType[0x100];

typedef struct
{
    int len;
    int max_len;
    ADELsr_UserContextType* array;
} ADELsr_UserContextListType;

typedef char ADELsr_ConfigItemType_Name[0x100];

typedef char ADELsr_ConfigItemType_Value[0x100];

typedef struct
{
    ADELsr_ConfigItemType_Name Name;
    ADELsr_ConfigItemType_Value Value;
} ADELsr_ConfigItemType;

typedef struct
{
    int len;
    int max_len;
    ADELsr_ConfigItemType* array;
} ADELsr_ConfigItemListType;

typedef struct
{
    varstring MachineType;
    varstring AsmlMachineId;
    varstring CustMachineId;
    ADELsr_ConfigItemListType ConfigItems;
} ADELsr_EquipmentSelectorType;

typedef struct
{
    varstring WaferDiameter;
    varstring WaferEdgeType;
    varstring WaferSeqNr;
    varstring WaferId;
    varstring WaferTrackPath;
    varstring WaferStageChuckId;
} ADELsr_WaferProcSelectorType;

typedef struct
{
    varstring IlluminationMode;
    varstring DoeId;
    varstring Na;
    varstring SigmaInner;
    varstring SigmaOuter;
} ADELsr_PupilShapeSelectorType;

typedef struct
{
    varstring IlluminationMode;
    varstring DoeId;
    varstring Na;
    varstring SigmaInner;
    varstring SigmaOuter;
    varstring CuaAperture;
    varstring PceId;
    varstring PseId;
} ADELsr_PupilShapeSelectorType2;

typedef struct
{
    varstring LotId;
    varstring ExposureRecipeName;
    varstring LayerId;
    ADELsr_WaferProcSelectorType Wafer;
    varstring ReticleId;
    varstring ImageId;
    varstring Field;
    ADELsr_PupilShapeSelectorType PupilShape;
} ADELsr_ExposureSelectorType;

typedef struct
{
    varstring LotId;
    varstring ExposureRecipeName;
    varstring LayerId;
    ADELsr_WaferProcSelectorType Wafer;
    varstring ReticleId;
    varstring ImageId;
    varstring Field;
    ADELsr_PupilShapeSelectorType2 PupilShape;
} ADELsr_ExposureSelectorType2;

typedef struct
{
    varstring LotId;
    varstring ExposureRecipeName;
    varstring LayerId;
    ADELsr_WaferProcSelectorType Wafer;
    varstring ReticleId;
    varstring ImageId;
    varstring Field;
    ADELsr_PupilShapeSelectorType2 PupilShape;
    varstring ExposureScanDirection;
} ADELsr_ExposureSelectorType3;

typedef struct
{
    varstring Validity;
    varstring TaskType;
    ADELsr_EquipmentSelectorType Equipment;
    ADELsr_UserContextListType UserContext;
    ADELsr_ExposureSelectorType Exposure;
} ADELsr_ApplicationRangeType;

typedef struct
{
    varstring Validity;
    varstring TaskType;
    ADELsr_EquipmentSelectorType Equipment;
    ADELsr_UserContextListType UserContext;
    ADELsr_ExposureSelectorType2 Exposure;
} ADELsr_ApplicationRangeType2;

typedef struct
{
    varstring Validity;
    varstring TaskType;
    ADELsr_EquipmentSelectorType Equipment;
    ADELsr_UserContextListType UserContext;
    ADELsr_ExposureSelectorType3 Exposure;
} ADELsr_ApplicationRangeType3;

typedef struct
{
    ADELsr_APPLICATION_RANGE_FIELD_NAME_ENUM ApplicationRangeFieldName;
    varstring ApplicationRangeFieldValue;
    varstring ContextValue;
} ADELsr_ActualContextType;

typedef struct
{
    int len;
    int max_len;
    ADELsr_ActualContextType* array;
} ADELsr_ActualContextListType;

typedef struct
{
    ADELsr_CorrectionSetNameType CorrSetName;
    ADELsr_ActualContextListType UsedContext;
} ADELsr_FoundCorrSetType;

typedef struct
{
    int len;
    int max_len;
    ADELsr_FoundCorrSetType* array;
} ADELsr_FoundCorrSetListType;

typedef struct
{
    ADELgen_RecipeIDType SubRecipeName;
    ADELsr_FoundCorrSetListType CorrSetList;
} ADELsr_MatchedInfoType;

typedef struct
{
    int len;
    int max_len;
    ADELsr_MatchedInfoType* array;
} ADELsr_MatchedInfoListType;

typedef struct
{
    ADELsr_APPLICATION_RANGE_FIELD_NAME_ENUM_2 ApplicationRangeFieldName;
    varstring ApplicationRangeFieldValue;
    varstring ContextValue;
} ADELsr_ActualContextType2;

typedef struct
{
    int len;
    int max_len;
    ADELsr_ActualContextType2* array;
} ADELsr_ActualContextListType2;

typedef struct
{
    ADELsr_CorrectionSetNameType CorrSetName;
    ADELsr_ActualContextListType2 UsedContext;
} ADELsr_FoundCorrSetType2;

typedef struct
{
    int len;
    int max_len;
    ADELsr_FoundCorrSetType2* array;
} ADELsr_FoundCorrSetListType2;

typedef struct
{
    ADELgen_RecipeIDType SubRecipeName;
    ADELsr_FoundCorrSetListType2 CorrSetList;
} ADELsr_MatchedInfoType2;

typedef struct
{
    int len;
    int max_len;
    ADELsr_MatchedInfoType2* array;
} ADELsr_MatchedInfoListType2;

typedef struct
{
    ADELsr_APPLICATION_RANGE_FIELD_NAME_ENUM_3 ApplicationRangeFieldName;
    varstring ApplicationRangeFieldValue;
    varstring ContextValue;
} ADELsr_ActualContextType3;

typedef struct
{
    int len;
    int max_len;
    ADELsr_ActualContextType3* array;
} ADELsr_ActualContextListType3;

typedef struct
{
    ADELsr_CorrectionSetNameType CorrSetName;
    ADELsr_ActualContextListType3 UsedContext;
} ADELsr_FoundCorrSetType3;

typedef struct
{
    int len;
    int max_len;
    ADELsr_FoundCorrSetType3* array;
} ADELsr_FoundCorrSetListType3;

typedef struct
{
    ADELgen_RecipeIDType SubRecipeName;
    ADELsr_FoundCorrSetListType3 CorrSetList;
} ADELsr_MatchedInfoType3;

typedef struct
{
    int len;
    int max_len;
    ADELsr_MatchedInfoType3* array;
} ADELsr_MatchedInfoListType3;



#endif // _ADELsr_TC_H_
