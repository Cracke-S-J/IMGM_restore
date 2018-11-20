/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AD
* 模块名称 : ADELpdgcAppl
* 文件名称 : ADELpdgcAppl_tc.h
* 概要描述 :
*	AD组件ADELpdgcAppl数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ADELpdgcAppl_TC_H_
#define _ADELpdgcAppl_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <ADELpdgcCorr_tc.h> 
#include <ADELsr_tc.h> 
#include <ADELgen_tc.h> 





/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    ADELgen_RecipeIDType SubRecipeName;
    ADELsr_CorrectionSetNameType CorrectionSetName;
} ADELpdgcAppl_ParameterType;

typedef struct
{
    ADELsr_CorrectionSetNameType CorrectionSetName;
    ADELsr_CorrectionSetTypeType CorrectionSetType;
    ADELsr_ApplicationRangeType ApplicationRange;
    ADELpdgcAppl_ParameterType Parameters;
    ADELgen_RecipeIDListType ReferencedSubRecipeList;
} ADELpdgcAppl_CorrectionSetType;

typedef struct
{
    int len;
    int max_len;
    ADELpdgcAppl_CorrectionSetType* array;
} ADELpdgcAppl_CorrectionSetListType;

typedef struct
{
    ADELgen_RecipeHeaderType Header;
    ADELpdgcAppl_CorrectionSetListType CorrectionSets;
} ADELpdgcAppl_RecipeType;



#endif // _ADELpdgcAppl_TC_H_
