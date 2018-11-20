/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : ME
* 模块名称 : MEXAxSOSIxLVL
* 文件名称 : MEXAxSOSIxLVL_tc.h
* 概要描述 :
*	ME组件MEXAxSOSIxLVL数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _MEXAxSOSIxLVL_TC_H_
#define _MEXAxSOSIxLVL_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/
#define MEXAxSOSIxLVL_DEFAULT_TIMEOUT 	 0x1E 



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    double on_fly_fback_max_sector_no_ctr;
    double on_fly_fail_chk_thr;
} MEXAxSOSIxLVL_sosi_lvl_limits;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int MEXAxSOSIxLVL_get_sosi_lvl_limits(MEXAxSOSIxLVL_sosi_lvl_limits *sosi_lvl_limits);



#endif // _MEXAxSOSIxLVL_TC_H_
