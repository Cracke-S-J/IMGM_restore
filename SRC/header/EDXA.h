/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 产品号 : 
* 所属组件 : ED
* 模块名称 : EDXA
* 文件名称 : EDXA.h
* 概要描述 :
*	ED组件EDXA对外接口声明
* 历史记录 :
* 版本    日期    作者    内容
* 1.0
*****************************************************************************/
#ifndef _EDXA_H_ 
#define _EDXA_H_

/*-------------------- 头文件 --------------------*/
#include <base.h>



/*-------------------------------- Defines -------------------------------*/
#define EDXA_INTERFACE_NAME 	 "EDXA " 
#define EDXA_SERVER_ADDRESS 	 "EDXA " 



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
	int len;
	int max_len;
	//virtual* array;
	void * array; //待定
} EDXA_virtual_array;


/*-------------------- 对外全局变量声明 --------------------*/








/*----------------------- 对外接口声明 -----------------------*/


//TBD函数返回值类型、参数传值or指针不确定-_-
//void EDXA_NewStatusData(virtual *data_virtual,
//	virtual *validity_virtual);
void EDXA_NewStatusData(void *data_virtual,
	void *validity_virtual);
void EDXA_NewLotProcessingData(varstring *abstract_event_id,
	EDXA_virtual_array *data_virtual,
	EDXA_virtual_array *validity_virtual);
void EDXA_NewMaintenanceData(varstring *abstract_event_id,
	EDXA_virtual_array *data_virtual,
	EDXA_virtual_array *validity_virtual);





#endif // _EDXA_H_

