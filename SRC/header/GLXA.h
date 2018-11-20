/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* ��Ʒ�� : 
* ������� : GL
* ģ������ : GLXA
* �ļ����� : GLXA.h
* ��Ҫ���� :
*	GL���GLXA����ӿ�����
* ��ʷ��¼ :
* �汾    ����    ����    ����
* 1.0
*****************************************************************************/
#ifndef _GLXA_H_ 
#define _GLXA_H_

/*-------------------- ͷ�ļ� --------------------*/
#include <base.h>



/*-------------------------------- Defines -------------------------------*/
#define GLXA_MAX_STR_LEN 	 0x3FF 
#define GLXA_MAX_STR_SIZE 	 0x400 



/*-------------------------- Enums and Structs ---------------------------*/

typedef char GLXA_str[0x3FF];

typedef struct
{
	int s;
	int us;
} GLXA_timestamp;

typedef struct
{
	GLXA_timestamp time;
	GLXA_str line2;
	GLXA_str line3;
} GLXA_marker;

typedef struct
{
	GLXA_timestamp time;
	GLXA_str line2;
	GLXA_str line3;
} GLXA_event;


/*-------------------- ����ȫ�ֱ������� --------------------*/








/*----------------------- ����ӿ����� -----------------------*/








#endif // _GLXA_H_

