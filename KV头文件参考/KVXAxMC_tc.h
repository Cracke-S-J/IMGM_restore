/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVXAxMC
* 文件名称 : KVXAxMC_tc.h
* 概要描述 :
*	KV组件KVXAxMC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVXAxMC_TC_H_
#define _KVXAxMC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <WPxCHUCK_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id;
    double Z1;
    double Z2;
    double Z3;
    double Z4;
    double Z5;
} KVXAxMC_SUSD_params;

typedef KVXAxMC_SUSD_params KVXAxMC__get_SUSD_params_SUSD_correction_params[0x2];



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int KVXAxMC_get_SUSD_params(KVXAxMC__get_SUSD_params_SUSD_correction_params *SUSD_correction_params);



#endif // _KVXAxMC_TC_H_
