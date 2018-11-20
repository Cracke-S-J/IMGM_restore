/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AD
* 模块名称 : ADELme_coord
* 文件名称 : ADELme_coord_tc.h
* 概要描述 :
*	AD组件ADELme_coord数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ADELme_coord_TC_H_
#define _ADELme_coord_TC_H_

/*------------------------------- Includes -------------------------------*/




/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    double X;
    double Y;
} ADELme_coord_XYCoordinatesType;

typedef struct
{
    double X;
    double Y;
} ADELme_coord_XYCoordinatesDeviationType;

typedef struct
{
    double X;
    double Y;
    double Z;
} ADELme_coord_XYZCoordinatesType;



#endif // _ADELme_coord_TC_H_
