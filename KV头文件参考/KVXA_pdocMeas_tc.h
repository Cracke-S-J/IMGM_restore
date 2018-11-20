/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVXA_pdocMeas
* 文件名称 : KVXA_pdocMeas_tc.h
* 概要描述 :
*	KV组件KVXA_pdocMeas数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVXA_pdocMeas_TC_H_
#define _KVXA_pdocMeas_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <KVXA_tc.h> 
#include <KVxPDOCxMEASREP_tc.h> 
#include <ADELsr_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    ADELsr_MatchedInfoListType MatchedInfoList;
    KVxPDOCxMEASREP_CorrectionSetReportListType CorrectionSetReportList;
    KVXA_CorrectionSetIDListType MeasuredCorrectionSets;
} KVXA_pdocMeas_WaferReportType;



#endif // _KVXA_pdocMeas_TC_H_
