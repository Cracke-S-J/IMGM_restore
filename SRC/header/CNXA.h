/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 产品号 : 
* 所属组件 : CN
* 模块名称 : CNXA
* 文件名称 : CNXA.h
* 概要描述 :
*	CC组件CNXA对外接口声明
* 历史记录 :
* 版本    日期    作者    内容
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



/*----------------------- 枚举定义 -----------------------*/





/*------------------------ 结构体 ------------------------*/

typedef char CNXA_serv_addr[0x30];

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef unsigned int CNXA_reply_nr_t;

typedef struct
{
	int address;
	CNXA_reply_nr_t reply_nr;
} CNXA_repl_addr;


/*-------------------- 对外全局变量声明 --------------------*/








/*----------------------- 对外接口声明 -----------------------*/


int CNXAtaskInit(const char *server);
void CNXAtaskExit(void);
void CNXAremoveRequestHandler(char* pcModName);




#endif // _CNXA_H_

