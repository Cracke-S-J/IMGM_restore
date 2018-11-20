/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AD
* 模块名称 : ADELgen
* 文件名称 : ADELgen_tc.h
* 概要描述 :
*	AD组件ADELgen数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ADELgen_TC_H_
#define _ADELgen_TC_H_

/*------------------------------- Includes -------------------------------*/




/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef unsigned int ADELgen_deltaTimeType;

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef unsigned int ADELgen_NonNegIntType;

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef unsigned int ADELgen_PosIntType;

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef double ADELgen_TemperatureType;

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef double ADELgen_PressureType;

typedef struct
{
    double Real;
    double Imag;
} ADELgen_ComplexType;

typedef struct
{
    int X;
    int Y;
} ADELgen_XyCoordinateType;

typedef struct
{
    int X;
    int Y;
} ADELgen_XyIndexType;

typedef struct
{
    double X;
    double Y;
} ADELgen_XyVectorType;

typedef struct
{
    double X;
    double Y;
    double Z;
    double Ry;
} ADELgen_XyzryVectorType;

typedef struct
{
    double X;
    double Y;
    double Z;
} ADELgen_XyzVectorType;

typedef struct
{
    double X;
    double Y;
    double Z;
    double Rz;
} ADELgen_XyzrzVectorType;

typedef struct
{
    double X;
    double Y;
    double Rz;
} ADELgen_XyrzVectorType;

typedef struct
{
    double Z;
    double Ry;
} ADELgen_ZryVectorType;

typedef struct
{
    double Z;
    double Rx;
    double Ry;
} ADELgen_ZrxryVectorType;

typedef struct
{
    double X;
    double Y;
    double Rz;
    double Z;
    double Rx;
    double Ry;
} ADELgen_HorVerVectorType;

typedef struct
{
    double Rx;
    double Ry;
} ADELgen_RxryVectorType;

typedef struct
{
    timestamp StartTime;
    timestamp EndTime;
} ADELgen_TimePeriodType;

typedef struct
{
    ADELgen_NonNegIntType CompanyID;
    ADELgen_NonNegIntType DepartmentID;
    ADELgen_NonNegIntType ProductID;
    ADELgen_NonNegIntType RevisionID;
} ADELgen_NC12Type;

typedef struct
{
    double Min;
    double Max;
    double Avg;
    double StDev;
} ADELgen_StatDataType;

typedef struct
{
    ADELgen_StatDataType X;
    ADELgen_StatDataType Y;
} ADELgen_XyVectorStatDataType;

typedef struct
{
    ADELgen_StatDataType X;
    ADELgen_StatDataType Y;
    ADELgen_StatDataType Z;
    ADELgen_StatDataType Ry;
} ADELgen_XyzryVectorStatDataType;

typedef struct
{
    ADELgen_StatDataType X;
    ADELgen_StatDataType Y;
    ADELgen_StatDataType Z;
} ADELgen_XyzVectorStatDataType;

typedef struct
{
    ADELgen_StatDataType X;
    ADELgen_StatDataType Y;
    ADELgen_StatDataType Z;
    ADELgen_StatDataType Rz;
} ADELgen_XyzrzVectorStatDataType;

typedef struct
{
    ADELgen_StatDataType X;
    ADELgen_StatDataType Y;
    ADELgen_StatDataType Rz;
} ADELgen_XyrzVectorStatDataType;

typedef struct
{
    ADELgen_StatDataType Z;
    ADELgen_StatDataType Ry;
} ADELgen_ZryVectorStatDataType;

typedef struct
{
    ADELgen_StatDataType Z;
    ADELgen_StatDataType Rx;
    ADELgen_StatDataType Ry;
} ADELgen_ZrxryVectorStatDataType;

typedef struct
{
    ADELgen_StatDataType X;
    ADELgen_StatDataType Y;
    ADELgen_StatDataType Rz;
    ADELgen_StatDataType Z;
    ADELgen_StatDataType Rx;
    ADELgen_StatDataType Ry;
} ADELgen_HorVerVectorStatDataType;

typedef struct
{
    ADELgen_StatDataType Rx;
    ADELgen_StatDataType Ry;
} ADELgen_RxryVectorStatDataType;

typedef struct
{
    ADELgen_StatDataType Ma;
    ADELgen_StatDataType Msd;
} ADELgen_MaMsdStatDataType;

typedef struct
{
    int len;
    int max_len;
    int* array;
} ADELgen_integerListType;

typedef struct
{
    int len;
    int max_len;
    double* array;
} ADELgen_doubleListType;

typedef struct
{
    int len;
    int max_len;
    ADELgen_XyVectorType* array;
} ADELgen_XyVectorListType;

typedef struct
{
    int len;
    int max_len;
    ADELgen_XyzryVectorType* array;
} ADELgen_XyzryVectorListType;

typedef struct
{
    int len;
    int max_len;
    ADELgen_XyzVectorType* array;
} ADELgen_XyzVectorListType;

typedef struct
{
    int len;
    int max_len;
    ADELgen_XyzrzVectorType* array;
} ADELgen_XyzrzVectorListType;

typedef struct
{
    int len;
    int max_len;
    ADELgen_XyrzVectorType* array;
} ADELgen_XyrzVectorListType;

typedef struct
{
    int len;
    int max_len;
    ADELgen_ZryVectorType* array;
} ADELgen_ZryVectorListType;

typedef struct
{
    int len;
    int max_len;
    ADELgen_ZrxryVectorType* array;
} ADELgen_ZrxryVectorListType;

typedef struct
{
    int len;
    int max_len;
    ADELgen_HorVerVectorType* array;
} ADELgen_HorVerVectorListType;

typedef struct
{
    int len;
    int max_len;
    ADELgen_RxryVectorType* array;
} ADELgen_RxryVectorListType;

typedef char ADELgen_CategoryType[0x50];

typedef struct
{
    int len;
    int max_len;
    ADELgen_CategoryType* array;
} ADELgen_CategoryListType;

typedef char ADELgen_machineIDType[0x4];

typedef char ADELgen_machineNameType[0x1C];

typedef char ADELgen_softwareReleaseType[0x34];

typedef char ADELgen_commentType[0x100];

typedef struct
{
    int len;
    int max_len;
    ADELgen_commentType* array;
} ADELgen_CommentListType;

typedef char ADELgen_machineTypeType[0x20];

typedef char ADELgen_operatorNameType[0x34];

typedef char ADELgen_DocIdType[0x50];

typedef char ADELgen_DocTypeType[0x50];

typedef char ADELgen_DocTypeVerType[0x14];

typedef char ADELgen_DocTypeVerType2[0x14];

typedef char ADELgen_UriType[0x100];

typedef char ADELgen_EquipmentStateIDType[0x4];

typedef char ADELgen_UserNameType[0x10];

typedef char ADELgen_DocumentInfo_Title[0x54];

typedef char ADELgen_DocumentInfo_DocumentName[0x100];

typedef struct
{
    ADELgen_DocumentInfo_Title Title;
    ADELgen_machineIDType MachineID;
    ADELgen_machineTypeType MachineType;
    ADELgen_softwareReleaseType SoftwareRelease;
    ADELgen_DocumentInfo_DocumentName DocumentName;
    timestamp CreateTime;
    ADELgen_CommentListType Comment;
} ADELgen_DocumentInfo;

typedef struct
{
    int len;
    int max_len;
    ADELgen_DocumentInfo* array;
} ADELgen_DocumentInfoList;

typedef char ADELgen_SourceDataInfoType_Title[0x50];

typedef struct
{
    ADELgen_SourceDataInfoType_Title Title;
    ADELgen_machineIDType MachineID;
    ADELgen_machineTypeType MachineType;
    ADELgen_softwareReleaseType SoftwareRelease;
    ADELgen_operatorNameType CreatedBy;
    timestamp CreateTime;
    ADELgen_CommentListType Comment;
} ADELgen_SourceDataInfoType;

typedef char ADELgen_SourceDataInfoType1_Title[0x50];

typedef struct
{
    ADELgen_SourceDataInfoType1_Title Title;
    ADELgen_machineIDType MachineID;
    ADELgen_machineNameType MachineCustomerName;
    ADELgen_machineTypeType MachineType;
    ADELgen_softwareReleaseType SoftwareRelease;
    ADELgen_operatorNameType CreatedBy;
    timestamp CreateTime;
    ADELgen_deltaTimeType MachineHostDeltaTime;
    ADELgen_CommentListType Comment;
} ADELgen_SourceDataInfoType1;

typedef char ADELgen_SourceDataInfoType2_Title[0x50];

typedef struct
{
    ADELgen_SourceDataInfoType2_Title Title;
    ADELgen_machineIDType MachineID;
    ADELgen_machineNameType MachineCustomerName;
    ADELgen_machineTypeType MachineType;
    ADELgen_softwareReleaseType SoftwareRelease;
    ADELgen_operatorNameType CreatedBy;
    timestamp CreateTime;
    ADELgen_deltaTimeType MachineHostDeltaTime;
    ADELgen_CommentListType Comment;
    ADELgen_DocIdType DocumentId;
    ADELgen_DocTypeType DocumentType;
    ADELgen_DocTypeVerType2 DocumentTypeVersion;
} ADELgen_SourceDataInfoType2;

typedef char ADELgen_SourceDataInfoType3_Title[0x50];

typedef struct
{
    ADELgen_SourceDataInfoType3_Title Title;
    ADELgen_machineIDType MachineID;
    ADELgen_machineNameType MachineCustomerName;
    ADELgen_machineTypeType MachineType;
    ADELgen_softwareReleaseType SoftwareRelease;
    ADELgen_operatorNameType CreatedBy;
    timestamp CreateTime;
    ADELgen_deltaTimeType MachineHostDeltaTime;
    ADELgen_CommentListType Comment;
    ADELgen_DocIdType DocumentId;
    ADELgen_DocTypeType DocumentType;
    ADELgen_DocTypeVerType2 DocumentTypeVersion;
    ADELgen_CategoryListType CategoryList;
} ADELgen_SourceDataInfoType3;

typedef char ADELgen_RecipeIDType[0x100];

typedef struct
{
    int len;
    int max_len;
    ADELgen_RecipeIDType* array;
} ADELgen_RecipeIDListType;

typedef char ADELgen_VersionIDType[0x1C];

typedef struct
{
    ADELgen_machineNameType MachineName;
    ADELgen_softwareReleaseType SoftwareRelease;
    ADELgen_RecipeIDType RecipeName;
    ADELgen_operatorNameType CreatedBy;
    timestamp CreateTime;
    ADELgen_operatorNameType LastModifiedBy;
    timestamp LastModifiedTime;
    ADELgen_VersionIDType VersionId;
    ADELgen_CommentListType Comment;
} ADELgen_RecipeHeaderType;

typedef char ADELgen_RecipeHeaderType2_VersionId[0x1C];

typedef struct
{
    ADELgen_machineNameType MachineName;
    ADELgen_softwareReleaseType SoftwareRelease;
    ADELgen_RecipeIDType RecipeName;
    ADELgen_operatorNameType CreatedBy;
    timestamp CreateTime;
    ADELgen_operatorNameType LastModifiedBy;
    timestamp LastModifiedTime;
    ADELgen_RecipeHeaderType2_VersionId VersionId;
    ADELgen_CommentListType Comment;
    ADELgen_DocIdType DocumentId;
    ADELgen_DocTypeType DocumentType;
    ADELgen_DocTypeVerType2 DocumentTypeVersion;
    ADELgen_CategoryListType CategoryList;
} ADELgen_RecipeHeaderType2;

typedef char ADELgen_LayerIDType[0x18];

typedef char ADELgen_ImageIDType[0x20];

typedef struct
{
    ADELgen_PosIntType ImageDiesX;
    ADELgen_PosIntType ImageDiesY;
} ADELgen_ImageLayoutType;

typedef struct
{
    double X;
    double Y;
} ADELgen_ImageSizeType;

typedef struct
{
    double X;
    double Y;
} ADELgen_ImageShiftType;

typedef char ADELgen_ReticleIDType[0x18];

typedef char ADELgen_ReticleIDType2[0x18];

typedef char ADELgen_ReticleIDWildcardType[0x18];

typedef char ADELgen_ReticleIDWildcardType2[0x18];

typedef char ADELgen_LongReticleIDWildcardType[0x134];

typedef char ADELgen_LongReticleIDWildcardType2[0x134];

typedef char ADELgen_LotIDType[0x40];

typedef char ADELgen_LotIDSemiType[0x50];

typedef enum
{
    ADELgen_InProgress = 0,
    ADELgen_FullyProcessed = 1,
    ADELgen_Aborted = 2,
    ADELgen_Stopped = 3,
} ADELgen_LotResultType;

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef double ADELgen_WaferDiameterType;

typedef enum
{
    ADELgen_WaferEdgeTypeNotch = 0,
    ADELgen_WaferEdgeTypeFlat = 1,
} ADELgen_WaferEdgeType;

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef unsigned int ADELgen_WaferSequenceNumberType;

typedef char ADELgen_WaferIDType[0x50];

typedef struct
{
    double X;
    double Y;
} ADELgen_FieldPositionType;

typedef struct
{
    double X;
    double Y;
} ADELgen_FieldPositionType2;

typedef struct
{
    double Rx;
    double Ry;
} ADELgen_FocusTiltType;

typedef enum
{
    ADELgen_FullyExposed = 0,
    ADELgen_PartiallyExposed = 1,
    ADELgen_NotExposed = 2,
} ADELgen_WaferExposureResultType;

typedef enum
{
    ADELgen_Rejected = 0,
    ADELgen_Accepted = 1,
} ADELgen_RejAccResultType;

typedef enum
{
    ADELgen_RejectReasonNone = 0,
    ADELgen_RejectReasonException = 1,
    ADELgen_RejectReasonTrack = 2,
    ADELgen_RejectReasonLotStopped = 3,
    ADELgen_RejectReasonLotAborted = 4,
    ADELgen_RejectReasonPrealign = 5,
    ADELgen_RejectReasonGLC = 6,
    ADELgen_RejectReasonCoarseAlign = 7,
    ADELgen_RejectReasonFineAlign = 8,
    ADELgen_RejectReasonHeightMap = 9,
    ADELgen_RejectReasonReticleAlign = 10,
    ADELgen_RejectReasonExpose = 11,
    ADELgen_RejectReasonDynamicPerformance = 12,
    ADELgen_RejectReasonFocusSpots = 13,
    ADELgen_RejectReasonChuckSpots = 14,
    ADELgen_RejectReasonRSC = 15,
    ADELgen_RejectReasonEdgeSensorPrealign = 16,
    ADELgen_RejectReasonChuckTemperature = 17,
    ADELgen_RejectReasonDoseControlCalib = 18,
    ADELgen_RejectReasonARITM = 19,
    ADELgen_RejectReasonBeamQualityNrLimit = 20,
    ADELgen_RejectReasonDoseEvalNrLimit = 21,
    ADELgen_RejectReasonClosingWaferRefresh = 22,
    ADELgen_RejectReasonEnergySensorCalibrationNeeded = 23,
    ADELgen_RejectReasonLongAgileMeasurement = 24,
    ADELgen_RejectReasonEfeseHrFocusRangeLimitExceeded = 25,
} ADELgen_WaferRejectReasonType;

typedef char ADELgen_MarkIdType[0x10];

typedef struct
{
    int len;
    int max_len;
    ADELgen_MarkIdType* array;
} ADELgen_MarkIdListType;

typedef enum
{
    ADELgen_UP = 0,
    ADELgen_DOWN = 1,
    ADELgen_NONE = 2,
} ADELgen_ScanDirectionType;



#endif // _ADELgen_TC_H_
