/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 产品号 : 
* 所属组件 : OO
* 模块名称 : OOXA
* 文件名称 : OOXA.h
* 概要描述 :
*	OO组件OOXA对外接口声明
* 历史记录 :
* 版本    日期    作者    内容
* 1.0
*****************************************************************************/
#ifndef _OOXA_H_ 
#define _OOXA_H_

/*-------------------- 头文件 --------------------*/
#include <base.h>
#include <THXA.h>


/*-------------------- 宏定义 --------------------*/




/*----------------------- 枚举定义 -----------------------*/





/*------------------------ 结构体 ------------------------*/

typedef char OOXA_interface_name_t[0xF];

typedef struct
{
	int len;
	int max_len;
	OOXA_interface_name_t* array;
} OOXA_interface_arr_t;


typedef struct
{
	//不知道里面有啥
} OOXA_object_t;


/*-------------------- 对外全局变量声明 --------------------*/











/*----------------------- 对外接口声明 -----------------------*/


//extern void *OOXA_interface_info;


int OOXA_supports_interface(const OOXA_interface_name_t *interface_name,
	bool *supported);
int OOXA_get_interfaces(OOXA_interface_arr_t *interface_arr);



int OOXA_bind(void *psModObject, char* pcModName);
void OOXA_flush(void *psModObject);
void OOXA_unbind(char* pcModName);
void OOXA_release_buffer(void *pBuffer);
void OOXA_release(void *pBuffer);
int OOXA_send_req(void *psSingleton,
	char *psModName,             //"ZDXA:"
	int iArg3,                //0
	int iArg4,                //0x73599554
	int iCheckModeResult,     //THXAcheckSimMode()
	void *pBuffer,
	int retry_interval,                //0
	int timeout);               //0x3C
int OOXA_allocate_parameter(int dataLen, void **parameter, bool *isOk);    //0


int OOXA_send_receive(OOXA_object_t* pObj,
	char* psModName,
	int methodCode,
	int errorCode,
	void* req_msg_data,
	int req_msg_dataLen,
	void** rep_msg_data,
	int* act_len,
	int timeout,
	int retry_interval);

int OOXA_interface_subscribe(void *psSingleton,
	char* psModName,            //local_event_id_ZDXA_camera_state_change
	int func_code,              //0x182C9FF
	int iCheckModeResult,   //THXAcheckSimMode()
	int iArg5,               //unknown
	int iArg6,               //unknown
	int retry_interval,               //unknown
	int timeout);             //0x3C
int OOXA_interface_unsubscribe(void *psSingleton,
	char* psModName,    //local_event_id_ZDXA_camera_state_change
	int func_code,      //0x182C9FF
	int iArg4);      //unknown

int OOXA_receive_wait(void *psSingleton,
	char *psModName,        //"ZDXA:"
	int iArg3,           //0
	int iArg4,           //x==-2?60;x 
	void **ppBuffer1,
	int *piBufferSize1,
	void **ppBuffer2,
	int *piBufferSize2,
	int(**ppf)());
// int OOXA_find_method(void *psSingleton,
//	char *psModName,      //"ZDXA:"
//	int iArg3,         //7,5,6,8,4
//	int iArg4,         //0x37DAB1CE,0x4B86FE4D,0x13389BA,0x25138271,0x5F2AF200
//	int(**ppf)());
int OOXA_find_method(OOXA_object_t* pObj,
	char* psModName,
	int methodCode,
	int Checksum,
	void** asynchronousMethod);

int OOXA_send_trigger(void *psSingleton,
	char *psModName,     //"ZDXA:"
	int iArg3,        //5
	int iArg4,        //0x4B86FE4D
	void *pBuffer,
	int retry_interval,        //0
	int timeout);       //0x3C

int OOXA_allocate_buffer(int iBufferSize,
	void **ppBuffer);
int OOXA_allocate_event_buffer(int iBufferSize,
	void **ppBuffer);
int OOXA_local_buffered_raise(void *psSingleton,
	char *psModName,     //"ZDXA:"
	void *pBuffer,
	int iBufferSize,
	int iParam4);

int OOXA_send_fcn(void *psSingleton,
	char *psModName,            //"ZDXA:" ,"ZDXPZD:"
	int iArg3,               //2,7,8
	int iArg4,               //0x50DFBFD4,0x37DAB1CE,0x25138271,0x24C30496
	int iCheckModeResult,    //THXAcheckSimMode 
	void *pBuffer,
	int iBufferSize,         //0
	int iArg8,               //0x3C
	void(*pfArg9)(),                //unknown
	int iArg10,               //unknown
	void(*pfArg11),
	int iArg12);              //0x3C


//void OOXA_send_reply(double *pdParam1,
//	char *psModName,
//	int iParam2,
//	int iErrorCode,
//	void *Param3,
//	int iParam6);
void OOXA_send_reply(void *pdParam0,
	char *psModName,
	int iParam2,
	int iErrorCode,
	void *Param4,
	int iParam5);

//void OOXA_server_remote_subscribe_unsubscribe(int iParam1,
//	double *pdParam2,
//	int iParam3,
//	int iParam4,
//	LOCAL_EVENT_ID_ZDXA_CAMERA_STATE_CHANGE_STRUCT *psLocalEventIdZDXACameraStateChange);
//void OOXA_traverse_start(OBJECT_STRUCT *psZdObject,
//	LOCAL_EVENT_ID_ZDXA_CAMERA_STATE_CHANGE_STRUCT *psParam1,
//	int *iParam3,
//	TRAVERSE_STRUCT **ppsParam2);
//void OOXA_traverse_next(LOCAL_EVENT_ID_ZDXA_CAMERA_STATE_CHANGE_STRUCT *psParam1,
//	int *piParam2,
//	TRAVERSE_STRUCT **ppsParam3);
//void OOXA_send_event(double *pdParam1,
//	LOCAL_EVENT_ID_ZDXA_CAMERA_STATE_CHANGE_STRUCT *psParam2,
//	char *pcParam3);

int OOXA_generic_construct(int iParam1,
	void *pZdClassInfo,
	void **ppParam3);

void OOXA_lookup(char *pParam1, int *iParam2);      //add by gmm

void OOXA_log_communication_failure(void *psSingleton,
	int func_code, char *function);


#endif // _OOXA_IF_H_

