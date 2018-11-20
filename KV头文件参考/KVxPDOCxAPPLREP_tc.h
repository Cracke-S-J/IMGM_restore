/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVxPDOCxAPPLREP
* 文件名称 : KVxPDOCxAPPLREP_tc.h
* 概要描述 :
*	KV组件KVxPDOCxAPPLREP数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVxPDOCxAPPLREP_TC_H_
#define _KVxPDOCxAPPLREP_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <ADELpdocCorr_tc.h> 
#include <ADELpdocAppl_tc.h> 
#include <ADELsr_tc.h> 
#include <ADELgen_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    ADELgen_RecipeIDType SubRecipeName;
    ADELsr_CorrectionSetNameType CorrectionSetName;
    ADELpdocAppl_ParameterType Parameters;
} KVxPDOCxAPPLREP_CorrectionSetReportType;

typedef struct
{
    int len;
    int max_len;
    KVxPDOCxAPPLREP_CorrectionSetReportType* array;
} KVxPDOCxAPPLREP_CorrectionSetReportListType;

typedef struct
{
    KVxPDOCxAPPLREP_CorrectionSetReportListType CorrectionSetReportList;
    ADELpdocCorr_ReferencedCorrectionSetReportListType ReferencedCorrectionSetReportList;
} KVxPDOCxAPPLREP_ReportDataType;

typedef struct
{
    ADELgen_SourceDataInfoType1 Header;
    ADELsr_MatchedInfoListType MatchedInfoList;
    KVxPDOCxAPPLREP_ReportDataType Data;
} KVxPDOCxAPPLREP_ReportType;



#endif // _KVxPDOCxAPPLREP_TC_H_
