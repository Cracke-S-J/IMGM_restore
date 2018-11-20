/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : ME
* 模块名称 : MEXAxWAFxPLATE
* 文件名称 : MEXAxWAFxPLATE_tc.h
* 概要描述 :
*	ME组件MEXAxWAFxPLATE数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _MEXAxWAFxPLATE_TC_H_
#define _MEXAxWAFxPLATE_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <base.h> 
#include <WPxCHUCK_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_WAFER = 0,
    MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_TIS1 = 1,
    MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_TIS2 = 2,
    MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SPOTSENSOR = 3,
    MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_ILIAS = 4,
    MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_CLOSING_DISK = 5,
    MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SS_SLS_1 = 6,
    MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SS_SLS_2 = 7,
    MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_PARIS = 8,
} MEXAxWAFxPLATE_wafer_level_plate;

typedef double MEXAxWAFxPLATE_ref_heights_height[0x9];

typedef bool MEXAxWAFxPLATE_ref_heights_valid[0x9];

typedef struct
{
    MEXAxWAFxPLATE_ref_heights_height height;
    MEXAxWAFxPLATE_ref_heights_valid valid;
} MEXAxWAFxPLATE_ref_heights;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int MEXAxWAFxPLATE_get_plate_TRM(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MEXAxWAFxPLATE_wafer_level_plate *wafer_level_plate,
	xyvect *plate_translation_p,
	double *plate_rotation_p,
	double *plate_magnification_p);
int MEXAxWAFxPLATE_get_plate_height_and_tilts(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MEXAxWAFxPLATE_wafer_level_plate *wafer_level_plate,
	zrxryvect *plate_height_and_tilts_p);
int MEXAxWAFxPLATE_get_plate_ref_position(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MEXAxWAFxPLATE_wafer_level_plate *wafer_level_plate,
	xyzvect *level_ref_height_and_pos_p);
int MEXAxWAFxPLATE_get_plate_ref_heights(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MEXAxWAFxPLATE_wafer_level_plate *wafer_level_plate,
	MEXAxWAFxPLATE_ref_heights *level_ref_heights);
int MEXAxWAFxPLATE_get_plate_id_for_AG_meas(const WPxCHUCK_chuck_id_enum *chuck_id,
	MEXAxWAFxPLATE_wafer_level_plate *plate_id_p);



#endif // _MEXAxWAFxPLATE_TC_H_
