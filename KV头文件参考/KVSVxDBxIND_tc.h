/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVSVxDBxIND
* 文件名称 : KVSVxDBxIND_tc.h
* 概要描述 :
*	KV组件KVSVxDBxIND数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVSVxDBxIND_TC_H_
#define _KVSVxDBxIND_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <KVxPDOCxDBDATA_tc.h> 
#include <ADELgen_tc.h> 



/*-------------------------------- Defines -------------------------------*/
 



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    ADELgen_RecipeIDType recipeName;
    ADELgen_LayerIDType layerId;
    ADELgen_ImageIDType imageId;
    int hashValue;
    timestamp creationTime;
    timestamp lastUsageTime;
    instanceid corrSetInstId;
} KVSVxDBxIND_CorrSetIndexItemType;

typedef struct
{
    int len;
    int max_len;
    KVSVxDBxIND_CorrSetIndexItemType* array;
} KVSVxDBxIND_CorrSetIndexListType;

typedef struct
{
    KVSVxDBxIND_CorrSetIndexListType index_list;
    int corrSet_number_limit;
    double corrSet_warning_threshold;
    bool number_limit_exceeded;
    bool warning_threshold_reached;
} KVSVxDBxIND_CorrSetIndexType;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int KVSVxDBxIND_get_index_item_info(KVSVxDBxIND_CorrSetIndexType **index_storage_p,
	const ADELgen_RecipeIDType *recipe_id,
	const ADELgen_LayerIDType *layer_id,
	const ADELgen_ImageIDType *image_id,
	instanceid *corrSetInstId_p,
	bool *item_existing_p,
	int *item_position_p);
int KVSVxDBxIND_create_and_add_index_item(KVSVxDBxIND_CorrSetIndexType **index_storage_p,
	const KVxPDOCxDBDATA_PDOC_AutoCorrectionSetType *correction_set_p,
	const instanceid *corrSetInstId);
int KVSVxDBxIND_add_index_item(KVSVxDBxIND_CorrSetIndexType **index_storage_p,
	KVSVxDBxIND_CorrSetIndexItemType **index_item_p);
int KVSVxDBxIND_delete_index_item(KVSVxDBxIND_CorrSetIndexType **index_storage_p,
	const int *item_position,
	int **index_length_p);
int KVSVxDBxIND_save_index_data_to_store(KVSVxDBxIND_CorrSetIndexType **index_storage_p);
int KVSVxDBxIND_read_index_data_from_store(KVSVxDBxIND_CorrSetIndexType **index_storage_p);
int KVSVxDBxIND_get_index_length(KVSVxDBxIND_CorrSetIndexType **index_storage_p,
	int *index_length_p);
int KVSVxDBxIND_maximum_number_and_threshold_for_sets(KVSVxDBxIND_CorrSetIndexType **index_storage_p,
	const int *maximum_number_sets,
	const double *warning_threshold);



#endif // _KVSVxDBxIND_TC_H_
