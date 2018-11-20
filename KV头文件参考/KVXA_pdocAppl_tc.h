/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVXA_pdocAppl
* 文件名称 : KVXA_pdocAppl_tc.h
* 概要描述 :
*	KV组件KVXA_pdocAppl数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVXA_pdocAppl_TC_H_
#define _KVXA_pdocAppl_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <KVxPDOCxAPPLREP_tc.h> 
#include <ADELsr_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    ADELsr_MatchedInfoListType MatchedInfoList;
    KVxPDOCxAPPLREP_CorrectionSetReportListType CorrectionSetReportList;
} KVXA_pdocAppl_WaferReportType;



#endif // _KVXA_pdocAppl_TC_H_
