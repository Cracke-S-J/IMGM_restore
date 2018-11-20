/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : ME
* 模块名称 : MEXAxSGRID
* 文件名称 : MEXAxSGRID_tc.h
* 概要描述 :
*	ME组件MEXAxSGRID数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _MEXAxSGRID_TC_H_
#define _MEXAxSGRID_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <base.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    xyvect translation;
    double rotation;
    double magnification;
} MEXAxSGRID_TRM;

typedef struct
{
    MEXAxSGRID_TRM TIS1;
    MEXAxSGRID_TRM TIS2;
} MEXAxSGRID_stage_grid;



#endif // _MEXAxSGRID_TC_H_
