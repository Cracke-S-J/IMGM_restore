/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : DT
* 模块名称 : DTXAxIMAGE
* 文件名称 : DTXAxIMAGE_tc.h
* 概要描述 :
*	DT组件DTXAxIMAGE数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _DTXAxIMAGE_TC_H_
#define _DTXAxIMAGE_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <WPxCHUCK_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef char DTXAxIMAGE_image_id_string[0x20];

typedef struct
{
    instanceid WaferInstId;
    DTXAxIMAGE_image_id_string ImageId;
    WPxCHUCK_chuck_id_enum ChuckId;
} DTXAxIMAGE_context_image_t;



#endif // _DTXAxIMAGE_TC_H_
