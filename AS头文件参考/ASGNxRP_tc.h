/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : ASGNxRP
* 文件名称 : ASGNxRP_tc.h
* 概要描述 :
*	AS组件ASGNxRP数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ASGNxRP_TC_H_
#define _ASGNxRP_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <ASXA_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef bool ASGNxRP__recipe_used_colors_periodic_recipe_used_color[0x4];

typedef bool ASGNxRP__recipe_used_colors_multi_periodic_recipe_used_color[0x4];

typedef bool ASGNxRP__recipe_used_colors_oblique_recipe_used_color[0x4];

typedef bool ASGNxRP__recipe_used_colors_template_recipe_used_color[0x4];

typedef bool ASGNxRP__recipe_used_colors_dual_periodic_recipe_used_color[0x4];



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int ASGNxRP_recipe_used_colors_periodic(const ASXA_periodic_recipe_struct *recipe_p,
	ASGNxRP__recipe_used_colors_periodic_recipe_used_color *recipe_used_color);
int ASGNxRP_recipe_used_colors_multi_periodic(const ASXA_multi_per_recipe_struct *recipe_p,
	ASGNxRP__recipe_used_colors_multi_periodic_recipe_used_color *recipe_used_color);
int ASGNxRP_recipe_used_colors_oblique(const ASXA_oblique_recipe_struct *recipe_p,
	ASGNxRP__recipe_used_colors_oblique_recipe_used_color *recipe_used_color);
int ASGNxRP_recipe_used_colors_template(const ASXA_template_recipe_struct *recipe_p,
	ASGNxRP__recipe_used_colors_template_recipe_used_color *recipe_used_color);
int ASGNxRP_recipe_used_colors_dual_periodic(const ASXA_dual_periodic_recipe_struct *recipe_p,
	ASGNxRP__recipe_used_colors_dual_periodic_recipe_used_color *recipe_used_color);



#endif // _ASGNxRP_TC_H_
