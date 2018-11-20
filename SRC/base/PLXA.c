
#include <PLXA.h>





int PLXAshm_attach(int id, _SHM_PTR_ *pShareMemory, int *iParam2)
{
	return 0;
}
int PLXAshm_detach(_SHM_PTR_ *pShareMemory)
{
	return 0;
}
int PLXAshm_create(int iID, unsigned int uiSize)
{
	return 0;
}
int PLXAshm_delete(int iID)
{
	return 0;
}
int PLXAmem_malloc(int iSize, void **pMemory)
{
	return 0;
}
int PLXAmem_calloc(int iNr, int iSize, void **pMemory)
{
	return 0;
}
int PLXAmem_realloc(int iNewSize, void **pMemory)
{
	return 0;
}
int PLXAmem_free(void **pBuffer)
{
	return 0;
}

//×Ö·û´®¿½±´
int PLXAstr_strlcpy(char *dst, const char *src, int size)
{
	return 0;
}
//×Ö·û´®Á¬½Ó
int PLXAstr_strlcat(char *dst, const char *src, int size)
{
	return 0;
}
int PLXAstr_snprintf(char *s, int iSize, char *pcFormat, ...)
{
	return 0;
}
int PLXAstr_vsnprintf(char *s, int iSize, char *pcFormat, va_list param)
{
	return 0;
}

int PLXAtimeinterval_start(int *pParam1)
{
	return 0;
}
int PLXAtimeinterval_elapsed(int iParam1, unsigned long *piParam2)
{
	return 0;
}
int PLXAtask_suspend(int dParam1)
{
	return 0;
}
int PLXAtimestamp_get(timestamp *pParam1)
{
	return 0;
}
int PLXAtimestamp_tostring(timestamp *pdParam1, char *Param2)
{
	return 0;
}
int PLXAtime_tostring(time_t Param1, char *Param2)
{
	return 0;
}

int PLXAerror_get(int *pParam1)
{
	return 0;
}

int PLXAfile_remove(const char *psFileName)
{
	return 0;
}
void PLXAfile_rename(const char *psFileNameOld, const char *psFileNameNew)
{
	return;
}


int PLXAdir_list(char *path, char *filter, char c, char **list)
{
	return 0;
}



