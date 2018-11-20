/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* ��Ʒ�� : 
* ������� : ER
* ģ������ : ERXA
* �ļ����� : ERXA.h
* ��Ҫ���� :
*	ER���ERXA����ӿ�����
* ��ʷ��¼ :
* �汾    ����    ����    ����
* 1.0
*****************************************************************************/
#ifndef _ERXA_H_ 
#define _ERXA_H_

/*-------------------- ͷ�ļ� --------------------*/
#include <base.h>
#include <setjmp.h>




/*-------------------- �궨�� --------------------*/







/*----------------------- ö�ٶ��� -----------------------*/







/*------------------------ �ṹ�� ------------------------*/











/*-------------------- ����ȫ�ֱ������� --------------------*/
extern int *ERXA_nr_sigsegv;
extern jmp_buf *ERXA_current_env;
extern void *ERXA_log_exception;







/*----------------------- ����ӿ����� -----------------------*/
void ERXAlogExceptionEx(int iErrorCode,
	int iErrorLink[2],
	char *pcFileName,
	int iLine,
	char *pcSccsId,
	char *pcContext);

void ERXAlogExceptionEx_id(int iErrorCode,  //���γ���Ĵ�����
	int iErrorLink[2],    //һ��ĵ��������ĺ����ķ���ֵ�ŵ�iErrorLink[0]��iErrorLink[1]��ֵΪ0
	int *piErrorCode,     //�����뷵��ֵ�����ﴫָ�룬���ñ��ӿں󣬿ɸı�����뷵��ֵ
	const char *psFile,   //�ļ���������ʱ��__FILE__,
	int iLine,            //��ǰ�кţ�����ʱ��__LINE__, 
	char *psSccsId,       //0, 
	char *psContext);     //ͨ��ΪERXAmakeContext�ķ���ֵ)

void ERXAdeactivate(int iErrorCode,
	int iParam1,
	char *pcFileName,
	int iLine,
	char *pcSccsId,
	...);

void ERXAsignalInstall(void);
void ERXAsignalUnInstall(void);
void ERXAsetLogMode(int LogMode);

//�������������Ϣ�ַ���
char *ERXAmakeContext(const char *psFormat, ...);

//��¼������Ϣ
void ERXAlogExceptionSingleLink(int iErrorCode,
	int iLinkError,     //0
	const char *psFile,   //�ļ���������ʱ��__FILE__
	int iLine,            //��ǰ�кţ�����ʱ��__LINE__
	char *psSccsId,       //0
	char *psContext);     //ͨ��ΪERXAmakeContext�ķ���ֵ

//��¼������Ϣ, ִ�б�������*piErrorCode��ֵΪiNewErrorCode.
void ERXAlogExceptionSingleLink_id(int iNewErrorCode,
	int iLinkError, int *piErrorCode, //����������ͨ��Ϊ���ú����ķ���ֵ��һ����ֵ��һ������ַ
	const char *psFile,               //�ļ���������ʱ��__FILE__
	int iLine,                        //��ǰ�кţ�����ʱ��__LINE__
	char *psSccsId,                   //0
	char *psContext);                 //ͨ��ΪERXAmakeContext�ķ���ֵ


 //��¼������Ϣ
void ERXAshowExceptionSingleLink(int iErrorCode,
	int iLinkError,     //0
	const char *psFile,   //�ļ���������ʱ��__FILE__
	int iLine,            //��ǰ�кţ�����ʱ��__LINE__
	char *psSccsId,       //0
	char *psContext,      //ͨ��ΪERXAmakeContext�ķ���ֵ
	int *select1,
	int *select2);




#endif // _ERXA_H_

