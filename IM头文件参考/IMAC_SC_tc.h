/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMAC_SC
* 文件名称 : IMAC_SC_tc.h
* 概要描述 :
*	IM组件IMAC_SC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMAC_SC_TC_H_
#define _IMAC_SC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <IMAC_DEF_tc.h> 
#include <VIPRxSCEN_tc.h> 




/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    VIPRxSCEN_scenario_input_struct scen_input;
    IMAC_DEF_input_struct input;
} IMAC_SC_scenario_change_serial_numbers;

typedef struct
{
    VIPRxSCEN_scenario_input_struct scen_input;
    IMAC_DEF_input_struct input;
} IMAC_SC_scenario_new_machine;

typedef struct
{
    VIPRxSCEN_scenario_input_struct scen_input;
    IMAC_DEF_input_struct input;
} IMAC_SC_scenario_new_epa_expose;

typedef struct
{
    VIPRxSCEN_scenario_input_struct scen_input;
    IMAC_DEF_input_struct input;
} IMAC_SC_scenario_new_epa_measure;

typedef struct
{
    VIPRxSCEN_scenario_input_struct scen_input;
    IMAC_DEF_input_struct input;
} IMAC_SC_scenario_new_goab_chuck_1;

typedef struct
{
    VIPRxSCEN_scenario_input_struct scen_input;
    IMAC_DEF_input_struct input;
} IMAC_SC_scenario_new_goab_chuck_2;

typedef struct
{
    VIPRxSCEN_scenario_input_struct scen_input;
    IMAC_DEF_input_struct input;
} IMAC_SC_scenario_change_mmo_grid_level;

typedef struct
{
    VIPRxSCEN_scenario_input_struct scen_input;
    IMAC_DEF_input_struct input;
} IMAC_SC_scenario_recovery;



#endif // _IMAC_SC_TC_H_
