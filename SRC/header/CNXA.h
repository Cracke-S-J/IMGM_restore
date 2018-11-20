/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* ��Ʒ�� : 
* ������� : CN
* ģ������ : CNXA
* �ļ����� : CNXA.h
* ��Ҫ���� :
*	CC���CNXA����ӿ�����
* ��ʷ��¼ :
* �汾    ����    ����    ����
* 1.0
*****************************************************************************/
#ifndef _CNXA_H_ 
#define _CNXA_H_

#include <base.h>



#define CNXA_SERV_ADDR_LEN 	 0x30 
#define CNXA_NO_WAIT 	 0x0 
#define CNXA_FOREVER_WAIT 	 -1 
#define CNXA_DEF_SND_RQ_WAIT 	 0x96 
#define CNXA_DEFAULT_TIMEOUT 	 -2 



/*----------------------- ö�ٶ��� -----------------------*/





/*------------------------ �ṹ�� ------------------------*/

typedef char CNXA_serv_addr[0x30];

//TBD---�������������-_-��˭ȷ���˸����ң�
typedef unsigned int CNXA_reply_nr_t;

typedef struct
{
	int address;
	CNXA_reply_nr_t reply_nr;
} CNXA_repl_addr;


/*-------------------- ����ȫ�ֱ������� --------------------*/








/*----------------------- ����ӿ����� -----------------------*/


int CNXAtaskInit(const char *server);
void CNXAtaskExit(void);
void CNXAremoveRequestHandler(char* pcModName);




#endif // _CNXA_H_

