/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 产品号 : 
* 所属组件 : MC
* 模块名称 : MCXA
* 文件名称 : MCXA.h
* 概要描述 :
*	MC组件MCXA对外接口声明
* 历史记录 :
* 版本    日期    作者    内容
* 1.0
*****************************************************************************/
#ifndef _MCXA_H_ 
#define _MCXA_H_

/*-------------------- 头文件 --------------------*/
#include <base.h>



/*-------------------------------- Defines -------------------------------*/
#define MCXA_MODIFY_LEN 	 0x3C 
#define MCXA_max_operator_len 	 0x10 
#define MCXA_max_operator_size 	 0x11 
#define MCXA_max_reason_len 	 0xFF 
#define MCXA_max_reason_size 	 0x100 



/*-------------------------- Enums and Structs ---------------------------*/

typedef char MCXA_modify_str_array[0x3C];

typedef struct
{
	int machine_nr;
	int release_nr;
	int version_nr;
	int level_nr;
	int sequence_nr;
	MCXA_modify_str_array modify_str;
} MCXA_FILE_HEAD;


/*-------------------- 对外全局变量声明 --------------------*/








/*----------------------- 对外接口声明 -----------------------*/

int MCXA_read(char *pcParam1, char *pcParam2, void *psParam3);                              //add by jiangshan
int MCXA_write(char *pParam1, char *pcParam2, void *Param3, char *pcParam4, char *pcParam5);  //add by jiangshan






#endif // _MCXA_H_

