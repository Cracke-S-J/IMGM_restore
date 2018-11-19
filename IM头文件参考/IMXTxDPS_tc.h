/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMXTxDPS
* 文件名称 : IMXTxDPS_tc.h
* 概要描述 :
*	IM组件IMXTxDPS数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMXTxDPS_TC_H_
#define _IMXTxDPS_TC_H_

/*------------------------------- Includes -------------------------------*/
//extern MIIFxVPxWS_SPM_2SIDED_X_EXP  OFF  //52, 53
//extern MIIFxVPxWS_SPM_2SIDED_X_MEAS  OFF  //50, 53



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    IMXTxDPS_M_X1 = 0,
    IMXTxDPS_M_Y = 1,
    IMXTxDPS_M_X2 = 2,
    IMXTxDPS_E_X1 = 3,
    IMXTxDPS_E_Y = 4,
    IMXTxDPS_E_X2 = 5,
} IMXTxDPS_sensor_enum;

typedef struct
{
    IMXTxDPS_sensor_enum sensor;
    bool enabled;
} IMXTxDPS_sensor_enable_t;

typedef IMXTxDPS_sensor_enable_t IMXTxDPS_sensor_arr[0x6];



#endif // _IMXTxDPS_TC_H_
