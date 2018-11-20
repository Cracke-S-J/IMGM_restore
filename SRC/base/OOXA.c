
#include <OOXA.h>







int OOXA_supports_interface(const OOXA_interface_name_t *interface_name,
	bool *supported)
{
	return 0;
}
int OOXA_get_interfaces(OOXA_interface_arr_t *interface_arr)
{
	return 0;
}



int OOXA_bind(void *psModObject, char* pcModName)
{
	return 0;
}
void OOXA_flush(void *psModObject)
{
	return;
}
void OOXA_unbind(char* pcModName)
{
	return;
}
void OOXA_release_buffer(void *pBuffer)
{
	return;
}
void OOXA_release(void *pBuffer)
{
	return;
}
int OOXA_send_req(void *psSingleton,
	char *psModName,             //"ZDXA:"
	int iArg3,                //0
	int iArg4,                //0x73599554
	int iCheckModeResult,     //THXAcheckSimMode()
	void *pBuffer,
	int retry_interval,                //0
	int timeout)

{
	return 0;
}
int OOXA_allocate_parameter(int dataLen, void **parameter, bool *isOk)

{
	return 0;
}


int OOXA_send_receive(OOXA_object_t* pObj,
	char* psModName,
	int methodCode,
	int errorCode,
	void* req_msg_data,
	int req_msg_dataLen,
	void** rep_msg_data,
	int* act_len,
	int timeout,
	int retry_interval)
{
	return 0;
}

int OOXA_interface_subscribe(void *psSingleton,
	char* psModName,            //local_event_id_ZDXA_camera_state_change
	int func_code,              //0x182C9FF
	int iCheckModeResult,   //THXAcheckSimMode()
	int iArg5,               //unknown
	int iArg6,               //unknown
	int retry_interval,               //unknown
	int timeout)
{
	return 0;
}
int OOXA_interface_unsubscribe(void *psSingleton,
	char* psModName,    //local_event_id_ZDXA_camera_state_change
	int func_code,      //0x182C9FF
	int iArg4)

{
	return 0;
}

int OOXA_receive_wait(void *psSingleton,
	char *psModName,        //"ZDXA:"
	int iArg3,           //0
	int iArg4,           //x==-2?60;x 
	void **ppBuffer1,
	int *piBufferSize1,
	void **ppBuffer2,
	int *piBufferSize2,
	int(**ppf)())

{
	return 0;
}
// int OOXA_find_method(void *psSingleton,
//	char *psModName,      //"ZDXA:"
//	int iArg3,         //7,5,6,8,4
//	int iArg4,         //0x37DAB1CE,0x4B86FE4D,0x13389BA,0x25138271,0x5F2AF200
//	int(**ppf)());
int OOXA_find_method(OOXA_object_t* pObj,
	char* psModName,
	int methodCode,
	int Checksum,
	void** asynchronousMethod)
{
	return 0;
}

int OOXA_send_trigger(void *psSingleton,
	char *psModName,     //"ZDXA:"
	int iArg3,        //5
	int iArg4,        //0x4B86FE4D
	void *pBuffer,
	int retry_interval,        //0
	int timeout)
{
	return 0;
}

int OOXA_allocate_buffer(int iBufferSize,
	void **ppBuffer)
{
	return 0;
}
int OOXA_allocate_event_buffer(int iBufferSize,
	void **ppBuffer)
{
	return 0;
}
int OOXA_local_buffered_raise(void *psSingleton,
	char *psModName,     //"ZDXA:"
	void *pBuffer,
	int iBufferSize,
	int iParam4)
{
	return 0;
}

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
	int iArg12)
{
	return 0;
}


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
	int iParam5)
{
	return;
}

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
	void **ppParam3)
{
	return 0;
}

void OOXA_lookup(char *pParam1, int *iParam2)
{
	return;
}

void OOXA_log_communication_failure(void *psSingleton,
	int func_code, char *function)
{
	return;
}


