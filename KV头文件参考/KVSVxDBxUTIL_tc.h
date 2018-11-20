/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVSVxDBxUTIL
* 文件名称 : KVSVxDBxUTIL_tc.h
* 概要描述 :
*	KV组件KVSVxDBxUTIL数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVSVxDBxUTIL_TC_H_
#define _KVSVxDBxUTIL_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <POxSVCxLIST_tc.h> 
#include <KVSVxDBxIND_tc.h> 
#include <ADELdirectory_tc.h> 
#include <ADELgen_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int KVSVxDBxUTIL_create_hash(const ADELgen_RecipeIDType *recipe_id,
	const ADELgen_LayerIDType *layer_id,
	const ADELgen_ImageIDType *image_id,
	int *hash_key);
int KVSVxDBxUTIL_get_ADELDirectoryHeader(ADELgen_SourceDataInfoType2 *Header);
int KVSVxDBxUTIL_get_ADELDirectoryInput(const varstring *document_type,
	ADELdirectory_InputType *Input);
int KVSVxDBxUTIL_get_ADELDirectoryList(KVSVxDBxIND_CorrSetIndexType **index_storage_p,
	const POxSVCxLIST_ParameterListType *parameter_list_p,
	ADELdirectory_EntryListType *entryList_p);
int KVSVxDBxUTIL_get_Comment(ADELgen_CommentListType *Comment);
int KVSVxDBxUTIL_get_DocumentTypeVersion(const ADELgen_DocTypeType *document_type,
	char *DocumentTypeVersion);
int KVSVxDBxUTIL_obtain_search_filters(const POxSVCxLIST_ParameterListType *parameters_p,
	ADELgen_RecipeIDType *recipeFilter,
	ADELgen_LayerIDType *layerFilter,
	ADELgen_ImageIDType *imageFilter);
int KVSVxDBxUTIL_register_at_PO(char **document_type,
	char **root_element,
	char **DD_definition);
int KVSVxDBxUTIL_unregister_at_PO(char **document_type);
int KVSVxDBxUTIL_read_document_path(varstring **document_type,
	varstring **document_path,
	ADELgen_RecipeIDType *recipe_id,
	ADELgen_RecipeIDType *layer_id,
	ADELgen_ImageIDType *image_id);



#endif // _KVSVxDBxUTIL_TC_H_
