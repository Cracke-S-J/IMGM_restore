/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVxPDGCxAPPLREP
* 文件名称 : KVxPDGCxAPPLREP_tc.h
* 概要描述 :
*	KV组件KVxPDGCxAPPLREP数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVxPDGCxAPPLREP_TC_H_
#define _KVxPDGCxAPPLREP_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <ADELpdgcCorr_tc.h> 
#include <ADELpdgcAppl_tc.h> 
#include <ADELsr_tc.h> 
#include <ADELgen_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    ADELgen_RecipeIDType SubRecipeName;
    ADELsr_CorrectionSetNameType CorrectionSetName;
    ADELpdgcAppl_ParameterType Parameters;
} KVxPDGCxAPPLREP_CorrectionSetReportType;

typedef struct
{
    int len;
    int max_len;
    KVxPDGCxAPPLREP_CorrectionSetReportType* array;
} KVxPDGCxAPPLREP_CorrectionSetReportListType;

typedef struct
{
    KVxPDGCxAPPLREP_CorrectionSetReportListType CorrectionSetReportList;
    ADELpdgcCorr_ReferencedCorrectionSetReportListType ReferencedCorrectionSetReportList;
} KVxPDGCxAPPLREP_ReportDataType;

typedef struct
{
    ADELgen_SourceDataInfoType1 Header;
    ADELsr_MatchedInfoListType MatchedInfoList;
    KVxPDGCxAPPLREP_ReportDataType Data;
} KVxPDGCxAPPLREP_ReportType;



#endif // _KVxPDGCxAPPLREP_TC_H_
