/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AD
* 模块名称 : ADELme_grid
* 文件名称 : ADELme_grid_tc.h
* 概要描述 :
*	AD组件ADELme_grid数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ADELme_grid_TC_H_
#define _ADELme_grid_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <ADELme_coord_tc.h> 
#include <ADELle_tc.h> 




/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    int len;
    int max_len;
    double* array;
} ADELme_grid_XGridLineListType;

typedef struct
{
    int len;
    int max_len;
    double* array;
} ADELme_grid_YGridLineListType;

typedef struct
{
    ADELme_grid_XGridLineListType XGridLineList;
    ADELme_grid_YGridLineListType YGridLineList;
} ADELme_grid_GridType;

typedef struct
{
    ADELle_LsMeasSpotSelectionListType LsMeasSpotSelectionList;
    ADELme_grid_GridType Grid;
} ADELme_grid_LsGridType;

typedef struct
{
    int len;
    int max_len;
    ADELme_grid_LsGridType* array;
} ADELme_grid_LsGridListType;

typedef enum
{
    ADELme_grid_POINTSTATUS_VALID = 0,
    ADELme_grid_POINTSTATUS_REPAIRED = 1,
    ADELme_grid_POINTSTATUS_INVALID = 2,
} ADELme_grid_PointStatusType;



#endif // _ADELme_grid_TC_H_
