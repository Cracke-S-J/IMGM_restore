/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 产品号 : 
* 所属组件 : TH
* 模块名称 : THXA
* 文件名称 : THXA.h
* 概要描述 :
*	TH组件THXA对外接口声明
* 历史记录 :
* 版本    日期    作者    内容
* 1.0
*****************************************************************************/
#ifndef _THXA_H_ 
#define _THXA_H_

/*-------------------- 头文件 --------------------*/
#include <base.h>



/*-------------------- 宏定义 --------------------*/
#define THXA_REALTIME_TRACE_PATH 	 "TH/data/ " 
#define THXA_FUNCTION_TRACE_PATH 	 "TH/ " 
#define THXA_ALL_MODES 	 "* " 
#define THXA_ALL_COMPONENTS 	 "* " 
#define THXA_ALL_PROCESSES 	 "* " 
#define THXA_ALL_PROCESSORS 	 "* " 
#define THXA_BASE 	 0x54480000 
#define THXA_TRACE_DISABLED 	 0x0 
#define THXA_TRACE_INT 	 0x1 
#define THXA_TRACE_EXT 	 0x2 
#define THXA_TRACE_TASW 	 0x10 
#define THXA_TRACE_EVENT 	 0x20 
#define THXA_TRACE_SHORT_TERM 	 0x40 
#define THXA_TRACE_LONG_TERM 	 0x80 
#define THXA_TRACE_USER1 	 0x100 
#define THXA_TRACE_USER2 	 0x200 
#define THXA_TRACE_USER3 	 0x400 
#define THXA_TRACE_USER4 	 0x800 
#define THXA_TRACE_USER5 	 0x1000 
#define THXA_TRACE_USER6 	 0x2000 
#define THXA_TRACE_USER7 	 0x4000 
#define THXA_TRACE_USER8 	 0x8000 
#define THXA_TRACE_USER9 	 0x10000 
#define THXA_TRACE_USER10 	 0x20000 
#define THXA_TRACE_USER11 	 0x40000 
#define THXA_TRACE_USER12 	 0x80000 
#define THXA_TRACE_DIAG1 	 0x100000 
#define THXA_TRACE_DIAG2 	 0x200000 
#define THXA_TRACE_DIAG3 	 0x400000 
#define THXA_TRACE_DIAG4 	 0x800000 
#define THXA_TRACE_ALL 	 0xFFFFF 
#define THXA_TRACE_INT_EXT 	 0x3 
#define THXA_TRACE_TPT 	 0xF0 
#define THXA_TRACE_RTT 	 0xFFF03 
#define THXA_TRACE_DIAG 	 0xF00000 
#define THXA_EVENT_SUB_CLIENT_START 	 0x0 
#define THXA_EVENT_SUB_CLIENT_END 	 0x1 
#define THXA_EVENT_SUB_CLIENT_EVENT 	 0x2 
#define THXA_EVENT_SUB_SERVER_START 	 0x3 
#define THXA_EVENT_SUB_SERVER_END 	 0x4 
#define THXA_EVENT_SUB_SERVER_RAISE 	 0x5 
#define THXA_TP_TASKSWITCH 	 0x54480000 
#define THXA_NUM_COMMENTS 	 0x8 
#define THXA_COMMENT_SIZE 	 0x19 
#define THXA_INSTANCE_SIZE 	 0x30 
#define THXA_INSTANCE_LEN 	 0x2F 
#define THXA_FILE_NAME_LEN 	 0x20 
#define THXA_FILE_NAME_SIZE 	 0x21 
#define THXA_TASK_NAME_SIZE 	 0x40 
#define THXA_TASK_NAME_LEN 	 0x3F 
#define THXA_COMP_NAME_LEN 	 0x2F 
#define THXA_COMP_NAME_SIZE 	 0x30 
#define THXA_SAVE_PREFIX_LEN 	 0x64 
#define THXA_SAVE_PREFIX_SIZE 	 0x65 
#define THXA_SAVE_PATH_LEN 	 0x73 
#define THXA_SAVE_PATH_SIZE 	 0x74 
#define THXA_PATH_FILE_LEN 	 0x64 
#define THXA_PATH_FILE_SIZE 	 0x65 







/*----------------------- 枚举定义 -----------------------*/
//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef unsigned int THXA_TRACE_MODE;

typedef enum
{
	THXA_SIM_DISABLED = 0,
	THXA_SIM_MODE_1 = 1,
	THXA_SIM_MODE_2 = 2,
	THXA_SIM_MODE_3 = 3,
} THXA_SIM_MODE;

typedef enum
{
	THXA_REQ_DISABLED = 0,
	THXA_REQ_INT_INPUT = 1,
	THXA_REQ_INT_OUTPUT = 2,
	THXA_REQ_INT_INOUT = 3,
	THXA_REQ_EXT_INPUT = 4,
	THXA_REQ_EXT_OUTPUT = 5,
	THXA_REQ_EXT_INOUT = 6,
	THXA_REQ_INT_EXT_INPUT = 7,
	THXA_REQ_INT_EXT_OUTPUT = 8,
	THXA_REQ_INT_EXT_INOUT = 9,
} THXA_REQ_MODE;

typedef enum
{
	THXA_DEST_DISABLED = 0,
	THXA_DEST_ENABLED = 1,
} THXA_DEST_MODE;

typedef enum
{
	THXA_F_CREATE = 0,
	THXA_F_APPEND = 1,
} THXA_FILE_MODE;

//typedef char THXA_COM_TYPE[*][0x19];

//typedef THXA_COM_TYPE[*] THXA_COM_TYPE[0x8];






/*------------------------ 结构体 ------------------------*/


/*-------------------- 对外全局变量声明 --------------------*/









/*----------------------- 对外接口声明 -----------------------*/


int THXAcheckSimMode(const char *psComponent,     //"ZD"
	THXA_SIM_MODE eSimMode);       //1

int THXAsetMode(const char *psComponent,   //"ZD"
	THXA_SIM_MODE eSimMode,
	THXA_TRACE_MODE eTraceMode,
	THXA_REQ_MODE eReqMode);

int THXAgetMode(const char *psComponent,   //"ZD"
	THXA_SIM_MODE *peSimMode,
	THXA_TRACE_MODE *peTraceMode,
	THXA_REQ_MODE *peReqMode);

//数据打印
void THXAtrace(const char *psComponent,  //组件名或模块名，如“ZD”
	int iMode,           //0/1/2
	const char *psFunction,  //文件名，解析时用__FUNCTION__
	const char *psFormat,
	...);


void THXAtraceTP(const char *psComponent,  //"ZD"
	int iArg2);    //0x5A441041,0x5A441090,0x5A441091,0x5A441040

void THXAdataRequest(const char *psComponent,      //"ZD"
	int iArg2,         //5
	const char *pcFunction,
	int iArg4,         //0
	const char *pcFormat,
	...);








#endif // _THXA_H_

