/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : WP
* 模块名称 : WPxCHUCK
* 文件名称 : WPxCHUCK_tc.h
* 概要描述 :
*	WP组件WPxCHUCK数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _WPxCHUCK_TC_H_
#define _WPxCHUCK_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/
#define WPxCHUCK_CHUCK_ID_1_STR 	 "WPxCHUCK:CHUCK_ID_1 " 
#define WPxCHUCK_CHUCK_ID_2_STR 	 "WPxCHUCK:CHUCK_ID_2 " 
#define WPxCHUCK_CHUCK_ID_MIN 	     0x0 
#define WPxCHUCK_CHUCK_ID_MAX 	     0x1 
#define WPxCHUCK_CHUCK_ID_LEN 	     0x2 
#define WPxCHUCK_CHUCK_ID_UNKNOWN 	 -0x1 
#define WPxCHUCK_CHUCK_FUNC_MIN 	 0x0 
#define WPxCHUCK_CHUCK_FUNC_MAX 	 0x1 
#define WPxCHUCK_CHUCK_FUNC_LEN 	 0x2 
#define WPxCHUCK_CHUCK_FUNC_UNKNOWN  -0x1 



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    WPxCHUCK_CHUCK_ID_1 = 0,
    WPxCHUCK_CHUCK_ID_2 = 1,
} WPxCHUCK_chuck_id_enum;

typedef enum
{
    WPxCHUCK_CHUCK_FUNC_EXPOSE = 0,
    WPxCHUCK_CHUCK_FUNC_MEASURE = 1,
} WPxCHUCK_chuck_func_enum;



#endif // _WPxCHUCK_TC_H_
