/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMXTxRCT
* 文件名称 : IMXTxRCT_tc.h
* 概要描述 :
*	IM组件IMXTxRCT数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMXTxRCT_TC_H_
#define _IMXTxRCT_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    IMXTxRCT_SPEED_150 = 5,
    IMXTxRCT_SPEED_300 = 7,
    IMXTxRCT_SPEED_600 = 8,
    IMXTxRCT_SPEED_1200 = 9,
    IMXTxRCT_SPEED_2400 = 11,
    IMXTxRCT_SPEED_4800 = 12,
    IMXTxRCT_SPEED_9600 = 13,
    IMXTxRCT_SPEED_19200 = 14,
    IMXTxRCT_SPEED_38400 = 15,
    IMXTxRCT_SPEED_57600 = 16,
} IMXTxRCT_serial_speed_enum;

typedef enum
{
    IMXTxRCT_PORT_TTYA = 0,
    IMXTxRCT_PORT_TTYB = 1,
} IMXTxRCT_serial_port_enum;

typedef struct
{
    IMXTxRCT_serial_port_enum port;
    IMXTxRCT_serial_speed_enum speed;
} IMXTxRCT_serial_settings;

typedef enum
{
    IMXTxRCT_MOTOR_M1 = 0,
    IMXTxRCT_MOTOR_M2 = 1,
    IMXTxRCT_MOTOR_M3 = 2,
} IMXTxRCT_motor_enum;

typedef struct
{
    double min;
    double max;
} IMXTxRCT_range;

typedef IMXTxRCT_range IMXTxRCT_settings_range[0x3];

typedef struct
{
    bool rct_configuration;
    double velocity;
    IMXTxRCT_settings_range range;
} IMXTxRCT_settings;



#endif // _IMXTxRCT_TC_H_
