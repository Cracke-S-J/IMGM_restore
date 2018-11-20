/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVXPKU
* 文件名称 : KVXPKU_tc.h
* 概要描述 :
*	KV组件KVXPKU数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVXPKU_TC_H_
#define _KVXPKU_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <KWXA_tc.h> 
#include <WPxCHUCK_tc.h> 



/*-------------------------------- Defines -------------------------------*/
#define KVXPKU_ERR_BASE 	 0x4B560080 
#define KVXPKU_TPT_BASE 	 0x4B56FB00 
#define KVXPKU_SYS_ERROR 	 0x4B560080 
#define KVXPKU_STATE_ERROR 	 0x4B560081 
#define KVXPKU_TPT_GET_WAFER_MAP 	 0x4B56FB00 
#define KVXPKU_TPT_GET_WAFERMAP_FINGERPRINTS 	 0x4B56FB01 



/*-------------------------- Enums and Structs ---------------------------*/



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int KVXPKU_get_wafer_map(const WPxCHUCK_chuck_id_enum *chuck_id,
	KWXA_wafer_map *wafer_map_p);
int KVXPKU_get_wafermap_fingerprints(const WPxCHUCK_chuck_id_enum *chuck_id,
	bool *fingerprints_available,
	KWXA_fingerprint_mapping_list *fingerprint_mapping_list,
	KWXA_small_wafer_map *wafermap_fingerprints);



#endif // _KVXPKU_TC_H_
