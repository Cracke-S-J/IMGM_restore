
#include <ERXA.h>



int *ERXA_nr_sigsegv = NULL;
jmp_buf *ERXA_current_env = NULL;
void *ERXA_log_exception = NULL;







/*----------------------- ����ӿ����� -----------------------*/
void ERXAlogExceptionEx(int iErrorCode,
	int iErrorLink[2],
	char *pcFileName,
	int iLine,
	char *pcSccsId,
	char *pcContext)
{
	return;
}

void ERXAlogExceptionEx_id(int iErrorCode,  //���γ���Ĵ�����
	int iErrorLink[2],    //һ��ĵ��������ĺ����ķ���ֵ�ŵ�iErrorLink[0]��iErrorLink[1]��ֵΪ0
	int *piErrorCode,     //�����뷵��ֵ�����ﴫָ�룬���ñ��ӿں󣬿ɸı�����뷵��ֵ
	const char *psFile,   //�ļ���������ʱ��__FILE__,
	int iLine,            //��ǰ�кţ�����ʱ��__LINE__, 
	char *psSccsId,       //0, 
	char *psContext)     //ͨ��ΪERXAmakeContext�ķ���ֵ)
{
	return;
}

void ERXAdeactivate(int iErrorCode,
	int iParam1,
	char *pcFileName,
	int iLine,
	char *pcSccsId,
	...)
{
	return;
}

void ERXAsignalInstall(void)
{
	return;
}
void ERXAsignalUnInstall(void)
{
	return;
}
void ERXAsetLogMode(int LogMode)
{
	return;
}

//�������������Ϣ�ַ���
char *ERXAmakeContext(const char *psFormat, ...)
{
	return "some error";
}

//��¼������Ϣ
void ERXAlogExceptionSingleLink(int iErrorCode,
	int iLinkError,     //0
	const char *psFile,   //�ļ���������ʱ��__FILE__
	int iLine,            //��ǰ�кţ�����ʱ��__LINE__
	char *psSccsId,       //0
	char *psContext)
{
	return;
}//ͨ��ΪERXAmakeContext�ķ���ֵ

//��¼������Ϣ, ִ�б�������*piErrorCode��ֵΪiNewErrorCode.
void ERXAlogExceptionSingleLink_id(int iNewErrorCode,
	int iLinkError, int *piErrorCode, //����������ͨ��Ϊ���ú����ķ���ֵ��һ����ֵ��һ������ַ
	const char *psFile,               //�ļ���������ʱ��__FILE__
	int iLine,                        //��ǰ�кţ�����ʱ��__LINE__
	char *psSccsId,                   //0
	char *psContext)
{
	return;
}//ͨ��ΪERXAmakeContext�ķ���ֵ


 //��¼������Ϣ
void ERXAshowExceptionSingleLink(int iErrorCode,
	int iLinkError,     //0
	const char *psFile,   //�ļ���������ʱ��__FILE__
	int iLine,            //��ǰ�кţ�����ʱ��__LINE__
	char *psSccsId,       //0
	char *psContext,      //ͨ��ΪERXAmakeContext�ķ���ֵ
	int *select1,
	int *select2)
{
	return;
}



