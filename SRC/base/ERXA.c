
#include <ERXA.h>



int *ERXA_nr_sigsegv = NULL;
jmp_buf *ERXA_current_env = NULL;
void *ERXA_log_exception = NULL;







/*----------------------- 对外接口声明 -----------------------*/
void ERXAlogExceptionEx(int iErrorCode,
	int iErrorLink[2],
	char *pcFileName,
	int iLine,
	char *pcSccsId,
	char *pcContext)
{
	return;
}

void ERXAlogExceptionEx_id(int iErrorCode,  //本次出错的错误码
	int iErrorLink[2],    //一般的调用其他的函数的返回值放到iErrorLink[0]，iErrorLink[1]赋值为0
	int *piErrorCode,     //错误码返回值，这里传指针，调用本接口后，可改变错误码返回值
	const char *psFile,   //文件名，解析时用__FILE__,
	int iLine,            //当前行号，解析时用__LINE__, 
	char *psSccsId,       //0, 
	char *psContext)     //通常为ERXAmakeContext的返回值)
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

//构造错误描述信息字符串
char *ERXAmakeContext(const char *psFormat, ...)
{
	return "some error";
}

//记录错误信息
void ERXAlogExceptionSingleLink(int iErrorCode,
	int iLinkError,     //0
	const char *psFile,   //文件名，解析时用__FILE__
	int iLine,            //当前行号，解析时用__LINE__
	char *psSccsId,       //0
	char *psContext)
{
	return;
}//通常为ERXAmakeContext的返回值

//记录错误信息, 执行本函数后*piErrorCode赋值为iNewErrorCode.
void ERXAlogExceptionSingleLink_id(int iNewErrorCode,
	int iLinkError, int *piErrorCode, //这两个参数通常为调用函数的返回值，一个传值，一个传地址
	const char *psFile,               //文件名，解析时用__FILE__
	int iLine,                        //当前行号，解析时用__LINE__
	char *psSccsId,                   //0
	char *psContext)
{
	return;
}//通常为ERXAmakeContext的返回值


 //记录错误信息
void ERXAshowExceptionSingleLink(int iErrorCode,
	int iLinkError,     //0
	const char *psFile,   //文件名，解析时用__FILE__
	int iLine,            //当前行号，解析时用__LINE__
	char *psSccsId,       //0
	char *psContext,      //通常为ERXAmakeContext的返回值
	int *select1,
	int *select2)
{
	return;
}



