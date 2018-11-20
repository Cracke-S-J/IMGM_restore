/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVxPDOCxDBDATA
* 文件名称 : KVxPDOCxDBDATA_tc.h
* 概要描述 :
*	KV组件KVxPDOCxDBDATA数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVxPDOCxDBDATA_TC_H_
#define _KVxPDOCxDBDATA_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <ADELpdocCorr_tc.h> 
#include <ADELgen_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef char KVxPDOCxDBDATA_RecipeID_CorrectionSetNameType[0x138];

typedef struct
{
    KVxPDOCxDBDATA_RecipeID_CorrectionSetNameType correctionSetName;
    instanceid taskInstId;
} KVxPDOCxDBDATA_pdocCorr_LockedType;

typedef struct
{
    KVxPDOCxDBDATA_RecipeID_CorrectionSetNameType recipeCorrectionsetName;
    ADELgen_RecipeIDType recipeName;
    ADELgen_LayerIDType layerId;
    ADELgen_ImageIDType imageId;
    ADELpdocCorr_ParameterType parameters;
} KVxPDOCxDBDATA_PDOC_AutoCorrectionSetType;

typedef struct
{
    int len;
    int max_len;
    KVxPDOCxDBDATA_PDOC_AutoCorrectionSetType* array;
} KVxPDOCxDBDATA_PDOC_auto_subrecipes_corr_sets;



#endif // _KVxPDOCxDBDATA_TC_H_
