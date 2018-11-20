/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVSVxDB
* 文件名称 : KVSVxDB_tc.h
* 概要描述 :
*	KV组件KVSVxDB数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVSVxDB_TC_H_
#define _KVSVxDB_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <POXA_tc.h> 
#include <POxSVCxLIST_tc.h> 
#include <KVxPDOCxDBDATA_tc.h> 
#include <ADELgen_tc.h> 
#include <KVSVxDBxLOCK_tc.h> 
#include <KVSVxDBxIND_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    KVSVxDBxIND_CorrSetIndexType index_storage;
    KVSVxDBxLOCK_CorrSetLockType lock_storage;
} KVSVxDB_CorrSetInfoType;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int KVSVxDB_check_correction_set_exists(KVSVxDB_CorrSetInfoType **info_storage_p,
	const ADELgen_RecipeIDType *recipe_id,
	const ADELgen_LayerIDType *layer_id,
	const ADELgen_ImageIDType *image_id,
	bool *item_existing_p);
int KVSVxDB_update_correction_set(KVSVxDB_CorrSetInfoType **info_storage_p,
	const ADELgen_RecipeIDType *recipe_id,
	const ADELgen_LayerIDType *layer_id,
	const ADELgen_ImageIDType *image_id);
int KVSVxDB_lock_correction_set(KVSVxDB_CorrSetInfoType **info_storage_p,
	const ADELgen_RecipeIDType *recipe_id,
	const ADELgen_LayerIDType *layer_id,
	const ADELgen_ImageIDType *image_id,
	const instanceid *taskInstId);
int KVSVxDB_reattach_locked_correction_set(KVSVxDB_CorrSetInfoType **info_storage_p,
	const instanceid *old_taskInstId,
	const instanceid *new_taskInstId);
int KVSVxDB_unlock_correction_set(KVSVxDB_CorrSetInfoType **info_storage_p,
	const instanceid *taskInstId);
int KVSVxDB_get_correction_set(KVSVxDB_CorrSetInfoType **info_storage_p,
	const ADELgen_RecipeIDType *recipe_id,
	const ADELgen_LayerIDType *layer_id,
	const ADELgen_ImageIDType *image_id,
	KVxPDOCxDBDATA_PDOC_AutoCorrectionSetType *correction_set_p);
int KVSVxDB_store_correction_set(KVSVxDB_CorrSetInfoType **info_storage_p,
	KVxPDOCxDBDATA_PDOC_AutoCorrectionSetType **correction_set_p);
int KVSVxDB_list_filtered_correction_sets(KVSVxDB_CorrSetInfoType **info_storage_p,
	varstring **document_type,
	POxSVCxLIST_ParameterListType **parameters,
	virtual *list);
int KVSVxDB_delete_filtered_correction_sets(KVSVxDB_CorrSetInfoType **info_storage_p,
	varstring **document_type,
	varstring **document_path,
	POXA_var_string_array_t **parameters);
int KVSVxDB_delete_correction_set(KVSVxDB_CorrSetInfoType **info_storage_p,
	const ADELgen_RecipeIDType *recipe_id,
	const ADELgen_LayerIDType *layer_id,
	const ADELgen_ImageIDType *image_id,
	const bool *force_delete);
int KVSVxDB_delete_oldest_correction_set(KVSVxDB_CorrSetInfoType **info_storage_p);
int KVSVxDB_convert_dp_stores(KVSVxDB_CorrSetInfoType **info_storage_p);
int KVSVxDB_reset_index_lock_storages(KVSVxDB_CorrSetInfoType **info_storage_p);
int KVSVxDB_clear_dp_stores(char **dp_store_name);
int KVSVxDB_check_correction_set_locked(KVSVxDB_CorrSetInfoType **info_storage_p,
	const ADELgen_RecipeIDType *recipe_id,
	const ADELgen_LayerIDType *layer_id,
	const ADELgen_ImageIDType *image_id,
	bool *corrSetInst_locked);
int KVSVxDB_set_auto_PDOC_corr_sets_params(KVSVxDB_CorrSetInfoType **info_storage_p,
	const double *warning_threshold);



#endif // _KVSVxDB_TC_H_
