/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVXA_pdgcAppl
* 文件名称 : KVXA_pdgcAppl_tc.h
* 概要描述 :
*	KV组件KVXA_pdgcAppl数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVXA_pdgcAppl_TC_H_
#define _KVXA_pdgcAppl_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <KVxPDGCxAPPLREP_tc.h> 
#include <ADELsr_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    ADELsr_MatchedInfoListType MatchedInfoList;
    KVxPDGCxAPPLREP_CorrectionSetReportListType CorrectionSetReportList;
} KVXA_pdgcAppl_WaferReportType;



#endif // _KVXA_pdgcAppl_TC_H_
