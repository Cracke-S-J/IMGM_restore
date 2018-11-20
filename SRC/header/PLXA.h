/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 产品号 : 
* 所属组件 : PL
* 模块名称 : PLXA
* 文件名称 : PLXA.h
* 概要描述 :
*	PL组件PLXA对外接口声明
* 历史记录 :
* 版本    日期    作者    内容
* 1.0
*****************************************************************************/
#ifndef _PLXA_H_ 
#define _PLXA_H_

/*-------------------- 头文件 --------------------*/
#include <base.h>
#include <stdio.h>
#include <time.h>


/*-------------------------------- Defines -------------------------------*/
#define PLXA_TASKNAME_SIZE 	 0x40 
#define PLXA_TIME_LEN 	 0x1F 
#define PLXA_TIME_SIZE 	 0x20 
#define PLXA_TIMESTAMP_LEN 	 0x29 
#define PLXA_TIMESTAMP_SIZE 	 0x2A 
#define PLXA_PATH_MAX_SIZE 	 0x100 
#define PLXA_PATH_MAX_LEN 	 0xFF 



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
	PLXA_SEMB_LOCKED = 0,
	PLXA_SEMB_UNLOCKED = 1,
} PLXA_semB_values;

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef unsigned int PLXA_sem_handle;

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef unsigned int PLXA_sem_id;

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef unsigned int PLXA_swtimer_handle;

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef unsigned int PLXA_shm_id;

typedef char PLXA_filename[0xFF];


/*-------------------- 对外全局变量声明 --------------------*/









/*----------------------- 对外接口声明 -----------------------*/


int PLXAshm_attach(int id, _SHM_PTR_ *pShareMemory, int *iParam2);
int PLXAshm_detach(_SHM_PTR_ *pShareMemory);
int PLXAshm_create(int iID, unsigned int uiSize);
int PLXAshm_delete(int iID);
int PLXAmem_malloc(int iSize, void **pMemory);
int PLXAmem_calloc(int iNr, int iSize, void **pMemory);
int PLXAmem_realloc(int iNewSize, void **pMemory);
int PLXAmem_free(void **pBuffer);//ZDSPTI by liuwenjia

//字符串拷贝
int PLXAstr_strlcpy(char *dst, const char *src, int size);
//字符串连接
int PLXAstr_strlcat(char *dst, const char *src, int size);
int PLXAstr_snprintf(char *s, int iSize, char *pcFormat, ...);
int PLXAstr_vsnprintf(char *s, int iSize, char *pcFormat, va_list param);

int PLXAtimeinterval_start(int *pParam1);      //mod by liuwenjia
int PLXAtimeinterval_elapsed(int iParam1, unsigned long *piParam2);
int PLXAtask_suspend(int dParam1);              //ZDAPSF 袁
int PLXAtimestamp_get(timestamp *pParam1);//参数类型未知      ZDAPSF 袁
int PLXAtimestamp_tostring(timestamp *pdParam1, char *Param2);   //add by szm (_text:0002D374)
int PLXAtime_tostring(time_t Param1, char *Param2);  //_text:00006A08 add by fengkeping

int PLXAerror_get(int *pParam1);  //_text:00006678 add by fengkeping

int PLXAfile_remove(const char *psFileName);    //add by liuwenjia
void PLXAfile_rename(const char *psFileNameOld, const char *psFileNameNew);


int PLXAdir_list(char *path, char *filter, char c, char **list);




#endif // _PLXA_H_

