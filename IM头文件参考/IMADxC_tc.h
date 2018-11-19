/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMADxC
* 文件名称 : IMADxC_tc.h
* 概要描述 :
*	IM组件IMADxC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMADxC_TC_H_
#define _IMADxC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <SMXA.h> 



/*-------------------------------- Defines -------------------------------*/
#define IMADxC_SERV_ADDR 	 "IMADxC " 
#define IMADxC_MAX_DRIVERS 	 0x14 



/*-------------------------- Enums and Structs ---------------------------*/

typedef char IMADxC_driver_info_struct_name[0x18];

typedef struct
{
    IMADxC_driver_info_struct_name name;
    SMXA_initStatus status;
    bool status_known;
} IMADxC_driver_info_struct;

typedef char IMADxC__add_driver_to_list_drivername[0x18];

typedef IMADxC_driver_info_struct IMADxC__get_drivers_status_driver_info[0x14];



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int IMADxC_add_driver_to_list(const IMADxC__add_driver_to_list_drivername *drivername);
int IMADxC_get_drivers_status(IMADxC__get_drivers_status_driver_info *driver_info);



#endif // _IMADxC_TC_H_
