
#include <THXA.h>






int THXAcheckSimMode(const char *psComponent,     //"ZD"
	THXA_SIM_MODE eSimMode)
{
	return 0;
}

int THXAsetMode(const char *psComponent,   //"ZD"
	THXA_SIM_MODE eSimMode,
	THXA_TRACE_MODE eTraceMode,
	THXA_REQ_MODE eReqMode)
{
	return 0;
}

int THXAgetMode(const char *psComponent,   //"ZD"
	THXA_SIM_MODE *peSimMode,
	THXA_TRACE_MODE *peTraceMode,
	THXA_REQ_MODE *peReqMode)
{
	return 0;
}

//���ݴ�ӡ
void THXAtrace(const char *psComponent,  //�������ģ�������硰ZD��
	int iMode,           //0/1/2
	const char *psFunction,  //�ļ���������ʱ��__FUNCTION__
	const char *psFormat,
	...)
{
	return;
}


void THXAtraceTP(const char *psComponent,  //"ZD"
	int iArg2)
{
	return ;
}

void THXAdataRequest(const char *psComponent,      //"ZD"
	int iArg2,         //5
	const char *pcFunction,
	int iArg4,         //0
	const char *pcFormat,
	...)
{
	return;
}




