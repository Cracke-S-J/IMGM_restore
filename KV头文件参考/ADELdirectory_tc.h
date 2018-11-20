/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AD
* 模块名称 : ADELdirectory
* 文件名称 : ADELdirectory_tc.h
* 概要描述 :
*	AD组件ADELdirectory数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ADELdirectory_TC_H_
#define _ADELdirectory_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <ADELgen_tc.h> 




/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef char ADELdirectory_EntryNameType[0x100];

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef unsigned int ADELdirectory_EntrySizeType;

typedef char ADELdirectory_ParamType[0x50];

typedef char ADELdirectory_ValueType[0x50];

typedef enum
{
    ADELdirectory_EntryIsCollection = 0,
    ADELdirectory_EntryIsDocument = 1,
} ADELdirectory_EntryTypeType;

typedef enum
{
    ADELdirectory_ServiceList = 0,
    ADELdirectory_ServiceGet = 1,
    ADELdirectory_ServiceDelete = 2,
    ADELdirectory_ServicePut = 3,
    ADELdirectory_ServiceVerify = 4,
    ADELdirectory_ServiceRun = 5,
    ADELdirectory_ServiceForward = 6,
} ADELdirectory_ServiceType;

typedef struct
{
    ADELdirectory_ServiceType Service;
} ADELdirectory_ServiceTypeType;

typedef struct
{
    int len;
    int max_len;
    ADELdirectory_ServiceTypeType* array;
} ADELdirectory_ServiceTypeList;

typedef struct
{
    ADELdirectory_ParamType Name;
    ADELdirectory_ValueType Value;
} ADELdirectory_ReqParamType;

typedef struct
{
    ADELdirectory_ParamType Name;
    ADELdirectory_ValueType Value;
} ADELdirectory_NameValueType;

typedef struct
{
    int len;
    int max_len;
    ADELdirectory_NameValueType* array;
} ADELdirectory_AttributeListType;

typedef struct
{
    ADELdirectory_ParamType AttributeName;
} ADELdirectory_AttributeListItem;

typedef struct
{
    int len;
    int max_len;
    ADELdirectory_AttributeListItem* array;
} ADELdirectory_AttributeListing;

typedef struct
{
    ADELdirectory_EntryTypeType Type;
    ADELdirectory_EntryNameType Name;
    timestamp LastModifiedTime;
    ADELdirectory_EntrySizeType Size;
    ADELdirectory_AttributeListType AttributeList;
} ADELdirectory_EntryType;

typedef struct
{
    int len;
    int max_len;
    ADELdirectory_EntryType* array;
} ADELdirectory_EntryListType;

typedef char ADELdirectory_DocumentPathType[0x100];

typedef struct
{
    int len;
    int max_len;
    ADELdirectory_ReqParamType* array;
} ADELdirectory_CmdParamsListType;

typedef struct
{
    ADELgen_operatorNameType Username;
    ADELgen_DocTypeType DocumentType;
    ADELdirectory_DocumentPathType DocumentPath;
    ADELdirectory_CmdParamsListType RequestParameterList;
} ADELdirectory_InputType;

typedef struct
{
    ADELdirectory_AttributeListing MainAttributeList;
    ADELdirectory_EntryListType EntryList;
} ADELdirectory_ResultsType;

typedef struct
{
    ADELgen_SourceDataInfoType2 Header;
    ADELdirectory_InputType Input;
    ADELdirectory_ServiceTypeList ServiceList;
    ADELdirectory_ResultsType Results;
} ADELdirectory_DirectoryReportType;



#endif // _ADELdirectory_TC_H_
