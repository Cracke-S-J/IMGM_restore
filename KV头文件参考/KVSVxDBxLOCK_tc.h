/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVSVxDBxLOCK
* 文件名称 : KVSVxDBxLOCK_tc.h
* 概要描述 :
*	KV组件KVSVxDBxLOCK数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVSVxDBxLOCK_TC_H_
#define _KVSVxDBxLOCK_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <base.h> 


/*-------------------------------- Defines -------------------------------*/
#define KVSVxDBxLOCK_DEFAULT_TIMEOUT 	 0x3C 
#define KVSVxDBxLOCK_STORE_LOCKS_TIMEOUT 	 0x1E 
#define KVSVxDBxLOCK_LOCKS_EXPIRE_TIME 	 0xA8C00 
#define KVSVxDBxLOCK_PDOC_CORRECTION_LOCKS_SOURCE_ID 	 "settings.KV.pdocCorrLocks " 



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    instanceid taskInstId;
    instanceid corrSetInstId;
    timestamp lockedTime;
} KVSVxDBxLOCK_CorrSetLockItemType;

typedef struct
{
    int len;
    int max_len;
    KVSVxDBxLOCK_CorrSetLockItemType* array;
} KVSVxDBxLOCK_CorrSetLockType;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int KVSVxDBxLOCK_get_lock_item_info(KVSVxDBxLOCK_CorrSetLockType **lock_storage_p,
	const instanceid *instanceID,
	const bool *search_corrSetInstId,
	bool *InstId_locked);
int KVSVxDBxLOCK_create_and_add_lock_item(KVSVxDBxLOCK_CorrSetLockType **lock_storage_p,
	const instanceid *corrSetInstId,
	const instanceid *taskInstId);
int KVSVxDBxLOCK_add_lock_item(KVSVxDBxLOCK_CorrSetLockType **lock_storage_p,
	const KVSVxDBxLOCK_CorrSetLockItemType *lock_item_p);
int KVSVxDBxLOCK_delete_unlocked_item(KVSVxDBxLOCK_CorrSetLockType **lock_storage_p,
	const instanceid *taskInstId);
int KVSVxDBxLOCK_save_lock_data_to_store(KVSVxDBxLOCK_CorrSetLockType **lock_storage_p);
int KVSVxDBxLOCK_read_lock_data_from_store(KVSVxDBxLOCK_CorrSetLockType **lock_storage_p);
int KVSVxDBxLOCK_update_lock_item_info(KVSVxDBxLOCK_CorrSetLockType **lock_storage_p,
	const instanceid *old_InstId,
	const instanceid *new_InstId,
	const bool *update_corrSetInstId);



#endif // _KVSVxDBxLOCK_TC_H_
