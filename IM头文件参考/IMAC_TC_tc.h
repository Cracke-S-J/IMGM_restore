/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMAC_TC
* 文件名称 : IMAC_TC_tc.h
* 概要描述 :
*	IM组件IMAC_TC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMAC_TC_TC_H_
#define _IMAC_TC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <IMAC_SC_tc.h> 
#include <IMAC_DC_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    IMAC_DC_dc_struct dc_struct;
    IMAC_SC_scenario_change_serial_numbers change_serial_numbers_scenario;
    IMAC_SC_scenario_new_machine new_machine_scenario;
    IMAC_SC_scenario_new_epa_expose new_epa_expose_scenario;
    IMAC_SC_scenario_new_epa_measure new_epa_measure_scenario;
    IMAC_SC_scenario_new_goab_chuck_1 new_goab_chuck_1_scenario;
    IMAC_SC_scenario_new_goab_chuck_2 new_goab_chuck_2_scenario;
    IMAC_SC_scenario_change_mmo_grid_level change_mmo_grid_level_scenario;
    IMAC_SC_scenario_recovery recovery_scenario;
} IMAC_TC_tc_struct;



#endif // _IMAC_TC_TC_H_
