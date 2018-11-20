/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVxPDOC
* 文件名称 : KVxPDOC_tc.h
* 概要描述 :
*	KV组件KVxPDOC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVxPDOC_TC_H_
#define _KVxPDOC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <ADELsr_tc.h> 
#include <ADELgen_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int KVxPDOC_subrecipe_name2recipe_id(const ADELgen_RecipeIDType *subrecipeName,
	ADELgen_RecipeIDType *recipeName_p);
int KVxPDOC_recipe_id2subrecipe_name(const ADELgen_RecipeIDType *recipeName,
	ADELgen_RecipeIDType *subrecipeName_p);
int KVxPDOC_correction_set_name2layer_image_id(const ADELsr_CorrectionSetNameType *correctionSetName,
	ADELgen_LayerIDType *layerId_p,
	ADELgen_ImageIDType *imageId_p);
int KVxPDOC_layer_image_id2correction_set_name(const ADELgen_LayerIDType *layerId,
	const ADELgen_ImageIDType *imageId,
	ADELsr_CorrectionSetNameType *correctionSetName_p);
int KVxPDOC_verify_manual_subrecipe_name(const ADELgen_RecipeIDType *subrecipeName,
	bool *manual_p);



#endif // _KVxPDOC_TC_H_
