/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* ��Ʒ�� : 
* ������� : ED
* ģ������ : EDXA
* �ļ����� : EDXA.h
* ��Ҫ���� :
*	ED���EDXA����ӿ�����
* ��ʷ��¼ :
* �汾    ����    ����    ����
* 1.0
*****************************************************************************/
#ifndef _EDXA_H_ 
#define _EDXA_H_

/*-------------------- ͷ�ļ� --------------------*/
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
	void * array; //����
} EDXA_virtual_array;


/*-------------------- ����ȫ�ֱ������� --------------------*/








/*----------------------- ����ӿ����� -----------------------*/


//TBD��������ֵ���͡�������ֵorָ�벻ȷ��-_-
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

