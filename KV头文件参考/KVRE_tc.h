/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVRE
* 文件名称 : KVRE_tc.h
* 概要描述 :
*	KV组件KVRE数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVRE_TC_H_
#define _KVRE_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <SMXA.h> 
#include <ADELsr_tc.h> 
#include <ADELgen_tc.h> 
#include <LEXAxDEF_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef unsigned int KVRE_wafer_sq_number;

typedef struct
{
    int len;
    int max_len;
    KVRE_wafer_sq_number* array;
} KVRE_wafer_sq_number_list;

typedef struct
{
    LEXAxDEF_pdgc_table_id_t table_id;
    bool PDGM_arrived;
    KVRE_wafer_sq_number_list wafer_sq_number_list;
    ADELgen_RecipeIDType SubRecipeName;
    ADELsr_CorrectionSetNameType CorrectionSetName;
} KVRE_PDGM_info;

typedef struct
{
    int len;
    int max_len;
    KVRE_PDGM_info* array;
} KVRE_PDGM_info_list;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int KVRE_initialise(void);
int KVRE_terminate(void);
int KVRE_get_status(SMXA_driverState *driver_state_p);
int KVRE_start_wafer(const bool *skip_PDxC_meas);
int KVRE_finish_wafer(void);
int KVRE_start_lot(void);
int KVRE_finish_lot(const int *nr_succeeded_pdoc_measurements);



#endif // _KVRE_TC_H_
