/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVNL
* 文件名称 : KVNL_tc.h
* 概要描述 :
*	KV组件KVNL数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVNL_TC_H_
#define _KVNL_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    KVNL_NO_FIT = 0,
    KVNL_1ST_ORDER_Z_XY_FIT = 1,
    KVNL_1ST_ORDER_Z_X_FIT = 2,
    KVNL_1ST_ORDER_Z_Y_FIT = 3,
    KVNL_2ND_ORDER_Z_XY_FIT = 4,
    KVNL_2ND_ORDER_Z_X_FIT = 5,
    KVNL_2ND_ORDER_Z_Y_FIT = 6,
} KVNL_lsq_fit_type_enum;

typedef enum
{
    KVNL_R_LSQ_NO_FIT = 0,
    KVNL_R_LSQ_5TH_ORDER_Z_R_FIT = 1,
} KVNL_r_lsq_fit_type_enum;

typedef struct
{
    double x;
    double y;
    double z;
    double xx;
    double xy;
    double yy;
} KVNL_solve_input_struct;

typedef struct
{
    double x;
    double y;
    double e;
    double xx;
    double xy;
    double yy;
} KVNL_solve_output_struct;



#endif // _KVNL_TC_H_
