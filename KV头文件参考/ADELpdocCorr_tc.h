/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AD
* 模块名称 : ADELpdocCorr
* 文件名称 : ADELpdocCorr_tc.h
* 概要描述 :
*	AD组件ADELpdocCorr数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ADELpdocCorr_TC_H_
#define _ADELpdocCorr_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <ADELme_tc.h> 
#include <ADELgen_tc.h> 
#include <ADELsr_tc.h> 
#include <ADELme_grid_tc.h> 





/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    int XIndex;
    int YIndex;
    double PdoCorrection;
    ADELme_grid_PointStatusType PointStatus;
} ADELpdocCorr_PdocPointType;

typedef struct
{
    int len;
    int max_len;
    ADELpdocCorr_PdocPointType* array;
} ADELpdocCorr_PdocPointListType;

typedef struct
{
    ADELme_grid_LsGridType LsGrid;
    ADELpdocCorr_PdocPointListType PdocPointList;
} ADELpdocCorr_ParameterType;

typedef struct
{
    ADELsr_CorrectionSetNameType CorrectionSetName;
    ADELsr_CorrectionSetTypeType CorrectionSetType;
    ADELsr_ApplicationRangeType ApplicationRange;
    ADELpdocCorr_ParameterType Parameters;
    ADELgen_RecipeIDListType ReferencedSubRecipeList;
} ADELpdocCorr_CorrectionSetType;

typedef struct
{
    int len;
    int max_len;
    ADELpdocCorr_CorrectionSetType* array;
} ADELpdocCorr_CorrectionSetListType;

typedef struct
{
    ADELgen_RecipeHeaderType Header;
    ADELpdocCorr_CorrectionSetListType CorrectionSets;
} ADELpdocCorr_RecipeType;

typedef struct
{
    ADELgen_RecipeIDType SubRecipeName;
    ADELsr_CorrectionSetNameType CorrectionSetName;
    int WaferSeqNr;
    double AverageCorrection;
    ADELpdocCorr_ParameterType Parameters;
} ADELpdocCorr_ReferencedCorrectionSetReportType;

typedef struct
{
    int len;
    int max_len;
    ADELpdocCorr_ReferencedCorrectionSetReportType* array;
} ADELpdocCorr_ReferencedCorrectionSetReportListType;



#endif // _ADELpdocCorr_TC_H_
