/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : ASXAxMCxPWQ
* 文件名称 : ASXAxMCxPWQ_tc.h
* 概要描述 :
*	AS组件ASXAxMCxPWQ数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ASXAxMCxPWQ_TC_H_
#define _ASXAxMCxPWQ_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef double ASXAxMCxPWQ_periodic_wq_ord_struct_wq_nf[0x4][0x7];

typedef struct
{
    ASXAxMCxPWQ_periodic_wq_ord_struct_wq_nf wq_nf;
} ASXAxMCxPWQ_periodic_wq_ord_struct;

typedef ASXAxMCxPWQ_periodic_wq_ord_struct ASXAxMCxPWQ_periodic_wq_dir_struct_segment[0x4];

typedef struct
{
    ASXAxMCxPWQ_periodic_wq_dir_struct_segment segment;
} ASXAxMCxPWQ_periodic_wq_dir_struct;

typedef ASXAxMCxPWQ_periodic_wq_dir_struct ASXAxMCxPWQ_periodic_wq_struct_direction[0x2];

typedef struct
{
    ASXAxMCxPWQ_periodic_wq_struct_direction direction;
} ASXAxMCxPWQ_periodic_wq_struct;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int ASXAxMCxPWQ_mc_get_periodic_wq_nf(ASXAxMCxPWQ_periodic_wq_struct *pwq);



#endif // _ASXAxMCxPWQ_TC_H_
