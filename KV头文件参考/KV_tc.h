/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KV
* 文件名称 : KV_tc.h
* 概要描述 :
*	KV组件KV数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KV_TC_H_
#define _KV_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <base.h> 
#include <LEXAxSPOT_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    LEXAxSPOT_spot_id_t spot_nr;
    LEXAxSPOT_spot_selection_t spot_id;
    xyzvect spot_xyz;
} KV_spot_data;

typedef KV_spot_data KV_spot_table_spots_data[0x9];

typedef struct
{
    KV_spot_data capture_spot;
    int nr_of_spots;
    KV_spot_table_spots_data spots_data;
} KV_spot_table;



#endif // _KV_TC_H_
