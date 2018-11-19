/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : MI
* 模块名称 : MIENXTxREFSET
* 文件名称 : MIENXTxREFSET_tc.h
* 概要描述 :
*	MI组件MIENXTxREFSET数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _MIENXTxREFSET_TC_H_
#define _MIENXTxREFSET_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <WPxCHUCK_tc.h> 
#include <base.h> 



/*-------------------------------- Defines -------------------------------*/
#define MIENXTxREFSET_DEFAULT_TIMEOUT 	 0x3C 
#define MIENXTxREFSET_NBR_OF_REFSET_POINTS 	 0x9 



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    double threshold_y;
    double max_y;
    bool stored_y;
    double threshold_z;
    double max_z;
    bool stored_z;
} MIENXTxREFSET_refset_struct;

typedef zrxryvect MIENXTxREFSET_refset_ff_struct_points_z[0x9];

typedef struct
{
    double threshold_y;
    double max_y;
    bool stored_y;
    double threshold_z;
    double max_z;
    MIENXTxREFSET_refset_ff_struct_points_z points_z;
    bool stored_z;
} MIENXTxREFSET_refset_ff_struct;

typedef xyvect MIENXTxREFSET__get_refset_positions_positions[0x9];



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int MIENXTxREFSET_set_reference_y(const WPxCHUCK_chuck_id_enum *measure_chuck_id,
	const double *threshold);
int MIENXTxREFSET_set_reference_z(const WPxCHUCK_chuck_id_enum *chuck_id,
	const double *threshold);
int MIENXTxREFSET_reset_reference_y(const WPxCHUCK_chuck_id_enum *chuck_id);
int MIENXTxREFSET_reset_reference_z(const WPxCHUCK_chuck_id_enum *chuck_id);
int MIENXTxREFSET_get_refset(const WPxCHUCK_chuck_id_enum *chuck_id,
	MIENXTxREFSET_refset_struct *refset);
int MIENXTxREFSET_get_ff_refset(const WPxCHUCK_chuck_id_enum *chuck_id,
	MIENXTxREFSET_refset_ff_struct *refset);
int MIENXTxREFSET_set_ih_hood_dimensions(const xyvect *hood_radius);
int MIENXTxREFSET_get_refset_positions(const WPxCHUCK_chuck_id_enum *chuck_id,
	MIENXTxREFSET__get_refset_positions_positions *positions);



#endif // _MIENXTxREFSET_TC_H_
