/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVxPDGCxMEASREP
* 文件名称 : KVxPDGCxMEASREP_tc.h
* 概要描述 :
*	KV组件KVxPDGCxMEASREP数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVxPDGCxMEASREP_TC_H_
#define _KVxPDGCxMEASREP_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <ADELpdgcCorr_tc.h> 
#include <ADELpdgcMeas_tc.h> 
#include <ADELsr_tc.h> 
#include <ADELgen_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    ADELgen_RecipeIDType SubRecipeName;
    ADELsr_CorrectionSetNameType CorrectionSetName;
    ADELpdgcMeas_ParameterType Parameters;
} KVxPDGCxMEASREP_CorrectionSetReportType;

typedef struct
{
    int len;
    int max_len;
    KVxPDGCxMEASREP_CorrectionSetReportType* array;
} KVxPDGCxMEASREP_CorrectionSetReportListType;

typedef struct
{
    KVxPDGCxMEASREP_CorrectionSetReportListType CorrectionSetReportList;
    ADELpdgcCorr_ReferencedCorrectionSetReportListType ReferencedCorrectionSetReportList;
} KVxPDGCxMEASREP_ReportDataType;

typedef struct
{
    ADELgen_SourceDataInfoType1 Header;
    ADELsr_MatchedInfoListType MatchedInfoList;
    KVxPDGCxMEASREP_ReportDataType Data;
} KVxPDGCxMEASREP_ReportType;



#endif // _KVxPDGCxMEASREP_TC_H_
