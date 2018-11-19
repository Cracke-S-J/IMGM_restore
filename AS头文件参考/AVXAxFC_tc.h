/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AV
* 模块名称 : AVXAxFC
* 文件名称 : AVXAxFC_tc.h
* 概要描述 :
*	AV组件AVXAxFC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _AVXAxFC_TC_H_
#define _AVXAxFC_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/
#define AVXAxFC_PcsSource 	 0x24000000 
#define bool 	 0x3002D00 



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    AVXAxFC_PcsSourceOTAS = 0,
    AVXAxFC_PcsSourceServiceLaptop = 1,
    AVXAxFC_PcsSourceNone = 2,
} AVXAxFC_PcsSource;

typedef char AVXAxFC_CM_FC_struct_pcs_url_otas[0xA0];

typedef char AVXAxFC_CM_FC_struct_pcs_url_service_laptop[0xA0];

typedef char AVXAxFC_CM_FC_struct_download_Location[0xA0];

typedef char AVXAxFC_CM_FC_struct_communication[0xA0];

typedef char AVXAxFC_CM_FC_struct_home[0xA0];

typedef struct
{
    int set_time_to_get_assistance_screen;
    bool enable_get_assistance_screen_timer;
    int set_corrective_breakdown_limit_repair_time;
    int set_non_corrective_breakdown_limit_repair_time;
    int set_time_to_get_delay_reason_field;
    AVXAxFC_CM_FC_struct_pcs_url_otas pcs_url_otas;
    AVXAxFC_CM_FC_struct_pcs_url_service_laptop pcs_url_service_laptop;
    AVXAxFC_CM_FC_struct_download_Location download_Location;
    AVXAxFC_CM_FC_struct_communication communication;
    AVXAxFC_CM_FC_struct_home home;
    AVXAxFC_PcsSource pcs_source;
} AVXAxFC_CM_FC_struct;

typedef struct
{
    AVXAxFC_CM_FC_struct CM_settings;
} AVXAxFC_FACT_CONST_STRUCT;



#endif // _AVXAxFC_TC_H_
