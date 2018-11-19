/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : GN
* 模块名称 : GNAFxODP
* 文件名称 : GNAFxODP_tc.h
* 概要描述 :
*	GN组件GNAFxODP数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _GNAFxODP_TC_H_
#define _GNAFxODP_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/
#define GNAFxODP_HDR_COARSE_STR 	 "Coarse  " 
#define GNAFxODP_HDR_FINE_STR 	 "Fine  " 
#define GNAFxODP_MSG_DELTA_SHIFT_STR 	 "Delta shift threshold exceeded for  " 
#define GNAFxODP_MSG_CAPTURE_MCC_STR 	 "capture MCC threshold exceeded for  " 
#define GNAFxODP_MSG_SIGNAL_CHECK_STR 	 "capture signal threshold exceeded for  " 
#define GNAFxODP_MSG_CAPTURE_FIT_STR 	 "capture fit failed for  " 
#define GNAFxODP_MSG_FIT_STATUS_STR 	 "Fit status check failed for  " 
#define GNAFxODP_MSG_ORDER_MCC_STR 	 "Order MCC validation failed for  " 
#define GNAFxODP_MSG_ORDER_WQ_STR 	 "Order WQ validation failed for  " 
#define GNAFxODP_MSG_STATUS_CHECK_STR 	 "Capture status check failed for  " 
#define GNAFxODP_MSG_OVERALL_ERROR_STR 	 "Overall alignment status error occurred. " 
#define GNAFxODP_MARK_ALIGNMENT_MESSAGE_LENGTH 	 0xFE 
#define GNAFxODP_MARK_ALIGNMENT_MESSAGE_SIZE 	 0xFF 



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    GNAFxODP_MARK_ERROR_DELTA_SHIFT = 1,
    GNAFxODP_MARK_ERROR_CAPTURE_MCC = 2,
    GNAFxODP_MARK_ERROR_CAPTURE_SIGNAL = 3,
    GNAFxODP_MARK_ERROR_CAPTURE_FIT = 4,
    GNAFxODP_MARK_ERROR_FIT_STATUS = 5,
    GNAFxODP_MARK_ERROR_ORDER_MCC = 6,
    GNAFxODP_MARK_ERROR_ORDER_WQ = 7,
    GNAFxODP_MARK_ERROR_CAPTURE_STATUS = 8,
    GNAFxODP_MARK_ERROR_OVERAL_ALIGNMENT = 9,
} GNAFxODP_MARK_ERROR_ENUM;

typedef char GNAFxODP_MARK_ERROR_STRUCT_message[0x100];

typedef struct
{
    int error_id;
    int direction;
    GNAFxODP_MARK_ERROR_STRUCT_message message;
} GNAFxODP_MARK_ERROR_STRUCT;

typedef struct
{
    int len;
    int max_len;
    GNAFxODP_MARK_ERROR_STRUCT* array;
} GNAFxODP_mark_error_varray;



#endif // _GNAFxODP_TC_H_
